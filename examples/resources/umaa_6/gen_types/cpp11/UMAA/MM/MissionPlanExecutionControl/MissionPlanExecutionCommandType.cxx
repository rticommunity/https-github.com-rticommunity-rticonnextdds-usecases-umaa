

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from MissionPlanExecutionCommandType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#include <iosfwd>
#include <iomanip>

#ifndef NDDS_STANDALONE_TYPE
#include "rti/topic/cdr/Serialization.hpp"
#include "MissionPlanExecutionCommandTypePlugin.hpp"
#else
#include "rti/topic/cdr/SerializationHelpers.hpp"
#endif

#include "MissionPlanExecutionCommandType.hpp"

#include <rti/util/ostream_operators.hpp>

namespace UMAA {

    namespace MM {

        namespace MissionPlanExecutionControl {

            // ---- MissionPlanExecutionCommandType: 

            MissionPlanExecutionCommandType::MissionPlanExecutionCommandType() :
                m_state_(UMAA::Common::MaritimeEnumeration::TaskControlEnumModule::TaskControlEnumType::CANCEL)  {

            }   

            MissionPlanExecutionCommandType::MissionPlanExecutionCommandType (const ::dds::core::optional< ::UMAA::Common::Measurement::NumericGUID >& missionID_,const ::UMAA::Common::MaritimeEnumeration::TaskControlEnumModule::TaskControlEnumType& state_,const ::UMAA::Common::Measurement::DateTime& timeStamp_,const ::UMAA::Common::IdentifierType& source_,const ::UMAA::Common::Measurement::NumericGUID& sessionID_,const ::UMAA::Common::IdentifierType& destination_):
                m_missionID_(missionID_), 
                m_state_(state_), 
                m_timeStamp_(timeStamp_), 
                m_source_(source_), 
                m_sessionID_(sessionID_), 
                m_destination_(destination_) {
            }

            void MissionPlanExecutionCommandType::swap(MissionPlanExecutionCommandType& other_)  noexcept 
            {
                using std::swap;
                swap(m_missionID_, other_.m_missionID_);
                swap(m_state_, other_.m_state_);
                swap(m_timeStamp_, other_.m_timeStamp_);
                swap(m_source_, other_.m_source_);
                swap(m_sessionID_, other_.m_sessionID_);
                swap(m_destination_, other_.m_destination_);
            }  

            bool MissionPlanExecutionCommandType::operator == (const MissionPlanExecutionCommandType& other_) const {
                if (m_missionID_ != other_.m_missionID_) {
                    return false;
                }
                if (m_state_ != other_.m_state_) {
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

            bool MissionPlanExecutionCommandType::operator != (const MissionPlanExecutionCommandType& other_) const {
                return !this->operator ==(other_);
            }

            std::ostream& operator << (std::ostream& o,const MissionPlanExecutionCommandType& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                o <<"[";
                o << "missionID: " << sample.missionID ()<<", ";
                o << "state: " << sample.state ()<<", ";
                o << "timeStamp: " << sample.timeStamp ()<<", ";
                o << "source: " << sample.source ()<<", ";
                o << "sessionID: " << sample.sessionID ()<<", ";
                o << "destination: " << sample.destination ();
                o <<"]";
                return o;
            }

        } // namespace MissionPlanExecutionControl  

    } // namespace MM  

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
        struct native_type_code< ::UMAA::MM::MissionPlanExecutionControl::MissionPlanExecutionCommandType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member MissionPlanExecutionCommandType_g_tc_members[6]=
                {

                    {
                        (char *)"missionID",/* Member name */
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
                        RTI_CDR_NONKEY_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"state",/* Member name */
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
                    }, 
                    {
                        (char *)"source",/* Member name */
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
                        (char *)"destination",/* Member name */
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
                        RTI_CDR_KEY_MEMBER , /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }
                };

                static DDS_TypeCode MissionPlanExecutionCommandType_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::MM::MissionPlanExecutionControl::MissionPlanExecutionCommandType", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        6, /* Number of members */
                        MissionPlanExecutionCommandType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for MissionPlanExecutionCommandType*/

                if (is_initialized) {
                    return &MissionPlanExecutionCommandType_g_tc;
                }

                is_initialized = RTI_TRUE;

                MissionPlanExecutionCommandType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                MissionPlanExecutionCommandType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::NumericGUID_AliasTag_t>::get().native();
                MissionPlanExecutionCommandType_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::MaritimeEnumeration::TaskControlEnumModule::TaskControlEnumType>::get().native();
                MissionPlanExecutionCommandType_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::DateTime>::get().native();
                MissionPlanExecutionCommandType_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::IdentifierType>::get().native();
                MissionPlanExecutionCommandType_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::NumericGUID_AliasTag_t>::get().native();
                MissionPlanExecutionCommandType_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::IdentifierType>::get().native();

