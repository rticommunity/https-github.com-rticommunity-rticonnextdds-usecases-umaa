

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ResourceAllocationCommandReportType.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef ResourceAllocationCommandReportType_196787941_hpp
#define ResourceAllocationCommandReportType_196787941_hpp

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
    namespace SO {
        namespace ResourceAllocation {

            static const std::string ResourceAllocationCommandReport_TOPIC = "UMAA::SO::ResourceAllocation::ResourceAllocationCommandReport";

            class NDDSUSERDllExport ResourceAllocationCommandReportType {
              public:
                ResourceAllocationCommandReportType();

                ResourceAllocationCommandReportType(const ::dds::core::optional< double >& duration,const UMAA::Common::Measurement::NumericGUID& source,const UMAA::Common::Measurement::DateTime& timeStamp,const UMAA::Common::Measurement::NumericGUID& resourceId);

                #ifdef RTI_CXX11_RVALUE_REFERENCES
                #ifndef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
                ResourceAllocationCommandReportType (ResourceAllocationCommandReportType&&) = default;
                ResourceAllocationCommandReportType& operator=(ResourceAllocationCommandReportType&&) = default;
                ResourceAllocationCommandReportType& operator=(const ResourceAllocationCommandReportType&) = default;
                ResourceAllocationCommandReportType(const ResourceAllocationCommandReportType&) = default;
                #else
                ResourceAllocationCommandReportType(ResourceAllocationCommandReportType&& other_) OMG_NOEXCEPT;  
                ResourceAllocationCommandReportType& operator=(ResourceAllocationCommandReportType&&  other_) OMG_NOEXCEPT;
                #endif
                #endif 

                ::dds::core::optional< double >& duration() OMG_NOEXCEPT {
                    return m_duration_;
                }

                const ::dds::core::optional< double >& duration() const OMG_NOEXCEPT {
                    return m_duration_;
                }

                void duration(const ::dds::core::optional< double >& value) {
                    m_duration_ = value;
                }

                void duration(::dds::core::optional< double >&& value) {
                    m_duration_ = std::move(value);
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
                UMAA::Common::Measurement::NumericGUID& resourceId() OMG_NOEXCEPT {
                    return m_resourceId_;
                }

                const UMAA::Common::Measurement::NumericGUID& resourceId() const OMG_NOEXCEPT {
                    return m_resourceId_;
                }

                void resourceId(const UMAA::Common::Measurement::NumericGUID& value) {
                    m_resourceId_ = value;
                }

                void resourceId(UMAA::Common::Measurement::NumericGUID&& value) {
                    m_resourceId_ = std::move(value);
                }

                bool operator == (const ResourceAllocationCommandReportType& other_) const;
                bool operator != (const ResourceAllocationCommandReportType& other_) const;

                void swap(ResourceAllocationCommandReportType& other_) OMG_NOEXCEPT ;

              private:

                ::dds::core::optional< double > m_duration_;
                UMAA::Common::Measurement::NumericGUID m_source_;
                UMAA::Common::Measurement::DateTime m_timeStamp_;
                UMAA::Common::Measurement::NumericGUID m_resourceId_;

            };

            inline void swap(ResourceAllocationCommandReportType& a, ResourceAllocationCommandReportType& b)  OMG_NOEXCEPT 
            {
                a.swap(b);
            }

            NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const ResourceAllocationCommandReportType& sample);

        } // namespace ResourceAllocation  
    } // namespace SO  
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
        struct topic_type_name< UMAA::SO::ResourceAllocation::ResourceAllocationCommandReportType > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::SO::ResourceAllocation::ResourceAllocationCommandReportType";
            }
        };

        template<>
        struct is_topic_type< UMAA::SO::ResourceAllocation::ResourceAllocationCommandReportType > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< UMAA::SO::ResourceAllocation::ResourceAllocationCommandReportType > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const UMAA::SO::ResourceAllocation::ResourceAllocationCommandReportType& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(UMAA::SO::ResourceAllocation::ResourceAllocationCommandReportType& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(UMAA::SO::ResourceAllocation::ResourceAllocationCommandReportType& sample);

            NDDSUSERDllExport 
            static void allocate_sample(UMAA::SO::ResourceAllocation::ResourceAllocationCommandReportType& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };

    }
}

namespace rti { 
    namespace topic {

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct dynamic_type< UMAA::SO::ResourceAllocation::ResourceAllocationCommandReportType > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };
        #endif

        template <>
        struct extensibility< UMAA::SO::ResourceAllocation::ResourceAllocationCommandReportType > {
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

#endif // ResourceAllocationCommandReportType_196787941_hpp

