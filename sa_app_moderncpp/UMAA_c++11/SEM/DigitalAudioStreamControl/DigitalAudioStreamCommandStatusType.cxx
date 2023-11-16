

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from DigitalAudioStreamCommandStatusType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#include <iosfwd>
#include <iomanip>

#ifndef NDDS_STANDALONE_TYPE
#include "rti/topic/cdr/Serialization.hpp"
#include "DigitalAudioStreamCommandStatusTypePlugin.hpp"
#else
#include "rti/topic/cdr/SerializationHelpers.hpp"
#endif

#include "DigitalAudioStreamCommandStatusType.hpp"

#include <rti/util/ostream_operators.hpp>

namespace UMAA {

    namespace SEM {

        namespace DigitalAudioStreamControl {

            // ---- DigitalAudioStreamCommandStatusType: 

            DigitalAudioStreamCommandStatusType::DigitalAudioStreamCommandStatusType() :
                m_commandStatus_(UMAA::Common::MaritimeEnumeration::CommandStatusEnumType::CommandStatusEnumType::FAILED) ,
                m_commandStatusReason_(UMAA::Common::MaritimeEnumeration::CommandStatusReasonEnumType::CommandStatusReasonEnumType::CANCELED) ,
                m_logMessage_ ("")  {

            }   

            DigitalAudioStreamCommandStatusType::DigitalAudioStreamCommandStatusType (const ::UMAA::Common::Measurement::NumericGUID& source_,const ::UMAA::Common::MaritimeEnumeration::CommandStatusEnumType::CommandStatusEnumType& commandStatus_,const ::UMAA::Common::MaritimeEnumeration::CommandStatusReasonEnumType::CommandStatusReasonEnumType& commandStatusReason_,const std::string& logMessage_,const ::UMAA::Common::Measurement::NumericGUID& sessionID_,const ::UMAA::Common::Measurement::DateTime& timeStamp_):
                m_source_(source_), 
                m_commandStatus_(commandStatus_), 
                m_commandStatusReason_(commandStatusReason_), 
                m_logMessage_(logMessage_), 
                m_sessionID_(sessionID_), 
                m_timeStamp_(timeStamp_) {
            }

            void DigitalAudioStreamCommandStatusType::swap(DigitalAudioStreamCommandStatusType& other_)  noexcept 
            {
                using std::swap;
                swap(m_source_, other_.m_source_);
                swap(m_commandStatus_, other_.m_commandStatus_);
                swap(m_commandStatusReason_, other_.m_commandStatusReason_);
                swap(m_logMessage_, other_.m_logMessage_);
                swap(m_sessionID_, other_.m_sessionID_);
                swap(m_timeStamp_, other_.m_timeStamp_);
            }  

            bool DigitalAudioStreamCommandStatusType::operator == (const DigitalAudioStreamCommandStatusType& other_) const {
                if (m_source_ != other_.m_source_) {
                    return false;
                }
                if (m_commandStatus_ != other_.m_commandStatus_) {
                    return false;
                }
                if (m_commandStatusReason_ != other_.m_commandStatusReason_) {
                    return false;
                }
                if (m_logMessage_ != other_.m_logMessage_) {
                    return false;
                }
                if (m_sessionID_ != other_.m_sessionID_) {
                    return false;
                }
                if (m_timeStamp_ != other_.m_timeStamp_) {
                    return false;
                }
                return true;
            }

            bool DigitalAudioStreamCommandStatusType::operator != (const DigitalAudioStreamCommandStatusType& other_) const {
                return !this->operator ==(other_);
            }

            std::ostream& operator << (std::ostream& o,const DigitalAudioStreamCommandStatusType& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                o <<"[";
                o << "source: " << sample.source ()<<", ";
                o << "commandStatus: " << sample.commandStatus ()<<", ";
                o << "commandStatusReason: " << sample.commandStatusReason ()<<", ";
                o << "logMessage: " << sample.logMessage ()<<", ";
                o << "sessionID: " << sample.sessionID ()<<", ";
                o << "timeStamp: " << sample.timeStamp ();
                o <<"]";
                return o;
            }

        } // namespace DigitalAudioStreamControl  

    } // namespace SEM  

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
        struct native_type_code< ::UMAA::SEM::DigitalAudioStreamControl::DigitalAudioStreamCommandStatusType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode DigitalAudioStreamCommandStatusType_g_tc_logMessage_string;

