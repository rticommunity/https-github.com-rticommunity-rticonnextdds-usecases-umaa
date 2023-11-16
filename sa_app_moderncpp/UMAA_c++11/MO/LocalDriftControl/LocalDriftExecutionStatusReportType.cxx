

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from LocalDriftExecutionStatusReportType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#include <iosfwd>
#include <iomanip>
#include <cmath>
#include <limits>

#ifndef NDDS_STANDALONE_TYPE
#include "rti/topic/cdr/Serialization.hpp"
#include "LocalDriftExecutionStatusReportTypePlugin.hpp"
#else
#include "rti/topic/cdr/SerializationHelpers.hpp"
#endif

#include "LocalDriftExecutionStatusReportType.hpp"

#include <rti/util/ostream_operators.hpp>

namespace UMAA {

    namespace MO {

        namespace LocalDriftControl {

            // ---- LocalDriftExecutionStatusReportType: 

            LocalDriftExecutionStatusReportType::LocalDriftExecutionStatusReportType() :
                m_distanceFromReference_ (0.0)  {

            }   

            LocalDriftExecutionStatusReportType::LocalDriftExecutionStatusReportType (double distanceFromReference_,const ::UMAA::MO::LocalDriftState::LocalDriftStateType& localDriftState_,const ::UMAA::Common::Measurement::DateTime& timeDriftAchieved_,const ::dds::core::optional< ::UMAA::Common::Measurement::DateTime >& timeDriftCompleted_,const ::UMAA::Common::Measurement::NumericGUID& source_,const ::UMAA::Common::Measurement::NumericGUID& sessionID_):
                m_distanceFromReference_(distanceFromReference_), 
                m_localDriftState_(localDriftState_), 
                m_timeDriftAchieved_(timeDriftAchieved_), 
                m_timeDriftCompleted_(timeDriftCompleted_), 
                m_source_(source_), 
                m_sessionID_(sessionID_) {
            }

            void LocalDriftExecutionStatusReportType::swap(LocalDriftExecutionStatusReportType& other_)  noexcept 
            {
                using std::swap;
                swap(m_distanceFromReference_, other_.m_distanceFromReference_);
                swap(m_localDriftState_, other_.m_localDriftState_);
                swap(m_timeDriftAchieved_, other_.m_timeDriftAchieved_);
                swap(m_timeDriftCompleted_, other_.m_timeDriftCompleted_);
                swap(m_source_, other_.m_source_);
                swap(m_sessionID_, other_.m_sessionID_);
            }  

            bool LocalDriftExecutionStatusReportType::operator == (const LocalDriftExecutionStatusReportType& other_) const {
                if (std::fabs(m_distanceFromReference_ - other_.m_distanceFromReference_) > std::numeric_limits< double>::epsilon()
                && !(std::fabs(m_distanceFromReference_ - other_.m_distanceFromReference_) < (std::numeric_limits< double>::min)())) {
                    return false;
                }
                if (m_localDriftState_ != other_.m_localDriftState_) {
                    return false;
                }
                if (m_timeDriftAchieved_ != other_.m_timeDriftAchieved_) {
                    return false;
                }
                if (m_timeDriftCompleted_ != other_.m_timeDriftCompleted_) {
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

            bool LocalDriftExecutionStatusReportType::operator != (const LocalDriftExecutionStatusReportType& other_) const {
                return !this->operator ==(other_);
            }

            std::ostream& operator << (std::ostream& o,const LocalDriftExecutionStatusReportType& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                o <<"[";
                o << "distanceFromReference: " << std::setprecision(15) << sample.distanceFromReference ()<<", ";
                o << "localDriftState: " << sample.localDriftState ()<<", ";
                o << "timeDriftAchieved: " << sample.timeDriftAchieved ()<<", ";
                o << "timeDriftCompleted: " << sample.timeDriftCompleted ()<<", ";
                o << "source: " << sample.source ()<<", ";
                o << "sessionID: " << sample.sessionID ();
                o <<"]";
                return o;
            }

        } // namespace LocalDriftControl  

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
        struct native_type_code< ::UMAA::MO::LocalDriftControl::LocalDriftExecutionStatusReportType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member LocalDriftExecutionStatusReportType_g_tc_members[6]=
                {

                    {
                        (char *)"distanceFromReference",/* Member name */
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
                        (char *)"localDriftState",/* Member name */
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
                        (char *)"timeDriftAchieved",/* Member name */
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
                        (char *)"timeDriftCompleted",/* Member name */
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
                        RTI_CDR_NONKEY_MEMBER, /* Is a key? */
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
                        (char *)"sessionID",/* Member name */
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

                static DDS_TypeCode LocalDriftExecutionStatusReportType_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::MO::LocalDriftControl::LocalDriftExecutionStatusReportType", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        6, /* Number of members */
                        LocalDriftExecutionStatusReportType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for LocalDriftExecutionStatusReportType*/

                if (is_initialized) {
                    return &LocalDriftExecutionStatusReportType_g_tc;
                }

                is_initialized = RTI_TRUE;

                LocalDriftExecutionStatusReportType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                LocalDriftExecutionStatusReportType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::Distance_AliasTag_t>::get().native();
                LocalDriftExecutionStatusReportType_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::MO::LocalDriftState::LocalDriftStateType>::get().native();
                LocalDriftExecutionStatusReportType_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::DateTime>::get().native();
                LocalDriftExecutionStatusReportType_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::DateTime>::get().native();
                LocalDriftExecutionStatusReportType_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::NumericGUID_AliasTag_t>::get().native();
                LocalDriftExecutionStatusReportType_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::NumericGUID_AliasTag_t>::get().native();

                /* Initialize the values for member annotations. */
                LocalDriftExecutionStatusReportType_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                LocalDriftExecutionStatusReportType_g_tc_members[0]._annotations._defaultValue._u.double_value = 0.0;
                LocalDriftExecutionStatusReportType_g_tc_members[0]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                LocalDriftExecutionStatusReportType_g_tc_members[0]._annotations._minValue._u.double_value = 0ULL;
                LocalDriftExecutionStatusReportType_g_tc_members[0]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                LocalDriftExecutionStatusReportType_g_tc_members[0]._annotations._maxValue._u.double_value = 401056000ULL;

                LocalDriftExecutionStatusReportType_g_tc._data._sampleAccessInfo = sample_access_info();
                LocalDriftExecutionStatusReportType_g_tc._data._typePlugin = type_plugin_info();    

                return &LocalDriftExecutionStatusReportType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                ::UMAA::MO::LocalDriftControl::LocalDriftExecutionStatusReportType *sample;

                static RTIXCdrMemberAccessInfo LocalDriftExecutionStatusReportType_g_memberAccessInfos[6] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo LocalDriftExecutionStatusReportType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &LocalDriftExecutionStatusReportType_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    ::UMAA::MO::LocalDriftControl::LocalDriftExecutionStatusReportType);
                if (sample == NULL) {
                    return NULL;
                }

                LocalDriftExecutionStatusReportType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->distanceFromReference() - (char *)sample);

                LocalDriftExecutionStatusReportType_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->localDriftState() - (char *)sample);

