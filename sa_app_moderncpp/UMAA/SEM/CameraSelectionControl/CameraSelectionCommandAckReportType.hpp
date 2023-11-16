

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from CameraSelectionCommandAckReportType.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef CameraSelectionCommandAckReportType_1472724794_hpp
#define CameraSelectionCommandAckReportType_1472724794_hpp

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
        namespace CameraSelectionControl {

            static const std::string CameraSelectionCommandAckReport_TOPIC = "UMAA::SEM::CameraSelectionControl::CameraSelectionCommandAckReport";

            class NDDSUSERDllExport CameraSelectionCommandAckReportType {
              public:
                CameraSelectionCommandAckReportType();

                CameraSelectionCommandAckReportType(const UMAA::Common::Measurement::NumericGUID& cameraID,const UMAA::Common::Measurement::NumericGUID& source,const UMAA::Common::Measurement::NumericGUID& sessionID,const UMAA::Common::Measurement::NumericGUID& muxID);

                #ifdef RTI_CXX11_RVALUE_REFERENCES
                #ifndef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
                CameraSelectionCommandAckReportType (CameraSelectionCommandAckReportType&&) = default;
                CameraSelectionCommandAckReportType& operator=(CameraSelectionCommandAckReportType&&) = default;
                CameraSelectionCommandAckReportType& operator=(const CameraSelectionCommandAckReportType&) = default;
                CameraSelectionCommandAckReportType(const CameraSelectionCommandAckReportType&) = default;
                #else
                CameraSelectionCommandAckReportType(CameraSelectionCommandAckReportType&& other_) OMG_NOEXCEPT;  
                CameraSelectionCommandAckReportType& operator=(CameraSelectionCommandAckReportType&&  other_) OMG_NOEXCEPT;
                #endif
                #endif 

                UMAA::Common::Measurement::NumericGUID& cameraID() OMG_NOEXCEPT {
                    return m_cameraID_;
                }

                const UMAA::Common::Measurement::NumericGUID& cameraID() const OMG_NOEXCEPT {
                    return m_cameraID_;
                }

                void cameraID(const UMAA::Common::Measurement::NumericGUID& value) {
                    m_cameraID_ = value;
                }

                void cameraID(UMAA::Common::Measurement::NumericGUID&& value) {
                    m_cameraID_ = std::move(value);
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
                UMAA::Common::Measurement::NumericGUID& muxID() OMG_NOEXCEPT {
                    return m_muxID_;
                }

                const UMAA::Common::Measurement::NumericGUID& muxID() const OMG_NOEXCEPT {
                    return m_muxID_;
                }

                void muxID(const UMAA::Common::Measurement::NumericGUID& value) {
                    m_muxID_ = value;
                }

                void muxID(UMAA::Common::Measurement::NumericGUID&& value) {
                    m_muxID_ = std::move(value);
                }

                bool operator == (const CameraSelectionCommandAckReportType& other_) const;
                bool operator != (const CameraSelectionCommandAckReportType& other_) const;

                void swap(CameraSelectionCommandAckReportType& other_) OMG_NOEXCEPT ;

              private:

                UMAA::Common::Measurement::NumericGUID m_cameraID_;
                UMAA::Common::Measurement::NumericGUID m_source_;
                UMAA::Common::Measurement::NumericGUID m_sessionID_;
                UMAA::Common::Measurement::NumericGUID m_muxID_;

            };

            inline void swap(CameraSelectionCommandAckReportType& a, CameraSelectionCommandAckReportType& b)  OMG_NOEXCEPT 
            {
                a.swap(b);
            }

            NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const CameraSelectionCommandAckReportType& sample);

        } // namespace CameraSelectionControl  
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
        struct topic_type_name< UMAA::SEM::CameraSelectionControl::CameraSelectionCommandAckReportType > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::SEM::CameraSelectionControl::CameraSelectionCommandAckReportType";
            }
        };

        template<>
        struct is_topic_type< UMAA::SEM::CameraSelectionControl::CameraSelectionCommandAckReportType > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< UMAA::SEM::CameraSelectionControl::CameraSelectionCommandAckReportType > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const UMAA::SEM::CameraSelectionControl::CameraSelectionCommandAckReportType& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(UMAA::SEM::CameraSelectionControl::CameraSelectionCommandAckReportType& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(UMAA::SEM::CameraSelectionControl::CameraSelectionCommandAckReportType& sample);

            NDDSUSERDllExport 
            static void allocate_sample(UMAA::SEM::CameraSelectionControl::CameraSelectionCommandAckReportType& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };

    }
}

namespace rti { 
    namespace topic {

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct dynamic_type< UMAA::SEM::CameraSelectionControl::CameraSelectionCommandAckReportType > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };
        #endif

        template <>
        struct extensibility< UMAA::SEM::CameraSelectionControl::CameraSelectionCommandAckReportType > {
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

#endif // CameraSelectionCommandAckReportType_1472724794_hpp

