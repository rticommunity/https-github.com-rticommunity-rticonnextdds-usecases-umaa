

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from CommsChannelAddMessageConfigCommandType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#include <iosfwd>
#include <iomanip>

#ifndef NDDS_STANDALONE_TYPE
#include "rti/topic/cdr/Serialization.hpp"
#include "CommsChannelAddMessageConfigCommandTypePlugin.hpp"
#else
#include "rti/topic/cdr/SerializationHelpers.hpp"
#endif

#include "CommsChannelAddMessageConfigCommandType.hpp"

#include <rti/util/ostream_operators.hpp>

namespace UMAA {

    namespace CO {

        namespace CommsChannelConfig {

            // ---- CommsChannelAddMessageConfigCommandType: 

            CommsChannelAddMessageConfigCommandType::CommsChannelAddMessageConfigCommandType()  {

            }   

            CommsChannelAddMessageConfigCommandType::CommsChannelAddMessageConfigCommandType (const ::UMAA::CO::CommsChannel::CommsChannelMessageConfigType& messageConfig_,const ::UMAA::Common::Measurement::DateTime& timeStamp_,const ::UMAA::Common::IdentifierType& source_,const ::UMAA::Common::Measurement::NumericGUID& sessionID_,const ::UMAA::Common::IdentifierType& destination_):
                m_messageConfig_(messageConfig_), 
                m_timeStamp_(timeStamp_), 
                m_source_(source_), 
                m_sessionID_(sessionID_), 
                m_destination_(destination_) {
            }

            void CommsChannelAddMessageConfigCommandType::swap(CommsChannelAddMessageConfigCommandType& other_)  noexcept 
            {
                using std::swap;
                swap(m_messageConfig_, other_.m_messageConfig_);
                swap(m_timeStamp_, other_.m_timeStamp_);
                swap(m_source_, other_.m_source_);
                swap(m_sessionID_, other_.m_sessionID_);
                swap(m_destination_, other_.m_destination_);
            }  

            bool CommsChannelAddMessageConfigCommandType::operator == (const CommsChannelAddMessageConfigCommandType& other_) const {
                if (m_messageConfig_ != other_.m_messageConfig_) {
                    return false;
                }
                if (m_timeStamp_ != other_.m_timeStamp_) {
                    return false;
                }
                if (m_source_ != other_.m_source_) {
                    return false;
                }
                if (m_sessionID_ != other_.m_sessionID_) {
                    return false;
                }
                if (m_destination_ != other_.m_destination_) {
                    return false;
                }
                return true;
            }

            bool CommsChannelAddMessageConfigCommandType::operator != (const CommsChannelAddMessageConfigCommandType& other_) const {
                return !this->operator ==(other_);
            }

            std::ostream& operator << (std::ostream& o,const CommsChannelAddMessageConfigCommandType& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                o <<"[";
                o << "messageConfig: " << sample.messageConfig ()<<", ";
                o << "timeStamp: " << sample.timeStamp ()<<", ";
                o << "source: " << sample.source ()<<", ";
                o << "sessionID: " << sample.sessionID ()<<", ";
                o << "destination: " << sample.destination ();
                o <<"]";
                return o;
            }

        } // namespace CommsChannelConfig  

    } // namespace CO  

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
        struct native_type_code< ::UMAA::CO::CommsChannelConfig::CommsChannelAddMessageConfigCommandType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member CommsChannelAddMessageConfigCommandType_g_tc_members[5]=
                {

                    {
                        (char *)"messageConfig",/* Member name */
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
                    }, 
                    {
                        (char *)"sessionID",/* Member name */
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
                        RTI_CDR_KEY_MEMBER , /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"destination",/* Member name */
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
                    }
                };

                static DDS_TypeCode CommsChannelAddMessageConfigCommandType_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::CO::CommsChannelConfig::CommsChannelAddMessageConfigCommandType", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        5, /* Number of members */
                        CommsChannelAddMessageConfigCommandType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for CommsChannelAddMessageConfigCommandType*/

                if (is_initialized) {
                    return &CommsChannelAddMessageConfigCommandType_g_tc;
                }

                is_initialized = RTI_TRUE;

                CommsChannelAddMessageConfigCommandType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                CommsChannelAddMessageConfigCommandType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::CO::CommsChannel::CommsChannelMessageConfigType>::get().native();
                CommsChannelAddMessageConfigCommandType_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::DateTime>::get().native();
                CommsChannelAddMessageConfigCommandType_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::IdentifierType>::get().native();
                CommsChannelAddMessageConfigCommandType_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::NumericGUID_AliasTag_t>::get().native();
                CommsChannelAddMessageConfigCommandType_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::IdentifierType>::get().native();

                /* Initialize the values for member annotations. */