                LocalDriftExecutionStatusReportType_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->timeDriftAchieved() - (char *)sample);

                LocalDriftExecutionStatusReportType_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->timeDriftCompleted() - (char *)sample);

                LocalDriftExecutionStatusReportType_g_memberAccessInfos[4].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->source() - (char *)sample);

                LocalDriftExecutionStatusReportType_g_memberAccessInfos[5].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->sessionID() - (char *)sample);

                LocalDriftExecutionStatusReportType_g_sampleAccessInfo.memberAccessInfos = 
                LocalDriftExecutionStatusReportType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::MO::LocalDriftControl::LocalDriftExecutionStatusReportType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        LocalDriftExecutionStatusReportType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        LocalDriftExecutionStatusReportType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                LocalDriftExecutionStatusReportType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                LocalDriftExecutionStatusReportType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::MO::LocalDriftControl::LocalDriftExecutionStatusReportType >;

                LocalDriftExecutionStatusReportType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &LocalDriftExecutionStatusReportType_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin LocalDriftExecutionStatusReportType_g_typePlugin = 
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

                return &LocalDriftExecutionStatusReportType_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::StructType& dynamic_type< ::UMAA::MO::LocalDriftControl::LocalDriftExecutionStatusReportType >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::MO::LocalDriftControl::LocalDriftExecutionStatusReportType >::get())));
        }
    }
}

namespace dds { 
    namespace topic {
        void topic_type_support< ::UMAA::MO::LocalDriftControl::LocalDriftExecutionStatusReportType >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                ::UMAA::MO::LocalDriftControl::LocalDriftExecutionStatusReportTypePlugin_new,
                ::UMAA::MO::LocalDriftControl::LocalDriftExecutionStatusReportTypePlugin_delete);
        }

        std::vector<char>& topic_type_support< ::UMAA::MO::LocalDriftControl::LocalDriftExecutionStatusReportType >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const ::UMAA::MO::LocalDriftControl::LocalDriftExecutionStatusReportType& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = LocalDriftExecutionStatusReportTypePlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = LocalDriftExecutionStatusReportTypePlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< ::UMAA::MO::LocalDriftControl::LocalDriftExecutionStatusReportType >::from_cdr_buffer(::UMAA::MO::LocalDriftControl::LocalDriftExecutionStatusReportType& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = LocalDriftExecutionStatusReportTypePlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create ::UMAA::MO::LocalDriftControl::LocalDriftExecutionStatusReportType from cdr buffer");
        }

        void topic_type_support< ::UMAA::MO::LocalDriftControl::LocalDriftExecutionStatusReportType >::reset_sample(::UMAA::MO::LocalDriftControl::LocalDriftExecutionStatusReportType& sample) 
        {
            sample.distanceFromReference(0.0);
            ::rti::topic::reset_sample(sample.localDriftState());
            ::rti::topic::reset_sample(sample.timeDriftAchieved());
            ::rti::topic::reset_sample(sample.timeDriftCompleted());
            ::rti::topic::reset_sample(sample.source());
            ::rti::topic::reset_sample(sample.sessionID());
        }

        void topic_type_support< ::UMAA::MO::LocalDriftControl::LocalDriftExecutionStatusReportType >::allocate_sample(::UMAA::MO::LocalDriftControl::LocalDriftExecutionStatusReportType& sample, int, int) 
        {
            ::rti::topic::allocate_sample(sample.localDriftState(),  -1, -1);
            ::rti::topic::allocate_sample(sample.timeDriftAchieved(),  -1, -1);
            ::rti::topic::allocate_sample(sample.source(),  -1, -1);
            ::rti::topic::allocate_sample(sample.sessionID(),  -1, -1);
        }
    }
}  

#endif // NDDS_STANDALONE_TYPE
