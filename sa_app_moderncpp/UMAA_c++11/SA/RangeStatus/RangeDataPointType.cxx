

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from RangeDataPointType.idl
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
#include "RangeDataPointTypePlugin.hpp"
#else
#include "rti/topic/cdr/SerializationHelpers.hpp"
#endif

#include "RangeDataPointType.hpp"

#include <rti/util/ostream_operators.hpp>

namespace UMAA {

    namespace SA {

        namespace RangeStatus {

            // ---- RangeDataPointType: 

            RangeDataPointType::RangeDataPointType() :
                m_bearing_ (0.0) ,
                m_bearingValidity_ (0) ,
                m_inclination_ (0.0) ,
                m_inclinationValidity_ (0) ,
                m_range_ (0.0) ,
                m_rangeValidity_ (0)  {

            }   

            RangeDataPointType::RangeDataPointType (double bearing_,bool bearingValidity_,const ::UMAA::Common::Measurement::CovariancePolarType& dataPointCovariance_,double inclination_,bool inclinationValidity_,double range_,bool rangeValidity_,const ::UMAA::Common::Measurement::NumericGUID& pointID_):
                m_bearing_(bearing_), 
                m_bearingValidity_(bearingValidity_), 
                m_dataPointCovariance_(dataPointCovariance_), 
                m_inclination_(inclination_), 
                m_inclinationValidity_(inclinationValidity_), 
                m_range_(range_), 
                m_rangeValidity_(rangeValidity_), 
                m_pointID_(pointID_) {
            }

            void RangeDataPointType::swap(RangeDataPointType& other_)  noexcept 
            {
                using std::swap;
                swap(m_bearing_, other_.m_bearing_);
                swap(m_bearingValidity_, other_.m_bearingValidity_);
                swap(m_dataPointCovariance_, other_.m_dataPointCovariance_);
                swap(m_inclination_, other_.m_inclination_);
                swap(m_inclinationValidity_, other_.m_inclinationValidity_);
                swap(m_range_, other_.m_range_);
                swap(m_rangeValidity_, other_.m_rangeValidity_);
                swap(m_pointID_, other_.m_pointID_);
            }  

            bool RangeDataPointType::operator == (const RangeDataPointType& other_) const {
                if (std::fabs(m_bearing_ - other_.m_bearing_) > std::numeric_limits< double>::epsilon()
                && !(std::fabs(m_bearing_ - other_.m_bearing_) < (std::numeric_limits< double>::min)())) {
                    return false;
                }
                if (m_bearingValidity_ != other_.m_bearingValidity_) {
                    return false;
                }
                if (m_dataPointCovariance_ != other_.m_dataPointCovariance_) {
                    return false;
                }
                if (std::fabs(m_inclination_ - other_.m_inclination_) > std::numeric_limits< double>::epsilon()
                && !(std::fabs(m_inclination_ - other_.m_inclination_) < (std::numeric_limits< double>::min)())) {
                    return false;
                }
                if (m_inclinationValidity_ != other_.m_inclinationValidity_) {
                    return false;
                }
                if (std::fabs(m_range_ - other_.m_range_) > std::numeric_limits< double>::epsilon()
                && !(std::fabs(m_range_ - other_.m_range_) < (std::numeric_limits< double>::min)())) {
                    return false;
                }
                if (m_rangeValidity_ != other_.m_rangeValidity_) {
                    return false;
                }
                if (m_pointID_ != other_.m_pointID_) {
                    return false;
                }
                return true;
            }

            bool RangeDataPointType::operator != (const RangeDataPointType& other_) const {
                return !this->operator ==(other_);
            }

            std::ostream& operator << (std::ostream& o,const RangeDataPointType& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                o <<"[";
                o << "bearing: " << std::setprecision(15) << sample.bearing ()<<", ";
                o << "bearingValidity: " << sample.bearingValidity ()<<", ";
                o << "dataPointCovariance: " << sample.dataPointCovariance ()<<", ";
                o << "inclination: " << std::setprecision(15) << sample.inclination ()<<", ";
                o << "inclinationValidity: " << sample.inclinationValidity ()<<", ";
                o << "range: " << std::setprecision(15) << sample.range ()<<", ";
                o << "rangeValidity: " << sample.rangeValidity ()<<", ";
                o << "pointID: " << sample.pointID ();
                o <<"]";
                return o;
            }

        } // namespace RangeStatus  

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
        struct native_type_code< ::UMAA::SA::RangeStatus::RangeDataPointType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member RangeDataPointType_g_tc_members[8]=
                {

