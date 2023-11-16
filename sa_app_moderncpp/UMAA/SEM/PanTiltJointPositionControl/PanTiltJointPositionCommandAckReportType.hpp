

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from PanTiltJointPositionCommandAckReportType.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef PanTiltJointPositionCommandAckReportType_1947635759_hpp
#define PanTiltJointPositionCommandAckReportType_1947635759_hpp

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
        namespace PanTiltJointPositionControl {

            static const std::string PanTiltJointPositionCommandAckReport_TOPIC = "UMAA::SEM::PanTiltJointPositionControl::PanTiltJointPositionCommandAckReport";

            class NDDSUSERDllExport PanTiltJointPositionCommandAckReportType {
              public:
                PanTiltJointPositionCommandAckReportType();

                PanTiltJointPositionCommandAckReportType(double pan,double tilt,const UMAA::Common::Measurement::NumericGUID& source,const UMAA::Common::Measurement::NumericGUID& sessionID);

                #ifdef RTI_CXX11_RVALUE_REFERENCES
                #ifndef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
                PanTiltJointPositionCommandAckReportType (PanTiltJointPositionCommandAckReportType&&) = default;
                PanTiltJointPositionCommandAckReportType& operator=(PanTiltJointPositionCommandAckReportType&&) = default;
                PanTiltJointPositionCommandAckReportType& operator=(const PanTiltJointPositionCommandAckReportType&) = default;
                PanTiltJointPositionCommandAckReportType(const PanTiltJointPositionCommandAckReportType&) = default;
                #else
                PanTiltJointPositionCommandAckReportType(PanTiltJointPositionCommandAckReportType&& other_) OMG_NOEXCEPT;  
                PanTiltJointPositionCommandAckReportType& operator=(PanTiltJointPositionCommandAckReportType&&  other_) OMG_NOEXCEPT;
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
                UMAA::Common::Measurement::NumericGUID& sessionID() OMG_NOEXCEPT {
                    return m_sessionID_;
                }

                const UMAA::Common::Measurement::NumericGUID& sessionID() const OMG_NOEXCEPT {
                    return m_sessionID_;
                }

                void sessionID(const UMAA::Common::Measurement::NumericGUID& value) {
                    m_sessionID_ = value;
                }

                void sessionID(UMAA::Common::Measurement::NumericGUID&& value) {
                    m_sessionID_ = std::move(value);
                }

                bool operator == (const PanTiltJointPositionCommandAckReportType& other_) const;
                bool operator != (const PanTiltJointPositionCommandAckReportType& other_) const;

                void swap(PanTiltJointPositionCommandAckReportType& other_) OMG_NOEXCEPT ;

              private:

                double m_pan_;
                double m_tilt_;
                UMAA::Common::Measurement::NumericGUID m_source_;
                UMAA::Common::Measurement::NumericGUID m_sessionID_;

            };

            inline void swap(PanTiltJointPositionCommandAckReportType& a, PanTiltJointPositionCommandAckReportType& b)  OMG_NOEXCEPT 
            {
                a.swap(b);
            }

            NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const PanTiltJointPositionCommandAckReportType& sample);

        } // namespace PanTiltJointPositionControl  
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
        struct topic_type_name< UMAA::SEM::PanTiltJointPositionControl::PanTiltJointPositionCommandAckReportType > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::SEM::PanTiltJointPositionControl::PanTiltJointPositionCommandAckReportType";
            }
        };

        template<>
        struct is_topic_type< UMAA::SEM::PanTiltJointPositionControl::PanTiltJointPositionCommandAckReportType > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< UMAA::SEM::PanTiltJointPositionControl::PanTiltJointPositionCommandAckReportType > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const UMAA::SEM::PanTiltJointPositionControl::PanTiltJointPositionCommandAckReportType& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(UMAA::SEM::PanTiltJointPositionControl::PanTiltJointPositionCommandAckReportType& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(UMAA::SEM::PanTiltJointPositionControl::PanTiltJointPositionCommandAckReportType& sample);

            NDDSUSERDllExport 
            static void allocate_sample(UMAA::SEM::PanTiltJointPositionControl::PanTiltJointPositionCommandAckReportType& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };

    }
}

namespace rti { 
    namespace topic {

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct dynamic_type< UMAA::SEM::PanTiltJointPositionControl::PanTiltJointPositionCommandAckReportType > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };
        #endif

        template <>
        struct extensibility< UMAA::SEM::PanTiltJointPositionControl::PanTiltJointPositionCommandAckReportType > {
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

#endif // PanTiltJointPositionCommandAckReportType_1947635759_hpp

