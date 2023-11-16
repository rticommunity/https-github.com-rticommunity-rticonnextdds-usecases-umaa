

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from MissionStatusType.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#include <iosfwd>
#include <iomanip>

#include "rti/topic/cdr/Serialization.hpp"

#include "MissionStatusType.hpp"
#include "MissionStatusTypePlugin.hpp"

#include <rti/util/ostream_operators.hpp>

namespace UMAA {

    namespace MM {

        namespace MissionExecutionStatus {

            // ---- MissionStatusType: 

            MissionStatusType::MissionStatusType() :
                m_feedback_ ("") ,
                m_state_(UMAA::Common::MaritimeEnumeration::TaskStateEnumType::TaskStateEnumType::PLANNED_PENDING_APPROVAL)  {
                    ::rti::core::fill_array( 
                        m_source_, 
                        ::rti::topic::cdr::alias_helper< UMAA::Common::Measurement::NumericGUID::value_type >::default_value());
                    ::rti::core::fill_array( 
                        m_missionID_, 
                        ::rti::topic::cdr::alias_helper< UMAA::Common::Measurement::NumericGUID::value_type >::default_value());
            }   

            MissionStatusType::MissionStatusType (const UMAA::Common::Measurement::DateTime& endTime,const std::string& feedback,const UMAA::Common::Measurement::DateTime& startTime,const UMAA::Common::MaritimeEnumeration::TaskStateEnumType::TaskStateEnumType& state,const UMAA::Common::Measurement::NumericGUID& source,const UMAA::Common::Measurement::DateTime& timeStamp,const UMAA::Common::Measurement::NumericGUID& missionID):
                m_endTime_( endTime ),
                m_feedback_( feedback ),
                m_startTime_( startTime ),
                m_state_( state ),
                m_source_( source ),
                m_timeStamp_( timeStamp ),
                m_missionID_( missionID ) {
            }

            #ifdef RTI_CXX11_RVALUE_REFERENCES
            #ifdef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
            MissionStatusType::MissionStatusType(MissionStatusType&& other_) OMG_NOEXCEPT  :m_endTime_ (std::move(other_.m_endTime_))
            ,
            m_feedback_ (std::move(other_.m_feedback_))
            ,
            m_startTime_ (std::move(other_.m_startTime_))
            ,
            m_state_ (std::move(other_.m_state_))
            ,
            m_source_ (std::move(other_.m_source_))
            ,
            m_timeStamp_ (std::move(other_.m_timeStamp_))
            ,
            m_missionID_ (std::move(other_.m_missionID_))
            {
            } 

            MissionStatusType& MissionStatusType::operator=(MissionStatusType&&  other_) OMG_NOEXCEPT {
                MissionStatusType tmp(std::move(other_));
                swap(tmp); 
                return *this;
            }
            #endif
            #endif   

            void MissionStatusType::swap(MissionStatusType& other_)  OMG_NOEXCEPT 
            {
                using std::swap;
                swap(m_endTime_, other_.m_endTime_);
                swap(m_feedback_, other_.m_feedback_);
                swap(m_startTime_, other_.m_startTime_);
                swap(m_state_, other_.m_state_);
                swap(m_source_, other_.m_source_);
                swap(m_timeStamp_, other_.m_timeStamp_);
                swap(m_missionID_, other_.m_missionID_);
            }  

            bool MissionStatusType::operator == (const MissionStatusType& other_) const {
                if (m_endTime_ != other_.m_endTime_) {
                    return false;
                }
                if (m_feedback_ != other_.m_feedback_) {
                    return false;
                }
                if (m_startTime_ != other_.m_startTime_) {
                    return false;
                }
                if (m_state_ != other_.m_state_) {
                    return false;
                }
                if (m_source_ != other_.m_source_) {
                    return false;
                }
                if (m_timeStamp_ != other_.m_timeStamp_) {
                    return false;
                }
                if (m_missionID_ != other_.m_missionID_) {
                    return false;
                }
                return true;
            }
            bool MissionStatusType::operator != (const MissionStatusType& other_) const {
                return !this->operator ==(other_);
            }

            std::ostream& operator << (std::ostream& o,const MissionStatusType& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                o <<"[";
                o << "endTime: " << sample.endTime()<<", ";
                o << "feedback: " << sample.feedback()<<", ";
                o << "startTime: " << sample.startTime()<<", ";
                o << "state: " << sample.state()<<", ";
                o << "source: " << sample.source()<<", ";
                o << "timeStamp: " << sample.timeStamp()<<", ";
                o << "missionID: " << sample.missionID() ;
                o <<"]";
                return o;
            }

        } // namespace MissionExecutionStatus  

    } // namespace MM  

} // namespace UMAA  

// --- Type traits: -------------------------------------------------

