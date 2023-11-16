

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from RenderUselessReportType.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef RenderUselessReportType_2024058988_hpp
#define RenderUselessReportType_2024058988_hpp

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
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif
#include "UMAA/Common/PrimitiveConstrained/ConstrainedTypes.hpp"
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif
namespace UMAA {
    namespace SO {
        namespace RenderUselessStatus {

            static const std::string RenderUselessReport_TOPIC = "UMAA::SO::RenderUselessStatus::RenderUselessReport";

            class NDDSUSERDllExport RenderUselessReportType {
              public:
                RenderUselessReportType();

                RenderUselessReportType(const std::string& errorString,const UMAA::Common::MaritimeEnumeration::RenderUselessStateEnumType::RenderUselessStateEnumType& state,const UMAA::Common::Measurement::NumericGUID& source,const UMAA::Common::Measurement::DateTime& timeStamp);

                #ifdef RTI_CXX11_RVALUE_REFERENCES
                #ifndef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
                RenderUselessReportType (RenderUselessReportType&&) = default;
                RenderUselessReportType& operator=(RenderUselessReportType&&) = default;
                RenderUselessReportType& operator=(const RenderUselessReportType&) = default;
                RenderUselessReportType(const RenderUselessReportType&) = default;
                #else
                RenderUselessReportType(RenderUselessReportType&& other_) OMG_NOEXCEPT;  
                RenderUselessReportType& operator=(RenderUselessReportType&&  other_) OMG_NOEXCEPT;
                #endif
                #endif 

                std::string& errorString() OMG_NOEXCEPT {
                    return m_errorString_;
                }

                const std::string& errorString() const OMG_NOEXCEPT {
                    return m_errorString_;
                }

                void errorString(const std::string& value) {
                    m_errorString_ = value;
                }

                void errorString(std::string&& value) {
                    m_errorString_ = std::move(value);
                }
                UMAA::Common::MaritimeEnumeration::RenderUselessStateEnumType::RenderUselessStateEnumType& state() OMG_NOEXCEPT {
                    return m_state_;
                }

                const UMAA::Common::MaritimeEnumeration::RenderUselessStateEnumType::RenderUselessStateEnumType& state() const OMG_NOEXCEPT {
                    return m_state_;
                }

                void state(const UMAA::Common::MaritimeEnumeration::RenderUselessStateEnumType::RenderUselessStateEnumType& value) {
                    m_state_ = value;
                }

                void state(UMAA::Common::MaritimeEnumeration::RenderUselessStateEnumType::RenderUselessStateEnumType&& value) {
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

                bool operator == (const RenderUselessReportType& other_) const;
                bool operator != (const RenderUselessReportType& other_) const;

                void swap(RenderUselessReportType& other_) OMG_NOEXCEPT ;

              private:

                std::string m_errorString_;
                UMAA::Common::MaritimeEnumeration::RenderUselessStateEnumType::RenderUselessStateEnumType m_state_;
                UMAA::Common::Measurement::NumericGUID m_source_;
                UMAA::Common::Measurement::DateTime m_timeStamp_;

            };

            inline void swap(RenderUselessReportType& a, RenderUselessReportType& b)  OMG_NOEXCEPT 
            {
                a.swap(b);
            }

            NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const RenderUselessReportType& sample);

        } // namespace RenderUselessStatus  
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
        struct topic_type_name< UMAA::SO::RenderUselessStatus::RenderUselessReportType > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::SO::RenderUselessStatus::RenderUselessReportType";
            }
        };

        template<>
        struct is_topic_type< UMAA::SO::RenderUselessStatus::RenderUselessReportType > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< UMAA::SO::RenderUselessStatus::RenderUselessReportType > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const UMAA::SO::RenderUselessStatus::RenderUselessReportType& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(UMAA::SO::RenderUselessStatus::RenderUselessReportType& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(UMAA::SO::RenderUselessStatus::RenderUselessReportType& sample);

            NDDSUSERDllExport 
            static void allocate_sample(UMAA::SO::RenderUselessStatus::RenderUselessReportType& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };

    }
}

namespace rti { 
    namespace topic {

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct dynamic_type< UMAA::SO::RenderUselessStatus::RenderUselessReportType > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };
        #endif

        template <>
        struct extensibility< UMAA::SO::RenderUselessStatus::RenderUselessReportType > {
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

#endif // RenderUselessReportType_2024058988_hpp

