

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from LocalFigure8StateType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#include <iosfwd>
#include <iomanip>

#ifndef NDDS_STANDALONE_TYPE
#include "rti/topic/cdr/Serialization.hpp"
#include "LocalFigure8StateTypePlugin.hpp"
#else
#include "rti/topic/cdr/SerializationHelpers.hpp"
#endif

#include "LocalFigure8StateType.hpp"

#include <rti/util/ostream_operators.hpp>

namespace UMAA {

    namespace MO {

        namespace LocalFigure8State {

            namespace LocalFigure8StateType_Specializations {

                std::ostream& operator << (std::ostream& o,const LocalFigure8StateType_Selectors& sample)
                {
                    ::rti::util::StreamFlagSaver flag_saver (o);
                    switch(sample){
                        case LocalFigure8StateType_Selectors::LOCALFIGURE8PATTERNTYPE_SELECT:
                        o << "LocalFigure8StateType_Selectors::LOCALFIGURE8PATTERNTYPE_SELECT" << " ";
                        break;
                        case LocalFigure8StateType_Selectors::LOCALFIGURE8TRANSITTYPE_SELECT:
                        o << "LocalFigure8StateType_Selectors::LOCALFIGURE8TRANSITTYPE_SELECT" << " ";
                        break;
                        default:
                        {
                            /* Prevents compiler warnings */
                        }
                    }
                    return o;
                }

                // ---- LocalFigure8StateType_Union: 

                LocalFigure8StateType_Union::Union_::Union_()  {
                }

                LocalFigure8StateType_Union::Union_::Union_(const ::UMAA::MO::LocalFigure8State::LocalFigure8PatternType& LocalFigure8PatternType_data_,const ::UMAA::MO::LocalFigure8State::LocalFigure8TransitType& LocalFigure8TransitType_data_):
                    m_LocalFigure8PatternType_data_(LocalFigure8PatternType_data_), 
                    m_LocalFigure8TransitType_data_(LocalFigure8TransitType_data_) {
                }

                LocalFigure8StateType_Union::LocalFigure8StateType_Union() :m_d_(default_discriminator())
                {
                }

                void LocalFigure8StateType_Union::swap(LocalFigure8StateType_Union& other_)  noexcept 
                {
                    using std::swap;
                    swap (m_d_,other_.m_d_);
                    switch (::rti::topic::cdr::integer_case(_d())) {
                        case (UMAA::MO::LocalFigure8State::LocalFigure8StateType_Specializations::LocalFigure8StateType_Selectors::LOCALFIGURE8PATTERNTYPE_SELECT):
                            {  
                                swap(m_u_.m_LocalFigure8PatternType_data_, other_.m_u_.m_LocalFigure8PatternType_data_);
                        } break;
                        case (UMAA::MO::LocalFigure8State::LocalFigure8StateType_Specializations::LocalFigure8StateType_Selectors::LOCALFIGURE8TRANSITTYPE_SELECT):
                            {  
                                swap(m_u_.m_LocalFigure8TransitType_data_, other_.m_u_.m_LocalFigure8TransitType_data_);
                        } break;

                        default:
                        {
                            /*
                            * Prevents compiler warnings when discriminator is an enum.
                            */
                        }
                    }
                    if (_d() != other_._d()){
                        switch(::rti::topic::cdr::integer_case(other_._d())){
                            case (UMAA::MO::LocalFigure8State::LocalFigure8StateType_Specializations::LocalFigure8StateType_Selectors::LOCALFIGURE8PATTERNTYPE_SELECT):
                                {  
                                    swap(m_u_.m_LocalFigure8PatternType_data_, other_.m_u_.m_LocalFigure8PatternType_data_);
                            } break;
                            case (UMAA::MO::LocalFigure8State::LocalFigure8StateType_Specializations::LocalFigure8StateType_Selectors::LOCALFIGURE8TRANSITTYPE_SELECT):
                                {  
                                    swap(m_u_.m_LocalFigure8TransitType_data_, other_.m_u_.m_LocalFigure8TransitType_data_);
                            } break;

                            default:
                            {
                                /*
                                * Prevents compiler warnings when discriminator is an enum.
                                */
                            }
                        }
                    }
                }  

