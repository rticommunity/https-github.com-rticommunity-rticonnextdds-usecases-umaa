

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ContingencyObjectiveType.idl 
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#ifndef dds_c_log_impl_h              
#include "dds_c/dds_c_log_impl.h"                                
#endif 

#ifndef dds_c_log_infrastructure_h
#include "dds_c/dds_c_infrastructure_impl.h"       
#endif 

#ifndef cdr_type_h
#include "cdr/cdr_type.h"
#endif    

#ifndef osapi_heap_h
#include "osapi/osapi_heap.h" 
#endif
#else
#include "ndds_standalone_type.h"
#endif

#include "ContingencyObjectiveType.h"

#ifndef NDDS_STANDALONE_TYPE
#include "ContingencyObjectiveTypePlugin.h"
#endif

#include <new>

/* ========================================================================= */
const char *UMAA_MM_BaseType_ContingencyObjectiveTypeTYPENAME = "UMAA::MM::BaseType::ContingencyObjectiveType";

#ifndef NDDS_STANDALONE_TYPE
DDS_TypeCode * UMAA_MM_BaseType_ContingencyObjectiveType_get_typecode(void)
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode_Member UMAA_MM_BaseType_ContingencyObjectiveType_g_tc_members[13]=
    {

        {
            (char *)"altitude",/* Member name */
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
            (char *)"altitudeAGL",/* Member name */
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
            (char *)"altitudeASF",/* Member name */
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
            (char *)"behavior",/* Member name */
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
            (char *)"depth",/* Member name */
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
            (char *)"DTEDAltitude",/* Member name */
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
            (char *)"mode",/* Member name */
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
            (char *)"position",/* Member name */
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
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER
        }, 
        {
            (char *)"radius",/* Member name */
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
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER
        }, 
        {
            (char *)"safeAltitude",/* Member name */
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
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER
        }, 
        {
            (char *)"safeAltitudeOffset",/* Member name */
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
        }, 
        {
            (char *)"speed",/* Member name */
            {
                11,/* Representation ID */
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
            (char *)"vehicleRunTime",/* Member name */
            {
                12,/* Representation ID */
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

    static DDS_TypeCode UMAA_MM_BaseType_ContingencyObjectiveType_g_tc =
    {{
            DDS_TK_STRUCT, /* Kind */
            DDS_BOOLEAN_FALSE, /* Ignored */
            -1, /*Ignored*/
            (char *)"UMAA::MM::BaseType::ContingencyObjectiveType", /* Name */
            NULL, /* Ignored */      
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            13, /* Number of members */
            UMAA_MM_BaseType_ContingencyObjectiveType_g_tc_members, /* Members */
            DDS_VM_NONE, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER,
            DDS_BOOLEAN_TRUE, /* _isCopyable */
            NULL, /* _sampleAccessInfo: assigned later */
            NULL /* _typePlugin: assigned later */
        }}; /* Type code for UMAA_MM_BaseType_ContingencyObjectiveType*/

    if (is_initialized) {
        return &UMAA_MM_BaseType_ContingencyObjectiveType_g_tc;
    }

    is_initialized = RTI_TRUE;

    UMAA_MM_BaseType_ContingencyObjectiveType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

    UMAA_MM_BaseType_ContingencyObjectiveType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_Measurement_Altitude_MSL_get_typecode();
    UMAA_MM_BaseType_ContingencyObjectiveType_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_Measurement_Altitude_AGL_get_typecode();
    UMAA_MM_BaseType_ContingencyObjectiveType_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_Measurement_Distance_ASF_get_typecode();
    UMAA_MM_BaseType_ContingencyObjectiveType_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_MaritimeEnumeration_ContingencyBehaviorEnumType_ContingencyBehaviorEnumType_get_typecode();
    UMAA_MM_BaseType_ContingencyObjectiveType_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_Measurement_Distance_BSL_get_typecode();
    UMAA_MM_BaseType_ContingencyObjectiveType_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_Measurement_Distance_get_typecode();
    UMAA_MM_BaseType_ContingencyObjectiveType_g_tc_members[6]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_PrimitiveConstrained_StringShortDescription_get_typecode();
    UMAA_MM_BaseType_ContingencyObjectiveType_g_tc_members[7]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_Measurement_Position2D_get_typecode();
    UMAA_MM_BaseType_ContingencyObjectiveType_g_tc_members[8]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_Measurement_Distance_get_typecode();
    UMAA_MM_BaseType_ContingencyObjectiveType_g_tc_members[9]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_Measurement_Distance_get_typecode();
    UMAA_MM_BaseType_ContingencyObjectiveType_g_tc_members[10]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_Measurement_Distance_get_typecode();
    UMAA_MM_BaseType_ContingencyObjectiveType_g_tc_members[11]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_Measurement_Speed_get_typecode();
    UMAA_MM_BaseType_ContingencyObjectiveType_g_tc_members[12]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_Measurement_Duration_Hours_get_typecode();

    /* Initialize the values for member annotations. */
    UMAA_MM_BaseType_ContingencyObjectiveType_g_tc_members[2]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_MM_BaseType_ContingencyObjectiveType_g_tc_members[2]._annotations._defaultValue._u.double_value = 0.0;
    UMAA_MM_BaseType_ContingencyObjectiveType_g_tc_members[2]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_MM_BaseType_ContingencyObjectiveType_g_tc_members[2]._annotations._minValue._u.double_value = 0ULL;
    UMAA_MM_BaseType_ContingencyObjectiveType_g_tc_members[2]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_MM_BaseType_ContingencyObjectiveType_g_tc_members[2]._annotations._maxValue._u.double_value = 401056000ULL;
    UMAA_MM_BaseType_ContingencyObjectiveType_g_tc_members[3]._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
    UMAA_MM_BaseType_ContingencyObjectiveType_g_tc_members[3]._annotations._defaultValue._u.enumerated_value = 0;
    UMAA_MM_BaseType_ContingencyObjectiveType_g_tc_members[4]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_MM_BaseType_ContingencyObjectiveType_g_tc_members[4]._annotations._defaultValue._u.double_value = 0.0;
    UMAA_MM_BaseType_ContingencyObjectiveType_g_tc_members[4]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_MM_BaseType_ContingencyObjectiveType_g_tc_members[4]._annotations._minValue._u.double_value = 0ULL;
    UMAA_MM_BaseType_ContingencyObjectiveType_g_tc_members[4]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_MM_BaseType_ContingencyObjectiveType_g_tc_members[4]._annotations._maxValue._u.double_value = 10000ULL;
    UMAA_MM_BaseType_ContingencyObjectiveType_g_tc_members[5]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_MM_BaseType_ContingencyObjectiveType_g_tc_members[5]._annotations._defaultValue._u.double_value = 0.0;
    UMAA_MM_BaseType_ContingencyObjectiveType_g_tc_members[5]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_MM_BaseType_ContingencyObjectiveType_g_tc_members[5]._annotations._minValue._u.double_value = 0ULL;
    UMAA_MM_BaseType_ContingencyObjectiveType_g_tc_members[5]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_MM_BaseType_ContingencyObjectiveType_g_tc_members[5]._annotations._maxValue._u.double_value = 401056000ULL;
    UMAA_MM_BaseType_ContingencyObjectiveType_g_tc_members[6]._annotations._defaultValue._d = RTI_XCDR_TK_STRING;
    UMAA_MM_BaseType_ContingencyObjectiveType_g_tc_members[6]._annotations._defaultValue._u.string_value = (DDS_Char *) "";
    UMAA_MM_BaseType_ContingencyObjectiveType_g_tc_members[8]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_MM_BaseType_ContingencyObjectiveType_g_tc_members[8]._annotations._defaultValue._u.double_value = 0.0;
    UMAA_MM_BaseType_ContingencyObjectiveType_g_tc_members[8]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_MM_BaseType_ContingencyObjectiveType_g_tc_members[8]._annotations._minValue._u.double_value = 0ULL;
    UMAA_MM_BaseType_ContingencyObjectiveType_g_tc_members[8]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_MM_BaseType_ContingencyObjectiveType_g_tc_members[8]._annotations._maxValue._u.double_value = 401056000ULL;
    UMAA_MM_BaseType_ContingencyObjectiveType_g_tc_members[9]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_MM_BaseType_ContingencyObjectiveType_g_tc_members[9]._annotations._defaultValue._u.double_value = 0.0;
    UMAA_MM_BaseType_ContingencyObjectiveType_g_tc_members[9]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_MM_BaseType_ContingencyObjectiveType_g_tc_members[9]._annotations._minValue._u.double_value = 0ULL;
    UMAA_MM_BaseType_ContingencyObjectiveType_g_tc_members[9]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_MM_BaseType_ContingencyObjectiveType_g_tc_members[9]._annotations._maxValue._u.double_value = 401056000ULL;
    UMAA_MM_BaseType_ContingencyObjectiveType_g_tc_members[10]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_MM_BaseType_ContingencyObjectiveType_g_tc_members[10]._annotations._defaultValue._u.double_value = 0.0;
    UMAA_MM_BaseType_ContingencyObjectiveType_g_tc_members[10]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_MM_BaseType_ContingencyObjectiveType_g_tc_members[10]._annotations._minValue._u.double_value = 0ULL;
    UMAA_MM_BaseType_ContingencyObjectiveType_g_tc_members[10]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_MM_BaseType_ContingencyObjectiveType_g_tc_members[10]._annotations._maxValue._u.double_value = 401056000ULL;
    UMAA_MM_BaseType_ContingencyObjectiveType_g_tc_members[11]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_MM_BaseType_ContingencyObjectiveType_g_tc_members[11]._annotations._defaultValue._u.double_value = 0.0;
    UMAA_MM_BaseType_ContingencyObjectiveType_g_tc_members[11]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_MM_BaseType_ContingencyObjectiveType_g_tc_members[11]._annotations._minValue._u.double_value = 0ULL;
    UMAA_MM_BaseType_ContingencyObjectiveType_g_tc_members[11]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_MM_BaseType_ContingencyObjectiveType_g_tc_members[11]._annotations._maxValue._u.double_value = 299792458ULL;
    UMAA_MM_BaseType_ContingencyObjectiveType_g_tc_members[12]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_MM_BaseType_ContingencyObjectiveType_g_tc_members[12]._annotations._defaultValue._u.double_value = 0.0;
    UMAA_MM_BaseType_ContingencyObjectiveType_g_tc_members[12]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_MM_BaseType_ContingencyObjectiveType_g_tc_members[12]._annotations._minValue._u.double_value = 0ULL;
    UMAA_MM_BaseType_ContingencyObjectiveType_g_tc_members[12]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
    UMAA_MM_BaseType_ContingencyObjectiveType_g_tc_members[12]._annotations._maxValue._u.double_value = 10505ULL;

    UMAA_MM_BaseType_ContingencyObjectiveType_g_tc._data._sampleAccessInfo =
    UMAA_MM_BaseType_ContingencyObjectiveType_get_sample_access_info();
    UMAA_MM_BaseType_ContingencyObjectiveType_g_tc._data._typePlugin =
    UMAA_MM_BaseType_ContingencyObjectiveType_get_type_plugin_info();    

    return &UMAA_MM_BaseType_ContingencyObjectiveType_g_tc;
}

#define TSeq UMAA_MM_BaseType_ContingencyObjectiveTypeSeq
#define T UMAA_MM_BaseType_ContingencyObjectiveType
#include "dds_cpp/generic/dds_cpp_data_TInterpreterSupport.gen"
#undef T
#undef TSeq

RTIXCdrSampleAccessInfo *UMAA_MM_BaseType_ContingencyObjectiveType_get_sample_seq_access_info()
{
    static RTIXCdrSampleAccessInfo UMAA_MM_BaseType_ContingencyObjectiveType_g_seqSampleAccessInfo = {
        RTI_XCDR_TYPE_BINDING_CPP, \
        {sizeof(UMAA_MM_BaseType_ContingencyObjectiveTypeSeq),0,0,0}, \
        RTI_XCDR_FALSE, \
        DDS_Sequence_get_member_value_pointer, \
        UMAA_MM_BaseType_ContingencyObjectiveTypeSeq_set_member_element_count, \
        NULL, \
        NULL, \
        NULL \
    };

    return &UMAA_MM_BaseType_ContingencyObjectiveType_g_seqSampleAccessInfo;
}

RTIXCdrSampleAccessInfo *UMAA_MM_BaseType_ContingencyObjectiveType_get_sample_access_info()
{
    static RTIBool is_initialized = RTI_FALSE;

    UMAA_MM_BaseType_ContingencyObjectiveType *sample;

    static RTIXCdrMemberAccessInfo UMAA_MM_BaseType_ContingencyObjectiveType_g_memberAccessInfos[13] =
    {RTIXCdrMemberAccessInfo_INITIALIZER};

    static RTIXCdrSampleAccessInfo UMAA_MM_BaseType_ContingencyObjectiveType_g_sampleAccessInfo = 
    RTIXCdrSampleAccessInfo_INITIALIZER;

    if (is_initialized) {
        return (RTIXCdrSampleAccessInfo*) &UMAA_MM_BaseType_ContingencyObjectiveType_g_sampleAccessInfo;
    }

    RTIXCdrHeap_allocateStruct(
        &sample, 
        UMAA_MM_BaseType_ContingencyObjectiveType);
    if (sample == NULL) {
        return NULL;
    }

    UMAA_MM_BaseType_ContingencyObjectiveType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->altitude - (char *)sample);

    UMAA_MM_BaseType_ContingencyObjectiveType_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->altitudeAGL - (char *)sample);

    UMAA_MM_BaseType_ContingencyObjectiveType_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->altitudeASF - (char *)sample);

    UMAA_MM_BaseType_ContingencyObjectiveType_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->behavior - (char *)sample);

    UMAA_MM_BaseType_ContingencyObjectiveType_g_memberAccessInfos[4].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->depth - (char *)sample);

    UMAA_MM_BaseType_ContingencyObjectiveType_g_memberAccessInfos[5].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->DTEDAltitude - (char *)sample);

    UMAA_MM_BaseType_ContingencyObjectiveType_g_memberAccessInfos[6].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->mode - (char *)sample);

    UMAA_MM_BaseType_ContingencyObjectiveType_g_memberAccessInfos[7].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->position - (char *)sample);

    UMAA_MM_BaseType_ContingencyObjectiveType_g_memberAccessInfos[8].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->radius - (char *)sample);

    UMAA_MM_BaseType_ContingencyObjectiveType_g_memberAccessInfos[9].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->safeAltitude - (char *)sample);

    UMAA_MM_BaseType_ContingencyObjectiveType_g_memberAccessInfos[10].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->safeAltitudeOffset - (char *)sample);

    UMAA_MM_BaseType_ContingencyObjectiveType_g_memberAccessInfos[11].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->speed - (char *)sample);

    UMAA_MM_BaseType_ContingencyObjectiveType_g_memberAccessInfos[12].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->vehicleRunTime - (char *)sample);

    UMAA_MM_BaseType_ContingencyObjectiveType_g_sampleAccessInfo.memberAccessInfos = 
    UMAA_MM_BaseType_ContingencyObjectiveType_g_memberAccessInfos;

    {
        size_t candidateTypeSize = sizeof(UMAA_MM_BaseType_ContingencyObjectiveType);

        if (candidateTypeSize > RTIXCdrLong_MAX) {
            UMAA_MM_BaseType_ContingencyObjectiveType_g_sampleAccessInfo.typeSize[0] =
            RTIXCdrLong_MAX;
        } else {
            UMAA_MM_BaseType_ContingencyObjectiveType_g_sampleAccessInfo.typeSize[0] =
            (RTIXCdrUnsignedLong) candidateTypeSize;
        }
    }

    UMAA_MM_BaseType_ContingencyObjectiveType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
    RTI_XCDR_TRUE;

    UMAA_MM_BaseType_ContingencyObjectiveType_g_sampleAccessInfo.getMemberValuePointerFcn = 
    UMAA_MM_BaseType_ContingencyObjectiveType_get_member_value_pointer;

    UMAA_MM_BaseType_ContingencyObjectiveType_g_sampleAccessInfo.languageBinding = 
    RTI_XCDR_TYPE_BINDING_CPP ;

    RTIXCdrHeap_freeStruct(sample);
    is_initialized = RTI_TRUE;
    return (RTIXCdrSampleAccessInfo*) &UMAA_MM_BaseType_ContingencyObjectiveType_g_sampleAccessInfo;
}
RTIXCdrTypePlugin *UMAA_MM_BaseType_ContingencyObjectiveType_get_type_plugin_info()
{
    static RTIXCdrTypePlugin UMAA_MM_BaseType_ContingencyObjectiveType_g_typePlugin = 
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
        (RTIXCdrTypePluginInitializeSampleFunction) 
        UMAA_MM_BaseType_ContingencyObjectiveType_initialize_ex,
        NULL,
        (RTIXCdrTypePluginFinalizeSampleFunction)
        UMAA_MM_BaseType_ContingencyObjectiveType_finalize_w_return,
        NULL,
        NULL
    };

    return &UMAA_MM_BaseType_ContingencyObjectiveType_g_typePlugin;
}
#endif

