

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from PathReporterReportType.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef PathReporterReportType_588380571_hpp
#define PathReporterReportType_588380571_hpp

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
#include "UMAA/MM/BaseType/WaypointType.hpp"
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif
namespace UMAA {
    namespace SA {
        namespace PathReporterStatus {

            static const std::string PathReporterReport_TOPIC = "UMAA::SA::PathReporterStatus::PathReporterReport";

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            // On Windows, dll-export template instantiations of standard types used by
            // other dll-exported types
            template class NDDSUSERDllExport std::allocator< UMAA::MM::BaseType::WaypointType >;
            template class NDDSUSERDllExport std::vector< UMAA::MM::BaseType::WaypointType >;
            #endif
            class NDDSUSERDllExport PathReporterReportType {
              public:
                PathReporterReportType();

                PathReporterReportType(const ::rti::core::bounded_sequence< UMAA::MM::BaseType::WaypointType, 100L >& historicalGlobalPaths,const ::rti::core::bounded_sequence< UMAA::MM::BaseType::WaypointType, 100L >& historicalLocalPaths,const ::rti::core::bounded_sequence< UMAA::MM::BaseType::WaypointType, 100L >& plannedGlobalPaths,const ::rti::core::bounded_sequence< UMAA::MM::BaseType::WaypointType, 100L >& plannedLocalPaths,const UMAA::Common::Measurement::NumericGUID& source,const UMAA::Common::Measurement::DateTime& timeStamp);

                #ifdef RTI_CXX11_RVALUE_REFERENCES
                #ifndef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
                PathReporterReportType (PathReporterReportType&&) = default;
                PathReporterReportType& operator=(PathReporterReportType&&) = default;
                PathReporterReportType& operator=(const PathReporterReportType&) = default;
                PathReporterReportType(const PathReporterReportType&) = default;
                #else
                PathReporterReportType(PathReporterReportType&& other_) OMG_NOEXCEPT;  
                PathReporterReportType& operator=(PathReporterReportType&&  other_) OMG_NOEXCEPT;
                #endif
                #endif 

                ::rti::core::bounded_sequence< UMAA::MM::BaseType::WaypointType, 100L >& historicalGlobalPaths() OMG_NOEXCEPT {
                    return m_historicalGlobalPaths_;
                }

                const ::rti::core::bounded_sequence< UMAA::MM::BaseType::WaypointType, 100L >& historicalGlobalPaths() const OMG_NOEXCEPT {
                    return m_historicalGlobalPaths_;
                }

                void historicalGlobalPaths(const ::rti::core::bounded_sequence< UMAA::MM::BaseType::WaypointType, 100L >& value) {
                    m_historicalGlobalPaths_ = value;
                }

                void historicalGlobalPaths(::rti::core::bounded_sequence< UMAA::MM::BaseType::WaypointType, 100L >&& value) {
                    m_historicalGlobalPaths_ = std::move(value);
                }
                ::rti::core::bounded_sequence< UMAA::MM::BaseType::WaypointType, 100L >& historicalLocalPaths() OMG_NOEXCEPT {
                    return m_historicalLocalPaths_;
                }

                const ::rti::core::bounded_sequence< UMAA::MM::BaseType::WaypointType, 100L >& historicalLocalPaths() const OMG_NOEXCEPT {
                    return m_historicalLocalPaths_;
                }

                void historicalLocalPaths(const ::rti::core::bounded_sequence< UMAA::MM::BaseType::WaypointType, 100L >& value) {
                    m_historicalLocalPaths_ = value;
                }

                void historicalLocalPaths(::rti::core::bounded_sequence< UMAA::MM::BaseType::WaypointType, 100L >&& value) {
                    m_historicalLocalPaths_ = std::move(value);
                }
                ::rti::core::bounded_sequence< UMAA::MM::BaseType::WaypointType, 100L >& plannedGlobalPaths() OMG_NOEXCEPT {
                    return m_plannedGlobalPaths_;
                }

                const ::rti::core::bounded_sequence< UMAA::MM::BaseType::WaypointType, 100L >& plannedGlobalPaths() const OMG_NOEXCEPT {
                    return m_plannedGlobalPaths_;
                }

                void plannedGlobalPaths(const ::rti::core::bounded_sequence< UMAA::MM::BaseType::WaypointType, 100L >& value) {
                    m_plannedGlobalPaths_ = value;
                }

                void plannedGlobalPaths(::rti::core::bounded_sequence< UMAA::MM::BaseType::WaypointType, 100L >&& value) {
                    m_plannedGlobalPaths_ = std::move(value);
                }
                ::rti::core::bounded_sequence< UMAA::MM::BaseType::WaypointType, 100L >& plannedLocalPaths() OMG_NOEXCEPT {
                    return m_plannedLocalPaths_;
                }

                const ::rti::core::bounded_sequence< UMAA::MM::BaseType::WaypointType, 100L >& plannedLocalPaths() const OMG_NOEXCEPT {
                    return m_plannedLocalPaths_;
                }

                void plannedLocalPaths(const ::rti::core::bounded_sequence< UMAA::MM::BaseType::WaypointType, 100L >& value) {
                    m_plannedLocalPaths_ = value;
                }

                void plannedLocalPaths(::rti::core::bounded_sequence< UMAA::MM::BaseType::WaypointType, 100L >&& value) {
                    m_plannedLocalPaths_ = std::move(value);
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

                bool operator == (const PathReporterReportType& other_) const;
                bool operator != (const PathReporterReportType& other_) const;

                void swap(PathReporterReportType& other_) OMG_NOEXCEPT ;

              private:

                ::rti::core::bounded_sequence< UMAA::MM::BaseType::WaypointType, 100L > m_historicalGlobalPaths_;
                ::rti::core::bounded_sequence< UMAA::MM::BaseType::WaypointType, 100L > m_historicalLocalPaths_;
                ::rti::core::bounded_sequence< UMAA::MM::BaseType::WaypointType, 100L > m_plannedGlobalPaths_;
                ::rti::core::bounded_sequence< UMAA::MM::BaseType::WaypointType, 100L > m_plannedLocalPaths_;
                UMAA::Common::Measurement::NumericGUID m_source_;
                UMAA::Common::Measurement::DateTime m_timeStamp_;

            };

            inline void swap(PathReporterReportType& a, PathReporterReportType& b)  OMG_NOEXCEPT 
            {
                a.swap(b);
            }

            NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const PathReporterReportType& sample);

        } // namespace PathReporterStatus  
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
        struct topic_type_name< UMAA::SA::PathReporterStatus::PathReporterReportType > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::SA::PathReporterStatus::PathReporterReportType";
            }
        };

        template<>
        struct is_topic_type< UMAA::SA::PathReporterStatus::PathReporterReportType > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< UMAA::SA::PathReporterStatus::PathReporterReportType > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const UMAA::SA::PathReporterStatus::PathReporterReportType& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(UMAA::SA::PathReporterStatus::PathReporterReportType& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(UMAA::SA::PathReporterStatus::PathReporterReportType& sample);

            NDDSUSERDllExport 
            static void allocate_sample(UMAA::SA::PathReporterStatus::PathReporterReportType& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };

    }
}

namespace rti { 
    namespace topic {

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct dynamic_type< UMAA::SA::PathReporterStatus::PathReporterReportType > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };
        #endif

        template <>
        struct extensibility< UMAA::SA::PathReporterStatus::PathReporterReportType > {
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

#endif // PathReporterReportType_588380571_hpp

