

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from GuardedTeleopSpecsReportType.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef GuardedTeleopSpecsReportType_1469068303_hpp
#define GuardedTeleopSpecsReportType_1469068303_hpp

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
    namespace MO {
        namespace GuardedTeleopSpecs {

            static const std::string GuardedTeleopSpecsReport_TOPIC = "UMAA::MO::GuardedTeleopSpecs::GuardedTeleopSpecsReport";

            class NDDSUSERDllExport GuardedTeleopSpecsReportType {
              public:
                GuardedTeleopSpecsReportType();

                GuardedTeleopSpecsReportType(bool supportedAvoidObstacle,bool supportedPitchoverLimit,bool supportedRolloverLimit,bool supportedStopOnObstacle,const UMAA::Common::Measurement::NumericGUID& source,const UMAA::Common::Measurement::DateTime& timeStamp);

                #ifdef RTI_CXX11_RVALUE_REFERENCES
                #ifndef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
                GuardedTeleopSpecsReportType (GuardedTeleopSpecsReportType&&) = default;
                GuardedTeleopSpecsReportType& operator=(GuardedTeleopSpecsReportType&&) = default;
                GuardedTeleopSpecsReportType& operator=(const GuardedTeleopSpecsReportType&) = default;
                GuardedTeleopSpecsReportType(const GuardedTeleopSpecsReportType&) = default;
                #else
                GuardedTeleopSpecsReportType(GuardedTeleopSpecsReportType&& other_) OMG_NOEXCEPT;  
                GuardedTeleopSpecsReportType& operator=(GuardedTeleopSpecsReportType&&  other_) OMG_NOEXCEPT;
                #endif
                #endif 

                bool& supportedAvoidObstacle() OMG_NOEXCEPT {
                    return m_supportedAvoidObstacle_;
                }

                const bool& supportedAvoidObstacle() const OMG_NOEXCEPT {
                    return m_supportedAvoidObstacle_;
                }

                void supportedAvoidObstacle(bool value) {
                    m_supportedAvoidObstacle_ = value;
                }

                bool& supportedPitchoverLimit() OMG_NOEXCEPT {
                    return m_supportedPitchoverLimit_;
                }

                const bool& supportedPitchoverLimit() const OMG_NOEXCEPT {
                    return m_supportedPitchoverLimit_;
                }

                void supportedPitchoverLimit(bool value) {
                    m_supportedPitchoverLimit_ = value;
                }

                bool& supportedRolloverLimit() OMG_NOEXCEPT {
                    return m_supportedRolloverLimit_;
                }

                const bool& supportedRolloverLimit() const OMG_NOEXCEPT {
                    return m_supportedRolloverLimit_;
                }

                void supportedRolloverLimit(bool value) {
                    m_supportedRolloverLimit_ = value;
                }

                bool& supportedStopOnObstacle() OMG_NOEXCEPT {
                    return m_supportedStopOnObstacle_;
                }

                const bool& supportedStopOnObstacle() const OMG_NOEXCEPT {
                    return m_supportedStopOnObstacle_;
                }

                void supportedStopOnObstacle(bool value) {
                    m_supportedStopOnObstacle_ = value;
                }

                UMAA::Common::Measurement::NumericGUID& source() OMG_NOEXCEPT {
                    return m_source_;
                }

                const UMAA::Common::Measurement::NumericGUID& source() const OMG_NOEXCEPT {
                    return m_source_;
                }

                void source(const UMAA::Common::Measurement::NumericGUID& value) {
                    m_source_ = value;
                }

                void source(UMAA::Common::Measurement::NumericGUID&& value) {
                    m_source_ = std::move(value);
                }
                UMAA::Common::Measurement::DateTime& timeStamp() OMG_NOEXCEPT {
                    return m_timeStamp_;
                }

                const UMAA::Common::Measurement::DateTime& timeStamp() const OMG_NOEXCEPT {
                    return m_timeStamp_;
                }

                void timeStamp(const UMAA::Common::Measurement::DateTime& value) {
                    m_timeStamp_ = value;
                }

                void timeStamp(UMAA::Common::Measurement::DateTime&& value) {
                    m_timeStamp_ = std::move(value);
                }

                bool operator == (const GuardedTeleopSpecsReportType& other_) const;
                bool operator != (const GuardedTeleopSpecsReportType& other_) const;

                void swap(GuardedTeleopSpecsReportType& other_) OMG_NOEXCEPT ;

              private:

                bool m_supportedAvoidObstacle_;
                bool m_supportedPitchoverLimit_;
                bool m_supportedRolloverLimit_;
                bool m_supportedStopOnObstacle_;
                UMAA::Common::Measurement::NumericGUID m_source_;
                UMAA::Common::Measurement::DateTime m_timeStamp_;

            };

            inline void swap(GuardedTeleopSpecsReportType& a, GuardedTeleopSpecsReportType& b)  OMG_NOEXCEPT 
            {
                a.swap(b);
            }

            NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const GuardedTeleopSpecsReportType& sample);

        } // namespace GuardedTeleopSpecs  
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
        struct topic_type_name< UMAA::MO::GuardedTeleopSpecs::GuardedTeleopSpecsReportType > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::MO::GuardedTeleopSpecs::GuardedTeleopSpecsReportType";
            }
        };

        template<>
        struct is_topic_type< UMAA::MO::GuardedTeleopSpecs::GuardedTeleopSpecsReportType > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< UMAA::MO::GuardedTeleopSpecs::GuardedTeleopSpecsReportType > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const UMAA::MO::GuardedTeleopSpecs::GuardedTeleopSpecsReportType& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(UMAA::MO::GuardedTeleopSpecs::GuardedTeleopSpecsReportType& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(UMAA::MO::GuardedTeleopSpecs::GuardedTeleopSpecsReportType& sample);

            NDDSUSERDllExport 
            static void allocate_sample(UMAA::MO::GuardedTeleopSpecs::GuardedTeleopSpecsReportType& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };

    }
}

namespace rti { 
    namespace topic {

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct dynamic_type< UMAA::MO::GuardedTeleopSpecs::GuardedTeleopSpecsReportType > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };
        #endif

        template <>
        struct extensibility< UMAA::MO::GuardedTeleopSpecs::GuardedTeleopSpecsReportType > {
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

#endif // GuardedTeleopSpecsReportType_1469068303_hpp

