

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from HostManipulatorReportType.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef HostManipulatorReportType_487308305_hpp
#define HostManipulatorReportType_487308305_hpp

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
namespace UMAA {
    namespace SEM {
        namespace ExtendedPayloadStatus {

            static const std::string HostManipulatorReport_TOPIC = "UMAA::SEM::ExtendedPayloadStatus::HostManipulatorReport";

            class NDDSUSERDllExport HostManipulatorReportType {
              public:
                HostManipulatorReportType();

                HostManipulatorReportType(const UMAA::Common::Measurement::NumericGUID& jointID,const UMAA::Common::Measurement::NumericGUID& manipulatorID,const UMAA::Common::Measurement::NumericGUID& source,const UMAA::Common::Measurement::DateTime& timeStamp);

                #ifdef RTI_CXX11_RVALUE_REFERENCES
                #ifndef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
                HostManipulatorReportType (HostManipulatorReportType&&) = default;
                HostManipulatorReportType& operator=(HostManipulatorReportType&&) = default;
                HostManipulatorReportType& operator=(const HostManipulatorReportType&) = default;
                HostManipulatorReportType(const HostManipulatorReportType&) = default;
                #else
                HostManipulatorReportType(HostManipulatorReportType&& other_) OMG_NOEXCEPT;  
                HostManipulatorReportType& operator=(HostManipulatorReportType&&  other_) OMG_NOEXCEPT;
                #endif
                #endif 

                UMAA::Common::Measurement::NumericGUID& jointID() OMG_NOEXCEPT {
                    return m_jointID_;
                }

                const UMAA::Common::Measurement::NumericGUID& jointID() const OMG_NOEXCEPT {
                    return m_jointID_;
                }

                void jointID(const UMAA::Common::Measurement::NumericGUID& value) {
                    m_jointID_ = value;
                }

                void jointID(UMAA::Common::Measurement::NumericGUID&& value) {
                    m_jointID_ = std::move(value);
                }
                UMAA::Common::Measurement::NumericGUID& manipulatorID() OMG_NOEXCEPT {
                    return m_manipulatorID_;
                }

                const UMAA::Common::Measurement::NumericGUID& manipulatorID() const OMG_NOEXCEPT {
                    return m_manipulatorID_;
                }

                void manipulatorID(const UMAA::Common::Measurement::NumericGUID& value) {
                    m_manipulatorID_ = value;
                }

                void manipulatorID(UMAA::Common::Measurement::NumericGUID&& value) {
                    m_manipulatorID_ = std::move(value);
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

                bool operator == (const HostManipulatorReportType& other_) const;
                bool operator != (const HostManipulatorReportType& other_) const;

                void swap(HostManipulatorReportType& other_) OMG_NOEXCEPT ;

              private:

                UMAA::Common::Measurement::NumericGUID m_jointID_;
                UMAA::Common::Measurement::NumericGUID m_manipulatorID_;
                UMAA::Common::Measurement::NumericGUID m_source_;
                UMAA::Common::Measurement::DateTime m_timeStamp_;

            };

            inline void swap(HostManipulatorReportType& a, HostManipulatorReportType& b)  OMG_NOEXCEPT 
            {
                a.swap(b);
            }

            NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const HostManipulatorReportType& sample);

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
        struct topic_type_name< UMAA::SEM::ExtendedPayloadStatus::HostManipulatorReportType > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::SEM::ExtendedPayloadStatus::HostManipulatorReportType";
            }
        };

        template<>
        struct is_topic_type< UMAA::SEM::ExtendedPayloadStatus::HostManipulatorReportType > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< UMAA::SEM::ExtendedPayloadStatus::HostManipulatorReportType > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const UMAA::SEM::ExtendedPayloadStatus::HostManipulatorReportType& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(UMAA::SEM::ExtendedPayloadStatus::HostManipulatorReportType& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(UMAA::SEM::ExtendedPayloadStatus::HostManipulatorReportType& sample);

            NDDSUSERDllExport 
            static void allocate_sample(UMAA::SEM::ExtendedPayloadStatus::HostManipulatorReportType& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };

    }
}

namespace rti { 
    namespace topic {

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct dynamic_type< UMAA::SEM::ExtendedPayloadStatus::HostManipulatorReportType > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };
        #endif

        template <>
        struct extensibility< UMAA::SEM::ExtendedPayloadStatus::HostManipulatorReportType > {
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

#endif // HostManipulatorReportType_487308305_hpp

