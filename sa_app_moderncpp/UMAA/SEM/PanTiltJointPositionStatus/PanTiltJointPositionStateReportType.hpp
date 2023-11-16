

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from PanTiltJointPositionStateReportType.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef PanTiltJointPositionStateReportType_1166442171_hpp
#define PanTiltJointPositionStateReportType_1166442171_hpp

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
namespace UMAA {
    namespace SEM {
        namespace PanTiltJointPositionStatus {

            static const std::string PanTiltJointPositionStateReport_TOPIC = "UMAA::SEM::PanTiltJointPositionStatus::PanTiltJointPositionStateReport";

            class NDDSUSERDllExport PanTiltJointPositionStateReportType {
              public:
                PanTiltJointPositionStateReportType();

                PanTiltJointPositionStateReportType(double pan,double tilt,const UMAA::Common::Measurement::NumericGUID& source,const UMAA::Common::Measurement::DateTime& timeStamp);

                #ifdef RTI_CXX11_RVALUE_REFERENCES
                #ifndef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
                PanTiltJointPositionStateReportType (PanTiltJointPositionStateReportType&&) = default;
                PanTiltJointPositionStateReportType& operator=(PanTiltJointPositionStateReportType&&) = default;
                PanTiltJointPositionStateReportType& operator=(const PanTiltJointPositionStateReportType&) = default;
                PanTiltJointPositionStateReportType(const PanTiltJointPositionStateReportType&) = default;
                #else
                PanTiltJointPositionStateReportType(PanTiltJointPositionStateReportType&& other_) OMG_NOEXCEPT;  
                PanTiltJointPositionStateReportType& operator=(PanTiltJointPositionStateReportType&&  other_) OMG_NOEXCEPT;
                #endif
                #endif 

                double& pan() OMG_NOEXCEPT {
                    return m_pan_;
                }

                const double& pan() const OMG_NOEXCEPT {
                    return m_pan_;
                }

                void pan(double value) {
                    m_pan_ = value;
                }

                double& tilt() OMG_NOEXCEPT {
                    return m_tilt_;
                }

                const double& tilt() const OMG_NOEXCEPT {
                    return m_tilt_;
                }

                void tilt(double value) {
                    m_tilt_ = value;
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

                bool operator == (const PanTiltJointPositionStateReportType& other_) const;
                bool operator != (const PanTiltJointPositionStateReportType& other_) const;

                void swap(PanTiltJointPositionStateReportType& other_) OMG_NOEXCEPT ;

              private:

                double m_pan_;
                double m_tilt_;
                UMAA::Common::Measurement::NumericGUID m_source_;
                UMAA::Common::Measurement::DateTime m_timeStamp_;

            };

            inline void swap(PanTiltJointPositionStateReportType& a, PanTiltJointPositionStateReportType& b)  OMG_NOEXCEPT 
            {
                a.swap(b);
            }

            NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const PanTiltJointPositionStateReportType& sample);

        } // namespace PanTiltJointPositionStatus  
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
        struct topic_type_name< UMAA::SEM::PanTiltJointPositionStatus::PanTiltJointPositionStateReportType > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::SEM::PanTiltJointPositionStatus::PanTiltJointPositionStateReportType";
            }
        };

        template<>
        struct is_topic_type< UMAA::SEM::PanTiltJointPositionStatus::PanTiltJointPositionStateReportType > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< UMAA::SEM::PanTiltJointPositionStatus::PanTiltJointPositionStateReportType > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const UMAA::SEM::PanTiltJointPositionStatus::PanTiltJointPositionStateReportType& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(UMAA::SEM::PanTiltJointPositionStatus::PanTiltJointPositionStateReportType& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(UMAA::SEM::PanTiltJointPositionStatus::PanTiltJointPositionStateReportType& sample);

            NDDSUSERDllExport 
            static void allocate_sample(UMAA::SEM::PanTiltJointPositionStatus::PanTiltJointPositionStateReportType& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };

    }
}

namespace rti { 
    namespace topic {

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct dynamic_type< UMAA::SEM::PanTiltJointPositionStatus::PanTiltJointPositionStateReportType > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };
        #endif

        template <>
        struct extensibility< UMAA::SEM::PanTiltJointPositionStatus::PanTiltJointPositionStateReportType > {
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

#endif // PanTiltJointPositionStateReportType_1166442171_hpp

