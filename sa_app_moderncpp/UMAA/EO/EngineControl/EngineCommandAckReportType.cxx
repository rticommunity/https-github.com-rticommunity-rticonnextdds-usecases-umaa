

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from EngineCommandAckReportType.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#include <iosfwd>
#include <iomanip>

#include "rti/topic/cdr/Serialization.hpp"

#include "EngineCommandAckReportType.hpp"
#include "EngineCommandAckReportTypePlugin.hpp"

#include <rti/util/ostream_operators.hpp>

namespace UMAA {

    namespace EO {

        namespace EngineControl {

            // ---- EngineCommandAckReportType: 

            EngineCommandAckReportType::EngineCommandAckReportType() :
                m_state_(UMAA::Common::MaritimeEnumeration::IgnitionStateEnumType::IgnitionStateEnumType::OFF)  {
                    ::rti::core::fill_array( 
                        m_source_, 
                        ::rti::topic::cdr::alias_helper< UMAA::Common::Measurement::NumericGUID::value_type >::default_value());
                    ::rti::core::fill_array( 
                        m_sessionID_, 
                        ::rti::topic::cdr::alias_helper< UMAA::Common::Measurement::NumericGUID::value_type >::default_value());
            }   

            EngineCommandAckReportType::EngineCommandAckReportType (const ::dds::core::optional< UMAA::Common::Enumeration::OnOffStatusEnumType::OnOffStatusEnumType >& plugState,const UMAA::Common::Propulsion::PropulsionType& propulsion,const UMAA::Common::MaritimeEnumeration::IgnitionStateEnumType::IgnitionStateEnumType& state,const UMAA::Common::Measurement::NumericGUID& source,const UMAA::Common::Measurement::NumericGUID& sessionID):
                m_plugState_( plugState ),
                m_propulsion_( propulsion ),
                m_state_( state ),
                m_source_( source ),
                m_sessionID_( sessionID ) {
            }

            #ifdef RTI_CXX11_RVALUE_REFERENCES
            #ifdef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
            EngineCommandAckReportType::EngineCommandAckReportType(EngineCommandAckReportType&& other_) OMG_NOEXCEPT  :m_plugState_ (std::move(other_.m_plugState_))
            ,
            m_propulsion_ (std::move(other_.m_propulsion_))
            ,
            m_state_ (std::move(other_.m_state_))
            ,
            m_source_ (std::move(other_.m_source_))
            ,
            m_sessionID_ (std::move(other_.m_sessionID_))
            {
            } 

            EngineCommandAckReportType& EngineCommandAckReportType::operator=(EngineCommandAckReportType&&  other_) OMG_NOEXCEPT {
                EngineCommandAckReportType tmp(std::move(other_));
                swap(tmp); 
                return *this;
            }
            #endif
            #endif   

            void EngineCommandAckReportType::swap(EngineCommandAckReportType& other_)  OMG_NOEXCEPT 
            {
                using std::swap;
                swap(m_plugState_, other_.m_plugState_);
                swap(m_propulsion_, other_.m_propulsion_);
                swap(m_state_, other_.m_state_);
                swap(m_source_, other_.m_source_);
                swap(m_sessionID_, other_.m_sessionID_);
            }  

            bool EngineCommandAckReportType::operator == (const EngineCommandAckReportType& other_) const {
                if (m_plugState_ != other_.m_plugState_) {
                    return false;
                }
                if (m_propulsion_ != other_.m_propulsion_) {
                    return false;
                }
                if (m_state_ != other_.m_state_) {
                    return false;
                }
                if (m_source_ != other_.m_source_) {
                    return false;
                }
                if (m_sessionID_ != other_.m_sessionID_) {
                    return false;
                }
                return true;
            }
            bool EngineCommandAckReportType::operator != (const EngineCommandAckReportType& other_) const {
                return !this->operator ==(other_);
            }

            std::ostream& operator << (std::ostream& o,const EngineCommandAckReportType& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                o <<"[";
                o << "plugState: " << sample.plugState()<<", ";
                o << "propulsion: " << sample.propulsion()<<", ";
                o << "state: " << sample.state()<<", ";
                o << "source: " << sample.source()<<", ";
                o << "sessionID: " << sample.sessionID() ;
                o <<"]";
                return o;
            }

        } // namespace EngineControl  

    } // namespace EO  

} // namespace UMAA  

// --- Type traits: -------------------------------------------------

