

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Polygon_Volume.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#include <iosfwd>
#include <iomanip>

#ifndef NDDS_STANDALONE_TYPE
#include "rti/topic/cdr/Serialization.hpp"
#include "Polygon_VolumePlugin.hpp"
#else
#include "rti/topic/cdr/SerializationHelpers.hpp"
#endif

#include "Polygon_Volume.hpp"

#include <rti/util/ostream_operators.hpp>

namespace UMAA {

    namespace Common {

        namespace Measurement {

            // ---- Polygon_Volume: 

            Polygon_Volume::Polygon_Volume() :
                m_lineKind_(UMAA::Common::Enumeration::LineSegmentEnumType::LineSegmentEnumType::GREAT_CIRCLE)  {

            }   

            Polygon_Volume::Polygon_Volume (const ::UMAA::Common::Measurement::Altitude_MSL& ceiling_,const ::UMAA::Common::Measurement::Altitude_MSL& floor_,const ::UMAA::Common::Enumeration::LineSegmentEnumType::LineSegmentEnumType& lineKind_,const ::rti::core::bounded_sequence< ::UMAA::Common::Measurement::Position2D, 100L >& referencePoints_):
                m_ceiling_(ceiling_), 
                m_floor_(floor_), 
                m_lineKind_(lineKind_), 
                m_referencePoints_(referencePoints_) {
            }

            void Polygon_Volume::swap(Polygon_Volume& other_)  noexcept 
            {
                using std::swap;
                swap(m_ceiling_, other_.m_ceiling_);
                swap(m_floor_, other_.m_floor_);
                swap(m_lineKind_, other_.m_lineKind_);
                swap(m_referencePoints_, other_.m_referencePoints_);
            }  

            bool Polygon_Volume::operator == (const Polygon_Volume& other_) const {
                if (m_ceiling_ != other_.m_ceiling_) {
                    return false;
                }
                if (m_floor_ != other_.m_floor_) {
                    return false;
                }
                if (m_lineKind_ != other_.m_lineKind_) {
                    return false;
                }
                if (m_referencePoints_ != other_.m_referencePoints_) {
                    return false;
                }
                return true;
            }

            bool Polygon_Volume::operator != (const Polygon_Volume& other_) const {
                return !this->operator ==(other_);
            }

            std::ostream& operator << (std::ostream& o,const Polygon_Volume& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                o <<"[";
                o << "ceiling: " << sample.ceiling ()<<", ";
                o << "floor: " << sample.floor ()<<", ";
                o << "lineKind: " << sample.lineKind ()<<", ";
                o << "referencePoints: " << sample.referencePoints ();
                o <<"]";
                return o;
            }

        } // namespace Measurement  

    } // namespace Common  

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
        struct native_type_code< ::UMAA::Common::Measurement::Polygon_Volume > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode Polygon_Volume_g_tc_referencePoints_sequence;

                static DDS_TypeCode_Member Polygon_Volume_g_tc_members[4]=
                {

                    {
                        (char *)"ceiling",/* Member name */
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
                        (char *)"floor",/* Member name */
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
                        (char *)"lineKind",/* Member name */
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
                        (char *)"referencePoints",/* Member name */
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
                    }
                };

                static DDS_TypeCode Polygon_Volume_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::Common::Measurement::Polygon_Volume", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        4, /* Number of members */
                        Polygon_Volume_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for Polygon_Volume*/

                if (is_initialized) {
                    return &Polygon_Volume_g_tc;
                }

                is_initialized = RTI_TRUE;

                Polygon_Volume_g_tc_referencePoints_sequence = initialize_sequence_typecode< ::rti::core::bounded_sequence< ::UMAA::Common::Measurement::Position2D, 100L > >((100L));

