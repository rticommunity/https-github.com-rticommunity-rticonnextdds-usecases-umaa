

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from BallastTankSpecsReportType.idl
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
#include "BallastTankSpecsReportTypePlugin.hpp"
#else
#include "rti/topic/cdr/SerializationHelpers.hpp"
#endif

#include "BallastTankSpecsReportType.hpp"

#include <rti/util/ostream_operators.hpp>

namespace UMAA {

    namespace EO {

        namespace BallastTank {

            // ---- BallastTankSpecsReportType: 

            BallastTankSpecsReportType::BallastTankSpecsReportType() :
                m_massCapacity_ (0.0) ,
                m_name_ ("") ,
                m_trimTank_ (0) ,
                m_volumeCapacity_ (0.0)  {

            }   

            BallastTankSpecsReportType::BallastTankSpecsReportType (double massCapacity_,const std::string& name_,bool trimTank_,double volumeCapacity_,const ::UMAA::Common::Measurement::DateTime& timeStamp_,const ::UMAA::Common::IdentifierType& source_):
                m_massCapacity_(massCapacity_), 
                m_name_(name_), 
                m_trimTank_(trimTank_), 
                m_volumeCapacity_(volumeCapacity_), 
                m_timeStamp_(timeStamp_), 
                m_source_(source_) {
            }

            void BallastTankSpecsReportType::swap(BallastTankSpecsReportType& other_)  noexcept 
            {
                using std::swap;
                swap(m_massCapacity_, other_.m_massCapacity_);
                swap(m_name_, other_.m_name_);
                swap(m_trimTank_, other_.m_trimTank_);
                swap(m_volumeCapacity_, other_.m_volumeCapacity_);
                swap(m_timeStamp_, other_.m_timeStamp_);
                swap(m_source_, other_.m_source_);
            }  

            bool BallastTankSpecsReportType::operator == (const BallastTankSpecsReportType& other_) const {
                if (std::fabs(m_massCapacity_ - other_.m_massCapacity_) > std::numeric_limits< double>::epsilon()
                && !(std::fabs(m_massCapacity_ - other_.m_massCapacity_) < (std::numeric_limits< double>::min)())) {
                    return false;
                }
                if (m_name_ != other_.m_name_) {
                    return false;
                }
                if (m_trimTank_ != other_.m_trimTank_) {
                    return false;
                }
                if (std::fabs(m_volumeCapacity_ - other_.m_volumeCapacity_) > std::numeric_limits< double>::epsilon()
                && !(std::fabs(m_volumeCapacity_ - other_.m_volumeCapacity_) < (std::numeric_limits< double>::min)())) {
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

            bool BallastTankSpecsReportType::operator != (const BallastTankSpecsReportType& other_) const {
                return !this->operator ==(other_);
            }

            std::ostream& operator << (std::ostream& o,const BallastTankSpecsReportType& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                o <<"[";
                o << "massCapacity: " << std::setprecision(15) << sample.massCapacity ()<<", ";
                o << "name: " << sample.name ()<<", ";
                o << "trimTank: " << sample.trimTank ()<<", ";
                o << "volumeCapacity: " << std::setprecision(15) << sample.volumeCapacity ()<<", ";
                o << "timeStamp: " << sample.timeStamp ()<<", ";
                o << "source: " << sample.source ();
                o <<"]";
                return o;
            }

        } // namespace BallastTank  

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
        struct native_type_code< ::UMAA::EO::BallastTank::BallastTankSpecsReportType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member BallastTankSpecsReportType_g_tc_members[6]=
                {

                    {
                        (char *)"massCapacity",/* Member name */
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
                        (char *)"name",/* Member name */
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
                        (char *)"trimTank",/* Member name */
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
                        (char *)"volumeCapacity",/* Member name */
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

                static DDS_TypeCode BallastTankSpecsReportType_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::EO::BallastTank::BallastTankSpecsReportType", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        6, /* Number of members */
                        BallastTankSpecsReportType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for BallastTankSpecsReportType*/

                if (is_initialized) {
                    return &BallastTankSpecsReportType_g_tc;
                }

                is_initialized = RTI_TRUE;

                BallastTankSpecsReportType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                BallastTankSpecsReportType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::Mass_AliasTag_t>::get().native();
                BallastTankSpecsReportType_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::PrimitiveConstrained::StringShortDescription_AliasTag_t>::get().native();
                BallastTankSpecsReportType_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                BallastTankSpecsReportType_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::VolumeCubicMeter_AliasTag_t>::get().native();
                BallastTankSpecsReportType_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::DateTime>::get().native();
                BallastTankSpecsReportType_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::IdentifierType>::get().native();

                /* Initialize the values for member annotations. */
                BallastTankSpecsReportType_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                BallastTankSpecsReportType_g_tc_members[0]._annotations._defaultValue._u.double_value = 0.0;
                BallastTankSpecsReportType_g_tc_members[0]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                BallastTankSpecsReportType_g_tc_members[0]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                BallastTankSpecsReportType_g_tc_members[0]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                BallastTankSpecsReportType_g_tc_members[0]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;
                BallastTankSpecsReportType_g_tc_members[1]._annotations._defaultValue._d = RTI_XCDR_TK_STRING;
                BallastTankSpecsReportType_g_tc_members[1]._annotations._defaultValue._u.string_value = (DDS_Char *) "";
                BallastTankSpecsReportType_g_tc_members[2]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                BallastTankSpecsReportType_g_tc_members[2]._annotations._defaultValue._u.boolean_value = 0;
                BallastTankSpecsReportType_g_tc_members[3]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                BallastTankSpecsReportType_g_tc_members[3]._annotations._defaultValue._u.double_value = 0.0;
                BallastTankSpecsReportType_g_tc_members[3]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                BallastTankSpecsReportType_g_tc_members[3]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                BallastTankSpecsReportType_g_tc_members[3]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                BallastTankSpecsReportType_g_tc_members[3]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                BallastTankSpecsReportType_g_tc._data._sampleAccessInfo = sample_access_info();
                BallastTankSpecsReportType_g_tc._data._typePlugin = type_plugin_info();    

                return &BallastTankSpecsReportType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                ::UMAA::EO::BallastTank::BallastTankSpecsReportType *sample;

                static RTIXCdrMemberAccessInfo BallastTankSpecsReportType_g_memberAccessInfos[6] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo BallastTankSpecsReportType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &BallastTankSpecsReportType_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    ::UMAA::EO::BallastTank::BallastTankSpecsReportType);
                if (sample == NULL) {
                    return NULL;
                }

                BallastTankSpecsReportType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->massCapacity() - (char *)sample);

                BallastTankSpecsReportType_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->name() - (char *)sample);

