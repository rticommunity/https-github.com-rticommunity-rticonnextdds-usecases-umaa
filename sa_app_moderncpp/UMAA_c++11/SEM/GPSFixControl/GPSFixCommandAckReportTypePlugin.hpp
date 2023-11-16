

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from GPSFixCommandAckReportType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef GPSFixCommandAckReportTypePlugin_1172369037_h
#define GPSFixCommandAckReportTypePlugin_1172369037_h

#include "GPSFixCommandAckReportType.hpp"

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
            * By default, this type is struct GPSFixCommandAckReportType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct GPSFixCommandAckReportType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * GPSFixCommandAckReportType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct GPSFixCommandAckReportType.
            */
            typedef class GPSFixCommandAckReportType GPSFixCommandAckReportTypeKeyHolder;

            #define GPSFixCommandAckReportTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define GPSFixCommandAckReportTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define GPSFixCommandAckReportTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define GPSFixCommandAckReportTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define GPSFixCommandAckReportTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define GPSFixCommandAckReportTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define GPSFixCommandAckReportTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern GPSFixCommandAckReportType*
            GPSFixCommandAckReportTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern GPSFixCommandAckReportType*
            GPSFixCommandAckReportTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern GPSFixCommandAckReportType*
            GPSFixCommandAckReportTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            GPSFixCommandAckReportTypePluginSupport_copy_data(
                GPSFixCommandAckReportType *out,
                const GPSFixCommandAckReportType *in);

            NDDSUSERDllExport extern void 
            GPSFixCommandAckReportTypePluginSupport_destroy_data_w_params(
                GPSFixCommandAckReportType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            GPSFixCommandAckReportTypePluginSupport_destroy_data_ex(
                GPSFixCommandAckReportType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            GPSFixCommandAckReportTypePluginSupport_destroy_data(
                GPSFixCommandAckReportType *sample);

            NDDSUSERDllExport extern void 
            GPSFixCommandAckReportTypePluginSupport_print_data(
                const GPSFixCommandAckReportType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern GPSFixCommandAckReportType*
            GPSFixCommandAckReportTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern GPSFixCommandAckReportType*
            GPSFixCommandAckReportTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            GPSFixCommandAckReportTypePluginSupport_destroy_key_ex(
                GPSFixCommandAckReportTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            GPSFixCommandAckReportTypePluginSupport_destroy_key(
                GPSFixCommandAckReportTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            GPSFixCommandAckReportTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            GPSFixCommandAckReportTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            GPSFixCommandAckReportTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            GPSFixCommandAckReportTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            GPSFixCommandAckReportTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                GPSFixCommandAckReportType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            GPSFixCommandAckReportTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                GPSFixCommandAckReportType *out,
                const GPSFixCommandAckReportType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            GPSFixCommandAckReportTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const GPSFixCommandAckReportType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            GPSFixCommandAckReportTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                GPSFixCommandAckReportType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            GPSFixCommandAckReportTypePlugin_deserialize_from_cdr_buffer(
                GPSFixCommandAckReportType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            GPSFixCommandAckReportTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            GPSFixCommandAckReportTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            GPSFixCommandAckReportTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            GPSFixCommandAckReportTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            GPSFixCommandAckReportTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                GPSFixCommandAckReportType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            GPSFixCommandAckReportTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                GPSFixCommandAckReportTypeKeyHolder *key, 
                const GPSFixCommandAckReportType *instance);

            NDDSUSERDllExport extern RTIBool 
            GPSFixCommandAckReportTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                GPSFixCommandAckReportType *instance, 
                const GPSFixCommandAckReportTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            GPSFixCommandAckReportTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *stream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            GPSFixCommandAckReportTypePlugin_new(void);

            NDDSUSERDllExport extern void
            GPSFixCommandAckReportTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace GPSFixControl  */
    } /* namespace SEM  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* GPSFixCommandAckReportTypePlugin_1172369037_h */

