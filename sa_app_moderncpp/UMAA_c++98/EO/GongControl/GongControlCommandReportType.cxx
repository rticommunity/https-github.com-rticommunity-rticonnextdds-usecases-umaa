

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from GongControlCommandReportType.idl 
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

#include "GongControlCommandReportType.h"

#ifndef NDDS_STANDALONE_TYPE
#include "GongControlCommandReportTypePlugin.h"
#endif

#include <new>

/* ========================================================================= */
const char *UMAA_EO_GongControl_GongControlCommandReportTypeTYPENAME = "UMAA::EO::GongControl::GongControlCommandReportType";

#ifndef NDDS_STANDALONE_TYPE
DDS_TypeCode * UMAA_EO_GongControl_GongControlCommandReportType_get_typecode(void)
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode_Member UMAA_EO_GongControl_GongControlCommandReportType_g_tc_members[4]=
    {

        {
            (char *)"blastProperties",/* Member name */
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
            RTI_CDR_NONKEY_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER
        }, 
        {
            (char *)"status",/* Member name */
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
            (char *)"source",/* Member name */
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
            (char *)"timeStamp",/* Member name */
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

    static DDS_TypeCode UMAA_EO_GongControl_GongControlCommandReportType_g_tc =
    {{
            DDS_TK_STRUCT, /* Kind */
            DDS_BOOLEAN_FALSE, /* Ignored */
            -1, /*Ignored*/
            (char *)"UMAA::EO::GongControl::GongControlCommandReportType", /* Name */
            NULL, /* Ignored */      
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            4, /* Number of members */
            UMAA_EO_GongControl_GongControlCommandReportType_g_tc_members, /* Members */
            DDS_VM_NONE, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER,
            DDS_BOOLEAN_TRUE, /* _isCopyable */
            NULL, /* _sampleAccessInfo: assigned later */
            NULL /* _typePlugin: assigned later */
        }}; /* Type code for UMAA_EO_GongControl_GongControlCommandReportType*/

    if (is_initialized) {
        return &UMAA_EO_GongControl_GongControlCommandReportType_g_tc;
    }

    is_initialized = RTI_TRUE;

    UMAA_EO_GongControl_GongControlCommandReportType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

    UMAA_EO_GongControl_GongControlCommandReportType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_Propulsion_BlastPropertiesType_get_typecode();
    UMAA_EO_GongControl_GongControlCommandReportType_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_Enumeration_OnOffStatusEnumType_OnOffStatusEnumType_get_typecode();
    UMAA_EO_GongControl_GongControlCommandReportType_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_Measurement_NumericGUID_get_typecode();
    UMAA_EO_GongControl_GongControlCommandReportType_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)UMAA_Common_Measurement_DateTime_get_typecode();

    /* Initialize the values for member annotations. */
    UMAA_EO_GongControl_GongControlCommandReportType_g_tc_members[1]._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
    UMAA_EO_GongControl_GongControlCommandReportType_g_tc_members[1]._annotations._defaultValue._u.enumerated_value = 0;

    UMAA_EO_GongControl_GongControlCommandReportType_g_tc._data._sampleAccessInfo =
    UMAA_EO_GongControl_GongControlCommandReportType_get_sample_access_info();
    UMAA_EO_GongControl_GongControlCommandReportType_g_tc._data._typePlugin =
    UMAA_EO_GongControl_GongControlCommandReportType_get_type_plugin_info();    

    return &UMAA_EO_GongControl_GongControlCommandReportType_g_tc;
}

#define TSeq UMAA_EO_GongControl_GongControlCommandReportTypeSeq
#define T UMAA_EO_GongControl_GongControlCommandReportType
#include "dds_cpp/generic/dds_cpp_data_TInterpreterSupport.gen"
#undef T
#undef TSeq

