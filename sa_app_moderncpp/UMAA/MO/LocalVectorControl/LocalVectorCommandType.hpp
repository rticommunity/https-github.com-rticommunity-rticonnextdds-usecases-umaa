

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from LocalVectorCommandType.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef LocalVectorCommandType_1166797509_hpp
#define LocalVectorCommandType_1166797509_hpp

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
#include "UMAA/Common/Measurement/Orientation3D_Tolerance.hpp"
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
#include "UMAA/Common/Orientation/OrientationType.hpp"
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
#include "UMAA/Common/Speed/SpeedControlType.hpp"
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif
namespace UMAA {
    namespace MO {
        namespace LocalVectorControl {

            static const std::string LocalVectorCommand_TOPIC = "UMAA::MO::LocalVectorControl::LocalVectorCommand";

            class NDDSUSERDllExport LocalVectorCommandType {
              public:
                LocalVectorCommandType();

                LocalVectorCommandType(const UMAA::Common::Orientation::OrientationType& attitude,const UMAA::Common::Measurement::Orientation3D_Tolerance& attitudeTolerance,const UMAA::Common::Measurement::ElevationType& elevation,double elevationTolerance,const ::dds::core::optional< UMAA::Common::Measurement::DateTime >& endTime,const UMAA::Common::Speed::SpeedControlType& speed,double speedTolerance,const UMAA::Common::Measurement::NumericGUID& source,const UMAA::Common::Measurement::NumericGUID& destination,const UMAA::Common::Measurement::NumericGUID& sessionID,const UMAA::Common::Measurement::DateTime& timeStamp);

                #ifdef RTI_CXX11_RVALUE_REFERENCES
                #ifndef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
                LocalVectorCommandType (LocalVectorCommandType&&) = default;
                LocalVectorCommandType& operator=(LocalVectorCommandType&&) = default;
                LocalVectorCommandType& operator=(const LocalVectorCommandType&) = default;
                LocalVectorCommandType(const LocalVectorCommandType&) = default;
                #else
                LocalVectorCommandType(LocalVectorCommandType&& other_) OMG_NOEXCEPT;  
                LocalVectorCommandType& operator=(LocalVectorCommandType&&  other_) OMG_NOEXCEPT;
                #endif
                #endif 

                UMAA::Common::Orientation::OrientationType& attitude() OMG_NOEXCEPT {
                    return m_attitude_;
                }

                const UMAA::Common::Orientation::OrientationType& attitude() const OMG_NOEXCEPT {
                    return m_attitude_;
                }

                void attitude(const UMAA::Common::Orientation::OrientationType& value) {
                    m_attitude_ = value;
                }

                void attitude(UMAA::Common::Orientation::OrientationType&& value) {
                    m_attitude_ = std::move(value);
                }
                UMAA::Common::Measurement::Orientation3D_Tolerance& attitudeTolerance() OMG_NOEXCEPT {
                    return m_attitudeTolerance_;
                }

                const UMAA::Common::Measurement::Orientation3D_Tolerance& attitudeTolerance() const OMG_NOEXCEPT {
                    return m_attitudeTolerance_;
                }

                void attitudeTolerance(const UMAA::Common::Measurement::Orientation3D_Tolerance& value) {
                    m_attitudeTolerance_ = value;
                }

                void attitudeTolerance(UMAA::Common::Measurement::Orientation3D_Tolerance&& value) {
                    m_attitudeTolerance_ = std::move(value);
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
                UMAA::Common::Speed::SpeedControlType& speed() OMG_NOEXCEPT {
                    return m_speed_;
                }

                const UMAA::Common::Speed::SpeedControlType& speed() const OMG_NOEXCEPT {
                    return m_speed_;
                }

                void speed(const UMAA::Common::Speed::SpeedControlType& value) {
                    m_speed_ = value;
                }

                void speed(UMAA::Common::Speed::SpeedControlType&& value) {
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
                UMAA::Common::Measurement::NumericGUID& destination() OMG_NOEXCEPT {
                    return m_destination_;
                }

                const UMAA::Common::Measurement::NumericGUID& destination() const OMG_NOEXCEPT {
                    return m_destination_;
                }

                void destination(const UMAA::Common::Measurement::NumericGUID& value) {
                    m_destination_ = value;
                }

                void destination(UMAA::Common::Measurement::NumericGUID&& value) {
                    m_destination_ = std::move(value);
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
                UMAA::Common::Measurement::DateTime& timeStamp() OMG_NOEXCEPT {
                    return m_timeStamp_;
                }

                const UMAA::Common::Measurement::DateTime& timeStamp() const OMG_NOEXCEPT {
                    return m_timeStamp_;
                }

                void timeStamp(const UMAA::Common::Measurement::DateTime& value) {
                    m_timeStamp_ = value;
                }

                void timeStamp(UMAA::Common::Measurement::DateTime&& value) {
                    m_timeStamp_ = std::move(value);
                }

                bool operator == (const LocalVectorCommandType& other_) const;
                bool operator != (const LocalVectorCommandType& other_) const;

                void swap(LocalVectorCommandType& other_) OMG_NOEXCEPT ;

              private:

                UMAA::Common::Orientation::OrientationType m_attitude_;
                UMAA::Common::Measurement::Orientation3D_Tolerance m_attitudeTolerance_;
                UMAA::Common::Measurement::ElevationType m_elevation_;
                double m_elevationTolerance_;
                ::dds::core::optional< UMAA::Common::Measurement::DateTime > m_endTime_;
                UMAA::Common::Speed::SpeedControlType m_speed_;
                double m_speedTolerance_;
                UMAA::Common::Measurement::NumericGUID m_source_;
                UMAA::Common::Measurement::NumericGUID m_destination_;
                UMAA::Common::Measurement::NumericGUID m_sessionID_;
                UMAA::Common::Measurement::DateTime m_timeStamp_;

            };

            inline void swap(LocalVectorCommandType& a, LocalVectorCommandType& b)  OMG_NOEXCEPT 
            {
                a.swap(b);
            }

            NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const LocalVectorCommandType& sample);

        } // namespace LocalVectorControl  
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
        struct topic_type_name< UMAA::MO::LocalVectorControl::LocalVectorCommandType > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::MO::LocalVectorControl::LocalVectorCommandType";
            }
        };

        template<>
        struct is_topic_type< UMAA::MO::LocalVectorControl::LocalVectorCommandType > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< UMAA::MO::LocalVectorControl::LocalVectorCommandType > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const UMAA::MO::LocalVectorControl::LocalVectorCommandType& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(UMAA::MO::LocalVectorControl::LocalVectorCommandType& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(UMAA::MO::LocalVectorControl::LocalVectorCommandType& sample);

            NDDSUSERDllExport 
            static void allocate_sample(UMAA::MO::LocalVectorControl::LocalVectorCommandType& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };

    }
}

namespace rti { 
    namespace topic {

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct dynamic_type< UMAA::MO::LocalVectorControl::LocalVectorCommandType > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };
        #endif

        template <>
        struct extensibility< UMAA::MO::LocalVectorControl::LocalVectorCommandType > {
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

#endif // LocalVectorCommandType_1166797509_hpp