                Polygon_Volume_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                Polygon_Volume_g_tc_referencePoints_sequence._data._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::Position2D>::get().native();
                Polygon_Volume_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::Altitude_MSL>::get().native();
                Polygon_Volume_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Measurement::Altitude_MSL>::get().native();
                Polygon_Volume_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::Common::Enumeration::LineSegmentEnumType::LineSegmentEnumType>::get().native();
                Polygon_Volume_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)& Polygon_Volume_g_tc_referencePoints_sequence;

                /* Initialize the values for member annotations. */
                Polygon_Volume_g_tc_members[2]._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
                Polygon_Volume_g_tc_members[2]._annotations._defaultValue._u.enumerated_value = 0;

                Polygon_Volume_g_tc._data._sampleAccessInfo = sample_access_info();
                Polygon_Volume_g_tc._data._typePlugin = type_plugin_info();    

                return &Polygon_Volume_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                ::UMAA::Common::Measurement::Polygon_Volume *sample;

                static RTIXCdrMemberAccessInfo Polygon_Volume_g_memberAccessInfos[4] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo Polygon_Volume_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &Polygon_Volume_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    ::UMAA::Common::Measurement::Polygon_Volume);
                if (sample == NULL) {
                    return NULL;
                }

                Polygon_Volume_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->ceiling() - (char *)sample);

                Polygon_Volume_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->floor() - (char *)sample);

                Polygon_Volume_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->lineKind() - (char *)sample);

                Polygon_Volume_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->referencePoints() - (char *)sample);

                Polygon_Volume_g_sampleAccessInfo.memberAccessInfos = 
                Polygon_Volume_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::Common::Measurement::Polygon_Volume);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        Polygon_Volume_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        Polygon_Volume_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                Polygon_Volume_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                Polygon_Volume_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::Common::Measurement::Polygon_Volume >;

                Polygon_Volume_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &Polygon_Volume_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin Polygon_Volume_g_typePlugin = 
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

                return &Polygon_Volume_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::StructType& dynamic_type< ::UMAA::Common::Measurement::Polygon_Volume >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::Common::Measurement::Polygon_Volume >::get())));
        }
    }
}

namespace dds { 
    namespace topic {
        void topic_type_support< ::UMAA::Common::Measurement::Polygon_Volume >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                ::UMAA::Common::Measurement::Polygon_VolumePlugin_new,
                ::UMAA::Common::Measurement::Polygon_VolumePlugin_delete);
        }

        std::vector<char>& topic_type_support< ::UMAA::Common::Measurement::Polygon_Volume >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const ::UMAA::Common::Measurement::Polygon_Volume& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = Polygon_VolumePlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = Polygon_VolumePlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< ::UMAA::Common::Measurement::Polygon_Volume >::from_cdr_buffer(::UMAA::Common::Measurement::Polygon_Volume& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = Polygon_VolumePlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create ::UMAA::Common::Measurement::Polygon_Volume from cdr buffer");
        }

        void topic_type_support< ::UMAA::Common::Measurement::Polygon_Volume >::reset_sample(::UMAA::Common::Measurement::Polygon_Volume& sample) 
        {
            ::rti::topic::reset_sample(sample.ceiling());
            ::rti::topic::reset_sample(sample.floor());
            sample.lineKind(UMAA::Common::Enumeration::LineSegmentEnumType::LineSegmentEnumType::GREAT_CIRCLE);
            ::rti::topic::reset_sample(sample.referencePoints());
        }

        void topic_type_support< ::UMAA::Common::Measurement::Polygon_Volume >::allocate_sample(::UMAA::Common::Measurement::Polygon_Volume& sample, int, int) 
        {
            ::rti::topic::allocate_sample(sample.ceiling(),  -1, -1);
            ::rti::topic::allocate_sample(sample.floor(),  -1, -1);
            ::rti::topic::allocate_sample(sample.lineKind(),  -1, -1);
            ::rti::topic::allocate_sample(sample.referencePoints(),  100L, -1);
        }
    }
}  

#endif // NDDS_STANDALONE_TYPE
