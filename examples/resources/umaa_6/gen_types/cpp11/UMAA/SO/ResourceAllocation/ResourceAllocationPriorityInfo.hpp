

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ResourceAllocationPriorityInfo.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef ResourceAllocationPriorityInfo_2029097673_hpp
#define ResourceAllocationPriorityInfo_2029097673_hpp

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
namespace UMAA {
    namespace SO {
        namespace ResourceAllocation {

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            // On Windows, dll-export template instantiations of standard types used by
            // other dll-exported types
            template class NDDSUSERDllExport std::allocator< ::UMAA::Common::IdentifierType >;
            template class NDDSUSERDllExport std::vector< ::UMAA::Common::IdentifierType >;
            #endif
            class NDDSUSERDllExport ResourceAllocationPriorityInfo {
              public:

                ResourceAllocationPriorityInfo();

                ResourceAllocationPriorityInfo(const ::rti::core::bounded_sequence< ::UMAA::Common::IdentifierType, 64L >& priorities_,const ::UMAA::Common::IdentifierType& resourceID_);

                ::rti::core::bounded_sequence< ::UMAA::Common::IdentifierType, 64L >& priorities() noexcept {
                    return m_priorities_;
                }

                const ::rti::core::bounded_sequence< ::UMAA::Common::IdentifierType, 64L >& priorities() const noexcept {
                    return m_priorities_;
                }

                void priorities(const ::rti::core::bounded_sequence< ::UMAA::Common::IdentifierType, 64L >& value) {

                    m_priorities_ = value;
                }

                void priorities(::rti::core::bounded_sequence< ::UMAA::Common::IdentifierType, 64L >&& value) {
                    m_priorities_ = std::move(value);
                }
                ::UMAA::Common::IdentifierType& resourceID() noexcept {
                    return m_resourceID_;
                }

                const ::UMAA::Common::IdentifierType& resourceID() const noexcept {
                    return m_resourceID_;
                }

                void resourceID(const ::UMAA::Common::IdentifierType& value) {

                    m_resourceID_ = value;
                }

                void resourceID(::UMAA::Common::IdentifierType&& value) {
                    m_resourceID_ = std::move(value);
                }
                bool operator == (const ResourceAllocationPriorityInfo& other_) const;
                bool operator != (const ResourceAllocationPriorityInfo& other_) const;

                void swap(ResourceAllocationPriorityInfo& other_) noexcept ;

              private:

                ::rti::core::bounded_sequence< ::UMAA::Common::IdentifierType, 64L > m_priorities_;
                ::UMAA::Common::IdentifierType m_resourceID_;

            };

            inline void swap(ResourceAllocationPriorityInfo& a, ResourceAllocationPriorityInfo& b)  noexcept 
            {
                a.swap(b);
            }

            NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const ResourceAllocationPriorityInfo& sample);

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
        struct topic_type_name< ::UMAA::SO::ResourceAllocation::ResourceAllocationPriorityInfo > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::SO::ResourceAllocation::ResourceAllocationPriorityInfo";
            }
        };

        template<>
        struct topic_type_support< ::UMAA::SO::ResourceAllocation::ResourceAllocationPriorityInfo > {
            NDDSUSERDllExport 
            static void reset_sample(::UMAA::SO::ResourceAllocation::ResourceAllocationPriorityInfo& sample);

            NDDSUSERDllExport 
            static void allocate_sample(::UMAA::SO::ResourceAllocation::ResourceAllocationPriorityInfo& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };
    }
}

namespace rti { 
    namespace topic {

        template<>
        struct dynamic_type< ::UMAA::SO::ResourceAllocation::ResourceAllocationPriorityInfo > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };

        template <>
        struct extensibility< ::UMAA::SO::ResourceAllocation::ResourceAllocationPriorityInfo > {
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

#endif // ResourceAllocationPriorityInfo_2029097673_hpp

