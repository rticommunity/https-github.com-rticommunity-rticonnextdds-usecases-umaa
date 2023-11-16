

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from LightCommandType.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#include <iosfwd>
#include <iomanip>

#include "rti/topic/cdr/Serialization.hpp"

#include "LightCommandType.hpp"
#include "LightCommandTypePlugin.hpp"

#include <rti/util/ostream_operators.hpp>

namespace UMAA {

    namespace EO {

        namespace LightControl {

            // ---- LightCommandType: 

            LightCommandType::LightCommandType() :
                m_allroundLight_ (0) ,
                m_flashingLight_ (0) ,
                m_mastheadLight_ (0) ,
                m_portSideLight_ (0) ,
                m_starboardSideLight_ (0) ,
                m_sternLight_ (0) ,
                m_towingLight_ (0)  {
                    ::rti::core::fill_array( 
                        m_source_, 
                        ::rti::topic::cdr::alias_helper< UMAA::Common::Measurement::NumericGUID::value_type >::default_value());
                    ::rti::core::fill_array( 
                        m_destination_, 
                        ::rti::topic::cdr::alias_helper< UMAA::Common::Measurement::NumericGUID::value_type >::default_value());
                    ::rti::core::fill_array( 
                        m_sessionID_, 
                        ::rti::topic::cdr::alias_helper< UMAA::Common::Measurement::NumericGUID::value_type >::default_value());
            }   

            LightCommandType::LightCommandType (bool allroundLight,bool flashingLight,bool mastheadLight,bool portSideLight,bool starboardSideLight,bool sternLight,bool towingLight,const UMAA::Common::Measurement::NumericGUID& source,const UMAA::Common::Measurement::NumericGUID& destination,const UMAA::Common::Measurement::NumericGUID& sessionID,const UMAA::Common::Measurement::DateTime& timeStamp):
                m_allroundLight_( allroundLight ),
                m_flashingLight_( flashingLight ),
                m_mastheadLight_( mastheadLight ),
                m_portSideLight_( portSideLight ),
                m_starboardSideLight_( starboardSideLight ),
                m_sternLight_( sternLight ),
                m_towingLight_( towingLight ),
                m_source_( source ),
                m_destination_( destination ),
                m_sessionID_( sessionID ),
                m_timeStamp_( timeStamp ) {
            }

            #ifdef RTI_CXX11_RVALUE_REFERENCES
            #ifdef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
            LightCommandType::LightCommandType(LightCommandType&& other_) OMG_NOEXCEPT  :m_allroundLight_ (std::move(other_.m_allroundLight_))
            ,
            m_flashingLight_ (std::move(other_.m_flashingLight_))
            ,
            m_mastheadLight_ (std::move(other_.m_mastheadLight_))
            ,
            m_portSideLight_ (std::move(other_.m_portSideLight_))
            ,
            m_starboardSideLight_ (std::move(other_.m_starboardSideLight_))
            ,
            m_sternLight_ (std::move(other_.m_sternLight_))
            ,
            m_towingLight_ (std::move(other_.m_towingLight_))
            ,
            m_source_ (std::move(other_.m_source_))
            ,
            m_destination_ (std::move(other_.m_destination_))
            ,
            m_sessionID_ (std::move(other_.m_sessionID_))
            ,
            m_timeStamp_ (std::move(other_.m_timeStamp_))
            {
            } 

            LightCommandType& LightCommandType::operator=(LightCommandType&&  other_) OMG_NOEXCEPT {
                LightCommandType tmp(std::move(other_));
                swap(tmp); 
                return *this;
            }
            #endif
            #endif   

            void LightCommandType::swap(LightCommandType& other_)  OMG_NOEXCEPT 
            {
                using std::swap;
                swap(m_allroundLight_, other_.m_allroundLight_);
                swap(m_flashingLight_, other_.m_flashingLight_);
                swap(m_mastheadLight_, other_.m_mastheadLight_);
                swap(m_portSideLight_, other_.m_portSideLight_);
                swap(m_starboardSideLight_, other_.m_starboardSideLight_);
                swap(m_sternLight_, other_.m_sternLight_);
                swap(m_towingLight_, other_.m_towingLight_);
                swap(m_source_, other_.m_source_);
                swap(m_destination_, other_.m_destination_);
                swap(m_sessionID_, other_.m_sessionID_);
                swap(m_timeStamp_, other_.m_timeStamp_);
            }  

