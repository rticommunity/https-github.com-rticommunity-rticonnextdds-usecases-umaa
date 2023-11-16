

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from RecommendedSpeedControl.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef RecommendedSpeedControl_445356831_hpp
#define RecommendedSpeedControl_445356831_hpp

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
#include "UMAA/Common/Speed/SpeedControlType.hpp"
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif
namespace UMAA {
    namespace Common {
        namespace VariableSpeedControl {

            class NDDSUSERDllExport RecommendedSpeedControl {
              public:

                RecommendedSpeedControl();

                explicit RecommendedSpeedControl(const ::UMAA::Common::Speed::SpeedControlType& recommendedSpeedControl_);

                ::UMAA::Common::Speed::SpeedControlType& recommendedSpeedControl() noexcept {
                    return m_recommendedSpeedControl_;
                }

                const ::UMAA::Common::Speed::SpeedControlType& recommendedSpeedControl() const noexcept {
                    return m_recommendedSpeedControl_;
                }

                void recommendedSpeedControl(const ::UMAA::Common::Speed::SpeedControlType& value) {

                    m_recommendedSpeedControl_ = value;
                }

                void recommendedSpeedControl(::UMAA::Common::Speed::SpeedControlType&& value) {
                    m_recommendedSpeedControl_ = std::move(value);
                }
                bool operator == (const RecommendedSpeedControl& other_) const;
                bool operator != (const RecommendedSpeedControl& other_) const;

                void swap(RecommendedSpeedControl& other_) noexcept ;

              private:

                ::UMAA::Common::Speed::SpeedControlType m_recommendedSpeedControl_;

            };

            inline void swap(RecommendedSpeedControl& a, RecommendedSpeedControl& b)  noexcept 
            {
                a.swap(b);
            }

            NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const RecommendedSpeedControl& sample);

        } // namespace VariableSpeedControl  
    } // namespace Common  
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
        struct topic_type_name< ::UMAA::Common::VariableSpeedControl::RecommendedSpeedControl > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::Common::VariableSpeedControl::RecommendedSpeedControl";
            }
        };

        template<>
        struct is_topic_type< ::UMAA::Common::VariableSpeedControl::RecommendedSpeedControl > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< ::UMAA::Common::VariableSpeedControl::RecommendedSpeedControl > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const ::UMAA::Common::VariableSpeedControl::RecommendedSpeedControl& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(::UMAA::Common::VariableSpeedControl::RecommendedSpeedControl& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(::UMAA::Common::VariableSpeedControl::RecommendedSpeedControl& sample);

            NDDSUSERDllExport 
            static void allocate_sample(::UMAA::Common::VariableSpeedControl::RecommendedSpeedControl& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };
    }
}

namespace rti { 
    namespace topic {

        template<>
        struct dynamic_type< ::UMAA::Common::VariableSpeedControl::RecommendedSpeedControl > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };

        template <>
        struct extensibility< ::UMAA::Common::VariableSpeedControl::RecommendedSpeedControl > {
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

#endif // RecommendedSpeedControl_445356831_hpp