                static DDS_TypeCode_Member DigitalAudioStreamCommandStatusType_g_tc_members[6]=
                {

                    {
                        (char *)"source",/* Member name */
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
                        RTI_CDR_KEY_MEMBER , /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"commandStatus",/* Member name */
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
                        (char *)"commandStatusReason",/* Member name */
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
                    }, 
                    {
                        (char *)"logMessage",/* Member name */
                        {
                            3,/* Representation ID */
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
                        (char *)"sessionID",/* Member name */
                        {
                            4,/* Representation ID */
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
                            5,/* Representation ID */
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

                static DDS_TypeCode DigitalAudioStreamCommandStatusType_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::SEM::DigitalAudioStreamControl::DigitalAudioStreamCommandStatusType", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        6, /* Number of members */
                        DigitalAudioStreamCommandStatusType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for DigitalAudioStreamCommandStatusType*/

                if (is_initialized) {
                    return &DigitalAudioStreamCommandStatusType_g_tc;
                }

                is_initialized = RTI_TRUE;

                DigitalAudioStreamCommandStatusType_g_tc_logMessage_string = initialize_string_typecode((4095L));

                DigitalAudioStreamCommandStatusType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                DigitalAudioStreamCommandStatusType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::NumericGUID_AliasTag_t>::get().native();
                DigitalAudioStreamCommandStatusType_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::MaritimeEnumeration::CommandStatusEnumType::CommandStatusEnumType>::get().native();
                DigitalAudioStreamCommandStatusType_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::MaritimeEnumeration::CommandStatusReasonEnumType::CommandStatusReasonEnumType>::get().native();
                DigitalAudioStreamCommandStatusType_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&DigitalAudioStreamCommandStatusType_g_tc_logMessage_string;
                DigitalAudioStreamCommandStatusType_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::NumericGUID_AliasTag_t>::get().native();
                DigitalAudioStreamCommandStatusType_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::DateTime>::get().native();

                /* Initialize the values for member annotations. */
                DigitalAudioStreamCommandStatusType_g_tc_members[1]._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
                DigitalAudioStreamCommandStatusType_g_tc_members[1]._annotations._defaultValue._u.enumerated_value = 0;
                DigitalAudioStreamCommandStatusType_g_tc_members[2]._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
                DigitalAudioStreamCommandStatusType_g_tc_members[2]._annotations._defaultValue._u.enumerated_value = 0;
                DigitalAudioStreamCommandStatusType_g_tc_members[3]._annotations._defaultValue._d = RTI_XCDR_TK_STRING;
                DigitalAudioStreamCommandStatusType_g_tc_members[3]._annotations._defaultValue._u.string_value = (DDS_Char *) "";

                DigitalAudioStreamCommandStatusType_g_tc._data._sampleAccessInfo = sample_access_info();
                DigitalAudioStreamCommandStatusType_g_tc._data._typePlugin = type_plugin_info();    

                return &DigitalAudioStreamCommandStatusType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                ::UMAA::SEM::DigitalAudioStreamControl::DigitalAudioStreamCommandStatusType *sample;

                static RTIXCdrMemberAccessInfo DigitalAudioStreamCommandStatusType_g_memberAccessInfos[6] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo DigitalAudioStreamCommandStatusType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &DigitalAudioStreamCommandStatusType_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    ::UMAA::SEM::DigitalAudioStreamControl::DigitalAudioStreamCommandStatusType);
                if (sample == NULL) {
                    return NULL;
                }

                DigitalAudioStreamCommandStatusType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->source() - (char *)sample);

                DigitalAudioStreamCommandStatusType_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->commandStatus() - (char *)sample);

                DigitalAudioStreamCommandStatusType_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->commandStatusReason() - (char *)sample);