RTIBool UMAA_MM_BaseType_ContingencyObjectiveType_initialize(
    UMAA_MM_BaseType_ContingencyObjectiveType* sample)
{
    return UMAA_MM_BaseType_ContingencyObjectiveType_initialize_ex(
        sample, 
        RTI_TRUE, 
        RTI_TRUE);
}
RTIBool UMAA_MM_BaseType_ContingencyObjectiveType_initialize_w_params(
    UMAA_MM_BaseType_ContingencyObjectiveType *sample,
    const struct DDS_TypeAllocationParams_t *allocParams)
{

    if (sample == NULL) {
        return RTI_FALSE;
    }
    if (allocParams == NULL) {
        return RTI_FALSE;
    }

    if (!UMAA_Common_Measurement_Altitude_MSL_initialize_w_params(
        &sample->altitude,
        allocParams)) {
        return RTI_FALSE;
    }
    if (!UMAA_Common_Measurement_Altitude_AGL_initialize_w_params(
        &sample->altitudeAGL,
        allocParams)) {
        return RTI_FALSE;
    }
    sample->altitudeASF = 0.0;

    sample->behavior = UMAA_Common_MaritimeEnumeration_ContingencyBehaviorEnumType_ContingencyBehaviorEnumType_CONTINUE;
    sample->depth = 0.0;

    sample->DTEDAltitude = 0.0;

    if (allocParams->allocate_memory) {
        sample->mode = DDS_String_alloc((1023L));
        if (sample->mode != NULL) {
            RTIOsapiUtility_unusedReturnValue(
                RTICdrType_copyStringEx(
                    &sample->mode,
                    "",
                    (1023L),
                    RTI_FALSE),
                    RTIBool);
        }
        if (sample->mode == NULL) {
            return RTI_FALSE;
        }
    } else {
        if (sample->mode != NULL) {
            RTIOsapiUtility_unusedReturnValue(
                RTICdrType_copyStringEx(
                    &sample->mode,
                    "",
                    (1023L),
                    RTI_FALSE),
                    RTIBool);
            if (sample->mode == NULL) {
                return RTI_FALSE;
            }
        }
    }

    if (!UMAA_Common_Measurement_Position2D_initialize_w_params(
        &sample->position,
        allocParams)) {
        return RTI_FALSE;
    }
    sample->radius = 0.0;

    sample->safeAltitude = 0.0;

    sample->safeAltitudeOffset = 0.0;

    sample->speed = 0.0;

    sample->vehicleRunTime = 0.0;

    return RTI_TRUE;
}
RTIBool UMAA_MM_BaseType_ContingencyObjectiveType_initialize_ex(
    UMAA_MM_BaseType_ContingencyObjectiveType *sample,
    RTIBool allocatePointers, 
    RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return UMAA_MM_BaseType_ContingencyObjectiveType_initialize_w_params(
        sample,
        &allocParams);
}

