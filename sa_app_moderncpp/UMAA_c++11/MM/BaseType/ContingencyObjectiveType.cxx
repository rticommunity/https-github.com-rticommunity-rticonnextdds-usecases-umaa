

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ContingencyObjectiveType.idl
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
#include "ContingencyObjectiveTypePlugin.hpp"
#else
#include "rti/topic/cdr/SerializationHelpers.hpp"
#endif

#include "ContingencyObjectiveType.hpp"

#include <rti/util/ostream_operators.hpp>

namespace UMAA {

    namespace MM {

        namespace BaseType {

            // ---- ContingencyObjectiveType: 

            ContingencyObjectiveType::ContingencyObjectiveType() :
                m_altitudeASF_ (0.0) ,
                m_behavior_(UMAA::Common::MaritimeEnumeration::ContingencyBehaviorEnumType::ContingencyBehaviorEnumType::CONTINUE) ,
                m_depth_ (0.0) ,
                m_DTEDAltitude_ (0.0) ,
                m_mode_ ("") ,
                m_radius_ (0.0) ,
                m_safeAltitude_ (0.0) ,
                m_safeAltitudeOffset_ (0.0) ,
                m_speed_ (0.0) ,
                m_vehicleRunTime_ (0.0)  {

            }   

            ContingencyObjectiveType::ContingencyObjectiveType (const ::UMAA::Common::Measurement::Altitude_MSL& altitude_,const ::UMAA::Common::Measurement::Altitude_AGL& altitudeAGL_,double altitudeASF_,const ::UMAA::Common::MaritimeEnumeration::ContingencyBehaviorEnumType::ContingencyBehaviorEnumType& behavior_,double depth_,double DTEDAltitude_,const std::string& mode_,const ::UMAA::Common::Measurement::Position2D& position_,double radius_,double safeAltitude_,double safeAltitudeOffset_,double speed_,double vehicleRunTime_):
                m_altitude_(altitude_), 
                m_altitudeAGL_(altitudeAGL_), 
                m_altitudeASF_(altitudeASF_), 
                m_behavior_(behavior_), 
                m_depth_(depth_), 
                m_DTEDAltitude_(DTEDAltitude_), 
                m_mode_(mode_), 
                m_position_(position_), 
                m_radius_(radius_), 
                m_safeAltitude_(safeAltitude_), 
                m_safeAltitudeOffset_(safeAltitudeOffset_), 
                m_speed_(speed_), 
                m_vehicleRunTime_(vehicleRunTime_) {
            }

            void ContingencyObjectiveType::swap(ContingencyObjectiveType& other_)  noexcept 
            {
                using std::swap;
                swap(m_altitude_, other_.m_altitude_);
                swap(m_altitudeAGL_, other_.m_altitudeAGL_);
                swap(m_altitudeASF_, other_.m_altitudeASF_);
                swap(m_behavior_, other_.m_behavior_);
                swap(m_depth_, other_.m_depth_);
                swap(m_DTEDAltitude_, other_.m_DTEDAltitude_);
                swap(m_mode_, other_.m_mode_);
                swap(m_position_, other_.m_position_);
                swap(m_radius_, other_.m_radius_);
                swap(m_safeAltitude_, other_.m_safeAltitude_);
                swap(m_safeAltitudeOffset_, other_.m_safeAltitudeOffset_);
                swap(m_speed_, other_.m_speed_);
                swap(m_vehicleRunTime_, other_.m_vehicleRunTime_);
            }  

