

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Position2D.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef Position2DPlugin_650720185_h
#define Position2DPlugin_650720185_h

#include "Position2D.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/Common/Measurement/GeodeticLatitudePlugin.hpp"
#include "UMAA/Common/Measurement/GeodeticLongitudePlugin.hpp"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace UMAA {
    namespace Common {
        namespace Measurement {

            #define Position2DPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define Position2DPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define Position2DPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define Position2DPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define Position2DPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern Position2D*
            Position2DPluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern Position2D*
            Position2DPluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern Position2D*
            Position2DPluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            Position2DPluginSupport_copy_data(
                Position2D *out,
                const Position2D *in);

            NDDSUSERDllExport extern void 
            Position2DPluginSupport_destroy_data_w_params(
                Position2D *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            Position2DPluginSupport_destroy_data_ex(
                Position2D *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            Position2DPluginSupport_destroy_data(
                Position2D *sample);

            NDDSUSERDllExport extern void 
            Position2DPluginSupport_print_data(
                const Position2D *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            Position2DPlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            Position2DPlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            Position2DPlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            Position2DPlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            Position2DPlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                Position2D *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            Position2DPlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                Position2D *out,
                const Position2D *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            Position2DPlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const Position2D *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            Position2DPlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                Position2D **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            Position2DPlugin_deserialize_from_cdr_buffer(
                Position2D *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            Position2DPlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            Position2DPlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            Position2DPlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            Position2DPlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            Position2DPlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                Position2D ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            Position2DPlugin_new(void);

            NDDSUSERDllExport extern void
            Position2DPlugin_delete(struct PRESTypePlugin *);

        } /* namespace Measurement  */
    } /* namespace Common  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* Position2DPlugin_650720185_h */

