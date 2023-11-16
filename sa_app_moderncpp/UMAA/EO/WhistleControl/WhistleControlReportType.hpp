

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from WhistleControlReportType.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef WhistleControlReportType_705069451_hpp
#define WhistleControlReportType_705069451_hpp

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
    namespace EO {
        namespace WhistleControl {

            static const std::string WhistleControlReport_TOPIC = "UMAA::EO::WhistleControl::WhistleControlReport";

            class NDDSUSERDllExport WhistleControlReportType {
              public:
                WhistleControlReportType();

                WhistleControlReportType(const ::dds::core::optional< UMAA::Common::MaritimeEnumeration::BlastConditionEnumType::BlastConditionEnumType >& blastCondition,const ::dds::core::optional< double >& blastNumber,const UMAA::Common::Enumeration::OnOffStatusEnumType::OnOffStatusEnumType& status,const UMAA::Common::Measurement::NumericGUID& source,const UMAA::Common::Measurement::DateTime& timeStamp);

                #ifdef RTI_CXX11_RVALUE_REFERENCES
                #ifndef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
                WhistleControlReportType (WhistleControlReportType&&) = default;
                WhistleControlReportType& operator=(WhistleControlReportType&&) = default;
                WhistleControlReportType& operator=(const WhistleControlReportType&) = default;
                WhistleControlReportType(const WhistleControlReportType&) = default;
                #else
                WhistleControlReportType(WhistleControlReportType&& other_) OMG_NOEXCEPT;  
                WhistleControlReportType& operator=(WhistleControlReportType&&  other_) OMG_NOEXCEPT;
                #endif
                #endif 

                ::dds::core::optional< UMAA::Common::MaritimeEnumeration::BlastConditionEnumType::BlastConditionEnumType >& blastCondition() OMG_NOEXCEPT {
                    return m_blastCondition_;
                }

                const ::dds::core::optional< UMAA::Common::MaritimeEnumeration::BlastConditionEnumType::BlastConditionEnumType >& blastCondition() const OMG_NOEXCEPT {
                    return m_blastCondition_;
                }

                void blastCondition(const ::dds::core::optional< UMAA::Common::MaritimeEnumeration::BlastConditionEnumType::BlastConditionEnumType >& value) {
                    m_blastCondition_ = value;
                }

                void blastCondition(::dds::core::optional< UMAA::Common::MaritimeEnumeration::BlastConditionEnumType::BlastConditionEnumType >&& value) {
                    m_blastCondition_ = std::move(value);
                }
                ::dds::core::optional< double >& blastNumber() OMG_NOEXCEPT {
                    return m_blastNumber_;
                }

                const ::dds::core::optional< double >& blastNumber() const OMG_NOEXCEPT {
                    return m_blastNumber_;
                }

                void blastNumber(const ::dds::core::optional< double >& value) {
                    m_blastNumber_ = value;
                }

                void blastNumber(::dds::core::optional< double >&& value) {
                    m_blastNumber_ = std::move(value);
                }
                UMAA::Common::Enumeration::OnOffStatusEnumType::OnOffStatusEnumType& status() OMG_NOEXCEPT {
                    return m_status_;
                }

                const UMAA::Common::Enumeration::OnOffStatusEnumType::OnOffStatusEnumType& status() const OMG_NOEXCEPT {
                    return m_status_;
                }

                void status(const UMAA::Common::Enumeration::OnOffStatusEnumType::OnOffStatusEnumType& value) {
                    m_status_ = value;
                }

                void status(UMAA::Common::Enumeration::OnOffStatusEnumType::OnOffStatusEnumType&& value) {
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

                bool operator == (const WhistleControlReportType& other_) const;
                bool operator != (const WhistleControlReportType& other_) const;

                void swap(WhistleControlReportType& other_) OMG_NOEXCEPT ;

              private:

                ::dds::core::optional< UMAA::Common::MaritimeEnumeration::BlastConditionEnumType::BlastConditionEnumType > m_blastCondition_;
                ::dds::core::optional< double > m_blastNumber_;
                UMAA::Common::Enumeration::OnOffStatusEnumType::OnOffStatusEnumType m_status_;
                UMAA::Common::Measurement::NumericGUID m_source_;
                UMAA::Common::Measurement::DateTime m_timeStamp_;

            };

            inline void swap(WhistleControlReportType& a, WhistleControlReportType& b)  OMG_NOEXCEPT 
            {
                a.swap(b);
            }

            NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const WhistleControlReportType& sample);

        } // namespace WhistleControl  
    } // namespace EO  
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
        struct topic_type_name< UMAA::EO::WhistleControl::WhistleControlReportType > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::EO::WhistleControl::WhistleControlReportType";
            }
        };

        template<>
        struct is_topic_type< UMAA::EO::WhistleControl::WhistleControlReportType > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< UMAA::EO::WhistleControl::WhistleControlReportType > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const UMAA::EO::WhistleControl::WhistleControlReportType& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(UMAA::EO::WhistleControl::WhistleControlReportType& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(UMAA::EO::WhistleControl::WhistleControlReportType& sample);

            NDDSUSERDllExport 
            static void allocate_sample(UMAA::EO::WhistleControl::WhistleControlReportType& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };

    }
}

namespace rti { 
    namespace topic {

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct dynamic_type< UMAA::EO::WhistleControl::WhistleControlReportType > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };
        #endif

        template <>
        struct extensibility< UMAA::EO::WhistleControl::WhistleControlReportType > {
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

#endif // WhistleControlReportType_705069451_hpp

