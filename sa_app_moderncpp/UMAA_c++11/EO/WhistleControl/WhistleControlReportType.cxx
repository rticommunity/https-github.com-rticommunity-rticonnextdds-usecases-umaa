

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from WhistleControlReportType.idl
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
#include "WhistleControlReportTypePlugin.hpp"
#else
#include "rti/topic/cdr/SerializationHelpers.hpp"
#endif

#include "WhistleControlReportType.hpp"

#include <rti/util/ostream_operators.hpp>

namespace UMAA {

    namespace EO {

        namespace WhistleControl {

            // ---- WhistleControlReportType: 

            WhistleControlReportType::WhistleControlReportType() :
                m_status_(UMAA::Common::Enumeration::OnOffStatusEnumType::OnOffStatusEnumType::OFF)  {

            }   

            WhistleControlReportType::WhistleControlReportType (const ::dds::core::optional< ::UMAA::Common::MaritimeEnumeration::BlastConditionEnumType::BlastConditionEnumType >& blastCondition_,const ::dds::core::optional< double >& blastNumber_,const ::UMAA::Common::Enumeration::OnOffStatusEnumType::OnOffStatusEnumType& status_,const ::UMAA::Common::Measurement::NumericGUID& source_,const ::UMAA::Common::Measurement::DateTime& timeStamp_):
                m_blastCondition_(blastCondition_), 
                m_blastNumber_(blastNumber_), 
                m_status_(status_), 
                m_source_(source_), 
                m_timeStamp_(timeStamp_) {
            }

            void WhistleControlReportType::swap(WhistleControlReportType& other_)  noexcept 
            {
                using std::swap;
                swap(m_blastCondition_, other_.m_blastCondition_);
                swap(m_blastNumber_, other_.m_blastNumber_);
                swap(m_status_, other_.m_status_);
                swap(m_source_, other_.m_source_);
                swap(m_timeStamp_, other_.m_timeStamp_);
            }  

            bool WhistleControlReportType::operator == (const WhistleControlReportType& other_) const {
                if (m_blastCondition_ != other_.m_blastCondition_) {
                    return false;
                }
                if (m_blastNumber_.has_value() != other_.m_blastNumber_.has_value()) {
                    return false;
                } else if (m_blastNumber_.has_value()) {
                    if (std::fabs(*m_blastNumber_ - *other_.m_blastNumber_) > std::numeric_limits< double>::epsilon()
                    && !(std::fabs(*m_blastNumber_ - *other_.m_blastNumber_) < (std::numeric_limits< double>::min)())) {
                        return false;
                    }
                }
                if (m_status_ != other_.m_status_) {
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

            bool WhistleControlReportType::operator != (const WhistleControlReportType& other_) const {
                return !this->operator ==(other_);
            }

            std::ostream& operator << (std::ostream& o,const WhistleControlReportType& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                o <<"[";
                o << "blastCondition: " << sample.blastCondition ()<<", ";
                o << "blastNumber: " << sample.blastNumber ()<<", ";
                o << "status: " << sample.status ()<<", ";
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
        struct native_type_code< ::UMAA::EO::WhistleControl::WhistleControlReportType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member WhistleControlReportType_g_tc_members[5]=
                {

                    {
                        (char *)"blastCondition",/* Member name */
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
                        (char *)"blastNumber",/* Member name */
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
                        (char *)"status",/* Member name */
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
                    }
                };

                static DDS_TypeCode WhistleControlReportType_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::EO::WhistleControl::WhistleControlReportType", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        5, /* Number of members */
                        WhistleControlReportType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for WhistleControlReportType*/

                if (is_initialized) {
                    return &WhistleControlReportType_g_tc;
                }

                is_initialized = RTI_TRUE;

                WhistleControlReportType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                WhistleControlReportType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::MaritimeEnumeration::BlastConditionEnumType::BlastConditionEnumType>::get().native();
                WhistleControlReportType_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::PositiveCount_AliasTag_t>::get().native();
                WhistleControlReportType_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Enumeration::OnOffStatusEnumType::OnOffStatusEnumType>::get().native();
                WhistleControlReportType_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::NumericGUID_AliasTag_t>::get().native();
                WhistleControlReportType_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::DateTime>::get().native();

                /* Initialize the values for member annotations. */
                WhistleControlReportType_g_tc_members[1]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                WhistleControlReportType_g_tc_members[1]._annotations._minValue._u.double_value = 0ULL;
                WhistleControlReportType_g_tc_members[1]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                WhistleControlReportType_g_tc_members[1]._annotations._maxValue._u.double_value = 2147483647ULL;
                WhistleControlReportType_g_tc_members[2]._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
                WhistleControlReportType_g_tc_members[2]._annotations._defaultValue._u.enumerated_value = 0;

                WhistleControlReportType_g_tc._data._sampleAccessInfo = sample_access_info();
                WhistleControlReportType_g_tc._data._typePlugin = type_plugin_info();    

                return &WhistleControlReportType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                ::UMAA::EO::WhistleControl::WhistleControlReportType *sample;

                static RTIXCdrMemberAccessInfo WhistleControlReportType_g_memberAccessInfos[5] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo WhistleControlReportType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &WhistleControlReportType_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    ::UMAA::EO::WhistleControl::WhistleControlReportType);
                if (sample == NULL) {
                    return NULL;
                }

                WhistleControlReportType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->blastCondition() - (char *)sample);

                WhistleControlReportType_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->blastNumber() - (char *)sample);

