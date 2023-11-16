

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from EngineRPM.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#include <iosfwd>
#include <iomanip>

#include "rti/topic/cdr/Serialization.hpp"

#include "EngineRPM.hpp"
#include "EngineRPMPlugin.hpp"

#include <rti/util/ostream_operators.hpp>

namespace UMAA {

    namespace Common {

        namespace Speed {

            // ---- EngineRPM: 

            EngineRPM::EngineRPM() :
                m_RPM_ (0.0)  {
            }   

            EngineRPM::EngineRPM (double RPM):
                m_RPM_( RPM ) {
            }

            #ifdef RTI_CXX11_RVALUE_REFERENCES
            #ifdef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
            EngineRPM::EngineRPM(EngineRPM&& other_) OMG_NOEXCEPT  :m_RPM_ (std::move(other_.m_RPM_))
            {
            } 

            EngineRPM& EngineRPM::operator=(EngineRPM&&  other_) OMG_NOEXCEPT {
                EngineRPM tmp(std::move(other_));
                swap(tmp); 
                return *this;
            }
            #endif
            #endif   

            void EngineRPM::swap(EngineRPM& other_)  OMG_NOEXCEPT 
            {
                using std::swap;
                swap(m_RPM_, other_.m_RPM_);
            }  

            bool EngineRPM::operator == (const EngineRPM& other_) const {
                if (m_RPM_ != other_.m_RPM_) {
                    return false;
                }
                return true;
            }
            bool EngineRPM::operator != (const EngineRPM& other_) const {
                return !this->operator ==(other_);
            }

            std::ostream& operator << (std::ostream& o,const EngineRPM& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                o <<"[";
                o << "RPM: " << std::setprecision(15) <<sample.RPM() ;
                o <<"]";
                return o;
            }

        } // namespace Speed  

    } // namespace Common  

} // namespace UMAA  

// --- Type traits: -------------------------------------------------

namespace rti { 
    namespace topic {

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct native_type_code< UMAA::Common::Speed::EngineRPM > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member EngineRPM_g_tc_members[1]=
                {

                    {
                        (char *)"RPM",/* Member name */
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
                    }
                };

                static DDS_TypeCode EngineRPM_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::Common::Speed::EngineRPM", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        1, /* Number of members */
                        EngineRPM_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for EngineRPM*/

                if (is_initialized) {
                    return &EngineRPM_g_tc;
                }

                EngineRPM_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                EngineRPM_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::EngineSpeed_AliasTag_t>::get().native();

                /* Initialize the values for member annotations. */
                EngineRPM_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                EngineRPM_g_tc_members[0]._annotations._defaultValue._u.double_value = 0.0;
                EngineRPM_g_tc_members[0]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                EngineRPM_g_tc_members[0]._annotations._minValue._u.double_value = -100000LL;
                EngineRPM_g_tc_members[0]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                EngineRPM_g_tc_members[0]._annotations._maxValue._u.double_value = 100000ULL;

                EngineRPM_g_tc._data._sampleAccessInfo = sample_access_info();
                EngineRPM_g_tc._data._typePlugin = type_plugin_info();    

                is_initialized = RTI_TRUE;

                return &EngineRPM_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                UMAA::Common::Speed::EngineRPM *sample;

                static RTIXCdrMemberAccessInfo EngineRPM_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo EngineRPM_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &EngineRPM_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    UMAA::Common::Speed::EngineRPM);
                if (sample == NULL) {
                    return NULL;
                }

                EngineRPM_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->RPM() - (char *)sample);

                EngineRPM_g_sampleAccessInfo.memberAccessInfos = 
                EngineRPM_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(UMAA::Common::Speed::EngineRPM);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        EngineRPM_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        EngineRPM_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                EngineRPM_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                EngineRPM_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< UMAA::Common::Speed::EngineRPM >;

                EngineRPM_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &EngineRPM_g_sampleAccessInfo;
            }

            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin EngineRPM_g_typePlugin = 
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

                return &EngineRPM_g_typePlugin;
            }
        }; // native_type_code
        #endif

        const ::dds::core::xtypes::StructType& dynamic_type< UMAA::Common::Speed::EngineRPM >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< UMAA::Common::Speed::EngineRPM >::get())));
        }

    }
}

namespace dds { 
    namespace topic {
        void topic_type_support< UMAA::Common::Speed::EngineRPM >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                UMAA::Common::Speed::EngineRPMPlugin_new,
                UMAA::Common::Speed::EngineRPMPlugin_delete);
        }

        std::vector<char>& topic_type_support< UMAA::Common::Speed::EngineRPM >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const UMAA::Common::Speed::EngineRPM& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = EngineRPMPlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = EngineRPMPlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< UMAA::Common::Speed::EngineRPM >::from_cdr_buffer(UMAA::Common::Speed::EngineRPM& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = EngineRPMPlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create UMAA::Common::Speed::EngineRPM from cdr buffer");
        }

        void topic_type_support< UMAA::Common::Speed::EngineRPM >::reset_sample(UMAA::Common::Speed::EngineRPM& sample) 
        {
            sample.RPM(0.0);
        }

        void topic_type_support< UMAA::Common::Speed::EngineRPM >::allocate_sample(UMAA::Common::Speed::EngineRPM& sample, int, int) 
        {
            RTIOsapiUtility_unusedParameter(sample);
        }

    }
}  

