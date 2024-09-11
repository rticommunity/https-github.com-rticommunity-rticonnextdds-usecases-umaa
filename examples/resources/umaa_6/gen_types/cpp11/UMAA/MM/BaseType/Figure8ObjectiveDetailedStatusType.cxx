

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Figure8ObjectiveDetailedStatusType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#include <iosfwd>
#include <iomanip>

#ifndef NDDS_STANDALONE_TYPE
#include "rti/topic/cdr/Serialization.hpp"
#include "Figure8ObjectiveDetailedStatusTypePlugin.hpp"
#else
#include "rti/topic/cdr/SerializationHelpers.hpp"
#endif

#include "Figure8ObjectiveDetailedStatusType.hpp"

#include <rti/util/ostream_operators.hpp>

namespace UMAA {

    namespace MM {

        namespace BaseType {

            // ---- Figure8ObjectiveDetailedStatusType: 

            Figure8ObjectiveDetailedStatusType::Figure8ObjectiveDetailedStatusType() :
                m_isCrossTrackLimitAchieved_ (0) ,
                m_isInPattern_ (0) ,
                m_isSpeedAchieved_ (0)  {

            }   

            Figure8ObjectiveDetailedStatusType::Figure8ObjectiveDetailedStatusType (bool isCrossTrackLimitAchieved_,bool isInPattern_,bool isSpeedAchieved_,const ::UMAA::Common::Measurement::GeoPosition2D& referencePosition_,const ::UMAA::Common::Measurement::DateTime& timePatternAchieved_,const ::dds::core::optional< ::UMAA::Common::Measurement::DateTime >& timePatternCompleted_,const ::UMAA::Common::Measurement::DateTime& specializationReferenceTimestamp_,const ::UMAA::Common::Measurement::NumericGUID& specializationReferenceID_):
                m_isCrossTrackLimitAchieved_(isCrossTrackLimitAchieved_), 
                m_isInPattern_(isInPattern_), 
                m_isSpeedAchieved_(isSpeedAchieved_), 
                m_referencePosition_(referencePosition_), 
                m_timePatternAchieved_(timePatternAchieved_), 
                m_timePatternCompleted_(timePatternCompleted_), 
                m_specializationReferenceTimestamp_(specializationReferenceTimestamp_), 
                m_specializationReferenceID_(specializationReferenceID_) {
            }

            void Figure8ObjectiveDetailedStatusType::swap(Figure8ObjectiveDetailedStatusType& other_)  noexcept 
            {
                using std::swap;
                swap(m_isCrossTrackLimitAchieved_, other_.m_isCrossTrackLimitAchieved_);
                swap(m_isInPattern_, other_.m_isInPattern_);
                swap(m_isSpeedAchieved_, other_.m_isSpeedAchieved_);
                swap(m_referencePosition_, other_.m_referencePosition_);
                swap(m_timePatternAchieved_, other_.m_timePatternAchieved_);
                swap(m_timePatternCompleted_, other_.m_timePatternCompleted_);
                swap(m_specializationReferenceTimestamp_, other_.m_specializationReferenceTimestamp_);
                swap(m_specializationReferenceID_, other_.m_specializationReferenceID_);
            }  

            bool Figure8ObjectiveDetailedStatusType::operator == (const Figure8ObjectiveDetailedStatusType& other_) const {
                if (m_isCrossTrackLimitAchieved_ != other_.m_isCrossTrackLimitAchieved_) {
                    return false;
                }
                if (m_isInPattern_ != other_.m_isInPattern_) {
                    return false;
                }
                if (m_isSpeedAchieved_ != other_.m_isSpeedAchieved_) {
                    return false;
                }
                if (m_referencePosition_ != other_.m_referencePosition_) {
                    return false;
                }
                if (m_timePatternAchieved_ != other_.m_timePatternAchieved_) {
                    return false;
                }
                if (m_timePatternCompleted_ != other_.m_timePatternCompleted_) {
                    return false;
                }
                if (m_specializationReferenceTimestamp_ != other_.m_specializationReferenceTimestamp_) {
                    return false;
                }
                if (m_specializationReferenceID_ != other_.m_specializationReferenceID_) {
                    return false;
                }
                return true;
            }

            bool Figure8ObjectiveDetailedStatusType::operator != (const Figure8ObjectiveDetailedStatusType& other_) const {
                return !this->operator ==(other_);
            }