RTIBool UMAA_MM_BaseType_ContingencyObjectiveType_finalize_w_return(
    UMAA_MM_BaseType_ContingencyObjectiveType* sample)
{
    UMAA_MM_BaseType_ContingencyObjectiveType_finalize_ex(sample, RTI_TRUE);

    return RTI_TRUE;
}

void UMAA_MM_BaseType_ContingencyObjectiveType_finalize(
    UMAA_MM_BaseType_ContingencyObjectiveType* sample)
{  
    UMAA_MM_BaseType_ContingencyObjectiveType_finalize_ex(
        sample, 
        RTI_TRUE);
}

void UMAA_MM_BaseType_ContingencyObjectiveType_finalize_ex(
    UMAA_MM_BaseType_ContingencyObjectiveType *sample,
    RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    UMAA_MM_BaseType_ContingencyObjectiveType_finalize_w_params(
        sample,
        &deallocParams);
}

void UMAA_MM_BaseType_ContingencyObjectiveType_finalize_w_params(
    UMAA_MM_BaseType_ContingencyObjectiveType *sample,
    const struct DDS_TypeDeallocationParams_t *deallocParams)
{
    if (sample==NULL) {
        return;
    }

    if (deallocParams == NULL) {
        return;
    }

    UMAA_Common_Measurement_Altitude_MSL_finalize_w_params(
        &sample->altitude,
        deallocParams);

    UMAA_Common_Measurement_Altitude_AGL_finalize_w_params(
        &sample->altitudeAGL,
        deallocParams);

    UMAA_Common_MaritimeEnumeration_ContingencyBehaviorEnumType_ContingencyBehaviorEnumType_finalize_w_params(
        &sample->behavior,
        deallocParams);

    if (sample->mode != NULL) {
        DDS_String_free(sample->mode);
        sample->mode=NULL;

    }
    UMAA_Common_Measurement_Position2D_finalize_w_params(
        &sample->position,
        deallocParams);

}

