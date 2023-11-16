

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ContactType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef ContactType_1508709596_hpp
#define ContactType_1508709596_hpp

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
#include "UMAA/Common/MaritimeEnumeration/EnumerationSets.hpp"
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
#include "UMAA/Common/Measurement/Altitude_MSL.hpp"
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
#include "UMAA/Common/Measurement/CovariancePositionPositionType.hpp"
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
#include "UMAA/Common/Measurement/Polygon.hpp"
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
#include "UMAA/Common/Measurement/Position2D.hpp"
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
#include "UMAA/Common/Measurement/RMSDistanceErrorType.hpp"
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
        namespace ContactStatus {

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            // On Windows, dll-export template instantiations of standard types used by
            // other dll-exported types
            template class NDDSUSERDllExport std::allocator< ::UMAA::Common::Measurement::NumericGUID >;
            template class NDDSUSERDllExport std::vector< ::UMAA::Common::Measurement::NumericGUID >;
            #endif
            class NDDSUSERDllExport ContactType {
              public:

                ContactType();

                ContactType(const ::UMAA::Common::Measurement::Polygon& area_,const ::dds::core::optional< std::string >& callSign_,const std::string& contactName_,double course_,const ::dds::core::optional< ::UMAA::Common::Measurement::Position2D >& CPA_,const ::dds::core::optional< ::UMAA::Common::Measurement::DateTime >& CPATime_,double diameter_,const ::UMAA::Common::Measurement::Altitude_MSL& elevation_,const ::UMAA::Common::Measurement::RMSDistanceErrorType& elevationError_,double heading_,const ::dds::core::optional< double >& height_,const ::UMAA::Common::MaritimeEnumeration::FeatureKindEnumType::FeatureKindEnumType& kind_,const ::dds::core::optional< double >& length_,const ::dds::core::optional< std::string >& MMSINumber_,const std::string& originator_,const ::UMAA::Common::Measurement::Position2D& position_,const ::UMAA::Common::Measurement::CovariancePositionPositionType& positionCovariance_,const std::string& SIDC_,const ::rti::core::bounded_sequence< ::UMAA::Common::Measurement::NumericGUID, 100L >& source_,const ::UMAA::Common::MaritimeEnumeration::SourceIndicatorEnumType::SourceIndicatorEnumType& sourceIndicator_,double speedOverGround_,const ::UMAA::Common::Measurement::DateTime& timeFirstAcquired_,const ::dds::core::optional< ::UMAA::Common::Measurement::DateTime >& timeLost_,const ::dds::core::optional< double >& width_,const ::UMAA::Common::Measurement::NumericGUID& featureID_);

                ::UMAA::Common::Measurement::Polygon& area() noexcept {
                    return m_area_;
                }

                const ::UMAA::Common::Measurement::Polygon& area() const noexcept {
                    return m_area_;
                }

                void area(const ::UMAA::Common::Measurement::Polygon& value) {

                    m_area_ = value;
                }

                void area(::UMAA::Common::Measurement::Polygon&& value) {
                    m_area_ = std::move(value);
                }
                ::dds::core::optional< std::string >& callSign() noexcept {
                    return m_callSign_;
                }

                const ::dds::core::optional< std::string >& callSign() const noexcept {
                    return m_callSign_;
                }

                void callSign(const ::dds::core::optional< std::string >& value) {

                    m_callSign_ = value;
                }

                void callSign(::dds::core::optional< std::string >&& value) {
                    m_callSign_ = std::move(value);
                }
                std::string& contactName() noexcept {
                    return m_contactName_;
                }

                const std::string& contactName() const noexcept {
                    return m_contactName_;
                }

                void contactName(const std::string& value) {

                    m_contactName_ = value;
                }

                void contactName(std::string&& value) {
                    m_contactName_ = std::move(value);
                }
                double& course() noexcept {
                    return m_course_;
                }

                const double& course() const noexcept {
                    return m_course_;
                }

                void course(double value) {

                    m_course_ = value;
                }

                ::dds::core::optional< ::UMAA::Common::Measurement::Position2D >& CPA() noexcept {
                    return m_CPA_;
                }

                const ::dds::core::optional< ::UMAA::Common::Measurement::Position2D >& CPA() const noexcept {
                    return m_CPA_;
                }

                void CPA(const ::dds::core::optional< ::UMAA::Common::Measurement::Position2D >& value) {

                    m_CPA_ = value;
                }

                void CPA(::dds::core::optional< ::UMAA::Common::Measurement::Position2D >&& value) {
                    m_CPA_ = std::move(value);
                }
                ::dds::core::optional< ::UMAA::Common::Measurement::DateTime >& CPATime() noexcept {
                    return m_CPATime_;
                }

                const ::dds::core::optional< ::UMAA::Common::Measurement::DateTime >& CPATime() const noexcept {
                    return m_CPATime_;
                }

                void CPATime(const ::dds::core::optional< ::UMAA::Common::Measurement::DateTime >& value) {

                    m_CPATime_ = value;
                }

                void CPATime(::dds::core::optional< ::UMAA::Common::Measurement::DateTime >&& value) {
                    m_CPATime_ = std::move(value);
                }
                double& diameter() noexcept {
                    return m_diameter_;
                }

                const double& diameter() const noexcept {
                    return m_diameter_;
                }

                void diameter(double value) {

                    m_diameter_ = value;
                }

                ::UMAA::Common::Measurement::Altitude_MSL& elevation() noexcept {
                    return m_elevation_;
                }

                const ::UMAA::Common::Measurement::Altitude_MSL& elevation() const noexcept {
                    return m_elevation_;
                }

                void elevation(const ::UMAA::Common::Measurement::Altitude_MSL& value) {

                    m_elevation_ = value;
                }

                void elevation(::UMAA::Common::Measurement::Altitude_MSL&& value) {
                    m_elevation_ = std::move(value);
                }
                ::UMAA::Common::Measurement::RMSDistanceErrorType& elevationError() noexcept {
                    return m_elevationError_;
                }

                const ::UMAA::Common::Measurement::RMSDistanceErrorType& elevationError() const noexcept {
                    return m_elevationError_;
                }

                void elevationError(const ::UMAA::Common::Measurement::RMSDistanceErrorType& value) {

                    m_elevationError_ = value;
                }

                void elevationError(::UMAA::Common::Measurement::RMSDistanceErrorType&& value) {
                    m_elevationError_ = std::move(value);
                }
                double& heading() noexcept {
                    return m_heading_;
                }

                const double& heading() const noexcept {
                    return m_heading_;
                }

                void heading(double value) {

                    m_heading_ = value;
                }

                ::dds::core::optional< double >& height() noexcept {
                    return m_height_;
                }

                const ::dds::core::optional< double >& height() const noexcept {
                    return m_height_;
                }

                void height(const ::dds::core::optional< double >& value) {

                    m_height_ = value;
                }

                void height(::dds::core::optional< double >&& value) {
                    m_height_ = std::move(value);
                }
                ::UMAA::Common::MaritimeEnumeration::FeatureKindEnumType::FeatureKindEnumType& kind() noexcept {
                    return m_kind_;
                }

                const ::UMAA::Common::MaritimeEnumeration::FeatureKindEnumType::FeatureKindEnumType& kind() const noexcept {
                    return m_kind_;
                }

                void kind(const ::UMAA::Common::MaritimeEnumeration::FeatureKindEnumType::FeatureKindEnumType& value) {

                    m_kind_ = value;
                }

                void kind(::UMAA::Common::MaritimeEnumeration::FeatureKindEnumType::FeatureKindEnumType&& value) {
                    m_kind_ = std::move(value);
                }
                ::dds::core::optional< double >& length() noexcept {
                    return m_length_;
                }

                const ::dds::core::optional< double >& length() const noexcept {
                    return m_length_;
                }

                void length(const ::dds::core::optional< double >& value) {

                    m_length_ = value;
                }

                void length(::dds::core::optional< double >&& value) {
                    m_length_ = std::move(value);
                }
                ::dds::core::optional< std::string >& MMSINumber() noexcept {
                    return m_MMSINumber_;
                }

                const ::dds::core::optional< std::string >& MMSINumber() const noexcept {
                    return m_MMSINumber_;
                }

                void MMSINumber(const ::dds::core::optional< std::string >& value) {

                    m_MMSINumber_ = value;
                }

                void MMSINumber(::dds::core::optional< std::string >&& value) {
                    m_MMSINumber_ = std::move(value);
                }
                std::string& originator() noexcept {
                    return m_originator_;
                }

                const std::string& originator() const noexcept {
                    return m_originator_;
                }

                void originator(const std::string& value) {

                    m_originator_ = value;
                }

                void originator(std::string&& value) {
                    m_originator_ = std::move(value);
                }
                ::UMAA::Common::Measurement::Position2D& position() noexcept {
                    return m_position_;
                }

                const ::UMAA::Common::Measurement::Position2D& position() const noexcept {
                    return m_position_;
                }

                void position(const ::UMAA::Common::Measurement::Position2D& value) {

                    m_position_ = value;
                }

                void position(::UMAA::Common::Measurement::Position2D&& value) {
                    m_position_ = std::move(value);
                }
                ::UMAA::Common::Measurement::CovariancePositionPositionType& positionCovariance() noexcept {
                    return m_positionCovariance_;
                }

                const ::UMAA::Common::Measurement::CovariancePositionPositionType& positionCovariance() const noexcept {
                    return m_positionCovariance_;
                }

                void positionCovariance(const ::UMAA::Common::Measurement::CovariancePositionPositionType& value) {

                    m_positionCovariance_ = value;
                }

                void positionCovariance(::UMAA::Common::Measurement::CovariancePositionPositionType&& value) {
                    m_positionCovariance_ = std::move(value);
                }
                std::string& SIDC() noexcept {
                    return m_SIDC_;
                }

                const std::string& SIDC() const noexcept {
                    return m_SIDC_;
                }

                void SIDC(const std::string& value) {

                    m_SIDC_ = value;
                }

                void SIDC(std::string&& value) {
                    m_SIDC_ = std::move(value);
                }
                ::rti::core::bounded_sequence< ::UMAA::Common::Measurement::NumericGUID, 100L >& source() noexcept {
                    return m_source_;
                }

                const ::rti::core::bounded_sequence< ::UMAA::Common::Measurement::NumericGUID, 100L >& source() const noexcept {
                    return m_source_;
                }

                void source(const ::rti::core::bounded_sequence< ::UMAA::Common::Measurement::NumericGUID, 100L >& value) {

                    m_source_ = value;
                }

                void source(::rti::core::bounded_sequence< ::UMAA::Common::Measurement::NumericGUID, 100L >&& value) {
                    m_source_ = std::move(value);
                }
                ::UMAA::Common::MaritimeEnumeration::SourceIndicatorEnumType::SourceIndicatorEnumType& sourceIndicator() noexcept {
                    return m_sourceIndicator_;
                }

                const ::UMAA::Common::MaritimeEnumeration::SourceIndicatorEnumType::SourceIndicatorEnumType& sourceIndicator() const noexcept {
                    return m_sourceIndicator_;
                }

                void sourceIndicator(const ::UMAA::Common::MaritimeEnumeration::SourceIndicatorEnumType::SourceIndicatorEnumType& value) {

                    m_sourceIndicator_ = value;
                }

                void sourceIndicator(::UMAA::Common::MaritimeEnumeration::SourceIndicatorEnumType::SourceIndicatorEnumType&& value) {
                    m_sourceIndicator_ = std::move(value);
                }
                double& speedOverGround() noexcept {
                    return m_speedOverGround_;
                }

                const double& speedOverGround() const noexcept {
                    return m_speedOverGround_;
                }

                void speedOverGround(double value) {

                    m_speedOverGround_ = value;
                }

                ::UMAA::Common::Measurement::DateTime& timeFirstAcquired() noexcept {
                    return m_timeFirstAcquired_;
                }

                const ::UMAA::Common::Measurement::DateTime& timeFirstAcquired() const noexcept {
                    return m_timeFirstAcquired_;
                }

                void timeFirstAcquired(const ::UMAA::Common::Measurement::DateTime& value) {

                    m_timeFirstAcquired_ = value;
                }

                void timeFirstAcquired(::UMAA::Common::Measurement::DateTime&& value) {
                    m_timeFirstAcquired_ = std::move(value);
                }
                ::dds::core::optional< ::UMAA::Common::Measurement::DateTime >& timeLost() noexcept {
                    return m_timeLost_;
                }

                const ::dds::core::optional< ::UMAA::Common::Measurement::DateTime >& timeLost() const noexcept {
                    return m_timeLost_;
                }

                void timeLost(const ::dds::core::optional< ::UMAA::Common::Measurement::DateTime >& value) {

                    m_timeLost_ = value;
                }

                void timeLost(::dds::core::optional< ::UMAA::Common::Measurement::DateTime >&& value) {
                    m_timeLost_ = std::move(value);
                }
                ::dds::core::optional< double >& width() noexcept {
                    return m_width_;
                }

                const ::dds::core::optional< double >& width() const noexcept {
                    return m_width_;
                }

                void width(const ::dds::core::optional< double >& value) {

                    m_width_ = value;
                }

                void width(::dds::core::optional< double >&& value) {
                    m_width_ = std::move(value);
                }
                ::UMAA::Common::Measurement::NumericGUID& featureID() noexcept {
                    return m_featureID_;
                }

                const ::UMAA::Common::Measurement::NumericGUID& featureID() const noexcept {
                    return m_featureID_;
                }

                void featureID(const ::UMAA::Common::Measurement::NumericGUID& value) {

                    m_featureID_ = value;
                }

                void featureID(::UMAA::Common::Measurement::NumericGUID&& value) {
                    m_featureID_ = std::move(value);
                }
                bool operator == (const ContactType& other_) const;
                bool operator != (const ContactType& other_) const;

                void swap(ContactType& other_) noexcept ;

              private:

                ::UMAA::Common::Measurement::Polygon m_area_;
                ::dds::core::optional< std::string > m_callSign_;
                std::string m_contactName_;
                double m_course_;
                ::dds::core::optional< ::UMAA::Common::Measurement::Position2D > m_CPA_;
                ::dds::core::optional< ::UMAA::Common::Measurement::DateTime > m_CPATime_;
                double m_diameter_;
                ::UMAA::Common::Measurement::Altitude_MSL m_elevation_;
                ::UMAA::Common::Measurement::RMSDistanceErrorType m_elevationError_;
                double m_heading_;
                ::dds::core::optional< double > m_height_;
                ::UMAA::Common::MaritimeEnumeration::FeatureKindEnumType::FeatureKindEnumType m_kind_;
                ::dds::core::optional< double > m_length_;
                ::dds::core::optional< std::string > m_MMSINumber_;
                std::string m_originator_;
                ::UMAA::Common::Measurement::Position2D m_position_;
                ::UMAA::Common::Measurement::CovariancePositionPositionType m_positionCovariance_;
                std::string m_SIDC_;
                ::rti::core::bounded_sequence< ::UMAA::Common::Measurement::NumericGUID, 100L > m_source_;
                ::UMAA::Common::MaritimeEnumeration::SourceIndicatorEnumType::SourceIndicatorEnumType m_sourceIndicator_;
                double m_speedOverGround_;
                ::UMAA::Common::Measurement::DateTime m_timeFirstAcquired_;
                ::dds::core::optional< ::UMAA::Common::Measurement::DateTime > m_timeLost_;
                ::dds::core::optional< double > m_width_;
                ::UMAA::Common::Measurement::NumericGUID m_featureID_ {};

            };

            inline void swap(ContactType& a, ContactType& b)  noexcept 
            {
                a.swap(b);
            }

            NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const ContactType& sample);

        } // namespace ContactStatus  
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
        struct topic_type_name< ::UMAA::SA::ContactStatus::ContactType > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::SA::ContactStatus::ContactType";
            }
        };

        template<>
        struct is_topic_type< ::UMAA::SA::ContactStatus::ContactType > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< ::UMAA::SA::ContactStatus::ContactType > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const ::UMAA::SA::ContactStatus::ContactType& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(::UMAA::SA::ContactStatus::ContactType& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(::UMAA::SA::ContactStatus::ContactType& sample);

            NDDSUSERDllExport 
            static void allocate_sample(::UMAA::SA::ContactStatus::ContactType& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };
    }
}

namespace rti { 
    namespace topic {

        template<>
        struct dynamic_type< ::UMAA::SA::ContactStatus::ContactType > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };

        template <>
        struct extensibility< ::UMAA::SA::ContactStatus::ContactType > {
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

#endif // ContactType_1508709596_hpp

