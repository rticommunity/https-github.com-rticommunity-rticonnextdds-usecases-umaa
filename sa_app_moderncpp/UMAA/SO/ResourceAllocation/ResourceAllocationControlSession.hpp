

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ResourceAllocationControlSession.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef ResourceAllocationControlSession_1911695238_hpp
#define ResourceAllocationControlSession_1911695238_hpp

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

            class NDDSUSERDllExport ResourceAllocationControlSession {
              public:
                ResourceAllocationControlSession();

                ResourceAllocationControlSession(const UMAA::Common::Measurement::NumericGUID& controllingConsumer,const ::dds::core::optional< UMAA::Common::Measurement::DateTime >& endTime);

                #ifdef RTI_CXX11_RVALUE_REFERENCES
                #ifndef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
                ResourceAllocationControlSession (ResourceAllocationControlSession&&) = default;
                ResourceAllocationControlSession& operator=(ResourceAllocationControlSession&&) = default;
                ResourceAllocationControlSession& operator=(const ResourceAllocationControlSession&) = default;
                ResourceAllocationControlSession(const ResourceAllocationControlSession&) = default;
                #else
                ResourceAllocationControlSession(ResourceAllocationControlSession&& other_) OMG_NOEXCEPT;  
                ResourceAllocationControlSession& operator=(ResourceAllocationControlSession&&  other_) OMG_NOEXCEPT;
                #endif
                #endif 

                UMAA::Common::Measurement::NumericGUID& controllingConsumer() OMG_NOEXCEPT {
                    return m_controllingConsumer_;
                }

                const UMAA::Common::Measurement::NumericGUID& controllingConsumer() const OMG_NOEXCEPT {
                    return m_controllingConsumer_;
                }

                void controllingConsumer(const UMAA::Common::Measurement::NumericGUID& value) {
                    m_controllingConsumer_ = value;
                }

                void controllingConsumer(UMAA::Common::Measurement::NumericGUID&& value) {
                    m_controllingConsumer_ = std::move(value);
                }
                ::dds::core::optional< UMAA::Common::Measurement::DateTime >& endTime() OMG_NOEXCEPT {
                    return m_endTime_;
                }

                const ::dds::core::optional< UMAA::Common::Measurement::DateTime >& endTime() const OMG_NOEXCEPT {
                    return m_endTime_;
                }

                void endTime(const ::dds::core::optional< UMAA::Common::Measurement::DateTime >& value) {
                    m_endTime_ = value;
                }

                void endTime(::dds::core::optional< UMAA::Common::Measurement::DateTime >&& value) {
                    m_endTime_ = std::move(value);
                }

                bool operator == (const ResourceAllocationControlSession& other_) const;
                bool operator != (const ResourceAllocationControlSession& other_) const;

                void swap(ResourceAllocationControlSession& other_) OMG_NOEXCEPT ;

              private:

                UMAA::Common::Measurement::NumericGUID m_controllingConsumer_;
                ::dds::core::optional< UMAA::Common::Measurement::DateTime > m_endTime_;

            };

            inline void swap(ResourceAllocationControlSession& a, ResourceAllocationControlSession& b)  OMG_NOEXCEPT 
            {
                a.swap(b);
            }

            NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const ResourceAllocationControlSession& sample);

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
        struct topic_type_name< UMAA::SO::ResourceAllocation::ResourceAllocationControlSession > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::SO::ResourceAllocation::ResourceAllocationControlSession";
            }
        };

        template<>
        struct is_topic_type< UMAA::SO::ResourceAllocation::ResourceAllocationControlSession > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< UMAA::SO::ResourceAllocation::ResourceAllocationControlSession > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const UMAA::SO::ResourceAllocation::ResourceAllocationControlSession& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(UMAA::SO::ResourceAllocation::ResourceAllocationControlSession& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(UMAA::SO::ResourceAllocation::ResourceAllocationControlSession& sample);

            NDDSUSERDllExport 
            static void allocate_sample(UMAA::SO::ResourceAllocation::ResourceAllocationControlSession& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };

    }
}

namespace rti { 
    namespace topic {

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct dynamic_type< UMAA::SO::ResourceAllocation::ResourceAllocationControlSession > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };
        #endif

        template <>
        struct extensibility< UMAA::SO::ResourceAllocation::ResourceAllocationControlSession > {
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

#endif // ResourceAllocationControlSession_1911695238_hpp