void UMAA_MM_BaseType_ContingencyObjectiveType_finalize_optional_members(
    UMAA_MM_BaseType_ContingencyObjectiveType* sample, RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParamsTmp =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;
    struct DDS_TypeDeallocationParams_t * deallocParams =
    &deallocParamsTmp;

    if (sample==NULL) {
        return;
    } 
    if (deallocParams) {} /* To avoid warnings */

    deallocParamsTmp.delete_pointers = (DDS_Boolean)deletePointers;
    deallocParamsTmp.delete_optional_members = DDS_BOOLEAN_TRUE;

}

RTIBool UMAA_MM_BaseType_ContingencyObjectiveType_copy(
    UMAA_MM_BaseType_ContingencyObjectiveType* dst,
    const UMAA_MM_BaseType_ContingencyObjectiveType* src)
{
    try {

        if (dst == NULL || src == NULL) {
            return RTI_FALSE;
        }

        if (!UMAA_Common_Measurement_Altitude_MSL_copy(
            &dst->altitude,
            (const UMAA_Common_Measurement_Altitude_MSL*)&src->altitude)) {
            return RTI_FALSE;
        } 
        if (!UMAA_Common_Measurement_Altitude_AGL_copy(
            &dst->altitudeAGL,
            (const UMAA_Common_Measurement_Altitude_AGL*)&src->altitudeAGL)) {
            return RTI_FALSE;
        } 
        if (!RTICdrType_copyDouble (
            &dst->altitudeASF, 
            &src->altitudeASF)) { 
            return RTI_FALSE;
        }
        if (!UMAA_Common_MaritimeEnumeration_ContingencyBehaviorEnumType_ContingencyBehaviorEnumType_copy(
            &dst->behavior,
            (const UMAA_Common_MaritimeEnumeration_ContingencyBehaviorEnumType_ContingencyBehaviorEnumType*)&src->behavior)) {
            return RTI_FALSE;
        } 
        if (!RTICdrType_copyDouble (
            &dst->depth, 
            &src->depth)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyDouble (
            &dst->DTEDAltitude, 
            &src->DTEDAltitude)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyStringEx (
            &dst->mode
            ,
            src->mode, 
            (1023L) + 1,
            RTI_FALSE)){
            return RTI_FALSE;
        }
        if (!UMAA_Common_Measurement_Position2D_copy(
            &dst->position,
            (const UMAA_Common_Measurement_Position2D*)&src->position)) {
            return RTI_FALSE;
        } 
        if (!RTICdrType_copyDouble (
            &dst->radius, 
            &src->radius)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyDouble (
            &dst->safeAltitude, 
            &src->safeAltitude)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyDouble (
            &dst->safeAltitudeOffset, 
            &src->safeAltitudeOffset)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyDouble (
            &dst->speed, 
            &src->speed)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyDouble (
            &dst->vehicleRunTime, 
            &src->vehicleRunTime)) { 
            return RTI_FALSE;
        }

        return RTI_TRUE;
    } catch (const std::bad_alloc&) {
        return RTI_FALSE;
    }
}

