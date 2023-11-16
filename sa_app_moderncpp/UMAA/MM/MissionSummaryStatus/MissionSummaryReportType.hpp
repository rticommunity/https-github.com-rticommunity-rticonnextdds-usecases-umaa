

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from MissionSummaryReportType.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef MissionSummaryReportType_1645860920_hpp
#define MissionSummaryReportType_1645860920_hpp

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
#include "UMAA/MM/BaseType/MissionSummaryType.hpp"
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif
namespace UMAA {
    namespace MM {
        namespace MissionSummaryStatus {

            static const std::string MissionSummaryReport_TOPIC = "UMAA::MM::MissionSummaryStatus::MissionSummaryReport";

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            // On Windows, dll-export template instantiations of standard types used by
            // other dll-exported types
            template class NDDSUSERDllExport std::allocator< UMAA::MM::BaseType::MissionSummaryType >;
            template class NDDSUSERDllExport std::vector< UMAA::MM::BaseType::MissionSummaryType >;
            #endif
            class NDDSUSERDllExport MissionSummaryReportType {
              public:
                MissionSummaryReportType();

                MissionSummaryReportType(const ::rti::core::bounded_sequence< UMAA::MM::BaseType::MissionSummaryType, 100L >& missionSummaries,const UMAA::Common::Measurement::NumericGUID& source,const UMAA::Common::Measurement::DateTime& timeStamp);

                #ifdef RTI_CXX11_RVALUE_REFERENCES
                #ifndef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
                MissionSummaryReportType (MissionSummaryReportType&&) = default;
                MissionSummaryReportType& operator=(MissionSummaryReportType&&) = default;
                MissionSummaryReportType& operator=(const MissionSummaryReportType&) = default;
                MissionSummaryReportType(const MissionSummaryReportType&) = default;
                #else
                MissionSummaryReportType(MissionSummaryReportType&& other_) OMG_NOEXCEPT;  
                MissionSummaryReportType& operator=(MissionSummaryReportType&&  other_) OMG_NOEXCEPT;
                #endif
                #endif 

                ::rti::core::bounded_sequence< UMAA::MM::BaseType::MissionSummaryType, 100L >& missionSummaries() OMG_NOEXCEPT {
                    return m_missionSummaries_;
                }

                const ::rti::core::bounded_sequence< UMAA::MM::BaseType::MissionSummaryType, 100L >& missionSummaries() const OMG_NOEXCEPT {
                    return m_missionSummaries_;
                }

                void missionSummaries(const ::rti::core::bounded_sequence< UMAA::MM::BaseType::MissionSummaryType, 100L >& value) {
                    m_missionSummaries_ = value;
                }

                void missionSummaries(::rti::core::bounded_sequence< UMAA::MM::BaseType::MissionSummaryType, 100L >&& value) {
                    m_missionSummaries_ = std::move(value);
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

                bool operator == (const MissionSummaryReportType& other_) const;
                bool operator != (const MissionSummaryReportType& other_) const;

                void swap(MissionSummaryReportType& other_) OMG_NOEXCEPT ;

              private:

                ::rti::core::bounded_sequence< UMAA::MM::BaseType::MissionSummaryType, 100L > m_missionSummaries_;
                UMAA::Common::Measurement::NumericGUID m_source_;
                UMAA::Common::Measurement::DateTime m_timeStamp_;

            };

            inline void swap(MissionSummaryReportType& a, MissionSummaryReportType& b)  OMG_NOEXCEPT 
            {
                a.swap(b);
            }

            NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const MissionSummaryReportType& sample);

        } // namespace MissionSummaryStatus  
    } // namespace MM  
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
        struct topic_type_name< UMAA::MM::MissionSummaryStatus::MissionSummaryReportType > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::MM::MissionSummaryStatus::MissionSummaryReportType";
            }
        };

        template<>
        struct is_topic_type< UMAA::MM::MissionSummaryStatus::MissionSummaryReportType > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< UMAA::MM::MissionSummaryStatus::MissionSummaryReportType > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const UMAA::MM::MissionSummaryStatus::MissionSummaryReportType& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(UMAA::MM::MissionSummaryStatus::MissionSummaryReportType& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(UMAA::MM::MissionSummaryStatus::MissionSummaryReportType& sample);

            NDDSUSERDllExport 
            static void allocate_sample(UMAA::MM::MissionSummaryStatus::MissionSummaryReportType& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };

    }
}

namespace rti { 
    namespace topic {

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct dynamic_type< UMAA::MM::MissionSummaryStatus::MissionSummaryReportType > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };
        #endif

        template <>
        struct extensibility< UMAA::MM::MissionSummaryStatus::MissionSummaryReportType > {
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

#endif // MissionSummaryReportType_1645860920_hpp

