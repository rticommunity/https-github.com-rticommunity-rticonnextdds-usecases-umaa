

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from GlobalRacetrackExecutionStatusReportType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#include <iosfwd>
#include <iomanip>

#ifndef NDDS_STANDALONE_TYPE
#include "rti/topic/cdr/Serialization.hpp"
#include "GlobalRacetrackExecutionStatusReportTypePlugin.hpp"
#else
#include "rti/topic/cdr/SerializationHelpers.hpp"
#endif

#include "GlobalRacetrackExecutionStatusReportType.hpp"

#include <rti/util/ostream_operators.hpp>

namespace UMAA {

    namespace MO {

        namespace GlobalRacetrackControl {

            // ---- GlobalRacetrackExecutionStatusReportType: 

            GlobalRacetrackExecutionStatusReportType::GlobalRacetrackExecutionStatusReportType()  {

            }   

            GlobalRacetrackExecutionStatusReportType::GlobalRacetrackExecutionStatusReportType (const ::UMAA::MO::GlobalRacetrackState::GlobalRacetrackStateType& globalRacetrackState_,const ::UMAA::Common::Measurement::DateTime& timePatternAchieved_,const ::dds::core::optional< ::UMAA::Common::Measurement::DateTime >& timePatternCompleted_,const ::UMAA::Common::Measurement::NumericGUID& source_,const ::UMAA::Common::Measurement::NumericGUID& sessionID_):
                m_globalRacetrackState_(globalRacetrackState_), 
                m_timePatternAchieved_(timePatternAchieved_), 
                m_timePatternCompleted_(timePatternCompleted_), 
                m_source_(source_), 
                m_sessionID_(sessionID_) {
            }

            void GlobalRacetrackExecutionStatusReportType::swap(GlobalRacetrackExecutionStatusReportType& other_)  noexcept 
            {
                using std::swap;
                swap(m_globalRacetrackState_, other_.m_globalRacetrackState_);
                swap(m_timePatternAchieved_, other_.m_timePatternAchieved_);
                swap(m_timePatternCompleted_, other_.m_timePatternCompleted_);
                swap(m_source_, other_.m_source_);
                swap(m_sessionID_, other_.m_sessionID_);
            }  

            bool GlobalRacetrackExecutionStatusReportType::operator == (const GlobalRacetrackExecutionStatusReportType& other_) const {
                if (m_globalRacetrackState_ != other_.m_globalRacetrackState_) {
                    return false;
                }
                if (m_timePatternAchieved_ != other_.m_timePatternAchieved_) {
                    return false;
                }
                if (m_timePatternCompleted_ != other_.m_timePatternCompleted_) {
                    return false;
                }
                if (m_source_ != other_.m_source_) {
                    return false;
                }
                if (m_sessionID_ != other_.m_sessionID_) {
                    return false;
                }
                return true;
            }

            bool GlobalRacetrackExecutionStatusReportType::operator != (const GlobalRacetrackExecutionStatusReportType& other_) const {
                return !this->operator ==(other_);
            }

            std::ostream& operator << (std::ostream& o,const GlobalRacetrackExecutionStatusReportType& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                o <<"[";
                o << "globalRacetrackState: " << sample.globalRacetrackState ()<<", ";
                o << "timePatternAchieved: " << sample.timePatternAchieved ()<<", ";
                o << "timePatternCompleted: " << sample.timePatternCompleted ()<<", ";
                o << "source: " << sample.source ()<<", ";
                o << "sessionID: " << sample.sessionID ();
                o <<"]";
                return o;
            }

        } // namespace GlobalRacetrackControl  

    } // namespace MO  

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
        struct native_type_code< ::UMAA::MO::GlobalRacetrackControl::GlobalRacetrackExecutionStatusReportType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member GlobalRacetrackExecutionStatusReportType_g_tc_members[5]=
                {

                    {
                        (char *)"globalRacetrackState",/* Member name */
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
                        (char *)"timePatternAchieved",/* Member name */
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
                        (char *)"timePatternCompleted",/* Member name */
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
                        RTI_CDR_NONKEY_MEMBER, /* Is a key? */
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
                    }
                };

                static DDS_TypeCode GlobalRacetrackExecutionStatusReportType_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::MO::GlobalRacetrackControl::GlobalRacetrackExecutionStatusReportType", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        5, /* Number of members */
                        GlobalRacetrackExecutionStatusReportType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for GlobalRacetrackExecutionStatusReportType*/

                if (is_initialized) {
                    return &GlobalRacetrackExecutionStatusReportType_g_tc;
                }

                is_initialized = RTI_TRUE;

                GlobalRacetrackExecutionStatusReportType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                GlobalRacetrackExecutionStatusReportType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::MO::GlobalRacetrackState::GlobalRacetrackStateType>::get().native();
                GlobalRacetrackExecutionStatusReportType_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::DateTime>::get().native();
                GlobalRacetrackExecutionStatusReportType_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::DateTime>::get().native();
                GlobalRacetrackExecutionStatusReportType_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::NumericGUID_AliasTag_t>::get().native();
                GlobalRacetrackExecutionStatusReportType_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::NumericGUID_AliasTag_t>::get().native();