            bool LightCommandType::operator == (const LightCommandType& other_) const {
                if (m_allroundLight_ != other_.m_allroundLight_) {
                    return false;
                }
                if (m_flashingLight_ != other_.m_flashingLight_) {
                    return false;
                }
                if (m_mastheadLight_ != other_.m_mastheadLight_) {
                    return false;
                }
                if (m_portSideLight_ != other_.m_portSideLight_) {
                    return false;
                }
                if (m_starboardSideLight_ != other_.m_starboardSideLight_) {
                    return false;
                }
                if (m_sternLight_ != other_.m_sternLight_) {
                    return false;
                }
                if (m_towingLight_ != other_.m_towingLight_) {
                    return false;
                }
                if (m_source_ != other_.m_source_) {
                    return false;
                }
                if (m_destination_ != other_.m_destination_) {
                    return false;
                }
                if (m_sessionID_ != other_.m_sessionID_) {
                    return false;
                }
                if (m_timeStamp_ != other_.m_timeStamp_) {
                    return false;
                }
                return true;
            }
            bool LightCommandType::operator != (const LightCommandType& other_) const {
                return !this->operator ==(other_);
            }

            std::ostream& operator << (std::ostream& o,const LightCommandType& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                o <<"[";
                o << "allroundLight: " << sample.allroundLight()<<", ";
                o << "flashingLight: " << sample.flashingLight()<<", ";
                o << "mastheadLight: " << sample.mastheadLight()<<", ";
                o << "portSideLight: " << sample.portSideLight()<<", ";
                o << "starboardSideLight: " << sample.starboardSideLight()<<", ";
                o << "sternLight: " << sample.sternLight()<<", ";
                o << "towingLight: " << sample.towingLight()<<", ";
                o << "source: " << sample.source()<<", ";
                o << "destination: " << sample.destination()<<", ";
                o << "sessionID: " << sample.sessionID()<<", ";
                o << "timeStamp: " << sample.timeStamp() ;
                o <<"]";
                return o;
            }

        } // namespace LightControl  

    } // namespace EO  

} // namespace UMAA  

// --- Type traits: -------------------------------------------------

namespace rti { 
    namespace topic {

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct native_type_code< UMAA::EO::LightControl::LightCommandType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member LightCommandType_g_tc_members[11]=
                {

                    {
                        (char *)"allroundLight",/* Member name */
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
                        (char *)"flashingLight",/* Member name */
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
                        (char *)"mastheadLight",/* Member name */
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
                        (char *)"portSideLight",/* Member name */
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
                        (char *)"starboardSideLight",/* Member name */
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
                        (char *)"sternLight",/* Member name */
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
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"towingLight",/* Member name */
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
                        (char *)"source",/* Member name */
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
                    }, 
                    {
                        (char *)"destination",/* Member name */
                        {
                            8,/* Representation ID */
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
                            9,/* Representation ID */
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
                            10,/* Representation ID */
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

                static DDS_TypeCode LightCommandType_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::EO::LightControl::LightCommandType", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        11, /* Number of members */
                        LightCommandType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for LightCommandType*/

                if (is_initialized) {
                    return &LightCommandType_g_tc;
                }

                LightCommandType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                LightCommandType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                LightCommandType_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                LightCommandType_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                LightCommandType_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                LightCommandType_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                LightCommandType_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                LightCommandType_g_tc_members[6]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                LightCommandType_g_tc_members[7]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::NumericGUID_AliasTag_t>::get().native();
                LightCommandType_g_tc_members[8]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::NumericGUID_AliasTag_t>::get().native();
                LightCommandType_g_tc_members[9]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::NumericGUID_AliasTag_t>::get().native();
                LightCommandType_g_tc_members[10]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::DateTime>::get().native();

                /* Initialize the values for member annotations. */
                LightCommandType_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                LightCommandType_g_tc_members[0]._annotations._defaultValue._u.boolean_value = 0;

                LightCommandType_g_tc_members[1]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                LightCommandType_g_tc_members[1]._annotations._defaultValue._u.boolean_value = 0;

                LightCommandType_g_tc_members[2]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                LightCommandType_g_tc_members[2]._annotations._defaultValue._u.boolean_value = 0;

                LightCommandType_g_tc_members[3]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                LightCommandType_g_tc_members[3]._annotations._defaultValue._u.boolean_value = 0;

                LightCommandType_g_tc_members[4]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                LightCommandType_g_tc_members[4]._annotations._defaultValue._u.boolean_value = 0;

                LightCommandType_g_tc_members[5]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                LightCommandType_g_tc_members[5]._annotations._defaultValue._u.boolean_value = 0;

                LightCommandType_g_tc_members[6]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                LightCommandType_g_tc_members[6]._annotations._defaultValue._u.boolean_value = 0;

                LightCommandType_g_tc._data._sampleAccessInfo = sample_access_info();
                LightCommandType_g_tc._data._typePlugin = type_plugin_info();    

                is_initialized = RTI_TRUE;

                return &LightCommandType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                UMAA::EO::LightControl::LightCommandType *sample;

                static RTIXCdrMemberAccessInfo LightCommandType_g_memberAccessInfos[11] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo LightCommandType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &LightCommandType_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    UMAA::EO::LightControl::LightCommandType);
                if (sample == NULL) {
                    return NULL;
                }

                LightCommandType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->allroundLight() - (char *)sample);

                LightCommandType_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->flashingLight() - (char *)sample);

