

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from BallastTankCommandReportType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#include <iosfwd>
#include <iomanip>

#ifndef NDDS_STANDALONE_TYPE
#include "rti/topic/cdr/Serialization.hpp"
#include "BallastTankCommandReportTypePlugin.hpp"
#else
#include "rti/topic/cdr/SerializationHelpers.hpp"
#endif

#include "BallastTankCommandReportType.hpp"

#include <rti/util/ostream_operators.hpp>

namespace UMAA {

    namespace EO {

        namespace BallastTank {

            // ---- BallastTankCommandReportType: 

            BallastTankCommandReportType::BallastTankCommandReportType()  {

            }   

            BallastTankCommandReportType::BallastTankCommandReportType (const ::UMAA::EO::BallastTank::BallastFillType& ballastFill_,const ::UMAA::Common::Measurement::NumericGUID& source_,const ::UMAA::Common::Measurement::DateTime& timeStamp_):
                m_ballastFill_(ballastFill_), 
                m_source_(source_), 
                m_timeStamp_(timeStamp_) {
            }

            void BallastTankCommandReportType::swap(BallastTankCommandReportType& other_)  noexcept 
            {
                using std::swap;
                swap(m_ballastFill_, other_.m_ballastFill_);
                swap(m_source_, other_.m_source_);
                swap(m_timeStamp_, other_.m_timeStamp_);
            }  

            bool BallastTankCommandReportType::operator == (const BallastTankCommandReportType& other_) const {
                if (m_ballastFill_ != other_.m_ballastFill_) {
                    return false;
                }
                if (m_source_ != other_.m_source_) {
                    return false;
                }
                if (m_timeStamp_ != other_.m_timeStamp_) {
                    return false;
                }
                return true;
            }

            bool BallastTankCommandReportType::operator != (const BallastTankCommandReportType& other_) const {
                return !this->operator ==(other_);
            }

            std::ostream& operator << (std::ostream& o,const BallastTankCommandReportType& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                o <<"[";
                o << "ballastFill: " << sample.ballastFill ()<<", ";
                o << "source: " << sample.source ()<<", ";
                o << "timeStamp: " << sample.timeStamp ();
                o <<"]";
                return o;
            }

        } // namespace BallastTank  

    } // namespace EO  

} // namespace UMAA  

#ifdef NDDS_STANDALONE_TYPE
namespace rti {
    namespace topic {
    }
}

#else
// --- Type traits: -------------------------------------------------

namespace rti { 
    namespace topic {

        template<>
        struct native_type_code< ::UMAA::EO::BallastTank::BallastTankCommandReportType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member BallastTankCommandReportType_g_tc_members[3]=
                {

                    {
                        (char *)"ballastFill",/* Member name */
                        {
                            0,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"source",/* Member name */
                        {
                            1,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_KEY_MEMBER , /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"timeStamp",/* Member name */
                        {
                            2,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }
                };

                static DDS_TypeCode BallastTankCommandReportType_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::EO::BallastTank::BallastTankCommandReportType", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        3, /* Number of members */
                        BallastTankCommandReportType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for BallastTankCommandReportType*/

                if (is_initialized) {
                    return &BallastTankCommandReportType_g_tc;
                }

                is_initialized = RTI_TRUE;

                BallastTankCommandReportType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                BallastTankCommandReportType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::EO::BallastTank::BallastFillType>::get().native();
                BallastTankCommandReportType_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::NumericGUID_AliasTag_t>::get().native();
                BallastTankCommandReportType_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::DateTime>::get().native();

                /* Initialize the values for member annotations. */

                BallastTankCommandReportType_g_tc._data._sampleAccessInfo = sample_access_info();
                BallastTankCommandReportType_g_tc._data._typePlugin = type_plugin_info();    

                return &BallastTankCommandReportType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                ::UMAA::EO::BallastTank::BallastTankCommandReportType *sample;

                static RTIXCdrMemberAccessInfo BallastTankCommandReportType_g_memberAccessInfos[3] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo BallastTankCommandReportType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &BallastTankCommandReportType_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    ::UMAA::EO::BallastTank::BallastTankCommandReportType);
                if (sample == NULL) {
                    return NULL;
                }

                BallastTankCommandReportType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->ballastFill() - (char *)sample);

                BallastTankCommandReportType_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->source() - (char *)sample);

                BallastTankCommandReportType_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->timeStamp() - (char *)sample);

                BallastTankCommandReportType_g_sampleAccessInfo.memberAccessInfos = 
                BallastTankCommandReportType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::EO::BallastTank::BallastTankCommandReportType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        BallastTankCommandReportType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        BallastTankCommandReportType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                BallastTankCommandReportType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                BallastTankCommandReportType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::EO::BallastTank::BallastTankCommandReportType >;

                BallastTankCommandReportType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &BallastTankCommandReportType_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin BallastTankCommandReportType_g_typePlugin = 
                {
                    NULL, /* serialize */
                    NULL, /* serialize_key */
                    NULL, /* deserialize_sample */
                    NULL, /* deserialize_key_sample */
                    NULL, /* skip */
                    NULL, /* get_serialized_sample_size */
                    NULL, /* get_serialized_sample_max_size_ex */
                    NULL, /* get_serialized_key_max_size_ex */
                    NULL, /* get_serialized_sample_min_size */
                    NULL, /* serialized_sample_to_key */
                    NULL,
                    NULL,
                    NULL,
                    NULL,
                    NULL
                };

                return &BallastTankCommandReportType_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::StructType& dynamic_type< ::UMAA::EO::BallastTank::BallastTankCommandReportType >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::EO::BallastTank::BallastTankCommandReportType >::get())));
        }
    }
}

namespace dds { 
    namespace topic {
        void topic_type_support< ::UMAA::EO::BallastTank::BallastTankCommandReportType >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                ::UMAA::EO::BallastTank::BallastTankCommandReportTypePlugin_new,
                ::UMAA::EO::BallastTank::BallastTankCommandReportTypePlugin_delete);
        }

        std::vector<char>& topic_type_support< ::UMAA::EO::BallastTank::BallastTankCommandReportType >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const ::UMAA::EO::BallastTank::BallastTankCommandReportType& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = BallastTankCommandReportTypePlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = BallastTankCommandReportTypePlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< ::UMAA::EO::BallastTank::BallastTankCommandReportType >::from_cdr_buffer(::UMAA::EO::BallastTank::BallastTankCommandReportType& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = BallastTankCommandReportTypePlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create ::UMAA::EO::BallastTank::BallastTankCommandReportType from cdr buffer");
        }

        void topic_type_support< ::UMAA::EO::BallastTank::BallastTankCommandReportType >::reset_sample(::UMAA::EO::BallastTank::BallastTankCommandReportType& sample) 
        {
            ::rti::topic::reset_sample(sample.ballastFill());
            ::rti::topic::reset_sample(sample.source());
            ::rti::topic::reset_sample(sample.timeStamp());
        }

        void topic_type_support< ::UMAA::EO::BallastTank::BallastTankCommandReportType >::allocate_sample(::UMAA::EO::BallastTank::BallastTankCommandReportType& sample, int, int) 
        {
            ::rti::topic::allocate_sample(sample.ballastFill(),  -1, -1);
            ::rti::topic::allocate_sample(sample.source(),  -1, -1);
            ::rti::topic::allocate_sample(sample.timeStamp(),  -1, -1);
        }
    }
}  

#endif // NDDS_STANDALONE_TYPE