            bool ContingencyObjectiveType::operator == (const ContingencyObjectiveType& other_) const {
                if (m_altitude_ != other_.m_altitude_) {
                    return false;
                }
                if (m_altitudeAGL_ != other_.m_altitudeAGL_) {
                    return false;
                }
                if (std::fabs(m_altitudeASF_ - other_.m_altitudeASF_) > std::numeric_limits< double>::epsilon()
                && !(std::fabs(m_altitudeASF_ - other_.m_altitudeASF_) < (std::numeric_limits< double>::min)())) {
                    return false;
                }
                if (m_behavior_ != other_.m_behavior_) {
                    return false;
                }
                if (std::fabs(m_depth_ - other_.m_depth_) > std::numeric_limits< double>::epsilon()
                && !(std::fabs(m_depth_ - other_.m_depth_) < (std::numeric_limits< double>::min)())) {
                    return false;
                }
                if (std::fabs(m_DTEDAltitude_ - other_.m_DTEDAltitude_) > std::numeric_limits< double>::epsilon()
                && !(std::fabs(m_DTEDAltitude_ - other_.m_DTEDAltitude_) < (std::numeric_limits< double>::min)())) {
                    return false;
                }
                if (m_mode_ != other_.m_mode_) {
                    return false;
                }
                if (m_position_ != other_.m_position_) {
                    return false;
                }
                if (std::fabs(m_radius_ - other_.m_radius_) > std::numeric_limits< double>::epsilon()
                && !(std::fabs(m_radius_ - other_.m_radius_) < (std::numeric_limits< double>::min)())) {
                    return false;
                }
                if (std::fabs(m_safeAltitude_ - other_.m_safeAltitude_) > std::numeric_limits< double>::epsilon()
                && !(std::fabs(m_safeAltitude_ - other_.m_safeAltitude_) < (std::numeric_limits< double>::min)())) {
                    return false;
                }
                if (std::fabs(m_safeAltitudeOffset_ - other_.m_safeAltitudeOffset_) > std::numeric_limits< double>::epsilon()
                && !(std::fabs(m_safeAltitudeOffset_ - other_.m_safeAltitudeOffset_) < (std::numeric_limits< double>::min)())) {
                    return false;
                }
                if (std::fabs(m_speed_ - other_.m_speed_) > std::numeric_limits< double>::epsilon()
                && !(std::fabs(m_speed_ - other_.m_speed_) < (std::numeric_limits< double>::min)())) {
                    return false;
                }
                if (std::fabs(m_vehicleRunTime_ - other_.m_vehicleRunTime_) > std::numeric_limits< double>::epsilon()
                && !(std::fabs(m_vehicleRunTime_ - other_.m_vehicleRunTime_) < (std::numeric_limits< double>::min)())) {
                    return false;
                }
                return true;
            }

            bool ContingencyObjectiveType::operator != (const ContingencyObjectiveType& other_) const {
                return !this->operator ==(other_);
            }

            std::ostream& operator << (std::ostream& o,const ContingencyObjectiveType& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                o <<"[";
                o << "altitude: " << sample.altitude ()<<", ";
                o << "altitudeAGL: " << sample.altitudeAGL ()<<", ";
                o << "altitudeASF: " << std::setprecision(15) << sample.altitudeASF ()<<", ";
                o << "behavior: " << sample.behavior ()<<", ";
                o << "depth: " << std::setprecision(15) << sample.depth ()<<", ";
                o << "DTEDAltitude: " << std::setprecision(15) << sample.DTEDAltitude ()<<", ";
                o << "mode: " << sample.mode ()<<", ";
                o << "position: " << sample.position ()<<", ";
                o << "radius: " << std::setprecision(15) << sample.radius ()<<", ";
                o << "safeAltitude: " << std::setprecision(15) << sample.safeAltitude ()<<", ";
                o << "safeAltitudeOffset: " << std::setprecision(15) << sample.safeAltitudeOffset ()<<", ";
                o << "speed: " << std::setprecision(15) << sample.speed ()<<", ";
                o << "vehicleRunTime: " << std::setprecision(15) << sample.vehicleRunTime ();
                o <<"]";
                return o;
            }

        } // namespace BaseType  

    } // namespace MM  

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
        struct native_type_code< ::UMAA::MM::BaseType::ContingencyObjectiveType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member ContingencyObjectiveType_g_tc_members[13]=
                {

