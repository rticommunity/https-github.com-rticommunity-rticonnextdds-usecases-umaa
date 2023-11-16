

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from PlatformModeReportType.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef PlatformModeReportType_393528404_hpp
#define PlatformModeReportType_393528404_hpp

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
#include "UMAA/Common/Measurement/Measurements.hpp"
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif
namespace UMAA {
    namespace SO {
        namespace PlatformModeStatus {

            static const std::string PlatformModeReport_TOPIC = "UMAA::SO::PlatformModeStatus::PlatformModeReport";

            class NDDSUSERDllExport PlatformModeReportType {
              public:
                PlatformModeReportType();

                PlatformModeReportType(const UMAA::Common::MaritimeEnumeration::PlatformModeEnumType::PlatformModeEnumType& mode,const UMAA::Common::MaritimeEnumeration::PlatformModeTransitionEnumType::PlatformModeTransitionEnumType& status,const UMAA::Common::Measurement::NumericGUID& source,const UMAA::Common::Measurement::DateTime& timeStamp);

                #ifdef RTI_CXX11_RVALUE_REFERENCES
                #ifndef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
                PlatformModeReportType (PlatformModeReportType&&) = default;
                PlatformModeReportType& operator=(PlatformModeReportType&&) = default;
                PlatformModeReportType& operator=(const PlatformModeReportType&) = default;
                PlatformModeReportType(const PlatformModeReportType&) = default;
                #else
                PlatformModeReportType(PlatformModeReportType&& other_) OMG_NOEXCEPT;  
                PlatformModeReportType& operator=(PlatformModeReportType&&  other_) OMG_NOEXCEPT;
                #endif
                #endif 

                UMAA::Common::MaritimeEnumeration::PlatformModeEnumType::PlatformModeEnumType& mode() OMG_NOEXCEPT {
                    return m_mode_;
                }

                const UMAA::Common::MaritimeEnumeration::PlatformModeEnumType::PlatformModeEnumType& mode() const OMG_NOEXCEPT {
                    return m_mode_;
                }

                void mode(const UMAA::Common::MaritimeEnumeration::PlatformModeEnumType::PlatformModeEnumType& value) {
                    m_mode_ = value;
                }

                void mode(UMAA::Common::MaritimeEnumeration::PlatformModeEnumType::PlatformModeEnumType&& value) {
                    m_mode_ = std::move(value);
                }
                UMAA::Common::MaritimeEnumeration::PlatformModeTransitionEnumType::PlatformModeTransitionEnumType& status() OMG_NOEXCEPT {
                    return m_status_;
                }

                const UMAA::Common::MaritimeEnumeration::PlatformModeTransitionEnumType::PlatformModeTransitionEnumType& status() const OMG_NOEXCEPT {
                    return m_status_;
                }

                void status(const UMAA::Common::MaritimeEnumeration::PlatformModeTransitionEnumType::PlatformModeTransitionEnumType& value) {
                    m_status_ = value;
                }

                void status(UMAA::Common::MaritimeEnumeration::PlatformModeTransitionEnumType::PlatformModeTransitionEnumType&& value) {
                    m_status_ = std::move(value);
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

                bool operator == (const PlatformModeReportType& other_) const;
                bool operator != (const PlatformModeReportType& other_) const;

                void swap(PlatformModeReportType& other_) OMG_NOEXCEPT ;

              private:

                UMAA::Common::MaritimeEnumeration::PlatformModeEnumType::PlatformModeEnumType m_mode_;
                UMAA::Common::MaritimeEnumeration::PlatformModeTransitionEnumType::PlatformModeTransitionEnumType m_status_;
                UMAA::Common::Measurement::NumericGUID m_source_;
                UMAA::Common::Measurement::DateTime m_timeStamp_;

            };

            inline void swap(PlatformModeReportType& a, PlatformModeReportType& b)  OMG_NOEXCEPT 
            {
                a.swap(b);
            }

            NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const PlatformModeReportType& sample);

        } // namespace PlatformModeStatus  
    } // namespace SO  
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
        struct topic_type_name< UMAA::SO::PlatformModeStatus::PlatformModeReportType > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::SO::PlatformModeStatus::PlatformModeReportType";
            }
        };

        template<>
        struct is_topic_type< UMAA::SO::PlatformModeStatus::PlatformModeReportType > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< UMAA::SO::PlatformModeStatus::PlatformModeReportType > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const UMAA::SO::PlatformModeStatus::PlatformModeReportType& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(UMAA::SO::PlatformModeStatus::PlatformModeReportType& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(UMAA::SO::PlatformModeStatus::PlatformModeReportType& sample);

            NDDSUSERDllExport 
            static void allocate_sample(UMAA::SO::PlatformModeStatus::PlatformModeReportType& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };

    }
}

namespace rti { 
    namespace topic {

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct dynamic_type< UMAA::SO::PlatformModeStatus::PlatformModeReportType > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };
        #endif

        template <>
        struct extensibility< UMAA::SO::PlatformModeStatus::PlatformModeReportType > {
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

#endif // PlatformModeReportType_393528404_hpp

