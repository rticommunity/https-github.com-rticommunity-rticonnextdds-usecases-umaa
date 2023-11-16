

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from LocalFigure8CommandType.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#include <iosfwd>
#include <iomanip>

#include "rti/topic/cdr/Serialization.hpp"

#include "LocalFigure8CommandType.hpp"
#include "LocalFigure8CommandTypePlugin.hpp"

#include <rti/util/ostream_operators.hpp>

namespace UMAA {

    namespace MO {

        namespace LocalFigure8Control {

            // ---- LocalFigure8CommandType: 

            LocalFigure8CommandType::LocalFigure8CommandType() :
                m_crossTrackTolerance_ (0.0) ,
                m_elevationTolerance_ (0.0) ,
                m_length_ (0.0) ,
                m_radius_ (0.0) ,
                m_speedTolerance_ (0.0) ,
                m_transitElevationTolerance_ (0.0) ,
                m_transitSpeedTolerance_ (0.0) ,
                m_turnDirection_(UMAA::Common::MaritimeEnumeration::WaterTurnDirectionEnumType::WaterTurnDirectionEnumType::NO_VALID_TURN_DIRECTION)  {
                    ::rti::core::fill_array( 
                        m_source_, 
                        ::rti::topic::cdr::alias_helper< UMAA::Common::Measurement::NumericGUID::value_type >::default_value());
                    ::rti::core::fill_array( 
                        m_destination_, 
                        ::rti::topic::cdr::alias_helper< UMAA::Common::Measurement::NumericGUID::value_type >::default_value());
                    ::rti::core::fill_array( 
                        m_sessionID_, 
                        ::rti::topic::cdr::alias_helper< UMAA::Common::Measurement::NumericGUID::value_type >::default_value());
            }   

            LocalFigure8CommandType::LocalFigure8CommandType (double crossTrackTolerance,const UMAA::Common::Measurement::ElevationType& elevation,double elevationTolerance,const ::dds::core::optional< UMAA::Common::Measurement::DateTime >& endTime,double length,const UMAA::Common::Orientation::HeadingType& orientation,const ::dds::core::optional< UMAA::Common::Measurement::Position2D_PlatformXYZ >& position,double radius,const UMAA::Common::VariableSpeedControl::VariableSpeedControlType& speed,double speedTolerance,const UMAA::Common::Measurement::ElevationType& transitElevation,double transitElevationTolerance,const UMAA::Common::VariableSpeedControl::VariableSpeedControlType& transitSpeed,double transitSpeedTolerance,const UMAA::Common::MaritimeEnumeration::WaterTurnDirectionEnumType::WaterTurnDirectionEnumType& turnDirection,const UMAA::Common::Measurement::NumericGUID& source,const UMAA::Common::Measurement::NumericGUID& destination,const UMAA::Common::Measurement::NumericGUID& sessionID,const UMAA::Common::Measurement::DateTime& timeStamp):
                m_crossTrackTolerance_( crossTrackTolerance ),
                m_elevation_( elevation ),
                m_elevationTolerance_( elevationTolerance ),
                m_endTime_( endTime ),
                m_length_( length ),
                m_orientation_( orientation ),
                m_position_( position ),
                m_radius_( radius ),
                m_speed_( speed ),
                m_speedTolerance_( speedTolerance ),
                m_transitElevation_( transitElevation ),
                m_transitElevationTolerance_( transitElevationTolerance ),
                m_transitSpeed_( transitSpeed ),
                m_transitSpeedTolerance_( transitSpeedTolerance ),
                m_turnDirection_( turnDirection ),
                m_source_( source ),
                m_destination_( destination ),
                m_sessionID_( sessionID ),
                m_timeStamp_( timeStamp ) {
            }

