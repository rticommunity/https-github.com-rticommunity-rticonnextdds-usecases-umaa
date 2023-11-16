

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from LocalHoveringHoverType.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef LocalHoveringHoverType_1077787621_hpp
#define LocalHoveringHoverType_1077787621_hpp

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
#include "UMAA/Common/Enumeration/EnumerationSets.hpp"
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif
namespace UMAA {
    namespace MO {
        namespace LocalHoverState {

            class NDDSUSERDllExport LocalHoveringHoverType {
              public:
                LocalHoveringHoverType();

                LocalHoveringHoverType(bool elevationAchieved,bool headingAchieved,bool positionAchieved);

                #ifdef RTI_CXX11_RVALUE_REFERENCES
                #ifndef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
                LocalHoveringHoverType (LocalHoveringHoverType&&) = default;
                LocalHoveringHoverType& operator=(LocalHoveringHoverType&&) = default;
                LocalHoveringHoverType& operator=(const LocalHoveringHoverType&) = default;
                LocalHoveringHoverType(const LocalHoveringHoverType&) = default;
                #else
                LocalHoveringHoverType(LocalHoveringHoverType&& other_) OMG_NOEXCEPT;  
                LocalHoveringHoverType& operator=(LocalHoveringHoverType&&  other_) OMG_NOEXCEPT;
                #endif
                #endif 

                bool& elevationAchieved() OMG_NOEXCEPT {
                    return m_elevationAchieved_;
                }

                const bool& elevationAchieved() const OMG_NOEXCEPT {
                    return m_elevationAchieved_;
                }

                void elevationAchieved(bool value) {
                    m_elevationAchieved_ = value;
                }

                bool& headingAchieved() OMG_NOEXCEPT {
                    return m_headingAchieved_;
                }

                const bool& headingAchieved() const OMG_NOEXCEPT {
                    return m_headingAchieved_;
                }

                void headingAchieved(bool value) {
                    m_headingAchieved_ = value;
                }

                bool& positionAchieved() OMG_NOEXCEPT {
                    return m_positionAchieved_;
                }

                const bool& positionAchieved() const OMG_NOEXCEPT {
                    return m_positionAchieved_;
                }

                void positionAchieved(bool value) {
                    m_positionAchieved_ = value;
                }

                bool operator == (const LocalHoveringHoverType& other_) const;
                bool operator != (const LocalHoveringHoverType& other_) const;

                void swap(LocalHoveringHoverType& other_) OMG_NOEXCEPT ;

              private:

                bool m_elevationAchieved_;
                bool m_headingAchieved_;
                bool m_positionAchieved_;

            };

            inline void swap(LocalHoveringHoverType& a, LocalHoveringHoverType& b)  OMG_NOEXCEPT 
            {
                a.swap(b);
            }

            NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const LocalHoveringHoverType& sample);

        } // namespace LocalHoverState  
    } // namespace MO  
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
        struct topic_type_name< UMAA::MO::LocalHoverState::LocalHoveringHoverType > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::MO::LocalHoverState::LocalHoveringHoverType";
            }
        };

        template<>
        struct is_topic_type< UMAA::MO::LocalHoverState::LocalHoveringHoverType > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< UMAA::MO::LocalHoverState::LocalHoveringHoverType > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const UMAA::MO::LocalHoverState::LocalHoveringHoverType& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(UMAA::MO::LocalHoverState::LocalHoveringHoverType& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(UMAA::MO::LocalHoverState::LocalHoveringHoverType& sample);

            NDDSUSERDllExport 
            static void allocate_sample(UMAA::MO::LocalHoverState::LocalHoveringHoverType& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };

    }
}

namespace rti { 
    namespace topic {

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct dynamic_type< UMAA::MO::LocalHoverState::LocalHoveringHoverType > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };
        #endif

        template <>
        struct extensibility< UMAA::MO::LocalHoverState::LocalHoveringHoverType > {
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

#endif // LocalHoveringHoverType_1077787621_hpp

