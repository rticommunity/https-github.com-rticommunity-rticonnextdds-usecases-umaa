

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Orientation3D.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#include <iosfwd>
#include <iomanip>

#include "rti/topic/cdr/Serialization.hpp"

#include "Orientation3D.hpp"
#include "Orientation3DPlugin.hpp"

#include <rti/util/ostream_operators.hpp>

namespace UMAA {

    namespace Common {

        namespace Measurement {

            // ---- Orientation3D: 

            Orientation3D::Orientation3D() :
                m_pitchY_ (0.0) ,
                m_rollX_ (0.0) ,
                m_yawZ_ (0.0)  {
            }   

            Orientation3D::Orientation3D (double pitchY,double rollX,double yawZ):
                m_pitchY_( pitchY ),
                m_rollX_( rollX ),
                m_yawZ_( yawZ ) {
            }

            #ifdef RTI_CXX11_RVALUE_REFERENCES
            #ifdef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
            Orientation3D::Orientation3D(Orientation3D&& other_) OMG_NOEXCEPT  :m_pitchY_ (std::move(other_.m_pitchY_))
            ,
            m_rollX_ (std::move(other_.m_rollX_))
            ,
            m_yawZ_ (std::move(other_.m_yawZ_))
            {
            } 

            Orientation3D& Orientation3D::operator=(Orientation3D&&  other_) OMG_NOEXCEPT {
                Orientation3D tmp(std::move(other_));
                swap(tmp); 
                return *this;
            }
            #endif
            #endif   

            void Orientation3D::swap(Orientation3D& other_)  OMG_NOEXCEPT 
            {
                using std::swap;
                swap(m_pitchY_, other_.m_pitchY_);
                swap(m_rollX_, other_.m_rollX_);
                swap(m_yawZ_, other_.m_yawZ_);
            }  

            bool Orientation3D::operator == (const Orientation3D& other_) const {
                if (m_pitchY_ != other_.m_pitchY_) {
                    return false;
                }
                if (m_rollX_ != other_.m_rollX_) {
                    return false;
                }
                if (m_yawZ_ != other_.m_yawZ_) {
                    return false;
                }
                return true;
            }
            bool Orientation3D::operator != (const Orientation3D& other_) const {
                return !this->operator ==(other_);
            }

            std::ostream& operator << (std::ostream& o,const Orientation3D& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                o <<"[";
                o << "pitchY: " << std::setprecision(15) <<sample.pitchY()<<", ";
                o << "rollX: " << std::setprecision(15) <<sample.rollX()<<", ";
                o << "yawZ: " << std::setprecision(15) <<sample.yawZ() ;
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
        struct native_type_code< UMAA::Common::Measurement::Orientation3D > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member Orientation3D_g_tc_members[3]=
                {

                    {
                        (char *)"pitchY",/* Member name */
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
                        (char *)"rollX",/* Member name */
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
                        (char *)"yawZ",/* Member name */
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
                    }
                };

                static DDS_TypeCode Orientation3D_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::Common::Measurement::Orientation3D", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        3, /* Number of members */
                        Orientation3D_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for Orientation3D*/

                if (is_initialized) {
                    return &Orientation3D_g_tc;
                }

                Orientation3D_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                Orientation3D_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::Pitch_HalfAngle_AliasTag_t>::get().native();
                Orientation3D_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::Roll_Angle_AliasTag_t>::get().native();
                Orientation3D_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::Yaw_PosAngle_AliasTag_t>::get().native();

                /* Initialize the values for member annotations. */
                Orientation3D_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                Orientation3D_g_tc_members[0]._annotations._defaultValue._u.double_value = 0.0;
                Orientation3D_g_tc_members[0]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                Orientation3D_g_tc_members[0]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                Orientation3D_g_tc_members[0]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                Orientation3D_g_tc_members[0]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                Orientation3D_g_tc_members[1]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                Orientation3D_g_tc_members[1]._annotations._defaultValue._u.double_value = 0.0;
                Orientation3D_g_tc_members[1]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                Orientation3D_g_tc_members[1]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                Orientation3D_g_tc_members[1]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                Orientation3D_g_tc_members[1]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                Orientation3D_g_tc_members[2]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                Orientation3D_g_tc_members[2]._annotations._defaultValue._u.double_value = 0.0;
                Orientation3D_g_tc_members[2]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                Orientation3D_g_tc_members[2]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                Orientation3D_g_tc_members[2]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                Orientation3D_g_tc_members[2]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                Orientation3D_g_tc._data._sampleAccessInfo = sample_access_info();
                Orientation3D_g_tc._data._typePlugin = type_plugin_info();    

                is_initialized = RTI_TRUE;

                return &Orientation3D_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                UMAA::Common::Measurement::Orientation3D *sample;

                static RTIXCdrMemberAccessInfo Orientation3D_g_memberAccessInfos[3] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo Orientation3D_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &Orientation3D_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    UMAA::Common::Measurement::Orientation3D);
                if (sample == NULL) {
                    return NULL;
                }

                Orientation3D_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->pitchY() - (char *)sample);

                Orientation3D_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->rollX() - (char *)sample);

                Orientation3D_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->yawZ() - (char *)sample);

                Orientation3D_g_sampleAccessInfo.memberAccessInfos = 
                Orientation3D_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(UMAA::Common::Measurement::Orientation3D);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        Orientation3D_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        Orientation3D_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                Orientation3D_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                Orientation3D_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< UMAA::Common::Measurement::Orientation3D >;

                Orientation3D_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &Orientation3D_g_sampleAccessInfo;
            }

            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin Orientation3D_g_typePlugin = 
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

                return &Orientation3D_g_typePlugin;
            }
        }; // native_type_code
        #endif

        const ::dds::core::xtypes::StructType& dynamic_type< UMAA::Common::Measurement::Orientation3D >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< UMAA::Common::Measurement::Orientation3D >::get())));
        }

    }
}

namespace dds { 
    namespace topic {
        void topic_type_support< UMAA::Common::Measurement::Orientation3D >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                UMAA::Common::Measurement::Orientation3DPlugin_new,
                UMAA::Common::Measurement::Orientation3DPlugin_delete);
        }

        std::vector<char>& topic_type_support< UMAA::Common::Measurement::Orientation3D >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const UMAA::Common::Measurement::Orientation3D& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = Orientation3DPlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = Orientation3DPlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< UMAA::Common::Measurement::Orientation3D >::from_cdr_buffer(UMAA::Common::Measurement::Orientation3D& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = Orientation3DPlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create UMAA::Common::Measurement::Orientation3D from cdr buffer");
        }

        void topic_type_support< UMAA::Common::Measurement::Orientation3D >::reset_sample(UMAA::Common::Measurement::Orientation3D& sample) 
        {
            sample.pitchY(0.0);
            sample.rollX(0.0);
            sample.yawZ(0.0);
        }

        void topic_type_support< UMAA::Common::Measurement::Orientation3D >::allocate_sample(UMAA::Common::Measurement::Orientation3D& sample, int, int) 
        {
            RTIOsapiUtility_unusedParameter(sample);
        }

    }
}  