            #ifdef RTI_CXX11_RVALUE_REFERENCES
            #ifdef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
            LocalFigure8CommandType::LocalFigure8CommandType(LocalFigure8CommandType&& other_) OMG_NOEXCEPT  :m_crossTrackTolerance_ (std::move(other_.m_crossTrackTolerance_))
            ,
            m_elevation_ (std::move(other_.m_elevation_))
            ,
            m_elevationTolerance_ (std::move(other_.m_elevationTolerance_))
            ,
            m_endTime_ (std::move(other_.m_endTime_))
            ,
            m_length_ (std::move(other_.m_length_))
            ,
            m_orientation_ (std::move(other_.m_orientation_))
            ,
            m_position_ (std::move(other_.m_position_))
            ,
            m_radius_ (std::move(other_.m_radius_))
            ,
            m_speed_ (std::move(other_.m_speed_))
            ,
            m_speedTolerance_ (std::move(other_.m_speedTolerance_))
            ,
            m_transitElevation_ (std::move(other_.m_transitElevation_))
            ,
            m_transitElevationTolerance_ (std::move(other_.m_transitElevationTolerance_))
            ,
            m_transitSpeed_ (std::move(other_.m_transitSpeed_))
            ,
            m_transitSpeedTolerance_ (std::move(other_.m_transitSpeedTolerance_))
            ,
            m_turnDirection_ (std::move(other_.m_turnDirection_))
            ,
            m_source_ (std::move(other_.m_source_))
            ,
            m_destination_ (std::move(other_.m_destination_))
            ,
            m_sessionID_ (std::move(other_.m_sessionID_))
            ,
            m_timeStamp_ (std::move(other_.m_timeStamp_))
            {
            } 

            LocalFigure8CommandType& LocalFigure8CommandType::operator=(LocalFigure8CommandType&&  other_) OMG_NOEXCEPT {
                LocalFigure8CommandType tmp(std::move(other_));
                swap(tmp); 
                return *this;
            }
            #endif
            #endif   

            void LocalFigure8CommandType::swap(LocalFigure8CommandType& other_)  OMG_NOEXCEPT 
            {
                using std::swap;
                swap(m_crossTrackTolerance_, other_.m_crossTrackTolerance_);
                swap(m_elevation_, other_.m_elevation_);
                swap(m_elevationTolerance_, other_.m_elevationTolerance_);
                swap(m_endTime_, other_.m_endTime_);
                swap(m_length_, other_.m_length_);
                swap(m_orientation_, other_.m_orientation_);
                swap(m_position_, other_.m_position_);
                swap(m_radius_, other_.m_radius_);
                swap(m_speed_, other_.m_speed_);
                swap(m_speedTolerance_, other_.m_speedTolerance_);
                swap(m_transitElevation_, other_.m_transitElevation_);
                swap(m_transitElevationTolerance_, other_.m_transitElevationTolerance_);
                swap(m_transitSpeed_, other_.m_transitSpeed_);
                swap(m_transitSpeedTolerance_, other_.m_transitSpeedTolerance_);
                swap(m_turnDirection_, other_.m_turnDirection_);
                swap(m_source_, other_.m_source_);
                swap(m_destination_, other_.m_destination_);
                swap(m_sessionID_, other_.m_sessionID_);
                swap(m_timeStamp_, other_.m_timeStamp_);
            }  

            bool LocalFigure8CommandType::operator == (const LocalFigure8CommandType& other_) const {
                if (m_crossTrackTolerance_ != other_.m_crossTrackTolerance_) {
                    return false;
                }
                if (m_elevation_ != other_.m_elevation_) {
                    return false;
                }
                if (m_elevationTolerance_ != other_.m_elevationTolerance_) {
                    return false;
                }
                if (m_endTime_ != other_.m_endTime_) {
                    return false;
                }
                if (m_length_ != other_.m_length_) {
                    return false;
                }
                if (m_orientation_ != other_.m_orientation_) {
                    return false;
                }
                if (m_position_ != other_.m_position_) {
                    return false;
                }
                if (m_radius_ != other_.m_radius_) {
                    return false;
                }
                if (m_speed_ != other_.m_speed_) {
                    return false;
                }
                if (m_speedTolerance_ != other_.m_speedTolerance_) {
                    return false;
                }
                if (m_transitElevation_ != other_.m_transitElevation_) {
                    return false;
                }
                if (m_transitElevationTolerance_ != other_.m_transitElevationTolerance_) {
                    return false;
                }
                if (m_transitSpeed_ != other_.m_transitSpeed_) {
                    return false;
                }
                if (m_transitSpeedTolerance_ != other_.m_transitSpeedTolerance_) {
                    return false;
                }
                if (m_turnDirection_ != other_.m_turnDirection_) {
                    return false;
                }
                if (m_source_ != other_.m_source_) {
                    return false;
                }
                if (m_destination_ != other_.m_destination_) {
                    return false;
                }
                if (m_sessionID_ != other_.m_sessionID_) {
                    return false;
                }
                if (m_timeStamp_ != other_.m_timeStamp_) {
                    return false;
                }
                return true;
            }
            bool LocalFigure8CommandType::operator != (const LocalFigure8CommandType& other_) const {
                return !this->operator ==(other_);
            }

