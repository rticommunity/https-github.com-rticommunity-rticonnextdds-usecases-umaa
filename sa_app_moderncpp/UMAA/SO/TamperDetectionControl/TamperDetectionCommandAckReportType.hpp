

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from TamperDetectionCommandAckReportType.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef TamperDetectionCommandAckReportType_498887748_hpp
#define TamperDetectionCommandAckReportType_498887748_hpp

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
        namespace TamperDetectionControl {

            static const std::string TamperDetectionCommandAckReport_TOPIC = "UMAA::SO::TamperDetectionControl::TamperDetectionCommandAckReport";

            class NDDSUSERDllExport TamperDetectionCommandAckReportType {
              public:
                TamperDetectionCommandAckReportType();

                TamperDetectionCommandAckReportType(const UMAA::Common::MaritimeEnumeration::TamperDetectionStateEnumType::TamperDetectionStateEnumType& state,const UMAA::Common::Measurement::NumericGUID& source,const UMAA::Common::Measurement::NumericGUID& sessionID);

                #ifdef RTI_CXX11_RVALUE_REFERENCES
                #ifndef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
                TamperDetectionCommandAckReportType (TamperDetectionCommandAckReportType&&) = default;
                TamperDetectionCommandAckReportType& operator=(TamperDetectionCommandAckReportType&&) = default;
                TamperDetectionCommandAckReportType& operator=(const TamperDetectionCommandAckReportType&) = default;
                TamperDetectionCommandAckReportType(const TamperDetectionCommandAckReportType&) = default;
                #else
                TamperDetectionCommandAckReportType(TamperDetectionCommandAckReportType&& other_) OMG_NOEXCEPT;  
                TamperDetectionCommandAckReportType& operator=(TamperDetectionCommandAckReportType&&  other_) OMG_NOEXCEPT;
                #endif
                #endif 

                UMAA::Common::MaritimeEnumeration::TamperDetectionStateEnumType::TamperDetectionStateEnumType& state() OMG_NOEXCEPT {
                    return m_state_;
                }

                const UMAA::Common::MaritimeEnumeration::TamperDetectionStateEnumType::TamperDetectionStateEnumType& state() const OMG_NOEXCEPT {
                    return m_state_;
                }

                void state(const UMAA::Common::MaritimeEnumeration::TamperDetectionStateEnumType::TamperDetectionStateEnumType& value) {
                    m_state_ = value;
                }

                void state(UMAA::Common::MaritimeEnumeration::TamperDetectionStateEnumType::TamperDetectionStateEnumType&& value) {
                    m_state_ = std::move(value);
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

                bool operator == (const TamperDetectionCommandAckReportType& other_) const;
                bool operator != (const TamperDetectionCommandAckReportType& other_) const;

                void swap(TamperDetectionCommandAckReportType& other_) OMG_NOEXCEPT ;

              private:

                UMAA::Common::MaritimeEnumeration::TamperDetectionStateEnumType::TamperDetectionStateEnumType m_state_;
                UMAA::Common::Measurement::NumericGUID m_source_;
                UMAA::Common::Measurement::NumericGUID m_sessionID_;

            };

            inline void swap(TamperDetectionCommandAckReportType& a, TamperDetectionCommandAckReportType& b)  OMG_NOEXCEPT 
            {
                a.swap(b);
            }

            NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const TamperDetectionCommandAckReportType& sample);

        } // namespace TamperDetectionControl  
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
        struct topic_type_name< UMAA::SO::TamperDetectionControl::TamperDetectionCommandAckReportType > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::SO::TamperDetectionControl::TamperDetectionCommandAckReportType";
            }
        };

        template<>
        struct is_topic_type< UMAA::SO::TamperDetectionControl::TamperDetectionCommandAckReportType > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< UMAA::SO::TamperDetectionControl::TamperDetectionCommandAckReportType > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const UMAA::SO::TamperDetectionControl::TamperDetectionCommandAckReportType& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(UMAA::SO::TamperDetectionControl::TamperDetectionCommandAckReportType& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(UMAA::SO::TamperDetectionControl::TamperDetectionCommandAckReportType& sample);

            NDDSUSERDllExport 
            static void allocate_sample(UMAA::SO::TamperDetectionControl::TamperDetectionCommandAckReportType& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };

    }
}

namespace rti { 
    namespace topic {

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct dynamic_type< UMAA::SO::TamperDetectionControl::TamperDetectionCommandAckReportType > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };
        #endif

        template <>
        struct extensibility< UMAA::SO::TamperDetectionControl::TamperDetectionCommandAckReportType > {
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

#endif // TamperDetectionCommandAckReportType_498887748_hpp