                bool LocalFigure8StateType_Union::operator == (const LocalFigure8StateType_Union& other_) const {
                    if (_d() != other_._d()){
                        return false;
                    }
                    switch(::rti::topic::cdr::integer_case(_d())){
                        case (UMAA::MO::LocalFigure8State::LocalFigure8StateType_Specializations::LocalFigure8StateType_Selectors::LOCALFIGURE8PATTERNTYPE_SELECT):
                            {  
                                if (m_u_.m_LocalFigure8PatternType_data_ != other_.m_u_.m_LocalFigure8PatternType_data_) {
                                    return false;
                            }
                        } break ;
                        case (UMAA::MO::LocalFigure8State::LocalFigure8StateType_Specializations::LocalFigure8StateType_Selectors::LOCALFIGURE8TRANSITTYPE_SELECT):
                            {  
                                if (m_u_.m_LocalFigure8TransitType_data_ != other_.m_u_.m_LocalFigure8TransitType_data_) {
                                    return false;
                            }
                        } break ;
                        default:
                        {
                            /*
                            * Prevents compiler warnings when discriminator is an enum.
                            */
                        }
                    }
                    return true;
                }

                bool LocalFigure8StateType_Union::operator != (const LocalFigure8StateType_Union& other_) const {
                    return !this->operator ==(other_);
                }

                std::ostream& operator << (std::ostream& o,const LocalFigure8StateType_Union& sample)
                {
                    ::rti::util::StreamFlagSaver flag_saver (o);
                    o <<"[";
                    o << "_d: " << sample._d () <<", ";
                    switch(::rti::topic::cdr::integer_case(sample._d())){
                        case (UMAA::MO::LocalFigure8State::LocalFigure8StateType_Specializations::LocalFigure8StateType_Selectors::LOCALFIGURE8PATTERNTYPE_SELECT):
                            {  
                                o << "LocalFigure8PatternType_data: " << sample.LocalFigure8PatternType_data ()<<", ";
                        } break ;
                        case (UMAA::MO::LocalFigure8State::LocalFigure8StateType_Specializations::LocalFigure8StateType_Selectors::LOCALFIGURE8TRANSITTYPE_SELECT):
                            {  
                                o << "LocalFigure8TransitType_data: " << sample.LocalFigure8TransitType_data ();
                        } break ;
                        default:
                        {
                            /*
                            * Prevents compiler warnings when discriminator is an enum.
                            */
                        }
                    }
                    o <<"]";
                    return o;
                }

                ::UMAA::MO::LocalFigure8State::LocalFigure8StateType_Specializations::LocalFigure8StateType_Selectors LocalFigure8StateType_Union::default_discriminator() {
                    return ::UMAA::MO::LocalFigure8State::LocalFigure8StateType_Specializations::LocalFigure8StateType_Selectors(static_cast< ::UMAA::MO::LocalFigure8State::LocalFigure8StateType_Specializations::LocalFigure8StateType_Selectors >(0));
                }  

            } // namespace LocalFigure8StateType_Specializations  

            // ---- LocalFigure8StateType: 

            LocalFigure8StateType::LocalFigure8StateType()  {

            }   

            LocalFigure8StateType::LocalFigure8StateType (const ::UMAA::MO::LocalFigure8State::LocalFigure8StateType_Specializations::LocalFigure8StateType_Union& LocalFigure8StateType_subtypes_):
                m_LocalFigure8StateType_subtypes_(LocalFigure8StateType_subtypes_) {
            }

            void LocalFigure8StateType::swap(LocalFigure8StateType& other_)  noexcept 
            {
                using std::swap;
                swap(m_LocalFigure8StateType_subtypes_, other_.m_LocalFigure8StateType_subtypes_);
            }  

            bool LocalFigure8StateType::operator == (const LocalFigure8StateType& other_) const {
                if (m_LocalFigure8StateType_subtypes_ != other_.m_LocalFigure8StateType_subtypes_) {
                    return false;
                }
                return true;
            }

            bool LocalFigure8StateType::operator != (const LocalFigure8StateType& other_) const {
                return !this->operator ==(other_);
            }

