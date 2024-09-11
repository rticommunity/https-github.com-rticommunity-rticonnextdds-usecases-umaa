

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ObjectiveExecutorCommandAckReportType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef ObjectiveExecutorCommandAckReportTypePlugin_1120443717_h
#define ObjectiveExecutorCommandAckReportTypePlugin_1120443717_h

#include "ObjectiveExecutorCommandAckReportType.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/Common/IdentifierTypePlugin.hpp"
#include "UMAA/Common/Measurement/MeasurementsPlugin.hpp"
#include "UMAA/MM/ObjectiveExecutorControl/ObjectiveExecutorCommandTypePlugin.hpp"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace UMAA {
    namespace MM {
        namespace ObjectiveExecutorControl {

            /* The type used to store keys for instances of type struct
            * AnotherSimple.
            *
            * By default, this type is struct ObjectiveExecutorCommandAckReportType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct ObjectiveExecutorCommandAckReportType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * ObjectiveExecutorCommandAckReportType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct ObjectiveExecutorCommandAckReportType.
            */
            typedef class ObjectiveExecutorCommandAckReportType ObjectiveExecutorCommandAckReportTypeKeyHolder;

            #define ObjectiveExecutorCommandAckReportTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define ObjectiveExecutorCommandAckReportTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define ObjectiveExecutorCommandAckReportTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define ObjectiveExecutorCommandAckReportTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define ObjectiveExecutorCommandAckReportTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define ObjectiveExecutorCommandAckReportTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define ObjectiveExecutorCommandAckReportTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern ObjectiveExecutorCommandAckReportType*
            ObjectiveExecutorCommandAckReportTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern ObjectiveExecutorCommandAckReportType*
            ObjectiveExecutorCommandAckReportTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern ObjectiveExecutorCommandAckReportType*
            ObjectiveExecutorCommandAckReportTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            ObjectiveExecutorCommandAckReportTypePluginSupport_copy_data(
                ObjectiveExecutorCommandAckReportType *out,
                const ObjectiveExecutorCommandAckReportType *in);

            NDDSUSERDllExport extern void 
            ObjectiveExecutorCommandAckReportTypePluginSupport_destroy_data_w_params(
                ObjectiveExecutorCommandAckReportType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            ObjectiveExecutorCommandAckReportTypePluginSupport_destroy_data_ex(
                ObjectiveExecutorCommandAckReportType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            ObjectiveExecutorCommandAckReportTypePluginSupport_destroy_data(
                ObjectiveExecutorCommandAckReportType *sample);

            NDDSUSERDllExport extern void 
            ObjectiveExecutorCommandAckReportTypePluginSupport_print_data(
                const ObjectiveExecutorCommandAckReportType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern ObjectiveExecutorCommandAckReportType*
            ObjectiveExecutorCommandAckReportTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern ObjectiveExecutorCommandAckReportType*
            ObjectiveExecutorCommandAckReportTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            ObjectiveExecutorCommandAckReportTypePluginSupport_destroy_key_ex(
                ObjectiveExecutorCommandAckReportTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            ObjectiveExecutorCommandAckReportTypePluginSupport_destroy_key(
                ObjectiveExecutorCommandAckReportTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            ObjectiveExecutorCommandAckReportTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            ObjectiveExecutorCommandAckReportTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            ObjectiveExecutorCommandAckReportTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            ObjectiveExecutorCommandAckReportTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            ObjectiveExecutorCommandAckReportTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                ObjectiveExecutorCommandAckReportType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            ObjectiveExecutorCommandAckReportTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                ObjectiveExecutorCommandAckReportType *out,
                const ObjectiveExecutorCommandAckReportType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            ObjectiveExecutorCommandAckReportTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const ObjectiveExecutorCommandAckReportType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            ObjectiveExecutorCommandAckReportTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                ObjectiveExecutorCommandAckReportType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            ObjectiveExecutorCommandAckReportTypePlugin_deserialize_from_cdr_buffer(
                ObjectiveExecutorCommandAckReportType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            ObjectiveExecutorCommandAckReportTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            ObjectiveExecutorCommandAckReportTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            ObjectiveExecutorCommandAckReportTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            ObjectiveExecutorCommandAckReportTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            ObjectiveExecutorCommandAckReportTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                ObjectiveExecutorCommandAckReportType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            ObjectiveExecutorCommandAckReportTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                ObjectiveExecutorCommandAckReportTypeKeyHolder *key, 
                const ObjectiveExecutorCommandAckReportType *instance);

            NDDSUSERDllExport extern RTIBool 
            ObjectiveExecutorCommandAckReportTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                ObjectiveExecutorCommandAckReportType *instance, 
                const ObjectiveExecutorCommandAckReportTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            ObjectiveExecutorCommandAckReportTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *cdrStream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            ObjectiveExecutorCommandAckReportTypePlugin_new(void);

            NDDSUSERDllExport extern void
            ObjectiveExecutorCommandAckReportTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace ObjectiveExecutorControl  */
    } /* namespace MM  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* ObjectiveExecutorCommandAckReportTypePlugin_1120443717_h */

