

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from LocalRacetrackCommandAckReportType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef LocalRacetrackCommandAckReportType_815101455_hpp
#define LocalRacetrackCommandAckReportType_815101455_hpp

#include <iosfwd>

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef RTIUSERDllExport
#define RTIUSERDllExport __declspec(dllexport)
#endif

#include "dds/core/SafeEnumeration.hpp"
#include "dds/core/String.hpp"
#include "dds/core/array.hpp"
#include "dds/core/vector.hpp"
#include "dds/core/External.hpp"
#include "rti/core/LongDouble.hpp"
#include "rti/core/Pointer.hpp"
#include "rti/core/array.hpp"
#include "rti/topic/TopicTraits.hpp"

#include "omg/types/string_view.hpp"

#include "rti/core/BoundedSequence.hpp"
#include "dds/core/Optional.hpp"

#ifndef NDDS_STANDALONE_TYPE
#include "dds/domain/DomainParticipant.hpp"
#include "dds/topic/TopicTraits.hpp"
#include "dds/core/xtypes/DynamicType.hpp"
#include "dds/core/xtypes/StructType.hpp"
#include "dds/core/xtypes/UnionType.hpp"
#include "dds/core/xtypes/EnumType.hpp"
#include "dds/core/xtypes/AliasType.hpp"
#include "rti/util/StreamFlagSaver.hpp"
#include "rti/domain/PluginSupport.hpp"
#endif

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
#include "UMAA/Common/Measurement/Position2D_PlatformXYZ.hpp"
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
        namespace LocalRacetrackControl {

            RTI_CONSTEXPR_OR_CONST_STRING std::string LocalRacetrackCommandAckReport_TOPIC = "UMAA::MO::LocalRacetrackControl::LocalRacetrackCommandAckReport";

            class NDDSUSERDllExport LocalRacetrackCommandAckReportType {
              public:

                LocalRacetrackCommandAckReportType();

                LocalRacetrackCommandAckReportType(double crossTrackTolerance_,const ::UMAA::Common::Measurement::ElevationType& elevation_,double elevationTolerance_,const ::dds::core::optional< ::UMAA::Common::Measurement::DateTime >& endTime_,double length_,const ::UMAA::Common::Orientation::HeadingType& orientation_,const ::dds::core::optional< ::UMAA::Common::Measurement::Position2D_PlatformXYZ >& position_,double radius_,const ::UMAA::Common::VariableSpeedControl::VariableSpeedControlType& speed_,double speedTolerance_,const ::UMAA::Common::Measurement::ElevationType& transitElevation_,double transitElevationTolerance_,const ::UMAA::Common::VariableSpeedControl::VariableSpeedControlType& transitSpeed_,double transitSpeedTolerance_,const ::UMAA::Common::MaritimeEnumeration::WaterTurnDirectionEnumType::WaterTurnDirectionEnumType& turnDirection_,const ::UMAA::Common::Measurement::NumericGUID& source_,const ::UMAA::Common::Measurement::NumericGUID& sessionID_);

                double& crossTrackTolerance() noexcept {
                    return m_crossTrackTolerance_;
                }

                const double& crossTrackTolerance() const noexcept {
                    return m_crossTrackTolerance_;
                }

                void crossTrackTolerance(double value) {

                    m_crossTrackTolerance_ = value;
                }

                ::UMAA::Common::Measurement::ElevationType& elevation() noexcept {
                    return m_elevation_;
                }

                const ::UMAA::Common::Measurement::ElevationType& elevation() const noexcept {
                    return m_elevation_;
                }

                void elevation(const ::UMAA::Common::Measurement::ElevationType& value) {

                    m_elevation_ = value;
                }

                void elevation(::UMAA::Common::Measurement::ElevationType&& value) {
                    m_elevation_ = std::move(value);
                }
                double& elevationTolerance() noexcept {
                    return m_elevationTolerance_;
                }

                const double& elevationTolerance() const noexcept {
                    return m_elevationTolerance_;
                }

                void elevationTolerance(double value) {

                    m_elevationTolerance_ = value;
                }

                ::dds::core::optional< ::UMAA::Common::Measurement::DateTime >& endTime() noexcept {
                    return m_endTime_;
                }

                const ::dds::core::optional< ::UMAA::Common::Measurement::DateTime >& endTime() const noexcept {
                    return m_endTime_;
                }

                void endTime(const ::dds::core::optional< ::UMAA::Common::Measurement::DateTime >& value) {

                    m_endTime_ = value;
                }

                void endTime(::dds::core::optional< ::UMAA::Common::Measurement::DateTime >&& value) {
                    m_endTime_ = std::move(value);
                }
                double& length() noexcept {
                    return m_length_;
                }

                const double& length() const noexcept {
                    return m_length_;
                }

                void length(double value) {

                    m_length_ = value;
                }

                ::UMAA::Common::Orientation::HeadingType& orientation() noexcept {
                    return m_orientation_;
                }

                const ::UMAA::Common::Orientation::HeadingType& orientation() const noexcept {
                    return m_orientation_;
                }

                void orientation(const ::UMAA::Common::Orientation::HeadingType& value) {

                    m_orientation_ = value;
                }

                void orientation(::UMAA::Common::Orientation::HeadingType&& value) {
                    m_orientation_ = std::move(value);
                }
                ::dds::core::optional< ::UMAA::Common::Measurement::Position2D_PlatformXYZ >& position() noexcept {
                    return m_position_;
                }

                const ::dds::core::optional< ::UMAA::Common::Measurement::Position2D_PlatformXYZ >& position() const noexcept {
                    return m_position_;
                }

                void position(const ::dds::core::optional< ::UMAA::Common::Measurement::Position2D_PlatformXYZ >& value) {

                    m_position_ = value;
                }

                void position(::dds::core::optional< ::UMAA::Common::Measurement::Position2D_PlatformXYZ >&& value) {
                    m_position_ = std::move(value);
                }
                double& radius() noexcept {
                    return m_radius_;
                }

                const double& radius() const noexcept {
                    return m_radius_;
                }

                void radius(double value) {

                    m_radius_ = value;
                }

                ::UMAA::Common::VariableSpeedControl::VariableSpeedControlType& speed() noexcept {
                    return m_speed_;
                }

                const ::UMAA::Common::VariableSpeedControl::VariableSpeedControlType& speed() const noexcept {
                    return m_speed_;
                }

                void speed(const ::UMAA::Common::VariableSpeedControl::VariableSpeedControlType& value) {

                    m_speed_ = value;
                }

                void speed(::UMAA::Common::VariableSpeedControl::VariableSpeedControlType&& value) {
                    m_speed_ = std::move(value);
                }
                double& speedTolerance() noexcept {
                    return m_speedTolerance_;
                }

                const double& speedTolerance() const noexcept {
                    return m_speedTolerance_;
                }

                void speedTolerance(double value) {

                    m_speedTolerance_ = value;
                }

                ::UMAA::Common::Measurement::ElevationType& transitElevation() noexcept {
                    return m_transitElevation_;
                }

                const ::UMAA::Common::Measurement::ElevationType& transitElevation() const noexcept {
                    return m_transitElevation_;
                }

                void transitElevation(const ::UMAA::Common::Measurement::ElevationType& value) {

                    m_transitElevation_ = value;
                }

                void transitElevation(::UMAA::Common::Measurement::ElevationType&& value) {
                    m_transitElevation_ = std::move(value);
                }
                double& transitElevationTolerance() noexcept {
                    return m_transitElevationTolerance_;
                }

                const double& transitElevationTolerance() const noexcept {
                    return m_transitElevationTolerance_;
                }

                void transitElevationTolerance(double value) {

                    m_transitElevationTolerance_ = value;
                }

                ::UMAA::Common::VariableSpeedControl::VariableSpeedControlType& transitSpeed() noexcept {
                    return m_transitSpeed_;
                }

                const ::UMAA::Common::VariableSpeedControl::VariableSpeedControlType& transitSpeed() const noexcept {
                    return m_transitSpeed_;
                }

                void transitSpeed(const ::UMAA::Common::VariableSpeedControl::VariableSpeedControlType& value) {

                    m_transitSpeed_ = value;
                }

                void transitSpeed(::UMAA::Common::VariableSpeedControl::VariableSpeedControlType&& value) {
                    m_transitSpeed_ = std::move(value);
                }
                double& transitSpeedTolerance() noexcept {
                    return m_transitSpeedTolerance_;
                }

                const double& transitSpeedTolerance() const noexcept {
                    return m_transitSpeedTolerance_;
                }

                void transitSpeedTolerance(double value) {

                    m_transitSpeedTolerance_ = value;
                }

                ::UMAA::Common::MaritimeEnumeration::WaterTurnDirectionEnumType::WaterTurnDirectionEnumType& turnDirection() noexcept {
                    return m_turnDirection_;
                }

                const ::UMAA::Common::MaritimeEnumeration::WaterTurnDirectionEnumType::WaterTurnDirectionEnumType& turnDirection() const noexcept {
                    return m_turnDirection_;
                }

                void turnDirection(const ::UMAA::Common::MaritimeEnumeration::WaterTurnDirectionEnumType::WaterTurnDirectionEnumType& value) {

                    m_turnDirection_ = value;
                }

                void turnDirection(::UMAA::Common::MaritimeEnumeration::WaterTurnDirectionEnumType::WaterTurnDirectionEnumType&& value) {
                    m_turnDirection_ = std::move(value);
                }
                ::UMAA::Common::Measurement::NumericGUID& source() noexcept {
                    return m_source_;
                }

                const ::UMAA::Common::Measurement::NumericGUID& source() const noexcept {
                    return m_source_;
                }

                void source(const ::UMAA::Common::Measurement::NumericGUID& value) {

                    m_source_ = value;
                }

                void source(::UMAA::Common::Measurement::NumericGUID&& value) {
                    m_source_ = std::move(value);
                }
                ::UMAA::Common::Measurement::NumericGUID& sessionID() noexcept {
                    return m_sessionID_;
                }

                const ::UMAA::Common::Measurement::NumericGUID& sessionID() const noexcept {
                    return m_sessionID_;
                }

                void sessionID(const ::UMAA::Common::Measurement::NumericGUID& value) {

                    m_sessionID_ = value;
                }

                void sessionID(::UMAA::Common::Measurement::NumericGUID&& value) {
                    m_sessionID_ = std::move(value);
                }
                bool operator == (const LocalRacetrackCommandAckReportType& other_) const;
                bool operator != (const LocalRacetrackCommandAckReportType& other_) const;

                void swap(LocalRacetrackCommandAckReportType& other_) noexcept ;

              private:

                double m_crossTrackTolerance_;
                ::UMAA::Common::Measurement::ElevationType m_elevation_;
                double m_elevationTolerance_;
                ::dds::core::optional< ::UMAA::Common::Measurement::DateTime > m_endTime_;
                double m_length_;
                ::UMAA::Common::Orientation::HeadingType m_orientation_;
                ::dds::core::optional< ::UMAA::Common::Measurement::Position2D_PlatformXYZ > m_position_;
                double m_radius_;
                ::UMAA::Common::VariableSpeedControl::VariableSpeedControlType m_speed_;
                double m_speedTolerance_;
                ::UMAA::Common::Measurement::ElevationType m_transitElevation_;
                double m_transitElevationTolerance_;
                ::UMAA::Common::VariableSpeedControl::VariableSpeedControlType m_transitSpeed_;
                double m_transitSpeedTolerance_;
                ::UMAA::Common::MaritimeEnumeration::WaterTurnDirectionEnumType::WaterTurnDirectionEnumType m_turnDirection_;
                ::UMAA::Common::Measurement::NumericGUID m_source_ {};
                ::UMAA::Common::Measurement::NumericGUID m_sessionID_ {};

            };

            inline void swap(LocalRacetrackCommandAckReportType& a, LocalRacetrackCommandAckReportType& b)  noexcept 
            {
                a.swap(b);
            }

            NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const LocalRacetrackCommandAckReportType& sample);

        } // namespace LocalRacetrackControl  
    } // namespace MO  
} // namespace UMAA  

