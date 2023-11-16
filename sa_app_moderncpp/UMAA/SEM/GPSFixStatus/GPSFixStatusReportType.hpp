

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from GPSFixStatusReportType.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef GPSFixStatusReportType_537848047_hpp
#define GPSFixStatusReportType_537848047_hpp

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
#include "UMAA/Common/Measurement/Position3D_WGS84.hpp"
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif
namespace UMAA {
    namespace SEM {
        namespace GPSFixStatus {

            static const std::string GPSFixStatusReport_TOPIC = "UMAA::SEM::GPSFixStatus::GPSFixStatusReport";

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            // On Windows, dll-export template instantiations of standard types used by
            // other dll-exported types
            template class NDDSUSERDllExport std::allocator< double >;
            template class NDDSUSERDllExport std::vector< double >;
            #endif
            class NDDSUSERDllExport GPSFixStatusReportType {
              public:
                GPSFixStatusReportType();

                GPSFixStatusReportType(const ::rti::core::bounded_sequence< double, 11L >& carrierToNoise,int32_t countDown,bool fixValid,bool lowBkupBattery,const UMAA::Common::MaritimeEnumeration::GPSNavigationSolutionEnumType::GPSNavigationSolutionEnumType& navSolution,const UMAA::Common::Measurement::Position3D_WGS84& originPosition,bool pCode,bool timeOut,const UMAA::Common::Measurement::NumericGUID& source,const UMAA::Common::Measurement::DateTime& timeStamp);

                #ifdef RTI_CXX11_RVALUE_REFERENCES
                #ifndef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
                GPSFixStatusReportType (GPSFixStatusReportType&&) = default;
                GPSFixStatusReportType& operator=(GPSFixStatusReportType&&) = default;
                GPSFixStatusReportType& operator=(const GPSFixStatusReportType&) = default;
                GPSFixStatusReportType(const GPSFixStatusReportType&) = default;
                #else
                GPSFixStatusReportType(GPSFixStatusReportType&& other_) OMG_NOEXCEPT;  
                GPSFixStatusReportType& operator=(GPSFixStatusReportType&&  other_) OMG_NOEXCEPT;
                #endif
                #endif 

                ::rti::core::bounded_sequence< double, 11L >& carrierToNoise() OMG_NOEXCEPT {
                    return m_carrierToNoise_;
                }

                const ::rti::core::bounded_sequence< double, 11L >& carrierToNoise() const OMG_NOEXCEPT {
                    return m_carrierToNoise_;
                }

                void carrierToNoise(const ::rti::core::bounded_sequence< double, 11L >& value) {
                    m_carrierToNoise_ = value;
                }

                void carrierToNoise(::rti::core::bounded_sequence< double, 11L >&& value) {
                    m_carrierToNoise_ = std::move(value);
                }
                int32_t& countDown() OMG_NOEXCEPT {
                    return m_countDown_;
                }

                const int32_t& countDown() const OMG_NOEXCEPT {
                    return m_countDown_;
                }

                void countDown(int32_t value) {
                    m_countDown_ = value;
                }

                bool& fixValid() OMG_NOEXCEPT {
                    return m_fixValid_;
                }

                const bool& fixValid() const OMG_NOEXCEPT {
                    return m_fixValid_;
                }

                void fixValid(bool value) {
                    m_fixValid_ = value;
                }

                bool& lowBkupBattery() OMG_NOEXCEPT {
                    return m_lowBkupBattery_;
                }

                const bool& lowBkupBattery() const OMG_NOEXCEPT {
                    return m_lowBkupBattery_;
                }

                void lowBkupBattery(bool value) {
                    m_lowBkupBattery_ = value;
                }

                UMAA::Common::MaritimeEnumeration::GPSNavigationSolutionEnumType::GPSNavigationSolutionEnumType& navSolution() OMG_NOEXCEPT {
                    return m_navSolution_;
                }