/**
* <<IMPLEMENTATION>>
*
* Defines:  TSeq, T
*
* Configure and implement 'UMAA_MM_BaseType_ContingencyObjectiveType' sequence class.
*/
#define T UMAA_MM_BaseType_ContingencyObjectiveType
#define TSeq UMAA_MM_BaseType_ContingencyObjectiveTypeSeq

#define T_initialize_w_params UMAA_MM_BaseType_ContingencyObjectiveType_initialize_w_params

#define T_finalize_w_params   UMAA_MM_BaseType_ContingencyObjectiveType_finalize_w_params
#define T_copy       UMAA_MM_BaseType_ContingencyObjectiveType_copy

#ifndef NDDS_STANDALONE_TYPE
#include "dds_c/generic/dds_c_sequence_TSeq.gen"
#include "dds_cpp/generic/dds_cpp_sequence_TSeq.gen"
#else
#include "dds_c_sequence_TSeq.gen"
#include "dds_cpp_sequence_TSeq.gen"
#endif

#undef T_copy
#undef T_finalize_w_params

#undef T_initialize_w_params

#undef TSeq
#undef T

#ifndef NDDS_STANDALONE_TYPE
namespace rti { 
    namespace xcdr {
        const RTIXCdrTypeCode * type_code< UMAA_MM_BaseType_ContingencyObjectiveType>::get() 
        {
            return (const RTIXCdrTypeCode *) UMAA_MM_BaseType_ContingencyObjectiveType_get_typecode();
        }

    } 
}
#endif
