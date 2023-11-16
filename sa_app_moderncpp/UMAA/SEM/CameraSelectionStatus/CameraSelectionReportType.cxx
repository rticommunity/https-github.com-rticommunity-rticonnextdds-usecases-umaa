

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from CameraSelectionReportType.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#include <iosfwd>
#include <iomanip>

#include "rti/topic/cdr/Serialization.hpp"

#include "CameraSelectionReportType.hpp"
#include "CameraSelectionReportTypePlugin.hpp"

#include <rti/util/ostream_operators.hpp>

namespace UMAA {

    namespace SEM {

        namespace CameraSelectionStatus {

            // ---- CameraSelectionReportType: 

            CameraSelectionReportType::CameraSelectionReportType()  {
                ::rti::core::fill_array( 
                    m_cameraID_, 
                    ::rti::topic::cdr::alias_helper< UMAA::Common::Measurement::NumericGUID::value_type >::default_value());
                ::rti::core::fill_array( 
                    m_source_, 
                    ::rti::topic::cdr::alias_helper< UMAA::Common::Measurement::NumericGUID::value_type >::default_value());
                ::rti::core::fill_array( 
                    m_muxID_, 
                    ::rti::topic::cdr::alias_helper< UMAA::Common::Measurement::NumericGUID::value_type >::default_value());
            }   

            CameraSelectionReportType::CameraSelectionReportType (const UMAA::Common::Measurement::NumericGUID& cameraID,const UMAA::Common::Measurement::NumericGUID& source,const UMAA::Common::Measurement::DateTime& timeStamp,const UMAA::Common::Measurement::NumericGUID& muxID):
                m_cameraID_( cameraID ),
                m_source_( source ),
                m_timeStamp_( timeStamp ),
                m_muxID_( muxID ) {
            }

            #ifdef RTI_CXX11_RVALUE_REFERENCES
            #ifdef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
            CameraSelectionReportType::CameraSelectionReportType(CameraSelectionReportType&& other_) OMG_NOEXCEPT  :m_cameraID_ (std::move(other_.m_cameraID_))
            ,
            m_source_ (std::move(other_.m_source_))
            ,
            m_timeStamp_ (std::move(other_.m_timeStamp_))
            ,
            m_muxID_ (std::move(other_.m_muxID_))
            {
            } 

            CameraSelectionReportType& CameraSelectionReportType::operator=(CameraSelectionReportType&&  other_) OMG_NOEXCEPT {
                CameraSelectionReportType tmp(std::move(other_));
                swap(tmp); 
                return *this;
            }
            #endif
            #endif   

            void CameraSelectionReportType::swap(CameraSelectionReportType& other_)  OMG_NOEXCEPT 
            {
                using std::swap;
                swap(m_cameraID_, other_.m_cameraID_);
                swap(m_source_, other_.m_source_);
                swap(m_timeStamp_, other_.m_timeStamp_);
                swap(m_muxID_, other_.m_muxID_);
            }  

            bool CameraSelectionReportType::operator == (const CameraSelectionReportType& other_) const {
                if (m_cameraID_ != other_.m_cameraID_) {
                    return false;
                }
                if (m_source_ != other_.m_source_) {
                    return false;
                }
                if (m_timeStamp_ != other_.m_timeStamp_) {
                    return false;
                }
                if (m_muxID_ != other_.m_muxID_) {
                    return false;
                }
                return true;
            }
            bool CameraSelectionReportType::operator != (const CameraSelectionReportType& other_) const {
                return !this->operator ==(other_);
            }

            std::ostream& operator << (std::ostream& o,const CameraSelectionReportType& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                o <<"[";
                o << "cameraID: " << sample.cameraID()<<", ";
                o << "source: " << sample.source()<<", ";
                o << "timeStamp: " << sample.timeStamp()<<", ";
                o << "muxID: " << sample.muxID() ;
                o <<"]";
                return o;
            }

        } // namespace CameraSelectionStatus  

    } // namespace SEM  

} // namespace UMAA  

// --- Type traits: -------------------------------------------------

