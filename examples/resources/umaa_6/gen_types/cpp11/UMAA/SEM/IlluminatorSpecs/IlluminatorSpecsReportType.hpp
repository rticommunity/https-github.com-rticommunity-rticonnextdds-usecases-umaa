

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from IlluminatorSpecsReportType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef IlluminatorSpecsReportType_1378571436_hpp
#define IlluminatorSpecsReportType_1378571436_hpp

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
#include "UMAA/Common/PrimitiveConstrained/ConstrainedTypes.hpp"
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
#include "UMAA/SEM/IlluminatorSpecs/BeamWidthSpecsType.hpp"
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif
namespace UMAA {
    namespace SEM {
        namespace IlluminatorSpecs {

            static const std::string IlluminatorSpecsReportTypeTopic = "UMAA::SEM::IlluminatorSpecs::IlluminatorSpecsReportType";

            class NDDSUSERDllExport IlluminatorSpecsReportType {
              public:

                IlluminatorSpecsReportType();

                IlluminatorSpecsReportType(const ::dds::core::optional< ::UMAA::SEM::IlluminatorSpecs::BeamWidthSpecsType >& beamWidthSpecs_,const std::string& name_,bool supportedColor_,bool supportedInfrared_,bool supportedIntensityLevel_,const ::UMAA::Common::Measurement::DateTime& timeStamp_,const ::UMAA::Common::IdentifierType& source_);

                ::dds::core::optional< ::UMAA::SEM::IlluminatorSpecs::BeamWidthSpecsType >& beamWidthSpecs() noexcept {
                    return m_beamWidthSpecs_;
                }

                const ::dds::core::optional< ::UMAA::SEM::IlluminatorSpecs::BeamWidthSpecsType >& beamWidthSpecs() const noexcept {
                    return m_beamWidthSpecs_;
                }

                void beamWidthSpecs(const ::dds::core::optional< ::UMAA::SEM::IlluminatorSpecs::BeamWidthSpecsType >& value) {

                    m_beamWidthSpecs_ = value;
                }

                void beamWidthSpecs(::dds::core::optional< ::UMAA::SEM::IlluminatorSpecs::BeamWidthSpecsType >&& value) {
                    m_beamWidthSpecs_ = std::move(value);
                }
                std::string& name() noexcept {
                    return m_name_;
                }

                const std::string& name() const noexcept {
                    return m_name_;
                }

                void name(const std::string& value) {

                    m_name_ = value;
                }

                void name(std::string&& value) {
                    m_name_ = std::move(value);
                }
                bool& supportedColor() noexcept {
                    return m_supportedColor_;
                }

                const bool& supportedColor() const noexcept {
                    return m_supportedColor_;
                }

                void supportedColor(bool value) {

                    m_supportedColor_ = value;
                }

                bool& supportedInfrared() noexcept {
                    return m_supportedInfrared_;
                }

                const bool& supportedInfrared() const noexcept {
                    return m_supportedInfrared_;
                }

                void supportedInfrared(bool value) {

                    m_supportedInfrared_ = value;
                }

                bool& supportedIntensityLevel() noexcept {
                    return m_supportedIntensityLevel_;
                }

                const bool& supportedIntensityLevel() const noexcept {
                    return m_supportedIntensityLevel_;
                }

                void supportedIntensityLevel(bool value) {

                    m_supportedIntensityLevel_ = value;
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
                bool operator == (const IlluminatorSpecsReportType& other_) const;
                bool operator != (const IlluminatorSpecsReportType& other_) const;

                void swap(IlluminatorSpecsReportType& other_) noexcept ;

              private:

                ::dds::core::optional< ::UMAA::SEM::IlluminatorSpecs::BeamWidthSpecsType > m_beamWidthSpecs_;
                std::string m_name_;
                bool m_supportedColor_;
                bool m_supportedInfrared_;
                bool m_supportedIntensityLevel_;
                ::UMAA::Common::Measurement::DateTime m_timeStamp_;
                ::UMAA::Common::IdentifierType m_source_;

            };

            inline void swap(IlluminatorSpecsReportType& a, IlluminatorSpecsReportType& b)  noexcept 
            {
                a.swap(b);
            }

            NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const IlluminatorSpecsReportType& sample);

        } // namespace IlluminatorSpecs  
    } // namespace SEM  
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
        struct topic_type_name< ::UMAA::SEM::IlluminatorSpecs::IlluminatorSpecsReportType > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::SEM::IlluminatorSpecs::IlluminatorSpecsReportType";
            }
        };

        template<>
        struct is_topic_type< ::UMAA::SEM::IlluminatorSpecs::IlluminatorSpecsReportType > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< ::UMAA::SEM::IlluminatorSpecs::IlluminatorSpecsReportType > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const ::UMAA::SEM::IlluminatorSpecs::IlluminatorSpecsReportType& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(::UMAA::SEM::IlluminatorSpecs::IlluminatorSpecsReportType& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(::UMAA::SEM::IlluminatorSpecs::IlluminatorSpecsReportType& sample);

            NDDSUSERDllExport 
            static void allocate_sample(::UMAA::SEM::IlluminatorSpecs::IlluminatorSpecsReportType& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };
    }
}

namespace rti { 
    namespace topic {

        template<>
        struct dynamic_type< ::UMAA::SEM::IlluminatorSpecs::IlluminatorSpecsReportType > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };

        template <>
        struct extensibility< ::UMAA::SEM::IlluminatorSpecs::IlluminatorSpecsReportType > {
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

#endif // IlluminatorSpecsReportType_1378571436_hpp

