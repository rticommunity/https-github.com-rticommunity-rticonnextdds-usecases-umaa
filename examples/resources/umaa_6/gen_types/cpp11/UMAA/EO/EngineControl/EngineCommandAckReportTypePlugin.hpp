

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from EngineCommandAckReportType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef EngineCommandAckReportTypePlugin_1882543152_h
#define EngineCommandAckReportTypePlugin_1882543152_h

#include "EngineCommandAckReportType.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/Common/IdentifierTypePlugin.hpp"
#include "UMAA/Common/Measurement/MeasurementsPlugin.hpp"
#include "UMAA/EO/EngineControl/EngineCommandTypePlugin.hpp"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace UMAA {
    namespace EO {
        namespace EngineControl {

            /* The type used to store keys for instances of type struct
            * AnotherSimple.
            *
            * By default, this type is struct EngineCommandAckReportType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct EngineCommandAckReportType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * EngineCommandAckReportType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct EngineCommandAckReportType.
            */
            typedef class EngineCommandAckReportType EngineCommandAckReportTypeKeyHolder;

            #define EngineCommandAckReportTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define EngineCommandAckReportTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define EngineCommandAckReportTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define EngineCommandAckReportTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define EngineCommandAckReportTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define EngineCommandAckReportTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define EngineCommandAckReportTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern EngineCommandAckReportType*
            EngineCommandAckReportTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern EngineCommandAckReportType*
            EngineCommandAckReportTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern EngineCommandAckReportType*
            EngineCommandAckReportTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            EngineCommandAckReportTypePluginSupport_copy_data(
                EngineCommandAckReportType *out,
                const EngineCommandAckReportType *in);

            NDDSUSERDllExport extern void 
            EngineCommandAckReportTypePluginSupport_destroy_data_w_params(
                EngineCommandAckReportType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            EngineCommandAckReportTypePluginSupport_destroy_data_ex(
                EngineCommandAckReportType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            EngineCommandAckReportTypePluginSupport_destroy_data(
                EngineCommandAckReportType *sample);

            NDDSUSERDllExport extern void 
            EngineCommandAckReportTypePluginSupport_print_data(
                const EngineCommandAckReportType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern EngineCommandAckReportType*
            EngineCommandAckReportTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern EngineCommandAckReportType*
            EngineCommandAckReportTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            EngineCommandAckReportTypePluginSupport_destroy_key_ex(
                EngineCommandAckReportTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            EngineCommandAckReportTypePluginSupport_destroy_key(
                EngineCommandAckReportTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            EngineCommandAckReportTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            EngineCommandAckReportTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            EngineCommandAckReportTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            EngineCommandAckReportTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            EngineCommandAckReportTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                EngineCommandAckReportType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            EngineCommandAckReportTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                EngineCommandAckReportType *out,
                const EngineCommandAckReportType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            EngineCommandAckReportTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const EngineCommandAckReportType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            EngineCommandAckReportTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                EngineCommandAckReportType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            EngineCommandAckReportTypePlugin_deserialize_from_cdr_buffer(
                EngineCommandAckReportType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            EngineCommandAckReportTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            EngineCommandAckReportTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            EngineCommandAckReportTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            EngineCommandAckReportTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            EngineCommandAckReportTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                EngineCommandAckReportType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            EngineCommandAckReportTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                EngineCommandAckReportTypeKeyHolder *key, 
                const EngineCommandAckReportType *instance);

            NDDSUSERDllExport extern RTIBool 
            EngineCommandAckReportTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                EngineCommandAckReportType *instance, 
                const EngineCommandAckReportTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            EngineCommandAckReportTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *cdrStream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            EngineCommandAckReportTypePlugin_new(void);

            NDDSUSERDllExport extern void
            EngineCommandAckReportTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace EngineControl  */
    } /* namespace EO  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* EngineCommandAckReportTypePlugin_1882543152_h */