RTIXCdrSampleAccessInfo *UMAA_EO_GongControl_GongControlCommandReportType_get_sample_seq_access_info()
{
    static RTIXCdrSampleAccessInfo UMAA_EO_GongControl_GongControlCommandReportType_g_seqSampleAccessInfo = {
        RTI_XCDR_TYPE_BINDING_CPP, \
        {sizeof(UMAA_EO_GongControl_GongControlCommandReportTypeSeq),0,0,0}, \
        RTI_XCDR_FALSE, \
        DDS_Sequence_get_member_value_pointer, \
        UMAA_EO_GongControl_GongControlCommandReportTypeSeq_set_member_element_count, \
        NULL, \
        NULL, \
        NULL \
    };

    return &UMAA_EO_GongControl_GongControlCommandReportType_g_seqSampleAccessInfo;
}

RTIXCdrSampleAccessInfo *UMAA_EO_GongControl_GongControlCommandReportType_get_sample_access_info()
{
    static RTIBool is_initialized = RTI_FALSE;

    UMAA_EO_GongControl_GongControlCommandReportType *sample;

    static RTIXCdrMemberAccessInfo UMAA_EO_GongControl_GongControlCommandReportType_g_memberAccessInfos[4] =
    {RTIXCdrMemberAccessInfo_INITIALIZER};

    static RTIXCdrSampleAccessInfo UMAA_EO_GongControl_GongControlCommandReportType_g_sampleAccessInfo = 
    RTIXCdrSampleAccessInfo_INITIALIZER;

    if (is_initialized) {
        return (RTIXCdrSampleAccessInfo*) &UMAA_EO_GongControl_GongControlCommandReportType_g_sampleAccessInfo;
    }

    RTIXCdrHeap_allocateStruct(
        &sample, 
        UMAA_EO_GongControl_GongControlCommandReportType);
    if (sample == NULL) {
        return NULL;
    }

    UMAA_EO_GongControl_GongControlCommandReportType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->blastProperties - (char *)sample);

    UMAA_EO_GongControl_GongControlCommandReportType_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->status - (char *)sample);

    UMAA_EO_GongControl_GongControlCommandReportType_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->source - (char *)sample);

    UMAA_EO_GongControl_GongControlCommandReportType_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->timeStamp - (char *)sample);

    UMAA_EO_GongControl_GongControlCommandReportType_g_sampleAccessInfo.memberAccessInfos = 
    UMAA_EO_GongControl_GongControlCommandReportType_g_memberAccessInfos;

    {
        size_t candidateTypeSize = sizeof(UMAA_EO_GongControl_GongControlCommandReportType);

        if (candidateTypeSize > RTIXCdrLong_MAX) {
            UMAA_EO_GongControl_GongControlCommandReportType_g_sampleAccessInfo.typeSize[0] =
            RTIXCdrLong_MAX;
        } else {
            UMAA_EO_GongControl_GongControlCommandReportType_g_sampleAccessInfo.typeSize[0] =
            (RTIXCdrUnsignedLong) candidateTypeSize;
        }
    }

    UMAA_EO_GongControl_GongControlCommandReportType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
    RTI_XCDR_TRUE;

    UMAA_EO_GongControl_GongControlCommandReportType_g_sampleAccessInfo.getMemberValuePointerFcn = 
    UMAA_EO_GongControl_GongControlCommandReportType_get_member_value_pointer;

    UMAA_EO_GongControl_GongControlCommandReportType_g_sampleAccessInfo.languageBinding = 
    RTI_XCDR_TYPE_BINDING_CPP ;

    RTIXCdrHeap_freeStruct(sample);
    is_initialized = RTI_TRUE;
    return (RTIXCdrSampleAccessInfo*) &UMAA_EO_GongControl_GongControlCommandReportType_g_sampleAccessInfo;
}
RTIXCdrTypePlugin *UMAA_EO_GongControl_GongControlCommandReportType_get_type_plugin_info()
{
    static RTIXCdrTypePlugin UMAA_EO_GongControl_GongControlCommandReportType_g_typePlugin = 
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
        UMAA_EO_GongControl_GongControlCommandReportType_initialize_ex,
        NULL,
        (RTIXCdrTypePluginFinalizeSampleFunction)
        UMAA_EO_GongControl_GongControlCommandReportType_finalize_w_return,
        NULL,
        NULL
    };

    return &UMAA_EO_GongControl_GongControlCommandReportType_g_typePlugin;
}
#endif

