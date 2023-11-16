

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from WhistleControlCommandStatusType.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#include <iosfwd>
#include <iomanip>

#include "rti/topic/cdr/Serialization.hpp"

#include "WhistleControlCommandStatusType.hpp"
#include "WhistleControlCommandStatusTypePlugin.hpp"

#include <rti/util/ostream_operators.hpp>

namespace UMAA {

    namespace EO {

        namespace WhistleControl {

            // ---- WhistleControlCommandStatusType: 

            WhistleControlCommandStatusType::WhistleControlCommandStatusType() :
                m_commandStatus_(UMAA::Common::MaritimeEnumeration::CommandStatusEnumType::CommandStatusEnumType::FAILED) ,
                m_commandStatusReason_(UMAA::Common::MaritimeEnumeration::CommandStatusReasonEnumType::CommandStatusReasonEnumType::CANCELED) ,
                m_logMessage_ ("")  {
                    ::rti::core::fill_array( 
                        m_source_, 
                        ::rti::topic::cdr::alias_helper< UMAA::Common::Measurement::NumericGUID::value_type >::default_value());
                    ::rti::core::fill_array( 
                        m_sessionID_, 
                        ::rti::topic::cdr::alias_helper< UMAA::Common::Measurement::NumericGUID::value_type >::default_value());
            }   

            WhistleControlCommandStatusType::WhistleControlCommandStatusType (const UMAA::Common::Measurement::NumericGUID& source,const UMAA::Common::MaritimeEnumeration::CommandStatusEnumType::CommandStatusEnumType& commandStatus,const UMAA::Common::MaritimeEnumeration::CommandStatusReasonEnumType::CommandStatusReasonEnumType& commandStatusReason,const std::string& logMessage,const UMAA::Common::Measurement::NumericGUID& sessionID,const UMAA::Common::Measurement::DateTime& timeStamp):
                m_source_( source ),
                m_commandStatus_( commandStatus ),
                m_commandStatusReason_( commandStatusReason ),
                m_logMessage_( logMessage ),
                m_sessionID_( sessionID ),
                m_timeStamp_( timeStamp ) {
            }

            #ifdef RTI_CXX11_RVALUE_REFERENCES
            #ifdef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
            WhistleControlCommandStatusType::WhistleControlCommandStatusType(WhistleControlCommandStatusType&& other_) OMG_NOEXCEPT  :m_source_ (std::move(other_.m_source_))
            ,
            m_commandStatus_ (std::move(other_.m_commandStatus_))
            ,
            m_commandStatusReason_ (std::move(other_.m_commandStatusReason_))
            ,
            m_logMessage_ (std::move(other_.m_logMessage_))
            ,
            m_sessionID_ (std::move(other_.m_sessionID_))
            ,
            m_timeStamp_ (std::move(other_.m_timeStamp_))
            {
            } 

            WhistleControlCommandStatusType& WhistleControlCommandStatusType::operator=(WhistleControlCommandStatusType&&  other_) OMG_NOEXCEPT {
                WhistleControlCommandStatusType tmp(std::move(other_));
                swap(tmp); 
                return *this;
            }
            #endif
            #endif   

            void WhistleControlCommandStatusType::swap(WhistleControlCommandStatusType& other_)  OMG_NOEXCEPT 
            {
                using std::swap;
                swap(m_source_, other_.m_source_);
                swap(m_commandStatus_, other_.m_commandStatus_);
                swap(m_commandStatusReason_, other_.m_commandStatusReason_);
                swap(m_logMessage_, other_.m_logMessage_);
                swap(m_sessionID_, other_.m_sessionID_);
                swap(m_timeStamp_, other_.m_timeStamp_);
            }  

            bool WhistleControlCommandStatusType::operator == (const WhistleControlCommandStatusType& other_) const {
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
            bool WhistleControlCommandStatusType::operator != (const WhistleControlCommandStatusType& other_) const {
                return !this->operator ==(other_);
            }

            std::ostream& operator << (std::ostream& o,const WhistleControlCommandStatusType& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                o <<"[";
                o << "source: " << sample.source()<<", ";
                o << "commandStatus: " << sample.commandStatus()<<", ";
                o << "commandStatusReason: " << sample.commandStatusReason()<<", ";
                o << "logMessage: " << sample.logMessage()<<", ";
                o << "sessionID: " << sample.sessionID()<<", ";
                o << "timeStamp: " << sample.timeStamp() ;
                o <<"]";
                return o;
            }

        } // namespace WhistleControl  

    } // namespace EO  

} // namespace UMAA  

// --- Type traits: -------------------------------------------------

namespace rti { 
    namespace topic {

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct native_type_code< UMAA::EO::WhistleControl::WhistleControlCommandStatusType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode WhistleControlCommandStatusType_g_tc_logMessage_string;

                static DDS_TypeCode_Member WhistleControlCommandStatusType_g_tc_members[6]=
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

                static DDS_TypeCode WhistleControlCommandStatusType_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::EO::WhistleControl::WhistleControlCommandStatusType", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        6, /* Number of members */
                        WhistleControlCommandStatusType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for WhistleControlCommandStatusType*/

                if (is_initialized) {
                    return &WhistleControlCommandStatusType_g_tc;
                }

                WhistleControlCommandStatusType_g_tc_logMessage_string = initialize_string_typecode((4095L));