                const UMAA::Common::MaritimeEnumeration::GPSNavigationSolutionEnumType::GPSNavigationSolutionEnumType& navSolution() const OMG_NOEXCEPT {
                    return m_navSolution_;
                }

                void navSolution(const UMAA::Common::MaritimeEnumeration::GPSNavigationSolutionEnumType::GPSNavigationSolutionEnumType& value) {
                    m_navSolution_ = value;
                }

                void navSolution(UMAA::Common::MaritimeEnumeration::GPSNavigationSolutionEnumType::GPSNavigationSolutionEnumType&& value) {
                    m_navSolution_ = std::move(value);
                }
                UMAA::Common::Measurement::Position3D_WGS84& originPosition() OMG_NOEXCEPT {
                    return m_originPosition_;
                }

                const UMAA::Common::Measurement::Position3D_WGS84& originPosition() const OMG_NOEXCEPT {
                    return m_originPosition_;
                }

                void originPosition(const UMAA::Common::Measurement::Position3D_WGS84& value) {
                    m_originPosition_ = value;
                }

                void originPosition(UMAA::Common::Measurement::Position3D_WGS84&& value) {
                    m_originPosition_ = std::move(value);
                }
                bool& pCode() OMG_NOEXCEPT {
                    return m_pCode_;
                }

                const bool& pCode() const OMG_NOEXCEPT {
                    return m_pCode_;
                }

                void pCode(bool value) {
                    m_pCode_ = value;
                }

                bool& timeOut() OMG_NOEXCEPT {
                    return m_timeOut_;
                }

                const bool& timeOut() const OMG_NOEXCEPT {
                    return m_timeOut_;
                }

                void timeOut(bool value) {
                    m_timeOut_ = value;
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

                bool operator == (const GPSFixStatusReportType& other_) const;
                bool operator != (const GPSFixStatusReportType& other_) const;

                void swap(GPSFixStatusReportType& other_) OMG_NOEXCEPT ;

              private:

                ::rti::core::bounded_sequence< double, 11L > m_carrierToNoise_;
                int32_t m_countDown_;
                bool m_fixValid_;
                bool m_lowBkupBattery_;
                UMAA::Common::MaritimeEnumeration::GPSNavigationSolutionEnumType::GPSNavigationSolutionEnumType m_navSolution_;
                UMAA::Common::Measurement::Position3D_WGS84 m_originPosition_;
                bool m_pCode_;
                bool m_timeOut_;
                UMAA::Common::Measurement::NumericGUID m_source_;
                UMAA::Common::Measurement::DateTime m_timeStamp_;

            };

            inline void swap(GPSFixStatusReportType& a, GPSFixStatusReportType& b)  OMG_NOEXCEPT 
            {
                a.swap(b);
            }

            NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const GPSFixStatusReportType& sample);

        } // namespace GPSFixStatus  
    } // namespace SEM  
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
        struct topic_type_name< UMAA::SEM::GPSFixStatus::GPSFixStatusReportType > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::SEM::GPSFixStatus::GPSFixStatusReportType";
            }
        };

        template<>
        struct is_topic_type< UMAA::SEM::GPSFixStatus::GPSFixStatusReportType > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< UMAA::SEM::GPSFixStatus::GPSFixStatusReportType > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const UMAA::SEM::GPSFixStatus::GPSFixStatusReportType& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(UMAA::SEM::GPSFixStatus::GPSFixStatusReportType& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(UMAA::SEM::GPSFixStatus::GPSFixStatusReportType& sample);

            NDDSUSERDllExport 
            static void allocate_sample(UMAA::SEM::GPSFixStatus::GPSFixStatusReportType& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };

    }
}

namespace rti { 
    namespace topic {

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct dynamic_type< UMAA::SEM::GPSFixStatus::GPSFixStatusReportType > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };
        #endif

        template <>
        struct extensibility< UMAA::SEM::GPSFixStatus::GPSFixStatusReportType > {
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

#endif // GPSFixStatusReportType_537848047_hpp

