

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ObjectiveExecutionReportType.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef ObjectiveExecutionReportTypePlugin_814779752_h
#define ObjectiveExecutionReportTypePlugin_814779752_h

#include "ObjectiveExecutionReportType.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/Common/Measurement/MeasurementsPlugin.hpp"
#include "UMAA/MM/ObjectiveExecutionStatus/ObjectiveStatusTypePlugin.hpp"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace UMAA {
    namespace MM {
        namespace ObjectiveExecutionStatus {

            /* The type used to store keys for instances of type struct
            * AnotherSimple.
            *
            * By default, this type is struct ObjectiveExecutionReportType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct ObjectiveExecutionReportType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * ObjectiveExecutionReportType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct ObjectiveExecutionReportType.
            */
            typedef  class ObjectiveExecutionReportType ObjectiveExecutionReportTypeKeyHolder;

            #define ObjectiveExecutionReportTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define ObjectiveExecutionReportTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define ObjectiveExecutionReportTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define ObjectiveExecutionReportTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define ObjectiveExecutionReportTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define ObjectiveExecutionReportTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define ObjectiveExecutionReportTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern ObjectiveExecutionReportType*
            ObjectiveExecutionReportTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern ObjectiveExecutionReportType*
            ObjectiveExecutionReportTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern ObjectiveExecutionReportType*
            ObjectiveExecutionReportTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            ObjectiveExecutionReportTypePluginSupport_copy_data(
                ObjectiveExecutionReportType *out,
                const ObjectiveExecutionReportType *in);

            NDDSUSERDllExport extern void 
            ObjectiveExecutionReportTypePluginSupport_destroy_data_w_params(
                ObjectiveExecutionReportType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            ObjectiveExecutionReportTypePluginSupport_destroy_data_ex(
                ObjectiveExecutionReportType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            ObjectiveExecutionReportTypePluginSupport_destroy_data(
                ObjectiveExecutionReportType *sample);

            NDDSUSERDllExport extern void 
            ObjectiveExecutionReportTypePluginSupport_print_data(
                const ObjectiveExecutionReportType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern ObjectiveExecutionReportType*
            ObjectiveExecutionReportTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern ObjectiveExecutionReportType*
            ObjectiveExecutionReportTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            ObjectiveExecutionReportTypePluginSupport_destroy_key_ex(
                ObjectiveExecutionReportTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            ObjectiveExecutionReportTypePluginSupport_destroy_key(
                ObjectiveExecutionReportTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            ObjectiveExecutionReportTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            ObjectiveExecutionReportTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            ObjectiveExecutionReportTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            ObjectiveExecutionReportTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            ObjectiveExecutionReportTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                ObjectiveExecutionReportType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            ObjectiveExecutionReportTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                ObjectiveExecutionReportType *out,
                const ObjectiveExecutionReportType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            ObjectiveExecutionReportTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const ObjectiveExecutionReportType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            ObjectiveExecutionReportTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                ObjectiveExecutionReportType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            ObjectiveExecutionReportTypePlugin_deserialize_from_cdr_buffer(
                ObjectiveExecutionReportType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            ObjectiveExecutionReportTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            ObjectiveExecutionReportTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            ObjectiveExecutionReportTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            ObjectiveExecutionReportTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            ObjectiveExecutionReportTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                ObjectiveExecutionReportType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            ObjectiveExecutionReportTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                ObjectiveExecutionReportTypeKeyHolder *key, 
                const ObjectiveExecutionReportType *instance);

            NDDSUSERDllExport extern RTIBool 
            ObjectiveExecutionReportTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                ObjectiveExecutionReportType *instance, 
                const ObjectiveExecutionReportTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            ObjectiveExecutionReportTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *stream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            ObjectiveExecutionReportTypePlugin_new(void);

            NDDSUSERDllExport extern void
            ObjectiveExecutionReportTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace ObjectiveExecutionStatus  */
    } /* namespace MM  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* ObjectiveExecutionReportTypePlugin_814779752_h */

