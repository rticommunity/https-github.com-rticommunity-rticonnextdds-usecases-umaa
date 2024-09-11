

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from WaterSpeedTolerance.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef WaterSpeedTolerance_649405562_hpp
#define WaterSpeedTolerance_649405562_hpp

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
namespace UMAA {
    namespace Common {
        namespace Speed {

            class NDDSUSERDllExport WaterSpeedTolerance {
              public:

                WaterSpeedTolerance();

                WaterSpeedTolerance(const ::dds::core::optional< double >& failureDelay_,double lowerlimit_,double upperlimit_);

                ::dds::core::optional< double >& failureDelay() noexcept {
                    return m_failureDelay_;
                }

                const ::dds::core::optional< double >& failureDelay() const noexcept {
                    return m_failureDelay_;
                }

                void failureDelay(const ::dds::core::optional< double >& value) {

                    m_failureDelay_ = value;
                }

                void failureDelay(::dds::core::optional< double >&& value) {
                    m_failureDelay_ = std::move(value);
                }
                double& lowerlimit() noexcept {
                    return m_lowerlimit_;
                }

                const double& lowerlimit() const noexcept {
                    return m_lowerlimit_;
                }

                void lowerlimit(double value) {

                    m_lowerlimit_ = value;
                }

                double& upperlimit() noexcept {
                    return m_upperlimit_;
                }

                const double& upperlimit() const noexcept {
                    return m_upperlimit_;
                }

                void upperlimit(double value) {

                    m_upperlimit_ = value;
                }

                bool operator == (const WaterSpeedTolerance& other_) const;
                bool operator != (const WaterSpeedTolerance& other_) const;

                void swap(WaterSpeedTolerance& other_) noexcept ;

              private:

                ::dds::core::optional< double > m_failureDelay_;
                double m_lowerlimit_;
                double m_upperlimit_;

            };

            inline void swap(WaterSpeedTolerance& a, WaterSpeedTolerance& b)  noexcept 
            {
                a.swap(b);
            }

            NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const WaterSpeedTolerance& sample);

        } // namespace Speed  
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
        struct topic_type_name< ::UMAA::Common::Speed::WaterSpeedTolerance > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::Common::Speed::WaterSpeedTolerance";
            }
        };

        template<>
        struct topic_type_support< ::UMAA::Common::Speed::WaterSpeedTolerance > {
            NDDSUSERDllExport 
            static void reset_sample(::UMAA::Common::Speed::WaterSpeedTolerance& sample);

            NDDSUSERDllExport 
            static void allocate_sample(::UMAA::Common::Speed::WaterSpeedTolerance& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };
    }
}

namespace rti { 
    namespace topic {

        template<>
        struct dynamic_type< ::UMAA::Common::Speed::WaterSpeedTolerance > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };

        template <>
        struct extensibility< ::UMAA::Common::Speed::WaterSpeedTolerance > {
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

#endif // WaterSpeedTolerance_649405562_hpp