                WhistleControlReportType_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->status() - (char *)sample);

                WhistleControlReportType_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->source() - (char *)sample);

                WhistleControlReportType_g_memberAccessInfos[4].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->timeStamp() - (char *)sample);

                WhistleControlReportType_g_sampleAccessInfo.memberAccessInfos = 
                WhistleControlReportType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::EO::WhistleControl::WhistleControlReportType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        WhistleControlReportType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        WhistleControlReportType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                WhistleControlReportType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                WhistleControlReportType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::EO::WhistleControl::WhistleControlReportType >;

                WhistleControlReportType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &WhistleControlReportType_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin WhistleControlReportType_g_typePlugin = 
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

                return &WhistleControlReportType_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::StructType& dynamic_type< ::UMAA::EO::WhistleControl::WhistleControlReportType >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::EO::WhistleControl::WhistleControlReportType >::get())));
        }
    }
}

namespace dds { 
    namespace topic {
        void topic_type_support< ::UMAA::EO::WhistleControl::WhistleControlReportType >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                ::UMAA::EO::WhistleControl::WhistleControlReportTypePlugin_new,
                ::UMAA::EO::WhistleControl::WhistleControlReportTypePlugin_delete);
        }

        std::vector<char>& topic_type_support< ::UMAA::EO::WhistleControl::WhistleControlReportType >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const ::UMAA::EO::WhistleControl::WhistleControlReportType& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = WhistleControlReportTypePlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = WhistleControlReportTypePlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< ::UMAA::EO::WhistleControl::WhistleControlReportType >::from_cdr_buffer(::UMAA::EO::WhistleControl::WhistleControlReportType& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = WhistleControlReportTypePlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create ::UMAA::EO::WhistleControl::WhistleControlReportType from cdr buffer");
        }

        void topic_type_support< ::UMAA::EO::WhistleControl::WhistleControlReportType >::reset_sample(::UMAA::EO::WhistleControl::WhistleControlReportType& sample) 
        {
            ::rti::topic::reset_sample(sample.blastCondition());
            ::rti::topic::reset_sample(sample.blastNumber());
            sample.status(UMAA::Common::Enumeration::OnOffStatusEnumType::OnOffStatusEnumType::OFF);
            ::rti::topic::reset_sample(sample.source());
            ::rti::topic::reset_sample(sample.timeStamp());
        }

        void topic_type_support< ::UMAA::EO::WhistleControl::WhistleControlReportType >::allocate_sample(::UMAA::EO::WhistleControl::WhistleControlReportType& sample, int, int) 
        {
            ::rti::topic::allocate_sample(sample.status(),  -1, -1);
            ::rti::topic::allocate_sample(sample.source(),  -1, -1);
            ::rti::topic::allocate_sample(sample.timeStamp(),  -1, -1);
        }
    }
}  

#endif // NDDS_STANDALONE_TYPE
