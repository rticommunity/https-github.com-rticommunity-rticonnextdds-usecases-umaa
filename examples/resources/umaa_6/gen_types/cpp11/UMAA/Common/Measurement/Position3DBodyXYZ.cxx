

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Position3DBodyXYZ.idl
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
#include "Position3DBodyXYZPlugin.hpp"
#else
#include "rti/topic/cdr/SerializationHelpers.hpp"
#endif

#include "Position3DBodyXYZ.hpp"

#include <rti/util/ostream_operators.hpp>

namespace UMAA {

    namespace Common {

        namespace Measurement {

            // ---- Position3DBodyXYZ: 

            Position3DBodyXYZ::Position3DBodyXYZ() :
                m_xAxis_ (0.0) ,
                m_yAxis_ (0.0) ,
                m_zAxis_ (0.0)  {

            }   

            Position3DBodyXYZ::Position3DBodyXYZ (double xAxis_,double yAxis_,double zAxis_):
                m_xAxis_(xAxis_), 
                m_yAxis_(yAxis_), 
                m_zAxis_(zAxis_) {
            }

            void Position3DBodyXYZ::swap(Position3DBodyXYZ& other_)  noexcept 
            {
                using std::swap;
                swap(m_xAxis_, other_.m_xAxis_);
                swap(m_yAxis_, other_.m_yAxis_);
                swap(m_zAxis_, other_.m_zAxis_);
            }  

            bool Position3DBodyXYZ::operator == (const Position3DBodyXYZ& other_) const {
                if (std::fabs(m_xAxis_ - other_.m_xAxis_) > std::numeric_limits< double>::epsilon()
                && !(std::fabs(m_xAxis_ - other_.m_xAxis_) < (std::numeric_limits< double>::min)())) {
                    return false;
                }
                if (std::fabs(m_yAxis_ - other_.m_yAxis_) > std::numeric_limits< double>::epsilon()
                && !(std::fabs(m_yAxis_ - other_.m_yAxis_) < (std::numeric_limits< double>::min)())) {
                    return false;
                }
                if (std::fabs(m_zAxis_ - other_.m_zAxis_) > std::numeric_limits< double>::epsilon()
                && !(std::fabs(m_zAxis_ - other_.m_zAxis_) < (std::numeric_limits< double>::min)())) {
                    return false;
                }
                return true;
            }

            bool Position3DBodyXYZ::operator != (const Position3DBodyXYZ& other_) const {
                return !this->operator ==(other_);
            }

            std::ostream& operator << (std::ostream& o,const Position3DBodyXYZ& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                o <<"[";
                o << "xAxis: " << std::setprecision(15) << sample.xAxis ()<<", ";
                o << "yAxis: " << std::setprecision(15) << sample.yAxis ()<<", ";
                o << "zAxis: " << std::setprecision(15) << sample.zAxis ();
                o <<"]";
                return o;
            }

        } // namespace Measurement  

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
        struct native_type_code< ::UMAA::Common::Measurement::Position3DBodyXYZ > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member Position3DBodyXYZ_g_tc_members[3]=
                {

                    {
                        (char *)"xAxis",/* Member name */
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
                        (char *)"yAxis",/* Member name */
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
                        (char *)"zAxis",/* Member name */
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
                    }
                };

                static DDS_TypeCode Position3DBodyXYZ_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::Common::Measurement::Position3DBodyXYZ", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        3, /* Number of members */
                        Position3DBodyXYZ_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for Position3DBodyXYZ*/

                if (is_initialized) {
                    return &Position3DBodyXYZ_g_tc;
                }

                is_initialized = RTI_TRUE;

                Position3DBodyXYZ_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                Position3DBodyXYZ_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::PrimitiveConstrained::XPosition_AliasTag_t>::get().native();
                Position3DBodyXYZ_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::PrimitiveConstrained::YPosition_AliasTag_t>::get().native();
                Position3DBodyXYZ_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::PrimitiveConstrained::ZPosition_AliasTag_t>::get().native();

                /* Initialize the values for member annotations. */
                Position3DBodyXYZ_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                Position3DBodyXYZ_g_tc_members[0]._annotations._defaultValue._u.double_value = 0.0;
                Position3DBodyXYZ_g_tc_members[0]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                Position3DBodyXYZ_g_tc_members[0]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                Position3DBodyXYZ_g_tc_members[0]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                Position3DBodyXYZ_g_tc_members[0]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;
                Position3DBodyXYZ_g_tc_members[1]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                Position3DBodyXYZ_g_tc_members[1]._annotations._defaultValue._u.double_value = 0.0;
                Position3DBodyXYZ_g_tc_members[1]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                Position3DBodyXYZ_g_tc_members[1]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                Position3DBodyXYZ_g_tc_members[1]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                Position3DBodyXYZ_g_tc_members[1]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;
                Position3DBodyXYZ_g_tc_members[2]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                Position3DBodyXYZ_g_tc_members[2]._annotations._defaultValue._u.double_value = 0.0;
                Position3DBodyXYZ_g_tc_members[2]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                Position3DBodyXYZ_g_tc_members[2]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                Position3DBodyXYZ_g_tc_members[2]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                Position3DBodyXYZ_g_tc_members[2]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                Position3DBodyXYZ_g_tc._data._sampleAccessInfo = sample_access_info();
                Position3DBodyXYZ_g_tc._data._typePlugin = type_plugin_info();    

                return &Position3DBodyXYZ_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                ::UMAA::Common::Measurement::Position3DBodyXYZ *sample;

                static RTIXCdrMemberAccessInfo Position3DBodyXYZ_g_memberAccessInfos[3] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo Position3DBodyXYZ_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &Position3DBodyXYZ_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    ::UMAA::Common::Measurement::Position3DBodyXYZ);
                if (sample == NULL) {
                    return NULL;
                }

                Position3DBodyXYZ_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->xAxis() - (char *)sample);

                Position3DBodyXYZ_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->yAxis() - (char *)sample);

                Position3DBodyXYZ_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->zAxis() - (char *)sample);

                Position3DBodyXYZ_g_sampleAccessInfo.memberAccessInfos = 
                Position3DBodyXYZ_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::Measurement::Position3DBodyXYZ);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        Position3DBodyXYZ_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        Position3DBodyXYZ_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                Position3DBodyXYZ_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                Position3DBodyXYZ_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::Measurement::Position3DBodyXYZ >;

                Position3DBodyXYZ_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &Position3DBodyXYZ_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin Position3DBodyXYZ_g_typePlugin = 
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

                return &Position3DBodyXYZ_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::StructType& dynamic_type< ::UMAA::Common::Measurement::Position3DBodyXYZ >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::Measurement::Position3DBodyXYZ >::get())));
        }
    }
}

namespace dds { 
    namespace topic {

        void topic_type_support< ::UMAA::Common::Measurement::Position3DBodyXYZ >::reset_sample(::UMAA::Common::Measurement::Position3DBodyXYZ& sample) 
        {
            sample.xAxis(0.0);
            sample.yAxis(0.0);
            sample.zAxis(0.0);
        }

        void topic_type_support< ::UMAA::Common::Measurement::Position3DBodyXYZ >::allocate_sample(::UMAA::Common::Measurement::Position3DBodyXYZ& sample, int, int) 
        {
            RTIOsapiUtility_unusedParameter(sample);
        }
    }
}  

#endif // NDDS_STANDALONE_TYPE