                    {
                        (char *)"altitude",/* Member name */
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
                        (char *)"altitudeAGL",/* Member name */
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
                        (char *)"altitudeASF",/* Member name */
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
                        (char *)"behavior",/* Member name */
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
                        (char *)"depth",/* Member name */
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
                        (char *)"DTEDAltitude",/* Member name */
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
                        (char *)"mode",/* Member name */
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
                        (char *)"position",/* Member name */
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
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"radius",/* Member name */
                        {
                            8,/* Representation ID */
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
                        (char *)"safeAltitude",/* Member name */
                        {
                            9,/* Representation ID */
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
                        (char *)"safeAltitudeOffset",/* Member name */
                        {
                            10,/* Representation ID */
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
                        (char *)"speed",/* Member name */
                        {
                            11,/* Representation ID */
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
                        (char *)"vehicleRunTime",/* Member name */
                        {
                            12,/* Representation ID */
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

                static DDS_TypeCode ContingencyObjectiveType_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::MM::BaseType::ContingencyObjectiveType", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        13, /* Number of members */
                        ContingencyObjectiveType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for ContingencyObjectiveType*/

                if (is_initialized) {
                    return &ContingencyObjectiveType_g_tc;
                }

                is_initialized = RTI_TRUE;

                ContingencyObjectiveType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                ContingencyObjectiveType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::Altitude_MSL>::get().native();
                ContingencyObjectiveType_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::Altitude_AGL>::get().native();
                ContingencyObjectiveType_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::Distance_ASF_AliasTag_t>::get().native();
                ContingencyObjectiveType_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::MaritimeEnumeration::ContingencyBehaviorEnumType::ContingencyBehaviorEnumType>::get().native();
                ContingencyObjectiveType_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::Distance_BSL_AliasTag_t>::get().native();
                ContingencyObjectiveType_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::Distance_AliasTag_t>::get().native();
                ContingencyObjectiveType_g_tc_members[6]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::PrimitiveConstrained::StringShortDescription_AliasTag_t>::get().native();
                ContingencyObjectiveType_g_tc_members[7]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::Position2D>::get().native();
                ContingencyObjectiveType_g_tc_members[8]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::Distance_AliasTag_t>::get().native();
                ContingencyObjectiveType_g_tc_members[9]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::Distance_AliasTag_t>::get().native();
                ContingencyObjectiveType_g_tc_members[10]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::Distance_AliasTag_t>::get().native();
                ContingencyObjectiveType_g_tc_members[11]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::Speed_AliasTag_t>::get().native();
                ContingencyObjectiveType_g_tc_members[12]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::Duration_Hours_AliasTag_t>::get().native();

                /* Initialize the values for member annotations. */
                ContingencyObjectiveType_g_tc_members[2]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                ContingencyObjectiveType_g_tc_members[2]._annotations._defaultValue._u.double_value = 0.0;
                ContingencyObjectiveType_g_tc_members[2]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                ContingencyObjectiveType_g_tc_members[2]._annotations._minValue._u.double_value = 0ULL;
                ContingencyObjectiveType_g_tc_members[2]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                ContingencyObjectiveType_g_tc_members[2]._annotations._maxValue._u.double_value = 401056000ULL;
                ContingencyObjectiveType_g_tc_members[3]._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
                ContingencyObjectiveType_g_tc_members[3]._annotations._defaultValue._u.enumerated_value = 0;
                ContingencyObjectiveType_g_tc_members[4]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                ContingencyObjectiveType_g_tc_members[4]._annotations._defaultValue._u.double_value = 0.0;
                ContingencyObjectiveType_g_tc_members[4]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                ContingencyObjectiveType_g_tc_members[4]._annotations._minValue._u.double_value = 0ULL;
                ContingencyObjectiveType_g_tc_members[4]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                ContingencyObjectiveType_g_tc_members[4]._annotations._maxValue._u.double_value = 10000ULL;
                ContingencyObjectiveType_g_tc_members[5]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                ContingencyObjectiveType_g_tc_members[5]._annotations._defaultValue._u.double_value = 0.0;
                ContingencyObjectiveType_g_tc_members[5]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                ContingencyObjectiveType_g_tc_members[5]._annotations._minValue._u.double_value = 0ULL;
                ContingencyObjectiveType_g_tc_members[5]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                ContingencyObjectiveType_g_tc_members[5]._annotations._maxValue._u.double_value = 401056000ULL;
                ContingencyObjectiveType_g_tc_members[6]._annotations._defaultValue._d = RTI_XCDR_TK_STRING;
                ContingencyObjectiveType_g_tc_members[6]._annotations._defaultValue._u.string_value = (DDS_Char *) "";
                ContingencyObjectiveType_g_tc_members[8]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                ContingencyObjectiveType_g_tc_members[8]._annotations._defaultValue._u.double_value = 0.0;
                ContingencyObjectiveType_g_tc_members[8]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                ContingencyObjectiveType_g_tc_members[8]._annotations._minValue._u.double_value = 0ULL;
                ContingencyObjectiveType_g_tc_members[8]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                ContingencyObjectiveType_g_tc_members[8]._annotations._maxValue._u.double_value = 401056000ULL;
                ContingencyObjectiveType_g_tc_members[9]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                ContingencyObjectiveType_g_tc_members[9]._annotations._defaultValue._u.double_value = 0.0;
                ContingencyObjectiveType_g_tc_members[9]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                ContingencyObjectiveType_g_tc_members[9]._annotations._minValue._u.double_value = 0ULL;
                ContingencyObjectiveType_g_tc_members[9]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                ContingencyObjectiveType_g_tc_members[9]._annotations._maxValue._u.double_value = 401056000ULL;
                ContingencyObjectiveType_g_tc_members[10]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                ContingencyObjectiveType_g_tc_members[10]._annotations._defaultValue._u.double_value = 0.0;
                ContingencyObjectiveType_g_tc_members[10]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                ContingencyObjectiveType_g_tc_members[10]._annotations._minValue._u.double_value = 0ULL;
                ContingencyObjectiveType_g_tc_members[10]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                ContingencyObjectiveType_g_tc_members[10]._annotations._maxValue._u.double_value = 401056000ULL;
                ContingencyObjectiveType_g_tc_members[11]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                ContingencyObjectiveType_g_tc_members[11]._annotations._defaultValue._u.double_value = 0.0;
                ContingencyObjectiveType_g_tc_members[11]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                ContingencyObjectiveType_g_tc_members[11]._annotations._minValue._u.double_value = 0ULL;
                ContingencyObjectiveType_g_tc_members[11]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                ContingencyObjectiveType_g_tc_members[11]._annotations._maxValue._u.double_value = 299792458ULL;
                ContingencyObjectiveType_g_tc_members[12]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                ContingencyObjectiveType_g_tc_members[12]._annotations._defaultValue._u.double_value = 0.0;
                ContingencyObjectiveType_g_tc_members[12]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                ContingencyObjectiveType_g_tc_members[12]._annotations._minValue._u.double_value = 0ULL;
                ContingencyObjectiveType_g_tc_members[12]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                ContingencyObjectiveType_g_tc_members[12]._annotations._maxValue._u.double_value = 10505ULL;

                ContingencyObjectiveType_g_tc._data._sampleAccessInfo = sample_access_info();
                ContingencyObjectiveType_g_tc._data._typePlugin = type_plugin_info();    

                return &ContingencyObjectiveType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                ::UMAA::MM::BaseType::ContingencyObjectiveType *sample;

                static RTIXCdrMemberAccessInfo ContingencyObjectiveType_g_memberAccessInfos[13] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo ContingencyObjectiveType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &ContingencyObjectiveType_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    ::UMAA::MM::BaseType::ContingencyObjectiveType);
                if (sample == NULL) {
                    return NULL;
                }

                ContingencyObjectiveType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->altitude() - (char *)sample);

                ContingencyObjectiveType_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->altitudeAGL() - (char *)sample);

                ContingencyObjectiveType_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->altitudeASF() - (char *)sample);

                ContingencyObjectiveType_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->behavior() - (char *)sample);

                ContingencyObjectiveType_g_memberAccessInfos[4].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->depth() - (char *)sample);

