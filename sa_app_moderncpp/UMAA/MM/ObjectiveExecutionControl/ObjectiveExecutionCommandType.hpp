

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ObjectiveExecutionCommandType.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef ObjectiveExecutionCommandType_721374949_hpp
#define ObjectiveExecutionCommandType_721374949_hpp

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
namespace UMAA {
    namespace MM {
        namespace ObjectiveExecutionControl {

            static const std::string ObjectiveExecutionCommand_TOPIC = "UMAA::MM::ObjectiveExecutionControl::ObjectiveExecutionCommand";

            class NDDSUSERDllExport ObjectiveExecutionCommandType {
              public:
                ObjectiveExecutionCommandType();

                ObjectiveExecutionCommandType(const UMAA::Common::MaritimeEnumeration::TaskStateEnumType::TaskStateEnumType& state,const UMAA::Common::Measurement::NumericGUID& source,const UMAA::Common::Measurement::NumericGUID& destination,const UMAA::Common::Measurement::NumericGUID& sessionID,const UMAA::Common::Measurement::DateTime& timeStamp,const UMAA::Common::Measurement::NumericGUID& missionID,const UMAA::Common::Measurement::NumericGUID& objectiveID,const UMAA::Common::Measurement::NumericGUID& taskID);

                #ifdef RTI_CXX11_RVALUE_REFERENCES
                #ifndef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
                ObjectiveExecutionCommandType (ObjectiveExecutionCommandType&&) = default;
                ObjectiveExecutionCommandType& operator=(ObjectiveExecutionCommandType&&) = default;
                ObjectiveExecutionCommandType& operator=(const ObjectiveExecutionCommandType&) = default;
                ObjectiveExecutionCommandType(const ObjectiveExecutionCommandType&) = default;
                #else
                ObjectiveExecutionCommandType(ObjectiveExecutionCommandType&& other_) OMG_NOEXCEPT;  
                ObjectiveExecutionCommandType& operator=(ObjectiveExecutionCommandType&&  other_) OMG_NOEXCEPT;
                #endif
                #endif 

                UMAA::Common::MaritimeEnumeration::TaskStateEnumType::TaskStateEnumType& state() OMG_NOEXCEPT {
                    return m_state_;
                }

                const UMAA::Common::MaritimeEnumeration::TaskStateEnumType::TaskStateEnumType& state() const OMG_NOEXCEPT {
                    return m_state_;
                }

                void state(const UMAA::Common::MaritimeEnumeration::TaskStateEnumType::TaskStateEnumType& value) {
                    m_state_ = value;
                }

