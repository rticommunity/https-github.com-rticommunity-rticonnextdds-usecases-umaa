

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from VehicleSpeedMode.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef VehicleSpeedModePlugin_1057212792_h
#define VehicleSpeedModePlugin_1057212792_h

#include "VehicleSpeedMode.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/Common/MaritimeEnumeration/EnumerationSetsPlugin.hpp"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace UMAA {
    namespace Common {
        namespace Speed {

            #define VehicleSpeedModePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define VehicleSpeedModePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define VehicleSpeedModePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define VehicleSpeedModePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define VehicleSpeedModePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern VehicleSpeedMode*
            VehicleSpeedModePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern VehicleSpeedMode*
            VehicleSpeedModePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern VehicleSpeedMode*
            VehicleSpeedModePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            VehicleSpeedModePluginSupport_copy_data(
                VehicleSpeedMode *out,
                const VehicleSpeedMode *in);

            NDDSUSERDllExport extern void 
            VehicleSpeedModePluginSupport_destroy_data_w_params(
                VehicleSpeedMode *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            VehicleSpeedModePluginSupport_destroy_data_ex(
                VehicleSpeedMode *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            VehicleSpeedModePluginSupport_destroy_data(
                VehicleSpeedMode *sample);

            NDDSUSERDllExport extern void 
            VehicleSpeedModePluginSupport_print_data(
                const VehicleSpeedMode *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            VehicleSpeedModePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            VehicleSpeedModePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            VehicleSpeedModePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            VehicleSpeedModePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            VehicleSpeedModePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                VehicleSpeedMode *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            VehicleSpeedModePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                VehicleSpeedMode *out,
                const VehicleSpeedMode *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            VehicleSpeedModePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const VehicleSpeedMode *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            VehicleSpeedModePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                VehicleSpeedMode **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            VehicleSpeedModePlugin_deserialize_from_cdr_buffer(
                VehicleSpeedMode *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            VehicleSpeedModePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            VehicleSpeedModePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            VehicleSpeedModePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            VehicleSpeedModePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            VehicleSpeedModePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                VehicleSpeedMode ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            VehicleSpeedModePlugin_new(void);

            NDDSUSERDllExport extern void
            VehicleSpeedModePlugin_delete(struct PRESTypePlugin *);

        } /* namespace Speed  */
    } /* namespace Common  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* VehicleSpeedModePlugin_1057212792_h */

