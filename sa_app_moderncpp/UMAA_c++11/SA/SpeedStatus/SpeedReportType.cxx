

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from SpeedReportType.idl
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
#include "SpeedReportTypePlugin.hpp"
#else
#include "rti/topic/cdr/SerializationHelpers.hpp"
#endif

#include "SpeedReportType.hpp"

#include <rti/util/ostream_operators.hpp>

namespace UMAA {

    namespace SA {

        namespace SpeedStatus {

            // ---- SpeedReportType: 

            SpeedReportType::SpeedReportType()  {

            }   

            SpeedReportType::SpeedReportType (const ::dds::core::optional< double >& engineRPM_,const ::dds::core::optional< double >& speedOverGround_,const ::dds::core::optional< double >& speedThroughAir_,const ::dds::core::optional< double >& speedThroughWater_,const ::UMAA::Common::Measurement::NumericGUID& source_,const ::UMAA::Common::Measurement::DateTime& timeStamp_):
                m_engineRPM_(engineRPM_), 
                m_speedOverGround_(speedOverGround_), 
                m_speedThroughAir_(speedThroughAir_), 
                m_speedThroughWater_(speedThroughWater_), 
                m_source_(source_), 
                m_timeStamp_(timeStamp_) {
            }

            void SpeedReportType::swap(SpeedReportType& other_)  noexcept 
            {
                using std::swap;
                swap(m_engineRPM_, other_.m_engineRPM_);
                swap(m_speedOverGround_, other_.m_speedOverGround_);
                swap(m_speedThroughAir_, other_.m_speedThroughAir_);
                swap(m_speedThroughWater_, other_.m_speedThroughWater_);
                swap(m_source_, other_.m_source_);
                swap(m_timeStamp_, other_.m_timeStamp_);
            }  

            bool SpeedReportType::operator == (const SpeedReportType& other_) const {
                if (m_engineRPM_.has_value() != other_.m_engineRPM_.has_value()) {
                    return false;
                } else if (m_engineRPM_.has_value()) {
                    if (std::fabs(*m_engineRPM_ - *other_.m_engineRPM_) > std::numeric_limits< double>::epsilon()
                    && !(std::fabs(*m_engineRPM_ - *other_.m_engineRPM_) < (std::numeric_limits< double>::min)())) {
                        return false;
                    }
                }
                if (m_speedOverGround_.has_value() != other_.m_speedOverGround_.has_value()) {
                    return false;
                } else if (m_speedOverGround_.has_value()) {
                    if (std::fabs(*m_speedOverGround_ - *other_.m_speedOverGround_) > std::numeric_limits< double>::epsilon()
                    && !(std::fabs(*m_speedOverGround_ - *other_.m_speedOverGround_) < (std::numeric_limits< double>::min)())) {
                        return false;
                    }
                }
                if (m_speedThroughAir_.has_value() != other_.m_speedThroughAir_.has_value()) {
                    return false;
                } else if (m_speedThroughAir_.has_value()) {
                    if (std::fabs(*m_speedThroughAir_ - *other_.m_speedThroughAir_) > std::numeric_limits< double>::epsilon()
                    && !(std::fabs(*m_speedThroughAir_ - *other_.m_speedThroughAir_) < (std::numeric_limits< double>::min)())) {
                        return false;
                    }
                }
                if (m_speedThroughWater_.has_value() != other_.m_speedThroughWater_.has_value()) {
                    return false;
                } else if (m_speedThroughWater_.has_value()) {
                    if (std::fabs(*m_speedThroughWater_ - *other_.m_speedThroughWater_) > std::numeric_limits< double>::epsilon()
                    && !(std::fabs(*m_speedThroughWater_ - *other_.m_speedThroughWater_) < (std::numeric_limits< double>::min)())) {
                        return false;
                    }
                }
                if (m_source_ != other_.m_source_) {
                    return false;
                }
                if (m_timeStamp_ != other_.m_timeStamp_) {
                    return false;
                }
                return true;
            }

            bool SpeedReportType::operator != (const SpeedReportType& other_) const {
                return !this->operator ==(other_);
            }

            std::ostream& operator << (std::ostream& o,const SpeedReportType& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                o <<"[";
                o << "engineRPM: " << sample.engineRPM ()<<", ";
                o << "speedOverGround: " << sample.speedOverGround ()<<", ";
                o << "speedThroughAir: " << sample.speedThroughAir ()<<", ";
                o << "speedThroughWater: " << sample.speedThroughWater ()<<", ";
                o << "source: " << sample.source ()<<", ";
                o << "timeStamp: " << sample.timeStamp ();
                o <<"]";
                return o;
            }

        } // namespace SpeedStatus  

    } // namespace SA  

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
        struct native_type_code< ::UMAA::SA::SpeedStatus::SpeedReportType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member SpeedReportType_g_tc_members[6]=
                {

