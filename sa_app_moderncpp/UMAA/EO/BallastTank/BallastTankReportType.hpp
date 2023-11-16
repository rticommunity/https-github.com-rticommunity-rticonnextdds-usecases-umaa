

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from BallastTankReportType.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef BallastTankReportType_1638598673_hpp
#define BallastTankReportType_1638598673_hpp

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
    namespace EO {
        namespace BallastTank {

            static const std::string BallastTankReport_TOPIC = "UMAA::EO::BallastTank::BallastTankReport";

            class NDDSUSERDllExport BallastTankReportType {
              public:
                BallastTankReportType();

                BallastTankReportType(const ::dds::core::optional< double >& level,double lowPressureLimit,const ::dds::core::optional< double >& mass,double pressure,double pressureLimit,bool trimActive,const UMAA::Common::Measurement::NumericGUID& source,const UMAA::Common::Measurement::DateTime& timeStamp);

                #ifdef RTI_CXX11_RVALUE_REFERENCES
                #ifndef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
                BallastTankReportType (BallastTankReportType&&) = default;
                BallastTankReportType& operator=(BallastTankReportType&&) = default;
                BallastTankReportType& operator=(const BallastTankReportType&) = default;
                BallastTankReportType(const BallastTankReportType&) = default;
                #else
                BallastTankReportType(BallastTankReportType&& other_) OMG_NOEXCEPT;  
                BallastTankReportType& operator=(BallastTankReportType&&  other_) OMG_NOEXCEPT;
                #endif
                #endif 

                ::dds::core::optional< double >& level() OMG_NOEXCEPT {
                    return m_level_;
                }

                const ::dds::core::optional< double >& level() const OMG_NOEXCEPT {
                    return m_level_;
                }

                void level(const ::dds::core::optional< double >& value) {
                    m_level_ = value;
                }

                void level(::dds::core::optional< double >&& value) {
                    m_level_ = std::move(value);
                }
                double& lowPressureLimit() OMG_NOEXCEPT {
                    return m_lowPressureLimit_;
                }

                const double& lowPressureLimit() const OMG_NOEXCEPT {
                    return m_lowPressureLimit_;
                }

                void lowPressureLimit(double value) {
                    m_lowPressureLimit_ = value;
                }

                ::dds::core::optional< double >& mass() OMG_NOEXCEPT {
                    return m_mass_;
                }

                const ::dds::core::optional< double >& mass() const OMG_NOEXCEPT {
                    return m_mass_;
                }

                void mass(const ::dds::core::optional< double >& value) {
                    m_mass_ = value;
                }

                void mass(::dds::core::optional< double >&& value) {
                    m_mass_ = std::move(value);
                }
                double& pressure() OMG_NOEXCEPT {
                    return m_pressure_;
                }

                const double& pressure() const OMG_NOEXCEPT {
                    return m_pressure_;
                }

                void pressure(double value) {
                    m_pressure_ = value;
                }

                double& pressureLimit() OMG_NOEXCEPT {
                    return m_pressureLimit_;
                }

                const double& pressureLimit() const OMG_NOEXCEPT {
                    return m_pressureLimit_;
                }

                void pressureLimit(double value) {
                    m_pressureLimit_ = value;
                }

                bool& trimActive() OMG_NOEXCEPT {
                    return m_trimActive_;
                }

                const bool& trimActive() const OMG_NOEXCEPT {
                    return m_trimActive_;
                }

                void trimActive(bool value) {
                    m_trimActive_ = value;
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

                bool operator == (const BallastTankReportType& other_) const;
                bool operator != (const BallastTankReportType& other_) const;

                void swap(BallastTankReportType& other_) OMG_NOEXCEPT ;

              private:

                ::dds::core::optional< double > m_level_;
                double m_lowPressureLimit_;
                ::dds::core::optional< double > m_mass_;
                double m_pressure_;
                double m_pressureLimit_;
                bool m_trimActive_;
                UMAA::Common::Measurement::NumericGUID m_source_;
                UMAA::Common::Measurement::DateTime m_timeStamp_;

            };

            inline void swap(BallastTankReportType& a, BallastTankReportType& b)  OMG_NOEXCEPT 
            {
                a.swap(b);
            }

            NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const BallastTankReportType& sample);

        } // namespace BallastTank  
    } // namespace EO  
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
        struct topic_type_name< UMAA::EO::BallastTank::BallastTankReportType > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::EO::BallastTank::BallastTankReportType";
            }
        };

        template<>
        struct is_topic_type< UMAA::EO::BallastTank::BallastTankReportType > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< UMAA::EO::BallastTank::BallastTankReportType > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const UMAA::EO::BallastTank::BallastTankReportType& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(UMAA::EO::BallastTank::BallastTankReportType& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(UMAA::EO::BallastTank::BallastTankReportType& sample);

            NDDSUSERDllExport 
            static void allocate_sample(UMAA::EO::BallastTank::BallastTankReportType& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };

    }
}

namespace rti { 
    namespace topic {

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct dynamic_type< UMAA::EO::BallastTank::BallastTankReportType > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };
        #endif

        template <>
        struct extensibility< UMAA::EO::BallastTank::BallastTankReportType > {
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

#endif // BallastTankReportType_1638598673_hpp