            std::ostream& operator << (std::ostream& o,const LocalFigure8CommandType& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                o <<"[";
                o << "crossTrackTolerance: " << std::setprecision(15) <<sample.crossTrackTolerance()<<", ";
                o << "elevation: " << sample.elevation()<<", ";
                o << "elevationTolerance: " << std::setprecision(15) <<sample.elevationTolerance()<<", ";
                o << "endTime: " << sample.endTime()<<", ";
                o << "length: " << std::setprecision(15) <<sample.length()<<", ";
                o << "orientation: " << sample.orientation()<<", ";
                o << "position: " << sample.position()<<", ";
                o << "radius: " << std::setprecision(15) <<sample.radius()<<", ";
                o << "speed: " << sample.speed()<<", ";
                o << "speedTolerance: " << std::setprecision(15) <<sample.speedTolerance()<<", ";
                o << "transitElevation: " << sample.transitElevation()<<", ";
                o << "transitElevationTolerance: " << std::setprecision(15) <<sample.transitElevationTolerance()<<", ";
                o << "transitSpeed: " << sample.transitSpeed()<<", ";
                o << "transitSpeedTolerance: " << std::setprecision(15) <<sample.transitSpeedTolerance()<<", ";
                o << "turnDirection: " << sample.turnDirection()<<", ";
                o << "source: " << sample.source()<<", ";
                o << "destination: " << sample.destination()<<", ";
                o << "sessionID: " << sample.sessionID()<<", ";
                o << "timeStamp: " << sample.timeStamp() ;
                o <<"]";
                return o;
            }

        } // namespace LocalFigure8Control  

    } // namespace MO  

} // namespace UMAA  

// --- Type traits: -------------------------------------------------

