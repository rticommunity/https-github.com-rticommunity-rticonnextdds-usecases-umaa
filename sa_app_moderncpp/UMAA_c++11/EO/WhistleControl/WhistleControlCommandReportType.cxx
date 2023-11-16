

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from WhistleControlCommandReportType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#include <iosfwd>
#include <iomanip>

#ifndef NDDS_STANDALONE_TYPE
#include "rti/topic/cdr/Serialization.hpp"
#include "WhistleControlCommandReportTypePlugin.hpp"
#else
#include "rti/topic/cdr/SerializationHelpers.hpp"
#endif

#include "WhistleControlCommandReportType.hpp"

#include <rti/util/ostream_operators.hpp>

namespace UMAA {

    namespace EO {

        namespace WhistleControl {

            // ---- WhistleControlCommandReportType: 

            WhistleControlCommandReportType::WhistleControlCommandReportType() :
                m_status_(UMAA::Common::Enumeration::OnOffStatusEnumType::OnOffStatusEnumType::OFF)  {

            }   

            WhistleControlCommandReportType::WhistleControlCommandReportType (const ::UMAA::Common::Enumeration::OnOffStatusEnumType::OnOffStatusEnumType& status_,const ::dds::core::optional< ::UMAA::Common::Propulsion::WhistlePropertiesType >& whistleProperties_,const ::UMAA::Common::Measurement::NumericGUID& source_,const ::UMAA::Common::Measurement::DateTime& timeStamp_):
                m_status_(status_), 
                m_whistleProperties_(whistleProperties_), 
                m_source_(source_), 
                m_timeStamp_(timeStamp_) {
            }

            void WhistleControlCommandReportType::swap(WhistleControlCommandReportType& other_)  noexcept 
            {
                using std::swap;
                swap(m_status_, other_.m_status_);
                swap(m_whistleProperties_, other_.m_whistleProperties_);
                swap(m_source_, other_.m_source_);
                swap(m_timeStamp_, other_.m_timeStamp_);
            }  

            bool WhistleControlCommandReportType::operator == (const WhistleControlCommandReportType& other_) const {
                if (m_status_ != other_.m_status_) {
                    return false;
                }
                if (m_whistleProperties_ != other_.m_whistleProperties_) {
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

            bool WhistleControlCommandReportType::operator != (const WhistleControlCommandReportType& other_) const {
                return !this->operator ==(other_);
            }

            std::ostream& operator << (std::ostream& o,const WhistleControlCommandReportType& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                o <<"[";
                o << "status: " << sample.status ()<<", ";
                o << "whistleProperties: " << sample.whistleProperties ()<<", ";
                o << "source: " << sample.source ()<<", ";
                o << "timeStamp: " << sample.timeStamp ();
                o <<"]";
                return o;
            }

        } // namespace WhistleControl  

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
        struct native_type_code< ::UMAA::EO::WhistleControl::WhistleControlCommandReportType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member WhistleControlCommandReportType_g_tc_members[4]=
                {

                    {
                        (char *)"status",/* Member name */
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
                        (char *)"whistleProperties",/* Member name */
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

                static DDS_TypeCode WhistleControlCommandReportType_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::EO::WhistleControl::WhistleControlCommandReportType", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        4, /* Number of members */
                        WhistleControlCommandReportType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for WhistleControlCommandReportType*/

                if (is_initialized) {
                    return &WhistleControlCommandReportType_g_tc;
                }

                is_initialized = RTI_TRUE;

                WhistleControlCommandReportType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                WhistleControlCommandReportType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Enumeration::OnOffStatusEnumType::OnOffStatusEnumType>::get().native();
                WhistleControlCommandReportType_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Propulsion::WhistlePropertiesType>::get().native();
                WhistleControlCommandReportType_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::NumericGUID_AliasTag_t>::get().native();
                WhistleControlCommandReportType_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::DateTime>::get().native();

                /* Initialize the values for member annotations. */
                WhistleControlCommandReportType_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
                WhistleControlCommandReportType_g_tc_members[0]._annotations._defaultValue._u.enumerated_value = 0;

                WhistleControlCommandReportType_g_tc._data._sampleAccessInfo = sample_access_info();
                WhistleControlCommandReportType_g_tc._data._typePlugin = type_plugin_info();    

                return &WhistleControlCommandReportType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                ::UMAA::EO::WhistleControl::WhistleControlCommandReportType *sample;

                static RTIXCdrMemberAccessInfo WhistleControlCommandReportType_g_memberAccessInfos[4] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo WhistleControlCommandReportType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &WhistleControlCommandReportType_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    ::UMAA::EO::WhistleControl::WhistleControlCommandReportType);
                if (sample == NULL) {
                    return NULL;
                }

                WhistleControlCommandReportType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->status() - (char *)sample);

                WhistleControlCommandReportType_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->whistleProperties() - (char *)sample);

