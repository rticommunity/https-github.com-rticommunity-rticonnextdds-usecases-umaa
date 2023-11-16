

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from DigitalAudioStreamCommandStatusType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef DigitalAudioStreamCommandStatusTypePlugin_40666953_h
#define DigitalAudioStreamCommandStatusTypePlugin_40666953_h

#include "DigitalAudioStreamCommandStatusType.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/Common/Measurement/MeasurementsPlugin.hpp"
#include "UMAA/Common/MaritimeEnumeration/EnumerationSetsPlugin.hpp"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace UMAA {
    namespace SEM {
        namespace DigitalAudioStreamControl {

            /* The type used to store keys for instances of type struct
            * AnotherSimple.
            *
            * By default, this type is struct DigitalAudioStreamCommandStatusType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct DigitalAudioStreamCommandStatusType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * DigitalAudioStreamCommandStatusType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct DigitalAudioStreamCommandStatusType.
            */
            typedef class DigitalAudioStreamCommandStatusType DigitalAudioStreamCommandStatusTypeKeyHolder;

            #define DigitalAudioStreamCommandStatusTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define DigitalAudioStreamCommandStatusTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define DigitalAudioStreamCommandStatusTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define DigitalAudioStreamCommandStatusTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define DigitalAudioStreamCommandStatusTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define DigitalAudioStreamCommandStatusTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define DigitalAudioStreamCommandStatusTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern DigitalAudioStreamCommandStatusType*
            DigitalAudioStreamCommandStatusTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern DigitalAudioStreamCommandStatusType*
            DigitalAudioStreamCommandStatusTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern DigitalAudioStreamCommandStatusType*
            DigitalAudioStreamCommandStatusTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            DigitalAudioStreamCommandStatusTypePluginSupport_copy_data(
                DigitalAudioStreamCommandStatusType *out,
                const DigitalAudioStreamCommandStatusType *in);

            NDDSUSERDllExport extern void 
            DigitalAudioStreamCommandStatusTypePluginSupport_destroy_data_w_params(
                DigitalAudioStreamCommandStatusType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            DigitalAudioStreamCommandStatusTypePluginSupport_destroy_data_ex(
                DigitalAudioStreamCommandStatusType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            DigitalAudioStreamCommandStatusTypePluginSupport_destroy_data(
                DigitalAudioStreamCommandStatusType *sample);

            NDDSUSERDllExport extern void 
            DigitalAudioStreamCommandStatusTypePluginSupport_print_data(
                const DigitalAudioStreamCommandStatusType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern DigitalAudioStreamCommandStatusType*
            DigitalAudioStreamCommandStatusTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern DigitalAudioStreamCommandStatusType*
            DigitalAudioStreamCommandStatusTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            DigitalAudioStreamCommandStatusTypePluginSupport_destroy_key_ex(
                DigitalAudioStreamCommandStatusTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            DigitalAudioStreamCommandStatusTypePluginSupport_destroy_key(
                DigitalAudioStreamCommandStatusTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            DigitalAudioStreamCommandStatusTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            DigitalAudioStreamCommandStatusTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            DigitalAudioStreamCommandStatusTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            DigitalAudioStreamCommandStatusTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            DigitalAudioStreamCommandStatusTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                DigitalAudioStreamCommandStatusType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            DigitalAudioStreamCommandStatusTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                DigitalAudioStreamCommandStatusType *out,
                const DigitalAudioStreamCommandStatusType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            DigitalAudioStreamCommandStatusTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const DigitalAudioStreamCommandStatusType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            DigitalAudioStreamCommandStatusTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                DigitalAudioStreamCommandStatusType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            DigitalAudioStreamCommandStatusTypePlugin_deserialize_from_cdr_buffer(
                DigitalAudioStreamCommandStatusType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            DigitalAudioStreamCommandStatusTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            DigitalAudioStreamCommandStatusTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            DigitalAudioStreamCommandStatusTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            DigitalAudioStreamCommandStatusTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            DigitalAudioStreamCommandStatusTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                DigitalAudioStreamCommandStatusType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            DigitalAudioStreamCommandStatusTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                DigitalAudioStreamCommandStatusTypeKeyHolder *key, 
                const DigitalAudioStreamCommandStatusType *instance);

            NDDSUSERDllExport extern RTIBool 
            DigitalAudioStreamCommandStatusTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                DigitalAudioStreamCommandStatusType *instance, 
                const DigitalAudioStreamCommandStatusTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            DigitalAudioStreamCommandStatusTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *stream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            DigitalAudioStreamCommandStatusTypePlugin_new(void);

            NDDSUSERDllExport extern void
            DigitalAudioStreamCommandStatusTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace DigitalAudioStreamControl  */
    } /* namespace SEM  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* DigitalAudioStreamCommandStatusTypePlugin_40666953_h */