namespace rti { 
    namespace topic {

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct native_type_code< UMAA::SEM::CameraSelectionStatus::CameraSelectionReportType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member CameraSelectionReportType_g_tc_members[4]=
                {

                    {
                        (char *)"cameraID",/* Member name */
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
                        (char *)"source",/* Member name */
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
                        RTI_CDR_KEY_MEMBER , /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"timeStamp",/* Member name */
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
                        (char *)"muxID",/* Member name */
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

                static DDS_TypeCode CameraSelectionReportType_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::SEM::CameraSelectionStatus::CameraSelectionReportType", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        4, /* Number of members */
                        CameraSelectionReportType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for CameraSelectionReportType*/

                if (is_initialized) {
                    return &CameraSelectionReportType_g_tc;
                }

                CameraSelectionReportType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                CameraSelectionReportType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::NumericGUID_AliasTag_t>::get().native();
                CameraSelectionReportType_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::NumericGUID_AliasTag_t>::get().native();
                CameraSelectionReportType_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::DateTime>::get().native();
                CameraSelectionReportType_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::NumericGUID_AliasTag_t>::get().native();

                /* Initialize the values for member annotations. */

                CameraSelectionReportType_g_tc._data._sampleAccessInfo = sample_access_info();
                CameraSelectionReportType_g_tc._data._typePlugin = type_plugin_info();    

                is_initialized = RTI_TRUE;

                return &CameraSelectionReportType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                UMAA::SEM::CameraSelectionStatus::CameraSelectionReportType *sample;

                static RTIXCdrMemberAccessInfo CameraSelectionReportType_g_memberAccessInfos[4] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo CameraSelectionReportType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &CameraSelectionReportType_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    UMAA::SEM::CameraSelectionStatus::CameraSelectionReportType);
                if (sample == NULL) {
                    return NULL;
                }

                CameraSelectionReportType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->cameraID() - (char *)sample);

                CameraSelectionReportType_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->source() - (char *)sample);

                CameraSelectionReportType_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->timeStamp() - (char *)sample);

                CameraSelectionReportType_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->muxID() - (char *)sample);

                CameraSelectionReportType_g_sampleAccessInfo.memberAccessInfos = 
                CameraSelectionReportType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(UMAA::SEM::CameraSelectionStatus::CameraSelectionReportType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        CameraSelectionReportType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        CameraSelectionReportType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                CameraSelectionReportType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                CameraSelectionReportType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< UMAA::SEM::CameraSelectionStatus::CameraSelectionReportType >;

                CameraSelectionReportType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &CameraSelectionReportType_g_sampleAccessInfo;
            }

            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin CameraSelectionReportType_g_typePlugin = 
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

                return &CameraSelectionReportType_g_typePlugin;
            }
        }; // native_type_code
        #endif

        const ::dds::core::xtypes::StructType& dynamic_type< UMAA::SEM::CameraSelectionStatus::CameraSelectionReportType >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< UMAA::SEM::CameraSelectionStatus::CameraSelectionReportType >::get())));
        }

    }
}

namespace dds { 
    namespace topic {
        void topic_type_support< UMAA::SEM::CameraSelectionStatus::CameraSelectionReportType >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                UMAA::SEM::CameraSelectionStatus::CameraSelectionReportTypePlugin_new,
                UMAA::SEM::CameraSelectionStatus::CameraSelectionReportTypePlugin_delete);
        }

        std::vector<char>& topic_type_support< UMAA::SEM::CameraSelectionStatus::CameraSelectionReportType >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const UMAA::SEM::CameraSelectionStatus::CameraSelectionReportType& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = CameraSelectionReportTypePlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = CameraSelectionReportTypePlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< UMAA::SEM::CameraSelectionStatus::CameraSelectionReportType >::from_cdr_buffer(UMAA::SEM::CameraSelectionStatus::CameraSelectionReportType& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = CameraSelectionReportTypePlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create UMAA::SEM::CameraSelectionStatus::CameraSelectionReportType from cdr buffer");
        }

        void topic_type_support< UMAA::SEM::CameraSelectionStatus::CameraSelectionReportType >::reset_sample(UMAA::SEM::CameraSelectionStatus::CameraSelectionReportType& sample) 
        {
            ::rti::topic::reset_sample(sample.cameraID());
            ::rti::topic::reset_sample(sample.source());
            ::rti::topic::reset_sample(sample.timeStamp());
            ::rti::topic::reset_sample(sample.muxID());
        }

        void topic_type_support< UMAA::SEM::CameraSelectionStatus::CameraSelectionReportType >::allocate_sample(UMAA::SEM::CameraSelectionStatus::CameraSelectionReportType& sample, int, int) 
        {
            ::rti::topic::allocate_sample(sample.cameraID(),  -1, -1);
            ::rti::topic::allocate_sample(sample.source(),  -1, -1);
            ::rti::topic::allocate_sample(sample.timeStamp(),  -1, -1);
            ::rti::topic::allocate_sample(sample.muxID(),  -1, -1);
        }

    }
}  