                void state(UMAA::Common::MaritimeEnumeration::TaskStateEnumType::TaskStateEnumType&& value) {
                    m_state_ = std::move(value);
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
                UMAA::Common::Measurement::NumericGUID& destination() OMG_NOEXCEPT {
                    return m_destination_;
                }

                const UMAA::Common::Measurement::NumericGUID& destination() const OMG_NOEXCEPT {
                    return m_destination_;
                }

                void destination(const UMAA::Common::Measurement::NumericGUID& value) {
                    m_destination_ = value;
                }

                void destination(UMAA::Common::Measurement::NumericGUID&& value) {
                    m_destination_ = std::move(value);
                }
                UMAA::Common::Measurement::NumericGUID& sessionID() OMG_NOEXCEPT {
                    return m_sessionID_;
                }

                const UMAA::Common::Measurement::NumericGUID& sessionID() const OMG_NOEXCEPT {
                    return m_sessionID_;
                }

                void sessionID(const UMAA::Common::Measurement::NumericGUID& value) {
                    m_sessionID_ = value;
                }

                void sessionID(UMAA::Common::Measurement::NumericGUID&& value) {
                    m_sessionID_ = std::move(value);
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
                UMAA::Common::Measurement::NumericGUID& missionID() OMG_NOEXCEPT {
                    return m_missionID_;
                }

                const UMAA::Common::Measurement::NumericGUID& missionID() const OMG_NOEXCEPT {
                    return m_missionID_;
                }

                void missionID(const UMAA::Common::Measurement::NumericGUID& value) {
                    m_missionID_ = value;
                }

                void missionID(UMAA::Common::Measurement::NumericGUID&& value) {
                    m_missionID_ = std::move(value);
                }
                UMAA::Common::Measurement::NumericGUID& objectiveID() OMG_NOEXCEPT {
                    return m_objectiveID_;
                }

                const UMAA::Common::Measurement::NumericGUID& objectiveID() const OMG_NOEXCEPT {
                    return m_objectiveID_;
                }

                void objectiveID(const UMAA::Common::Measurement::NumericGUID& value) {
                    m_objectiveID_ = value;
                }

                void objectiveID(UMAA::Common::Measurement::NumericGUID&& value) {
                    m_objectiveID_ = std::move(value);
                }
                UMAA::Common::Measurement::NumericGUID& taskID() OMG_NOEXCEPT {
                    return m_taskID_;
                }

                const UMAA::Common::Measurement::NumericGUID& taskID() const OMG_NOEXCEPT {
                    return m_taskID_;
                }

                void taskID(const UMAA::Common::Measurement::NumericGUID& value) {
                    m_taskID_ = value;
                }

                void taskID(UMAA::Common::Measurement::NumericGUID&& value) {
                    m_taskID_ = std::move(value);
                }

                bool operator == (const ObjectiveExecutionCommandType& other_) const;
                bool operator != (const ObjectiveExecutionCommandType& other_) const;

                void swap(ObjectiveExecutionCommandType& other_) OMG_NOEXCEPT ;

              private:

                UMAA::Common::MaritimeEnumeration::TaskStateEnumType::TaskStateEnumType m_state_;
                UMAA::Common::Measurement::NumericGUID m_source_;
                UMAA::Common::Measurement::NumericGUID m_destination_;
                UMAA::Common::Measurement::NumericGUID m_sessionID_;
                UMAA::Common::Measurement::DateTime m_timeStamp_;
                UMAA::Common::Measurement::NumericGUID m_missionID_;
                UMAA::Common::Measurement::NumericGUID m_objectiveID_;
                UMAA::Common::Measurement::NumericGUID m_taskID_;

            };

            inline void swap(ObjectiveExecutionCommandType& a, ObjectiveExecutionCommandType& b)  OMG_NOEXCEPT 
            {
                a.swap(b);
            }

            NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const ObjectiveExecutionCommandType& sample);

        } // namespace ObjectiveExecutionControl  
    } // namespace MM  
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
        struct topic_type_name< UMAA::MM::ObjectiveExecutionControl::ObjectiveExecutionCommandType > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::MM::ObjectiveExecutionControl::ObjectiveExecutionCommandType";
            }
        };

        template<>
        struct is_topic_type< UMAA::MM::ObjectiveExecutionControl::ObjectiveExecutionCommandType > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< UMAA::MM::ObjectiveExecutionControl::ObjectiveExecutionCommandType > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const UMAA::MM::ObjectiveExecutionControl::ObjectiveExecutionCommandType& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(UMAA::MM::ObjectiveExecutionControl::ObjectiveExecutionCommandType& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(UMAA::MM::ObjectiveExecutionControl::ObjectiveExecutionCommandType& sample);

            NDDSUSERDllExport 
            static void allocate_sample(UMAA::MM::ObjectiveExecutionControl::ObjectiveExecutionCommandType& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };

    }
}

namespace rti { 
    namespace topic {

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct dynamic_type< UMAA::MM::ObjectiveExecutionControl::ObjectiveExecutionCommandType > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };
        #endif

        template <>
        struct extensibility< UMAA::MM::ObjectiveExecutionControl::ObjectiveExecutionCommandType > {
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

#endif // ObjectiveExecutionCommandType_721374949_hpp

