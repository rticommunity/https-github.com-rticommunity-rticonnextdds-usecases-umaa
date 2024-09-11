

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from UVPlatformCapabilitiesReportType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
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
#include "UVPlatformCapabilitiesReportTypePlugin.hpp"
#else
#include "rti/topic/cdr/SerializationHelpers.hpp"
#endif

#include "UVPlatformCapabilitiesReportType.hpp"

#include <rti/util/ostream_operators.hpp>

namespace UMAA {

    namespace EO {

        namespace UVPlatformSpecs {

            // ---- UVPlatformCapabilitiesReportType: 

            UVPlatformCapabilitiesReportType::UVPlatformCapabilitiesReportType() :
                m_minWaterDepth_ (0.0)  {

            }   

            UVPlatformCapabilitiesReportType::UVPlatformCapabilitiesReportType (double minWaterDepth_,const ::UMAA::EO::UVPlatformSpecs::SurfaceCapabilityLimitsType& surfaceCapabilities_,const ::dds::core::optional< double >& towingCapacity_,const ::dds::core::optional< ::UMAA::EO::UVPlatformSpecs::UnderwaterCapabilityLimitsType >& underwaterCapabilities_,const ::UMAA::Common::Measurement::DateTime& timeStamp_,const ::UMAA::Common::IdentifierType& source_):
                m_minWaterDepth_(minWaterDepth_), 
                m_surfaceCapabilities_(surfaceCapabilities_), 
                m_towingCapacity_(towingCapacity_), 
                m_underwaterCapabilities_(underwaterCapabilities_), 
                m_timeStamp_(timeStamp_), 
                m_source_(source_) {
            }

            void UVPlatformCapabilitiesReportType::swap(UVPlatformCapabilitiesReportType& other_)  noexcept 
            {
                using std::swap;
                swap(m_minWaterDepth_, other_.m_minWaterDepth_);
                swap(m_surfaceCapabilities_, other_.m_surfaceCapabilities_);
                swap(m_towingCapacity_, other_.m_towingCapacity_);
                swap(m_underwaterCapabilities_, other_.m_underwaterCapabilities_);
                swap(m_timeStamp_, other_.m_timeStamp_);
                swap(m_source_, other_.m_source_);
            }  

            bool UVPlatformCapabilitiesReportType::operator == (const UVPlatformCapabilitiesReportType& other_) const {
                if (std::fabs(m_minWaterDepth_ - other_.m_minWaterDepth_) > std::numeric_limits< double>::epsilon()
                && !(std::fabs(m_minWaterDepth_ - other_.m_minWaterDepth_) < (std::numeric_limits< double>::min)())) {
                    return false;
                }
                if (m_surfaceCapabilities_ != other_.m_surfaceCapabilities_) {
                    return false;
                }
                if (m_towingCapacity_.has_value() != other_.m_towingCapacity_.has_value()) {
                    return false;
                } else if (m_towingCapacity_.has_value()) {
                    if (std::fabs(*m_towingCapacity_ - *other_.m_towingCapacity_) > std::numeric_limits< double>::epsilon()
                    && !(std::fabs(*m_towingCapacity_ - *other_.m_towingCapacity_) < (std::numeric_limits< double>::min)())) {
                        return false;
                    }
                }
                if (m_underwaterCapabilities_ != other_.m_underwaterCapabilities_) {
                    return false;
                }
                if (m_timeStamp_ != other_.m_timeStamp_) {
                    return false;
                }
                if (m_source_ != other_.m_source_) {
                    return false;
                }
                return true;
            }

            bool UVPlatformCapabilitiesReportType::operator != (const UVPlatformCapabilitiesReportType& other_) const {
                return !this->operator ==(other_);
            }

            std::ostream& operator << (std::ostream& o,const UVPlatformCapabilitiesReportType& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                o <<"[";
                o << "minWaterDepth: " << std::setprecision(15) << sample.minWaterDepth ()<<", ";
                o << "surfaceCapabilities: " << sample.surfaceCapabilities ()<<", ";
                o << "towingCapacity: " << sample.towingCapacity ()<<", ";
                o << "underwaterCapabilities: " << sample.underwaterCapabilities ()<<", ";
                o << "timeStamp: " << sample.timeStamp ()<<", ";
                o << "source: " << sample.source ();
                o <<"]";
                return o;
            }

        } // namespace UVPlatformSpecs  

    } // namespace EO  

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
        struct native_type_code< ::UMAA::EO::UVPlatformSpecs::UVPlatformCapabilitiesReportType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member UVPlatformCapabilitiesReportType_g_tc_members[6]=
                {