            std::ostream& operator << (std::ostream& o,const LocalFigure8StateType& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                o <<"[";
                o << "LocalFigure8StateType_subtypes: " << sample.LocalFigure8StateType_subtypes ();
                o <<"]";
                return o;
            }

        } // namespace LocalFigure8State  

    } // namespace MO  

} // namespace UMAA  

#ifdef NDDS_STANDALONE_TYPE
namespace rti {
    namespace topic {
        const ::UMAA::MO::LocalFigure8State::LocalFigure8StateType_Specializations::LocalFigure8StateType_Selectors default_enumerator< ::UMAA::MO::LocalFigure8State::LocalFigure8StateType_Specializations::LocalFigure8StateType_Selectors>::value = ::UMAA::MO::LocalFigure8State::LocalFigure8StateType_Specializations::LocalFigure8StateType_Selectors::LOCALFIGURE8PATTERNTYPE_SELECT;
    }
}

#else
// --- Type traits: -------------------------------------------------

namespace rti { 
    namespace topic {

        const ::UMAA::MO::LocalFigure8State::LocalFigure8StateType_Specializations::LocalFigure8StateType_Selectors default_enumerator< ::UMAA::MO::LocalFigure8State::LocalFigure8StateType_Specializations::LocalFigure8StateType_Selectors>::value = ::UMAA::MO::LocalFigure8State::LocalFigure8StateType_Specializations::LocalFigure8StateType_Selectors::LOCALFIGURE8PATTERNTYPE_SELECT;
        template<>
        struct native_type_code< ::UMAA::MO::LocalFigure8State::LocalFigure8StateType_Specializations::LocalFigure8StateType_Selectors > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member LocalFigure8StateType_Selectors_g_tc_members[2]=
                {

                    {
                        (char *)"LOCALFIGURE8PATTERNTYPE_SELECT",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::MO::LocalFigure8State::LocalFigure8StateType_Specializations::LocalFigure8StateType_Selectors::LOCALFIGURE8PATTERNTYPE_SELECT), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"LOCALFIGURE8TRANSITTYPE_SELECT",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(::UMAA::MO::LocalFigure8State::LocalFigure8StateType_Specializations::LocalFigure8StateType_Selectors::LOCALFIGURE8TRANSITTYPE_SELECT), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }
                };

                static DDS_TypeCode LocalFigure8StateType_Selectors_g_tc =
                {{
                        DDS_TK_ENUM, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::MO::LocalFigure8State::LocalFigure8StateType_Specializations::LocalFigure8StateType_Selectors", /* Name */
                        NULL,     /* Base class type code is assigned later */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        2, /* Number of members */
                        LocalFigure8StateType_Selectors_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Type Modifier */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for LocalFigure8StateType_Selectors*/

                if (is_initialized) {
                    return &LocalFigure8StateType_Selectors_g_tc;
                }

                is_initialized = RTI_TRUE;

                LocalFigure8StateType_Selectors_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                /* Initialize the values for annotations. */
                LocalFigure8StateType_Selectors_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
                LocalFigure8StateType_Selectors_g_tc._data._annotations._defaultValue._u.long_value = 0;

                LocalFigure8StateType_Selectors_g_tc._data._sampleAccessInfo = sample_access_info();
                LocalFigure8StateType_Selectors_g_tc._data._typePlugin = type_plugin_info();    

                return &LocalFigure8StateType_Selectors_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo LocalFigure8StateType_Selectors_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo LocalFigure8StateType_Selectors_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &LocalFigure8StateType_Selectors_g_sampleAccessInfo;
                }

                LocalFigure8StateType_Selectors_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                LocalFigure8StateType_Selectors_g_sampleAccessInfo.memberAccessInfos = 
                LocalFigure8StateType_Selectors_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::MO::LocalFigure8State::LocalFigure8StateType_Specializations::LocalFigure8StateType_Selectors);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        LocalFigure8StateType_Selectors_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        LocalFigure8StateType_Selectors_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                LocalFigure8StateType_Selectors_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                LocalFigure8StateType_Selectors_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::MO::LocalFigure8State::LocalFigure8StateType_Specializations::LocalFigure8StateType_Selectors >;

                LocalFigure8StateType_Selectors_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &LocalFigure8StateType_Selectors_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin LocalFigure8StateType_Selectors_g_typePlugin = 
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