                    {
                        (char *)"bearing",/* Member name */
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
                        (char *)"bearingValidity",/* Member name */
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
                        (char *)"dataPointCovariance",/* Member name */
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
                        (char *)"inclination",/* Member name */
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
                        (char *)"inclinationValidity",/* Member name */
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
                        (char *)"range",/* Member name */
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
                    }, 
                    {
                        (char *)"rangeValidity",/* Member name */
                        {
                            6,/* Representation ID */
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
                        (char *)"pointID",/* Member name */
                        {
                            7,/* Representation ID */
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

                static DDS_TypeCode RangeDataPointType_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::SA::RangeStatus::RangeDataPointType", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        8, /* Number of members */
                        RangeDataPointType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for RangeDataPointType*/

                if (is_initialized) {
                    return &RangeDataPointType_g_tc;
                }

                is_initialized = RTI_TRUE;

                RangeDataPointType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                RangeDataPointType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::Angle_AliasTag_t>::get().native();
                RangeDataPointType_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                RangeDataPointType_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::CovariancePolarType>::get().native();
                RangeDataPointType_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::Angle_AliasTag_t>::get().native();
                RangeDataPointType_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                RangeDataPointType_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::Distance_AliasTag_t>::get().native();
                RangeDataPointType_g_tc_members[6]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                RangeDataPointType_g_tc_members[7]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::NumericGUID_AliasTag_t>::get().native();

                /* Initialize the values for member annotations. */
                RangeDataPointType_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                RangeDataPointType_g_tc_members[0]._annotations._defaultValue._u.double_value = 0.0;
                RangeDataPointType_g_tc_members[0]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                RangeDataPointType_g_tc_members[0]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                RangeDataPointType_g_tc_members[0]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                RangeDataPointType_g_tc_members[0]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;
                RangeDataPointType_g_tc_members[1]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                RangeDataPointType_g_tc_members[1]._annotations._defaultValue._u.boolean_value = 0;
                RangeDataPointType_g_tc_members[3]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                RangeDataPointType_g_tc_members[3]._annotations._defaultValue._u.double_value = 0.0;
                RangeDataPointType_g_tc_members[3]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                RangeDataPointType_g_tc_members[3]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                RangeDataPointType_g_tc_members[3]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                RangeDataPointType_g_tc_members[3]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;
                RangeDataPointType_g_tc_members[4]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                RangeDataPointType_g_tc_members[4]._annotations._defaultValue._u.boolean_value = 0;
                RangeDataPointType_g_tc_members[5]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                RangeDataPointType_g_tc_members[5]._annotations._defaultValue._u.double_value = 0.0;
                RangeDataPointType_g_tc_members[5]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                RangeDataPointType_g_tc_members[5]._annotations._minValue._u.double_value = 0ULL;
                RangeDataPointType_g_tc_members[5]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                RangeDataPointType_g_tc_members[5]._annotations._maxValue._u.double_value = 401056000ULL;
                RangeDataPointType_g_tc_members[6]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                RangeDataPointType_g_tc_members[6]._annotations._defaultValue._u.boolean_value = 0;

                RangeDataPointType_g_tc._data._sampleAccessInfo = sample_access_info();
                RangeDataPointType_g_tc._data._typePlugin = type_plugin_info();    

                return &RangeDataPointType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                ::UMAA::SA::RangeStatus::RangeDataPointType *sample;

                static RTIXCdrMemberAccessInfo RangeDataPointType_g_memberAccessInfos[8] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo RangeDataPointType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &RangeDataPointType_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    ::UMAA::SA::RangeStatus::RangeDataPointType);
                if (sample == NULL) {
                    return NULL;
                }

                RangeDataPointType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->bearing() - (char *)sample);

                RangeDataPointType_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->bearingValidity() - (char *)sample);

                RangeDataPointType_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->dataPointCovariance() - (char *)sample);

                RangeDataPointType_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->inclination() - (char *)sample);

                RangeDataPointType_g_memberAccessInfos[4].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->inclinationValidity() - (char *)sample);

                RangeDataPointType_g_memberAccessInfos[5].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->range() - (char *)sample);

                RangeDataPointType_g_memberAccessInfos[6].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->rangeValidity() - (char *)sample);

                RangeDataPointType_g_memberAccessInfos[7].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->pointID() - (char *)sample);

                RangeDataPointType_g_sampleAccessInfo.memberAccessInfos = 
                RangeDataPointType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::SA::RangeStatus::RangeDataPointType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        RangeDataPointType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        RangeDataPointType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                RangeDataPointType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                RangeDataPointType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::SA::RangeStatus::RangeDataPointType >;

                RangeDataPointType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &RangeDataPointType_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin RangeDataPointType_g_typePlugin = 
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

                return &RangeDataPointType_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::StructType& dynamic_type< ::UMAA::SA::RangeStatus::RangeDataPointType >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::SA::RangeStatus::RangeDataPointType >::get())));
        }
    }
}

namespace dds { 
    namespace topic {
        void topic_type_support< ::UMAA::SA::RangeStatus::RangeDataPointType >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                ::UMAA::SA::RangeStatus::RangeDataPointTypePlugin_new,
                ::UMAA::SA::RangeStatus::RangeDataPointTypePlugin_delete);
        }

        std::vector<char>& topic_type_support< ::UMAA::SA::RangeStatus::RangeDataPointType >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const ::UMAA::SA::RangeStatus::RangeDataPointType& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = RangeDataPointTypePlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = RangeDataPointTypePlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< ::UMAA::SA::RangeStatus::RangeDataPointType >::from_cdr_buffer(::UMAA::SA::RangeStatus::RangeDataPointType& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = RangeDataPointTypePlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create ::UMAA::SA::RangeStatus::RangeDataPointType from cdr buffer");
        }

        void topic_type_support< ::UMAA::SA::RangeStatus::RangeDataPointType >::reset_sample(::UMAA::SA::RangeStatus::RangeDataPointType& sample) 
        {
            sample.bearing(0.0);
            sample.bearingValidity(0);
            ::rti::topic::reset_sample(sample.dataPointCovariance());
            sample.inclination(0.0);
            sample.inclinationValidity(0);
            sample.range(0.0);
            sample.rangeValidity(0);
            ::rti::topic::reset_sample(sample.pointID());
        }

        void topic_type_support< ::UMAA::SA::RangeStatus::RangeDataPointType >::allocate_sample(::UMAA::SA::RangeStatus::RangeDataPointType& sample, int, int) 
        {
            ::rti::topic::allocate_sample(sample.dataPointCovariance(),  -1, -1);
            ::rti::topic::allocate_sample(sample.pointID(),  -1, -1);
        }
    }
}  

#endif // NDDS_STANDALONE_TYPE
