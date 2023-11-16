

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ProductDisseminateFileObjectiveType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#include <iosfwd>
#include <iomanip>

#ifndef NDDS_STANDALONE_TYPE
#include "rti/topic/cdr/Serialization.hpp"
#include "ProductDisseminateFileObjectiveTypePlugin.hpp"
#else
#include "rti/topic/cdr/SerializationHelpers.hpp"
#endif

#include "ProductDisseminateFileObjectiveType.hpp"

#include <rti/util/ostream_operators.hpp>

namespace UMAA {

    namespace MM {

        namespace BaseType {

            // ---- ProductDisseminateFileObjectiveType: 

            ProductDisseminateFileObjectiveType::ProductDisseminateFileObjectiveType() :
                m_sourceURI_ ("")  {

            }   

            ProductDisseminateFileObjectiveType::ProductDisseminateFileObjectiveType (const ::UMAA::Common::Measurement::NumericGUID& destinationID_,const std::string& sourceURI_):
                m_destinationID_(destinationID_), 
                m_sourceURI_(sourceURI_) {
            }

            void ProductDisseminateFileObjectiveType::swap(ProductDisseminateFileObjectiveType& other_)  noexcept 
            {
                using std::swap;
                swap(m_destinationID_, other_.m_destinationID_);
                swap(m_sourceURI_, other_.m_sourceURI_);
            }  

            bool ProductDisseminateFileObjectiveType::operator == (const ProductDisseminateFileObjectiveType& other_) const {
                if (m_destinationID_ != other_.m_destinationID_) {
                    return false;
                }
                if (m_sourceURI_ != other_.m_sourceURI_) {
                    return false;
                }
                return true;
            }

            bool ProductDisseminateFileObjectiveType::operator != (const ProductDisseminateFileObjectiveType& other_) const {
                return !this->operator ==(other_);
            }

            std::ostream& operator << (std::ostream& o,const ProductDisseminateFileObjectiveType& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                o <<"[";
                o << "destinationID: " << sample.destinationID ()<<", ";
                o << "sourceURI: " << sample.sourceURI ();
                o <<"]";
                return o;
            }

        } // namespace BaseType  

    } // namespace MM  

} // namespace UMAA  

#ifdef NDDS_STANDALONE_TYPE
namespace rti {
    namespace topic {
    }
}

#else
// --- Type traits: -------------------------------------------------

namespace rti { 
    namespace topic {

        template<>
        struct native_type_code< ::UMAA::MM::BaseType::ProductDisseminateFileObjectiveType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member ProductDisseminateFileObjectiveType_g_tc_members[2]=
                {

                    {
                        (char *)"destinationID",/* Member name */
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
                        (char *)"sourceURI",/* Member name */
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
                    }
                };

                static DDS_TypeCode ProductDisseminateFileObjectiveType_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::MM::BaseType::ProductDisseminateFileObjectiveType", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        2, /* Number of members */
                        ProductDisseminateFileObjectiveType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for ProductDisseminateFileObjectiveType*/

                if (is_initialized) {
                    return &ProductDisseminateFileObjectiveType_g_tc;
                }

                is_initialized = RTI_TRUE;

                ProductDisseminateFileObjectiveType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                ProductDisseminateFileObjectiveType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::NumericGUID_AliasTag_t>::get().native();
                ProductDisseminateFileObjectiveType_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::PrimitiveConstrained::UniformResourceIdentifier_AliasTag_t>::get().native();

                /* Initialize the values for member annotations. */
                ProductDisseminateFileObjectiveType_g_tc_members[1]._annotations._defaultValue._d = RTI_XCDR_TK_STRING;
                ProductDisseminateFileObjectiveType_g_tc_members[1]._annotations._defaultValue._u.string_value = (DDS_Char *) "";

                ProductDisseminateFileObjectiveType_g_tc._data._sampleAccessInfo = sample_access_info();
                ProductDisseminateFileObjectiveType_g_tc._data._typePlugin = type_plugin_info();    

                return &ProductDisseminateFileObjectiveType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                ::UMAA::MM::BaseType::ProductDisseminateFileObjectiveType *sample;

                static RTIXCdrMemberAccessInfo ProductDisseminateFileObjectiveType_g_memberAccessInfos[2] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo ProductDisseminateFileObjectiveType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &ProductDisseminateFileObjectiveType_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    ::UMAA::MM::BaseType::ProductDisseminateFileObjectiveType);
                if (sample == NULL) {
                    return NULL;
                }

                ProductDisseminateFileObjectiveType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->destinationID() - (char *)sample);

                ProductDisseminateFileObjectiveType_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->sourceURI() - (char *)sample);

                ProductDisseminateFileObjectiveType_g_sampleAccessInfo.memberAccessInfos = 
                ProductDisseminateFileObjectiveType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::MM::BaseType::ProductDisseminateFileObjectiveType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        ProductDisseminateFileObjectiveType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        ProductDisseminateFileObjectiveType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                ProductDisseminateFileObjectiveType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                ProductDisseminateFileObjectiveType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::MM::BaseType::ProductDisseminateFileObjectiveType >;

                ProductDisseminateFileObjectiveType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &ProductDisseminateFileObjectiveType_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin ProductDisseminateFileObjectiveType_g_typePlugin = 
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
                    NULL,
                    NULL
                };

                return &ProductDisseminateFileObjectiveType_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::StructType& dynamic_type< ::UMAA::MM::BaseType::ProductDisseminateFileObjectiveType >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::MM::BaseType::ProductDisseminateFileObjectiveType >::get())));
        }
    }
}

namespace dds { 
    namespace topic {
        void topic_type_support< ::UMAA::MM::BaseType::ProductDisseminateFileObjectiveType >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                ::UMAA::MM::BaseType::ProductDisseminateFileObjectiveTypePlugin_new,
                ::UMAA::MM::BaseType::ProductDisseminateFileObjectiveTypePlugin_delete);
        }

        std::vector<char>& topic_type_support< ::UMAA::MM::BaseType::ProductDisseminateFileObjectiveType >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const ::UMAA::MM::BaseType::ProductDisseminateFileObjectiveType& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = ProductDisseminateFileObjectiveTypePlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = ProductDisseminateFileObjectiveTypePlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< ::UMAA::MM::BaseType::ProductDisseminateFileObjectiveType >::from_cdr_buffer(::UMAA::MM::BaseType::ProductDisseminateFileObjectiveType& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = ProductDisseminateFileObjectiveTypePlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create ::UMAA::MM::BaseType::ProductDisseminateFileObjectiveType from cdr buffer");
        }

        void topic_type_support< ::UMAA::MM::BaseType::ProductDisseminateFileObjectiveType >::reset_sample(::UMAA::MM::BaseType::ProductDisseminateFileObjectiveType& sample) 
        {
            ::rti::topic::reset_sample(sample.destinationID());
            sample.sourceURI("");
        }

        void topic_type_support< ::UMAA::MM::BaseType::ProductDisseminateFileObjectiveType >::allocate_sample(::UMAA::MM::BaseType::ProductDisseminateFileObjectiveType& sample, int, int) 
        {
            ::rti::topic::allocate_sample(sample.destinationID(),  -1, -1);
            ::rti::topic::allocate_sample(sample.sourceURI(),  -1, 2047L);
        }
    }
}  

#endif // NDDS_STANDALONE_TYPE