                ContingencyObjectiveType_g_memberAccessInfos[5].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->DTEDAltitude() - (char *)sample);

                ContingencyObjectiveType_g_memberAccessInfos[6].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->mode() - (char *)sample);

                ContingencyObjectiveType_g_memberAccessInfos[7].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->position() - (char *)sample);

                ContingencyObjectiveType_g_memberAccessInfos[8].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->radius() - (char *)sample);

                ContingencyObjectiveType_g_memberAccessInfos[9].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->safeAltitude() - (char *)sample);

                ContingencyObjectiveType_g_memberAccessInfos[10].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->safeAltitudeOffset() - (char *)sample);

                ContingencyObjectiveType_g_memberAccessInfos[11].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->speed() - (char *)sample);

                ContingencyObjectiveType_g_memberAccessInfos[12].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->vehicleRunTime() - (char *)sample);

                ContingencyObjectiveType_g_sampleAccessInfo.memberAccessInfos = 
                ContingencyObjectiveType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::MM::BaseType::ContingencyObjectiveType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        ContingencyObjectiveType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        ContingencyObjectiveType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                ContingencyObjectiveType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                ContingencyObjectiveType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::MM::BaseType::ContingencyObjectiveType >;

                ContingencyObjectiveType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &ContingencyObjectiveType_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin ContingencyObjectiveType_g_typePlugin = 
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

                return &ContingencyObjectiveType_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::StructType& dynamic_type< ::UMAA::MM::BaseType::ContingencyObjectiveType >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::MM::BaseType::ContingencyObjectiveType >::get())));
        }
    }
}

