

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from OrientationAcceleration3D.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef OrientationAcceleration3DPlugin_399367744_h
#define OrientationAcceleration3DPlugin_399367744_h

#include "OrientationAcceleration3D.hpp"

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
        namespace Measurement {

            #define OrientationAcceleration3DPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define OrientationAcceleration3DPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define OrientationAcceleration3DPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define OrientationAcceleration3DPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define OrientationAcceleration3DPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern OrientationAcceleration3D*
            OrientationAcceleration3DPluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern OrientationAcceleration3D*
            OrientationAcceleration3DPluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern OrientationAcceleration3D*
            OrientationAcceleration3DPluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            OrientationAcceleration3DPluginSupport_copy_data(
                OrientationAcceleration3D *out,
                const OrientationAcceleration3D *in);

            NDDSUSERDllExport extern void 
            OrientationAcceleration3DPluginSupport_destroy_data_w_params(
                OrientationAcceleration3D *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            OrientationAcceleration3DPluginSupport_destroy_data_ex(
                OrientationAcceleration3D *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            OrientationAcceleration3DPluginSupport_destroy_data(
                OrientationAcceleration3D *sample);

            NDDSUSERDllExport extern void 
            OrientationAcceleration3DPluginSupport_print_data(
                const OrientationAcceleration3D *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            OrientationAcceleration3DPlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            OrientationAcceleration3DPlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            OrientationAcceleration3DPlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            OrientationAcceleration3DPlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            OrientationAcceleration3DPlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                OrientationAcceleration3D *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            OrientationAcceleration3DPlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                OrientationAcceleration3D *out,
                const OrientationAcceleration3D *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            OrientationAcceleration3DPlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const OrientationAcceleration3D *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            OrientationAcceleration3DPlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                OrientationAcceleration3D **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            OrientationAcceleration3DPlugin_deserialize_from_cdr_buffer(
                OrientationAcceleration3D *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            OrientationAcceleration3DPlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            OrientationAcceleration3DPlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            OrientationAcceleration3DPlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            OrientationAcceleration3DPlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            OrientationAcceleration3DPlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                OrientationAcceleration3D ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            OrientationAcceleration3DPlugin_new(void);

            NDDSUSERDllExport extern void
            OrientationAcceleration3DPlugin_delete(struct PRESTypePlugin *);

        } /* namespace Measurement  */
    } /* namespace Common  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* OrientationAcceleration3DPlugin_399367744_h */

