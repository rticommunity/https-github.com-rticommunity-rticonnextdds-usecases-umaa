

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from LocalWaypointType.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef LocalWaypointType_1914962981_hpp
#define LocalWaypointType_1914962981_hpp

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
#include "UMAA/Common/Enumeration/EnumerationSets.hpp"
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
#include "UMAA/Common/Measurement/Orientation3D_PlatformXYZ.hpp"
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
#include "UMAA/Common/VariableSpeedControl/VariableSpeedControlType.hpp"
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
namespace UMAA {
    namespace MO {
        namespace LocalWaypointControl {

            class NDDSUSERDllExport LocalWaypointType {
              public:
                LocalWaypointType();

                LocalWaypointType(const UMAA::Common::Measurement::Orientation3D_PlatformXYZ& attitude,const UMAA::Common::Measurement::ElevationType& elevation,bool maintainTrack,double pathTolerance,const UMAA::Common::Measurement::Position2D_PlatformXYZ& position,const UMAA::Common::VariableSpeedControl::VariableSpeedControlType& speed,double waypointTolerance,const UMAA::Common::Measurement::NumericGUID& waypointID);

                #ifdef RTI_CXX11_RVALUE_REFERENCES
                #ifndef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
                LocalWaypointType (LocalWaypointType&&) = default;
                LocalWaypointType& operator=(LocalWaypointType&&) = default;
                LocalWaypointType& operator=(const LocalWaypointType&) = default;
                LocalWaypointType(const LocalWaypointType&) = default;
                #else
                LocalWaypointType(LocalWaypointType&& other_) OMG_NOEXCEPT;  
                LocalWaypointType& operator=(LocalWaypointType&&  other_) OMG_NOEXCEPT;
                #endif
                #endif 

                UMAA::Common::Measurement::Orientation3D_PlatformXYZ& attitude() OMG_NOEXCEPT {
                    return m_attitude_;
                }

                const UMAA::Common::Measurement::Orientation3D_PlatformXYZ& attitude() const OMG_NOEXCEPT {
                    return m_attitude_;
                }

                void attitude(const UMAA::Common::Measurement::Orientation3D_PlatformXYZ& value) {
                    m_attitude_ = value;
                }

                void attitude(UMAA::Common::Measurement::Orientation3D_PlatformXYZ&& value) {
                    m_attitude_ = std::move(value);
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
                bool& maintainTrack() OMG_NOEXCEPT {
                    return m_maintainTrack_;
                }

                const bool& maintainTrack() const OMG_NOEXCEPT {
                    return m_maintainTrack_;
                }

                void maintainTrack(bool value) {
                    m_maintainTrack_ = value;
                }

                double& pathTolerance() OMG_NOEXCEPT {
                    return m_pathTolerance_;
                }

                const double& pathTolerance() const OMG_NOEXCEPT {
                    return m_pathTolerance_;
                }

                void pathTolerance(double value) {
                    m_pathTolerance_ = value;
                }

                UMAA::Common::Measurement::Position2D_PlatformXYZ& position() OMG_NOEXCEPT {
                    return m_position_;
                }

                const UMAA::Common::Measurement::Position2D_PlatformXYZ& position() const OMG_NOEXCEPT {
                    return m_position_;
                }

                void position(const UMAA::Common::Measurement::Position2D_PlatformXYZ& value) {
                    m_position_ = value;
                }

                void position(UMAA::Common::Measurement::Position2D_PlatformXYZ&& value) {
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
                double& waypointTolerance() OMG_NOEXCEPT {
                    return m_waypointTolerance_;
                }

                const double& waypointTolerance() const OMG_NOEXCEPT {
                    return m_waypointTolerance_;
                }

                void waypointTolerance(double value) {
                    m_waypointTolerance_ = value;
                }

                UMAA::Common::Measurement::NumericGUID& waypointID() OMG_NOEXCEPT {
                    return m_waypointID_;
                }

                const UMAA::Common::Measurement::NumericGUID& waypointID() const OMG_NOEXCEPT {
                    return m_waypointID_;
                }

                void waypointID(const UMAA::Common::Measurement::NumericGUID& value) {
                    m_waypointID_ = value;
                }

                void waypointID(UMAA::Common::Measurement::NumericGUID&& value) {
                    m_waypointID_ = std::move(value);
                }

                bool operator == (const LocalWaypointType& other_) const;
                bool operator != (const LocalWaypointType& other_) const;

                void swap(LocalWaypointType& other_) OMG_NOEXCEPT ;

              private:

                UMAA::Common::Measurement::Orientation3D_PlatformXYZ m_attitude_;
                UMAA::Common::Measurement::ElevationType m_elevation_;
                bool m_maintainTrack_;
                double m_pathTolerance_;
                UMAA::Common::Measurement::Position2D_PlatformXYZ m_position_;
                UMAA::Common::VariableSpeedControl::VariableSpeedControlType m_speed_;
                double m_waypointTolerance_;
                UMAA::Common::Measurement::NumericGUID m_waypointID_;

            };

            inline void swap(LocalWaypointType& a, LocalWaypointType& b)  OMG_NOEXCEPT 
            {
                a.swap(b);
            }

            NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const LocalWaypointType& sample);

        } // namespace LocalWaypointControl  
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
        struct topic_type_name< UMAA::MO::LocalWaypointControl::LocalWaypointType > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::MO::LocalWaypointControl::LocalWaypointType";
            }
        };

        template<>
        struct is_topic_type< UMAA::MO::LocalWaypointControl::LocalWaypointType > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< UMAA::MO::LocalWaypointControl::LocalWaypointType > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const UMAA::MO::LocalWaypointControl::LocalWaypointType& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(UMAA::MO::LocalWaypointControl::LocalWaypointType& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(UMAA::MO::LocalWaypointControl::LocalWaypointType& sample);

            NDDSUSERDllExport 
            static void allocate_sample(UMAA::MO::LocalWaypointControl::LocalWaypointType& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };

    }
}

namespace rti { 
    namespace topic {

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct dynamic_type< UMAA::MO::LocalWaypointControl::LocalWaypointType > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };
        #endif

        template <>
        struct extensibility< UMAA::MO::LocalWaypointControl::LocalWaypointType > {
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

#endif // LocalWaypointType_1914962981_hpp

