

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from RetrotraversePolicyType.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef RetrotraversePolicyType_2092785694_hpp
#define RetrotraversePolicyType_2092785694_hpp

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
#include "UMAA/MM/BaseType/WaypointType.hpp"
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
#include "UMAA/MM/Retrotraverse/RetrotraverseType.hpp"
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif
namespace UMAA {
    namespace MM {
        namespace CommsLostPolicy {

            class NDDSUSERDllExport RetrotraversePolicyType {
              public:
                RetrotraversePolicyType();

                RetrotraversePolicyType(const UMAA::MM::Retrotraverse::RetrotraverseType& retrotraversePolicy,const ::dds::core::optional< UMAA::MM::BaseType::WaypointType >& waypointPolicy);

                #ifdef RTI_CXX11_RVALUE_REFERENCES
                #ifndef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
                RetrotraversePolicyType (RetrotraversePolicyType&&) = default;
                RetrotraversePolicyType& operator=(RetrotraversePolicyType&&) = default;
                RetrotraversePolicyType& operator=(const RetrotraversePolicyType&) = default;
                RetrotraversePolicyType(const RetrotraversePolicyType&) = default;
                #else
                RetrotraversePolicyType(RetrotraversePolicyType&& other_) OMG_NOEXCEPT;  
                RetrotraversePolicyType& operator=(RetrotraversePolicyType&&  other_) OMG_NOEXCEPT;
                #endif
                #endif 

                UMAA::MM::Retrotraverse::RetrotraverseType& retrotraversePolicy() OMG_NOEXCEPT {
                    return m_retrotraversePolicy_;
                }

                const UMAA::MM::Retrotraverse::RetrotraverseType& retrotraversePolicy() const OMG_NOEXCEPT {
                    return m_retrotraversePolicy_;
                }

                void retrotraversePolicy(const UMAA::MM::Retrotraverse::RetrotraverseType& value) {
                    m_retrotraversePolicy_ = value;
                }

                void retrotraversePolicy(UMAA::MM::Retrotraverse::RetrotraverseType&& value) {
                    m_retrotraversePolicy_ = std::move(value);
                }
                ::dds::core::optional< UMAA::MM::BaseType::WaypointType >& waypointPolicy() OMG_NOEXCEPT {
                    return m_waypointPolicy_;
                }

                const ::dds::core::optional< UMAA::MM::BaseType::WaypointType >& waypointPolicy() const OMG_NOEXCEPT {
                    return m_waypointPolicy_;
                }

                void waypointPolicy(const ::dds::core::optional< UMAA::MM::BaseType::WaypointType >& value) {
                    m_waypointPolicy_ = value;
                }

                void waypointPolicy(::dds::core::optional< UMAA::MM::BaseType::WaypointType >&& value) {
                    m_waypointPolicy_ = std::move(value);
                }

                bool operator == (const RetrotraversePolicyType& other_) const;
                bool operator != (const RetrotraversePolicyType& other_) const;

                void swap(RetrotraversePolicyType& other_) OMG_NOEXCEPT ;

              private:

                UMAA::MM::Retrotraverse::RetrotraverseType m_retrotraversePolicy_;
                ::dds::core::optional< UMAA::MM::BaseType::WaypointType > m_waypointPolicy_;

            };

            inline void swap(RetrotraversePolicyType& a, RetrotraversePolicyType& b)  OMG_NOEXCEPT 
            {
                a.swap(b);
            }

            NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const RetrotraversePolicyType& sample);

        } // namespace CommsLostPolicy  
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
        struct topic_type_name< UMAA::MM::CommsLostPolicy::RetrotraversePolicyType > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::MM::CommsLostPolicy::RetrotraversePolicyType";
            }
        };

        template<>
        struct is_topic_type< UMAA::MM::CommsLostPolicy::RetrotraversePolicyType > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< UMAA::MM::CommsLostPolicy::RetrotraversePolicyType > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const UMAA::MM::CommsLostPolicy::RetrotraversePolicyType& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(UMAA::MM::CommsLostPolicy::RetrotraversePolicyType& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(UMAA::MM::CommsLostPolicy::RetrotraversePolicyType& sample);

            NDDSUSERDllExport 
            static void allocate_sample(UMAA::MM::CommsLostPolicy::RetrotraversePolicyType& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };

    }
}

namespace rti { 
    namespace topic {

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct dynamic_type< UMAA::MM::CommsLostPolicy::RetrotraversePolicyType > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };
        #endif

        template <>
        struct extensibility< UMAA::MM::CommsLostPolicy::RetrotraversePolicyType > {
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

#endif // RetrotraversePolicyType_2092785694_hpp

