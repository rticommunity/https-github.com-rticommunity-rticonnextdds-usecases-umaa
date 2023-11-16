

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from JointOperationalParamsType.idl 
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

#include "JointOperationalParamsType.h"

#ifndef NDDS_STANDALONE_TYPE
#include "JointOperationalParamsTypePlugin.h"
#endif

#include <new>

/* ========================================================================= */
const char *UMAA_SEM_ExtendedPayloadStatus_JointOperationalParamsTypeTYPENAME = "UMAA::SEM::ExtendedPayloadStatus::JointOperationalParamsType";

#ifndef NDDS_STANDALONE_TYPE
DDS_TypeCode * UMAA_SEM_ExtendedPayloadStatus_JointOperationalParamsType_get_typecode(void)
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode_Member UMAA_SEM_ExtendedPayloadStatus_JointOperationalParamsType_g_tc_members[2]=
    {

        {
            (char *)"params",/* Member name */
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
            (char *)"jointID",/* Member name */
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

    static DDS_TypeCode UMAA_SEM_ExtendedPayloadStatus_JointOperationalParamsType_g_tc =
    {{
            DDS_TK_STRUCT, /* Kind */
            DDS_BOOLEAN_FALSE, /* Ignored */
            -1, /*Ignored*/
            (char *)"UMAA::SEM::ExtendedPayloadStatus::JointOperationalParamsType", /* Name */
            NULL, /* Ignored */      
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            2, /* Number of members */
            UMAA_SEM_ExtendedPayloadStatus_JointOperationalParamsType_g_tc_members, /* Members */
            DDS_VM_NONE, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER,
            DDS_BOOLEAN_TRUE, /* _isCopyable */
            NULL, /* _sampleAccessInfo: assigned later */
            NULL /* _typePlugin: assigned later */
        }}; /* Type code for UMAA_SEM_ExtendedPayloadStatus_JointOperationalParamsType*/

    if (is_initialized) {
        return &UMAA_SEM_ExtendedPayloadStatus_JointOperationalParamsType_g_tc;
    }

    is_initialized = RTI_TRUE;

    UMAA_SEM_ExtendedPayloadStatus_JointOperationalParamsType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

    UMAA_SEM_ExtendedPayloadStatus_JointOperationalParamsType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)UMAA_SEM_ExtendedPayloadStatus_OperationalParamsType_get_typecode();
    UMAA_SEM_ExtendedPayloadStatus_JointOperationalParamsType_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_Measurement_NumericGUID_get_typecode();

    /* Initialize the values for member annotations. */

    UMAA_SEM_ExtendedPayloadStatus_JointOperationalParamsType_g_tc._data._sampleAccessInfo =
    UMAA_SEM_ExtendedPayloadStatus_JointOperationalParamsType_get_sample_access_info();
    UMAA_SEM_ExtendedPayloadStatus_JointOperationalParamsType_g_tc._data._typePlugin =
    UMAA_SEM_ExtendedPayloadStatus_JointOperationalParamsType_get_type_plugin_info();    

    return &UMAA_SEM_ExtendedPayloadStatus_JointOperationalParamsType_g_tc;
}

#define TSeq UMAA_SEM_ExtendedPayloadStatus_JointOperationalParamsTypeSeq
#define T UMAA_SEM_ExtendedPayloadStatus_JointOperationalParamsType
#include "dds_cpp/generic/dds_cpp_data_TInterpreterSupport.gen"
#undef T
#undef TSeq

RTIXCdrSampleAccessInfo *UMAA_SEM_ExtendedPayloadStatus_JointOperationalParamsType_get_sample_seq_access_info()
{
    static RTIXCdrSampleAccessInfo UMAA_SEM_ExtendedPayloadStatus_JointOperationalParamsType_g_seqSampleAccessInfo = {
        RTI_XCDR_TYPE_BINDING_CPP, \
        {sizeof(UMAA_SEM_ExtendedPayloadStatus_JointOperationalParamsTypeSeq),0,0,0}, \
        RTI_XCDR_FALSE, \
        DDS_Sequence_get_member_value_pointer, \
        UMAA_SEM_ExtendedPayloadStatus_JointOperationalParamsTypeSeq_set_member_element_count, \
        NULL, \
        NULL, \
        NULL \
    };

    return &UMAA_SEM_ExtendedPayloadStatus_JointOperationalParamsType_g_seqSampleAccessInfo;
}