                CommsChannelAddMessageConfigCommandType_g_tc._data._sampleAccessInfo = sample_access_info();
                CommsChannelAddMessageConfigCommandType_g_tc._data._typePlugin = type_plugin_info();    

                return &CommsChannelAddMessageConfigCommandType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                ::UMAA::CO::CommsChannelConfig::CommsChannelAddMessageConfigCommandType *sample;

                static RTIXCdrMemberAccessInfo CommsChannelAddMessageConfigCommandType_g_memberAccessInfos[5] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo CommsChannelAddMessageConfigCommandType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &CommsChannelAddMessageConfigCommandType_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    ::UMAA::CO::CommsChannelConfig::CommsChannelAddMessageConfigCommandType);
                if (sample == NULL) {
                    return NULL;
                }

                CommsChannelAddMessageConfigCommandType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->messageConfig() - (char *)sample);

                CommsChannelAddMessageConfigCommandType_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->timeStamp() - (char *)sample);

                CommsChannelAddMessageConfigCommandType_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->source() - (char *)sample);

                CommsChannelAddMessageConfigCommandType_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->sessionID() - (char *)sample);

                CommsChannelAddMessageConfigCommandType_g_memberAccessInfos[4].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->destination() - (char *)sample);

                CommsChannelAddMessageConfigCommandType_g_sampleAccessInfo.memberAccessInfos = 
                CommsChannelAddMessageConfigCommandType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::CO::CommsChannelConfig::CommsChannelAddMessageConfigCommandType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        CommsChannelAddMessageConfigCommandType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        CommsChannelAddMessageConfigCommandType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                CommsChannelAddMessageConfigCommandType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                CommsChannelAddMessageConfigCommandType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::CO::CommsChannelConfig::CommsChannelAddMessageConfigCommandType >;

                CommsChannelAddMessageConfigCommandType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &CommsChannelAddMessageConfigCommandType_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin CommsChannelAddMessageConfigCommandType_g_typePlugin = 
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

                return &CommsChannelAddMessageConfigCommandType_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::StructType& dynamic_type< ::UMAA::CO::CommsChannelConfig::CommsChannelAddMessageConfigCommandType >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::CO::CommsChannelConfig::CommsChannelAddMessageConfigCommandType >::get())));
        }
    }
}

namespace dds { 
    namespace topic {
        void topic_type_support< ::UMAA::CO::CommsChannelConfig::CommsChannelAddMessageConfigCommandType >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                ::UMAA::CO::CommsChannelConfig::CommsChannelAddMessageConfigCommandTypePlugin_new,
                ::UMAA::CO::CommsChannelConfig::CommsChannelAddMessageConfigCommandTypePlugin_delete);
        }

        std::vector<char>& topic_type_support< ::UMAA::CO::CommsChannelConfig::CommsChannelAddMessageConfigCommandType >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const ::UMAA::CO::CommsChannelConfig::CommsChannelAddMessageConfigCommandType& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = CommsChannelAddMessageConfigCommandTypePlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = CommsChannelAddMessageConfigCommandTypePlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< ::UMAA::CO::CommsChannelConfig::CommsChannelAddMessageConfigCommandType >::from_cdr_buffer(::UMAA::CO::CommsChannelConfig::CommsChannelAddMessageConfigCommandType& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = CommsChannelAddMessageConfigCommandTypePlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create ::UMAA::CO::CommsChannelConfig::CommsChannelAddMessageConfigCommandType from cdr buffer");
        }

        void topic_type_support< ::UMAA::CO::CommsChannelConfig::CommsChannelAddMessageConfigCommandType >::reset_sample(::UMAA::CO::CommsChannelConfig::CommsChannelAddMessageConfigCommandType& sample) 
        {
            ::rti::topic::reset_sample(sample.messageConfig());
            ::rti::topic::reset_sample(sample.timeStamp());
            ::rti::topic::reset_sample(sample.source());
            ::rti::topic::reset_sample(sample.sessionID());
            ::rti::topic::reset_sample(sample.destination());
        }

        void topic_type_support< ::UMAA::CO::CommsChannelConfig::CommsChannelAddMessageConfigCommandType >::allocate_sample(::UMAA::CO::CommsChannelConfig::CommsChannelAddMessageConfigCommandType& sample, int, int) 
        {
            ::rti::topic::allocate_sample(sample.messageConfig(),  -1, -1);
            ::rti::topic::allocate_sample(sample.timeStamp(),  -1, -1);
            ::rti::topic::allocate_sample(sample.source(),  -1, -1);
            ::rti::topic::allocate_sample(sample.sessionID(),  -1, -1);
            ::rti::topic::allocate_sample(sample.destination(),  -1, -1);
        }
    }
}  

#endif // NDDS_STANDALONE_TYPE
