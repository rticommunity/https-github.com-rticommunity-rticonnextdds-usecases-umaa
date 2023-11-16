

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from VideoIlluminatorReportType.idl
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
#include "VideoIlluminatorReportTypePlugin.hpp"
#else
#include "rti/topic/cdr/SerializationHelpers.hpp"
#endif

#include "VideoIlluminatorReportType.hpp"

#include <rti/util/ostream_operators.hpp>

namespace UMAA {

    namespace SEM {

        namespace VideoIlluminatorStatus {

            // ---- VideoIlluminatorReportType: 

            VideoIlluminatorReportType::VideoIlluminatorReportType() :
                m_beamWidth_ (0.0) ,
                m_level_ (0)  {

            }   

            VideoIlluminatorReportType::VideoIlluminatorReportType (double beamWidth_,int32_t level_,const ::UMAA::Common::Measurement::NumericGUID& source_,const ::UMAA::Common::Measurement::DateTime& timeStamp_):
                m_beamWidth_(beamWidth_), 
                m_level_(level_), 
                m_source_(source_), 
                m_timeStamp_(timeStamp_) {
            }

            void VideoIlluminatorReportType::swap(VideoIlluminatorReportType& other_)  noexcept 
            {
                using std::swap;
                swap(m_beamWidth_, other_.m_beamWidth_);
                swap(m_level_, other_.m_level_);
                swap(m_source_, other_.m_source_);
                swap(m_timeStamp_, other_.m_timeStamp_);
            }  

            bool VideoIlluminatorReportType::operator == (const VideoIlluminatorReportType& other_) const {
                if (std::fabs(m_beamWidth_ - other_.m_beamWidth_) > std::numeric_limits< double>::epsilon()
                && !(std::fabs(m_beamWidth_ - other_.m_beamWidth_) < (std::numeric_limits< double>::min)())) {
                    return false;
                }
                if (m_level_ != other_.m_level_) {
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

            bool VideoIlluminatorReportType::operator != (const VideoIlluminatorReportType& other_) const {
                return !this->operator ==(other_);
            }

            std::ostream& operator << (std::ostream& o,const VideoIlluminatorReportType& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                o <<"[";
                o << "beamWidth: " << std::setprecision(15) << sample.beamWidth ()<<", ";
                o << "level: " << sample.level ()<<", ";
                o << "source: " << sample.source ()<<", ";
                o << "timeStamp: " << sample.timeStamp ();
                o <<"]";
                return o;
            }

        } // namespace VideoIlluminatorStatus  

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
        struct native_type_code< ::UMAA::SEM::VideoIlluminatorStatus::VideoIlluminatorReportType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member VideoIlluminatorReportType_g_tc_members[4]=
                {

                    {
                        (char *)"beamWidth",/* Member name */
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
                        (char *)"level",/* Member name */
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
                        (char *)"timeStamp",/* Member name */
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
                    }
                };

                static DDS_TypeCode VideoIlluminatorReportType_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::SEM::VideoIlluminatorStatus::VideoIlluminatorReportType", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        4, /* Number of members */
                        VideoIlluminatorReportType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for VideoIlluminatorReportType*/

                if (is_initialized) {
                    return &VideoIlluminatorReportType_g_tc;
                }

                is_initialized = RTI_TRUE;

                VideoIlluminatorReportType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                VideoIlluminatorReportType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::Angle_AliasTag_t>::get().native();
                VideoIlluminatorReportType_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::Count_AliasTag_t>::get().native();
                VideoIlluminatorReportType_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::NumericGUID_AliasTag_t>::get().native();
                VideoIlluminatorReportType_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::DateTime>::get().native();

                /* Initialize the values for member annotations. */
                VideoIlluminatorReportType_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                VideoIlluminatorReportType_g_tc_members[0]._annotations._defaultValue._u.double_value = 0.0;
                VideoIlluminatorReportType_g_tc_members[0]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                VideoIlluminatorReportType_g_tc_members[0]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                VideoIlluminatorReportType_g_tc_members[0]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                VideoIlluminatorReportType_g_tc_members[0]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;
                VideoIlluminatorReportType_g_tc_members[1]._annotations._defaultValue._d = RTI_XCDR_TK_LONG;
                VideoIlluminatorReportType_g_tc_members[1]._annotations._defaultValue._u.long_value = 0;
                VideoIlluminatorReportType_g_tc_members[1]._annotations._minValue._d = RTI_XCDR_TK_LONG;
                VideoIlluminatorReportType_g_tc_members[1]._annotations._minValue._u.long_value = -2147483648L;
                VideoIlluminatorReportType_g_tc_members[1]._annotations._maxValue._d = RTI_XCDR_TK_LONG;
                VideoIlluminatorReportType_g_tc_members[1]._annotations._maxValue._u.long_value = 2147483647L;

                VideoIlluminatorReportType_g_tc._data._sampleAccessInfo = sample_access_info();
                VideoIlluminatorReportType_g_tc._data._typePlugin = type_plugin_info();    

                return &VideoIlluminatorReportType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                ::UMAA::SEM::VideoIlluminatorStatus::VideoIlluminatorReportType *sample;

                static RTIXCdrMemberAccessInfo VideoIlluminatorReportType_g_memberAccessInfos[4] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo VideoIlluminatorReportType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &VideoIlluminatorReportType_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    ::UMAA::SEM::VideoIlluminatorStatus::VideoIlluminatorReportType);
                if (sample == NULL) {
                    return NULL;
                }