namespace rti { 
    namespace topic {

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct native_type_code< UMAA::EO::EngineControl::EngineCommandAckReportType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member EngineCommandAckReportType_g_tc_members[5]=
                {

                    {
                        (char *)"plugState",/* Member name */
                        {
                            0,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_NONKEY_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"propulsion",/* Member name */
                        {
                            1,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"state",/* Member name */
                        {
                            2,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"source",/* Member name */
                        {
                            3,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_KEY_MEMBER , /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"sessionID",/* Member name */
                        {
                            4,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_KEY_MEMBER , /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }
                };

                static DDS_TypeCode EngineCommandAckReportType_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::EO::EngineControl::EngineCommandAckReportType", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        5, /* Number of members */
                        EngineCommandAckReportType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for EngineCommandAckReportType*/

                if (is_initialized) {
                    return &EngineCommandAckReportType_g_tc;
                }

                EngineCommandAckReportType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                EngineCommandAckReportType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Enumeration::OnOffStatusEnumType::OnOffStatusEnumType>::get().native();
                EngineCommandAckReportType_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Propulsion::PropulsionType>::get().native();
                EngineCommandAckReportType_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::MaritimeEnumeration::IgnitionStateEnumType::IgnitionStateEnumType>::get().native();
                EngineCommandAckReportType_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::NumericGUID_AliasTag_t>::get().native();
                EngineCommandAckReportType_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::NumericGUID_AliasTag_t>::get().native();

                /* Initialize the values for member annotations. */

                EngineCommandAckReportType_g_tc_members[2]._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
                EngineCommandAckReportType_g_tc_members[2]._annotations._defaultValue._u.enumerated_value = 0;

                EngineCommandAckReportType_g_tc._data._sampleAccessInfo = sample_access_info();
                EngineCommandAckReportType_g_tc._data._typePlugin = type_plugin_info();    

                is_initialized = RTI_TRUE;

                return &EngineCommandAckReportType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                UMAA::EO::EngineControl::EngineCommandAckReportType *sample;

                static RTIXCdrMemberAccessInfo EngineCommandAckReportType_g_memberAccessInfos[5] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo EngineCommandAckReportType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &EngineCommandAckReportType_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    UMAA::EO::EngineControl::EngineCommandAckReportType);
                if (sample == NULL) {
                    return NULL;
                }

                EngineCommandAckReportType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->plugState() - (char *)sample);

                EngineCommandAckReportType_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->propulsion() - (char *)sample);

                EngineCommandAckReportType_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->state() - (char *)sample);

                EngineCommandAckReportType_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->source() - (char *)sample);

                EngineCommandAckReportType_g_memberAccessInfos[4].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->sessionID() - (char *)sample);

                EngineCommandAckReportType_g_sampleAccessInfo.memberAccessInfos = 
                EngineCommandAckReportType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(UMAA::EO::EngineControl::EngineCommandAckReportType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        EngineCommandAckReportType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        EngineCommandAckReportType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                EngineCommandAckReportType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                EngineCommandAckReportType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< UMAA::EO::EngineControl::EngineCommandAckReportType >;

                EngineCommandAckReportType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &EngineCommandAckReportType_g_sampleAccessInfo;
            }

            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin EngineCommandAckReportType_g_typePlugin = 
                {
                    NULL, /* serialize */
                    NULL, /* serialize_key */
                    NULL, /* deserialize_sample */
                    NULL, /* deserialize_key_sample */
                    NULL, /* skip */
                    NULL, /* get_serialized_sample_size */
                    NULL, /* get_serialized_sample_max_size_ex */
                    NULL, /* get_serialized_key_max_size_ex */
                    NULL, /* get_serialized_sample_min_size */
                    NULL, /* serialized_sample_to_key */
                    NULL,
                    NULL,
                    NULL,
                    NULL
                };

                return &EngineCommandAckReportType_g_typePlugin;
            }
        }; // native_type_code
        #endif

        const ::dds::core::xtypes::StructType& dynamic_type< UMAA::EO::EngineControl::EngineCommandAckReportType >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< UMAA::EO::EngineControl::EngineCommandAckReportType >::get())));
        }

    }
}

namespace dds { 
    namespace topic {
        void topic_type_support< UMAA::EO::EngineControl::EngineCommandAckReportType >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                UMAA::EO::EngineControl::EngineCommandAckReportTypePlugin_new,
                UMAA::EO::EngineControl::EngineCommandAckReportTypePlugin_delete);
        }

        std::vector<char>& topic_type_support< UMAA::EO::EngineControl::EngineCommandAckReportType >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const UMAA::EO::EngineControl::EngineCommandAckReportType& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = EngineCommandAckReportTypePlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = EngineCommandAckReportTypePlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< UMAA::EO::EngineControl::EngineCommandAckReportType >::from_cdr_buffer(UMAA::EO::EngineControl::EngineCommandAckReportType& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = EngineCommandAckReportTypePlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create UMAA::EO::EngineControl::EngineCommandAckReportType from cdr buffer");
        }

        void topic_type_support< UMAA::EO::EngineControl::EngineCommandAckReportType >::reset_sample(UMAA::EO::EngineControl::EngineCommandAckReportType& sample) 
        {
            ::rti::topic::reset_sample(sample.plugState());
            ::rti::topic::reset_sample(sample.propulsion());
            sample.state(UMAA::Common::MaritimeEnumeration::IgnitionStateEnumType::IgnitionStateEnumType::OFF);
            ::rti::topic::reset_sample(sample.source());
            ::rti::topic::reset_sample(sample.sessionID());
        }

        void topic_type_support< UMAA::EO::EngineControl::EngineCommandAckReportType >::allocate_sample(UMAA::EO::EngineControl::EngineCommandAckReportType& sample, int, int) 
        {
            ::rti::topic::allocate_sample(sample.propulsion(),  -1, -1);
            ::rti::topic::allocate_sample(sample.state(),  -1, -1);
            ::rti::topic::allocate_sample(sample.source(),  -1, -1);
            ::rti::topic::allocate_sample(sample.sessionID(),  -1, -1);
        }

    }
}  

