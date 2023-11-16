

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from GlobalRegionDriftType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef GlobalRegionDriftTypePlugin_953231090_h
#define GlobalRegionDriftTypePlugin_953231090_h

#include "GlobalRegionDriftType.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/Common/Enumeration/EnumerationSetsPlugin.hpp"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace UMAA {
    namespace MO {
        namespace GlobalDriftState {

            #define GlobalRegionDriftTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define GlobalRegionDriftTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define GlobalRegionDriftTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define GlobalRegionDriftTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define GlobalRegionDriftTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern GlobalRegionDriftType*
            GlobalRegionDriftTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern GlobalRegionDriftType*
            GlobalRegionDriftTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern GlobalRegionDriftType*
            GlobalRegionDriftTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            GlobalRegionDriftTypePluginSupport_copy_data(
                GlobalRegionDriftType *out,
                const GlobalRegionDriftType *in);

            NDDSUSERDllExport extern void 
            GlobalRegionDriftTypePluginSupport_destroy_data_w_params(
                GlobalRegionDriftType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            GlobalRegionDriftTypePluginSupport_destroy_data_ex(
                GlobalRegionDriftType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            GlobalRegionDriftTypePluginSupport_destroy_data(
                GlobalRegionDriftType *sample);

            NDDSUSERDllExport extern void 
            GlobalRegionDriftTypePluginSupport_print_data(
                const GlobalRegionDriftType *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            GlobalRegionDriftTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            GlobalRegionDriftTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            GlobalRegionDriftTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            GlobalRegionDriftTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            GlobalRegionDriftTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                GlobalRegionDriftType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            GlobalRegionDriftTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                GlobalRegionDriftType *out,
                const GlobalRegionDriftType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            GlobalRegionDriftTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const GlobalRegionDriftType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            GlobalRegionDriftTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                GlobalRegionDriftType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            GlobalRegionDriftTypePlugin_deserialize_from_cdr_buffer(
                GlobalRegionDriftType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            GlobalRegionDriftTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            GlobalRegionDriftTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            GlobalRegionDriftTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            GlobalRegionDriftTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            GlobalRegionDriftTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                GlobalRegionDriftType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            GlobalRegionDriftTypePlugin_new(void);

            NDDSUSERDllExport extern void
            GlobalRegionDriftTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace GlobalDriftState  */
    } /* namespace MO  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* GlobalRegionDriftTypePlugin_953231090_h */