                BallastTankSpecsReportType_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->trimTank() - (char *)sample);

                BallastTankSpecsReportType_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->volumeCapacity() - (char *)sample);

                BallastTankSpecsReportType_g_memberAccessInfos[4].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->timeStamp() - (char *)sample);

                BallastTankSpecsReportType_g_memberAccessInfos[5].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->source() - (char *)sample);

                BallastTankSpecsReportType_g_sampleAccessInfo.memberAccessInfos = 
                BallastTankSpecsReportType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::EO::BallastTank::BallastTankSpecsReportType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        BallastTankSpecsReportType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        BallastTankSpecsReportType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                BallastTankSpecsReportType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                BallastTankSpecsReportType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::EO::BallastTank::BallastTankSpecsReportType >;

                BallastTankSpecsReportType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &BallastTankSpecsReportType_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin BallastTankSpecsReportType_g_typePlugin = 
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

                return &BallastTankSpecsReportType_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::StructType& dynamic_type< ::UMAA::EO::BallastTank::BallastTankSpecsReportType >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::EO::BallastTank::BallastTankSpecsReportType >::get())));
        }
    }
}

namespace dds { 
    namespace topic {
        void topic_type_support< ::UMAA::EO::BallastTank::BallastTankSpecsReportType >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                ::UMAA::EO::BallastTank::BallastTankSpecsReportTypePlugin_new,
                ::UMAA::EO::BallastTank::BallastTankSpecsReportTypePlugin_delete);
        }

        std::vector<char>& topic_type_support< ::UMAA::EO::BallastTank::BallastTankSpecsReportType >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const ::UMAA::EO::BallastTank::BallastTankSpecsReportType& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = BallastTankSpecsReportTypePlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = BallastTankSpecsReportTypePlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< ::UMAA::EO::BallastTank::BallastTankSpecsReportType >::from_cdr_buffer(::UMAA::EO::BallastTank::BallastTankSpecsReportType& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = BallastTankSpecsReportTypePlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create ::UMAA::EO::BallastTank::BallastTankSpecsReportType from cdr buffer");
        }

        void topic_type_support< ::UMAA::EO::BallastTank::BallastTankSpecsReportType >::reset_sample(::UMAA::EO::BallastTank::BallastTankSpecsReportType& sample) 
        {
            sample.massCapacity(0.0);
            sample.name("");
            sample.trimTank(0);
            sample.volumeCapacity(0.0);
            ::rti::topic::reset_sample(sample.timeStamp());
            ::rti::topic::reset_sample(sample.source());
        }

        void topic_type_support< ::UMAA::EO::BallastTank::BallastTankSpecsReportType >::allocate_sample(::UMAA::EO::BallastTank::BallastTankSpecsReportType& sample, int, int) 
        {
            ::rti::topic::allocate_sample(sample.name(),  -1, 1023L);
            ::rti::topic::allocate_sample(sample.timeStamp(),  -1, -1);
            ::rti::topic::allocate_sample(sample.source(),  -1, -1);
        }
    }
}  

#endif // NDDS_STANDALONE_TYPE
