

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from SpeedThroughWater.idl
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
#include "SpeedThroughWaterPlugin.hpp"
#else
#include "rti/topic/cdr/SerializationHelpers.hpp"
#endif

#include "SpeedThroughWater.hpp"

#include <rti/util/ostream_operators.hpp>

namespace UMAA {

    namespace Common {

        namespace Speed {

            // ---- SpeedThroughWater: 

            SpeedThroughWater::SpeedThroughWater() :
                m_speed_ (0.0)  {

            }   

            SpeedThroughWater::SpeedThroughWater (double speed_):
                m_speed_(speed_) {
            }

            void SpeedThroughWater::swap(SpeedThroughWater& other_)  noexcept 
            {
                using std::swap;
                swap(m_speed_, other_.m_speed_);
            }  

            bool SpeedThroughWater::operator == (const SpeedThroughWater& other_) const {
                if (std::fabs(m_speed_ - other_.m_speed_) > std::numeric_limits< double>::epsilon()
                && !(std::fabs(m_speed_ - other_.m_speed_) < (std::numeric_limits< double>::min)())) {
                    return false;
                }
                return true;
            }

            bool SpeedThroughWater::operator != (const SpeedThroughWater& other_) const {
                return !this->operator ==(other_);
            }

            std::ostream& operator << (std::ostream& o,const SpeedThroughWater& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                o <<"[";
                o << "speed: " << std::setprecision(15) << sample.speed ();
                o <<"]";
                return o;
            }

        } // namespace Speed  

    } // namespace Common  

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
        struct native_type_code< ::UMAA::Common::Speed::SpeedThroughWater > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member SpeedThroughWater_g_tc_members[1]=
                {

                    {
                        (char *)"speed",/* Member name */
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
                    }
                };

                static DDS_TypeCode SpeedThroughWater_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::Common::Speed::SpeedThroughWater", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        1, /* Number of members */
                        SpeedThroughWater_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for SpeedThroughWater*/

                if (is_initialized) {
                    return &SpeedThroughWater_g_tc;
                }

                is_initialized = RTI_TRUE;

                SpeedThroughWater_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                SpeedThroughWater_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::Speed_LocalWaterMass_AliasTag_t>::get().native();

                /* Initialize the values for member annotations. */
                SpeedThroughWater_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                SpeedThroughWater_g_tc_members[0]._annotations._defaultValue._u.double_value = 0.0;
                SpeedThroughWater_g_tc_members[0]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                SpeedThroughWater_g_tc_members[0]._annotations._minValue._u.double_value = 0ULL;
                SpeedThroughWater_g_tc_members[0]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                SpeedThroughWater_g_tc_members[0]._annotations._maxValue._u.double_value = 299792458ULL;

                SpeedThroughWater_g_tc._data._sampleAccessInfo = sample_access_info();
                SpeedThroughWater_g_tc._data._typePlugin = type_plugin_info();    

                return &SpeedThroughWater_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                ::UMAA::Common::Speed::SpeedThroughWater *sample;

                static RTIXCdrMemberAccessInfo SpeedThroughWater_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo SpeedThroughWater_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &SpeedThroughWater_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    ::UMAA::Common::Speed::SpeedThroughWater);
                if (sample == NULL) {
                    return NULL;
                }

                SpeedThroughWater_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->speed() - (char *)sample);

                SpeedThroughWater_g_sampleAccessInfo.memberAccessInfos = 
                SpeedThroughWater_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::Speed::SpeedThroughWater);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        SpeedThroughWater_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        SpeedThroughWater_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                SpeedThroughWater_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                SpeedThroughWater_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::Speed::SpeedThroughWater >;

                SpeedThroughWater_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &SpeedThroughWater_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin SpeedThroughWater_g_typePlugin = 
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

                return &SpeedThroughWater_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::StructType& dynamic_type< ::UMAA::Common::Speed::SpeedThroughWater >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::Speed::SpeedThroughWater >::get())));
        }
    }
}

namespace dds { 
    namespace topic {
        void topic_type_support< ::UMAA::Common::Speed::SpeedThroughWater >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                ::UMAA::Common::Speed::SpeedThroughWaterPlugin_new,
                ::UMAA::Common::Speed::SpeedThroughWaterPlugin_delete);
        }

        std::vector<char>& topic_type_support< ::UMAA::Common::Speed::SpeedThroughWater >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const ::UMAA::Common::Speed::SpeedThroughWater& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = SpeedThroughWaterPlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = SpeedThroughWaterPlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< ::UMAA::Common::Speed::SpeedThroughWater >::from_cdr_buffer(::UMAA::Common::Speed::SpeedThroughWater& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = SpeedThroughWaterPlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create ::UMAA::Common::Speed::SpeedThroughWater from cdr buffer");
        }

        void topic_type_support< ::UMAA::Common::Speed::SpeedThroughWater >::reset_sample(::UMAA::Common::Speed::SpeedThroughWater& sample) 
        {
            sample.speed(0.0);
        }

        void topic_type_support< ::UMAA::Common::Speed::SpeedThroughWater >::allocate_sample(::UMAA::Common::Speed::SpeedThroughWater& sample, int, int) 
        {
            RTIOsapiUtility_unusedParameter(sample);
        }
    }
}  

#endif // NDDS_STANDALONE_TYPE