namespace dds { 
    namespace topic {
        void topic_type_support< ::UMAA::MM::BaseType::ContingencyObjectiveType >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                ::UMAA::MM::BaseType::ContingencyObjectiveTypePlugin_new,
                ::UMAA::MM::BaseType::ContingencyObjectiveTypePlugin_delete);
        }

        std::vector<char>& topic_type_support< ::UMAA::MM::BaseType::ContingencyObjectiveType >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const ::UMAA::MM::BaseType::ContingencyObjectiveType& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = ContingencyObjectiveTypePlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = ContingencyObjectiveTypePlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< ::UMAA::MM::BaseType::ContingencyObjectiveType >::from_cdr_buffer(::UMAA::MM::BaseType::ContingencyObjectiveType& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = ContingencyObjectiveTypePlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create ::UMAA::MM::BaseType::ContingencyObjectiveType from cdr buffer");
        }

        void topic_type_support< ::UMAA::MM::BaseType::ContingencyObjectiveType >::reset_sample(::UMAA::MM::BaseType::ContingencyObjectiveType& sample) 
        {
            ::rti::topic::reset_sample(sample.altitude());
            ::rti::topic::reset_sample(sample.altitudeAGL());
            sample.altitudeASF(0.0);
            sample.behavior(UMAA::Common::MaritimeEnumeration::ContingencyBehaviorEnumType::ContingencyBehaviorEnumType::CONTINUE);
            sample.depth(0.0);
            sample.DTEDAltitude(0.0);
            sample.mode("");
            ::rti::topic::reset_sample(sample.position());
            sample.radius(0.0);
            sample.safeAltitude(0.0);
            sample.safeAltitudeOffset(0.0);
            sample.speed(0.0);
            sample.vehicleRunTime(0.0);
        }

        void topic_type_support< ::UMAA::MM::BaseType::ContingencyObjectiveType >::allocate_sample(::UMAA::MM::BaseType::ContingencyObjectiveType& sample, int, int) 
        {
            ::rti::topic::allocate_sample(sample.altitude(),  -1, -1);
            ::rti::topic::allocate_sample(sample.altitudeAGL(),  -1, -1);
            ::rti::topic::allocate_sample(sample.behavior(),  -1, -1);
            ::rti::topic::allocate_sample(sample.mode(),  -1, 1023L);
            ::rti::topic::allocate_sample(sample.position(),  -1, -1);
        }
    }
}  

#endif // NDDS_STANDALONE_TYPE
