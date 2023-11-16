

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from GlobalRegularPolygonCommandAckReportType.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef GlobalRegularPolygonCommandAckReportType_1479613028_hpp
#define GlobalRegularPolygonCommandAckReportType_1479613028_hpp

#include <iosfwd>

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef RTIUSERDllExport
#define RTIUSERDllExport __declspec(dllexport)
#endif

#include "dds/domain/DomainParticipant.hpp"
#include "dds/topic/TopicTraits.hpp"
#include "dds/core/SafeEnumeration.hpp"
#include "dds/core/String.hpp"
#include "dds/core/array.hpp"
#include "dds/core/vector.hpp"
#include "dds/core/Optional.hpp"
#include "dds/core/xtypes/DynamicType.hpp"
#include "dds/core/xtypes/StructType.hpp"
#include "dds/core/xtypes/UnionType.hpp"
#include "dds/core/xtypes/EnumType.hpp"
#include "dds/core/xtypes/AliasType.hpp"
#include "rti/core/array.hpp"
#include "rti/core/BoundedSequence.hpp"
#include "rti/util/StreamFlagSaver.hpp"
#include "rti/domain/PluginSupport.hpp"
#include "rti/core/LongDouble.hpp"
#include "dds/core/External.hpp"
#include "rti/core/Pointer.hpp"
#include "rti/topic/TopicTraits.hpp"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef RTIUSERDllExport
#define RTIUSERDllExport
#endif

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif
#include "UMAA/Common/MaritimeEnumeration/EnumerationSets.hpp"
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif
#include "UMAA/Common/Measurement/ElevationType.hpp"
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif
#include "UMAA/Common/Measurement/Measurements.hpp"
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif
#include "UMAA/Common/Measurement/Position2D.hpp"
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif
#include "UMAA/Common/Orientation/HeadingType.hpp"
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif
#include "UMAA/Common/VariableSpeedControl/VariableSpeedControlType.hpp"
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif
namespace UMAA {
    namespace MO {
        namespace GlobalRegularPolygonControl {

            static const std::string GlobalRegularPolygonCommandAckReport_TOPIC = "UMAA::MO::GlobalRegularPolygonControl::GlobalRegularPolygonCommandAckReport";

            class NDDSUSERDllExport GlobalRegularPolygonCommandAckReportType {
              public:
                GlobalRegularPolygonCommandAckReportType();

                GlobalRegularPolygonCommandAckReportType(double crossTrackTolerance,double diameter,const UMAA::Common::Measurement::ElevationType& elevation,double elevationTolerance,const ::dds::core::optional< UMAA::Common::Measurement::DateTime >& endTime,int32_t numberSides,const UMAA::Common::Orientation::HeadingType& orientation,const ::dds::core::optional< UMAA::Common::Measurement::Position2D >& position,const UMAA::Common::VariableSpeedControl::VariableSpeedControlType& speed,double speedTolerance,const UMAA::Common::Measurement::ElevationType& transitElevation,double transitElevationTolerance,const UMAA::Common::VariableSpeedControl::VariableSpeedControlType& transitSpeed,double transitSpeedTolerance,const UMAA::Common::MaritimeEnumeration::WaterTurnDirectionEnumType::WaterTurnDirectionEnumType& turnDirection,const UMAA::Common::Measurement::NumericGUID& source,const UMAA::Common::Measurement::NumericGUID& sessionID);

                #ifdef RTI_CXX11_RVALUE_REFERENCES
                #ifndef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
                GlobalRegularPolygonCommandAckReportType (GlobalRegularPolygonCommandAckReportType&&) = default;
                GlobalRegularPolygonCommandAckReportType& operator=(GlobalRegularPolygonCommandAckReportType&&) = default;
                GlobalRegularPolygonCommandAckReportType& operator=(const GlobalRegularPolygonCommandAckReportType&) = default;
                GlobalRegularPolygonCommandAckReportType(const GlobalRegularPolygonCommandAckReportType&) = default;
                #else
                GlobalRegularPolygonCommandAckReportType(GlobalRegularPolygonCommandAckReportType&& other_) OMG_NOEXCEPT;  
                GlobalRegularPolygonCommandAckReportType& operator=(GlobalRegularPolygonCommandAckReportType&&  other_) OMG_NOEXCEPT;
                #endif
                #endif 

