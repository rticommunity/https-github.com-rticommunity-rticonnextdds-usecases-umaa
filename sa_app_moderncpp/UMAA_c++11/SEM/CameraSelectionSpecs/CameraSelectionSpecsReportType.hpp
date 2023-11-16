

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from CameraSelectionSpecsReportType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef CameraSelectionSpecsReportType_146783325_hpp
#define CameraSelectionSpecsReportType_146783325_hpp

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
#include "UMAA/Common/Measurement/Measurements.hpp"
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif
namespace UMAA {
    namespace SEM {
        namespace CameraSelectionSpecs {

            RTI_CONSTEXPR_OR_CONST_STRING std::string CameraSelectionSpecsReport_TOPIC = "UMAA::SEM::CameraSelectionSpecs::CameraSelectionSpecsReport";

            class NDDSUSERDllExport CameraSelectionSpecsReportType {
              public:

                CameraSelectionSpecsReportType();

                CameraSelectionSpecsReportType(const ::UMAA::Common::Measurement::NumericGUID& muxID_,const ::UMAA::Common::Measurement::NumericGUID& source_,const ::UMAA::Common::Measurement::DateTime& timeStamp_,const ::UMAA::Common::Measurement::NumericGUID& cameraID_);

                ::UMAA::Common::Measurement::NumericGUID& muxID() noexcept {
                    return m_muxID_;
                }

                const ::UMAA::Common::Measurement::NumericGUID& muxID() const noexcept {
                    return m_muxID_;
                }

                void muxID(const ::UMAA::Common::Measurement::NumericGUID& value) {

                    m_muxID_ = value;
                }

                void muxID(::UMAA::Common::Measurement::NumericGUID&& value) {
                    m_muxID_ = std::move(value);
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
                ::UMAA::Common::Measurement::NumericGUID& cameraID() noexcept {
                    return m_cameraID_;
                }

                const ::UMAA::Common::Measurement::NumericGUID& cameraID() const noexcept {
                    return m_cameraID_;
                }

                void cameraID(const ::UMAA::Common::Measurement::NumericGUID& value) {

                    m_cameraID_ = value;
                }

                void cameraID(::UMAA::Common::Measurement::NumericGUID&& value) {
                    m_cameraID_ = std::move(value);
                }
                bool operator == (const CameraSelectionSpecsReportType& other_) const;
                bool operator != (const CameraSelectionSpecsReportType& other_) const;

                void swap(CameraSelectionSpecsReportType& other_) noexcept ;

              private:

                ::UMAA::Common::Measurement::NumericGUID m_muxID_ {};
                ::UMAA::Common::Measurement::NumericGUID m_source_ {};
                ::UMAA::Common::Measurement::DateTime m_timeStamp_;
                ::UMAA::Common::Measurement::NumericGUID m_cameraID_ {};

            };

            inline void swap(CameraSelectionSpecsReportType& a, CameraSelectionSpecsReportType& b)  noexcept 
            {
                a.swap(b);
            }

            NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const CameraSelectionSpecsReportType& sample);

        } // namespace CameraSelectionSpecs  
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
        struct topic_type_name< ::UMAA::SEM::CameraSelectionSpecs::CameraSelectionSpecsReportType > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::SEM::CameraSelectionSpecs::CameraSelectionSpecsReportType";
            }
        };

        template<>
        struct is_topic_type< ::UMAA::SEM::CameraSelectionSpecs::CameraSelectionSpecsReportType > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< ::UMAA::SEM::CameraSelectionSpecs::CameraSelectionSpecsReportType > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const ::UMAA::SEM::CameraSelectionSpecs::CameraSelectionSpecsReportType& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(::UMAA::SEM::CameraSelectionSpecs::CameraSelectionSpecsReportType& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(::UMAA::SEM::CameraSelectionSpecs::CameraSelectionSpecsReportType& sample);

            NDDSUSERDllExport 
            static void allocate_sample(::UMAA::SEM::CameraSelectionSpecs::CameraSelectionSpecsReportType& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };
    }
}

namespace rti { 
    namespace topic {

        template<>
        struct dynamic_type< ::UMAA::SEM::CameraSelectionSpecs::CameraSelectionSpecsReportType > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };

        template <>
        struct extensibility< ::UMAA::SEM::CameraSelectionSpecs::CameraSelectionSpecsReportType > {
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

#endif // CameraSelectionSpecsReportType_146783325_hpp

