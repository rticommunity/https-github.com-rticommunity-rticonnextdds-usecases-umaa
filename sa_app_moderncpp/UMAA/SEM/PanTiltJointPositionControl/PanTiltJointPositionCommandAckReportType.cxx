

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from PanTiltJointPositionCommandAckReportType.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#include <iosfwd>
#include <iomanip>

#include "rti/topic/cdr/Serialization.hpp"

#include "PanTiltJointPositionCommandAckReportType.hpp"
#include "PanTiltJointPositionCommandAckReportTypePlugin.hpp"

#include <rti/util/ostream_operators.hpp>

namespace UMAA {

    namespace SEM {

        namespace PanTiltJointPositionControl {

            // ---- PanTiltJointPositionCommandAckReportType: 

            PanTiltJointPositionCommandAckReportType::PanTiltJointPositionCommandAckReportType() :
                m_pan_ (0.0) ,
                m_tilt_ (0.0)  {
                    ::rti::core::fill_array( 
                        m_source_, 
                        ::rti::topic::cdr::alias_helper< UMAA::Common::Measurement::NumericGUID::value_type >::default_value());
                    ::rti::core::fill_array( 
                        m_sessionID_, 
                        ::rti::topic::cdr::alias_helper< UMAA::Common::Measurement::NumericGUID::value_type >::default_value());
            }   

            PanTiltJointPositionCommandAckReportType::PanTiltJointPositionCommandAckReportType (double pan,double tilt,const UMAA::Common::Measurement::NumericGUID& source,const UMAA::Common::Measurement::NumericGUID& sessionID):
                m_pan_( pan ),
                m_tilt_( tilt ),
                m_source_( source ),
                m_sessionID_( sessionID ) {
            }

            #ifdef RTI_CXX11_RVALUE_REFERENCES
            #ifdef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
            PanTiltJointPositionCommandAckReportType::PanTiltJointPositionCommandAckReportType(PanTiltJointPositionCommandAckReportType&& other_) OMG_NOEXCEPT  :m_pan_ (std::move(other_.m_pan_))
            ,
            m_tilt_ (std::move(other_.m_tilt_))
            ,
            m_source_ (std::move(other_.m_source_))
            ,
            m_sessionID_ (std::move(other_.m_sessionID_))
            {
            } 

            PanTiltJointPositionCommandAckReportType& PanTiltJointPositionCommandAckReportType::operator=(PanTiltJointPositionCommandAckReportType&&  other_) OMG_NOEXCEPT {
                PanTiltJointPositionCommandAckReportType tmp(std::move(other_));
                swap(tmp); 
                return *this;
            }
            #endif
            #endif   

            void PanTiltJointPositionCommandAckReportType::swap(PanTiltJointPositionCommandAckReportType& other_)  OMG_NOEXCEPT 
            {
                using std::swap;
                swap(m_pan_, other_.m_pan_);
                swap(m_tilt_, other_.m_tilt_);
                swap(m_source_, other_.m_source_);
                swap(m_sessionID_, other_.m_sessionID_);
            }  

            bool PanTiltJointPositionCommandAckReportType::operator == (const PanTiltJointPositionCommandAckReportType& other_) const {
                if (m_pan_ != other_.m_pan_) {
                    return false;
                }
                if (m_tilt_ != other_.m_tilt_) {
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
            bool PanTiltJointPositionCommandAckReportType::operator != (const PanTiltJointPositionCommandAckReportType& other_) const {
                return !this->operator ==(other_);
            }

            std::ostream& operator << (std::ostream& o,const PanTiltJointPositionCommandAckReportType& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                o <<"[";
                o << "pan: " << std::setprecision(15) <<sample.pan()<<", ";
                o << "tilt: " << std::setprecision(15) <<sample.tilt()<<", ";
                o << "source: " << sample.source()<<", ";
                o << "sessionID: " << sample.sessionID() ;
                o <<"]";
                return o;
            }

        } // namespace PanTiltJointPositionControl  

    } // namespace SEM  

} // namespace UMAA  

// --- Type traits: -------------------------------------------------

namespace rti { 
    namespace topic {

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct native_type_code< UMAA::SEM::PanTiltJointPositionControl::PanTiltJointPositionCommandAckReportType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member PanTiltJointPositionCommandAckReportType_g_tc_members[4]=
                {

                    {
                        (char *)"pan",/* Member name */
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
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"tilt",/* Member name */
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
                        (char *)"source",/* Member name */
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
                        RTI_CDR_KEY_MEMBER , /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"sessionID",/* Member name */
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
                    }
                };

                static DDS_TypeCode PanTiltJointPositionCommandAckReportType_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::SEM::PanTiltJointPositionControl::PanTiltJointPositionCommandAckReportType", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        4, /* Number of members */
                        PanTiltJointPositionCommandAckReportType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for PanTiltJointPositionCommandAckReportType*/

                if (is_initialized) {
                    return &PanTiltJointPositionCommandAckReportType_g_tc;
                }

                PanTiltJointPositionCommandAckReportType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                PanTiltJointPositionCommandAckReportType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::Angle_AliasTag_t>::get().native();
                PanTiltJointPositionCommandAckReportType_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::Angle_AliasTag_t>::get().native();
                PanTiltJointPositionCommandAckReportType_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::NumericGUID_AliasTag_t>::get().native();
                PanTiltJointPositionCommandAckReportType_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::NumericGUID_AliasTag_t>::get().native();

