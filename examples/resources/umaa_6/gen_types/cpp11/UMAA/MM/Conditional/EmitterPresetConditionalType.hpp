

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from EmitterPresetConditionalType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef EmitterPresetConditionalType_2000562673_hpp
#define EmitterPresetConditionalType_2000562673_hpp

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
namespace UMAA {
    namespace MM {
        namespace Conditional {

            static const std::string EmitterPresetConditionalTypeTopic = "UMAA::MM::Conditional::EmitterPresetConditionalType";

            class NDDSUSERDllExport EmitterPresetConditionalType {
              public:

                EmitterPresetConditionalType();

                EmitterPresetConditionalType(const ::UMAA::Common::Measurement::NumericGUID& levelID_,const ::UMAA::Common::Measurement::DateTime& specializationReferenceTimestamp_,const ::UMAA::Common::Measurement::NumericGUID& specializationReferenceID_);

                ::UMAA::Common::Measurement::NumericGUID& levelID() noexcept {
                    return m_levelID_;
                }

                const ::UMAA::Common::Measurement::NumericGUID& levelID() const noexcept {
                    return m_levelID_;
                }

                void levelID(const ::UMAA::Common::Measurement::NumericGUID& value) {

                    m_levelID_ = value;
                }

                void levelID(::UMAA::Common::Measurement::NumericGUID&& value) {
                    m_levelID_ = std::move(value);
                }
                ::UMAA::Common::Measurement::DateTime& specializationReferenceTimestamp() noexcept {
                    return m_specializationReferenceTimestamp_;
                }

                const ::UMAA::Common::Measurement::DateTime& specializationReferenceTimestamp() const noexcept {
                    return m_specializationReferenceTimestamp_;
                }

                void specializationReferenceTimestamp(const ::UMAA::Common::Measurement::DateTime& value) {

                    m_specializationReferenceTimestamp_ = value;
                }

                void specializationReferenceTimestamp(::UMAA::Common::Measurement::DateTime&& value) {
                    m_specializationReferenceTimestamp_ = std::move(value);
                }
                ::UMAA::Common::Measurement::NumericGUID& specializationReferenceID() noexcept {
                    return m_specializationReferenceID_;
                }

                const ::UMAA::Common::Measurement::NumericGUID& specializationReferenceID() const noexcept {
                    return m_specializationReferenceID_;
                }

                void specializationReferenceID(const ::UMAA::Common::Measurement::NumericGUID& value) {

                    m_specializationReferenceID_ = value;
                }

                void specializationReferenceID(::UMAA::Common::Measurement::NumericGUID&& value) {
                    m_specializationReferenceID_ = std::move(value);
                }
                bool operator == (const EmitterPresetConditionalType& other_) const;
                bool operator != (const EmitterPresetConditionalType& other_) const;

                void swap(EmitterPresetConditionalType& other_) noexcept ;

              private:

                ::UMAA::Common::Measurement::NumericGUID m_levelID_ {};
                ::UMAA::Common::Measurement::DateTime m_specializationReferenceTimestamp_;
                ::UMAA::Common::Measurement::NumericGUID m_specializationReferenceID_ {};

            };

            inline void swap(EmitterPresetConditionalType& a, EmitterPresetConditionalType& b)  noexcept 
            {
                a.swap(b);
            }

            NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const EmitterPresetConditionalType& sample);

        } // namespace Conditional  
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
        struct topic_type_name< ::UMAA::MM::Conditional::EmitterPresetConditionalType > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::MM::Conditional::EmitterPresetConditionalType";
            }
        };

        template<>
        struct is_topic_type< ::UMAA::MM::Conditional::EmitterPresetConditionalType > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< ::UMAA::MM::Conditional::EmitterPresetConditionalType > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const ::UMAA::MM::Conditional::EmitterPresetConditionalType& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(::UMAA::MM::Conditional::EmitterPresetConditionalType& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(::UMAA::MM::Conditional::EmitterPresetConditionalType& sample);

            NDDSUSERDllExport 
            static void allocate_sample(::UMAA::MM::Conditional::EmitterPresetConditionalType& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };
    }
}

namespace rti { 
    namespace topic {

        template<>
        struct dynamic_type< ::UMAA::MM::Conditional::EmitterPresetConditionalType > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };

        template <>
        struct extensibility< ::UMAA::MM::Conditional::EmitterPresetConditionalType > {
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

#endif // EmitterPresetConditionalType_2000562673_hpp

