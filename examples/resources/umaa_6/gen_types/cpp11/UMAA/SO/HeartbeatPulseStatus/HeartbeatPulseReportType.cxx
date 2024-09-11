

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from HeartbeatPulseReportType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#include <iosfwd>
#include <iomanip>

#ifndef NDDS_STANDALONE_TYPE
#include "rti/topic/cdr/Serialization.hpp"
#include "HeartbeatPulseReportTypePlugin.hpp"
#else
#include "rti/topic/cdr/SerializationHelpers.hpp"
#endif

#include "HeartbeatPulseReportType.hpp"

#include <rti/util/ostream_operators.hpp>

namespace UMAA {

    namespace SO {

        namespace HeartbeatPulseStatus {

            // ---- HeartbeatPulseReportType: 

            HeartbeatPulseReportType::HeartbeatPulseReportType() :
                m_heartBeat_ (0)  {

            }   

            HeartbeatPulseReportType::HeartbeatPulseReportType (int32_t heartBeat_,const ::UMAA::Common::Measurement::DateTime& timeStamp_,const ::UMAA::Common::IdentifierType& source_):
                m_heartBeat_(heartBeat_), 
                m_timeStamp_(timeStamp_), 
                m_source_(source_) {
            }

            void HeartbeatPulseReportType::swap(HeartbeatPulseReportType& other_)  noexcept 
            {
                using std::swap;
                swap(m_heartBeat_, other_.m_heartBeat_);
                swap(m_timeStamp_, other_.m_timeStamp_);
                swap(m_source_, other_.m_source_);
            }  

            bool HeartbeatPulseReportType::operator == (const HeartbeatPulseReportType& other_) const {
                if (m_heartBeat_ != other_.m_heartBeat_) {
                    return false;
                }
                if (m_timeStamp_ != other_.m_timeStamp_) {
                    return false;
                }
                if (m_source_ != other_.m_source_) {
                    return false;
                }
                return true;
            }

            bool HeartbeatPulseReportType::operator != (const HeartbeatPulseReportType& other_) const {
                return !this->operator ==(other_);
            }

            std::ostream& operator << (std::ostream& o,const HeartbeatPulseReportType& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                o <<"[";
                o << "heartBeat: " << sample.heartBeat ()<<", ";
                o << "timeStamp: " << sample.timeStamp ()<<", ";
                o << "source: " << sample.source ();
                o <<"]";
                return o;
            }

        } // namespace HeartbeatPulseStatus  

    } // namespace SO  

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
        struct native_type_code< ::UMAA::SO::HeartbeatPulseStatus::HeartbeatPulseReportType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member HeartbeatPulseReportType_g_tc_members[3]=
                {

                    {
                        (char *)"heartBeat",/* Member name */
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
                        (char *)"timeStamp",/* Member name */
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
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"source",/* Member name */
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
                        RTI_CDR_KEY_MEMBER , /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }
                };

                static DDS_TypeCode HeartbeatPulseReportType_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::SO::HeartbeatPulseStatus::HeartbeatPulseReportType", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        3, /* Number of members */
                        HeartbeatPulseReportType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for HeartbeatPulseReportType*/

                if (is_initialized) {
                    return &HeartbeatPulseReportType_g_tc;
                }

                is_initialized = RTI_TRUE;

                HeartbeatPulseReportType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                HeartbeatPulseReportType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::Count_AliasTag_t>::get().native();
                HeartbeatPulseReportType_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::DateTime>::get().native();
                HeartbeatPulseReportType_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::IdentifierType>::get().native();

                /* Initialize the values for member annotations. */
                HeartbeatPulseReportType_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_LONG;
                HeartbeatPulseReportType_g_tc_members[0]._annotations._defaultValue._u.long_value = 0;
                HeartbeatPulseReportType_g_tc_members[0]._annotations._minValue._d = RTI_XCDR_TK_LONG;
                HeartbeatPulseReportType_g_tc_members[0]._annotations._minValue._u.long_value = RTIXCdrLong_MIN;
                HeartbeatPulseReportType_g_tc_members[0]._annotations._maxValue._d = RTI_XCDR_TK_LONG;
                HeartbeatPulseReportType_g_tc_members[0]._annotations._maxValue._u.long_value = RTIXCdrLong_MAX;

