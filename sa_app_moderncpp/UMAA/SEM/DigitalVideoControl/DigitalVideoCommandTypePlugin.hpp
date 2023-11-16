

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from DigitalVideoCommandType.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef DigitalVideoCommandTypePlugin_1968864775_h
#define DigitalVideoCommandTypePlugin_1968864775_h

#include "DigitalVideoCommandType.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/Common/MaritimeEnumeration/EnumerationSetsPlugin.hpp"
#include "UMAA/Common/Measurement/BuiltInTestStatusType_AllPlugin.hpp"
#include "UMAA/Common/Measurement/MeasurementsPlugin.hpp"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace UMAA {
    namespace SEM {
        namespace DigitalVideoControl {

            /* The type used to store keys for instances of type struct
            * AnotherSimple.
            *
            * By default, this type is struct DigitalVideoCommandType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct DigitalVideoCommandType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * DigitalVideoCommandType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct DigitalVideoCommandType.
            */
            typedef  class DigitalVideoCommandType DigitalVideoCommandTypeKeyHolder;

            #define DigitalVideoCommandTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define DigitalVideoCommandTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define DigitalVideoCommandTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define DigitalVideoCommandTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define DigitalVideoCommandTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define DigitalVideoCommandTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define DigitalVideoCommandTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern DigitalVideoCommandType*
            DigitalVideoCommandTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern DigitalVideoCommandType*
            DigitalVideoCommandTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern DigitalVideoCommandType*
            DigitalVideoCommandTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            DigitalVideoCommandTypePluginSupport_copy_data(
                DigitalVideoCommandType *out,
                const DigitalVideoCommandType *in);

            NDDSUSERDllExport extern void 
            DigitalVideoCommandTypePluginSupport_destroy_data_w_params(
                DigitalVideoCommandType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            DigitalVideoCommandTypePluginSupport_destroy_data_ex(
                DigitalVideoCommandType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            DigitalVideoCommandTypePluginSupport_destroy_data(
                DigitalVideoCommandType *sample);

            NDDSUSERDllExport extern void 
            DigitalVideoCommandTypePluginSupport_print_data(
                const DigitalVideoCommandType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern DigitalVideoCommandType*
            DigitalVideoCommandTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern DigitalVideoCommandType*
            DigitalVideoCommandTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            DigitalVideoCommandTypePluginSupport_destroy_key_ex(
                DigitalVideoCommandTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            DigitalVideoCommandTypePluginSupport_destroy_key(
                DigitalVideoCommandTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            DigitalVideoCommandTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            DigitalVideoCommandTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            DigitalVideoCommandTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            DigitalVideoCommandTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            DigitalVideoCommandTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                DigitalVideoCommandType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            DigitalVideoCommandTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                DigitalVideoCommandType *out,
                const DigitalVideoCommandType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            DigitalVideoCommandTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const DigitalVideoCommandType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            DigitalVideoCommandTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                DigitalVideoCommandType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            DigitalVideoCommandTypePlugin_deserialize_from_cdr_buffer(
                DigitalVideoCommandType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            DigitalVideoCommandTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            DigitalVideoCommandTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            DigitalVideoCommandTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            DigitalVideoCommandTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            DigitalVideoCommandTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                DigitalVideoCommandType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            DigitalVideoCommandTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                DigitalVideoCommandTypeKeyHolder *key, 
                const DigitalVideoCommandType *instance);

            NDDSUSERDllExport extern RTIBool 
            DigitalVideoCommandTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                DigitalVideoCommandType *instance, 
                const DigitalVideoCommandTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            DigitalVideoCommandTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *stream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            DigitalVideoCommandTypePlugin_new(void);

            NDDSUSERDllExport extern void
            DigitalVideoCommandTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace DigitalVideoControl  */
    } /* namespace SEM  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* DigitalVideoCommandTypePlugin_1968864775_h */

