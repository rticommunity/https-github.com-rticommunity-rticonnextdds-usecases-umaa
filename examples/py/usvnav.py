# (c) 2024 Copyright, Real-Time Innovations, Inc.  All rights reserved.
# RTI grants Licensee a license to use, modify, compile, and create derivative
# works of the Software.  Licensee has the right to distribute object form only
# for use with RTI products.  The Software is provided "as is", with no warranty
# of any type, including any warranty for fitness for any purpose. RTI is under
# no obligation to maintain or support the Software.  RTI shall not be liable for
# any incidental or consequential damages arising out of the use or inability to
# use the software.

import rti.connextdds as dds
from rti.types.builtin import String
import time
import argparse
import random

from LogReportType import *
from HealthReportType import *
from SpeedReportType import *
from GlobalPoseReportType import *
from VelocityReportType import *


def get_type_name(type):
    # Get full type name from module
    type_str = idl.get_type_support(type).type_name

    # Strip out namespaces and use as Type Name
    # Workaround for issue registering types with same names as topics (CORE-15111)
    # Typenames need to correllate with domain.xml
    type_split = (type_str.rsplit('::', 1)[1])
    return type_split


def publisher_main():

    print("Registering Types")
    
    # Need to Register all types in Component before creating Domain Participant
    dds.DomainParticipant.register_idl_type(
        UMAA_SO_LogReport_LogReportType, get_type_name(
            UMAA_SO_LogReport_LogReportType))
    
    dds.DomainParticipant.register_idl_type(
        UMAA_SO_HealthReport_HealthReportType, get_type_name(
            UMAA_SO_HealthReport_HealthReportType))
    
    dds.DomainParticipant.register_idl_type(
        UMAA_SA_GlobalPoseStatus_GlobalPoseReportType, get_type_name(
            UMAA_SA_GlobalPoseStatus_GlobalPoseReportType))
    
    dds.DomainParticipant.register_idl_type(
        UMAA_SA_VelocityStatus_VelocityReportType, get_type_name(
            UMAA_SA_VelocityStatus_VelocityReportType))
    
    dds.DomainParticipant.register_idl_type(
        UMAA_SA_SpeedStatus_SpeedReportType, get_type_name(
            UMAA_SA_SpeedStatus_SpeedReportType))

    # All of our XML files are being passed in by the NDDS_QOS_PROFILES env variable
    qos_provider = dds.QosProvider("")

    print("Creating Participant")
    # Lookup the Participant we defined in our XML file resources/components/usvnav.xml
    participant = qos_provider.create_participant_from_config(
        "umaa_components_lib::usvnav")

    # Lookup the Writers
    print("Looking up writers")
    speed_report_writer = dds.DataWriter(
        participant.find_datawriter("pub::SpeedReportType"))
    
    globalpose_report_writer = dds.DataWriter(
        participant.find_datawriter("pub::GlobalPoseReportType"))
    
    velocity_report_writer = dds.DataWriter(
        participant.find_datawriter("pub::VelocityReportType"))

    # Create samples
    speed_report_sample = UMAA_SA_SpeedStatus_SpeedReportType()
    globalpose_report_sample = UMAA_SA_GlobalPoseStatus_GlobalPoseReportType()
    velocity_report_sample = UMAA_SA_VelocityStatus_VelocityReportType()

    # Write data samples in a loop
    while (True):
        time.sleep(1)

        # Set values
        speed_report_sample.speedThroughWater = random.randrange(0, 10, 2)

        # Write Speed
        speed_report_writer.write(speed_report_sample)
        print(f'Writing Speed Data: {speed_report_sample.speedThroughWater}')

        # Set values
        globalpose_report_sample.position.geodeticLatitude = 42.361145
        globalpose_report_sample.position.geodeticLongitude = -71.057083

        # Write Global Pose sample
        globalpose_report_writer.write(globalpose_report_sample)
        print(
            f'Writing GlobalPose data Lat: {globalpose_report_sample.position.geodeticLatitude }')
        print(
            f'Writing GlobalPose data Long: {globalpose_report_sample.position.geodeticLongitude}')

        # Set values
        velocity_report_sample.velocity.eastSpeed = random.randrange(0, 20, 2)
        velocity_report_sample.velocity.northSpeed = random.randrange(0, 20, 2)

        # Write Velocity sample
        velocity_report_writer.write(velocity_report_sample)
        print(
            f'Writing Velocity data eastSpeed: {velocity_report_sample.velocity.eastSpeed}')
        print(
            f'Writing Velocity data northSpeed: {velocity_report_sample.velocity.northSpeed}')


if __name__ == "__main__":
    parser = argparse.ArgumentParser(
        description="UMAA USV NAV Component"
    )
    print("UMAA USV NAV Component. \nReference example that Publishes the necessary topics to be consumed by the AutoPilot component.\n\n")

    args = parser.parse_args()

    publisher_main()