                /* Initialize the values for member annotations. */
                PanTiltJointPositionCommandAckReportType_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                PanTiltJointPositionCommandAckReportType_g_tc_members[0]._annotations._defaultValue._u.double_value = 0.0;
                PanTiltJointPositionCommandAckReportType_g_tc_members[0]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                PanTiltJointPositionCommandAckReportType_g_tc_members[0]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                PanTiltJointPositionCommandAckReportType_g_tc_members[0]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                PanTiltJointPositionCommandAckReportType_g_tc_members[0]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                PanTiltJointPositionCommandAckReportType_g_tc_members[1]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                PanTiltJointPositionCommandAckReportType_g_tc_members[1]._annotations._defaultValue._u.double_value = 0.0;
                PanTiltJointPositionCommandAckReportType_g_tc_members[1]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                PanTiltJointPositionCommandAckReportType_g_tc_members[1]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                PanTiltJointPositionCommandAckReportType_g_tc_members[1]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                PanTiltJointPositionCommandAckReportType_g_tc_members[1]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                PanTiltJointPositionCommandAckReportType_g_tc._data._sampleAccessInfo = sample_access_info();
                PanTiltJointPositionCommandAckReportType_g_tc._data._typePlugin = type_plugin_info();    

                is_initialized = RTI_TRUE;

                return &PanTiltJointPositionCommandAckReportType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                UMAA::SEM::PanTiltJointPositionControl::PanTiltJointPositionCommandAckReportType *sample;

                static RTIXCdrMemberAccessInfo PanTiltJointPositionCommandAckReportType_g_memberAccessInfos[4] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo PanTiltJointPositionCommandAckReportType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &PanTiltJointPositionCommandAckReportType_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    UMAA::SEM::PanTiltJointPositionControl::PanTiltJointPositionCommandAckReportType);
                if (sample == NULL) {
                    return NULL;
                }

                PanTiltJointPositionCommandAckReportType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->pan() - (char *)sample);

                PanTiltJointPositionCommandAckReportType_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->tilt() - (char *)sample);

                PanTiltJointPositionCommandAckReportType_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->source() - (char *)sample);

                PanTiltJointPositionCommandAckReportType_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->sessionID() - (char *)sample);

                PanTiltJointPositionCommandAckReportType_g_sampleAccessInfo.memberAccessInfos = 
                PanTiltJointPositionCommandAckReportType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(UMAA::SEM::PanTiltJointPositionControl::PanTiltJointPositionCommandAckReportType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        PanTiltJointPositionCommandAckReportType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        PanTiltJointPositionCommandAckReportType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                PanTiltJointPositionCommandAckReportType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                PanTiltJointPositionCommandAckReportType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< UMAA::SEM::PanTiltJointPositionControl::PanTiltJointPositionCommandAckReportType >;

                PanTiltJointPositionCommandAckReportType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &PanTiltJointPositionCommandAckReportType_g_sampleAccessInfo;
            }

            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin PanTiltJointPositionCommandAckReportType_g_typePlugin = 
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

                return &PanTiltJointPositionCommandAckReportType_g_typePlugin;
            }
        }; // native_type_code
        #endif

        const ::dds::core::xtypes::StructType& dynamic_type< UMAA::SEM::PanTiltJointPositionControl::PanTiltJointPositionCommandAckReportType >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< UMAA::SEM::PanTiltJointPositionControl::PanTiltJointPositionCommandAckReportType >::get())));
        }

    }
}

namespace dds { 
    namespace topic {
        void topic_type_support< UMAA::SEM::PanTiltJointPositionControl::PanTiltJointPositionCommandAckReportType >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                UMAA::SEM::PanTiltJointPositionControl::PanTiltJointPositionCommandAckReportTypePlugin_new,
                UMAA::SEM::PanTiltJointPositionControl::PanTiltJointPositionCommandAckReportTypePlugin_delete);
        }

        std::vector<char>& topic_type_support< UMAA::SEM::PanTiltJointPositionControl::PanTiltJointPositionCommandAckReportType >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const UMAA::SEM::PanTiltJointPositionControl::PanTiltJointPositionCommandAckReportType& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = PanTiltJointPositionCommandAckReportTypePlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = PanTiltJointPositionCommandAckReportTypePlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< UMAA::SEM::PanTiltJointPositionControl::PanTiltJointPositionCommandAckReportType >::from_cdr_buffer(UMAA::SEM::PanTiltJointPositionControl::PanTiltJointPositionCommandAckReportType& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = PanTiltJointPositionCommandAckReportTypePlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create UMAA::SEM::PanTiltJointPositionControl::PanTiltJointPositionCommandAckReportType from cdr buffer");
        }

        void topic_type_support< UMAA::SEM::PanTiltJointPositionControl::PanTiltJointPositionCommandAckReportType >::reset_sample(UMAA::SEM::PanTiltJointPositionControl::PanTiltJointPositionCommandAckReportType& sample) 
        {
            sample.pan(0.0);
            sample.tilt(0.0);
            ::rti::topic::reset_sample(sample.source());
            ::rti::topic::reset_sample(sample.sessionID());
        }

        void topic_type_support< UMAA::SEM::PanTiltJointPositionControl::PanTiltJointPositionCommandAckReportType >::allocate_sample(UMAA::SEM::PanTiltJointPositionControl::PanTiltJointPositionCommandAckReportType& sample, int, int) 
        {
            ::rti::topic::allocate_sample(sample.source(),  -1, -1);
            ::rti::topic::allocate_sample(sample.sessionID(),  -1, -1);
        }

    }
}  

