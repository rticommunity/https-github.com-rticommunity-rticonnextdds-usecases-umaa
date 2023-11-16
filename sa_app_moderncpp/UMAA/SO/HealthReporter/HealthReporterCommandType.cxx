

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from HealthReporterCommandType.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#include <iosfwd>
#include <iomanip>

#include "rti/topic/cdr/Serialization.hpp"

#include "HealthReporterCommandType.hpp"
#include "HealthReporterCommandTypePlugin.hpp"

#include <rti/util/ostream_operators.hpp>

namespace UMAA {

    namespace SO {

        namespace HealthReporter {

            // ---- HealthReporterCommandType: 

            HealthReporterCommandType::HealthReporterCommandType()  {
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

            HealthReporterCommandType::HealthReporterCommandType (const UMAA::Common::Measurement::BuiltInTestStatusType_All& builtInTest,const UMAA::Common::Measurement::NumericGUID& source,const UMAA::Common::Measurement::NumericGUID& destination,const UMAA::Common::Measurement::NumericGUID& sessionID,const UMAA::Common::Measurement::DateTime& timeStamp):
                m_builtInTest_( builtInTest ),
                m_source_( source ),
                m_destination_( destination ),
                m_sessionID_( sessionID ),
                m_timeStamp_( timeStamp ) {
            }

            #ifdef RTI_CXX11_RVALUE_REFERENCES
            #ifdef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
            HealthReporterCommandType::HealthReporterCommandType(HealthReporterCommandType&& other_) OMG_NOEXCEPT  :m_builtInTest_ (std::move(other_.m_builtInTest_))
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

            HealthReporterCommandType& HealthReporterCommandType::operator=(HealthReporterCommandType&&  other_) OMG_NOEXCEPT {
                HealthReporterCommandType tmp(std::move(other_));
                swap(tmp); 
                return *this;
            }
            #endif
            #endif   

            void HealthReporterCommandType::swap(HealthReporterCommandType& other_)  OMG_NOEXCEPT 
            {
                using std::swap;
                swap(m_builtInTest_, other_.m_builtInTest_);
                swap(m_source_, other_.m_source_);
                swap(m_destination_, other_.m_destination_);
                swap(m_sessionID_, other_.m_sessionID_);
                swap(m_timeStamp_, other_.m_timeStamp_);
            }  

            bool HealthReporterCommandType::operator == (const HealthReporterCommandType& other_) const {
                if (m_builtInTest_ != other_.m_builtInTest_) {
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
            bool HealthReporterCommandType::operator != (const HealthReporterCommandType& other_) const {
                return !this->operator ==(other_);
            }

            std::ostream& operator << (std::ostream& o,const HealthReporterCommandType& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                o <<"[";
                o << "builtInTest: " << sample.builtInTest()<<", ";
                o << "source: " << sample.source()<<", ";
                o << "destination: " << sample.destination()<<", ";
                o << "sessionID: " << sample.sessionID()<<", ";
                o << "timeStamp: " << sample.timeStamp() ;
                o <<"]";
                return o;
            }

        } // namespace HealthReporter  

    } // namespace SO  

} // namespace UMAA  

// --- Type traits: -------------------------------------------------

namespace rti { 
    namespace topic {

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct native_type_code< UMAA::SO::HealthReporter::HealthReporterCommandType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member HealthReporterCommandType_g_tc_members[5]=
                {

                    {
                        (char *)"builtInTest",/* Member name */
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
                        (char *)"destination",/* Member name */
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
                    }, 
                    {
                        (char *)"timeStamp",/* Member name */
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
                    }
                };

                static DDS_TypeCode HealthReporterCommandType_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::SO::HealthReporter::HealthReporterCommandType", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        5, /* Number of members */
                        HealthReporterCommandType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for HealthReporterCommandType*/

                if (is_initialized) {
                    return &HealthReporterCommandType_g_tc;
                }

                HealthReporterCommandType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                HealthReporterCommandType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::BuiltInTestStatusType_All>::get().native();
                HealthReporterCommandType_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::NumericGUID_AliasTag_t>::get().native();
                HealthReporterCommandType_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::NumericGUID_AliasTag_t>::get().native();
                HealthReporterCommandType_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::NumericGUID_AliasTag_t>::get().native();
                HealthReporterCommandType_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::DateTime>::get().native();

