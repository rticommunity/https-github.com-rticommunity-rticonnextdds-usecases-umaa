

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from StillImageConfigReportType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef StillImageConfigReportType_615644076_hpp
#define StillImageConfigReportType_615644076_hpp

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
#include "UMAA/SEM/SensorManagement/StillImageErrorType.hpp"
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif
namespace UMAA {
    namespace SA {
        namespace StillImageConfig {

            RTI_CONSTEXPR_OR_CONST_STRING std::string StillImageConfigReport_TOPIC = "UMAA::SA::StillImageConfig::StillImageConfigReport";

            class NDDSUSERDllExport StillImageConfigReportType {
              public:

                StillImageConfigReportType();

                StillImageConfigReportType(const ::UMAA::Common::MaritimeEnumeration::FrameSizeEnumType::FrameSizeEnumType& frameSize_,const ::UMAA::SEM::SensorManagement::StillImageErrorType& stillImageError_,const ::UMAA::Common::MaritimeEnumeration::ImageFormatEnumType::ImageFormatEnumType& supportedImageFormat_,const ::UMAA::Common::Measurement::NumericGUID& source_,const ::UMAA::Common::Measurement::DateTime& timeStamp_);

                ::UMAA::Common::MaritimeEnumeration::FrameSizeEnumType::FrameSizeEnumType& frameSize() noexcept {
                    return m_frameSize_;
                }

                const ::UMAA::Common::MaritimeEnumeration::FrameSizeEnumType::FrameSizeEnumType& frameSize() const noexcept {
                    return m_frameSize_;
                }

                void frameSize(const ::UMAA::Common::MaritimeEnumeration::FrameSizeEnumType::FrameSizeEnumType& value) {

                    m_frameSize_ = value;
                }

                void frameSize(::UMAA::Common::MaritimeEnumeration::FrameSizeEnumType::FrameSizeEnumType&& value) {
                    m_frameSize_ = std::move(value);
                }
                ::UMAA::SEM::SensorManagement::StillImageErrorType& stillImageError() noexcept {
                    return m_stillImageError_;
                }

                const ::UMAA::SEM::SensorManagement::StillImageErrorType& stillImageError() const noexcept {
                    return m_stillImageError_;
                }

                void stillImageError(const ::UMAA::SEM::SensorManagement::StillImageErrorType& value) {

                    m_stillImageError_ = value;
                }

                void stillImageError(::UMAA::SEM::SensorManagement::StillImageErrorType&& value) {
                    m_stillImageError_ = std::move(value);
                }
                ::UMAA::Common::MaritimeEnumeration::ImageFormatEnumType::ImageFormatEnumType& supportedImageFormat() noexcept {
                    return m_supportedImageFormat_;
                }

                const ::UMAA::Common::MaritimeEnumeration::ImageFormatEnumType::ImageFormatEnumType& supportedImageFormat() const noexcept {
                    return m_supportedImageFormat_;
                }

                void supportedImageFormat(const ::UMAA::Common::MaritimeEnumeration::ImageFormatEnumType::ImageFormatEnumType& value) {

                    m_supportedImageFormat_ = value;
                }

                void supportedImageFormat(::UMAA::Common::MaritimeEnumeration::ImageFormatEnumType::ImageFormatEnumType&& value) {
                    m_supportedImageFormat_ = std::move(value);
                }
                ::UMAA::Common::Measurement::NumericGUID& source() noexcept {
                    return m_source_;
                }

                const ::UMAA::Common::Measurement::NumericGUID& source() const noexcept {
                    return m_source_;
                }

                void source(const ::UMAA::Common::Measurement::NumericGUID& value) {

                    m_source_ = value;
                }

                void source(::UMAA::Common::Measurement::NumericGUID&& value) {
                    m_source_ = std::move(value);
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
                bool operator == (const StillImageConfigReportType& other_) const;
                bool operator != (const StillImageConfigReportType& other_) const;

                void swap(StillImageConfigReportType& other_) noexcept ;

              private:

                ::UMAA::Common::MaritimeEnumeration::FrameSizeEnumType::FrameSizeEnumType m_frameSize_;
                ::UMAA::SEM::SensorManagement::StillImageErrorType m_stillImageError_;
                ::UMAA::Common::MaritimeEnumeration::ImageFormatEnumType::ImageFormatEnumType m_supportedImageFormat_;
                ::UMAA::Common::Measurement::NumericGUID m_source_ {};
                ::UMAA::Common::Measurement::DateTime m_timeStamp_;

            };

            inline void swap(StillImageConfigReportType& a, StillImageConfigReportType& b)  noexcept 
            {
                a.swap(b);
            }

            NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const StillImageConfigReportType& sample);

        } // namespace StillImageConfig  
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
        struct topic_type_name< ::UMAA::SA::StillImageConfig::StillImageConfigReportType > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::SA::StillImageConfig::StillImageConfigReportType";
            }
        };

        template<>
        struct is_topic_type< ::UMAA::SA::StillImageConfig::StillImageConfigReportType > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< ::UMAA::SA::StillImageConfig::StillImageConfigReportType > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const ::UMAA::SA::StillImageConfig::StillImageConfigReportType& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(::UMAA::SA::StillImageConfig::StillImageConfigReportType& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(::UMAA::SA::StillImageConfig::StillImageConfigReportType& sample);

            NDDSUSERDllExport 
            static void allocate_sample(::UMAA::SA::StillImageConfig::StillImageConfigReportType& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };
    }
}

namespace rti { 
    namespace topic {

        template<>
        struct dynamic_type< ::UMAA::SA::StillImageConfig::StillImageConfigReportType > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };

        template <>
        struct extensibility< ::UMAA::SA::StillImageConfig::StillImageConfigReportType > {
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

#endif // StillImageConfigReportType_615644076_hpp