RTIBool UMAA_EO_GongControl_GongControlCommandReportType_initialize(
    UMAA_EO_GongControl_GongControlCommandReportType* sample)
{
    return UMAA_EO_GongControl_GongControlCommandReportType_initialize_ex(
        sample, 
        RTI_TRUE, 
        RTI_TRUE);
}
RTIBool UMAA_EO_GongControl_GongControlCommandReportType_initialize_w_params(
    UMAA_EO_GongControl_GongControlCommandReportType *sample,
    const struct DDS_TypeAllocationParams_t *allocParams)
{

    if (sample == NULL) {
        return RTI_FALSE;
    }
    if (allocParams == NULL) {
        return RTI_FALSE;
    }

    if (!allocParams->allocate_optional_members) {
        sample->blastProperties=NULL;
    } else {   
        if (allocParams->allocate_memory) {
            sample->blastProperties = new (std::nothrow)   UMAA_Common_Propulsion_BlastPropertiesType ();
            if (sample->blastProperties==NULL) {
                return RTI_FALSE;
            }
            if (!UMAA_Common_Propulsion_BlastPropertiesType_initialize_w_params(
                sample->blastProperties,
                allocParams)) {
                return RTI_FALSE;
            }
        } else {
            if (sample->blastProperties!=NULL) {
                if (!UMAA_Common_Propulsion_BlastPropertiesType_initialize_w_params(
                    sample->blastProperties,
                    allocParams)) {
                    return RTI_FALSE;
                }
            }   
        }
    }
    sample->status = UMAA_Common_Enumeration_OnOffStatusEnumType_OnOffStatusEnumType_OFF;
    if (!UMAA_Common_Measurement_NumericGUID_initialize_w_params(
        &sample->source,
        allocParams)) {
        return RTI_FALSE;
    }
    if (!UMAA_Common_Measurement_DateTime_initialize_w_params(
        &sample->timeStamp,
        allocParams)) {
        return RTI_FALSE;
    }
    return RTI_TRUE;
}
RTIBool UMAA_EO_GongControl_GongControlCommandReportType_initialize_ex(
    UMAA_EO_GongControl_GongControlCommandReportType *sample,
    RTIBool allocatePointers, 
    RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return UMAA_EO_GongControl_GongControlCommandReportType_initialize_w_params(
        sample,
        &allocParams);
}

RTIBool UMAA_EO_GongControl_GongControlCommandReportType_finalize_w_return(
    UMAA_EO_GongControl_GongControlCommandReportType* sample)
{
    UMAA_EO_GongControl_GongControlCommandReportType_finalize_ex(sample, RTI_TRUE);

    return RTI_TRUE;
}

void UMAA_EO_GongControl_GongControlCommandReportType_finalize(
    UMAA_EO_GongControl_GongControlCommandReportType* sample)
{  
    UMAA_EO_GongControl_GongControlCommandReportType_finalize_ex(
        sample, 
        RTI_TRUE);
}

void UMAA_EO_GongControl_GongControlCommandReportType_finalize_ex(
    UMAA_EO_GongControl_GongControlCommandReportType *sample,
    RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    UMAA_EO_GongControl_GongControlCommandReportType_finalize_w_params(
        sample,
        &deallocParams);
}

void UMAA_EO_GongControl_GongControlCommandReportType_finalize_w_params(
    UMAA_EO_GongControl_GongControlCommandReportType *sample,
    const struct DDS_TypeDeallocationParams_t *deallocParams)
{
    if (sample==NULL) {
        return;
    }

    if (deallocParams == NULL) {
        return;
    }

    if (deallocParams->delete_optional_members) {
        if (sample->blastProperties != NULL) {
            UMAA_Common_Propulsion_BlastPropertiesType_finalize_w_params(
                sample->blastProperties,
                deallocParams);

            delete  sample->blastProperties;
            sample->blastProperties=NULL;
        }
    }
    UMAA_Common_Enumeration_OnOffStatusEnumType_OnOffStatusEnumType_finalize_w_params(
        &sample->status,
        deallocParams);

    UMAA_Common_Measurement_NumericGUID_finalize_w_params(
        &sample->source,
        deallocParams);

    UMAA_Common_Measurement_DateTime_finalize_w_params(
        &sample->timeStamp,
        deallocParams);

}