                /* Initialize the values for member annotations. */

                HealthReporterCommandType_g_tc._data._sampleAccessInfo = sample_access_info();
                HealthReporterCommandType_g_tc._data._typePlugin = type_plugin_info();    

                is_initialized = RTI_TRUE;

                return &HealthReporterCommandType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                UMAA::SO::HealthReporter::HealthReporterCommandType *sample;

                static RTIXCdrMemberAccessInfo HealthReporterCommandType_g_memberAccessInfos[5] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo HealthReporterCommandType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &HealthReporterCommandType_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    UMAA::SO::HealthReporter::HealthReporterCommandType);
                if (sample == NULL) {
                    return NULL;
                }

                HealthReporterCommandType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->builtInTest() - (char *)sample);

                HealthReporterCommandType_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->source() - (char *)sample);

                HealthReporterCommandType_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->destination() - (char *)sample);

                HealthReporterCommandType_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->sessionID() - (char *)sample);

                HealthReporterCommandType_g_memberAccessInfos[4].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->timeStamp() - (char *)sample);

                HealthReporterCommandType_g_sampleAccessInfo.memberAccessInfos = 
                HealthReporterCommandType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(UMAA::SO::HealthReporter::HealthReporterCommandType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        HealthReporterCommandType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        HealthReporterCommandType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                HealthReporterCommandType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                HealthReporterCommandType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< UMAA::SO::HealthReporter::HealthReporterCommandType >;

                HealthReporterCommandType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &HealthReporterCommandType_g_sampleAccessInfo;
            }

            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin HealthReporterCommandType_g_typePlugin = 
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

                return &HealthReporterCommandType_g_typePlugin;
            }
        }; // native_type_code
        #endif

        const ::dds::core::xtypes::StructType& dynamic_type< UMAA::SO::HealthReporter::HealthReporterCommandType >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< UMAA::SO::HealthReporter::HealthReporterCommandType >::get())));
        }

    }
}

namespace dds { 
    namespace topic {
        void topic_type_support< UMAA::SO::HealthReporter::HealthReporterCommandType >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                UMAA::SO::HealthReporter::HealthReporterCommandTypePlugin_new,
                UMAA::SO::HealthReporter::HealthReporterCommandTypePlugin_delete);
        }

        std::vector<char>& topic_type_support< UMAA::SO::HealthReporter::HealthReporterCommandType >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const UMAA::SO::HealthReporter::HealthReporterCommandType& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = HealthReporterCommandTypePlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = HealthReporterCommandTypePlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< UMAA::SO::HealthReporter::HealthReporterCommandType >::from_cdr_buffer(UMAA::SO::HealthReporter::HealthReporterCommandType& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = HealthReporterCommandTypePlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create UMAA::SO::HealthReporter::HealthReporterCommandType from cdr buffer");
        }

        void topic_type_support< UMAA::SO::HealthReporter::HealthReporterCommandType >::reset_sample(UMAA::SO::HealthReporter::HealthReporterCommandType& sample) 
        {
            ::rti::topic::reset_sample(sample.builtInTest());
            ::rti::topic::reset_sample(sample.source());
            ::rti::topic::reset_sample(sample.destination());
            ::rti::topic::reset_sample(sample.sessionID());
            ::rti::topic::reset_sample(sample.timeStamp());
        }

        void topic_type_support< UMAA::SO::HealthReporter::HealthReporterCommandType >::allocate_sample(UMAA::SO::HealthReporter::HealthReporterCommandType& sample, int, int) 
        {
            ::rti::topic::allocate_sample(sample.builtInTest(),  -1, -1);
            ::rti::topic::allocate_sample(sample.source(),  -1, -1);
            ::rti::topic::allocate_sample(sample.destination(),  -1, -1);
            ::rti::topic::allocate_sample(sample.sessionID(),  -1, -1);
            ::rti::topic::allocate_sample(sample.timeStamp(),  -1, -1);
        }

    }
}  

