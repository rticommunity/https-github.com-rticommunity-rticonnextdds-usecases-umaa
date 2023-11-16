

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from GlobalRacetrackPatternType.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef GlobalRacetrackPatternType_365085027_hpp
#define GlobalRacetrackPatternType_365085027_hpp

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
        namespace GlobalRacetrackState {

            class NDDSUSERDllExport GlobalRacetrackPatternType {
              public:
                GlobalRacetrackPatternType();

                GlobalRacetrackPatternType(bool elevationAchieved,bool positionAchieved,bool speedAchieved);

                #ifdef RTI_CXX11_RVALUE_REFERENCES
                #ifndef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
                GlobalRacetrackPatternType (GlobalRacetrackPatternType&&) = default;
                GlobalRacetrackPatternType& operator=(GlobalRacetrackPatternType&&) = default;
                GlobalRacetrackPatternType& operator=(const GlobalRacetrackPatternType&) = default;
                GlobalRacetrackPatternType(const GlobalRacetrackPatternType&) = default;
                #else
                GlobalRacetrackPatternType(GlobalRacetrackPatternType&& other_) OMG_NOEXCEPT;  
                GlobalRacetrackPatternType& operator=(GlobalRacetrackPatternType&&  other_) OMG_NOEXCEPT;
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

                bool& positionAchieved() OMG_NOEXCEPT {
                    return m_positionAchieved_;
                }

                const bool& positionAchieved() const OMG_NOEXCEPT {
                    return m_positionAchieved_;
                }

                void positionAchieved(bool value) {
                    m_positionAchieved_ = value;
                }

                bool& speedAchieved() OMG_NOEXCEPT {
                    return m_speedAchieved_;
                }

                const bool& speedAchieved() const OMG_NOEXCEPT {
                    return m_speedAchieved_;
                }

                void speedAchieved(bool value) {
                    m_speedAchieved_ = value;
                }

                bool operator == (const GlobalRacetrackPatternType& other_) const;
                bool operator != (const GlobalRacetrackPatternType& other_) const;

                void swap(GlobalRacetrackPatternType& other_) OMG_NOEXCEPT ;

              private:

                bool m_elevationAchieved_;
                bool m_positionAchieved_;
                bool m_speedAchieved_;

            };

            inline void swap(GlobalRacetrackPatternType& a, GlobalRacetrackPatternType& b)  OMG_NOEXCEPT 
            {
                a.swap(b);
            }

            NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const GlobalRacetrackPatternType& sample);

        } // namespace GlobalRacetrackState  
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
        struct topic_type_name< UMAA::MO::GlobalRacetrackState::GlobalRacetrackPatternType > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::MO::GlobalRacetrackState::GlobalRacetrackPatternType";
            }
        };

        template<>
        struct is_topic_type< UMAA::MO::GlobalRacetrackState::GlobalRacetrackPatternType > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< UMAA::MO::GlobalRacetrackState::GlobalRacetrackPatternType > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const UMAA::MO::GlobalRacetrackState::GlobalRacetrackPatternType& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(UMAA::MO::GlobalRacetrackState::GlobalRacetrackPatternType& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(UMAA::MO::GlobalRacetrackState::GlobalRacetrackPatternType& sample);

            NDDSUSERDllExport 
            static void allocate_sample(UMAA::MO::GlobalRacetrackState::GlobalRacetrackPatternType& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };

    }
}

namespace rti { 
    namespace topic {

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct dynamic_type< UMAA::MO::GlobalRacetrackState::GlobalRacetrackPatternType > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };
        #endif

        template <>
        struct extensibility< UMAA::MO::GlobalRacetrackState::GlobalRacetrackPatternType > {
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

#endif // GlobalRacetrackPatternType_365085027_hpp

