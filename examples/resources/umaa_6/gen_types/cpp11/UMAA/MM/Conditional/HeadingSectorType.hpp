

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from HeadingSectorType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef HeadingSectorType_1640221822_hpp
#define HeadingSectorType_1640221822_hpp

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
#include "UMAA/Common/MaritimeEnumeration/MaritimeEnumerationSets.hpp"
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
    namespace MM {
        namespace Conditional {

            class NDDSUSERDllExport HeadingSectorType {
              public:

                HeadingSectorType();

                HeadingSectorType(double endHeading_,const ::UMAA::Common::MaritimeEnumeration::HeadingSectorKindEnumModule::HeadingSectorKindEnumType& headingSectorKind_,double startHeading_);

                double& endHeading() noexcept {
                    return m_endHeading_;
                }

                const double& endHeading() const noexcept {
                    return m_endHeading_;
                }

                void endHeading(double value) {

                    m_endHeading_ = value;
                }

                ::UMAA::Common::MaritimeEnumeration::HeadingSectorKindEnumModule::HeadingSectorKindEnumType& headingSectorKind() noexcept {
                    return m_headingSectorKind_;
                }

                const ::UMAA::Common::MaritimeEnumeration::HeadingSectorKindEnumModule::HeadingSectorKindEnumType& headingSectorKind() const noexcept {
                    return m_headingSectorKind_;
                }

                void headingSectorKind(const ::UMAA::Common::MaritimeEnumeration::HeadingSectorKindEnumModule::HeadingSectorKindEnumType& value) {

                    m_headingSectorKind_ = value;
                }

                void headingSectorKind(::UMAA::Common::MaritimeEnumeration::HeadingSectorKindEnumModule::HeadingSectorKindEnumType&& value) {
                    m_headingSectorKind_ = std::move(value);
                }
                double& startHeading() noexcept {
                    return m_startHeading_;
                }

                const double& startHeading() const noexcept {
                    return m_startHeading_;
                }

                void startHeading(double value) {

                    m_startHeading_ = value;
                }

                bool operator == (const HeadingSectorType& other_) const;
                bool operator != (const HeadingSectorType& other_) const;

                void swap(HeadingSectorType& other_) noexcept ;

              private:

                double m_endHeading_;
                ::UMAA::Common::MaritimeEnumeration::HeadingSectorKindEnumModule::HeadingSectorKindEnumType m_headingSectorKind_;
                double m_startHeading_;

            };

            inline void swap(HeadingSectorType& a, HeadingSectorType& b)  noexcept 
            {
                a.swap(b);
            }

            NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const HeadingSectorType& sample);

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
        struct topic_type_name< ::UMAA::MM::Conditional::HeadingSectorType > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::MM::Conditional::HeadingSectorType";
            }
        };

        template<>
        struct topic_type_support< ::UMAA::MM::Conditional::HeadingSectorType > {
            NDDSUSERDllExport 
            static void reset_sample(::UMAA::MM::Conditional::HeadingSectorType& sample);

            NDDSUSERDllExport 
            static void allocate_sample(::UMAA::MM::Conditional::HeadingSectorType& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };
    }
}

namespace rti { 
    namespace topic {

        template<>
        struct dynamic_type< ::UMAA::MM::Conditional::HeadingSectorType > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };

        template <>
        struct extensibility< ::UMAA::MM::Conditional::HeadingSectorType > {
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

#endif // HeadingSectorType_1640221822_hpp