                VideoIlluminatorReportType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->beamWidth() - (char *)sample);

                VideoIlluminatorReportType_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->level() - (char *)sample);

                VideoIlluminatorReportType_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->source() - (char *)sample);

                VideoIlluminatorReportType_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->timeStamp() - (char *)sample);

                VideoIlluminatorReportType_g_sampleAccessInfo.memberAccessInfos = 
                VideoIlluminatorReportType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::SEM::VideoIlluminatorStatus::VideoIlluminatorReportType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        VideoIlluminatorReportType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        VideoIlluminatorReportType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                VideoIlluminatorReportType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                VideoIlluminatorReportType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::SEM::VideoIlluminatorStatus::VideoIlluminatorReportType >;

                VideoIlluminatorReportType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &VideoIlluminatorReportType_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin VideoIlluminatorReportType_g_typePlugin = 
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

                return &VideoIlluminatorReportType_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::StructType& dynamic_type< ::UMAA::SEM::VideoIlluminatorStatus::VideoIlluminatorReportType >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::SEM::VideoIlluminatorStatus::VideoIlluminatorReportType >::get())));
        }
    }
}

namespace dds { 
    namespace topic {
        void topic_type_support< ::UMAA::SEM::VideoIlluminatorStatus::VideoIlluminatorReportType >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                ::UMAA::SEM::VideoIlluminatorStatus::VideoIlluminatorReportTypePlugin_new,
                ::UMAA::SEM::VideoIlluminatorStatus::VideoIlluminatorReportTypePlugin_delete);
        }

        std::vector<char>& topic_type_support< ::UMAA::SEM::VideoIlluminatorStatus::VideoIlluminatorReportType >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const ::UMAA::SEM::VideoIlluminatorStatus::VideoIlluminatorReportType& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = VideoIlluminatorReportTypePlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = VideoIlluminatorReportTypePlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< ::UMAA::SEM::VideoIlluminatorStatus::VideoIlluminatorReportType >::from_cdr_buffer(::UMAA::SEM::VideoIlluminatorStatus::VideoIlluminatorReportType& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = VideoIlluminatorReportTypePlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create ::UMAA::SEM::VideoIlluminatorStatus::VideoIlluminatorReportType from cdr buffer");
        }

        void topic_type_support< ::UMAA::SEM::VideoIlluminatorStatus::VideoIlluminatorReportType >::reset_sample(::UMAA::SEM::VideoIlluminatorStatus::VideoIlluminatorReportType& sample) 
        {
            sample.beamWidth(0.0);
            sample.level(0);
            ::rti::topic::reset_sample(sample.source());
            ::rti::topic::reset_sample(sample.timeStamp());
        }

        void topic_type_support< ::UMAA::SEM::VideoIlluminatorStatus::VideoIlluminatorReportType >::allocate_sample(::UMAA::SEM::VideoIlluminatorStatus::VideoIlluminatorReportType& sample, int, int) 
        {
            ::rti::topic::allocate_sample(sample.source(),  -1, -1);
            ::rti::topic::allocate_sample(sample.timeStamp(),  -1, -1);
        }
    }
}  

#endif // NDDS_STANDALONE_TYPE