namespace rti { 
    namespace topic {

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct native_type_code< UMAA::MO::LocalFigure8Control::LocalFigure8CommandType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member LocalFigure8CommandType_g_tc_members[19]=
                {

                    {
                        (char *)"crossTrackTolerance",/* Member name */
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
                        (char *)"elevation",/* Member name */
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
                        (char *)"elevationTolerance",/* Member name */
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
                        (char *)"endTime",/* Member name */
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
                        (char *)"length",/* Member name */
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
                        (char *)"orientation",/* Member name */
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
                        (char *)"position",/* Member name */
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
                        RTI_CDR_NONKEY_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"radius",/* Member name */
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
                        (char *)"speed",/* Member name */
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
                        (char *)"speedTolerance",/* Member name */
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
                        (char *)"transitElevation",/* Member name */
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
                        (char *)"transitElevationTolerance",/* Member name */
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
                        (char *)"transitSpeed",/* Member name */
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
                    }, 
                    {
                        (char *)"transitSpeedTolerance",/* Member name */
                        {
                            13,/* Representation ID */
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
                        (char *)"turnDirection",/* Member name */
                        {
                            14,/* Representation ID */
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
                            15,/* Representation ID */
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
                        (char *)"destination",/* Member name */
                        {
                            16,/* Representation ID */
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
                        (char *)"sessionID",/* Member name */
                        {
                            17,/* Representation ID */
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
                            18,/* Representation ID */
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

                static DDS_TypeCode LocalFigure8CommandType_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::MO::LocalFigure8Control::LocalFigure8CommandType", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        19, /* Number of members */
                        LocalFigure8CommandType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for LocalFigure8CommandType*/

                if (is_initialized) {
                    return &LocalFigure8CommandType_g_tc;
                }

                LocalFigure8CommandType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                LocalFigure8CommandType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::Distance_AliasTag_t>::get().native();
                LocalFigure8CommandType_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::ElevationType>::get().native();
                LocalFigure8CommandType_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::Distance_AliasTag_t>::get().native();
                LocalFigure8CommandType_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::DateTime>::get().native();
                LocalFigure8CommandType_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::Distance_AliasTag_t>::get().native();
                LocalFigure8CommandType_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Orientation::HeadingType>::get().native();
                LocalFigure8CommandType_g_tc_members[6]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::Position2D_PlatformXYZ>::get().native();
                LocalFigure8CommandType_g_tc_members[7]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::Distance_AliasTag_t>::get().native();
                LocalFigure8CommandType_g_tc_members[8]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::VariableSpeedControl::VariableSpeedControlType>::get().native();
                LocalFigure8CommandType_g_tc_members[9]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::GroundSpeed_AliasTag_t>::get().native();
                LocalFigure8CommandType_g_tc_members[10]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::ElevationType>::get().native();
                LocalFigure8CommandType_g_tc_members[11]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::Distance_AliasTag_t>::get().native();
                LocalFigure8CommandType_g_tc_members[12]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::VariableSpeedControl::VariableSpeedControlType>::get().native();
                LocalFigure8CommandType_g_tc_members[13]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::GroundSpeed_AliasTag_t>::get().native();
                LocalFigure8CommandType_g_tc_members[14]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::MaritimeEnumeration::WaterTurnDirectionEnumType::WaterTurnDirectionEnumType>::get().native();
                LocalFigure8CommandType_g_tc_members[15]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::NumericGUID_AliasTag_t>::get().native();
                LocalFigure8CommandType_g_tc_members[16]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::NumericGUID_AliasTag_t>::get().native();
                LocalFigure8CommandType_g_tc_members[17]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::NumericGUID_AliasTag_t>::get().native();
                LocalFigure8CommandType_g_tc_members[18]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::DateTime>::get().native();

                /* Initialize the values for member annotations. */
                LocalFigure8CommandType_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                LocalFigure8CommandType_g_tc_members[0]._annotations._defaultValue._u.double_value = 0.0;
                LocalFigure8CommandType_g_tc_members[0]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                LocalFigure8CommandType_g_tc_members[0]._annotations._minValue._u.double_value = 0ULL;
                LocalFigure8CommandType_g_tc_members[0]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                LocalFigure8CommandType_g_tc_members[0]._annotations._maxValue._u.double_value = 401056000ULL;

                LocalFigure8CommandType_g_tc_members[2]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                LocalFigure8CommandType_g_tc_members[2]._annotations._defaultValue._u.double_value = 0.0;
                LocalFigure8CommandType_g_tc_members[2]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                LocalFigure8CommandType_g_tc_members[2]._annotations._minValue._u.double_value = 0ULL;
                LocalFigure8CommandType_g_tc_members[2]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                LocalFigure8CommandType_g_tc_members[2]._annotations._maxValue._u.double_value = 401056000ULL;

                LocalFigure8CommandType_g_tc_members[4]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                LocalFigure8CommandType_g_tc_members[4]._annotations._defaultValue._u.double_value = 0.0;
                LocalFigure8CommandType_g_tc_members[4]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                LocalFigure8CommandType_g_tc_members[4]._annotations._minValue._u.double_value = 0ULL;
                LocalFigure8CommandType_g_tc_members[4]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                LocalFigure8CommandType_g_tc_members[4]._annotations._maxValue._u.double_value = 401056000ULL;

                LocalFigure8CommandType_g_tc_members[7]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                LocalFigure8CommandType_g_tc_members[7]._annotations._defaultValue._u.double_value = 0.0;
                LocalFigure8CommandType_g_tc_members[7]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                LocalFigure8CommandType_g_tc_members[7]._annotations._minValue._u.double_value = 0ULL;
                LocalFigure8CommandType_g_tc_members[7]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                LocalFigure8CommandType_g_tc_members[7]._annotations._maxValue._u.double_value = 401056000ULL;

                LocalFigure8CommandType_g_tc_members[9]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                LocalFigure8CommandType_g_tc_members[9]._annotations._defaultValue._u.double_value = 0.0;
                LocalFigure8CommandType_g_tc_members[9]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                LocalFigure8CommandType_g_tc_members[9]._annotations._minValue._u.double_value = 0ULL;
                LocalFigure8CommandType_g_tc_members[9]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                LocalFigure8CommandType_g_tc_members[9]._annotations._maxValue._u.double_value = 200ULL;

                LocalFigure8CommandType_g_tc_members[11]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                LocalFigure8CommandType_g_tc_members[11]._annotations._defaultValue._u.double_value = 0.0;
                LocalFigure8CommandType_g_tc_members[11]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                LocalFigure8CommandType_g_tc_members[11]._annotations._minValue._u.double_value = 0ULL;
                LocalFigure8CommandType_g_tc_members[11]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                LocalFigure8CommandType_g_tc_members[11]._annotations._maxValue._u.double_value = 401056000ULL;

                LocalFigure8CommandType_g_tc_members[13]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                LocalFigure8CommandType_g_tc_members[13]._annotations._defaultValue._u.double_value = 0.0;
                LocalFigure8CommandType_g_tc_members[13]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                LocalFigure8CommandType_g_tc_members[13]._annotations._minValue._u.double_value = 0ULL;
                LocalFigure8CommandType_g_tc_members[13]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                LocalFigure8CommandType_g_tc_members[13]._annotations._maxValue._u.double_value = 200ULL;

                LocalFigure8CommandType_g_tc_members[14]._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
                LocalFigure8CommandType_g_tc_members[14]._annotations._defaultValue._u.enumerated_value = 0;

                LocalFigure8CommandType_g_tc._data._sampleAccessInfo = sample_access_info();
                LocalFigure8CommandType_g_tc._data._typePlugin = type_plugin_info();    

                is_initialized = RTI_TRUE;

                return &LocalFigure8CommandType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                UMAA::MO::LocalFigure8Control::LocalFigure8CommandType *sample;

                static RTIXCdrMemberAccessInfo LocalFigure8CommandType_g_memberAccessInfos[19] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo LocalFigure8CommandType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &LocalFigure8CommandType_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    UMAA::MO::LocalFigure8Control::LocalFigure8CommandType);
                if (sample == NULL) {
                    return NULL;
                }

                LocalFigure8CommandType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->crossTrackTolerance() - (char *)sample);

                LocalFigure8CommandType_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->elevation() - (char *)sample);

                LocalFigure8CommandType_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->elevationTolerance() - (char *)sample);

                LocalFigure8CommandType_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->endTime() - (char *)sample);

                LocalFigure8CommandType_g_memberAccessInfos[4].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->length() - (char *)sample);