                return &LocalFigure8StateType_Selectors_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::EnumType& dynamic_type< ::UMAA::MO::LocalFigure8State::LocalFigure8StateType_Specializations::LocalFigure8StateType_Selectors >::get()
        {
            return static_cast<const ::dds::core::xtypes::EnumType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::MO::LocalFigure8State::LocalFigure8StateType_Specializations::LocalFigure8StateType_Selectors >::get())));
        }

        template<>
        struct native_type_code< ::UMAA::MO::LocalFigure8State::LocalFigure8StateType_Specializations::LocalFigure8StateType_Union > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member LocalFigure8StateType_Union_g_tc_members[2]=
                {

                    {
                        (char *)"LocalFigure8PatternType_data",/* Member name */
                        {
                            1,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        1, /* Number of labels */
                        static_cast<int>((UMAA::MO::LocalFigure8State::LocalFigure8StateType_Specializations::LocalFigure8StateType_Selectors::LOCALFIGURE8PATTERNTYPE_SELECT)),
                        NULL, /* Labels (it is NULL when there is only one label)*/
                        RTI_CDR_NONKEY_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"LocalFigure8TransitType_data",/* Member name */
                        {
                            2,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        1, /* Number of labels */
                        static_cast<int>((UMAA::MO::LocalFigure8State::LocalFigure8StateType_Specializations::LocalFigure8StateType_Selectors::LOCALFIGURE8TRANSITTYPE_SELECT)),
                        NULL, /* Labels (it is NULL when there is only one label)*/
                        RTI_CDR_NONKEY_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }
                };

                static DDS_TypeCode LocalFigure8StateType_Union_g_tc =
                {{
                        DDS_TK_UNION, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::MO::LocalFigure8State::LocalFigure8StateType_Specializations::LocalFigure8StateType_Union", /* Name */
                        NULL,     /* Base class type code is assigned later */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        2, /* Number of members */
                        LocalFigure8StateType_Union_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Type Modifier */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for LocalFigure8StateType_Union*/

                if (is_initialized) {
                    return &LocalFigure8StateType_Union_g_tc;
                }

                is_initialized = RTI_TRUE;

                LocalFigure8StateType_Union_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                LocalFigure8StateType_Union_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::MO::LocalFigure8State::LocalFigure8PatternType>::get().native();
                LocalFigure8StateType_Union_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::MO::LocalFigure8State::LocalFigure8TransitType>::get().native();

                /* Initialize the values for member annotations. */

                /* Discriminator type code */
                LocalFigure8StateType_Union_g_tc._data._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::MO::LocalFigure8State::LocalFigure8StateType_Specializations::LocalFigure8StateType_Selectors>::get().native();

                LocalFigure8StateType_Union_g_tc._data._sampleAccessInfo = sample_access_info();
                LocalFigure8StateType_Union_g_tc._data._typePlugin = type_plugin_info();    

                return &LocalFigure8StateType_Union_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                ::UMAA::MO::LocalFigure8State::LocalFigure8StateType_Specializations::LocalFigure8StateType_Union *sample;

                static RTIXCdrMemberAccessInfo LocalFigure8StateType_Union_g_memberAccessInfos[3] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo LocalFigure8StateType_Union_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &LocalFigure8StateType_Union_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    ::UMAA::MO::LocalFigure8State::LocalFigure8StateType_Specializations::LocalFigure8StateType_Union);
                if (sample == NULL) {
                    return NULL;
                }

                LocalFigure8StateType_Union_g_memberAccessInfos[0].bindingMemberValueOffset[0] =
                (RTIXCdrUnsignedLong) ((char *)&sample->_d() - (char *)sample);

                sample->_d() = (UMAA::MO::LocalFigure8State::LocalFigure8StateType_Specializations::LocalFigure8StateType_Selectors::LOCALFIGURE8PATTERNTYPE_SELECT);
                LocalFigure8StateType_Union_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->LocalFigure8PatternType_data() - (char *)sample);

                sample->_d() = (UMAA::MO::LocalFigure8State::LocalFigure8StateType_Specializations::LocalFigure8StateType_Selectors::LOCALFIGURE8TRANSITTYPE_SELECT);
                LocalFigure8StateType_Union_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->LocalFigure8TransitType_data() - (char *)sample);

                LocalFigure8StateType_Union_g_sampleAccessInfo.memberAccessInfos = 
                LocalFigure8StateType_Union_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::MO::LocalFigure8State::LocalFigure8StateType_Specializations::LocalFigure8StateType_Union);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        LocalFigure8StateType_Union_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        LocalFigure8StateType_Union_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                LocalFigure8StateType_Union_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                LocalFigure8StateType_Union_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::MO::LocalFigure8State::LocalFigure8StateType_Specializations::LocalFigure8StateType_Union >;

                LocalFigure8StateType_Union_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &LocalFigure8StateType_Union_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin LocalFigure8StateType_Union_g_typePlugin = 
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

                return &LocalFigure8StateType_Union_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::UnionType& dynamic_type< ::UMAA::MO::LocalFigure8State::LocalFigure8StateType_Specializations::LocalFigure8StateType_Union >::get()
        {
            return static_cast<const ::dds::core::xtypes::UnionType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::MO::LocalFigure8State::LocalFigure8StateType_Specializations::LocalFigure8StateType_Union >::get())));
        }

        template<>
        struct native_type_code< ::UMAA::MO::LocalFigure8State::LocalFigure8StateType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member LocalFigure8StateType_g_tc_members[1]=
                {

                    {
                        (char *)"LocalFigure8StateType_subtypes",/* Member name */
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

                static DDS_TypeCode LocalFigure8StateType_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::MO::LocalFigure8State::LocalFigure8StateType", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        1, /* Number of members */
                        LocalFigure8StateType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for LocalFigure8StateType*/

                if (is_initialized) {
                    return &LocalFigure8StateType_g_tc;
                }

                is_initialized = RTI_TRUE;

                LocalFigure8StateType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                LocalFigure8StateType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< ::UMAA::MO::LocalFigure8State::LocalFigure8StateType_Specializations::LocalFigure8StateType_Union>::get().native();

                /* Initialize the values for member annotations. */

                LocalFigure8StateType_g_tc._data._sampleAccessInfo = sample_access_info();
                LocalFigure8StateType_g_tc._data._typePlugin = type_plugin_info();    

                return &LocalFigure8StateType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                ::UMAA::MO::LocalFigure8State::LocalFigure8StateType *sample;

                static RTIXCdrMemberAccessInfo LocalFigure8StateType_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo LocalFigure8StateType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &LocalFigure8StateType_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    ::UMAA::MO::LocalFigure8State::LocalFigure8StateType);
                if (sample == NULL) {
                    return NULL;
                }

                LocalFigure8StateType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->LocalFigure8StateType_subtypes() - (char *)sample);

                LocalFigure8StateType_g_sampleAccessInfo.memberAccessInfos = 
                LocalFigure8StateType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::UMAA::MO::LocalFigure8State::LocalFigure8StateType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        LocalFigure8StateType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        LocalFigure8StateType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                LocalFigure8StateType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                LocalFigure8StateType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::UMAA::MO::LocalFigure8State::LocalFigure8StateType >;

                LocalFigure8StateType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &LocalFigure8StateType_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin LocalFigure8StateType_g_typePlugin = 
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

                return &LocalFigure8StateType_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::StructType& dynamic_type< ::UMAA::MO::LocalFigure8State::LocalFigure8StateType >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::UMAA::MO::LocalFigure8State::LocalFigure8StateType >::get())));
        }
    }
}