RTIXCdrSampleAccessInfo *UMAA_SEM_ExtendedPayloadStatus_JointOperationalParamsType_get_sample_access_info()
{
    static RTIBool is_initialized = RTI_FALSE;

    UMAA_SEM_ExtendedPayloadStatus_JointOperationalParamsType *sample;

    static RTIXCdrMemberAccessInfo UMAA_SEM_ExtendedPayloadStatus_JointOperationalParamsType_g_memberAccessInfos[2] =
    {RTIXCdrMemberAccessInfo_INITIALIZER};

    static RTIXCdrSampleAccessInfo UMAA_SEM_ExtendedPayloadStatus_JointOperationalParamsType_g_sampleAccessInfo = 
    RTIXCdrSampleAccessInfo_INITIALIZER;

    if (is_initialized) {
        return (RTIXCdrSampleAccessInfo*) &UMAA_SEM_ExtendedPayloadStatus_JointOperationalParamsType_g_sampleAccessInfo;
    }

    RTIXCdrHeap_allocateStruct(
        &sample, 
        UMAA_SEM_ExtendedPayloadStatus_JointOperationalParamsType);
    if (sample == NULL) {
        return NULL;
    }

    UMAA_SEM_ExtendedPayloadStatus_JointOperationalParamsType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->params - (char *)sample);

    UMAA_SEM_ExtendedPayloadStatus_JointOperationalParamsType_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->jointID - (char *)sample);

    UMAA_SEM_ExtendedPayloadStatus_JointOperationalParamsType_g_sampleAccessInfo.memberAccessInfos = 
    UMAA_SEM_ExtendedPayloadStatus_JointOperationalParamsType_g_memberAccessInfos;

    {
        size_t candidateTypeSize = sizeof(UMAA_SEM_ExtendedPayloadStatus_JointOperationalParamsType);

        if (candidateTypeSize > RTIXCdrLong_MAX) {
            UMAA_SEM_ExtendedPayloadStatus_JointOperationalParamsType_g_sampleAccessInfo.typeSize[0] =
            RTIXCdrLong_MAX;
        } else {
            UMAA_SEM_ExtendedPayloadStatus_JointOperationalParamsType_g_sampleAccessInfo.typeSize[0] =
            (RTIXCdrUnsignedLong) candidateTypeSize;
        }
    }

    UMAA_SEM_ExtendedPayloadStatus_JointOperationalParamsType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
    RTI_XCDR_TRUE;

    UMAA_SEM_ExtendedPayloadStatus_JointOperationalParamsType_g_sampleAccessInfo.getMemberValuePointerFcn = 
    UMAA_SEM_ExtendedPayloadStatus_JointOperationalParamsType_get_member_value_pointer;

    UMAA_SEM_ExtendedPayloadStatus_JointOperationalParamsType_g_sampleAccessInfo.languageBinding = 
    RTI_XCDR_TYPE_BINDING_CPP ;

    RTIXCdrHeap_freeStruct(sample);
    is_initialized = RTI_TRUE;
    return (RTIXCdrSampleAccessInfo*) &UMAA_SEM_ExtendedPayloadStatus_JointOperationalParamsType_g_sampleAccessInfo;
}
RTIXCdrTypePlugin *UMAA_SEM_ExtendedPayloadStatus_JointOperationalParamsType_get_type_plugin_info()
{
    static RTIXCdrTypePlugin UMAA_SEM_ExtendedPayloadStatus_JointOperationalParamsType_g_typePlugin = 
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
        UMAA_SEM_ExtendedPayloadStatus_JointOperationalParamsType_initialize_ex,
        NULL,
        (RTIXCdrTypePluginFinalizeSampleFunction)
        UMAA_SEM_ExtendedPayloadStatus_JointOperationalParamsType_finalize_w_return,
        NULL,
        NULL
    };

    return &UMAA_SEM_ExtendedPayloadStatus_JointOperationalParamsType_g_typePlugin;
}
#endif

RTIBool UMAA_SEM_ExtendedPayloadStatus_JointOperationalParamsType_initialize(
    UMAA_SEM_ExtendedPayloadStatus_JointOperationalParamsType* sample)
{
    return UMAA_SEM_ExtendedPayloadStatus_JointOperationalParamsType_initialize_ex(
        sample, 
        RTI_TRUE, 
        RTI_TRUE);
}
RTIBool UMAA_SEM_ExtendedPayloadStatus_JointOperationalParamsType_initialize_w_params(
    UMAA_SEM_ExtendedPayloadStatus_JointOperationalParamsType *sample,
    const struct DDS_TypeAllocationParams_t *allocParams)
{

    if (sample == NULL) {
        return RTI_FALSE;
    }
    if (allocParams == NULL) {
        return RTI_FALSE;
    }

    if (!UMAA_SEM_ExtendedPayloadStatus_OperationalParamsType_initialize_w_params(
        &sample->params,
        allocParams)) {
        return RTI_FALSE;
    }
    if (!UMAA_Common_Measurement_NumericGUID_initialize_w_params(
        &sample->jointID,
        allocParams)) {
        return RTI_FALSE;
    }
    return RTI_TRUE;
}
RTIBool UMAA_SEM_ExtendedPayloadStatus_JointOperationalParamsType_initialize_ex(
    UMAA_SEM_ExtendedPayloadStatus_JointOperationalParamsType *sample,
    RTIBool allocatePointers, 
    RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return UMAA_SEM_ExtendedPayloadStatus_JointOperationalParamsType_initialize_w_params(
        sample,
        &allocParams);
}

