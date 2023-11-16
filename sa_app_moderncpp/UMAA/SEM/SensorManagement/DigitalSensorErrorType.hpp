

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from DigitalSensorErrorType.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef DigitalSensorErrorType_1852074880_hpp
#define DigitalSensorErrorType_1852074880_hpp

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
#include "UMAA/Common/PrimitiveConstrained/ConstrainedTypes.hpp"
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif
namespace UMAA {
    namespace SEM {
        namespace SensorManagement {

            class NDDSUSERDllExport DigitalSensorErrorType {
              public:
                DigitalSensorErrorType();

                DigitalSensorErrorType(const UMAA::Common::MaritimeEnumeration::DigitalSensorErrorCodeEnumType::DigitalSensorErrorCodeEnumType& errorCode,const std::string& errorMessage);

                #ifdef RTI_CXX11_RVALUE_REFERENCES
                #ifndef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
                DigitalSensorErrorType (DigitalSensorErrorType&&) = default;
                DigitalSensorErrorType& operator=(DigitalSensorErrorType&&) = default;
                DigitalSensorErrorType& operator=(const DigitalSensorErrorType&) = default;
                DigitalSensorErrorType(const DigitalSensorErrorType&) = default;
                #else
                DigitalSensorErrorType(DigitalSensorErrorType&& other_) OMG_NOEXCEPT;  
                DigitalSensorErrorType& operator=(DigitalSensorErrorType&&  other_) OMG_NOEXCEPT;
                #endif
                #endif 

                UMAA::Common::MaritimeEnumeration::DigitalSensorErrorCodeEnumType::DigitalSensorErrorCodeEnumType& errorCode() OMG_NOEXCEPT {
                    return m_errorCode_;
                }

                const UMAA::Common::MaritimeEnumeration::DigitalSensorErrorCodeEnumType::DigitalSensorErrorCodeEnumType& errorCode() const OMG_NOEXCEPT {
                    return m_errorCode_;
                }

                void errorCode(const UMAA::Common::MaritimeEnumeration::DigitalSensorErrorCodeEnumType::DigitalSensorErrorCodeEnumType& value) {
                    m_errorCode_ = value;
                }

                void errorCode(UMAA::Common::MaritimeEnumeration::DigitalSensorErrorCodeEnumType::DigitalSensorErrorCodeEnumType&& value) {
                    m_errorCode_ = std::move(value);
                }
                std::string& errorMessage() OMG_NOEXCEPT {
                    return m_errorMessage_;
                }

                const std::string& errorMessage() const OMG_NOEXCEPT {
                    return m_errorMessage_;
                }

                void errorMessage(const std::string& value) {
                    m_errorMessage_ = value;
                }

                void errorMessage(std::string&& value) {
                    m_errorMessage_ = std::move(value);
                }

                bool operator == (const DigitalSensorErrorType& other_) const;
                bool operator != (const DigitalSensorErrorType& other_) const;

                void swap(DigitalSensorErrorType& other_) OMG_NOEXCEPT ;

              private:

                UMAA::Common::MaritimeEnumeration::DigitalSensorErrorCodeEnumType::DigitalSensorErrorCodeEnumType m_errorCode_;
                std::string m_errorMessage_;

            };

            inline void swap(DigitalSensorErrorType& a, DigitalSensorErrorType& b)  OMG_NOEXCEPT 
            {
                a.swap(b);
            }

            NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const DigitalSensorErrorType& sample);

        } // namespace SensorManagement  
    } // namespace SEM  
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
        struct topic_type_name< UMAA::SEM::SensorManagement::DigitalSensorErrorType > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::SEM::SensorManagement::DigitalSensorErrorType";
            }
        };

        template<>
        struct is_topic_type< UMAA::SEM::SensorManagement::DigitalSensorErrorType > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< UMAA::SEM::SensorManagement::DigitalSensorErrorType > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const UMAA::SEM::SensorManagement::DigitalSensorErrorType& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(UMAA::SEM::SensorManagement::DigitalSensorErrorType& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(UMAA::SEM::SensorManagement::DigitalSensorErrorType& sample);

            NDDSUSERDllExport 
            static void allocate_sample(UMAA::SEM::SensorManagement::DigitalSensorErrorType& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };

    }
}

namespace rti { 
    namespace topic {

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct dynamic_type< UMAA::SEM::SensorManagement::DigitalSensorErrorType > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };
        #endif

        template <>
        struct extensibility< UMAA::SEM::SensorManagement::DigitalSensorErrorType > {
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

#endif // DigitalSensorErrorType_1852074880_hpp