                /* Initialize the values for member annotations. */

                GlobalRacetrackExecutionStatusReportType_g_tc._data._sampleAccessInfo = sample_access_info();
                GlobalRacetrackExecutionStatusReportType_g_tc._data._typePlugin = type_plugin_info();    

                return &GlobalRacetrackExecutionStatusReportType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                ::UMAA::MO::GlobalRacetrackControl::GlobalRacetrackExecutionStatusReportType *sample;

                static RTIXCdrMemberAccessInfo GlobalRacetrackExecutionStatusReportType_g_memberAccessInfos[5] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo GlobalRacetrackExecutionStatusReportType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &GlobalRacetrackExecutionStatusReportType_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    ::UMAA::MO::GlobalRacetrackControl::GlobalRacetrackExecutionStatusReportType);
                if (sample == NULL) {
                    return NULL;
                }

                GlobalRacetrackExecutionStatusReportType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->globalRacetrackState() - (char *)sample);

                GlobalRacetrackExecutionStatusReportType_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->timePatternAchieved() - (char *)sample);

                GlobalRacetrackExecutionStatusReportType_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->timePatternCompleted() - (char *)sample);

                GlobalRacetrackExecutionStatusReportType_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->source() - (char *)sample);

                GlobalRacetrackExecutionStatusReportType_g_memberAccessInfos[4].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->sessionID() - (char *)sample);

                GlobalRacetrackExecutionStatusReportType_g_sampleAccessInfo.memberAccessInfos = 
                GlobalRacetrackExecutionStatusReportType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::MO::GlobalRacetrackControl::GlobalRacetrackExecutionStatusReportType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        GlobalRacetrackExecutionStatusReportType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        GlobalRacetrackExecutionStatusReportType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                GlobalRacetrackExecutionStatusReportType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                GlobalRacetrackExecutionStatusReportType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::MO::GlobalRacetrackControl::GlobalRacetrackExecutionStatusReportType >;

                GlobalRacetrackExecutionStatusReportType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &GlobalRacetrackExecutionStatusReportType_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin GlobalRacetrackExecutionStatusReportType_g_typePlugin = 
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

                return &GlobalRacetrackExecutionStatusReportType_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::StructType& dynamic_type< ::UMAA::MO::GlobalRacetrackControl::GlobalRacetrackExecutionStatusReportType >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::MO::GlobalRacetrackControl::GlobalRacetrackExecutionStatusReportType >::get())));
        }
    }
}

namespace dds { 
    namespace topic {
        void topic_type_support< ::UMAA::MO::GlobalRacetrackControl::GlobalRacetrackExecutionStatusReportType >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                ::UMAA::MO::GlobalRacetrackControl::GlobalRacetrackExecutionStatusReportTypePlugin_new,
                ::UMAA::MO::GlobalRacetrackControl::GlobalRacetrackExecutionStatusReportTypePlugin_delete);
        }

        std::vector<char>& topic_type_support< ::UMAA::MO::GlobalRacetrackControl::GlobalRacetrackExecutionStatusReportType >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const ::UMAA::MO::GlobalRacetrackControl::GlobalRacetrackExecutionStatusReportType& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = GlobalRacetrackExecutionStatusReportTypePlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = GlobalRacetrackExecutionStatusReportTypePlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< ::UMAA::MO::GlobalRacetrackControl::GlobalRacetrackExecutionStatusReportType >::from_cdr_buffer(::UMAA::MO::GlobalRacetrackControl::GlobalRacetrackExecutionStatusReportType& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = GlobalRacetrackExecutionStatusReportTypePlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create ::UMAA::MO::GlobalRacetrackControl::GlobalRacetrackExecutionStatusReportType from cdr buffer");
        }

        void topic_type_support< ::UMAA::MO::GlobalRacetrackControl::GlobalRacetrackExecutionStatusReportType >::reset_sample(::UMAA::MO::GlobalRacetrackControl::GlobalRacetrackExecutionStatusReportType& sample) 
        {
            ::rti::topic::reset_sample(sample.globalRacetrackState());
            ::rti::topic::reset_sample(sample.timePatternAchieved());
            ::rti::topic::reset_sample(sample.timePatternCompleted());
            ::rti::topic::reset_sample(sample.source());
            ::rti::topic::reset_sample(sample.sessionID());
        }

        void topic_type_support< ::UMAA::MO::GlobalRacetrackControl::GlobalRacetrackExecutionStatusReportType >::allocate_sample(::UMAA::MO::GlobalRacetrackControl::GlobalRacetrackExecutionStatusReportType& sample, int, int) 
        {
            ::rti::topic::allocate_sample(sample.globalRacetrackState(),  -1, -1);
            ::rti::topic::allocate_sample(sample.timePatternAchieved(),  -1, -1);
            ::rti::topic::allocate_sample(sample.source(),  -1, -1);
            ::rti::topic::allocate_sample(sample.sessionID(),  -1, -1);
        }
    }
}  

#endif // NDDS_STANDALONE_TYPE