RTIBool UMAA_SEM_ExtendedPayloadStatus_JointOperationalParamsType_finalize_w_return(
    UMAA_SEM_ExtendedPayloadStatus_JointOperationalParamsType* sample)
{
    UMAA_SEM_ExtendedPayloadStatus_JointOperationalParamsType_finalize_ex(sample, RTI_TRUE);

    return RTI_TRUE;
}

void UMAA_SEM_ExtendedPayloadStatus_JointOperationalParamsType_finalize(
    UMAA_SEM_ExtendedPayloadStatus_JointOperationalParamsType* sample)
{  
    UMAA_SEM_ExtendedPayloadStatus_JointOperationalParamsType_finalize_ex(
        sample, 
        RTI_TRUE);
}

void UMAA_SEM_ExtendedPayloadStatus_JointOperationalParamsType_finalize_ex(
    UMAA_SEM_ExtendedPayloadStatus_JointOperationalParamsType *sample,
    RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    UMAA_SEM_ExtendedPayloadStatus_JointOperationalParamsType_finalize_w_params(
        sample,
        &deallocParams);
}

void UMAA_SEM_ExtendedPayloadStatus_JointOperationalParamsType_finalize_w_params(
    UMAA_SEM_ExtendedPayloadStatus_JointOperationalParamsType *sample,
    const struct DDS_TypeDeallocationParams_t *deallocParams)
{
    if (sample==NULL) {
        return;
    }

    if (deallocParams == NULL) {
        return;
    }

    UMAA_SEM_ExtendedPayloadStatus_OperationalParamsType_finalize_w_params(
        &sample->params,
        deallocParams);

    UMAA_Common_Measurement_NumericGUID_finalize_w_params(
        &sample->jointID,
        deallocParams);

}

void UMAA_SEM_ExtendedPayloadStatus_JointOperationalParamsType_finalize_optional_members(
    UMAA_SEM_ExtendedPayloadStatus_JointOperationalParamsType* sample, RTIBool deletePointers)
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

RTIBool UMAA_SEM_ExtendedPayloadStatus_JointOperationalParamsType_copy(
    UMAA_SEM_ExtendedPayloadStatus_JointOperationalParamsType* dst,
    const UMAA_SEM_ExtendedPayloadStatus_JointOperationalParamsType* src)
{
    try {

        if (dst == NULL || src == NULL) {
            return RTI_FALSE;
        }

        if (!UMAA_SEM_ExtendedPayloadStatus_OperationalParamsType_copy(
            &dst->params,
            (const UMAA_SEM_ExtendedPayloadStatus_OperationalParamsType*)&src->params)) {
            return RTI_FALSE;
        } 
        if (!UMAA_Common_Measurement_NumericGUID_copy(
            &dst->jointID,
            (const UMAA_Common_Measurement_NumericGUID*)&src->jointID)) {
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
* Configure and implement 'UMAA_SEM_ExtendedPayloadStatus_JointOperationalParamsType' sequence class.
*/
#define T UMAA_SEM_ExtendedPayloadStatus_JointOperationalParamsType
#define TSeq UMAA_SEM_ExtendedPayloadStatus_JointOperationalParamsTypeSeq

#define T_initialize_w_params UMAA_SEM_ExtendedPayloadStatus_JointOperationalParamsType_initialize_w_params

#define T_finalize_w_params   UMAA_SEM_ExtendedPayloadStatus_JointOperationalParamsType_finalize_w_params
#define T_copy       UMAA_SEM_ExtendedPayloadStatus_JointOperationalParamsType_copy

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
        const RTIXCdrTypeCode * type_code< UMAA_SEM_ExtendedPayloadStatus_JointOperationalParamsType>::get() 
        {
            return (const RTIXCdrTypeCode *) UMAA_SEM_ExtendedPayloadStatus_JointOperationalParamsType_get_typecode();
        }

    } 
}
#endif
