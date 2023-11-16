

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from GlobalWaypointCommandAckReportType.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef GlobalWaypointCommandAckReportType_1358667159_hpp
#define GlobalWaypointCommandAckReportType_1358667159_hpp

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
#include "UMAA/MO/GlobalWaypointControl/GlobalWaypointType.hpp"
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif
namespace UMAA {
    namespace MO {
        namespace GlobalWaypointControl {

            static const std::string GlobalWaypointCommandAckReport_TOPIC = "UMAA::MO::GlobalWaypointControl::GlobalWaypointCommandAckReport";

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            // On Windows, dll-export template instantiations of standard types used by
            // other dll-exported types
            template class NDDSUSERDllExport std::allocator< UMAA::MO::GlobalWaypointControl::GlobalWaypointType >;
            template class NDDSUSERDllExport std::vector< UMAA::MO::GlobalWaypointControl::GlobalWaypointType >;
            #endif
            class NDDSUSERDllExport GlobalWaypointCommandAckReportType {
              public:
                GlobalWaypointCommandAckReportType();

                GlobalWaypointCommandAckReportType(int32_t waypointCount,const ::rti::core::bounded_sequence< UMAA::MO::GlobalWaypointControl::GlobalWaypointType, 100L >& waypoints,const UMAA::Common::Measurement::NumericGUID& source,const UMAA::Common::Measurement::NumericGUID& sessionID);

                #ifdef RTI_CXX11_RVALUE_REFERENCES
                #ifndef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
                GlobalWaypointCommandAckReportType (GlobalWaypointCommandAckReportType&&) = default;
                GlobalWaypointCommandAckReportType& operator=(GlobalWaypointCommandAckReportType&&) = default;
                GlobalWaypointCommandAckReportType& operator=(const GlobalWaypointCommandAckReportType&) = default;
                GlobalWaypointCommandAckReportType(const GlobalWaypointCommandAckReportType&) = default;
                #else
                GlobalWaypointCommandAckReportType(GlobalWaypointCommandAckReportType&& other_) OMG_NOEXCEPT;  
                GlobalWaypointCommandAckReportType& operator=(GlobalWaypointCommandAckReportType&&  other_) OMG_NOEXCEPT;
                #endif
                #endif 

                int32_t& waypointCount() OMG_NOEXCEPT {
                    return m_waypointCount_;
                }

                const int32_t& waypointCount() const OMG_NOEXCEPT {
                    return m_waypointCount_;
                }

                void waypointCount(int32_t value) {
                    m_waypointCount_ = value;
                }

                ::rti::core::bounded_sequence< UMAA::MO::GlobalWaypointControl::GlobalWaypointType, 100L >& waypoints() OMG_NOEXCEPT {
                    return m_waypoints_;
                }

                const ::rti::core::bounded_sequence< UMAA::MO::GlobalWaypointControl::GlobalWaypointType, 100L >& waypoints() const OMG_NOEXCEPT {
                    return m_waypoints_;
                }

                void waypoints(const ::rti::core::bounded_sequence< UMAA::MO::GlobalWaypointControl::GlobalWaypointType, 100L >& value) {
                    m_waypoints_ = value;
                }

                void waypoints(::rti::core::bounded_sequence< UMAA::MO::GlobalWaypointControl::GlobalWaypointType, 100L >&& value) {
                    m_waypoints_ = std::move(value);
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

                bool operator == (const GlobalWaypointCommandAckReportType& other_) const;
                bool operator != (const GlobalWaypointCommandAckReportType& other_) const;

                void swap(GlobalWaypointCommandAckReportType& other_) OMG_NOEXCEPT ;

              private:

                int32_t m_waypointCount_;
                ::rti::core::bounded_sequence< UMAA::MO::GlobalWaypointControl::GlobalWaypointType, 100L > m_waypoints_;
                UMAA::Common::Measurement::NumericGUID m_source_;
                UMAA::Common::Measurement::NumericGUID m_sessionID_;

            };

            inline void swap(GlobalWaypointCommandAckReportType& a, GlobalWaypointCommandAckReportType& b)  OMG_NOEXCEPT 
            {
                a.swap(b);
            }

            NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const GlobalWaypointCommandAckReportType& sample);

        } // namespace GlobalWaypointControl  
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
        struct topic_type_name< UMAA::MO::GlobalWaypointControl::GlobalWaypointCommandAckReportType > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::MO::GlobalWaypointControl::GlobalWaypointCommandAckReportType";
            }
        };

        template<>
        struct is_topic_type< UMAA::MO::GlobalWaypointControl::GlobalWaypointCommandAckReportType > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< UMAA::MO::GlobalWaypointControl::GlobalWaypointCommandAckReportType > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const UMAA::MO::GlobalWaypointControl::GlobalWaypointCommandAckReportType& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(UMAA::MO::GlobalWaypointControl::GlobalWaypointCommandAckReportType& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(UMAA::MO::GlobalWaypointControl::GlobalWaypointCommandAckReportType& sample);

            NDDSUSERDllExport 
            static void allocate_sample(UMAA::MO::GlobalWaypointControl::GlobalWaypointCommandAckReportType& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };

    }
}

namespace rti { 
    namespace topic {

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct dynamic_type< UMAA::MO::GlobalWaypointControl::GlobalWaypointCommandAckReportType > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };
        #endif

        template <>
        struct extensibility< UMAA::MO::GlobalWaypointControl::GlobalWaypointCommandAckReportType > {
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

#endif // GlobalWaypointCommandAckReportType_1358667159_hpp