                WhistleControlCommandStatusType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                WhistleControlCommandStatusType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::NumericGUID_AliasTag_t>::get().native();
                WhistleControlCommandStatusType_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::MaritimeEnumeration::CommandStatusEnumType::CommandStatusEnumType>::get().native();
                WhistleControlCommandStatusType_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::MaritimeEnumeration::CommandStatusReasonEnumType::CommandStatusReasonEnumType>::get().native();
                WhistleControlCommandStatusType_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&WhistleControlCommandStatusType_g_tc_logMessage_string;
                WhistleControlCommandStatusType_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::NumericGUID_AliasTag_t>::get().native();
                WhistleControlCommandStatusType_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::DateTime>::get().native();

                /* Initialize the values for member annotations. */

                WhistleControlCommandStatusType_g_tc_members[1]._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
                WhistleControlCommandStatusType_g_tc_members[1]._annotations._defaultValue._u.enumerated_value = 0;

                WhistleControlCommandStatusType_g_tc_members[2]._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
                WhistleControlCommandStatusType_g_tc_members[2]._annotations._defaultValue._u.enumerated_value = 0;

                WhistleControlCommandStatusType_g_tc_members[3]._annotations._defaultValue._d = RTI_XCDR_TK_STRING;
                WhistleControlCommandStatusType_g_tc_members[3]._annotations._defaultValue._u.string_value = (DDS_Char *) "";

                WhistleControlCommandStatusType_g_tc._data._sampleAccessInfo = sample_access_info();
                WhistleControlCommandStatusType_g_tc._data._typePlugin = type_plugin_info();    

                is_initialized = RTI_TRUE;

                return &WhistleControlCommandStatusType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                UMAA::EO::WhistleControl::WhistleControlCommandStatusType *sample;

                static RTIXCdrMemberAccessInfo WhistleControlCommandStatusType_g_memberAccessInfos[6] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo WhistleControlCommandStatusType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &WhistleControlCommandStatusType_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    UMAA::EO::WhistleControl::WhistleControlCommandStatusType);
                if (sample == NULL) {
                    return NULL;
                }

                WhistleControlCommandStatusType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->source() - (char *)sample);

                WhistleControlCommandStatusType_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->commandStatus() - (char *)sample);

                WhistleControlCommandStatusType_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->commandStatusReason() - (char *)sample);

                WhistleControlCommandStatusType_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->logMessage() - (char *)sample);

                WhistleControlCommandStatusType_g_memberAccessInfos[4].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->sessionID() - (char *)sample);

                WhistleControlCommandStatusType_g_memberAccessInfos[5].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->timeStamp() - (char *)sample);

                WhistleControlCommandStatusType_g_sampleAccessInfo.memberAccessInfos = 
                WhistleControlCommandStatusType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(UMAA::EO::WhistleControl::WhistleControlCommandStatusType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        WhistleControlCommandStatusType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        WhistleControlCommandStatusType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                WhistleControlCommandStatusType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                WhistleControlCommandStatusType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< UMAA::EO::WhistleControl::WhistleControlCommandStatusType >;

                WhistleControlCommandStatusType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &WhistleControlCommandStatusType_g_sampleAccessInfo;
            }

            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin WhistleControlCommandStatusType_g_typePlugin = 
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
                    NULL
                };

                return &WhistleControlCommandStatusType_g_typePlugin;
            }
        }; // native_type_code
        #endif

        const ::dds::core::xtypes::StructType& dynamic_type< UMAA::EO::WhistleControl::WhistleControlCommandStatusType >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< UMAA::EO::WhistleControl::WhistleControlCommandStatusType >::get())));
        }

    }
}

namespace dds { 
    namespace topic {
        void topic_type_support< UMAA::EO::WhistleControl::WhistleControlCommandStatusType >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                UMAA::EO::WhistleControl::WhistleControlCommandStatusTypePlugin_new,
                UMAA::EO::WhistleControl::WhistleControlCommandStatusTypePlugin_delete);
        }

        std::vector<char>& topic_type_support< UMAA::EO::WhistleControl::WhistleControlCommandStatusType >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const UMAA::EO::WhistleControl::WhistleControlCommandStatusType& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = WhistleControlCommandStatusTypePlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = WhistleControlCommandStatusTypePlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< UMAA::EO::WhistleControl::WhistleControlCommandStatusType >::from_cdr_buffer(UMAA::EO::WhistleControl::WhistleControlCommandStatusType& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = WhistleControlCommandStatusTypePlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create UMAA::EO::WhistleControl::WhistleControlCommandStatusType from cdr buffer");
        }

        void topic_type_support< UMAA::EO::WhistleControl::WhistleControlCommandStatusType >::reset_sample(UMAA::EO::WhistleControl::WhistleControlCommandStatusType& sample) 
        {
            ::rti::topic::reset_sample(sample.source());
            sample.commandStatus(UMAA::Common::MaritimeEnumeration::CommandStatusEnumType::CommandStatusEnumType::FAILED);
            sample.commandStatusReason(UMAA::Common::MaritimeEnumeration::CommandStatusReasonEnumType::CommandStatusReasonEnumType::CANCELED);
            sample.logMessage("");
            ::rti::topic::reset_sample(sample.sessionID());
            ::rti::topic::reset_sample(sample.timeStamp());
        }

        void topic_type_support< UMAA::EO::WhistleControl::WhistleControlCommandStatusType >::allocate_sample(UMAA::EO::WhistleControl::WhistleControlCommandStatusType& sample, int, int) 
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

