

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from MissionPlanAssignmentCommandAckReportType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef MissionPlanAssignmentCommandAckReportType_1538602432_hpp
#define MissionPlanAssignmentCommandAckReportType_1538602432_hpp

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
#include "UMAA/MM/MissionPlanAssignmentControl/MissionPlanAssignmentCommandType.hpp"
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif
namespace UMAA {
    namespace MM {
        namespace MissionPlanAssignmentControl {

            static const std::string MissionPlanAssignmentCommandAckReportTypeTopic = "UMAA::MM::MissionPlanAssignmentControl::MissionPlanAssignmentCommandAckReportType";

            class NDDSUSERDllExport MissionPlanAssignmentCommandAckReportType {
              public:

                MissionPlanAssignmentCommandAckReportType();

                MissionPlanAssignmentCommandAckReportType(const ::UMAA::MM::MissionPlanAssignmentControl::MissionPlanAssignmentCommandType& command_,const ::UMAA::Common::Measurement::DateTime& timeStamp_,const ::UMAA::Common::IdentifierType& source_,const ::UMAA::Common::Measurement::NumericGUID& sessionID_);

                ::UMAA::MM::MissionPlanAssignmentControl::MissionPlanAssignmentCommandType& command() noexcept {
                    return m_command_;
                }

                const ::UMAA::MM::MissionPlanAssignmentControl::MissionPlanAssignmentCommandType& command() const noexcept {
                    return m_command_;
                }

                void command(const ::UMAA::MM::MissionPlanAssignmentControl::MissionPlanAssignmentCommandType& value) {

                    m_command_ = value;
                }

                void command(::UMAA::MM::MissionPlanAssignmentControl::MissionPlanAssignmentCommandType&& value) {
                    m_command_ = std::move(value);
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
                ::UMAA::Common::Measurement::NumericGUID& sessionID() noexcept {
                    return m_sessionID_;
                }

                const ::UMAA::Common::Measurement::NumericGUID& sessionID() const noexcept {
                    return m_sessionID_;
                }

                void sessionID(const ::UMAA::Common::Measurement::NumericGUID& value) {

                    m_sessionID_ = value;
                }

                void sessionID(::UMAA::Common::Measurement::NumericGUID&& value) {
                    m_sessionID_ = std::move(value);
                }
                bool operator == (const MissionPlanAssignmentCommandAckReportType& other_) const;
                bool operator != (const MissionPlanAssignmentCommandAckReportType& other_) const;

                void swap(MissionPlanAssignmentCommandAckReportType& other_) noexcept ;

              private:

                ::UMAA::MM::MissionPlanAssignmentControl::MissionPlanAssignmentCommandType m_command_;
                ::UMAA::Common::Measurement::DateTime m_timeStamp_;
                ::UMAA::Common::IdentifierType m_source_;
                ::UMAA::Common::Measurement::NumericGUID m_sessionID_ {};

            };

            inline void swap(MissionPlanAssignmentCommandAckReportType& a, MissionPlanAssignmentCommandAckReportType& b)  noexcept 
            {
                a.swap(b);
            }

            NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const MissionPlanAssignmentCommandAckReportType& sample);

        } // namespace MissionPlanAssignmentControl  
    } // namespace MM  
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
        struct topic_type_name< ::UMAA::MM::MissionPlanAssignmentControl::MissionPlanAssignmentCommandAckReportType > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::MM::MissionPlanAssignmentControl::MissionPlanAssignmentCommandAckReportType";
            }
        };

        template<>
        struct is_topic_type< ::UMAA::MM::MissionPlanAssignmentControl::MissionPlanAssignmentCommandAckReportType > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< ::UMAA::MM::MissionPlanAssignmentControl::MissionPlanAssignmentCommandAckReportType > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const ::UMAA::MM::MissionPlanAssignmentControl::MissionPlanAssignmentCommandAckReportType& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(::UMAA::MM::MissionPlanAssignmentControl::MissionPlanAssignmentCommandAckReportType& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(::UMAA::MM::MissionPlanAssignmentControl::MissionPlanAssignmentCommandAckReportType& sample);

            NDDSUSERDllExport 
            static void allocate_sample(::UMAA::MM::MissionPlanAssignmentControl::MissionPlanAssignmentCommandAckReportType& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };
    }
}

namespace rti { 
    namespace topic {

        template<>
        struct dynamic_type< ::UMAA::MM::MissionPlanAssignmentControl::MissionPlanAssignmentCommandAckReportType > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };

        template <>
        struct extensibility< ::UMAA::MM::MissionPlanAssignmentControl::MissionPlanAssignmentCommandAckReportType > {
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

#endif // MissionPlanAssignmentCommandAckReportType_1538602432_hpp

