

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from BuiltInTestStatusType_All.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef BuiltInTestStatusType_All_723379715_hpp
#define BuiltInTestStatusType_All_723379715_hpp

#include <iosfwd>

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef RTIUSERDllExport
#define RTIUSERDllExport __declspec(dllexport)
#endif

#include "dds/core/SafeEnumeration.hpp"
#include "dds/core/String.hpp"
#include "dds/core/array.hpp"
#include "dds/core/vector.hpp"
#include "dds/core/External.hpp"
#include "rti/core/LongDouble.hpp"
#include "rti/core/Pointer.hpp"
#include "rti/core/array.hpp"
#include "rti/topic/TopicTraits.hpp"

#include "omg/types/string_view.hpp"

#include "rti/core/BoundedSequence.hpp"
#include "dds/core/Optional.hpp"

#ifndef NDDS_STANDALONE_TYPE
#include "dds/domain/DomainParticipant.hpp"
#include "dds/topic/TopicTraits.hpp"
#include "dds/core/xtypes/DynamicType.hpp"
#include "dds/core/xtypes/StructType.hpp"
#include "dds/core/xtypes/UnionType.hpp"
#include "dds/core/xtypes/EnumType.hpp"
#include "dds/core/xtypes/AliasType.hpp"
#include "rti/util/StreamFlagSaver.hpp"
#include "rti/domain/PluginSupport.hpp"
#endif

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
namespace UMAA {
    namespace Common {
        namespace Measurement {

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            // On Windows, dll-export template instantiations of standard types used by
            // other dll-exported types
            template class NDDSUSERDllExport std::allocator< ::UMAA::Common::Enumeration::BuiltInTestStatusEnumType::BuiltInTestStatusEnumType >;
            template class NDDSUSERDllExport std::vector< ::UMAA::Common::Enumeration::BuiltInTestStatusEnumType::BuiltInTestStatusEnumType >;
            #endif
            class NDDSUSERDllExport BuiltInTestStatusType_All {
              public:

                BuiltInTestStatusType_All();

                BuiltInTestStatusType_All(const ::rti::core::bounded_sequence< ::UMAA::Common::Enumeration::BuiltInTestStatusEnumType::BuiltInTestStatusEnumType, 100L >& domain_,const ::UMAA::Common::Enumeration::BuiltInTestStatusEnumType::BuiltInTestStatusEnumType& setPoint_,const ::UMAA::Common::Enumeration::BuiltInTestStatusEnumType::BuiltInTestStatusEnumType& value_);

                ::rti::core::bounded_sequence< ::UMAA::Common::Enumeration::BuiltInTestStatusEnumType::BuiltInTestStatusEnumType, 100L >& domain() noexcept {
                    return m_domain_;
                }

                const ::rti::core::bounded_sequence< ::UMAA::Common::Enumeration::BuiltInTestStatusEnumType::BuiltInTestStatusEnumType, 100L >& domain() const noexcept {
                    return m_domain_;
                }

                void domain(const ::rti::core::bounded_sequence< ::UMAA::Common::Enumeration::BuiltInTestStatusEnumType::BuiltInTestStatusEnumType, 100L >& value) {

                    m_domain_ = value;
                }

                void domain(::rti::core::bounded_sequence< ::UMAA::Common::Enumeration::BuiltInTestStatusEnumType::BuiltInTestStatusEnumType, 100L >&& value) {
                    m_domain_ = std::move(value);
                }
                ::UMAA::Common::Enumeration::BuiltInTestStatusEnumType::BuiltInTestStatusEnumType& setPoint() noexcept {
                    return m_setPoint_;
                }

                const ::UMAA::Common::Enumeration::BuiltInTestStatusEnumType::BuiltInTestStatusEnumType& setPoint() const noexcept {
                    return m_setPoint_;
                }

                void setPoint(const ::UMAA::Common::Enumeration::BuiltInTestStatusEnumType::BuiltInTestStatusEnumType& value) {

                    m_setPoint_ = value;
                }

                void setPoint(::UMAA::Common::Enumeration::BuiltInTestStatusEnumType::BuiltInTestStatusEnumType&& value) {
                    m_setPoint_ = std::move(value);
                }
                ::UMAA::Common::Enumeration::BuiltInTestStatusEnumType::BuiltInTestStatusEnumType& value() noexcept {
                    return m_value_;
                }

                const ::UMAA::Common::Enumeration::BuiltInTestStatusEnumType::BuiltInTestStatusEnumType& value() const noexcept {
                    return m_value_;
                }

                void value(const ::UMAA::Common::Enumeration::BuiltInTestStatusEnumType::BuiltInTestStatusEnumType& value) {

                    m_value_ = value;
                }

                void value(::UMAA::Common::Enumeration::BuiltInTestStatusEnumType::BuiltInTestStatusEnumType&& value) {
                    m_value_ = std::move(value);
                }
                bool operator == (const BuiltInTestStatusType_All& other_) const;
                bool operator != (const BuiltInTestStatusType_All& other_) const;

                void swap(BuiltInTestStatusType_All& other_) noexcept ;

              private:

                ::rti::core::bounded_sequence< ::UMAA::Common::Enumeration::BuiltInTestStatusEnumType::BuiltInTestStatusEnumType, 100L > m_domain_;
                ::UMAA::Common::Enumeration::BuiltInTestStatusEnumType::BuiltInTestStatusEnumType m_setPoint_;
                ::UMAA::Common::Enumeration::BuiltInTestStatusEnumType::BuiltInTestStatusEnumType m_value_;

            };

            inline void swap(BuiltInTestStatusType_All& a, BuiltInTestStatusType_All& b)  noexcept 
            {
                a.swap(b);
            }

            NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const BuiltInTestStatusType_All& sample);

        } // namespace Measurement  
    } // namespace Common  
} // namespace UMAA  

#ifdef NDDS_STANDALONE_TYPE
namespace rti { 
    namespace topic {
    }
}
#else

namespace rti {
    namespace flat {
        namespace topic {
        }
    }
}
namespace dds {
    namespace topic {

        template<>
        struct topic_type_name< ::UMAA::Common::Measurement::BuiltInTestStatusType_All > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::Common::Measurement::BuiltInTestStatusType_All";
            }
        };

        template<>
        struct is_topic_type< ::UMAA::Common::Measurement::BuiltInTestStatusType_All > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< ::UMAA::Common::Measurement::BuiltInTestStatusType_All > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const ::UMAA::Common::Measurement::BuiltInTestStatusType_All& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(::UMAA::Common::Measurement::BuiltInTestStatusType_All& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(::UMAA::Common::Measurement::BuiltInTestStatusType_All& sample);

            NDDSUSERDllExport 
            static void allocate_sample(::UMAA::Common::Measurement::BuiltInTestStatusType_All& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };
    }
}

namespace rti { 
    namespace topic {

        template<>
        struct dynamic_type< ::UMAA::Common::Measurement::BuiltInTestStatusType_All > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };

        template <>
        struct extensibility< ::UMAA::Common::Measurement::BuiltInTestStatusType_All > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;    };

    }
}

#endif // NDDS_STANDALONE_TYPE
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif // BuiltInTestStatusType_All_723379715_hpp

