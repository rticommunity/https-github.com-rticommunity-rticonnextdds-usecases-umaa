

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ResourceAllocationCommandType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef ResourceAllocationCommandType_174023919_hpp
#define ResourceAllocationCommandType_174023919_hpp

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
    namespace SO {
        namespace ResourceAllocation {

            RTI_CONSTEXPR_OR_CONST_STRING std::string ResourceAllocationCommand_TOPIC = "UMAA::SO::ResourceAllocation::ResourceAllocationCommand";

            class NDDSUSERDllExport ResourceAllocationCommandType {
              public:

                ResourceAllocationCommandType();

                ResourceAllocationCommandType(const ::dds::core::optional< double >& duration_,const ::UMAA::Common::Measurement::NumericGUID& source_,const ::UMAA::Common::Measurement::NumericGUID& destination_,const ::UMAA::Common::Measurement::NumericGUID& sessionID_,const ::UMAA::Common::Measurement::DateTime& timeStamp_,const ::UMAA::Common::Measurement::NumericGUID& resourceId_);

                ::dds::core::optional< double >& duration() noexcept {
                    return m_duration_;
                }

                const ::dds::core::optional< double >& duration() const noexcept {
                    return m_duration_;
                }

                void duration(const ::dds::core::optional< double >& value) {

                    m_duration_ = value;
                }

                void duration(::dds::core::optional< double >&& value) {
                    m_duration_ = std::move(value);
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
                ::UMAA::Common::Measurement::NumericGUID& destination() noexcept {
                    return m_destination_;
                }

                const ::UMAA::Common::Measurement::NumericGUID& destination() const noexcept {
                    return m_destination_;
                }

                void destination(const ::UMAA::Common::Measurement::NumericGUID& value) {

                    m_destination_ = value;
                }

                void destination(::UMAA::Common::Measurement::NumericGUID&& value) {
                    m_destination_ = std::move(value);
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
                ::UMAA::Common::Measurement::NumericGUID& resourceId() noexcept {
                    return m_resourceId_;
                }

                const ::UMAA::Common::Measurement::NumericGUID& resourceId() const noexcept {
                    return m_resourceId_;
                }

                void resourceId(const ::UMAA::Common::Measurement::NumericGUID& value) {

                    m_resourceId_ = value;
                }

                void resourceId(::UMAA::Common::Measurement::NumericGUID&& value) {
                    m_resourceId_ = std::move(value);
                }
                bool operator == (const ResourceAllocationCommandType& other_) const;
                bool operator != (const ResourceAllocationCommandType& other_) const;

                void swap(ResourceAllocationCommandType& other_) noexcept ;

              private:

                ::dds::core::optional< double > m_duration_;
                ::UMAA::Common::Measurement::NumericGUID m_source_ {};
                ::UMAA::Common::Measurement::NumericGUID m_destination_ {};
                ::UMAA::Common::Measurement::NumericGUID m_sessionID_ {};
                ::UMAA::Common::Measurement::DateTime m_timeStamp_;
                ::UMAA::Common::Measurement::NumericGUID m_resourceId_ {};

            };

            inline void swap(ResourceAllocationCommandType& a, ResourceAllocationCommandType& b)  noexcept 
            {
                a.swap(b);
            }

            NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const ResourceAllocationCommandType& sample);

        } // namespace ResourceAllocation  
    } // namespace SO  
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
        struct topic_type_name< ::UMAA::SO::ResourceAllocation::ResourceAllocationCommandType > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::SO::ResourceAllocation::ResourceAllocationCommandType";
            }
        };

        template<>
        struct is_topic_type< ::UMAA::SO::ResourceAllocation::ResourceAllocationCommandType > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< ::UMAA::SO::ResourceAllocation::ResourceAllocationCommandType > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const ::UMAA::SO::ResourceAllocation::ResourceAllocationCommandType& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(::UMAA::SO::ResourceAllocation::ResourceAllocationCommandType& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(::UMAA::SO::ResourceAllocation::ResourceAllocationCommandType& sample);

            NDDSUSERDllExport 
            static void allocate_sample(::UMAA::SO::ResourceAllocation::ResourceAllocationCommandType& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };
    }
}

namespace rti { 
    namespace topic {

        template<>
        struct dynamic_type< ::UMAA::SO::ResourceAllocation::ResourceAllocationCommandType > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };

        template <>
        struct extensibility< ::UMAA::SO::ResourceAllocation::ResourceAllocationCommandType > {
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

#endif // ResourceAllocationCommandType_174023919_hpp