                /* Initialize the values for member annotations. */
                MissionPlanExecutionCommandType_g_tc_members[1]._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
                MissionPlanExecutionCommandType_g_tc_members[1]._annotations._defaultValue._u.enumerated_value = 0;

                MissionPlanExecutionCommandType_g_tc._data._sampleAccessInfo = sample_access_info();
                MissionPlanExecutionCommandType_g_tc._data._typePlugin = type_plugin_info();    

                return &MissionPlanExecutionCommandType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                ::UMAA::MM::MissionPlanExecutionControl::MissionPlanExecutionCommandType *sample;

                static RTIXCdrMemberAccessInfo MissionPlanExecutionCommandType_g_memberAccessInfos[6] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo MissionPlanExecutionCommandType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &MissionPlanExecutionCommandType_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    ::UMAA::MM::MissionPlanExecutionControl::MissionPlanExecutionCommandType);
                if (sample == NULL) {
                    return NULL;
                }

                MissionPlanExecutionCommandType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->missionID() - (char *)sample);

                MissionPlanExecutionCommandType_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->state() - (char *)sample);

                MissionPlanExecutionCommandType_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->timeStamp() - (char *)sample);

                MissionPlanExecutionCommandType_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->source() - (char *)sample);

                MissionPlanExecutionCommandType_g_memberAccessInfos[4].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->sessionID() - (char *)sample);

                MissionPlanExecutionCommandType_g_memberAccessInfos[5].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->destination() - (char *)sample);

                MissionPlanExecutionCommandType_g_sampleAccessInfo.memberAccessInfos = 
                MissionPlanExecutionCommandType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::MM::MissionPlanExecutionControl::MissionPlanExecutionCommandType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        MissionPlanExecutionCommandType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        MissionPlanExecutionCommandType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                MissionPlanExecutionCommandType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                MissionPlanExecutionCommandType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::MM::MissionPlanExecutionControl::MissionPlanExecutionCommandType >;

                MissionPlanExecutionCommandType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &MissionPlanExecutionCommandType_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin MissionPlanExecutionCommandType_g_typePlugin = 
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

                return &MissionPlanExecutionCommandType_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::StructType& dynamic_type< ::UMAA::MM::MissionPlanExecutionControl::MissionPlanExecutionCommandType >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::MM::MissionPlanExecutionControl::MissionPlanExecutionCommandType >::get())));
        }
    }
}

namespace dds { 
    namespace topic {
        void topic_type_support< ::UMAA::MM::MissionPlanExecutionControl::MissionPlanExecutionCommandType >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                ::UMAA::MM::MissionPlanExecutionControl::MissionPlanExecutionCommandTypePlugin_new,
                ::UMAA::MM::MissionPlanExecutionControl::MissionPlanExecutionCommandTypePlugin_delete);
        }

        std::vector<char>& topic_type_support< ::UMAA::MM::MissionPlanExecutionControl::MissionPlanExecutionCommandType >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const ::UMAA::MM::MissionPlanExecutionControl::MissionPlanExecutionCommandType& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = MissionPlanExecutionCommandTypePlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = MissionPlanExecutionCommandTypePlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< ::UMAA::MM::MissionPlanExecutionControl::MissionPlanExecutionCommandType >::from_cdr_buffer(::UMAA::MM::MissionPlanExecutionControl::MissionPlanExecutionCommandType& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = MissionPlanExecutionCommandTypePlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create ::UMAA::MM::MissionPlanExecutionControl::MissionPlanExecutionCommandType from cdr buffer");
        }

        void topic_type_support< ::UMAA::MM::MissionPlanExecutionControl::MissionPlanExecutionCommandType >::reset_sample(::UMAA::MM::MissionPlanExecutionControl::MissionPlanExecutionCommandType& sample) 
        {
            ::rti::topic::reset_sample(sample.missionID());
            sample.state(UMAA::Common::MaritimeEnumeration::TaskControlEnumModule::TaskControlEnumType::CANCEL);
            ::rti::topic::reset_sample(sample.timeStamp());
            ::rti::topic::reset_sample(sample.source());
            ::rti::topic::reset_sample(sample.sessionID());
            ::rti::topic::reset_sample(sample.destination());
        }

        void topic_type_support< ::UMAA::MM::MissionPlanExecutionControl::MissionPlanExecutionCommandType >::allocate_sample(::UMAA::MM::MissionPlanExecutionControl::MissionPlanExecutionCommandType& sample, int, int) 
        {
            ::rti::topic::allocate_sample(sample.state(),  -1, -1);
            ::rti::topic::allocate_sample(sample.timeStamp(),  -1, -1);
            ::rti::topic::allocate_sample(sample.source(),  -1, -1);
            ::rti::topic::allocate_sample(sample.sessionID(),  -1, -1);
            ::rti::topic::allocate_sample(sample.destination(),  -1, -1);
        }
    }
}  

#endif // NDDS_STANDALONE_TYPE
