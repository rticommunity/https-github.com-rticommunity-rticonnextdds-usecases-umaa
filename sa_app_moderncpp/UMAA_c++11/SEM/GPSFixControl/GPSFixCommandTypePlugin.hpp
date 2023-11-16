

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from GPSFixCommandType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef GPSFixCommandTypePlugin_1852045808_h
#define GPSFixCommandTypePlugin_1852045808_h

#include "GPSFixCommandType.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/Common/Measurement/MeasurementsPlugin.hpp"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace UMAA {
    namespace SEM {
        namespace GPSFixControl {

            /* The type used to store keys for instances of type struct
            * AnotherSimple.
            *
            * By default, this type is struct GPSFixCommandType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct GPSFixCommandType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * GPSFixCommandType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct GPSFixCommandType.
            */
            typedef class GPSFixCommandType GPSFixCommandTypeKeyHolder;

            #define GPSFixCommandTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define GPSFixCommandTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define GPSFixCommandTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define GPSFixCommandTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define GPSFixCommandTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define GPSFixCommandTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define GPSFixCommandTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern GPSFixCommandType*
            GPSFixCommandTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern GPSFixCommandType*
            GPSFixCommandTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern GPSFixCommandType*
            GPSFixCommandTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            GPSFixCommandTypePluginSupport_copy_data(
                GPSFixCommandType *out,
                const GPSFixCommandType *in);

            NDDSUSERDllExport extern void 
            GPSFixCommandTypePluginSupport_destroy_data_w_params(
                GPSFixCommandType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            GPSFixCommandTypePluginSupport_destroy_data_ex(
                GPSFixCommandType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            GPSFixCommandTypePluginSupport_destroy_data(
                GPSFixCommandType *sample);

            NDDSUSERDllExport extern void 
            GPSFixCommandTypePluginSupport_print_data(
                const GPSFixCommandType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern GPSFixCommandType*
            GPSFixCommandTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern GPSFixCommandType*
            GPSFixCommandTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            GPSFixCommandTypePluginSupport_destroy_key_ex(
                GPSFixCommandTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            GPSFixCommandTypePluginSupport_destroy_key(
                GPSFixCommandTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            GPSFixCommandTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            GPSFixCommandTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            GPSFixCommandTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            GPSFixCommandTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            GPSFixCommandTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                GPSFixCommandType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            GPSFixCommandTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                GPSFixCommandType *out,
                const GPSFixCommandType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            GPSFixCommandTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const GPSFixCommandType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            GPSFixCommandTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                GPSFixCommandType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            GPSFixCommandTypePlugin_deserialize_from_cdr_buffer(
                GPSFixCommandType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            GPSFixCommandTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            GPSFixCommandTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            GPSFixCommandTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            GPSFixCommandTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            GPSFixCommandTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                GPSFixCommandType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            GPSFixCommandTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                GPSFixCommandTypeKeyHolder *key, 
                const GPSFixCommandType *instance);

            NDDSUSERDllExport extern RTIBool 
            GPSFixCommandTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                GPSFixCommandType *instance, 
                const GPSFixCommandTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            GPSFixCommandTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *stream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            GPSFixCommandTypePlugin_new(void);

            NDDSUSERDllExport extern void
            GPSFixCommandTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace GPSFixControl  */
    } /* namespace SEM  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* GPSFixCommandTypePlugin_1852045808_h */

