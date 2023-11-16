

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from PanTiltOperationalParamsReportType.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef PanTiltOperationalParamsReportType_256581037_hpp
#define PanTiltOperationalParamsReportType_256581037_hpp

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
#include "UMAA/SEM/ExtendedPayloadStatus/OperationalParamsType.hpp"
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif
namespace UMAA {
    namespace SEM {
        namespace ExtendedPayloadStatus {

            static const std::string PanTiltOperationalParamsReport_TOPIC = "UMAA::SEM::ExtendedPayloadStatus::PanTiltOperationalParamsReport";

            class NDDSUSERDllExport PanTiltOperationalParamsReportType {
              public:
                PanTiltOperationalParamsReportType();

                PanTiltOperationalParamsReportType(const UMAA::SEM::ExtendedPayloadStatus::OperationalParamsType& panParams,const UMAA::SEM::ExtendedPayloadStatus::OperationalParamsType& tiltParams,const UMAA::Common::Measurement::NumericGUID& source,const UMAA::Common::Measurement::DateTime& timeStamp);

                #ifdef RTI_CXX11_RVALUE_REFERENCES
                #ifndef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
                PanTiltOperationalParamsReportType (PanTiltOperationalParamsReportType&&) = default;
                PanTiltOperationalParamsReportType& operator=(PanTiltOperationalParamsReportType&&) = default;
                PanTiltOperationalParamsReportType& operator=(const PanTiltOperationalParamsReportType&) = default;
                PanTiltOperationalParamsReportType(const PanTiltOperationalParamsReportType&) = default;
                #else
                PanTiltOperationalParamsReportType(PanTiltOperationalParamsReportType&& other_) OMG_NOEXCEPT;  
                PanTiltOperationalParamsReportType& operator=(PanTiltOperationalParamsReportType&&  other_) OMG_NOEXCEPT;
                #endif
                #endif 

                UMAA::SEM::ExtendedPayloadStatus::OperationalParamsType& panParams() OMG_NOEXCEPT {
                    return m_panParams_;
                }

                const UMAA::SEM::ExtendedPayloadStatus::OperationalParamsType& panParams() const OMG_NOEXCEPT {
                    return m_panParams_;
                }

                void panParams(const UMAA::SEM::ExtendedPayloadStatus::OperationalParamsType& value) {
                    m_panParams_ = value;
                }

                void panParams(UMAA::SEM::ExtendedPayloadStatus::OperationalParamsType&& value) {
                    m_panParams_ = std::move(value);
                }
                UMAA::SEM::ExtendedPayloadStatus::OperationalParamsType& tiltParams() OMG_NOEXCEPT {
                    return m_tiltParams_;
                }

                const UMAA::SEM::ExtendedPayloadStatus::OperationalParamsType& tiltParams() const OMG_NOEXCEPT {
                    return m_tiltParams_;
                }

                void tiltParams(const UMAA::SEM::ExtendedPayloadStatus::OperationalParamsType& value) {
                    m_tiltParams_ = value;
                }

                void tiltParams(UMAA::SEM::ExtendedPayloadStatus::OperationalParamsType&& value) {
                    m_tiltParams_ = std::move(value);
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

                bool operator == (const PanTiltOperationalParamsReportType& other_) const;
                bool operator != (const PanTiltOperationalParamsReportType& other_) const;

                void swap(PanTiltOperationalParamsReportType& other_) OMG_NOEXCEPT ;

              private:

                UMAA::SEM::ExtendedPayloadStatus::OperationalParamsType m_panParams_;
                UMAA::SEM::ExtendedPayloadStatus::OperationalParamsType m_tiltParams_;
                UMAA::Common::Measurement::NumericGUID m_source_;
                UMAA::Common::Measurement::DateTime m_timeStamp_;

            };

            inline void swap(PanTiltOperationalParamsReportType& a, PanTiltOperationalParamsReportType& b)  OMG_NOEXCEPT 
            {
                a.swap(b);
            }

            NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const PanTiltOperationalParamsReportType& sample);

        } // namespace ExtendedPayloadStatus  
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
        struct topic_type_name< UMAA::SEM::ExtendedPayloadStatus::PanTiltOperationalParamsReportType > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::SEM::ExtendedPayloadStatus::PanTiltOperationalParamsReportType";
            }
        };

        template<>
        struct is_topic_type< UMAA::SEM::ExtendedPayloadStatus::PanTiltOperationalParamsReportType > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< UMAA::SEM::ExtendedPayloadStatus::PanTiltOperationalParamsReportType > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const UMAA::SEM::ExtendedPayloadStatus::PanTiltOperationalParamsReportType& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(UMAA::SEM::ExtendedPayloadStatus::PanTiltOperationalParamsReportType& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(UMAA::SEM::ExtendedPayloadStatus::PanTiltOperationalParamsReportType& sample);

            NDDSUSERDllExport 
            static void allocate_sample(UMAA::SEM::ExtendedPayloadStatus::PanTiltOperationalParamsReportType& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };

    }
}

namespace rti { 
    namespace topic {

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct dynamic_type< UMAA::SEM::ExtendedPayloadStatus::PanTiltOperationalParamsReportType > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };
        #endif

        template <>
        struct extensibility< UMAA::SEM::ExtendedPayloadStatus::PanTiltOperationalParamsReportType > {
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

#endif // PanTiltOperationalParamsReportType_256581037_hpp