                DigitalAudioStreamCommandStatusType_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->logMessage() - (char *)sample);

                DigitalAudioStreamCommandStatusType_g_memberAccessInfos[4].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->sessionID() - (char *)sample);

                DigitalAudioStreamCommandStatusType_g_memberAccessInfos[5].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->timeStamp() - (char *)sample);

                DigitalAudioStreamCommandStatusType_g_sampleAccessInfo.memberAccessInfos = 
                DigitalAudioStreamCommandStatusType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::SEM::DigitalAudioStreamControl::DigitalAudioStreamCommandStatusType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        DigitalAudioStreamCommandStatusType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        DigitalAudioStreamCommandStatusType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                DigitalAudioStreamCommandStatusType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                DigitalAudioStreamCommandStatusType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::SEM::DigitalAudioStreamControl::DigitalAudioStreamCommandStatusType >;

                DigitalAudioStreamCommandStatusType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &DigitalAudioStreamCommandStatusType_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin DigitalAudioStreamCommandStatusType_g_typePlugin = 
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

                return &DigitalAudioStreamCommandStatusType_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::StructType& dynamic_type< ::UMAA::SEM::DigitalAudioStreamControl::DigitalAudioStreamCommandStatusType >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::SEM::DigitalAudioStreamControl::DigitalAudioStreamCommandStatusType >::get())));
        }
    }
}

namespace dds { 
    namespace topic {
        void topic_type_support< ::UMAA::SEM::DigitalAudioStreamControl::DigitalAudioStreamCommandStatusType >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                ::UMAA::SEM::DigitalAudioStreamControl::DigitalAudioStreamCommandStatusTypePlugin_new,
                ::UMAA::SEM::DigitalAudioStreamControl::DigitalAudioStreamCommandStatusTypePlugin_delete);
        }

        std::vector<char>& topic_type_support< ::UMAA::SEM::DigitalAudioStreamControl::DigitalAudioStreamCommandStatusType >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const ::UMAA::SEM::DigitalAudioStreamControl::DigitalAudioStreamCommandStatusType& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = DigitalAudioStreamCommandStatusTypePlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = DigitalAudioStreamCommandStatusTypePlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< ::UMAA::SEM::DigitalAudioStreamControl::DigitalAudioStreamCommandStatusType >::from_cdr_buffer(::UMAA::SEM::DigitalAudioStreamControl::DigitalAudioStreamCommandStatusType& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = DigitalAudioStreamCommandStatusTypePlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create ::UMAA::SEM::DigitalAudioStreamControl::DigitalAudioStreamCommandStatusType from cdr buffer");
        }

        void topic_type_support< ::UMAA::SEM::DigitalAudioStreamControl::DigitalAudioStreamCommandStatusType >::reset_sample(::UMAA::SEM::DigitalAudioStreamControl::DigitalAudioStreamCommandStatusType& sample) 
        {
            ::rti::topic::reset_sample(sample.source());
            sample.commandStatus(UMAA::Common::MaritimeEnumeration::CommandStatusEnumType::CommandStatusEnumType::FAILED);
            sample.commandStatusReason(UMAA::Common::MaritimeEnumeration::CommandStatusReasonEnumType::CommandStatusReasonEnumType::CANCELED);
            sample.logMessage("");
            ::rti::topic::reset_sample(sample.sessionID());
            ::rti::topic::reset_sample(sample.timeStamp());
        }

        void topic_type_support< ::UMAA::SEM::DigitalAudioStreamControl::DigitalAudioStreamCommandStatusType >::allocate_sample(::UMAA::SEM::DigitalAudioStreamControl::DigitalAudioStreamCommandStatusType& sample, int, int) 
        {
            ::rti::topic::allocate_sample(sample.source(),  -1, -1);
            ::rti::topic::allocate_sample(sample.commandStatus(),  -1, -1);
            ::rti::topic::allocate_sample(sample.commandStatusReason(),  -1, -1);
            ::rti::topic::allocate_sample(sample.logMessage(),  -1, 4095L);
            ::rti::topic::allocate_sample(sample.sessionID(),  -1, -1);
            ::rti::topic::allocate_sample(sample.timeStamp(),  -1, -1);
        }
    }
}  

#endif // NDDS_STANDALONE_TYPE
