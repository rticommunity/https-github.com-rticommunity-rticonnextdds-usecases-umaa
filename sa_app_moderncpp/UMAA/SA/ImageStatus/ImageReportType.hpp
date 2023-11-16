

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ImageReportType.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef ImageReportType_1344238249_hpp
#define ImageReportType_1344238249_hpp

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
#include "UMAA/Common/Measurement/Position3D_WGS84.hpp"
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
#include "UMAA/SA/WorldTransform/WorldTransformType.hpp"
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif
namespace UMAA {
    namespace SA {
        namespace ImageStatus {

            static const std::string ImageReport_TOPIC = "UMAA::SA::ImageStatus::ImageReport";

            class NDDSUSERDllExport ImageReportType {
              public:
                ImageReportType();

                ImageReportType(const UMAA::Common::Measurement::Position3D_WGS84& cameraPosition,const ::dds::core::optional< std::string >& imageName,const std::string& imageURI,const UMAA::Common::Measurement::DateTime& timestamp,const UMAA::Common::MaritimeEnumeration::ImageFormatEnumType::ImageFormatEnumType& type,const ::dds::core::optional< UMAA::SA::WorldTransform::WorldTransformType >& worldTransform,const UMAA::Common::Measurement::NumericGUID& source,const UMAA::Common::Measurement::DateTime& timeStamp,const UMAA::Common::Measurement::NumericGUID& imageID);

                #ifdef RTI_CXX11_RVALUE_REFERENCES
                #ifndef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
                ImageReportType (ImageReportType&&) = default;
                ImageReportType& operator=(ImageReportType&&) = default;
                ImageReportType& operator=(const ImageReportType&) = default;
                ImageReportType(const ImageReportType&) = default;
                #else
                ImageReportType(ImageReportType&& other_) OMG_NOEXCEPT;  
                ImageReportType& operator=(ImageReportType&&  other_) OMG_NOEXCEPT;
                #endif
                #endif 

                UMAA::Common::Measurement::Position3D_WGS84& cameraPosition() OMG_NOEXCEPT {
                    return m_cameraPosition_;
                }

                const UMAA::Common::Measurement::Position3D_WGS84& cameraPosition() const OMG_NOEXCEPT {
                    return m_cameraPosition_;
                }

                void cameraPosition(const UMAA::Common::Measurement::Position3D_WGS84& value) {
                    m_cameraPosition_ = value;
                }

                void cameraPosition(UMAA::Common::Measurement::Position3D_WGS84&& value) {
                    m_cameraPosition_ = std::move(value);
                }
                ::dds::core::optional< std::string >& imageName() OMG_NOEXCEPT {
                    return m_imageName_;
                }

                const ::dds::core::optional< std::string >& imageName() const OMG_NOEXCEPT {
                    return m_imageName_;
                }

                void imageName(const ::dds::core::optional< std::string >& value) {
                    m_imageName_ = value;
                }

                void imageName(::dds::core::optional< std::string >&& value) {
                    m_imageName_ = std::move(value);
                }
                std::string& imageURI() OMG_NOEXCEPT {
                    return m_imageURI_;
                }

                const std::string& imageURI() const OMG_NOEXCEPT {
                    return m_imageURI_;
                }

                void imageURI(const std::string& value) {
                    m_imageURI_ = value;
                }

                void imageURI(std::string&& value) {
                    m_imageURI_ = std::move(value);
                }
                UMAA::Common::Measurement::DateTime& timestamp() OMG_NOEXCEPT {
                    return m_timestamp_;
                }

                const UMAA::Common::Measurement::DateTime& timestamp() const OMG_NOEXCEPT {
                    return m_timestamp_;
                }

                void timestamp(const UMAA::Common::Measurement::DateTime& value) {
                    m_timestamp_ = value;
                }