            std::ostream& operator << (std::ostream& o,const Figure8ObjectiveDetailedStatusType& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                o <<"[";
                o << "isCrossTrackLimitAchieved: " << sample.isCrossTrackLimitAchieved ()<<", ";
                o << "isInPattern: " << sample.isInPattern ()<<", ";
                o << "isSpeedAchieved: " << sample.isSpeedAchieved ()<<", ";
                o << "referencePosition: " << sample.referencePosition ()<<", ";
                o << "timePatternAchieved: " << sample.timePatternAchieved ()<<", ";
                o << "timePatternCompleted: " << sample.timePatternCompleted ()<<", ";
                o << "specializationReferenceTimestamp: " << sample.specializationReferenceTimestamp ()<<", ";
                o << "specializationReferenceID: " << sample.specializationReferenceID ();
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
        struct native_type_code< ::UMAA::MM::BaseType::Figure8ObjectiveDetailedStatusType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member Figure8ObjectiveDetailedStatusType_g_tc_members[8]=
                {

                    {
                        (char *)"isCrossTrackLimitAchieved",/* Member name */
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
                        (char *)"isInPattern",/* Member name */
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
                        (char *)"isSpeedAchieved",/* Member name */
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
                        (char *)"referencePosition",/* Member name */
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
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"timePatternAchieved",/* Member name */
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
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"timePatternCompleted",/* Member name */
                        {
                            5,/* Representation ID */
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
                        (char *)"specializationReferenceTimestamp",/* Member name */
                        {
                            6,/* Representation ID */
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
                        (char *)"specializationReferenceID",/* Member name */
                        {
                            7,/* Representation ID */
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

                static DDS_TypeCode Figure8ObjectiveDetailedStatusType_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::MM::BaseType::Figure8ObjectiveDetailedStatusType", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        8, /* Number of members */
                        Figure8ObjectiveDetailedStatusType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for Figure8ObjectiveDetailedStatusType*/

                if (is_initialized) {
                    return &Figure8ObjectiveDetailedStatusType_g_tc;
                }

                is_initialized = RTI_TRUE;

                Figure8ObjectiveDetailedStatusType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                Figure8ObjectiveDetailedStatusType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                Figure8ObjectiveDetailedStatusType_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                Figure8ObjectiveDetailedStatusType_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                Figure8ObjectiveDetailedStatusType_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::GeoPosition2D>::get().native();
                Figure8ObjectiveDetailedStatusType_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::DateTime>::get().native();
                Figure8ObjectiveDetailedStatusType_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::DateTime>::get().native();
                Figure8ObjectiveDetailedStatusType_g_tc_members[6]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::DateTime>::get().native();
                Figure8ObjectiveDetailedStatusType_g_tc_members[7]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::NumericGUID_AliasTag_t>::get().native();

                /* Initialize the values for member annotations. */
                Figure8ObjectiveDetailedStatusType_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                Figure8ObjectiveDetailedStatusType_g_tc_members[0]._annotations._defaultValue._u.boolean_value = 0;
                Figure8ObjectiveDetailedStatusType_g_tc_members[1]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                Figure8ObjectiveDetailedStatusType_g_tc_members[1]._annotations._defaultValue._u.boolean_value = 0;
                Figure8ObjectiveDetailedStatusType_g_tc_members[2]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                Figure8ObjectiveDetailedStatusType_g_tc_members[2]._annotations._defaultValue._u.boolean_value = 0;

                Figure8ObjectiveDetailedStatusType_g_tc._data._sampleAccessInfo = sample_access_info();
                Figure8ObjectiveDetailedStatusType_g_tc._data._typePlugin = type_plugin_info();    

                return &Figure8ObjectiveDetailedStatusType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                ::UMAA::MM::BaseType::Figure8ObjectiveDetailedStatusType *sample;

                static RTIXCdrMemberAccessInfo Figure8ObjectiveDetailedStatusType_g_memberAccessInfos[8] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo Figure8ObjectiveDetailedStatusType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &Figure8ObjectiveDetailedStatusType_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    ::UMAA::MM::BaseType::Figure8ObjectiveDetailedStatusType);
                if (sample == NULL) {
                    return NULL;
                }

                Figure8ObjectiveDetailedStatusType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->isCrossTrackLimitAchieved() - (char *)sample);

                Figure8ObjectiveDetailedStatusType_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->isInPattern() - (char *)sample);

                Figure8ObjectiveDetailedStatusType_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->isSpeedAchieved() - (char *)sample);

                Figure8ObjectiveDetailedStatusType_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->referencePosition() - (char *)sample);

                Figure8ObjectiveDetailedStatusType_g_memberAccessInfos[4].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->timePatternAchieved() - (char *)sample);

