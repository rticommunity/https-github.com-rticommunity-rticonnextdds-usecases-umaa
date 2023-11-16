

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from LocalRegularPolygonTransitTypeType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef LocalRegularPolygonTransitTypeType_845881518_hpp
#define LocalRegularPolygonTransitTypeType_845881518_hpp

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
#include "UMAA/Common/Enumeration/EnumerationSets.hpp"
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif
namespace UMAA {
    namespace MO {
        namespace LocalRegularPolygonState {

            class NDDSUSERDllExport LocalRegularPolygonTransitTypeType {
              public:

                LocalRegularPolygonTransitTypeType();

                LocalRegularPolygonTransitTypeType(bool transitElevationAchieved_,bool transitSpeedAchieved_);

                bool& transitElevationAchieved() noexcept {
                    return m_transitElevationAchieved_;
                }

                const bool& transitElevationAchieved() const noexcept {
                    return m_transitElevationAchieved_;
                }

                void transitElevationAchieved(bool value) {

                    m_transitElevationAchieved_ = value;
                }

                bool& transitSpeedAchieved() noexcept {
                    return m_transitSpeedAchieved_;
                }

                const bool& transitSpeedAchieved() const noexcept {
                    return m_transitSpeedAchieved_;
                }

                void transitSpeedAchieved(bool value) {

                    m_transitSpeedAchieved_ = value;
                }

                bool operator == (const LocalRegularPolygonTransitTypeType& other_) const;
                bool operator != (const LocalRegularPolygonTransitTypeType& other_) const;

                void swap(LocalRegularPolygonTransitTypeType& other_) noexcept ;

              private:

                bool m_transitElevationAchieved_;
                bool m_transitSpeedAchieved_;

            };

            inline void swap(LocalRegularPolygonTransitTypeType& a, LocalRegularPolygonTransitTypeType& b)  noexcept 
            {
                a.swap(b);
            }

            NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const LocalRegularPolygonTransitTypeType& sample);

        } // namespace LocalRegularPolygonState  
    } // namespace MO  
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
        struct topic_type_name< ::UMAA::MO::LocalRegularPolygonState::LocalRegularPolygonTransitTypeType > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::MO::LocalRegularPolygonState::LocalRegularPolygonTransitTypeType";
            }
        };

        template<>
        struct is_topic_type< ::UMAA::MO::LocalRegularPolygonState::LocalRegularPolygonTransitTypeType > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< ::UMAA::MO::LocalRegularPolygonState::LocalRegularPolygonTransitTypeType > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const ::UMAA::MO::LocalRegularPolygonState::LocalRegularPolygonTransitTypeType& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(::UMAA::MO::LocalRegularPolygonState::LocalRegularPolygonTransitTypeType& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(::UMAA::MO::LocalRegularPolygonState::LocalRegularPolygonTransitTypeType& sample);

            NDDSUSERDllExport 
            static void allocate_sample(::UMAA::MO::LocalRegularPolygonState::LocalRegularPolygonTransitTypeType& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };
    }
}

namespace rti { 
    namespace topic {

        template<>
        struct dynamic_type< ::UMAA::MO::LocalRegularPolygonState::LocalRegularPolygonTransitTypeType > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };

        template <>
        struct extensibility< ::UMAA::MO::LocalRegularPolygonState::LocalRegularPolygonTransitTypeType > {
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

#endif // LocalRegularPolygonTransitTypeType_845881518_hpp

