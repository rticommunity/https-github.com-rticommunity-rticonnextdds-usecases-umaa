

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from AnchorCommandAckReportType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef AnchorCommandAckReportTypePlugin_691712572_h
#define AnchorCommandAckReportTypePlugin_691712572_h

#include "AnchorCommandAckReportType.h"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/Common/MaritimeEnumeration/EnumerationSetsPlugin.h"
#include "UMAA/Common/Measurement/MeasurementsPlugin.h"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

extern "C"{

    /* The type used to store keys for instances of type struct
    * AnotherSimple.
    *
    * By default, this type is struct AnchorCommandAckReportType
    * itself. However, if for some reason this choice is not practical for your
    * system (e.g. if sizeof(struct AnchorCommandAckReportType)
    * is very large), you may redefine this typedef in terms of another type of
    * your choosing. HOWEVER, if you define the KeyHolder type to be something
    * other than struct AnotherSimple, the
    * following restriction applies: the key of struct
    * AnchorCommandAckReportType must consist of a
    * single field of your redefined KeyHolder type and that field must be the
    * first field in struct AnchorCommandAckReportType.
    */
    typedef  class UMAA_EO_AnchorControl_AnchorCommandAckReportType UMAA_EO_AnchorControl_AnchorCommandAckReportTypeKeyHolder;

    #define UMAA_EO_AnchorControl_AnchorCommandAckReportTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define UMAA_EO_AnchorControl_AnchorCommandAckReportTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define UMAA_EO_AnchorControl_AnchorCommandAckReportTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define UMAA_EO_AnchorControl_AnchorCommandAckReportTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
    #define UMAA_EO_AnchorControl_AnchorCommandAckReportTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

    #define UMAA_EO_AnchorControl_AnchorCommandAckReportTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define UMAA_EO_AnchorControl_AnchorCommandAckReportTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern UMAA_EO_AnchorControl_AnchorCommandAckReportType*
    UMAA_EO_AnchorControl_AnchorCommandAckReportTypePluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern UMAA_EO_AnchorControl_AnchorCommandAckReportType*
    UMAA_EO_AnchorControl_AnchorCommandAckReportTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern UMAA_EO_AnchorControl_AnchorCommandAckReportType*
    UMAA_EO_AnchorControl_AnchorCommandAckReportTypePluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    UMAA_EO_AnchorControl_AnchorCommandAckReportTypePluginSupport_copy_data(
        UMAA_EO_AnchorControl_AnchorCommandAckReportType *out,
        const UMAA_EO_AnchorControl_AnchorCommandAckReportType *in);

    NDDSUSERDllExport extern void 
    UMAA_EO_AnchorControl_AnchorCommandAckReportTypePluginSupport_destroy_data_w_params(
        UMAA_EO_AnchorControl_AnchorCommandAckReportType *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    UMAA_EO_AnchorControl_AnchorCommandAckReportTypePluginSupport_destroy_data_ex(
        UMAA_EO_AnchorControl_AnchorCommandAckReportType *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    UMAA_EO_AnchorControl_AnchorCommandAckReportTypePluginSupport_destroy_data(
        UMAA_EO_AnchorControl_AnchorCommandAckReportType *sample);

    NDDSUSERDllExport extern void 
    UMAA_EO_AnchorControl_AnchorCommandAckReportTypePluginSupport_print_data(
        const UMAA_EO_AnchorControl_AnchorCommandAckReportType *sample,
        const char *desc,
        unsigned int indent);

    NDDSUSERDllExport extern UMAA_EO_AnchorControl_AnchorCommandAckReportType*
    UMAA_EO_AnchorControl_AnchorCommandAckReportTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern UMAA_EO_AnchorControl_AnchorCommandAckReportType*
    UMAA_EO_AnchorControl_AnchorCommandAckReportTypePluginSupport_create_key(void);

    NDDSUSERDllExport extern void 
    UMAA_EO_AnchorControl_AnchorCommandAckReportTypePluginSupport_destroy_key_ex(
        UMAA_EO_AnchorControl_AnchorCommandAckReportTypeKeyHolder *key,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    UMAA_EO_AnchorControl_AnchorCommandAckReportTypePluginSupport_destroy_key(
        UMAA_EO_AnchorControl_AnchorCommandAckReportTypeKeyHolder *key);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern PRESTypePluginParticipantData 
    UMAA_EO_AnchorControl_AnchorCommandAckReportTypePlugin_on_participant_attached(
        void *registration_data, 
        const struct PRESTypePluginParticipantInfo *participant_info,
        RTIBool top_level_registration, 
        void *container_plugin_context,
        RTICdrTypeCode *typeCode);

    NDDSUSERDllExport extern void 
    UMAA_EO_AnchorControl_AnchorCommandAckReportTypePlugin_on_participant_detached(
        PRESTypePluginParticipantData participant_data);

    NDDSUSERDllExport extern PRESTypePluginEndpointData 
    UMAA_EO_AnchorControl_AnchorCommandAckReportTypePlugin_on_endpoint_attached(
        PRESTypePluginParticipantData participant_data,
        const struct PRESTypePluginEndpointInfo *endpoint_info,
        RTIBool top_level_registration, 
        void *container_plugin_context);

    NDDSUSERDllExport extern void 
    UMAA_EO_AnchorControl_AnchorCommandAckReportTypePlugin_on_endpoint_detached(
        PRESTypePluginEndpointData endpoint_data);

    NDDSUSERDllExport extern void    
    UMAA_EO_AnchorControl_AnchorCommandAckReportTypePlugin_return_sample(
        PRESTypePluginEndpointData endpoint_data,
        UMAA_EO_AnchorControl_AnchorCommandAckReportType *sample,
        void *handle);    

    NDDSUSERDllExport extern RTIBool 
    UMAA_EO_AnchorControl_AnchorCommandAckReportTypePlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        UMAA_EO_AnchorControl_AnchorCommandAckReportType *out,
        const UMAA_EO_AnchorControl_AnchorCommandAckReportType *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool
    UMAA_EO_AnchorControl_AnchorCommandAckReportTypePlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const UMAA_EO_AnchorControl_AnchorCommandAckReportType *sample); 

    NDDSUSERDllExport extern RTIBool
    UMAA_EO_AnchorControl_AnchorCommandAckReportTypePlugin_serialize_to_cdr_buffer_ex(
        char *buffer,
        unsigned int *length,
        const UMAA_EO_AnchorControl_AnchorCommandAckReportType *sample,
        DDS_DataRepresentationId_t representation);

    NDDSUSERDllExport extern RTIBool
    UMAA_EO_AnchorControl_AnchorCommandAckReportTypePlugin_deserialize_from_cdr_buffer(
        UMAA_EO_AnchorControl_AnchorCommandAckReportType *sample,
        const char * buffer,
        unsigned int length);    
    #if !defined (NDDS_STANDALONE_TYPE)
    NDDSUSERDllExport extern DDS_ReturnCode_t
    UMAA_EO_AnchorControl_AnchorCommandAckReportTypePlugin_data_to_string(
        const UMAA_EO_AnchorControl_AnchorCommandAckReportType *sample,
        char *str,
        DDS_UnsignedLong *str_size, 
        const struct DDS_PrintFormatProperty *property);    
    #endif

    NDDSUSERDllExport extern unsigned int 
    UMAA_EO_AnchorControl_AnchorCommandAckReportTypePlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    UMAA_EO_AnchorControl_AnchorCommandAckReportTypePlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    UMAA_EO_AnchorControl_AnchorCommandAckReportTypePlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    UMAA_EO_AnchorControl_AnchorCommandAckReportTypePlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    UMAA_EO_AnchorControl_AnchorCommandAckReportTypePlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        UMAA_EO_AnchorControl_AnchorCommandAckReportType ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    UMAA_EO_AnchorControl_AnchorCommandAckReportTypePlugin_instance_to_key(
        PRESTypePluginEndpointData endpoint_data,
        UMAA_EO_AnchorControl_AnchorCommandAckReportTypeKeyHolder *key, 
        const UMAA_EO_AnchorControl_AnchorCommandAckReportType *instance);

    NDDSUSERDllExport extern RTIBool 
    UMAA_EO_AnchorControl_AnchorCommandAckReportTypePlugin_key_to_instance(
        PRESTypePluginEndpointData endpoint_data,
        UMAA_EO_AnchorControl_AnchorCommandAckReportType *instance, 
        const UMAA_EO_AnchorControl_AnchorCommandAckReportTypeKeyHolder *key);

    NDDSUSERDllExport extern RTIBool 
    UMAA_EO_AnchorControl_AnchorCommandAckReportTypePlugin_serialized_sample_to_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        struct RTICdrStream *stream, 
        DDS_KeyHash_t *keyhash,
        RTIBool deserialize_encapsulation,
        void *endpoint_plugin_qos); 

    NDDSUSERDllExport extern
    struct RTIXCdrInterpreterPrograms * UMAA_EO_AnchorControl_AnchorCommandAckReportTypePlugin_get_programs(void);

    /* Plugin Functions */
    NDDSUSERDllExport extern struct PRESTypePlugin*
    UMAA_EO_AnchorControl_AnchorCommandAckReportTypePlugin_new(void);

    NDDSUSERDllExport extern void
    UMAA_EO_AnchorControl_AnchorCommandAckReportTypePlugin_delete(struct PRESTypePlugin *);

}

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* AnchorCommandAckReportTypePlugin_691712572_h */