                    {
                        (char *)"engineRPM",/* Member name */
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
                        (char *)"speedOverGround",/* Member name */
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
                        RTI_CDR_NONKEY_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"speedThroughAir",/* Member name */
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
                        (char *)"speedThroughWater",/* Member name */
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

                static DDS_TypeCode SpeedReportType_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::SA::SpeedStatus::SpeedReportType", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        6, /* Number of members */
                        SpeedReportType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for SpeedReportType*/

                if (is_initialized) {
                    return &SpeedReportType_g_tc;
                }

                is_initialized = RTI_TRUE;

                SpeedReportType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                SpeedReportType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::EngineSpeed_AliasTag_t>::get().native();
                SpeedReportType_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::GroundSpeed_AliasTag_t>::get().native();
                SpeedReportType_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::IndicatedAirspeed_AliasTag_t>::get().native();
                SpeedReportType_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::Speed_LocalWaterMass_AliasTag_t>::get().native();
                SpeedReportType_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::NumericGUID_AliasTag_t>::get().native();
                SpeedReportType_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::DateTime>::get().native();

                /* Initialize the values for member annotations. */
                SpeedReportType_g_tc_members[0]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                SpeedReportType_g_tc_members[0]._annotations._minValue._u.double_value = -100000LL;
                SpeedReportType_g_tc_members[0]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                SpeedReportType_g_tc_members[0]._annotations._maxValue._u.double_value = 100000ULL;
                SpeedReportType_g_tc_members[1]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                SpeedReportType_g_tc_members[1]._annotations._minValue._u.double_value = 0ULL;
                SpeedReportType_g_tc_members[1]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                SpeedReportType_g_tc_members[1]._annotations._maxValue._u.double_value = 200ULL;
                SpeedReportType_g_tc_members[2]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                SpeedReportType_g_tc_members[2]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                SpeedReportType_g_tc_members[2]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                SpeedReportType_g_tc_members[2]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;
                SpeedReportType_g_tc_members[3]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                SpeedReportType_g_tc_members[3]._annotations._minValue._u.double_value = 0ULL;
                SpeedReportType_g_tc_members[3]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                SpeedReportType_g_tc_members[3]._annotations._maxValue._u.double_value = 299792458ULL;

                SpeedReportType_g_tc._data._sampleAccessInfo = sample_access_info();
                SpeedReportType_g_tc._data._typePlugin = type_plugin_info();    

                return &SpeedReportType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                ::UMAA::SA::SpeedStatus::SpeedReportType *sample;

                static RTIXCdrMemberAccessInfo SpeedReportType_g_memberAccessInfos[6] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo SpeedReportType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &SpeedReportType_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    ::UMAA::SA::SpeedStatus::SpeedReportType);
                if (sample == NULL) {
                    return NULL;
                }

                SpeedReportType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->engineRPM() - (char *)sample);

                SpeedReportType_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->speedOverGround() - (char *)sample);

                SpeedReportType_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->speedThroughAir() - (char *)sample);

                SpeedReportType_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->speedThroughWater() - (char *)sample);

                SpeedReportType_g_memberAccessInfos[4].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->source() - (char *)sample);

                SpeedReportType_g_memberAccessInfos[5].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->timeStamp() - (char *)sample);

                SpeedReportType_g_sampleAccessInfo.memberAccessInfos = 
                SpeedReportType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::SA::SpeedStatus::SpeedReportType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        SpeedReportType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        SpeedReportType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                SpeedReportType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                SpeedReportType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::SA::SpeedStatus::SpeedReportType >;

                SpeedReportType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &SpeedReportType_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin SpeedReportType_g_typePlugin = 
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

                return &SpeedReportType_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::StructType& dynamic_type< ::UMAA::SA::SpeedStatus::SpeedReportType >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::SA::SpeedStatus::SpeedReportType >::get())));
        }
    }
}

namespace dds { 
    namespace topic {
        void topic_type_support< ::UMAA::SA::SpeedStatus::SpeedReportType >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                ::UMAA::SA::SpeedStatus::SpeedReportTypePlugin_new,
                ::UMAA::SA::SpeedStatus::SpeedReportTypePlugin_delete);
        }

        std::vector<char>& topic_type_support< ::UMAA::SA::SpeedStatus::SpeedReportType >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const ::UMAA::SA::SpeedStatus::SpeedReportType& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = SpeedReportTypePlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = SpeedReportTypePlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< ::UMAA::SA::SpeedStatus::SpeedReportType >::from_cdr_buffer(::UMAA::SA::SpeedStatus::SpeedReportType& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = SpeedReportTypePlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create ::UMAA::SA::SpeedStatus::SpeedReportType from cdr buffer");
        }

        void topic_type_support< ::UMAA::SA::SpeedStatus::SpeedReportType >::reset_sample(::UMAA::SA::SpeedStatus::SpeedReportType& sample) 
        {
            ::rti::topic::reset_sample(sample.engineRPM());
            ::rti::topic::reset_sample(sample.speedOverGround());
            ::rti::topic::reset_sample(sample.speedThroughAir());
            ::rti::topic::reset_sample(sample.speedThroughWater());
            ::rti::topic::reset_sample(sample.source());
            ::rti::topic::reset_sample(sample.timeStamp());
        }

        void topic_type_support< ::UMAA::SA::SpeedStatus::SpeedReportType >::allocate_sample(::UMAA::SA::SpeedStatus::SpeedReportType& sample, int, int) 
        {
            ::rti::topic::allocate_sample(sample.source(),  -1, -1);
            ::rti::topic::allocate_sample(sample.timeStamp(),  -1, -1);
        }
    }
}  

#endif // NDDS_STANDALONE_TYPE