namespace dds { 
    namespace topic {
        void topic_type_support< ::UMAA::MO::LocalFigure8State::LocalFigure8StateType_Specializations::LocalFigure8StateType_Union >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                ::UMAA::MO::LocalFigure8State::LocalFigure8StateType_Specializations::LocalFigure8StateType_UnionPlugin_new,
                ::UMAA::MO::LocalFigure8State::LocalFigure8StateType_Specializations::LocalFigure8StateType_UnionPlugin_delete);
        }

        std::vector<char>& topic_type_support< ::UMAA::MO::LocalFigure8State::LocalFigure8StateType_Specializations::LocalFigure8StateType_Union >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const ::UMAA::MO::LocalFigure8State::LocalFigure8StateType_Specializations::LocalFigure8StateType_Union& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = LocalFigure8StateType_UnionPlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = LocalFigure8StateType_UnionPlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< ::UMAA::MO::LocalFigure8State::LocalFigure8StateType_Specializations::LocalFigure8StateType_Union >::from_cdr_buffer(::UMAA::MO::LocalFigure8State::LocalFigure8StateType_Specializations::LocalFigure8StateType_Union& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = LocalFigure8StateType_UnionPlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create ::UMAA::MO::LocalFigure8State::LocalFigure8StateType_Specializations::LocalFigure8StateType_Union from cdr buffer");
        }

        void topic_type_support< ::UMAA::MO::LocalFigure8State::LocalFigure8StateType_Specializations::LocalFigure8StateType_Union >::reset_sample(::UMAA::MO::LocalFigure8State::LocalFigure8StateType_Specializations::LocalFigure8StateType_Union& sample) 
        {
            sample._d() = (UMAA::MO::LocalFigure8State::LocalFigure8StateType_Specializations::LocalFigure8StateType_Selectors::LOCALFIGURE8PATTERNTYPE_SELECT);
            ::rti::topic::reset_sample(sample.LocalFigure8PatternType_data());
            sample._d() = (UMAA::MO::LocalFigure8State::LocalFigure8StateType_Specializations::LocalFigure8StateType_Selectors::LOCALFIGURE8TRANSITTYPE_SELECT);
            ::rti::topic::reset_sample(sample.LocalFigure8TransitType_data());

            sample._d() = ::UMAA::MO::LocalFigure8State::LocalFigure8StateType_Specializations::LocalFigure8StateType_Union::default_discriminator();
        }

        void topic_type_support< ::UMAA::MO::LocalFigure8State::LocalFigure8StateType_Specializations::LocalFigure8StateType_Union >::allocate_sample(::UMAA::MO::LocalFigure8State::LocalFigure8StateType_Specializations::LocalFigure8StateType_Union& sample, int, int) 
        {
            sample._d() = (UMAA::MO::LocalFigure8State::LocalFigure8StateType_Specializations::LocalFigure8StateType_Selectors::LOCALFIGURE8PATTERNTYPE_SELECT);
            ::rti::topic::allocate_sample(sample.LocalFigure8PatternType_data(),  -1, -1);
            sample._d() = (UMAA::MO::LocalFigure8State::LocalFigure8StateType_Specializations::LocalFigure8StateType_Selectors::LOCALFIGURE8TRANSITTYPE_SELECT);
            ::rti::topic::allocate_sample(sample.LocalFigure8TransitType_data(),  -1, -1);

            sample._d() = ::UMAA::MO::LocalFigure8State::LocalFigure8StateType_Specializations::LocalFigure8StateType_Union::default_discriminator();
        }
        void topic_type_support< ::UMAA::MO::LocalFigure8State::LocalFigure8StateType >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                ::UMAA::MO::LocalFigure8State::LocalFigure8StateTypePlugin_new,
                ::UMAA::MO::LocalFigure8State::LocalFigure8StateTypePlugin_delete);
        }

        std::vector<char>& topic_type_support< ::UMAA::MO::LocalFigure8State::LocalFigure8StateType >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const ::UMAA::MO::LocalFigure8State::LocalFigure8StateType& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = LocalFigure8StateTypePlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = LocalFigure8StateTypePlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< ::UMAA::MO::LocalFigure8State::LocalFigure8StateType >::from_cdr_buffer(::UMAA::MO::LocalFigure8State::LocalFigure8StateType& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = LocalFigure8StateTypePlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create ::UMAA::MO::LocalFigure8State::LocalFigure8StateType from cdr buffer");
        }

        void topic_type_support< ::UMAA::MO::LocalFigure8State::LocalFigure8StateType >::reset_sample(::UMAA::MO::LocalFigure8State::LocalFigure8StateType& sample) 
        {
            ::rti::topic::reset_sample(sample.LocalFigure8StateType_subtypes());
        }

        void topic_type_support< ::UMAA::MO::LocalFigure8State::LocalFigure8StateType >::allocate_sample(::UMAA::MO::LocalFigure8State::LocalFigure8StateType& sample, int, int) 
        {
            ::rti::topic::allocate_sample(sample.LocalFigure8StateType_subtypes(),  -1, -1);
        }
    }
}  

#endif // NDDS_STANDALONE_TYPE
