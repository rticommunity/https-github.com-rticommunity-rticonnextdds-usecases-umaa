/*
 * (c) Copyright, Real-Time Innovations, 2020.  All rights reserved.
 * RTI grants Licensee a license to use, modify, compile, and create derivative
 * works of the software solely for use with RTI Connext DDS. Licensee may
 * redistribute copies of the software provided that all such copies are subject
 * to this license. The software is provided "as is", with no warranty of any
 * type, including any warranty for fitness for any purpose. RTI is under no
 * obligation to maintain or support the software. RTI shall not be liable for
 * any incidental or consequential damages arising out of the use or inability
 * to use the software.
 */

#include <iostream>

#include <rti/rti.hpp> // include all base plus extensions

#include "application.hpp"  // Argument parsing
#include "../build/src/umaa_consts.hpp" 

using namespace application;

// Include all rti namespaces. Done for easier legibility.
using namespace rti::all;


bool speed_comms;
bool anchor_comms;
bool mission_status;
bool anchor_up;

class SpeedReportListener
        : public NoOpDataReaderListener<DynamicData> {
   
    virtual void on_subscription_matched(DataReader<DynamicData> &reader, 
        const dds::core::status::SubscriptionMatchedStatus &status)
    {
        // current_count() returns an int, we are just casting it to a bool
        // as we are only looking to see if there is at least one writer
        speed_comms = status.current_count();

    }
};

class AnchorReportListener
        : public NoOpDataReaderListener<DynamicData> {
   
    virtual void on_subscription_matched(DataReader<DynamicData> &reader, 
        const dds::core::status::SubscriptionMatchedStatus &status)
    {
        anchor_comms = status.current_count();
    }
};


unsigned int process_speed_data(dds::sub::DataReader<DynamicData> &reader)
{
    // Take all samples.  Samples are loaned to application, loan is
    // returned when LoanedSamples destructor called.

    unsigned int samples_read = 0;
    dds::sub::LoanedSamples<DynamicData> samples = reader.take();
    for (const auto &sample : samples) {
        if (sample.info().valid()) {
            samples_read++;
            //std::cout << sample.data() << std::endl;

            // Process data here;

        }
    }

    return samples_read;
}

unsigned int process_anchor_data(dds::sub::DataReader<DynamicData> &reader)
{
    // Take all samples.  Samples are loaned to application, loan is
    // returned when LoanedSamples destructor called.

    unsigned int samples_read = 0;
    dds::sub::LoanedSamples<DynamicData> samples = reader.take();
    for (const auto &sample : samples) {
        if (sample.info().valid()) {
            samples_read++;

            // If ropeLengthPaidOut is 0, then the anchor is up
            anchor_up = !sample.data().value<double>("ropeLengthPaidOut");

        }
    }

    return samples_read;
}


