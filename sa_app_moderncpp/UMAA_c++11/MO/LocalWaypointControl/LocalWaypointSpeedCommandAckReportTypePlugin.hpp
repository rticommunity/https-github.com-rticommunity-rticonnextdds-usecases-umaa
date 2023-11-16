

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from LocalWaypointSpeedCommandAckReportType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef LocalWaypointSpeedCommandAckReportTypePlugin_1028179918_h
#define LocalWaypointSpeedCommandAckReportTypePlugin_1028179918_h

#include "LocalWaypointSpeedCommandAckReportType.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/Common/Measurement/MeasurementsPlugin.hpp"
#include "UMAA/Common/VariableSpeedControl/VariableSpeedControlTypePlugin.hpp"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace UMAA {
    namespace MO {
        namespace LocalWaypointControl {

            /* The type used to store keys for instances of type struct
            * AnotherSimple.
            *
            * By default, this type is struct LocalWaypointSpeedCommandAckReportType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct LocalWaypointSpeedCommandAckReportType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * LocalWaypointSpeedCommandAckReportType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct LocalWaypointSpeedCommandAckReportType.
            */
            typedef class LocalWaypointSpeedCommandAckReportType LocalWaypointSpeedCommandAckReportTypeKeyHolder;

            #define LocalWaypointSpeedCommandAckReportTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define LocalWaypointSpeedCommandAckReportTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define LocalWaypointSpeedCommandAckReportTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define LocalWaypointSpeedCommandAckReportTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define LocalWaypointSpeedCommandAckReportTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define LocalWaypointSpeedCommandAckReportTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define LocalWaypointSpeedCommandAckReportTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern LocalWaypointSpeedCommandAckReportType*
            LocalWaypointSpeedCommandAckReportTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern LocalWaypointSpeedCommandAckReportType*
            LocalWaypointSpeedCommandAckReportTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern LocalWaypointSpeedCommandAckReportType*
            LocalWaypointSpeedCommandAckReportTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            LocalWaypointSpeedCommandAckReportTypePluginSupport_copy_data(
                LocalWaypointSpeedCommandAckReportType *out,
                const LocalWaypointSpeedCommandAckReportType *in);

            NDDSUSERDllExport extern void 
            LocalWaypointSpeedCommandAckReportTypePluginSupport_destroy_data_w_params(
                LocalWaypointSpeedCommandAckReportType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            LocalWaypointSpeedCommandAckReportTypePluginSupport_destroy_data_ex(
                LocalWaypointSpeedCommandAckReportType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            LocalWaypointSpeedCommandAckReportTypePluginSupport_destroy_data(
                LocalWaypointSpeedCommandAckReportType *sample);

            NDDSUSERDllExport extern void 
            LocalWaypointSpeedCommandAckReportTypePluginSupport_print_data(
                const LocalWaypointSpeedCommandAckReportType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern LocalWaypointSpeedCommandAckReportType*
            LocalWaypointSpeedCommandAckReportTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern LocalWaypointSpeedCommandAckReportType*
            LocalWaypointSpeedCommandAckReportTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            LocalWaypointSpeedCommandAckReportTypePluginSupport_destroy_key_ex(
                LocalWaypointSpeedCommandAckReportTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            LocalWaypointSpeedCommandAckReportTypePluginSupport_destroy_key(
                LocalWaypointSpeedCommandAckReportTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            LocalWaypointSpeedCommandAckReportTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            LocalWaypointSpeedCommandAckReportTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            LocalWaypointSpeedCommandAckReportTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            LocalWaypointSpeedCommandAckReportTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            LocalWaypointSpeedCommandAckReportTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                LocalWaypointSpeedCommandAckReportType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            LocalWaypointSpeedCommandAckReportTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                LocalWaypointSpeedCommandAckReportType *out,
                const LocalWaypointSpeedCommandAckReportType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            LocalWaypointSpeedCommandAckReportTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const LocalWaypointSpeedCommandAckReportType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            LocalWaypointSpeedCommandAckReportTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                LocalWaypointSpeedCommandAckReportType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            LocalWaypointSpeedCommandAckReportTypePlugin_deserialize_from_cdr_buffer(
                LocalWaypointSpeedCommandAckReportType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            LocalWaypointSpeedCommandAckReportTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            LocalWaypointSpeedCommandAckReportTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            LocalWaypointSpeedCommandAckReportTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            LocalWaypointSpeedCommandAckReportTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            LocalWaypointSpeedCommandAckReportTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                LocalWaypointSpeedCommandAckReportType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            LocalWaypointSpeedCommandAckReportTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                LocalWaypointSpeedCommandAckReportTypeKeyHolder *key, 
                const LocalWaypointSpeedCommandAckReportType *instance);

            NDDSUSERDllExport extern RTIBool 
            LocalWaypointSpeedCommandAckReportTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                LocalWaypointSpeedCommandAckReportType *instance, 
                const LocalWaypointSpeedCommandAckReportTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            LocalWaypointSpeedCommandAckReportTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *stream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            LocalWaypointSpeedCommandAckReportTypePlugin_new(void);

            NDDSUSERDllExport extern void
            LocalWaypointSpeedCommandAckReportTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace LocalWaypointControl  */
    } /* namespace MO  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* LocalWaypointSpeedCommandAckReportTypePlugin_1028179918_h */

