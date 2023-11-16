

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from GongControlCommandReportType.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef GongControlCommandReportType_1053810251_hpp
#define GongControlCommandReportType_1053810251_hpp

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
#include "UMAA/Common/Propulsion/BlastPropertiesType.hpp"
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif
namespace UMAA {
    namespace EO {
        namespace GongControl {

            static const std::string GongControlCommandReport_TOPIC = "UMAA::EO::GongControl::GongControlCommandReport";

            class NDDSUSERDllExport GongControlCommandReportType {
              public:
                GongControlCommandReportType();

                GongControlCommandReportType(const ::dds::core::optional< UMAA::Common::Propulsion::BlastPropertiesType >& blastProperties,const UMAA::Common::Enumeration::OnOffStatusEnumType::OnOffStatusEnumType& status,const UMAA::Common::Measurement::NumericGUID& source,const UMAA::Common::Measurement::DateTime& timeStamp);

                #ifdef RTI_CXX11_RVALUE_REFERENCES
                #ifndef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
                GongControlCommandReportType (GongControlCommandReportType&&) = default;
                GongControlCommandReportType& operator=(GongControlCommandReportType&&) = default;
                GongControlCommandReportType& operator=(const GongControlCommandReportType&) = default;
                GongControlCommandReportType(const GongControlCommandReportType&) = default;
                #else
                GongControlCommandReportType(GongControlCommandReportType&& other_) OMG_NOEXCEPT;  
                GongControlCommandReportType& operator=(GongControlCommandReportType&&  other_) OMG_NOEXCEPT;
                #endif
                #endif 

                ::dds::core::optional< UMAA::Common::Propulsion::BlastPropertiesType >& blastProperties() OMG_NOEXCEPT {
                    return m_blastProperties_;
                }

                const ::dds::core::optional< UMAA::Common::Propulsion::BlastPropertiesType >& blastProperties() const OMG_NOEXCEPT {
                    return m_blastProperties_;
                }

                void blastProperties(const ::dds::core::optional< UMAA::Common::Propulsion::BlastPropertiesType >& value) {
                    m_blastProperties_ = value;
                }

                void blastProperties(::dds::core::optional< UMAA::Common::Propulsion::BlastPropertiesType >&& value) {
                    m_blastProperties_ = std::move(value);
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

                bool operator == (const GongControlCommandReportType& other_) const;
                bool operator != (const GongControlCommandReportType& other_) const;

                void swap(GongControlCommandReportType& other_) OMG_NOEXCEPT ;

              private:

                ::dds::core::optional< UMAA::Common::Propulsion::BlastPropertiesType > m_blastProperties_;
                UMAA::Common::Enumeration::OnOffStatusEnumType::OnOffStatusEnumType m_status_;
                UMAA::Common::Measurement::NumericGUID m_source_;
                UMAA::Common::Measurement::DateTime m_timeStamp_;

            };

            inline void swap(GongControlCommandReportType& a, GongControlCommandReportType& b)  OMG_NOEXCEPT 
            {
                a.swap(b);
            }

            NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const GongControlCommandReportType& sample);

        } // namespace GongControl  
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
        struct topic_type_name< UMAA::EO::GongControl::GongControlCommandReportType > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::EO::GongControl::GongControlCommandReportType";
            }
        };

        template<>
        struct is_topic_type< UMAA::EO::GongControl::GongControlCommandReportType > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< UMAA::EO::GongControl::GongControlCommandReportType > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const UMAA::EO::GongControl::GongControlCommandReportType& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(UMAA::EO::GongControl::GongControlCommandReportType& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(UMAA::EO::GongControl::GongControlCommandReportType& sample);

            NDDSUSERDllExport 
            static void allocate_sample(UMAA::EO::GongControl::GongControlCommandReportType& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };

    }
}

namespace rti { 
    namespace topic {

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct dynamic_type< UMAA::EO::GongControl::GongControlCommandReportType > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };
        #endif

        template <>
        struct extensibility< UMAA::EO::GongControl::GongControlCommandReportType > {
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

#endif // GongControlCommandReportType_1053810251_hpp