void UMAA_EO_GongControl_GongControlCommandReportType_finalize_optional_members(
    UMAA_EO_GongControl_GongControlCommandReportType* sample, RTIBool deletePointers)
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

    if (sample->blastProperties != NULL) {
        UMAA_Common_Propulsion_BlastPropertiesType_finalize_w_params(
            sample->blastProperties,
            deallocParams);

        delete  sample->blastProperties;
        sample->blastProperties=NULL;
    }
}

RTIBool UMAA_EO_GongControl_GongControlCommandReportType_copy(
    UMAA_EO_GongControl_GongControlCommandReportType* dst,
    const UMAA_EO_GongControl_GongControlCommandReportType* src)
{
    try {

        struct DDS_TypeDeallocationParams_t deallocParamsTmp =
        DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;
        struct DDS_TypeDeallocationParams_t * deallocParams =
        &deallocParamsTmp;

        if (deallocParams) {} /* To avoid warnings */

        deallocParamsTmp.delete_pointers = DDS_BOOLEAN_TRUE;
        deallocParamsTmp.delete_optional_members = DDS_BOOLEAN_TRUE;    

        if (dst == NULL || src == NULL) {
            return RTI_FALSE;
        }

        if (src->blastProperties!=NULL) {
            if (dst->blastProperties==NULL) {

                dst->blastProperties = new (std::nothrow)   UMAA_Common_Propulsion_BlastPropertiesType ();
                if (dst->blastProperties==NULL) {
                    return RTI_FALSE;
                }

                if (!UMAA_Common_Propulsion_BlastPropertiesType_initialize_ex(
                    dst->blastProperties, 
                    RTI_TRUE, 
                    RTI_TRUE)) {
                    return RTI_FALSE;
                }
            }
            if (!UMAA_Common_Propulsion_BlastPropertiesType_copy(
                dst->blastProperties,
                (const UMAA_Common_Propulsion_BlastPropertiesType*)src->blastProperties)) {
                return RTI_FALSE;
            } 
        } else {
            if (dst->blastProperties != NULL) {
                UMAA_Common_Propulsion_BlastPropertiesType_finalize_w_params(dst->blastProperties, deallocParams);
                delete  dst->blastProperties;
                dst->blastProperties=NULL;
            }
        }
        if (!UMAA_Common_Enumeration_OnOffStatusEnumType_OnOffStatusEnumType_copy(
            &dst->status,
            (const UMAA_Common_Enumeration_OnOffStatusEnumType_OnOffStatusEnumType*)&src->status)) {
            return RTI_FALSE;
        } 
        if (!UMAA_Common_Measurement_NumericGUID_copy(
            &dst->source,
            (const UMAA_Common_Measurement_NumericGUID*)&src->source)) {
            return RTI_FALSE;
        } 
        if (!UMAA_Common_Measurement_DateTime_copy(
            &dst->timeStamp,
            (const UMAA_Common_Measurement_DateTime*)&src->timeStamp)) {
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
* Configure and implement 'UMAA_EO_GongControl_GongControlCommandReportType' sequence class.
*/
#define T UMAA_EO_GongControl_GongControlCommandReportType
#define TSeq UMAA_EO_GongControl_GongControlCommandReportTypeSeq

#define T_initialize_w_params UMAA_EO_GongControl_GongControlCommandReportType_initialize_w_params

#define T_finalize_w_params   UMAA_EO_GongControl_GongControlCommandReportType_finalize_w_params
#define T_copy       UMAA_EO_GongControl_GongControlCommandReportType_copy

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
        const RTIXCdrTypeCode * type_code< UMAA_EO_GongControl_GongControlCommandReportType>::get() 
        {
            return (const RTIXCdrTypeCode *) UMAA_EO_GongControl_GongControlCommandReportType_get_typecode();
        }

    } 
}
#endif
