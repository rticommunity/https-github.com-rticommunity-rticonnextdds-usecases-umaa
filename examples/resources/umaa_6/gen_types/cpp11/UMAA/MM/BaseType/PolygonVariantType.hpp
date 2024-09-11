

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from PolygonVariantType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef PolygonVariantType_90656803_hpp
#define PolygonVariantType_90656803_hpp

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
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif
#include "UMAA/Common/Measurement/GeoPosition2D.hpp"
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif
namespace UMAA {
    namespace MM {
        namespace BaseType {

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            // On Windows, dll-export template instantiations of standard types used by
            // other dll-exported types
            template class NDDSUSERDllExport std::allocator< ::UMAA::Common::Measurement::GeoPosition2D >;
            template class NDDSUSERDllExport std::vector< ::UMAA::Common::Measurement::GeoPosition2D >;
            #endif
            class NDDSUSERDllExport PolygonVariantType {
              public:

                PolygonVariantType();

                PolygonVariantType(const ::UMAA::Common::Enumeration::LineSegmentEnumModule::LineSegmentEnumType& lineKind_,const ::rti::core::bounded_sequence< ::UMAA::Common::Measurement::GeoPosition2D, 128L >& referencePoints_);

                ::UMAA::Common::Enumeration::LineSegmentEnumModule::LineSegmentEnumType& lineKind() noexcept {
                    return m_lineKind_;
                }

                const ::UMAA::Common::Enumeration::LineSegmentEnumModule::LineSegmentEnumType& lineKind() const noexcept {
                    return m_lineKind_;
                }

                void lineKind(const ::UMAA::Common::Enumeration::LineSegmentEnumModule::LineSegmentEnumType& value) {

                    m_lineKind_ = value;
                }

                void lineKind(::UMAA::Common::Enumeration::LineSegmentEnumModule::LineSegmentEnumType&& value) {
                    m_lineKind_ = std::move(value);
                }
                ::rti::core::bounded_sequence< ::UMAA::Common::Measurement::GeoPosition2D, 128L >& referencePoints() noexcept {
                    return m_referencePoints_;
                }

                const ::rti::core::bounded_sequence< ::UMAA::Common::Measurement::GeoPosition2D, 128L >& referencePoints() const noexcept {
                    return m_referencePoints_;
                }

                void referencePoints(const ::rti::core::bounded_sequence< ::UMAA::Common::Measurement::GeoPosition2D, 128L >& value) {

                    m_referencePoints_ = value;
                }

                void referencePoints(::rti::core::bounded_sequence< ::UMAA::Common::Measurement::GeoPosition2D, 128L >&& value) {
                    m_referencePoints_ = std::move(value);
                }
                bool operator == (const PolygonVariantType& other_) const;
                bool operator != (const PolygonVariantType& other_) const;

                void swap(PolygonVariantType& other_) noexcept ;

              private:

                ::UMAA::Common::Enumeration::LineSegmentEnumModule::LineSegmentEnumType m_lineKind_;
                ::rti::core::bounded_sequence< ::UMAA::Common::Measurement::GeoPosition2D, 128L > m_referencePoints_;

            };

            inline void swap(PolygonVariantType& a, PolygonVariantType& b)  noexcept 
            {
                a.swap(b);
            }

            NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const PolygonVariantType& sample);

        } // namespace BaseType  
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
        struct topic_type_name< ::UMAA::MM::BaseType::PolygonVariantType > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::MM::BaseType::PolygonVariantType";
            }
        };

        template<>
        struct topic_type_support< ::UMAA::MM::BaseType::PolygonVariantType > {
            NDDSUSERDllExport 
            static void reset_sample(::UMAA::MM::BaseType::PolygonVariantType& sample);

            NDDSUSERDllExport 
            static void allocate_sample(::UMAA::MM::BaseType::PolygonVariantType& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };
    }
}

namespace rti { 
    namespace topic {

        template<>
        struct dynamic_type< ::UMAA::MM::BaseType::PolygonVariantType > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };

        template <>
        struct extensibility< ::UMAA::MM::BaseType::PolygonVariantType > {
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

#endif // PolygonVariantType_90656803_hpp