                LocalFigure8CommandType_g_memberAccessInfos[5].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->orientation() - (char *)sample);

                LocalFigure8CommandType_g_memberAccessInfos[6].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->position() - (char *)sample);

                LocalFigure8CommandType_g_memberAccessInfos[7].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->radius() - (char *)sample);

                LocalFigure8CommandType_g_memberAccessInfos[8].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->speed() - (char *)sample);

                LocalFigure8CommandType_g_memberAccessInfos[9].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->speedTolerance() - (char *)sample);

                LocalFigure8CommandType_g_memberAccessInfos[10].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->transitElevation() - (char *)sample);

                LocalFigure8CommandType_g_memberAccessInfos[11].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->transitElevationTolerance() - (char *)sample);

                LocalFigure8CommandType_g_memberAccessInfos[12].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->transitSpeed() - (char *)sample);

                LocalFigure8CommandType_g_memberAccessInfos[13].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->transitSpeedTolerance() - (char *)sample);

                LocalFigure8CommandType_g_memberAccessInfos[14].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->turnDirection() - (char *)sample);

                LocalFigure8CommandType_g_memberAccessInfos[15].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->source() - (char *)sample);

                LocalFigure8CommandType_g_memberAccessInfos[16].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->destination() - (char *)sample);

                LocalFigure8CommandType_g_memberAccessInfos[17].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->sessionID() - (char *)sample);

                LocalFigure8CommandType_g_memberAccessInfos[18].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->timeStamp() - (char *)sample);

                LocalFigure8CommandType_g_sampleAccessInfo.memberAccessInfos = 
                LocalFigure8CommandType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(UMAA::MO::LocalFigure8Control::LocalFigure8CommandType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        LocalFigure8CommandType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        LocalFigure8CommandType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                LocalFigure8CommandType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                LocalFigure8CommandType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< UMAA::MO::LocalFigure8Control::LocalFigure8CommandType >;

                LocalFigure8CommandType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &LocalFigure8CommandType_g_sampleAccessInfo;
            }

            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin LocalFigure8CommandType_g_typePlugin = 
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
                    NULL
                };

                return &LocalFigure8CommandType_g_typePlugin;
            }
        }; // native_type_code
        #endif

        const ::dds::core::xtypes::StructType& dynamic_type< UMAA::MO::LocalFigure8Control::LocalFigure8CommandType >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< UMAA::MO::LocalFigure8Control::LocalFigure8CommandType >::get())));
        }

    }
}