                WhistleControlCommandReportType_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->source() - (char *)sample);

                WhistleControlCommandReportType_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->timeStamp() - (char *)sample);

                WhistleControlCommandReportType_g_sampleAccessInfo.memberAccessInfos = 
                WhistleControlCommandReportType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::EO::WhistleControl::WhistleControlCommandReportType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        WhistleControlCommandReportType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        WhistleControlCommandReportType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                WhistleControlCommandReportType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                WhistleControlCommandReportType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::EO::WhistleControl::WhistleControlCommandReportType >;

                WhistleControlCommandReportType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &WhistleControlCommandReportType_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin WhistleControlCommandReportType_g_typePlugin = 
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

                return &WhistleControlCommandReportType_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::StructType& dynamic_type< ::UMAA::EO::WhistleControl::WhistleControlCommandReportType >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::EO::WhistleControl::WhistleControlCommandReportType >::get())));
        }
    }
}

namespace dds { 
    namespace topic {
        void topic_type_support< ::UMAA::EO::WhistleControl::WhistleControlCommandReportType >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                ::UMAA::EO::WhistleControl::WhistleControlCommandReportTypePlugin_new,
                ::UMAA::EO::WhistleControl::WhistleControlCommandReportTypePlugin_delete);
        }

        std::vector<char>& topic_type_support< ::UMAA::EO::WhistleControl::WhistleControlCommandReportType >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const ::UMAA::EO::WhistleControl::WhistleControlCommandReportType& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = WhistleControlCommandReportTypePlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = WhistleControlCommandReportTypePlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< ::UMAA::EO::WhistleControl::WhistleControlCommandReportType >::from_cdr_buffer(::UMAA::EO::WhistleControl::WhistleControlCommandReportType& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = WhistleControlCommandReportTypePlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create ::UMAA::EO::WhistleControl::WhistleControlCommandReportType from cdr buffer");
        }

        void topic_type_support< ::UMAA::EO::WhistleControl::WhistleControlCommandReportType >::reset_sample(::UMAA::EO::WhistleControl::WhistleControlCommandReportType& sample) 
        {
            sample.status(UMAA::Common::Enumeration::OnOffStatusEnumType::OnOffStatusEnumType::OFF);
            ::rti::topic::reset_sample(sample.whistleProperties());
            ::rti::topic::reset_sample(sample.source());
            ::rti::topic::reset_sample(sample.timeStamp());
        }

        void topic_type_support< ::UMAA::EO::WhistleControl::WhistleControlCommandReportType >::allocate_sample(::UMAA::EO::WhistleControl::WhistleControlCommandReportType& sample, int, int) 
        {
            ::rti::topic::allocate_sample(sample.status(),  -1, -1);
            ::rti::topic::allocate_sample(sample.source(),  -1, -1);
            ::rti::topic::allocate_sample(sample.timeStamp(),  -1, -1);
        }
    }
}  

#endif // NDDS_STANDALONE_TYPE
