

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from PathReporterSpecsReportType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef PathReporterSpecsReportType_238830800_hpp
#define PathReporterSpecsReportType_238830800_hpp

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
#include "UMAA/Common/IdentifierType.hpp"
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
#include "UMAA/SA/PathReporterSpecs/PathReporterType.hpp"
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif
namespace UMAA {
    namespace SA {
        namespace PathReporterSpecs {

            static const std::string PathReporterSpecsReportTypeTopic = "UMAA::SA::PathReporterSpecs::PathReporterSpecsReportType";

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            // On Windows, dll-export template instantiations of standard types used by
            // other dll-exported types
            template class NDDSUSERDllExport std::allocator< ::UMAA::SA::PathReporterSpecs::PathReporterType >;
            template class NDDSUSERDllExport std::vector< ::UMAA::SA::PathReporterSpecs::PathReporterType >;
            #endif
            class NDDSUSERDllExport PathReporterSpecsReportType {
              public:

                PathReporterSpecsReportType();

                PathReporterSpecsReportType(const ::rti::core::bounded_sequence< ::UMAA::SA::PathReporterSpecs::PathReporterType, 4L >& pathReporters_,const ::UMAA::Common::Measurement::DateTime& timeStamp_,const ::UMAA::Common::IdentifierType& source_);

                ::rti::core::bounded_sequence< ::UMAA::SA::PathReporterSpecs::PathReporterType, 4L >& pathReporters() noexcept {
                    return m_pathReporters_;
                }

                const ::rti::core::bounded_sequence< ::UMAA::SA::PathReporterSpecs::PathReporterType, 4L >& pathReporters() const noexcept {
                    return m_pathReporters_;
                }

                void pathReporters(const ::rti::core::bounded_sequence< ::UMAA::SA::PathReporterSpecs::PathReporterType, 4L >& value) {

                    m_pathReporters_ = value;
                }

                void pathReporters(::rti::core::bounded_sequence< ::UMAA::SA::PathReporterSpecs::PathReporterType, 4L >&& value) {
                    m_pathReporters_ = std::move(value);
                }
                ::UMAA::Common::Measurement::DateTime& timeStamp() noexcept {
                    return m_timeStamp_;
                }

                const ::UMAA::Common::Measurement::DateTime& timeStamp() const noexcept {
                    return m_timeStamp_;
                }

                void timeStamp(const ::UMAA::Common::Measurement::DateTime& value) {

                    m_timeStamp_ = value;
                }

                void timeStamp(::UMAA::Common::Measurement::DateTime&& value) {
                    m_timeStamp_ = std::move(value);
                }
                ::UMAA::Common::IdentifierType& source() noexcept {
                    return m_source_;
                }

                const ::UMAA::Common::IdentifierType& source() const noexcept {
                    return m_source_;
                }

                void source(const ::UMAA::Common::IdentifierType& value) {

                    m_source_ = value;
                }

                void source(::UMAA::Common::IdentifierType&& value) {
                    m_source_ = std::move(value);
                }
                bool operator == (const PathReporterSpecsReportType& other_) const;
                bool operator != (const PathReporterSpecsReportType& other_) const;

                void swap(PathReporterSpecsReportType& other_) noexcept ;

              private:

                ::rti::core::bounded_sequence< ::UMAA::SA::PathReporterSpecs::PathReporterType, 4L > m_pathReporters_;
                ::UMAA::Common::Measurement::DateTime m_timeStamp_;
                ::UMAA::Common::IdentifierType m_source_;

            };

            inline void swap(PathReporterSpecsReportType& a, PathReporterSpecsReportType& b)  noexcept 
            {
                a.swap(b);
            }

            NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const PathReporterSpecsReportType& sample);

        } // namespace PathReporterSpecs  
    } // namespace SA  
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
        struct topic_type_name< ::UMAA::SA::PathReporterSpecs::PathReporterSpecsReportType > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::SA::PathReporterSpecs::PathReporterSpecsReportType";
            }
        };

        template<>
        struct is_topic_type< ::UMAA::SA::PathReporterSpecs::PathReporterSpecsReportType > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< ::UMAA::SA::PathReporterSpecs::PathReporterSpecsReportType > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const ::UMAA::SA::PathReporterSpecs::PathReporterSpecsReportType& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(::UMAA::SA::PathReporterSpecs::PathReporterSpecsReportType& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(::UMAA::SA::PathReporterSpecs::PathReporterSpecsReportType& sample);

            NDDSUSERDllExport 
            static void allocate_sample(::UMAA::SA::PathReporterSpecs::PathReporterSpecsReportType& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };
    }
}

namespace rti { 
    namespace topic {

        template<>
        struct dynamic_type< ::UMAA::SA::PathReporterSpecs::PathReporterSpecsReportType > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };

        template <>
        struct extensibility< ::UMAA::SA::PathReporterSpecs::PathReporterSpecsReportType > {
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

#endif // PathReporterSpecsReportType_238830800_hpp

