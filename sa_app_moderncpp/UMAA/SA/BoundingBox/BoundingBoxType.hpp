

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from BoundingBoxType.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef BoundingBoxType_139266429_hpp
#define BoundingBoxType_139266429_hpp

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
    namespace SA {
        namespace BoundingBox {

            class NDDSUSERDllExport BoundingBoxType {
              public:
                BoundingBoxType();

                BoundingBoxType(int32_t lowerRight_x,int32_t lowerRight_y,int32_t upperLeft_x,int32_t upperLeft_y);

                #ifdef RTI_CXX11_RVALUE_REFERENCES
                #ifndef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
                BoundingBoxType (BoundingBoxType&&) = default;
                BoundingBoxType& operator=(BoundingBoxType&&) = default;
                BoundingBoxType& operator=(const BoundingBoxType&) = default;
                BoundingBoxType(const BoundingBoxType&) = default;
                #else
                BoundingBoxType(BoundingBoxType&& other_) OMG_NOEXCEPT;  
                BoundingBoxType& operator=(BoundingBoxType&&  other_) OMG_NOEXCEPT;
                #endif
                #endif 

                int32_t& lowerRight_x() OMG_NOEXCEPT {
                    return m_lowerRight_x_;
                }

                const int32_t& lowerRight_x() const OMG_NOEXCEPT {
                    return m_lowerRight_x_;
                }

                void lowerRight_x(int32_t value) {
                    m_lowerRight_x_ = value;
                }

                int32_t& lowerRight_y() OMG_NOEXCEPT {
                    return m_lowerRight_y_;
                }

                const int32_t& lowerRight_y() const OMG_NOEXCEPT {
                    return m_lowerRight_y_;
                }

                void lowerRight_y(int32_t value) {
                    m_lowerRight_y_ = value;
                }

                int32_t& upperLeft_x() OMG_NOEXCEPT {
                    return m_upperLeft_x_;
                }

                const int32_t& upperLeft_x() const OMG_NOEXCEPT {
                    return m_upperLeft_x_;
                }

                void upperLeft_x(int32_t value) {
                    m_upperLeft_x_ = value;
                }

                int32_t& upperLeft_y() OMG_NOEXCEPT {
                    return m_upperLeft_y_;
                }

                const int32_t& upperLeft_y() const OMG_NOEXCEPT {
                    return m_upperLeft_y_;
                }

                void upperLeft_y(int32_t value) {
                    m_upperLeft_y_ = value;
                }

                bool operator == (const BoundingBoxType& other_) const;
                bool operator != (const BoundingBoxType& other_) const;

                void swap(BoundingBoxType& other_) OMG_NOEXCEPT ;

              private:

                int32_t m_lowerRight_x_;
                int32_t m_lowerRight_y_;
                int32_t m_upperLeft_x_;
                int32_t m_upperLeft_y_;

            };

            inline void swap(BoundingBoxType& a, BoundingBoxType& b)  OMG_NOEXCEPT 
            {
                a.swap(b);
            }

            NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const BoundingBoxType& sample);

        } // namespace BoundingBox  
    } // namespace SA  
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
        struct topic_type_name< UMAA::SA::BoundingBox::BoundingBoxType > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::SA::BoundingBox::BoundingBoxType";
            }
        };

        template<>
        struct is_topic_type< UMAA::SA::BoundingBox::BoundingBoxType > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< UMAA::SA::BoundingBox::BoundingBoxType > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const UMAA::SA::BoundingBox::BoundingBoxType& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(UMAA::SA::BoundingBox::BoundingBoxType& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(UMAA::SA::BoundingBox::BoundingBoxType& sample);

            NDDSUSERDllExport 
            static void allocate_sample(UMAA::SA::BoundingBox::BoundingBoxType& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };

    }
}

namespace rti { 
    namespace topic {

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct dynamic_type< UMAA::SA::BoundingBox::BoundingBoxType > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };
        #endif

        template <>
        struct extensibility< UMAA::SA::BoundingBox::BoundingBoxType > {
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

#endif // BoundingBoxType_139266429_hpp