                double& crossTrackTolerance() OMG_NOEXCEPT {
                    return m_crossTrackTolerance_;
                }

                const double& crossTrackTolerance() const OMG_NOEXCEPT {
                    return m_crossTrackTolerance_;
                }

                void crossTrackTolerance(double value) {
                    m_crossTrackTolerance_ = value;
                }

                double& diameter() OMG_NOEXCEPT {
                    return m_diameter_;
                }

                const double& diameter() const OMG_NOEXCEPT {
                    return m_diameter_;
                }

                void diameter(double value) {
                    m_diameter_ = value;
                }

                UMAA::Common::Measurement::ElevationType& elevation() OMG_NOEXCEPT {
                    return m_elevation_;
                }

                const UMAA::Common::Measurement::ElevationType& elevation() const OMG_NOEXCEPT {
                    return m_elevation_;
                }

                void elevation(const UMAA::Common::Measurement::ElevationType& value) {
                    m_elevation_ = value;
                }

                void elevation(UMAA::Common::Measurement::ElevationType&& value) {
                    m_elevation_ = std::move(value);
                }
                double& elevationTolerance() OMG_NOEXCEPT {
                    return m_elevationTolerance_;
                }

                const double& elevationTolerance() const OMG_NOEXCEPT {
                    return m_elevationTolerance_;
                }

                void elevationTolerance(double value) {
                    m_elevationTolerance_ = value;
                }

                ::dds::core::optional< UMAA::Common::Measurement::DateTime >& endTime() OMG_NOEXCEPT {
                    return m_endTime_;
                }

                const ::dds::core::optional< UMAA::Common::Measurement::DateTime >& endTime() const OMG_NOEXCEPT {
                    return m_endTime_;
                }

                void endTime(const ::dds::core::optional< UMAA::Common::Measurement::DateTime >& value) {
                    m_endTime_ = value;
                }

                void endTime(::dds::core::optional< UMAA::Common::Measurement::DateTime >&& value) {
                    m_endTime_ = std::move(value);
                }
                int32_t& numberSides() OMG_NOEXCEPT {
                    return m_numberSides_;
                }

                const int32_t& numberSides() const OMG_NOEXCEPT {
                    return m_numberSides_;
                }

                void numberSides(int32_t value) {
                    m_numberSides_ = value;
                }

                UMAA::Common::Orientation::HeadingType& orientation() OMG_NOEXCEPT {
                    return m_orientation_;
                }

                const UMAA::Common::Orientation::HeadingType& orientation() const OMG_NOEXCEPT {
                    return m_orientation_;
                }

                void orientation(const UMAA::Common::Orientation::HeadingType& value) {
                    m_orientation_ = value;
                }

                void orientation(UMAA::Common::Orientation::HeadingType&& value) {
                    m_orientation_ = std::move(value);
                }
                ::dds::core::optional< UMAA::Common::Measurement::Position2D >& position() OMG_NOEXCEPT {
                    return m_position_;
                }

                const ::dds::core::optional< UMAA::Common::Measurement::Position2D >& position() const OMG_NOEXCEPT {
                    return m_position_;
                }

                void position(const ::dds::core::optional< UMAA::Common::Measurement::Position2D >& value) {
                    m_position_ = value;
                }

                void position(::dds::core::optional< UMAA::Common::Measurement::Position2D >&& value) {
                    m_position_ = std::move(value);
                }
                UMAA::Common::VariableSpeedControl::VariableSpeedControlType& speed() OMG_NOEXCEPT {
                    return m_speed_;
                }

