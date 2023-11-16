

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from BatterySpecsReportType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef BatterySpecsReportType_692210194_hpp
#define BatterySpecsReportType_692210194_hpp

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
    namespace EO {
        namespace BatterySpecs {

            RTI_CONSTEXPR_OR_CONST_STRING std::string BatterySpecsReport_TOPIC = "UMAA::EO::BatterySpecs::BatterySpecsReport";

            class NDDSUSERDllExport BatterySpecsReportType {
              public:

                BatterySpecsReportType();

                BatterySpecsReportType(double cellMinimumVoltage_,double maxCapacity_,double maxChargingCurrent_,double maxChargingTemp_,double maxCrankingAmps_,double maxOutputCurrent_,double maxStorageTemp_,double maxTemperature_,double maxVoltage_,double minChargingTemp_,double minStorageTemp_,double minTemperature_,double minVoltage_,const std::string& name_,double nominalVoltage_,const ::UMAA::Common::Measurement::NumericGUID& source_,const ::UMAA::Common::Measurement::DateTime& timeStamp_);

                double& cellMinimumVoltage() noexcept {
                    return m_cellMinimumVoltage_;
                }

                const double& cellMinimumVoltage() const noexcept {
                    return m_cellMinimumVoltage_;
                }

                void cellMinimumVoltage(double value) {

                    m_cellMinimumVoltage_ = value;
                }

                double& maxCapacity() noexcept {
                    return m_maxCapacity_;
                }

                const double& maxCapacity() const noexcept {
                    return m_maxCapacity_;
                }

                void maxCapacity(double value) {

                    m_maxCapacity_ = value;
                }

                double& maxChargingCurrent() noexcept {
                    return m_maxChargingCurrent_;
                }

                const double& maxChargingCurrent() const noexcept {
                    return m_maxChargingCurrent_;
                }

                void maxChargingCurrent(double value) {

                    m_maxChargingCurrent_ = value;
                }

                double& maxChargingTemp() noexcept {
                    return m_maxChargingTemp_;
                }

                const double& maxChargingTemp() const noexcept {
                    return m_maxChargingTemp_;
                }

                void maxChargingTemp(double value) {

                    m_maxChargingTemp_ = value;
                }

                double& maxCrankingAmps() noexcept {
                    return m_maxCrankingAmps_;
                }

                const double& maxCrankingAmps() const noexcept {
                    return m_maxCrankingAmps_;
                }

                void maxCrankingAmps(double value) {

                    m_maxCrankingAmps_ = value;
                }

                double& maxOutputCurrent() noexcept {
                    return m_maxOutputCurrent_;
                }

                const double& maxOutputCurrent() const noexcept {
                    return m_maxOutputCurrent_;
                }

                void maxOutputCurrent(double value) {

                    m_maxOutputCurrent_ = value;
                }

                double& maxStorageTemp() noexcept {
                    return m_maxStorageTemp_;
                }

                const double& maxStorageTemp() const noexcept {
                    return m_maxStorageTemp_;
                }

                void maxStorageTemp(double value) {

                    m_maxStorageTemp_ = value;
                }

                double& maxTemperature() noexcept {
                    return m_maxTemperature_;
                }

                const double& maxTemperature() const noexcept {
                    return m_maxTemperature_;
                }

                void maxTemperature(double value) {

                    m_maxTemperature_ = value;
                }

                double& maxVoltage() noexcept {
                    return m_maxVoltage_;
                }

                const double& maxVoltage() const noexcept {
                    return m_maxVoltage_;
                }

                void maxVoltage(double value) {

                    m_maxVoltage_ = value;
                }

                double& minChargingTemp() noexcept {
                    return m_minChargingTemp_;
                }

                const double& minChargingTemp() const noexcept {
                    return m_minChargingTemp_;
                }

                void minChargingTemp(double value) {

                    m_minChargingTemp_ = value;
                }

                double& minStorageTemp() noexcept {
                    return m_minStorageTemp_;
                }

                const double& minStorageTemp() const noexcept {
                    return m_minStorageTemp_;
                }

                void minStorageTemp(double value) {

                    m_minStorageTemp_ = value;
                }

                double& minTemperature() noexcept {
                    return m_minTemperature_;
                }

                const double& minTemperature() const noexcept {
                    return m_minTemperature_;
                }

                void minTemperature(double value) {

                    m_minTemperature_ = value;
                }

                double& minVoltage() noexcept {
                    return m_minVoltage_;
                }

                const double& minVoltage() const noexcept {
                    return m_minVoltage_;
                }

                void minVoltage(double value) {

                    m_minVoltage_ = value;
                }

                std::string& name() noexcept {
                    return m_name_;
                }

                const std::string& name() const noexcept {
                    return m_name_;
                }

                void name(const std::string& value) {

                    m_name_ = value;
                }

                void name(std::string&& value) {
                    m_name_ = std::move(value);
                }
                double& nominalVoltage() noexcept {
                    return m_nominalVoltage_;
                }

                const double& nominalVoltage() const noexcept {
                    return m_nominalVoltage_;
                }

                void nominalVoltage(double value) {

                    m_nominalVoltage_ = value;
                }

                ::UMAA::Common::Measurement::NumericGUID& source() noexcept {
                    return m_source_;
                }

                const ::UMAA::Common::Measurement::NumericGUID& source() const noexcept {
                    return m_source_;
                }

                void source(const ::UMAA::Common::Measurement::NumericGUID& value) {

                    m_source_ = value;
                }

                void source(::UMAA::Common::Measurement::NumericGUID&& value) {
                    m_source_ = std::move(value);
                }
                ::UMAA::Common::Measurement::DateTime& timeStamp() noexcept {
                    return m_timeStamp_;
                }

                const ::UMAA::Common::Measurement::DateTime& timeStamp() const noexcept {
                    return m_timeStamp_;
                }

                void timeStamp(const ::UMAA::Common::Measurement::DateTime& value) {

                    m_timeStamp_ = value;
                }

                void timeStamp(::UMAA::Common::Measurement::DateTime&& value) {
                    m_timeStamp_ = std::move(value);
                }
                bool operator == (const BatterySpecsReportType& other_) const;
                bool operator != (const BatterySpecsReportType& other_) const;

                void swap(BatterySpecsReportType& other_) noexcept ;

              private:

                double m_cellMinimumVoltage_;
                double m_maxCapacity_;
                double m_maxChargingCurrent_;
                double m_maxChargingTemp_;
                double m_maxCrankingAmps_;
                double m_maxOutputCurrent_;
                double m_maxStorageTemp_;
                double m_maxTemperature_;
                double m_maxVoltage_;
                double m_minChargingTemp_;
                double m_minStorageTemp_;
                double m_minTemperature_;
                double m_minVoltage_;
                std::string m_name_;
                double m_nominalVoltage_;
                ::UMAA::Common::Measurement::NumericGUID m_source_ {};
                ::UMAA::Common::Measurement::DateTime m_timeStamp_;

            };

            inline void swap(BatterySpecsReportType& a, BatterySpecsReportType& b)  noexcept 
            {
                a.swap(b);
            }

            NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const BatterySpecsReportType& sample);

        } // namespace BatterySpecs  
    } // namespace EO  
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
        struct topic_type_name< ::UMAA::EO::BatterySpecs::BatterySpecsReportType > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::EO::BatterySpecs::BatterySpecsReportType";
            }
        };

        template<>
        struct is_topic_type< ::UMAA::EO::BatterySpecs::BatterySpecsReportType > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< ::UMAA::EO::BatterySpecs::BatterySpecsReportType > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const ::UMAA::EO::BatterySpecs::BatterySpecsReportType& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(::UMAA::EO::BatterySpecs::BatterySpecsReportType& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(::UMAA::EO::BatterySpecs::BatterySpecsReportType& sample);

            NDDSUSERDllExport 
            static void allocate_sample(::UMAA::EO::BatterySpecs::BatterySpecsReportType& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };
    }
}

namespace rti { 
    namespace topic {

        template<>
        struct dynamic_type< ::UMAA::EO::BatterySpecs::BatterySpecsReportType > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };

        template <>
        struct extensibility< ::UMAA::EO::BatterySpecs::BatterySpecsReportType > {
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

#endif // BatterySpecsReportType_692210194_hpp