#ifdef NDDS_STANDALONE_TYPE
namespace rti { 
    namespace topic {
    }
}
#else

namespace rti {
    namespace flat {
        namespace topic {
        }
    }
}
namespace dds {
    namespace topic {

        template<>
        struct topic_type_name< ::UMAA::MO::LocalRacetrackControl::LocalRacetrackCommandAckReportType > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::MO::LocalRacetrackControl::LocalRacetrackCommandAckReportType";
            }
        };

        template<>
        struct is_topic_type< ::UMAA::MO::LocalRacetrackControl::LocalRacetrackCommandAckReportType > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< ::UMAA::MO::LocalRacetrackControl::LocalRacetrackCommandAckReportType > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const ::UMAA::MO::LocalRacetrackControl::LocalRacetrackCommandAckReportType& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(::UMAA::MO::LocalRacetrackControl::LocalRacetrackCommandAckReportType& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(::UMAA::MO::LocalRacetrackControl::LocalRacetrackCommandAckReportType& sample);

            NDDSUSERDllExport 
            static void allocate_sample(::UMAA::MO::LocalRacetrackControl::LocalRacetrackCommandAckReportType& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };
    }
}

namespace rti { 
    namespace topic {

        template<>
        struct dynamic_type< ::UMAA::MO::LocalRacetrackControl::LocalRacetrackCommandAckReportType > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };

        template <>
        struct extensibility< ::UMAA::MO::LocalRacetrackControl::LocalRacetrackCommandAckReportType > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;    };

    }
}

#endif // NDDS_STANDALONE_TYPE
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif // LocalRacetrackCommandAckReportType_815101455_hpp

