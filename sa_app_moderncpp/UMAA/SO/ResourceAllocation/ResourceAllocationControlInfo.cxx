

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ResourceAllocationControlInfo.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#include <iosfwd>
#include <iomanip>

#include "rti/topic/cdr/Serialization.hpp"

#include "ResourceAllocationControlInfo.hpp"
#include "ResourceAllocationControlInfoPlugin.hpp"

#include <rti/util/ostream_operators.hpp>

namespace UMAA {

    namespace SO {

        namespace ResourceAllocation {

            // ---- ResourceAllocationControlInfo: 

            ResourceAllocationControlInfo::ResourceAllocationControlInfo()  {
                ::rti::core::fill_array( 
                    m_resourceId_, 
                    ::rti::topic::cdr::alias_helper< UMAA::Common::Measurement::NumericGUID::value_type >::default_value());
            }   

            ResourceAllocationControlInfo::ResourceAllocationControlInfo (const ::dds::core::optional< UMAA::SO::ResourceAllocation::ResourceAllocationControlSession >& controlSession,const UMAA::Common::Measurement::NumericGUID& resourceId):
                m_controlSession_( controlSession ),
                m_resourceId_( resourceId ) {
            }

            #ifdef RTI_CXX11_RVALUE_REFERENCES
            #ifdef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
            ResourceAllocationControlInfo::ResourceAllocationControlInfo(ResourceAllocationControlInfo&& other_) OMG_NOEXCEPT  :m_controlSession_ (std::move(other_.m_controlSession_))
            ,
            m_resourceId_ (std::move(other_.m_resourceId_))
            {
            } 

            ResourceAllocationControlInfo& ResourceAllocationControlInfo::operator=(ResourceAllocationControlInfo&&  other_) OMG_NOEXCEPT {
                ResourceAllocationControlInfo tmp(std::move(other_));
                swap(tmp); 
                return *this;
            }
            #endif
            #endif   

            void ResourceAllocationControlInfo::swap(ResourceAllocationControlInfo& other_)  OMG_NOEXCEPT 
            {
                using std::swap;
                swap(m_controlSession_, other_.m_controlSession_);
                swap(m_resourceId_, other_.m_resourceId_);
            }  

            bool ResourceAllocationControlInfo::operator == (const ResourceAllocationControlInfo& other_) const {
                if (m_controlSession_ != other_.m_controlSession_) {
                    return false;
                }
                if (m_resourceId_ != other_.m_resourceId_) {
                    return false;
                }
                return true;
            }
            bool ResourceAllocationControlInfo::operator != (const ResourceAllocationControlInfo& other_) const {
                return !this->operator ==(other_);
            }

            std::ostream& operator << (std::ostream& o,const ResourceAllocationControlInfo& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                o <<"[";
                o << "controlSession: " << sample.controlSession()<<", ";
                o << "resourceId: " << sample.resourceId() ;
                o <<"]";
                return o;
            }

        } // namespace ResourceAllocation  

    } // namespace SO  

} // namespace UMAA  

// --- Type traits: -------------------------------------------------

namespace rti { 
    namespace topic {

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct native_type_code< UMAA::SO::ResourceAllocation::ResourceAllocationControlInfo > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member ResourceAllocationControlInfo_g_tc_members[2]=
                {

                    {
                        (char *)"controlSession",/* Member name */
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
                        (char *)"resourceId",/* Member name */
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
                    }
                };

                static DDS_TypeCode ResourceAllocationControlInfo_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::SO::ResourceAllocation::ResourceAllocationControlInfo", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        2, /* Number of members */
                        ResourceAllocationControlInfo_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for ResourceAllocationControlInfo*/

                if (is_initialized) {
                    return &ResourceAllocationControlInfo_g_tc;
                }

                ResourceAllocationControlInfo_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                ResourceAllocationControlInfo_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::SO::ResourceAllocation::ResourceAllocationControlSession>::get().native();
                ResourceAllocationControlInfo_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::NumericGUID_AliasTag_t>::get().native();

                /* Initialize the values for member annotations. */

                ResourceAllocationControlInfo_g_tc._data._sampleAccessInfo = sample_access_info();
                ResourceAllocationControlInfo_g_tc._data._typePlugin = type_plugin_info();    

                is_initialized = RTI_TRUE;

                return &ResourceAllocationControlInfo_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                UMAA::SO::ResourceAllocation::ResourceAllocationControlInfo *sample;

                static RTIXCdrMemberAccessInfo ResourceAllocationControlInfo_g_memberAccessInfos[2] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo ResourceAllocationControlInfo_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &ResourceAllocationControlInfo_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    UMAA::SO::ResourceAllocation::ResourceAllocationControlInfo);
                if (sample == NULL) {
                    return NULL;
                }

                ResourceAllocationControlInfo_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->controlSession() - (char *)sample);

                ResourceAllocationControlInfo_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->resourceId() - (char *)sample);

                ResourceAllocationControlInfo_g_sampleAccessInfo.memberAccessInfos = 
                ResourceAllocationControlInfo_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(UMAA::SO::ResourceAllocation::ResourceAllocationControlInfo);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        ResourceAllocationControlInfo_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        ResourceAllocationControlInfo_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                ResourceAllocationControlInfo_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                ResourceAllocationControlInfo_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< UMAA::SO::ResourceAllocation::ResourceAllocationControlInfo >;

                ResourceAllocationControlInfo_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &ResourceAllocationControlInfo_g_sampleAccessInfo;
            }

            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin ResourceAllocationControlInfo_g_typePlugin = 
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

                return &ResourceAllocationControlInfo_g_typePlugin;
            }
        }; // native_type_code
        #endif

        const ::dds::core::xtypes::StructType& dynamic_type< UMAA::SO::ResourceAllocation::ResourceAllocationControlInfo >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< UMAA::SO::ResourceAllocation::ResourceAllocationControlInfo >::get())));
        }

    }
}

namespace dds { 
    namespace topic {
        void topic_type_support< UMAA::SO::ResourceAllocation::ResourceAllocationControlInfo >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                UMAA::SO::ResourceAllocation::ResourceAllocationControlInfoPlugin_new,
                UMAA::SO::ResourceAllocation::ResourceAllocationControlInfoPlugin_delete);
        }

        std::vector<char>& topic_type_support< UMAA::SO::ResourceAllocation::ResourceAllocationControlInfo >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const UMAA::SO::ResourceAllocation::ResourceAllocationControlInfo& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = ResourceAllocationControlInfoPlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = ResourceAllocationControlInfoPlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< UMAA::SO::ResourceAllocation::ResourceAllocationControlInfo >::from_cdr_buffer(UMAA::SO::ResourceAllocation::ResourceAllocationControlInfo& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = ResourceAllocationControlInfoPlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create UMAA::SO::ResourceAllocation::ResourceAllocationControlInfo from cdr buffer");
        }

        void topic_type_support< UMAA::SO::ResourceAllocation::ResourceAllocationControlInfo >::reset_sample(UMAA::SO::ResourceAllocation::ResourceAllocationControlInfo& sample) 
        {
            ::rti::topic::reset_sample(sample.controlSession());
            ::rti::topic::reset_sample(sample.resourceId());
        }

        void topic_type_support< UMAA::SO::ResourceAllocation::ResourceAllocationControlInfo >::allocate_sample(UMAA::SO::ResourceAllocation::ResourceAllocationControlInfo& sample, int, int) 
        {
            ::rti::topic::allocate_sample(sample.resourceId(),  -1, -1);
        }

    }
}  

