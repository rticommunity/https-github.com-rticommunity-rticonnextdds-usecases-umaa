

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from GlobalDriftCommandAckReportType.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef GlobalDriftCommandAckReportTypePlugin_1155013093_h
#define GlobalDriftCommandAckReportTypePlugin_1155013093_h

#include "GlobalDriftCommandAckReportType.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/Common/Measurement/ElevationTypePlugin.hpp"
#include "UMAA/Common/Measurement/MeasurementsPlugin.hpp"
#include "UMAA/Common/Measurement/Position2DPlugin.hpp"
#include "UMAA/Common/VariableSpeedControl/VariableSpeedControlTypePlugin.hpp"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace UMAA {
    namespace MO {
        namespace GlobalDriftControl {

            /* The type used to store keys for instances of type struct
            * AnotherSimple.
            *
            * By default, this type is struct GlobalDriftCommandAckReportType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct GlobalDriftCommandAckReportType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * GlobalDriftCommandAckReportType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct GlobalDriftCommandAckReportType.
            */
            typedef  class GlobalDriftCommandAckReportType GlobalDriftCommandAckReportTypeKeyHolder;

            #define GlobalDriftCommandAckReportTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define GlobalDriftCommandAckReportTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define GlobalDriftCommandAckReportTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define GlobalDriftCommandAckReportTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define GlobalDriftCommandAckReportTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define GlobalDriftCommandAckReportTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define GlobalDriftCommandAckReportTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern GlobalDriftCommandAckReportType*
            GlobalDriftCommandAckReportTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern GlobalDriftCommandAckReportType*
            GlobalDriftCommandAckReportTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern GlobalDriftCommandAckReportType*
            GlobalDriftCommandAckReportTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            GlobalDriftCommandAckReportTypePluginSupport_copy_data(
                GlobalDriftCommandAckReportType *out,
                const GlobalDriftCommandAckReportType *in);

            NDDSUSERDllExport extern void 
            GlobalDriftCommandAckReportTypePluginSupport_destroy_data_w_params(
                GlobalDriftCommandAckReportType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            GlobalDriftCommandAckReportTypePluginSupport_destroy_data_ex(
                GlobalDriftCommandAckReportType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            GlobalDriftCommandAckReportTypePluginSupport_destroy_data(
                GlobalDriftCommandAckReportType *sample);

            NDDSUSERDllExport extern void 
            GlobalDriftCommandAckReportTypePluginSupport_print_data(
                const GlobalDriftCommandAckReportType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern GlobalDriftCommandAckReportType*
            GlobalDriftCommandAckReportTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern GlobalDriftCommandAckReportType*
            GlobalDriftCommandAckReportTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            GlobalDriftCommandAckReportTypePluginSupport_destroy_key_ex(
                GlobalDriftCommandAckReportTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            GlobalDriftCommandAckReportTypePluginSupport_destroy_key(
                GlobalDriftCommandAckReportTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            GlobalDriftCommandAckReportTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            GlobalDriftCommandAckReportTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            GlobalDriftCommandAckReportTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            GlobalDriftCommandAckReportTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            GlobalDriftCommandAckReportTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                GlobalDriftCommandAckReportType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            GlobalDriftCommandAckReportTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                GlobalDriftCommandAckReportType *out,
                const GlobalDriftCommandAckReportType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            GlobalDriftCommandAckReportTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const GlobalDriftCommandAckReportType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            GlobalDriftCommandAckReportTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                GlobalDriftCommandAckReportType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            GlobalDriftCommandAckReportTypePlugin_deserialize_from_cdr_buffer(
                GlobalDriftCommandAckReportType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            GlobalDriftCommandAckReportTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            GlobalDriftCommandAckReportTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            GlobalDriftCommandAckReportTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            GlobalDriftCommandAckReportTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            GlobalDriftCommandAckReportTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                GlobalDriftCommandAckReportType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            GlobalDriftCommandAckReportTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                GlobalDriftCommandAckReportTypeKeyHolder *key, 
                const GlobalDriftCommandAckReportType *instance);

            NDDSUSERDllExport extern RTIBool 
            GlobalDriftCommandAckReportTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                GlobalDriftCommandAckReportType *instance, 
                const GlobalDriftCommandAckReportTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            GlobalDriftCommandAckReportTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *stream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            GlobalDriftCommandAckReportTypePlugin_new(void);

            NDDSUSERDllExport extern void
            GlobalDriftCommandAckReportTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace GlobalDriftControl  */
    } /* namespace MO  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* GlobalDriftCommandAckReportTypePlugin_1155013093_h */

