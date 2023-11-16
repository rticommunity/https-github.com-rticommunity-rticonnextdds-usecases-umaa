

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from LocalFigure8CommandStatusType.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef LocalFigure8CommandStatusType_13981709_hpp
#define LocalFigure8CommandStatusType_13981709_hpp

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
#include "UMAA/Common/MaritimeEnumeration/EnumerationSets.hpp"
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif
namespace UMAA {
    namespace MO {
        namespace LocalFigure8Control {

            static const std::string LocalFigure8CommandStatus_TOPIC = "UMAA::MO::LocalFigure8Control::LocalFigure8CommandStatus";

            class NDDSUSERDllExport LocalFigure8CommandStatusType {
              public:
                LocalFigure8CommandStatusType();

                LocalFigure8CommandStatusType(const UMAA::Common::Measurement::NumericGUID& source,const UMAA::Common::MaritimeEnumeration::CommandStatusEnumType::CommandStatusEnumType& commandStatus,const UMAA::Common::MaritimeEnumeration::CommandStatusReasonEnumType::CommandStatusReasonEnumType& commandStatusReason,const std::string& logMessage,const UMAA::Common::Measurement::NumericGUID& sessionID,const UMAA::Common::Measurement::DateTime& timeStamp);

                #ifdef RTI_CXX11_RVALUE_REFERENCES
                #ifndef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
                LocalFigure8CommandStatusType (LocalFigure8CommandStatusType&&) = default;
                LocalFigure8CommandStatusType& operator=(LocalFigure8CommandStatusType&&) = default;
                LocalFigure8CommandStatusType& operator=(const LocalFigure8CommandStatusType&) = default;
                LocalFigure8CommandStatusType(const LocalFigure8CommandStatusType&) = default;
                #else
                LocalFigure8CommandStatusType(LocalFigure8CommandStatusType&& other_) OMG_NOEXCEPT;  
                LocalFigure8CommandStatusType& operator=(LocalFigure8CommandStatusType&&  other_) OMG_NOEXCEPT;
                #endif
                #endif 

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
                UMAA::Common::MaritimeEnumeration::CommandStatusEnumType::CommandStatusEnumType& commandStatus() OMG_NOEXCEPT {
                    return m_commandStatus_;
                }

                const UMAA::Common::MaritimeEnumeration::CommandStatusEnumType::CommandStatusEnumType& commandStatus() const OMG_NOEXCEPT {
                    return m_commandStatus_;
                }

                void commandStatus(const UMAA::Common::MaritimeEnumeration::CommandStatusEnumType::CommandStatusEnumType& value) {
                    m_commandStatus_ = value;
                }

                void commandStatus(UMAA::Common::MaritimeEnumeration::CommandStatusEnumType::CommandStatusEnumType&& value) {
                    m_commandStatus_ = std::move(value);
                }
                UMAA::Common::MaritimeEnumeration::CommandStatusReasonEnumType::CommandStatusReasonEnumType& commandStatusReason() OMG_NOEXCEPT {
                    return m_commandStatusReason_;
                }

                const UMAA::Common::MaritimeEnumeration::CommandStatusReasonEnumType::CommandStatusReasonEnumType& commandStatusReason() const OMG_NOEXCEPT {
                    return m_commandStatusReason_;
                }

                void commandStatusReason(const UMAA::Common::MaritimeEnumeration::CommandStatusReasonEnumType::CommandStatusReasonEnumType& value) {
                    m_commandStatusReason_ = value;
                }

                void commandStatusReason(UMAA::Common::MaritimeEnumeration::CommandStatusReasonEnumType::CommandStatusReasonEnumType&& value) {
                    m_commandStatusReason_ = std::move(value);
                }
                std::string& logMessage() OMG_NOEXCEPT {
                    return m_logMessage_;
                }

                const std::string& logMessage() const OMG_NOEXCEPT {
                    return m_logMessage_;
                }

                void logMessage(const std::string& value) {
                    m_logMessage_ = value;
                }

                void logMessage(std::string&& value) {
                    m_logMessage_ = std::move(value);
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

                bool operator == (const LocalFigure8CommandStatusType& other_) const;
                bool operator != (const LocalFigure8CommandStatusType& other_) const;

                void swap(LocalFigure8CommandStatusType& other_) OMG_NOEXCEPT ;

              private:

                UMAA::Common::Measurement::NumericGUID m_source_;
                UMAA::Common::MaritimeEnumeration::CommandStatusEnumType::CommandStatusEnumType m_commandStatus_;
                UMAA::Common::MaritimeEnumeration::CommandStatusReasonEnumType::CommandStatusReasonEnumType m_commandStatusReason_;
                std::string m_logMessage_;
                UMAA::Common::Measurement::NumericGUID m_sessionID_;
                UMAA::Common::Measurement::DateTime m_timeStamp_;

            };

            inline void swap(LocalFigure8CommandStatusType& a, LocalFigure8CommandStatusType& b)  OMG_NOEXCEPT 
            {
                a.swap(b);
            }

            NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const LocalFigure8CommandStatusType& sample);

        } // namespace LocalFigure8Control  
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
        struct topic_type_name< UMAA::MO::LocalFigure8Control::LocalFigure8CommandStatusType > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::MO::LocalFigure8Control::LocalFigure8CommandStatusType";
            }
        };

        template<>
        struct is_topic_type< UMAA::MO::LocalFigure8Control::LocalFigure8CommandStatusType > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< UMAA::MO::LocalFigure8Control::LocalFigure8CommandStatusType > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const UMAA::MO::LocalFigure8Control::LocalFigure8CommandStatusType& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(UMAA::MO::LocalFigure8Control::LocalFigure8CommandStatusType& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(UMAA::MO::LocalFigure8Control::LocalFigure8CommandStatusType& sample);

            NDDSUSERDllExport 
            static void allocate_sample(UMAA::MO::LocalFigure8Control::LocalFigure8CommandStatusType& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };

    }
}

namespace rti { 
    namespace topic {

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct dynamic_type< UMAA::MO::LocalFigure8Control::LocalFigure8CommandStatusType > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };
        #endif

        template <>
        struct extensibility< UMAA::MO::LocalFigure8Control::LocalFigure8CommandStatusType > {
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

#endif // LocalFigure8CommandStatusType_13981709_hpp

