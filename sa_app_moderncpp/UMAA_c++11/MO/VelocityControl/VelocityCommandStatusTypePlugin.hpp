

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from VelocityCommandStatusType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef VelocityCommandStatusTypePlugin_279337037_h
#define VelocityCommandStatusTypePlugin_279337037_h

#include "VelocityCommandStatusType.hpp"

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
    namespace MO {
        namespace VelocityControl {

            /* The type used to store keys for instances of type struct
            * AnotherSimple.
            *
            * By default, this type is struct VelocityCommandStatusType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct VelocityCommandStatusType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * VelocityCommandStatusType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct VelocityCommandStatusType.
            */
            typedef class VelocityCommandStatusType VelocityCommandStatusTypeKeyHolder;

            #define VelocityCommandStatusTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define VelocityCommandStatusTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define VelocityCommandStatusTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define VelocityCommandStatusTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define VelocityCommandStatusTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define VelocityCommandStatusTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define VelocityCommandStatusTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern VelocityCommandStatusType*
            VelocityCommandStatusTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern VelocityCommandStatusType*
            VelocityCommandStatusTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern VelocityCommandStatusType*
            VelocityCommandStatusTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            VelocityCommandStatusTypePluginSupport_copy_data(
                VelocityCommandStatusType *out,
                const VelocityCommandStatusType *in);

            NDDSUSERDllExport extern void 
            VelocityCommandStatusTypePluginSupport_destroy_data_w_params(
                VelocityCommandStatusType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            VelocityCommandStatusTypePluginSupport_destroy_data_ex(
                VelocityCommandStatusType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            VelocityCommandStatusTypePluginSupport_destroy_data(
                VelocityCommandStatusType *sample);

            NDDSUSERDllExport extern void 
            VelocityCommandStatusTypePluginSupport_print_data(
                const VelocityCommandStatusType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern VelocityCommandStatusType*
            VelocityCommandStatusTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern VelocityCommandStatusType*
            VelocityCommandStatusTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            VelocityCommandStatusTypePluginSupport_destroy_key_ex(
                VelocityCommandStatusTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            VelocityCommandStatusTypePluginSupport_destroy_key(
                VelocityCommandStatusTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            VelocityCommandStatusTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            VelocityCommandStatusTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            VelocityCommandStatusTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            VelocityCommandStatusTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            VelocityCommandStatusTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                VelocityCommandStatusType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            VelocityCommandStatusTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                VelocityCommandStatusType *out,
                const VelocityCommandStatusType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            VelocityCommandStatusTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const VelocityCommandStatusType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            VelocityCommandStatusTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                VelocityCommandStatusType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            VelocityCommandStatusTypePlugin_deserialize_from_cdr_buffer(
                VelocityCommandStatusType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            VelocityCommandStatusTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            VelocityCommandStatusTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            VelocityCommandStatusTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            VelocityCommandStatusTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            VelocityCommandStatusTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                VelocityCommandStatusType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            VelocityCommandStatusTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                VelocityCommandStatusTypeKeyHolder *key, 
                const VelocityCommandStatusType *instance);

            NDDSUSERDllExport extern RTIBool 
            VelocityCommandStatusTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                VelocityCommandStatusType *instance, 
                const VelocityCommandStatusTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            VelocityCommandStatusTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *stream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            VelocityCommandStatusTypePlugin_new(void);

            NDDSUSERDllExport extern void
            VelocityCommandStatusTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace VelocityControl  */
    } /* namespace MO  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* VelocityCommandStatusTypePlugin_279337037_h */

