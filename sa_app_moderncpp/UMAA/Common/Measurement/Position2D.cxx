

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Position2D.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#include <iosfwd>
#include <iomanip>

#include "rti/topic/cdr/Serialization.hpp"

#include "Position2D.hpp"
#include "Position2DPlugin.hpp"

#include <rti/util/ostream_operators.hpp>

namespace UMAA {

    namespace Common {

        namespace Measurement {

            // ---- Position2D: 

            Position2D::Position2D()  {
            }   

            Position2D::Position2D (const UMAA::Common::Measurement::GeodeticLatitude& geodeticLatitude,const UMAA::Common::Measurement::GeodeticLongitude& geodeticLongitude):
                m_geodeticLatitude_( geodeticLatitude ),
                m_geodeticLongitude_( geodeticLongitude ) {
            }

            #ifdef RTI_CXX11_RVALUE_REFERENCES
            #ifdef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
            Position2D::Position2D(Position2D&& other_) OMG_NOEXCEPT  :m_geodeticLatitude_ (std::move(other_.m_geodeticLatitude_))
            ,
            m_geodeticLongitude_ (std::move(other_.m_geodeticLongitude_))
            {
            } 

            Position2D& Position2D::operator=(Position2D&&  other_) OMG_NOEXCEPT {
                Position2D tmp(std::move(other_));
                swap(tmp); 
                return *this;
            }
            #endif
            #endif   

            void Position2D::swap(Position2D& other_)  OMG_NOEXCEPT 
            {
                using std::swap;
                swap(m_geodeticLatitude_, other_.m_geodeticLatitude_);
                swap(m_geodeticLongitude_, other_.m_geodeticLongitude_);
            }  

            bool Position2D::operator == (const Position2D& other_) const {
                if (m_geodeticLatitude_ != other_.m_geodeticLatitude_) {
                    return false;
                }
                if (m_geodeticLongitude_ != other_.m_geodeticLongitude_) {
                    return false;
                }
                return true;
            }
            bool Position2D::operator != (const Position2D& other_) const {
                return !this->operator ==(other_);
            }

            std::ostream& operator << (std::ostream& o,const Position2D& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                o <<"[";
                o << "geodeticLatitude: " << sample.geodeticLatitude()<<", ";
                o << "geodeticLongitude: " << sample.geodeticLongitude() ;
                o <<"]";
                return o;
            }

        } // namespace Measurement  

    } // namespace Common  

} // namespace UMAA  

// --- Type traits: -------------------------------------------------

namespace rti { 
    namespace topic {

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct native_type_code< UMAA::Common::Measurement::Position2D > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member Position2D_g_tc_members[2]=
                {

                    {
                        (char *)"geodeticLatitude",/* Member name */
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
                        (char *)"geodeticLongitude",/* Member name */
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

                static DDS_TypeCode Position2D_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::Common::Measurement::Position2D", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        2, /* Number of members */
                        Position2D_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for Position2D*/

                if (is_initialized) {
                    return &Position2D_g_tc;
                }

                Position2D_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                Position2D_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::GeodeticLatitude>::get().native();
                Position2D_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::GeodeticLongitude>::get().native();

                /* Initialize the values for member annotations. */

                Position2D_g_tc._data._sampleAccessInfo = sample_access_info();
                Position2D_g_tc._data._typePlugin = type_plugin_info();    

                is_initialized = RTI_TRUE;

                return &Position2D_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                UMAA::Common::Measurement::Position2D *sample;

                static RTIXCdrMemberAccessInfo Position2D_g_memberAccessInfos[2] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo Position2D_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &Position2D_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    UMAA::Common::Measurement::Position2D);
                if (sample == NULL) {
                    return NULL;
                }

                Position2D_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->geodeticLatitude() - (char *)sample);

                Position2D_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->geodeticLongitude() - (char *)sample);

                Position2D_g_sampleAccessInfo.memberAccessInfos = 
                Position2D_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(UMAA::Common::Measurement::Position2D);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        Position2D_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        Position2D_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                Position2D_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                Position2D_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< UMAA::Common::Measurement::Position2D >;

                Position2D_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &Position2D_g_sampleAccessInfo;
            }

            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin Position2D_g_typePlugin = 
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

                return &Position2D_g_typePlugin;
            }
        }; // native_type_code
        #endif

        const ::dds::core::xtypes::StructType& dynamic_type< UMAA::Common::Measurement::Position2D >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< UMAA::Common::Measurement::Position2D >::get())));
        }

    }
}

namespace dds { 
    namespace topic {
        void topic_type_support< UMAA::Common::Measurement::Position2D >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                UMAA::Common::Measurement::Position2DPlugin_new,
                UMAA::Common::Measurement::Position2DPlugin_delete);
        }

        std::vector<char>& topic_type_support< UMAA::Common::Measurement::Position2D >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const UMAA::Common::Measurement::Position2D& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = Position2DPlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = Position2DPlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< UMAA::Common::Measurement::Position2D >::from_cdr_buffer(UMAA::Common::Measurement::Position2D& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = Position2DPlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create UMAA::Common::Measurement::Position2D from cdr buffer");
        }

        void topic_type_support< UMAA::Common::Measurement::Position2D >::reset_sample(UMAA::Common::Measurement::Position2D& sample) 
        {
            ::rti::topic::reset_sample(sample.geodeticLatitude());
            ::rti::topic::reset_sample(sample.geodeticLongitude());
        }

        void topic_type_support< UMAA::Common::Measurement::Position2D >::allocate_sample(UMAA::Common::Measurement::Position2D& sample, int, int) 
        {
            ::rti::topic::allocate_sample(sample.geodeticLatitude(),  -1, -1);
            ::rti::topic::allocate_sample(sample.geodeticLongitude(),  -1, -1);
        }

    }
}  