                LightCommandType_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->mastheadLight() - (char *)sample);

                LightCommandType_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->portSideLight() - (char *)sample);

                LightCommandType_g_memberAccessInfos[4].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->starboardSideLight() - (char *)sample);

                LightCommandType_g_memberAccessInfos[5].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->sternLight() - (char *)sample);

                LightCommandType_g_memberAccessInfos[6].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->towingLight() - (char *)sample);

                LightCommandType_g_memberAccessInfos[7].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->source() - (char *)sample);

                LightCommandType_g_memberAccessInfos[8].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->destination() - (char *)sample);

                LightCommandType_g_memberAccessInfos[9].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->sessionID() - (char *)sample);

                LightCommandType_g_memberAccessInfos[10].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->timeStamp() - (char *)sample);

                LightCommandType_g_sampleAccessInfo.memberAccessInfos = 
                LightCommandType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(UMAA::EO::LightControl::LightCommandType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        LightCommandType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        LightCommandType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                LightCommandType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                LightCommandType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< UMAA::EO::LightControl::LightCommandType >;

                LightCommandType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &LightCommandType_g_sampleAccessInfo;
            }

            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin LightCommandType_g_typePlugin = 
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

                return &LightCommandType_g_typePlugin;
            }
        }; // native_type_code
        #endif

        const ::dds::core::xtypes::StructType& dynamic_type< UMAA::EO::LightControl::LightCommandType >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< UMAA::EO::LightControl::LightCommandType >::get())));
        }

    }
}

namespace dds { 
    namespace topic {
        void topic_type_support< UMAA::EO::LightControl::LightCommandType >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                UMAA::EO::LightControl::LightCommandTypePlugin_new,
                UMAA::EO::LightControl::LightCommandTypePlugin_delete);
        }

        std::vector<char>& topic_type_support< UMAA::EO::LightControl::LightCommandType >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const UMAA::EO::LightControl::LightCommandType& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = LightCommandTypePlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = LightCommandTypePlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< UMAA::EO::LightControl::LightCommandType >::from_cdr_buffer(UMAA::EO::LightControl::LightCommandType& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = LightCommandTypePlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create UMAA::EO::LightControl::LightCommandType from cdr buffer");
        }

        void topic_type_support< UMAA::EO::LightControl::LightCommandType >::reset_sample(UMAA::EO::LightControl::LightCommandType& sample) 
        {
            sample.allroundLight(0);
            sample.flashingLight(0);
            sample.mastheadLight(0);
            sample.portSideLight(0);
            sample.starboardSideLight(0);
            sample.sternLight(0);
            sample.towingLight(0);
            ::rti::topic::reset_sample(sample.source());
            ::rti::topic::reset_sample(sample.destination());
            ::rti::topic::reset_sample(sample.sessionID());
            ::rti::topic::reset_sample(sample.timeStamp());
        }

        void topic_type_support< UMAA::EO::LightControl::LightCommandType >::allocate_sample(UMAA::EO::LightControl::LightCommandType& sample, int, int) 
        {
            ::rti::topic::allocate_sample(sample.source(),  -1, -1);
            ::rti::topic::allocate_sample(sample.destination(),  -1, -1);
            ::rti::topic::allocate_sample(sample.sessionID(),  -1, -1);
            ::rti::topic::allocate_sample(sample.timeStamp(),  -1, -1);
        }

    }
}  