                    {
                        (char *)"minWaterDepth",/* Member name */
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
                        (char *)"surfaceCapabilities",/* Member name */
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
                        (char *)"towingCapacity",/* Member name */
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
                        (char *)"underwaterCapabilities",/* Member name */
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
                        (char *)"timeStamp",/* Member name */
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
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"source",/* Member name */
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

                static DDS_TypeCode UVPlatformCapabilitiesReportType_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::EO::UVPlatformSpecs::UVPlatformCapabilitiesReportType", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        6, /* Number of members */
                        UVPlatformCapabilitiesReportType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for UVPlatformCapabilitiesReportType*/

                if (is_initialized) {
                    return &UVPlatformCapabilitiesReportType_g_tc;
                }

                is_initialized = RTI_TRUE;

                UVPlatformCapabilitiesReportType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                UVPlatformCapabilitiesReportType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::DistanceBSL_AliasTag_t>::get().native();
                UVPlatformCapabilitiesReportType_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::EO::UVPlatformSpecs::SurfaceCapabilityLimitsType>::get().native();
                UVPlatformCapabilitiesReportType_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::MassMetricTon_AliasTag_t>::get().native();
                UVPlatformCapabilitiesReportType_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::EO::UVPlatformSpecs::UnderwaterCapabilityLimitsType>::get().native();
                UVPlatformCapabilitiesReportType_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::DateTime>::get().native();
                UVPlatformCapabilitiesReportType_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::IdentifierType>::get().native();

                /* Initialize the values for member annotations. */
                UVPlatformCapabilitiesReportType_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                UVPlatformCapabilitiesReportType_g_tc_members[0]._annotations._defaultValue._u.double_value = 0.0;
                UVPlatformCapabilitiesReportType_g_tc_members[0]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                UVPlatformCapabilitiesReportType_g_tc_members[0]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                UVPlatformCapabilitiesReportType_g_tc_members[0]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                UVPlatformCapabilitiesReportType_g_tc_members[0]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;
                UVPlatformCapabilitiesReportType_g_tc_members[2]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                UVPlatformCapabilitiesReportType_g_tc_members[2]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                UVPlatformCapabilitiesReportType_g_tc_members[2]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                UVPlatformCapabilitiesReportType_g_tc_members[2]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                UVPlatformCapabilitiesReportType_g_tc._data._sampleAccessInfo = sample_access_info();
                UVPlatformCapabilitiesReportType_g_tc._data._typePlugin = type_plugin_info();    

                return &UVPlatformCapabilitiesReportType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                ::UMAA::EO::UVPlatformSpecs::UVPlatformCapabilitiesReportType *sample;

                static RTIXCdrMemberAccessInfo UVPlatformCapabilitiesReportType_g_memberAccessInfos[6] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo UVPlatformCapabilitiesReportType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &UVPlatformCapabilitiesReportType_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    ::UMAA::EO::UVPlatformSpecs::UVPlatformCapabilitiesReportType);
                if (sample == NULL) {
                    return NULL;
                }

                UVPlatformCapabilitiesReportType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->minWaterDepth() - (char *)sample);

                UVPlatformCapabilitiesReportType_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->surfaceCapabilities() - (char *)sample);

                UVPlatformCapabilitiesReportType_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->towingCapacity() - (char *)sample);

                UVPlatformCapabilitiesReportType_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->underwaterCapabilities() - (char *)sample);

                UVPlatformCapabilitiesReportType_g_memberAccessInfos[4].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->timeStamp() - (char *)sample);

                UVPlatformCapabilitiesReportType_g_memberAccessInfos[5].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->source() - (char *)sample);

                UVPlatformCapabilitiesReportType_g_sampleAccessInfo.memberAccessInfos = 
                UVPlatformCapabilitiesReportType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::EO::UVPlatformSpecs::UVPlatformCapabilitiesReportType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        UVPlatformCapabilitiesReportType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        UVPlatformCapabilitiesReportType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                UVPlatformCapabilitiesReportType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                UVPlatformCapabilitiesReportType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::EO::UVPlatformSpecs::UVPlatformCapabilitiesReportType >;

                UVPlatformCapabilitiesReportType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &UVPlatformCapabilitiesReportType_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin UVPlatformCapabilitiesReportType_g_typePlugin = 
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

                return &UVPlatformCapabilitiesReportType_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::StructType& dynamic_type< ::UMAA::EO::UVPlatformSpecs::UVPlatformCapabilitiesReportType >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::EO::UVPlatformSpecs::UVPlatformCapabilitiesReportType >::get())));
        }
    }
}

namespace dds { 
    namespace topic {
        void topic_type_support< ::UMAA::EO::UVPlatformSpecs::UVPlatformCapabilitiesReportType >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                ::UMAA::EO::UVPlatformSpecs::UVPlatformCapabilitiesReportTypePlugin_new,
                ::UMAA::EO::UVPlatformSpecs::UVPlatformCapabilitiesReportTypePlugin_delete);
        }

        std::vector<char>& topic_type_support< ::UMAA::EO::UVPlatformSpecs::UVPlatformCapabilitiesReportType >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const ::UMAA::EO::UVPlatformSpecs::UVPlatformCapabilitiesReportType& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = UVPlatformCapabilitiesReportTypePlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = UVPlatformCapabilitiesReportTypePlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< ::UMAA::EO::UVPlatformSpecs::UVPlatformCapabilitiesReportType >::from_cdr_buffer(::UMAA::EO::UVPlatformSpecs::UVPlatformCapabilitiesReportType& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = UVPlatformCapabilitiesReportTypePlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create ::UMAA::EO::UVPlatformSpecs::UVPlatformCapabilitiesReportType from cdr buffer");
        }

        void topic_type_support< ::UMAA::EO::UVPlatformSpecs::UVPlatformCapabilitiesReportType >::reset_sample(::UMAA::EO::UVPlatformSpecs::UVPlatformCapabilitiesReportType& sample) 
        {
            sample.minWaterDepth(0.0);
            ::rti::topic::reset_sample(sample.surfaceCapabilities());
            ::rti::topic::reset_sample(sample.towingCapacity());
            ::rti::topic::reset_sample(sample.underwaterCapabilities());
            ::rti::topic::reset_sample(sample.timeStamp());
            ::rti::topic::reset_sample(sample.source());
        }

        void topic_type_support< ::UMAA::EO::UVPlatformSpecs::UVPlatformCapabilitiesReportType >::allocate_sample(::UMAA::EO::UVPlatformSpecs::UVPlatformCapabilitiesReportType& sample, int, int) 
        {
            ::rti::topic::allocate_sample(sample.surfaceCapabilities(),  -1, -1);
            ::rti::topic::allocate_sample(sample.timeStamp(),  -1, -1);
            ::rti::topic::allocate_sample(sample.source(),  -1, -1);
        }
    }
}  

#endif // NDDS_STANDALONE_TYPE