                const UMAA::Common::VariableSpeedControl::VariableSpeedControlType& speed() const OMG_NOEXCEPT {
                    return m_speed_;
                }

                void speed(const UMAA::Common::VariableSpeedControl::VariableSpeedControlType& value) {
                    m_speed_ = value;
                }

                void speed(UMAA::Common::VariableSpeedControl::VariableSpeedControlType&& value) {
                    m_speed_ = std::move(value);
                }
                double& speedTolerance() OMG_NOEXCEPT {
                    return m_speedTolerance_;
                }

                const double& speedTolerance() const OMG_NOEXCEPT {
                    return m_speedTolerance_;
                }

                void speedTolerance(double value) {
                    m_speedTolerance_ = value;
                }

                UMAA::Common::Measurement::ElevationType& transitElevation() OMG_NOEXCEPT {
                    return m_transitElevation_;
                }

                const UMAA::Common::Measurement::ElevationType& transitElevation() const OMG_NOEXCEPT {
                    return m_transitElevation_;
                }

                void transitElevation(const UMAA::Common::Measurement::ElevationType& value) {
                    m_transitElevation_ = value;
                }

                void transitElevation(UMAA::Common::Measurement::ElevationType&& value) {
                    m_transitElevation_ = std::move(value);
                }
                double& transitElevationTolerance() OMG_NOEXCEPT {
                    return m_transitElevationTolerance_;
                }

                const double& transitElevationTolerance() const OMG_NOEXCEPT {
                    return m_transitElevationTolerance_;
                }

                void transitElevationTolerance(double value) {
                    m_transitElevationTolerance_ = value;
                }

                UMAA::Common::VariableSpeedControl::VariableSpeedControlType& transitSpeed() OMG_NOEXCEPT {
                    return m_transitSpeed_;
                }

                const UMAA::Common::VariableSpeedControl::VariableSpeedControlType& transitSpeed() const OMG_NOEXCEPT {
                    return m_transitSpeed_;
                }

                void transitSpeed(const UMAA::Common::VariableSpeedControl::VariableSpeedControlType& value) {
                    m_transitSpeed_ = value;
                }

                void transitSpeed(UMAA::Common::VariableSpeedControl::VariableSpeedControlType&& value) {
                    m_transitSpeed_ = std::move(value);
                }
                double& transitSpeedTolerance() OMG_NOEXCEPT {
                    return m_transitSpeedTolerance_;
                }

                const double& transitSpeedTolerance() const OMG_NOEXCEPT {
                    return m_transitSpeedTolerance_;
                }

                void transitSpeedTolerance(double value) {
                    m_transitSpeedTolerance_ = value;
                }

                UMAA::Common::MaritimeEnumeration::WaterTurnDirectionEnumType::WaterTurnDirectionEnumType& turnDirection() OMG_NOEXCEPT {
                    return m_turnDirection_;
                }

                const UMAA::Common::MaritimeEnumeration::WaterTurnDirectionEnumType::WaterTurnDirectionEnumType& turnDirection() const OMG_NOEXCEPT {
                    return m_turnDirection_;
                }

                void turnDirection(const UMAA::Common::MaritimeEnumeration::WaterTurnDirectionEnumType::WaterTurnDirectionEnumType& value) {
                    m_turnDirection_ = value;
                }

                void turnDirection(UMAA::Common::MaritimeEnumeration::WaterTurnDirectionEnumType::WaterTurnDirectionEnumType&& value) {
                    m_turnDirection_ = std::move(value);
                }
                UMAA::Common::Measurement::NumericGUID& source() OMG_NOEXCEPT {
                    return m_source_;
                }

                const UMAA::Common::Measurement::NumericGUID& source() const OMG_NOEXCEPT {
                    return m_source_;
                }

                void source(const UMAA::Common::Measurement::NumericGUID& value) {
                    m_source_ = value;
                }

