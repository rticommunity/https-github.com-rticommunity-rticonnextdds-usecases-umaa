

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from PropulsiveEffortType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef PropulsiveEffortTypePlugin_1852935252_h
#define PropulsiveEffortTypePlugin_1852935252_h

#include "PropulsiveEffortType.hpp"

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
    namespace Common {
        namespace Propulsion {

            #define PropulsiveEffortTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define PropulsiveEffortTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define PropulsiveEffortTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define PropulsiveEffortTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define PropulsiveEffortTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PropulsiveEffortType*
            PropulsiveEffortTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern PropulsiveEffortType*
            PropulsiveEffortTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern PropulsiveEffortType*
            PropulsiveEffortTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            PropulsiveEffortTypePluginSupport_copy_data(
                PropulsiveEffortType *out,
                const PropulsiveEffortType *in);

            NDDSUSERDllExport extern void 
            PropulsiveEffortTypePluginSupport_destroy_data_w_params(
                PropulsiveEffortType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            PropulsiveEffortTypePluginSupport_destroy_data_ex(
                PropulsiveEffortType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            PropulsiveEffortTypePluginSupport_destroy_data(
                PropulsiveEffortType *sample);

            NDDSUSERDllExport extern void 
            PropulsiveEffortTypePluginSupport_print_data(
                const PropulsiveEffortType *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            PropulsiveEffortTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            PropulsiveEffortTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            PropulsiveEffortTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            PropulsiveEffortTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            PropulsiveEffortTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                PropulsiveEffortType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            PropulsiveEffortTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                PropulsiveEffortType *out,
                const PropulsiveEffortType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            PropulsiveEffortTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const PropulsiveEffortType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            PropulsiveEffortTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                PropulsiveEffortType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            PropulsiveEffortTypePlugin_deserialize_from_cdr_buffer(
                PropulsiveEffortType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            PropulsiveEffortTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            PropulsiveEffortTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            PropulsiveEffortTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            PropulsiveEffortTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            PropulsiveEffortTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                PropulsiveEffortType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            PropulsiveEffortTypePlugin_new(void);

            NDDSUSERDllExport extern void
            PropulsiveEffortTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace Propulsion  */
    } /* namespace Common  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* PropulsiveEffortTypePlugin_1852935252_h */