                void timestamp(UMAA::Common::Measurement::DateTime&& value) {
                    m_timestamp_ = std::move(value);
                }
                UMAA::Common::MaritimeEnumeration::ImageFormatEnumType::ImageFormatEnumType& type() OMG_NOEXCEPT {
                    return m_type_;
                }

                const UMAA::Common::MaritimeEnumeration::ImageFormatEnumType::ImageFormatEnumType& type() const OMG_NOEXCEPT {
                    return m_type_;
                }

                void type(const UMAA::Common::MaritimeEnumeration::ImageFormatEnumType::ImageFormatEnumType& value) {
                    m_type_ = value;
                }

                void type(UMAA::Common::MaritimeEnumeration::ImageFormatEnumType::ImageFormatEnumType&& value) {
                    m_type_ = std::move(value);
                }
                ::dds::core::optional< UMAA::SA::WorldTransform::WorldTransformType >& worldTransform() OMG_NOEXCEPT {
                    return m_worldTransform_;
                }

                const ::dds::core::optional< UMAA::SA::WorldTransform::WorldTransformType >& worldTransform() const OMG_NOEXCEPT {
                    return m_worldTransform_;
                }

                void worldTransform(const ::dds::core::optional< UMAA::SA::WorldTransform::WorldTransformType >& value) {
                    m_worldTransform_ = value;
                }

                void worldTransform(::dds::core::optional< UMAA::SA::WorldTransform::WorldTransformType >&& value) {
                    m_worldTransform_ = std::move(value);
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
                UMAA::Common::Measurement::NumericGUID& imageID() OMG_NOEXCEPT {
                    return m_imageID_;
                }

                const UMAA::Common::Measurement::NumericGUID& imageID() const OMG_NOEXCEPT {
                    return m_imageID_;
                }

                void imageID(const UMAA::Common::Measurement::NumericGUID& value) {
                    m_imageID_ = value;
                }

                void imageID(UMAA::Common::Measurement::NumericGUID&& value) {
                    m_imageID_ = std::move(value);
                }

                bool operator == (const ImageReportType& other_) const;
                bool operator != (const ImageReportType& other_) const;

                void swap(ImageReportType& other_) OMG_NOEXCEPT ;

              private:

                UMAA::Common::Measurement::Position3D_WGS84 m_cameraPosition_;
                ::dds::core::optional< std::string > m_imageName_;
                std::string m_imageURI_;
                UMAA::Common::Measurement::DateTime m_timestamp_;
                UMAA::Common::MaritimeEnumeration::ImageFormatEnumType::ImageFormatEnumType m_type_;
                ::dds::core::optional< UMAA::SA::WorldTransform::WorldTransformType > m_worldTransform_;
                UMAA::Common::Measurement::NumericGUID m_source_;
                UMAA::Common::Measurement::DateTime m_timeStamp_;
                UMAA::Common::Measurement::NumericGUID m_imageID_;

            };

            inline void swap(ImageReportType& a, ImageReportType& b)  OMG_NOEXCEPT 
            {
                a.swap(b);
            }

            NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const ImageReportType& sample);

        } // namespace ImageStatus  
    } // namespace SA  
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
        struct topic_type_name< UMAA::SA::ImageStatus::ImageReportType > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::SA::ImageStatus::ImageReportType";
            }
        };

        template<>
        struct is_topic_type< UMAA::SA::ImageStatus::ImageReportType > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< UMAA::SA::ImageStatus::ImageReportType > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const UMAA::SA::ImageStatus::ImageReportType& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(UMAA::SA::ImageStatus::ImageReportType& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(UMAA::SA::ImageStatus::ImageReportType& sample);

            NDDSUSERDllExport 
            static void allocate_sample(UMAA::SA::ImageStatus::ImageReportType& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };

    }
}

namespace rti { 
    namespace topic {

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct dynamic_type< UMAA::SA::ImageStatus::ImageReportType > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };
        #endif

        template <>
        struct extensibility< UMAA::SA::ImageStatus::ImageReportType > {
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

#endif // ImageReportType_1344238249_hpp