namespace rti { 
    namespace topic {

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct native_type_code< UMAA::MM::MissionExecutionStatus::MissionStatusType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member MissionStatusType_g_tc_members[7]=
                {

                    {
                        (char *)"endTime",/* Member name */
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
                        (char *)"feedback",/* Member name */
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
                        (char *)"startTime",/* Member name */
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
                        (char *)"state",/* Member name */
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
                        (char *)"source",/* Member name */
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
                    }, 
                    {
                        (char *)"missionID",/* Member name */
                        {
                            6,/* Representation ID */
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

                static DDS_TypeCode MissionStatusType_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::MM::MissionExecutionStatus::MissionStatusType", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        7, /* Number of members */
                        MissionStatusType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for MissionStatusType*/

                if (is_initialized) {
                    return &MissionStatusType_g_tc;
                }

                MissionStatusType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                MissionStatusType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::DateTime>::get().native();
                MissionStatusType_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::PrimitiveConstrained::StringShortDescription_AliasTag_t>::get().native();
                MissionStatusType_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::DateTime>::get().native();
                MissionStatusType_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::MaritimeEnumeration::TaskStateEnumType::TaskStateEnumType>::get().native();
                MissionStatusType_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::NumericGUID_AliasTag_t>::get().native();
                MissionStatusType_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::DateTime>::get().native();
                MissionStatusType_g_tc_members[6]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::NumericGUID_AliasTag_t>::get().native();

                /* Initialize the values for member annotations. */

                MissionStatusType_g_tc_members[1]._annotations._defaultValue._d = RTI_XCDR_TK_STRING;
                MissionStatusType_g_tc_members[1]._annotations._defaultValue._u.string_value = (DDS_Char *) "";

                MissionStatusType_g_tc_members[3]._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
                MissionStatusType_g_tc_members[3]._annotations._defaultValue._u.enumerated_value = 0;

                MissionStatusType_g_tc._data._sampleAccessInfo = sample_access_info();
                MissionStatusType_g_tc._data._typePlugin = type_plugin_info();    

                is_initialized = RTI_TRUE;

                return &MissionStatusType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                UMAA::MM::MissionExecutionStatus::MissionStatusType *sample;

                static RTIXCdrMemberAccessInfo MissionStatusType_g_memberAccessInfos[7] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo MissionStatusType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &MissionStatusType_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    UMAA::MM::MissionExecutionStatus::MissionStatusType);
                if (sample == NULL) {
                    return NULL;
                }

                MissionStatusType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->endTime() - (char *)sample);

                MissionStatusType_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->feedback() - (char *)sample);

                MissionStatusType_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->startTime() - (char *)sample);

                MissionStatusType_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->state() - (char *)sample);

                MissionStatusType_g_memberAccessInfos[4].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->source() - (char *)sample);

                MissionStatusType_g_memberAccessInfos[5].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->timeStamp() - (char *)sample);

                MissionStatusType_g_memberAccessInfos[6].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->missionID() - (char *)sample);

                MissionStatusType_g_sampleAccessInfo.memberAccessInfos = 
                MissionStatusType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(UMAA::MM::MissionExecutionStatus::MissionStatusType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        MissionStatusType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        MissionStatusType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                MissionStatusType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                MissionStatusType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< UMAA::MM::MissionExecutionStatus::MissionStatusType >;

                MissionStatusType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &MissionStatusType_g_sampleAccessInfo;
            }

            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin MissionStatusType_g_typePlugin = 
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

                return &MissionStatusType_g_typePlugin;
            }
        }; // native_type_code
        #endif

        const ::dds::core::xtypes::StructType& dynamic_type< UMAA::MM::MissionExecutionStatus::MissionStatusType >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< UMAA::MM::MissionExecutionStatus::MissionStatusType >::get())));
        }

    }
}

namespace dds { 
    namespace topic {
        void topic_type_support< UMAA::MM::MissionExecutionStatus::MissionStatusType >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                UMAA::MM::MissionExecutionStatus::MissionStatusTypePlugin_new,
                UMAA::MM::MissionExecutionStatus::MissionStatusTypePlugin_delete);
        }

        std::vector<char>& topic_type_support< UMAA::MM::MissionExecutionStatus::MissionStatusType >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const UMAA::MM::MissionExecutionStatus::MissionStatusType& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = MissionStatusTypePlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = MissionStatusTypePlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< UMAA::MM::MissionExecutionStatus::MissionStatusType >::from_cdr_buffer(UMAA::MM::MissionExecutionStatus::MissionStatusType& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = MissionStatusTypePlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create UMAA::MM::MissionExecutionStatus::MissionStatusType from cdr buffer");
        }

        void topic_type_support< UMAA::MM::MissionExecutionStatus::MissionStatusType >::reset_sample(UMAA::MM::MissionExecutionStatus::MissionStatusType& sample) 
        {
            ::rti::topic::reset_sample(sample.endTime());
            sample.feedback("");
            ::rti::topic::reset_sample(sample.startTime());
            sample.state(UMAA::Common::MaritimeEnumeration::TaskStateEnumType::TaskStateEnumType::PLANNED_PENDING_APPROVAL);
            ::rti::topic::reset_sample(sample.source());
            ::rti::topic::reset_sample(sample.timeStamp());
            ::rti::topic::reset_sample(sample.missionID());
        }

        void topic_type_support< UMAA::MM::MissionExecutionStatus::MissionStatusType >::allocate_sample(UMAA::MM::MissionExecutionStatus::MissionStatusType& sample, int, int) 
        {
            ::rti::topic::allocate_sample(sample.endTime(),  -1, -1);
            ::rti::topic::allocate_sample(sample.feedback(),  -1, 1023L);
            ::rti::topic::allocate_sample(sample.startTime(),  -1, -1);
            ::rti::topic::allocate_sample(sample.state(),  -1, -1);
            ::rti::topic::allocate_sample(sample.source(),  -1, -1);
            ::rti::topic::allocate_sample(sample.timeStamp(),  -1, -1);
            ::rti::topic::allocate_sample(sample.missionID(),  -1, -1);
        }

    }
}  