void run_example(unsigned int domain_id, unsigned int sample_count)
{
    // We're going to configure the default QoS Provider to load our own xml
    // and to ignore the NDDS_QOS_PROFILES environment variable and the file
    // USER_QOS_PROFILES.xml
    // Reference:
    // https://community.rti.com/static/documentation/connext-dds/6.1.2/doc/api/connext_dds/api_cpp2/classdds_1_1core_1_1QosProvider.html#DefaultQosProvider
    // This allows us to control Logging through XML as needed
    QosProviderParams params;
    params.url_profile({ UMAA_COMPONENTS });
    params.ignore_environment_profile(true);
    params.ignore_user_profile(true);

    // To ensure that the new configuration takes effect before any other
    // profiles are loaded, set the new parameters before accessing
    // QosProvider::Default().
    default_qos_provider_params(params);

    // Create the QOS provider from the default.
    auto qos_provider = QosProvider::Default();


    // Create the participant as defined in the xml file.  This instantiates the
    // participant, registers the types, and creates the child publisher,
    // subscriber, reader and writer.
    DomainParticipant participant =
            qos_provider->create_participant_from_config(AUTONOMY);


    // Find the DataReaders defined in the xml
    auto speed_report_reader = find_datareader_by_name<DataReader<DynamicData>>(
                    participant,
                    SPEEDREPORTREADER);

    auto anchor_report_reader = find_datareader_by_name<DataReader<DynamicData>>(
                    participant,
                    ANCHORREPORTREADER);


    // Obtain the DataReader's Status Condition
    dds::core::cond::StatusCondition speed_status_condition(
            speed_report_reader);
    dds::core::cond::StatusCondition anchor_status_condition(
            anchor_report_reader);

    // Enable the 'data available' status.
    speed_status_condition.enabled_statuses(StatusMask::data_available());
    anchor_status_condition.enabled_statuses(StatusMask::data_available());

    // Associate a handler with the status condition. This will run when the
    // condition is triggered, in the context of the dispatch call (see below)
    unsigned int speed_samples_read = 0;
    speed_status_condition.extensions().handler(
            [&speed_report_reader, &speed_samples_read]() {
                speed_samples_read += process_speed_data(speed_report_reader);
            });

    unsigned int anchor_samples_read = 0;
    anchor_status_condition.extensions().handler(
            [&anchor_report_reader, &anchor_samples_read]() {
                anchor_samples_read += process_anchor_data(anchor_report_reader);
            });
    
  
    // Create a WaitSet and attach the StatusConditions
    dds::core::cond::WaitSet waitset;
    waitset += speed_status_condition;
    waitset += anchor_status_condition;

    

    // Create Status Mask for listener
    dds::core::status::StatusMask mask;

    // Enable all flags
    mask |= dds::core::status::StatusMask::all();

    // Remove the Data available flag as we handle in the waitset
    mask &= ~dds::core::status::StatusMask::data_available();


    // Set listeners
    auto speed_report_listener = std::make_shared<SpeedReportListener>();
    speed_report_reader.set_listener(speed_report_listener, mask);
    auto anchor_report_listener = std::make_shared<AnchorReportListener>();
    anchor_report_reader.set_listener(anchor_report_listener, mask);


    while (!shutdown_requested) {

         // Print out
        mission_status = anchor_comms && speed_comms && anchor_up;
        std::cout << "\033[0m------------------------------------------------" << std::endl;
        if (mission_status)
            std::cout << "\033[32mMISSION READY                              " << std::endl;
        else
            std::cout << "\033[31mMISSION FAULTED                            " << std::endl;
        if (speed_comms)
            std::cout << "\033[32mSPEED COMMS:  TRUE                         " << std::endl;
        else
            std::cout << "\033[31mSPEED COMMS:  FALSE                        " << std::endl;
        if(anchor_comms)
            std::cout << "\033[32mANCHOR COMMS: TRUE                         " << std::endl;
        else
            std::cout << "\033[31mANCHOR COMMS: FALSE                        " << std::endl;
        if (anchor_up)
            std::cout << "\033[32mANCHOR UP:    TRUE                         " << std::endl;
        else    
            std::cout << "\033[31mANCHOR UP:    FALSE                        " << std::endl;
        std::cout << "\033[0m------------------------------------------------" << std::endl;
        std::cout << "\033[6A"; // move back up




        // Dispatch will call the handlers associated to the WaitSet conditions
        // when they activate
        waitset.dispatch(dds::core::Duration(4));  // Wait up to 4s each time

    }
}

int main(int argc, char *argv[])
{
    // Parse arguments and handle control-C
    auto arguments = parse_arguments(argc, argv);
    if (arguments.parse_result == ParseReturn::exit) {
        return EXIT_SUCCESS;
    } else if (arguments.parse_result == ParseReturn::failure) {
        return EXIT_FAILURE;
    }
    setup_signal_handlers();

    // Sets Connext verbosity through cmd level to help debugging
    rti::config::Logger::instance().verbosity(arguments.verbosity);


    try {
        run_example(arguments.domain_id, arguments.sample_count);
    } catch (const std::exception &ex) {
        // This will catch DDS exceptions
        std::cerr << "Exception in run_example(): " << ex.what() << std::endl;
        return EXIT_FAILURE;
    }

    // Releases the memory used by the participant factory.  Optional at
    // application shutdown
    dds::domain::DomainParticipant::finalize_participant_factory();

    return EXIT_SUCCESS;
}
