

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from LocalDeadReckoningCommandReportType.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef LocalDeadReckoningCommandReportType_371217476_hpp
#define LocalDeadReckoningCommandReportType_371217476_hpp

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
#include "UMAA/Common/Measurement/CovarianceOrientationType.hpp"
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
#include "UMAA/Common/Measurement/CovariancePositionVelocityType.hpp"
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
#include "UMAA/Common/Measurement/Position3D_PlatformXYZ.hpp"
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif
namespace UMAA {
    namespace SA {
        namespace LocalDeadReckoning {

            static const std::string LocalDeadReckoningCommandReport_TOPIC = "UMAA::SA::LocalDeadReckoning::LocalDeadReckoningCommandReport";

            class NDDSUSERDllExport LocalDeadReckoningCommandReportType {
              public:
                LocalDeadReckoningCommandReportType();

                LocalDeadReckoningCommandReportType(const UMAA::Common::Measurement::Orientation3D_PlatformXYZ& attitude,const UMAA::Common::Measurement::CovarianceOrientationType& attitudeCovariance,const UMAA::Common::Measurement::ElevationType& elevation,const UMAA::Common::Measurement::Position3D_PlatformXYZ& position,const UMAA::Common::Measurement::CovariancePositionVelocityType& xyPositionCovariance,const UMAA::Common::Measurement::CovariancePositionVelocityType& zPositionCovariance,const UMAA::Common::Measurement::NumericGUID& source,const UMAA::Common::Measurement::DateTime& timeStamp);

                #ifdef RTI_CXX11_RVALUE_REFERENCES
                #ifndef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
                LocalDeadReckoningCommandReportType (LocalDeadReckoningCommandReportType&&) = default;
                LocalDeadReckoningCommandReportType& operator=(LocalDeadReckoningCommandReportType&&) = default;
                LocalDeadReckoningCommandReportType& operator=(const LocalDeadReckoningCommandReportType&) = default;
                LocalDeadReckoningCommandReportType(const LocalDeadReckoningCommandReportType&) = default;
                #else
                LocalDeadReckoningCommandReportType(LocalDeadReckoningCommandReportType&& other_) OMG_NOEXCEPT;  
                LocalDeadReckoningCommandReportType& operator=(LocalDeadReckoningCommandReportType&&  other_) OMG_NOEXCEPT;
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
                UMAA::Common::Measurement::CovarianceOrientationType& attitudeCovariance() OMG_NOEXCEPT {
                    return m_attitudeCovariance_;
                }

                const UMAA::Common::Measurement::CovarianceOrientationType& attitudeCovariance() const OMG_NOEXCEPT {
                    return m_attitudeCovariance_;
                }

                void attitudeCovariance(const UMAA::Common::Measurement::CovarianceOrientationType& value) {
                    m_attitudeCovariance_ = value;
                }

                void attitudeCovariance(UMAA::Common::Measurement::CovarianceOrientationType&& value) {
                    m_attitudeCovariance_ = std::move(value);
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
                UMAA::Common::Measurement::Position3D_PlatformXYZ& position() OMG_NOEXCEPT {
                    return m_position_;
                }

                const UMAA::Common::Measurement::Position3D_PlatformXYZ& position() const OMG_NOEXCEPT {
                    return m_position_;
                }

                void position(const UMAA::Common::Measurement::Position3D_PlatformXYZ& value) {
                    m_position_ = value;
                }

                void position(UMAA::Common::Measurement::Position3D_PlatformXYZ&& value) {
                    m_position_ = std::move(value);
                }
                UMAA::Common::Measurement::CovariancePositionVelocityType& xyPositionCovariance() OMG_NOEXCEPT {
                    return m_xyPositionCovariance_;
                }

                const UMAA::Common::Measurement::CovariancePositionVelocityType& xyPositionCovariance() const OMG_NOEXCEPT {
                    return m_xyPositionCovariance_;
                }

                void xyPositionCovariance(const UMAA::Common::Measurement::CovariancePositionVelocityType& value) {
                    m_xyPositionCovariance_ = value;
                }

                void xyPositionCovariance(UMAA::Common::Measurement::CovariancePositionVelocityType&& value) {
                    m_xyPositionCovariance_ = std::move(value);
                }
                UMAA::Common::Measurement::CovariancePositionVelocityType& zPositionCovariance() OMG_NOEXCEPT {
                    return m_zPositionCovariance_;
                }

                const UMAA::Common::Measurement::CovariancePositionVelocityType& zPositionCovariance() const OMG_NOEXCEPT {
                    return m_zPositionCovariance_;
                }

                void zPositionCovariance(const UMAA::Common::Measurement::CovariancePositionVelocityType& value) {
                    m_zPositionCovariance_ = value;
                }

                void zPositionCovariance(UMAA::Common::Measurement::CovariancePositionVelocityType&& value) {
                    m_zPositionCovariance_ = std::move(value);
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

                bool operator == (const LocalDeadReckoningCommandReportType& other_) const;
                bool operator != (const LocalDeadReckoningCommandReportType& other_) const;

                void swap(LocalDeadReckoningCommandReportType& other_) OMG_NOEXCEPT ;

              private:

                UMAA::Common::Measurement::Orientation3D_PlatformXYZ m_attitude_;
                UMAA::Common::Measurement::CovarianceOrientationType m_attitudeCovariance_;
                UMAA::Common::Measurement::ElevationType m_elevation_;
                UMAA::Common::Measurement::Position3D_PlatformXYZ m_position_;
                UMAA::Common::Measurement::CovariancePositionVelocityType m_xyPositionCovariance_;
                UMAA::Common::Measurement::CovariancePositionVelocityType m_zPositionCovariance_;
                UMAA::Common::Measurement::NumericGUID m_source_;
                UMAA::Common::Measurement::DateTime m_timeStamp_;

            };

            inline void swap(LocalDeadReckoningCommandReportType& a, LocalDeadReckoningCommandReportType& b)  OMG_NOEXCEPT 
            {
                a.swap(b);
            }

            NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const LocalDeadReckoningCommandReportType& sample);

        } // namespace LocalDeadReckoning  
    } // namespace SA  
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
        struct topic_type_name< UMAA::SA::LocalDeadReckoning::LocalDeadReckoningCommandReportType > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::SA::LocalDeadReckoning::LocalDeadReckoningCommandReportType";
            }
        };

        template<>
        struct is_topic_type< UMAA::SA::LocalDeadReckoning::LocalDeadReckoningCommandReportType > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< UMAA::SA::LocalDeadReckoning::LocalDeadReckoningCommandReportType > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const UMAA::SA::LocalDeadReckoning::LocalDeadReckoningCommandReportType& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(UMAA::SA::LocalDeadReckoning::LocalDeadReckoningCommandReportType& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(UMAA::SA::LocalDeadReckoning::LocalDeadReckoningCommandReportType& sample);

            NDDSUSERDllExport 
            static void allocate_sample(UMAA::SA::LocalDeadReckoning::LocalDeadReckoningCommandReportType& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };

    }
}

namespace rti { 
    namespace topic {

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct dynamic_type< UMAA::SA::LocalDeadReckoning::LocalDeadReckoningCommandReportType > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };
        #endif

        template <>
        struct extensibility< UMAA::SA::LocalDeadReckoning::LocalDeadReckoningCommandReportType > {
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

#endif // LocalDeadReckoningCommandReportType_371217476_hpp

