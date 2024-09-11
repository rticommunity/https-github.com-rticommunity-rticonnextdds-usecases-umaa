

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from PathReporterType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef PathReporterType_1057600987_hpp
#define PathReporterType_1057600987_hpp

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
    namespace SA {
        namespace PathReporterSpecs {

            class NDDSUSERDllExport PathReporterType {
              public:

                PathReporterType();

                PathReporterType(double maxDistance_,int32_t maxPoints_,double maxTgtResolution_,double maxTime_,double minTgtResolution_,const ::UMAA::Common::MaritimeEnumeration::PathWayEnumModule::PathWayEnumType& pathType_);

                double& maxDistance() noexcept {
                    return m_maxDistance_;
                }

                const double& maxDistance() const noexcept {
                    return m_maxDistance_;
                }

                void maxDistance(double value) {

                    m_maxDistance_ = value;
                }

                int32_t& maxPoints() noexcept {
                    return m_maxPoints_;
                }

                const int32_t& maxPoints() const noexcept {
                    return m_maxPoints_;
                }

                void maxPoints(int32_t value) {

                    m_maxPoints_ = value;
                }

                double& maxTgtResolution() noexcept {
                    return m_maxTgtResolution_;
                }

                const double& maxTgtResolution() const noexcept {
                    return m_maxTgtResolution_;
                }

                void maxTgtResolution(double value) {

                    m_maxTgtResolution_ = value;
                }

                double& maxTime() noexcept {
                    return m_maxTime_;
                }

                const double& maxTime() const noexcept {
                    return m_maxTime_;
                }

                void maxTime(double value) {

                    m_maxTime_ = value;
                }

                double& minTgtResolution() noexcept {
                    return m_minTgtResolution_;
                }

                const double& minTgtResolution() const noexcept {
                    return m_minTgtResolution_;
                }

                void minTgtResolution(double value) {

                    m_minTgtResolution_ = value;
                }

                ::UMAA::Common::MaritimeEnumeration::PathWayEnumModule::PathWayEnumType& pathType() noexcept {
                    return m_pathType_;
                }

                const ::UMAA::Common::MaritimeEnumeration::PathWayEnumModule::PathWayEnumType& pathType() const noexcept {
                    return m_pathType_;
                }

                void pathType(const ::UMAA::Common::MaritimeEnumeration::PathWayEnumModule::PathWayEnumType& value) {

                    m_pathType_ = value;
                }

                void pathType(::UMAA::Common::MaritimeEnumeration::PathWayEnumModule::PathWayEnumType&& value) {
                    m_pathType_ = std::move(value);
                }
                bool operator == (const PathReporterType& other_) const;
                bool operator != (const PathReporterType& other_) const;

                void swap(PathReporterType& other_) noexcept ;

              private:

                double m_maxDistance_;
                int32_t m_maxPoints_;
                double m_maxTgtResolution_;
                double m_maxTime_;
                double m_minTgtResolution_;
                ::UMAA::Common::MaritimeEnumeration::PathWayEnumModule::PathWayEnumType m_pathType_;

            };

            inline void swap(PathReporterType& a, PathReporterType& b)  noexcept 
            {
                a.swap(b);
            }

            NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const PathReporterType& sample);

        } // namespace PathReporterSpecs  
    } // namespace SA  
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
        struct topic_type_name< ::UMAA::SA::PathReporterSpecs::PathReporterType > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::SA::PathReporterSpecs::PathReporterType";
            }
        };

        template<>
        struct topic_type_support< ::UMAA::SA::PathReporterSpecs::PathReporterType > {
            NDDSUSERDllExport 
            static void reset_sample(::UMAA::SA::PathReporterSpecs::PathReporterType& sample);

            NDDSUSERDllExport 
            static void allocate_sample(::UMAA::SA::PathReporterSpecs::PathReporterType& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };
    }
}

namespace rti { 
    namespace topic {

        template<>
        struct dynamic_type< ::UMAA::SA::PathReporterSpecs::PathReporterType > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };

        template <>
        struct extensibility< ::UMAA::SA::PathReporterSpecs::PathReporterType > {
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

#endif // PathReporterType_1057600987_hpp