                HeartbeatPulseReportType_g_tc._data._sampleAccessInfo = sample_access_info();
                HeartbeatPulseReportType_g_tc._data._typePlugin = type_plugin_info();    

                return &HeartbeatPulseReportType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                ::UMAA::SO::HeartbeatPulseStatus::HeartbeatPulseReportType *sample;

                static RTIXCdrMemberAccessInfo HeartbeatPulseReportType_g_memberAccessInfos[3] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo HeartbeatPulseReportType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &HeartbeatPulseReportType_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    ::UMAA::SO::HeartbeatPulseStatus::HeartbeatPulseReportType);
                if (sample == NULL) {
                    return NULL;
                }

                HeartbeatPulseReportType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->heartBeat() - (char *)sample);

                HeartbeatPulseReportType_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->timeStamp() - (char *)sample);

                HeartbeatPulseReportType_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->source() - (char *)sample);

                HeartbeatPulseReportType_g_sampleAccessInfo.memberAccessInfos = 
                HeartbeatPulseReportType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::SO::HeartbeatPulseStatus::HeartbeatPulseReportType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        HeartbeatPulseReportType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        HeartbeatPulseReportType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                HeartbeatPulseReportType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                HeartbeatPulseReportType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::SO::HeartbeatPulseStatus::HeartbeatPulseReportType >;

                HeartbeatPulseReportType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &HeartbeatPulseReportType_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin HeartbeatPulseReportType_g_typePlugin = 
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

                return &HeartbeatPulseReportType_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::StructType& dynamic_type< ::UMAA::SO::HeartbeatPulseStatus::HeartbeatPulseReportType >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::SO::HeartbeatPulseStatus::HeartbeatPulseReportType >::get())));
        }
    }
}

namespace dds { 
    namespace topic {
        void topic_type_support< ::UMAA::SO::HeartbeatPulseStatus::HeartbeatPulseReportType >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                ::UMAA::SO::HeartbeatPulseStatus::HeartbeatPulseReportTypePlugin_new,
                ::UMAA::SO::HeartbeatPulseStatus::HeartbeatPulseReportTypePlugin_delete);
        }

        std::vector<char>& topic_type_support< ::UMAA::SO::HeartbeatPulseStatus::HeartbeatPulseReportType >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const ::UMAA::SO::HeartbeatPulseStatus::HeartbeatPulseReportType& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = HeartbeatPulseReportTypePlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = HeartbeatPulseReportTypePlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< ::UMAA::SO::HeartbeatPulseStatus::HeartbeatPulseReportType >::from_cdr_buffer(::UMAA::SO::HeartbeatPulseStatus::HeartbeatPulseReportType& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = HeartbeatPulseReportTypePlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create ::UMAA::SO::HeartbeatPulseStatus::HeartbeatPulseReportType from cdr buffer");
        }

        void topic_type_support< ::UMAA::SO::HeartbeatPulseStatus::HeartbeatPulseReportType >::reset_sample(::UMAA::SO::HeartbeatPulseStatus::HeartbeatPulseReportType& sample) 
        {
            sample.heartBeat(0);
            ::rti::topic::reset_sample(sample.timeStamp());
            ::rti::topic::reset_sample(sample.source());
        }

        void topic_type_support< ::UMAA::SO::HeartbeatPulseStatus::HeartbeatPulseReportType >::allocate_sample(::UMAA::SO::HeartbeatPulseStatus::HeartbeatPulseReportType& sample, int, int) 
        {
            ::rti::topic::allocate_sample(sample.timeStamp(),  -1, -1);
            ::rti::topic::allocate_sample(sample.source(),  -1, -1);
        }
    }
}  

#endif // NDDS_STANDALONE_TYPE
