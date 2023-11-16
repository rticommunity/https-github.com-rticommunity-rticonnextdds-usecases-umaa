

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from BallastPumpCommandReportType.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef BallastPumpCommandReportType_1243770163_hpp
#define BallastPumpCommandReportType_1243770163_hpp

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
#include "UMAA/EO/BallastTank/BallastPumpFlowRateType.hpp"
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif
namespace UMAA {
    namespace EO {
        namespace BallastTank {

            static const std::string BallastPumpCommandReport_TOPIC = "UMAA::EO::BallastTank::BallastPumpCommandReport";

            class NDDSUSERDllExport BallastPumpCommandReportType {
              public:
                BallastPumpCommandReportType();

                BallastPumpCommandReportType(const UMAA::EO::BallastTank::BallastPumpFlowRateType& ballastPumpFlowRate,const UMAA::Common::Measurement::NumericGUID& source,const UMAA::Common::Measurement::DateTime& timeStamp);

                #ifdef RTI_CXX11_RVALUE_REFERENCES
                #ifndef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
                BallastPumpCommandReportType (BallastPumpCommandReportType&&) = default;
                BallastPumpCommandReportType& operator=(BallastPumpCommandReportType&&) = default;
                BallastPumpCommandReportType& operator=(const BallastPumpCommandReportType&) = default;
                BallastPumpCommandReportType(const BallastPumpCommandReportType&) = default;
                #else
                BallastPumpCommandReportType(BallastPumpCommandReportType&& other_) OMG_NOEXCEPT;  
                BallastPumpCommandReportType& operator=(BallastPumpCommandReportType&&  other_) OMG_NOEXCEPT;
                #endif
                #endif 

                UMAA::EO::BallastTank::BallastPumpFlowRateType& ballastPumpFlowRate() OMG_NOEXCEPT {
                    return m_ballastPumpFlowRate_;
                }

                const UMAA::EO::BallastTank::BallastPumpFlowRateType& ballastPumpFlowRate() const OMG_NOEXCEPT {
                    return m_ballastPumpFlowRate_;
                }

                void ballastPumpFlowRate(const UMAA::EO::BallastTank::BallastPumpFlowRateType& value) {
                    m_ballastPumpFlowRate_ = value;
                }

                void ballastPumpFlowRate(UMAA::EO::BallastTank::BallastPumpFlowRateType&& value) {
                    m_ballastPumpFlowRate_ = std::move(value);
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

                bool operator == (const BallastPumpCommandReportType& other_) const;
                bool operator != (const BallastPumpCommandReportType& other_) const;

                void swap(BallastPumpCommandReportType& other_) OMG_NOEXCEPT ;

              private:

                UMAA::EO::BallastTank::BallastPumpFlowRateType m_ballastPumpFlowRate_;
                UMAA::Common::Measurement::NumericGUID m_source_;
                UMAA::Common::Measurement::DateTime m_timeStamp_;

            };

            inline void swap(BallastPumpCommandReportType& a, BallastPumpCommandReportType& b)  OMG_NOEXCEPT 
            {
                a.swap(b);
            }

            NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const BallastPumpCommandReportType& sample);

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
        struct topic_type_name< UMAA::EO::BallastTank::BallastPumpCommandReportType > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::EO::BallastTank::BallastPumpCommandReportType";
            }
        };

        template<>
        struct is_topic_type< UMAA::EO::BallastTank::BallastPumpCommandReportType > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< UMAA::EO::BallastTank::BallastPumpCommandReportType > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const UMAA::EO::BallastTank::BallastPumpCommandReportType& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(UMAA::EO::BallastTank::BallastPumpCommandReportType& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(UMAA::EO::BallastTank::BallastPumpCommandReportType& sample);

            NDDSUSERDllExport 
            static void allocate_sample(UMAA::EO::BallastTank::BallastPumpCommandReportType& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };

    }
}

namespace rti { 
    namespace topic {

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct dynamic_type< UMAA::EO::BallastTank::BallastPumpCommandReportType > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };
        #endif

        template <>
        struct extensibility< UMAA::EO::BallastTank::BallastPumpCommandReportType > {
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

#endif // BallastPumpCommandReportType_1243770163_hpp

