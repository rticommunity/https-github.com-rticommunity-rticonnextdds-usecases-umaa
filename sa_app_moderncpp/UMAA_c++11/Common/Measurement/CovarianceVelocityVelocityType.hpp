

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from CovarianceVelocityVelocityType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef CovarianceVelocityVelocityType_542407613_hpp
#define CovarianceVelocityVelocityType_542407613_hpp

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
namespace UMAA {
    namespace Common {
        namespace Measurement {

            class NDDSUSERDllExport CovarianceVelocityVelocityType {
              public:

                CovarianceVelocityVelocityType();

                CovarianceVelocityVelocityType(const ::dds::core::optional< double >& vdVd_,const ::dds::core::optional< double >& veVd_,double veVe_,const ::dds::core::optional< double >& vnVd_,double vnVe_,double vnVn_);

                ::dds::core::optional< double >& vdVd() noexcept {
                    return m_vdVd_;
                }

                const ::dds::core::optional< double >& vdVd() const noexcept {
                    return m_vdVd_;
                }

                void vdVd(const ::dds::core::optional< double >& value) {

                    m_vdVd_ = value;
                }

                void vdVd(::dds::core::optional< double >&& value) {
                    m_vdVd_ = std::move(value);
                }
                ::dds::core::optional< double >& veVd() noexcept {
                    return m_veVd_;
                }

                const ::dds::core::optional< double >& veVd() const noexcept {
                    return m_veVd_;
                }

                void veVd(const ::dds::core::optional< double >& value) {

                    m_veVd_ = value;
                }

                void veVd(::dds::core::optional< double >&& value) {
                    m_veVd_ = std::move(value);
                }
                double& veVe() noexcept {
                    return m_veVe_;
                }

                const double& veVe() const noexcept {
                    return m_veVe_;
                }

                void veVe(double value) {

                    m_veVe_ = value;
                }

                ::dds::core::optional< double >& vnVd() noexcept {
                    return m_vnVd_;
                }

                const ::dds::core::optional< double >& vnVd() const noexcept {
                    return m_vnVd_;
                }

                void vnVd(const ::dds::core::optional< double >& value) {

                    m_vnVd_ = value;
                }

                void vnVd(::dds::core::optional< double >&& value) {
                    m_vnVd_ = std::move(value);
                }
                double& vnVe() noexcept {
                    return m_vnVe_;
                }

                const double& vnVe() const noexcept {
                    return m_vnVe_;
                }

                void vnVe(double value) {

                    m_vnVe_ = value;
                }

                double& vnVn() noexcept {
                    return m_vnVn_;
                }

                const double& vnVn() const noexcept {
                    return m_vnVn_;
                }

                void vnVn(double value) {

                    m_vnVn_ = value;
                }

                bool operator == (const CovarianceVelocityVelocityType& other_) const;
                bool operator != (const CovarianceVelocityVelocityType& other_) const;

                void swap(CovarianceVelocityVelocityType& other_) noexcept ;

              private:

                ::dds::core::optional< double > m_vdVd_;
                ::dds::core::optional< double > m_veVd_;
                double m_veVe_;
                ::dds::core::optional< double > m_vnVd_;
                double m_vnVe_;
                double m_vnVn_;

            };

            inline void swap(CovarianceVelocityVelocityType& a, CovarianceVelocityVelocityType& b)  noexcept 
            {
                a.swap(b);
            }

            NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const CovarianceVelocityVelocityType& sample);

        } // namespace Measurement  
    } // namespace Common  
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
        struct topic_type_name< ::UMAA::Common::Measurement::CovarianceVelocityVelocityType > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::Common::Measurement::CovarianceVelocityVelocityType";
            }
        };

        template<>
        struct is_topic_type< ::UMAA::Common::Measurement::CovarianceVelocityVelocityType > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< ::UMAA::Common::Measurement::CovarianceVelocityVelocityType > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const ::UMAA::Common::Measurement::CovarianceVelocityVelocityType& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(::UMAA::Common::Measurement::CovarianceVelocityVelocityType& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(::UMAA::Common::Measurement::CovarianceVelocityVelocityType& sample);

            NDDSUSERDllExport 
            static void allocate_sample(::UMAA::Common::Measurement::CovarianceVelocityVelocityType& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };
    }
}

namespace rti { 
    namespace topic {

        template<>
        struct dynamic_type< ::UMAA::Common::Measurement::CovarianceVelocityVelocityType > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };

        template <>
        struct extensibility< ::UMAA::Common::Measurement::CovarianceVelocityVelocityType > {
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

#endif // CovarianceVelocityVelocityType_542407613_hpp