                Figure8ObjectiveDetailedStatusType_g_memberAccessInfos[5].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->timePatternCompleted() - (char *)sample);

                Figure8ObjectiveDetailedStatusType_g_memberAccessInfos[6].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->specializationReferenceTimestamp() - (char *)sample);

                Figure8ObjectiveDetailedStatusType_g_memberAccessInfos[7].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->specializationReferenceID() - (char *)sample);

                Figure8ObjectiveDetailedStatusType_g_sampleAccessInfo.memberAccessInfos = 
                Figure8ObjectiveDetailedStatusType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::MM::BaseType::Figure8ObjectiveDetailedStatusType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        Figure8ObjectiveDetailedStatusType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        Figure8ObjectiveDetailedStatusType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                Figure8ObjectiveDetailedStatusType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                Figure8ObjectiveDetailedStatusType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::MM::BaseType::Figure8ObjectiveDetailedStatusType >;

                Figure8ObjectiveDetailedStatusType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &Figure8ObjectiveDetailedStatusType_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin Figure8ObjectiveDetailedStatusType_g_typePlugin = 
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

                return &Figure8ObjectiveDetailedStatusType_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::StructType& dynamic_type< ::UMAA::MM::BaseType::Figure8ObjectiveDetailedStatusType >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::MM::BaseType::Figure8ObjectiveDetailedStatusType >::get())));
        }
    }
}

namespace dds { 
    namespace topic {
        void topic_type_support< ::UMAA::MM::BaseType::Figure8ObjectiveDetailedStatusType >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                ::UMAA::MM::BaseType::Figure8ObjectiveDetailedStatusTypePlugin_new,
                ::UMAA::MM::BaseType::Figure8ObjectiveDetailedStatusTypePlugin_delete);
        }

        std::vector<char>& topic_type_support< ::UMAA::MM::BaseType::Figure8ObjectiveDetailedStatusType >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const ::UMAA::MM::BaseType::Figure8ObjectiveDetailedStatusType& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = Figure8ObjectiveDetailedStatusTypePlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = Figure8ObjectiveDetailedStatusTypePlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< ::UMAA::MM::BaseType::Figure8ObjectiveDetailedStatusType >::from_cdr_buffer(::UMAA::MM::BaseType::Figure8ObjectiveDetailedStatusType& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = Figure8ObjectiveDetailedStatusTypePlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create ::UMAA::MM::BaseType::Figure8ObjectiveDetailedStatusType from cdr buffer");
        }

        void topic_type_support< ::UMAA::MM::BaseType::Figure8ObjectiveDetailedStatusType >::reset_sample(::UMAA::MM::BaseType::Figure8ObjectiveDetailedStatusType& sample) 
        {
            sample.isCrossTrackLimitAchieved(0);
            sample.isInPattern(0);
            sample.isSpeedAchieved(0);
            ::rti::topic::reset_sample(sample.referencePosition());
            ::rti::topic::reset_sample(sample.timePatternAchieved());
            ::rti::topic::reset_sample(sample.timePatternCompleted());
            ::rti::topic::reset_sample(sample.specializationReferenceTimestamp());
            ::rti::topic::reset_sample(sample.specializationReferenceID());
        }

        void topic_type_support< ::UMAA::MM::BaseType::Figure8ObjectiveDetailedStatusType >::allocate_sample(::UMAA::MM::BaseType::Figure8ObjectiveDetailedStatusType& sample, int, int) 
        {
            ::rti::topic::allocate_sample(sample.referencePosition(),  -1, -1);
            ::rti::topic::allocate_sample(sample.timePatternAchieved(),  -1, -1);
            ::rti::topic::allocate_sample(sample.specializationReferenceTimestamp(),  -1, -1);
            ::rti::topic::allocate_sample(sample.specializationReferenceID(),  -1, -1);
        }
    }
}  

#endif // NDDS_STANDALONE_TYPE
