

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from TaskPlanType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef TaskPlanType_1877394031_hpp
#define TaskPlanType_1877394031_hpp

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
#include "UMAA/Common/Measurement/DateTime_Tolerance.hpp"
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
#include "UMAA/MM/BaseType/ObjectiveType.hpp"
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
        namespace BaseType {

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            // On Windows, dll-export template instantiations of standard types used by
            // other dll-exported types
            template class NDDSUSERDllExport std::allocator< ::UMAA::Common::Measurement::NumericGUID >;
            template class NDDSUSERDllExport std::vector< ::UMAA::Common::Measurement::NumericGUID >;
            template class NDDSUSERDllExport std::allocator< ::UMAA::MM::BaseType::ObjectiveType >;
            template class NDDSUSERDllExport std::vector< ::UMAA::MM::BaseType::ObjectiveType >;
            #endif
            class NDDSUSERDllExport TaskPlanType {
              public:

                TaskPlanType();

                TaskPlanType(const ::rti::core::bounded_sequence< ::UMAA::Common::Measurement::NumericGUID, 100L >& dependentTaskIDs_,const ::UMAA::Common::Measurement::DateTime& endTime_,const ::dds::core::optional< ::UMAA::Common::Measurement::DateTime_Tolerance >& endTimeTolerance_,const std::string& name_,const ::rti::core::bounded_sequence< ::UMAA::MM::BaseType::ObjectiveType, 100L >& objectives_,const ::UMAA::Common::Measurement::DateTime& startTime_,const ::dds::core::optional< ::UMAA::Common::Measurement::DateTime_Tolerance >& startTimeTolerance_,const ::UMAA::Common::Measurement::NumericGUID& taskID_);

                ::rti::core::bounded_sequence< ::UMAA::Common::Measurement::NumericGUID, 100L >& dependentTaskIDs() noexcept {
                    return m_dependentTaskIDs_;
                }

                const ::rti::core::bounded_sequence< ::UMAA::Common::Measurement::NumericGUID, 100L >& dependentTaskIDs() const noexcept {
                    return m_dependentTaskIDs_;
                }

                void dependentTaskIDs(const ::rti::core::bounded_sequence< ::UMAA::Common::Measurement::NumericGUID, 100L >& value) {

                    m_dependentTaskIDs_ = value;
                }

                void dependentTaskIDs(::rti::core::bounded_sequence< ::UMAA::Common::Measurement::NumericGUID, 100L >&& value) {
                    m_dependentTaskIDs_ = std::move(value);
                }
                ::UMAA::Common::Measurement::DateTime& endTime() noexcept {
                    return m_endTime_;
                }

                const ::UMAA::Common::Measurement::DateTime& endTime() const noexcept {
                    return m_endTime_;
                }

                void endTime(const ::UMAA::Common::Measurement::DateTime& value) {

                    m_endTime_ = value;
                }

                void endTime(::UMAA::Common::Measurement::DateTime&& value) {
                    m_endTime_ = std::move(value);
                }
                ::dds::core::optional< ::UMAA::Common::Measurement::DateTime_Tolerance >& endTimeTolerance() noexcept {
                    return m_endTimeTolerance_;
                }

                const ::dds::core::optional< ::UMAA::Common::Measurement::DateTime_Tolerance >& endTimeTolerance() const noexcept {
                    return m_endTimeTolerance_;
                }

                void endTimeTolerance(const ::dds::core::optional< ::UMAA::Common::Measurement::DateTime_Tolerance >& value) {

                    m_endTimeTolerance_ = value;
                }

                void endTimeTolerance(::dds::core::optional< ::UMAA::Common::Measurement::DateTime_Tolerance >&& value) {
                    m_endTimeTolerance_ = std::move(value);
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
                ::rti::core::bounded_sequence< ::UMAA::MM::BaseType::ObjectiveType, 100L >& objectives() noexcept {
                    return m_objectives_;
                }

                const ::rti::core::bounded_sequence< ::UMAA::MM::BaseType::ObjectiveType, 100L >& objectives() const noexcept {
                    return m_objectives_;
                }

                void objectives(const ::rti::core::bounded_sequence< ::UMAA::MM::BaseType::ObjectiveType, 100L >& value) {

                    m_objectives_ = value;
                }

                void objectives(::rti::core::bounded_sequence< ::UMAA::MM::BaseType::ObjectiveType, 100L >&& value) {
                    m_objectives_ = std::move(value);
                }
                ::UMAA::Common::Measurement::DateTime& startTime() noexcept {
                    return m_startTime_;
                }

                const ::UMAA::Common::Measurement::DateTime& startTime() const noexcept {
                    return m_startTime_;
                }

                void startTime(const ::UMAA::Common::Measurement::DateTime& value) {

                    m_startTime_ = value;
                }

                void startTime(::UMAA::Common::Measurement::DateTime&& value) {
                    m_startTime_ = std::move(value);
                }
                ::dds::core::optional< ::UMAA::Common::Measurement::DateTime_Tolerance >& startTimeTolerance() noexcept {
                    return m_startTimeTolerance_;
                }

                const ::dds::core::optional< ::UMAA::Common::Measurement::DateTime_Tolerance >& startTimeTolerance() const noexcept {
                    return m_startTimeTolerance_;
                }

                void startTimeTolerance(const ::dds::core::optional< ::UMAA::Common::Measurement::DateTime_Tolerance >& value) {

                    m_startTimeTolerance_ = value;
                }

                void startTimeTolerance(::dds::core::optional< ::UMAA::Common::Measurement::DateTime_Tolerance >&& value) {
                    m_startTimeTolerance_ = std::move(value);
                }
                ::UMAA::Common::Measurement::NumericGUID& taskID() noexcept {
                    return m_taskID_;
                }

                const ::UMAA::Common::Measurement::NumericGUID& taskID() const noexcept {
                    return m_taskID_;
                }

                void taskID(const ::UMAA::Common::Measurement::NumericGUID& value) {

                    m_taskID_ = value;
                }

                void taskID(::UMAA::Common::Measurement::NumericGUID&& value) {
                    m_taskID_ = std::move(value);
                }
                bool operator == (const TaskPlanType& other_) const;
                bool operator != (const TaskPlanType& other_) const;

                void swap(TaskPlanType& other_) noexcept ;

              private:

                ::rti::core::bounded_sequence< ::UMAA::Common::Measurement::NumericGUID, 100L > m_dependentTaskIDs_;
                ::UMAA::Common::Measurement::DateTime m_endTime_;
                ::dds::core::optional< ::UMAA::Common::Measurement::DateTime_Tolerance > m_endTimeTolerance_;
                std::string m_name_;
                ::rti::core::bounded_sequence< ::UMAA::MM::BaseType::ObjectiveType, 100L > m_objectives_;
                ::UMAA::Common::Measurement::DateTime m_startTime_;
                ::dds::core::optional< ::UMAA::Common::Measurement::DateTime_Tolerance > m_startTimeTolerance_;
                ::UMAA::Common::Measurement::NumericGUID m_taskID_ {};

            };

            inline void swap(TaskPlanType& a, TaskPlanType& b)  noexcept 
            {
                a.swap(b);
            }

            NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const TaskPlanType& sample);

        } // namespace BaseType  
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
        struct topic_type_name< ::UMAA::MM::BaseType::TaskPlanType > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::MM::BaseType::TaskPlanType";
            }
        };

        template<>
        struct is_topic_type< ::UMAA::MM::BaseType::TaskPlanType > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< ::UMAA::MM::BaseType::TaskPlanType > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const ::UMAA::MM::BaseType::TaskPlanType& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(::UMAA::MM::BaseType::TaskPlanType& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(::UMAA::MM::BaseType::TaskPlanType& sample);

            NDDSUSERDllExport 
            static void allocate_sample(::UMAA::MM::BaseType::TaskPlanType& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };
    }
}

namespace rti { 
    namespace topic {

        template<>
        struct dynamic_type< ::UMAA::MM::BaseType::TaskPlanType > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };

        template <>
        struct extensibility< ::UMAA::MM::BaseType::TaskPlanType > {
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

#endif // TaskPlanType_1877394031_hpp