                void source(UMAA::Common::Measurement::NumericGUID&& value) {
                    m_source_ = std::move(value);
                }
                UMAA::Common::Measurement::NumericGUID& sessionID() OMG_NOEXCEPT {
                    return m_sessionID_;
                }

                const UMAA::Common::Measurement::NumericGUID& sessionID() const OMG_NOEXCEPT {
                    return m_sessionID_;
                }

                void sessionID(const UMAA::Common::Measurement::NumericGUID& value) {
                    m_sessionID_ = value;
                }

                void sessionID(UMAA::Common::Measurement::NumericGUID&& value) {
                    m_sessionID_ = std::move(value);
                }

                bool operator == (const GlobalRegularPolygonCommandAckReportType& other_) const;
                bool operator != (const GlobalRegularPolygonCommandAckReportType& other_) const;

                void swap(GlobalRegularPolygonCommandAckReportType& other_) OMG_NOEXCEPT ;

              private:

                double m_crossTrackTolerance_;
                double m_diameter_;
                UMAA::Common::Measurement::ElevationType m_elevation_;
                double m_elevationTolerance_;
                ::dds::core::optional< UMAA::Common::Measurement::DateTime > m_endTime_;
                int32_t m_numberSides_;
                UMAA::Common::Orientation::HeadingType m_orientation_;
                ::dds::core::optional< UMAA::Common::Measurement::Position2D > m_position_;
                UMAA::Common::VariableSpeedControl::VariableSpeedControlType m_speed_;
                double m_speedTolerance_;
                UMAA::Common::Measurement::ElevationType m_transitElevation_;
                double m_transitElevationTolerance_;
                UMAA::Common::VariableSpeedControl::VariableSpeedControlType m_transitSpeed_;
                double m_transitSpeedTolerance_;
                UMAA::Common::MaritimeEnumeration::WaterTurnDirectionEnumType::WaterTurnDirectionEnumType m_turnDirection_;
                UMAA::Common::Measurement::NumericGUID m_source_;
                UMAA::Common::Measurement::NumericGUID m_sessionID_;

            };

            inline void swap(GlobalRegularPolygonCommandAckReportType& a, GlobalRegularPolygonCommandAckReportType& b)  OMG_NOEXCEPT 
            {
                a.swap(b);
            }

            NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const GlobalRegularPolygonCommandAckReportType& sample);

        } // namespace GlobalRegularPolygonControl  
    } // namespace MO  
} // namespace UMAA  

namespace rti {
    namespace flat {
        namespace topic {
        }
    }
}
namespace dds {
    namespace topic {

        template<>
        struct topic_type_name< UMAA::MO::GlobalRegularPolygonControl::GlobalRegularPolygonCommandAckReportType > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::MO::GlobalRegularPolygonControl::GlobalRegularPolygonCommandAckReportType";
            }
        };

        template<>
        struct is_topic_type< UMAA::MO::GlobalRegularPolygonControl::GlobalRegularPolygonCommandAckReportType > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< UMAA::MO::GlobalRegularPolygonControl::GlobalRegularPolygonCommandAckReportType > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const UMAA::MO::GlobalRegularPolygonControl::GlobalRegularPolygonCommandAckReportType& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(UMAA::MO::GlobalRegularPolygonControl::GlobalRegularPolygonCommandAckReportType& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(UMAA::MO::GlobalRegularPolygonControl::GlobalRegularPolygonCommandAckReportType& sample);

            NDDSUSERDllExport 
            static void allocate_sample(UMAA::MO::GlobalRegularPolygonControl::GlobalRegularPolygonCommandAckReportType& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };

    }
}

namespace rti { 
    namespace topic {

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct dynamic_type< UMAA::MO::GlobalRegularPolygonControl::GlobalRegularPolygonCommandAckReportType > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };
        #endif

        template <>
        struct extensibility< UMAA::MO::GlobalRegularPolygonControl::GlobalRegularPolygonCommandAckReportType > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;                
        };

    }
}

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif // GlobalRegularPolygonCommandAckReportType_1479613028_hpp

