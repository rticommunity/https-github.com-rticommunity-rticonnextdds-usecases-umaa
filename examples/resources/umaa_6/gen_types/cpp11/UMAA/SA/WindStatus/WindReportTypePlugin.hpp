

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from WindReportType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef WindReportTypePlugin_477153708_h
#define WindReportTypePlugin_477153708_h

#include "WindReportType.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/Common/IdentifierTypePlugin.hpp"
#include "UMAA/Common/Measurement/MeasurementsPlugin.hpp"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace UMAA {
    namespace SA {
        namespace WindStatus {

            /* The type used to store keys for instances of type struct
            * AnotherSimple.
            *
            * By default, this type is struct WindReportType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct WindReportType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * WindReportType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct WindReportType.
            */
            typedef class WindReportType WindReportTypeKeyHolder;

            #define WindReportTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define WindReportTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define WindReportTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define WindReportTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define WindReportTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define WindReportTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define WindReportTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern WindReportType*
            WindReportTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern WindReportType*
            WindReportTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern WindReportType*
            WindReportTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            WindReportTypePluginSupport_copy_data(
                WindReportType *out,
                const WindReportType *in);

            NDDSUSERDllExport extern void 
            WindReportTypePluginSupport_destroy_data_w_params(
                WindReportType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            WindReportTypePluginSupport_destroy_data_ex(
                WindReportType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            WindReportTypePluginSupport_destroy_data(
                WindReportType *sample);

            NDDSUSERDllExport extern void 
            WindReportTypePluginSupport_print_data(
                const WindReportType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern WindReportType*
            WindReportTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern WindReportType*
            WindReportTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            WindReportTypePluginSupport_destroy_key_ex(
                WindReportTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            WindReportTypePluginSupport_destroy_key(
                WindReportTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            WindReportTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            WindReportTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            WindReportTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            WindReportTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            WindReportTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                WindReportType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            WindReportTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                WindReportType *out,
                const WindReportType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            WindReportTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const WindReportType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            WindReportTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                WindReportType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            WindReportTypePlugin_deserialize_from_cdr_buffer(
                WindReportType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            WindReportTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            WindReportTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            WindReportTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            WindReportTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            WindReportTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                WindReportType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            WindReportTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                WindReportTypeKeyHolder *key, 
                const WindReportType *instance);

            NDDSUSERDllExport extern RTIBool 
            WindReportTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                WindReportType *instance, 
                const WindReportTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            WindReportTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *cdrStream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            WindReportTypePlugin_new(void);

            NDDSUSERDllExport extern void
            WindReportTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace WindStatus  */
    } /* namespace SA  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* WindReportTypePlugin_477153708_h */