namespace dds { 
    namespace topic {
        void topic_type_support< UMAA::MO::LocalFigure8Control::LocalFigure8CommandType >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                UMAA::MO::LocalFigure8Control::LocalFigure8CommandTypePlugin_new,
                UMAA::MO::LocalFigure8Control::LocalFigure8CommandTypePlugin_delete);
        }

        std::vector<char>& topic_type_support< UMAA::MO::LocalFigure8Control::LocalFigure8CommandType >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const UMAA::MO::LocalFigure8Control::LocalFigure8CommandType& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = LocalFigure8CommandTypePlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = LocalFigure8CommandTypePlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< UMAA::MO::LocalFigure8Control::LocalFigure8CommandType >::from_cdr_buffer(UMAA::MO::LocalFigure8Control::LocalFigure8CommandType& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = LocalFigure8CommandTypePlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create UMAA::MO::LocalFigure8Control::LocalFigure8CommandType from cdr buffer");
        }

        void topic_type_support< UMAA::MO::LocalFigure8Control::LocalFigure8CommandType >::reset_sample(UMAA::MO::LocalFigure8Control::LocalFigure8CommandType& sample) 
        {
            sample.crossTrackTolerance(0.0);
            ::rti::topic::reset_sample(sample.elevation());
            sample.elevationTolerance(0.0);
            ::rti::topic::reset_sample(sample.endTime());
            sample.length(0.0);
            ::rti::topic::reset_sample(sample.orientation());
            ::rti::topic::reset_sample(sample.position());
            sample.radius(0.0);
            ::rti::topic::reset_sample(sample.speed());
            sample.speedTolerance(0.0);
            ::rti::topic::reset_sample(sample.transitElevation());
            sample.transitElevationTolerance(0.0);
            ::rti::topic::reset_sample(sample.transitSpeed());
            sample.transitSpeedTolerance(0.0);
            sample.turnDirection(UMAA::Common::MaritimeEnumeration::WaterTurnDirectionEnumType::WaterTurnDirectionEnumType::NO_VALID_TURN_DIRECTION);
            ::rti::topic::reset_sample(sample.source());
            ::rti::topic::reset_sample(sample.destination());
            ::rti::topic::reset_sample(sample.sessionID());
            ::rti::topic::reset_sample(sample.timeStamp());
        }

        void topic_type_support< UMAA::MO::LocalFigure8Control::LocalFigure8CommandType >::allocate_sample(UMAA::MO::LocalFigure8Control::LocalFigure8CommandType& sample, int, int) 
        {
            ::rti::topic::allocate_sample(sample.elevation(),  -1, -1);
            ::rti::topic::allocate_sample(sample.orientation(),  -1, -1);
            ::rti::topic::allocate_sample(sample.speed(),  -1, -1);
            ::rti::topic::allocate_sample(sample.transitElevation(),  -1, -1);
            ::rti::topic::allocate_sample(sample.transitSpeed(),  -1, -1);
            ::rti::topic::allocate_sample(sample.turnDirection(),  -1, -1);
            ::rti::topic::allocate_sample(sample.source(),  -1, -1);
            ::rti::topic::allocate_sample(sample.destination(),  -1, -1);
            ::rti::topic::allocate_sample(sample.sessionID(),  -1, -1);
            ::rti::topic::allocate_sample(sample.timeStamp(),  -1, -1);
        }

    }
}  

