

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from JointOperationalParamsReportType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef JointOperationalParamsReportTypePlugin_1879797462_h
#define JointOperationalParamsReportTypePlugin_1879797462_h

#include "JointOperationalParamsReportType.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/Common/Measurement/MeasurementsPlugin.hpp"
#include "UMAA/SEM/ExtendedPayloadStatus/JointOperationalParamsTypePlugin.hpp"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace UMAA {
    namespace SEM {
        namespace ExtendedPayloadStatus {

            /* The type used to store keys for instances of type struct
            * AnotherSimple.
            *
            * By default, this type is struct JointOperationalParamsReportType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct JointOperationalParamsReportType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * JointOperationalParamsReportType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct JointOperationalParamsReportType.
            */
            typedef class JointOperationalParamsReportType JointOperationalParamsReportTypeKeyHolder;

            #define JointOperationalParamsReportTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define JointOperationalParamsReportTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define JointOperationalParamsReportTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define JointOperationalParamsReportTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define JointOperationalParamsReportTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define JointOperationalParamsReportTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define JointOperationalParamsReportTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern JointOperationalParamsReportType*
            JointOperationalParamsReportTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern JointOperationalParamsReportType*
            JointOperationalParamsReportTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern JointOperationalParamsReportType*
            JointOperationalParamsReportTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            JointOperationalParamsReportTypePluginSupport_copy_data(
                JointOperationalParamsReportType *out,
                const JointOperationalParamsReportType *in);

            NDDSUSERDllExport extern void 
            JointOperationalParamsReportTypePluginSupport_destroy_data_w_params(
                JointOperationalParamsReportType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            JointOperationalParamsReportTypePluginSupport_destroy_data_ex(
                JointOperationalParamsReportType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            JointOperationalParamsReportTypePluginSupport_destroy_data(
                JointOperationalParamsReportType *sample);

            NDDSUSERDllExport extern void 
            JointOperationalParamsReportTypePluginSupport_print_data(
                const JointOperationalParamsReportType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern JointOperationalParamsReportType*
            JointOperationalParamsReportTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern JointOperationalParamsReportType*
            JointOperationalParamsReportTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            JointOperationalParamsReportTypePluginSupport_destroy_key_ex(
                JointOperationalParamsReportTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            JointOperationalParamsReportTypePluginSupport_destroy_key(
                JointOperationalParamsReportTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            JointOperationalParamsReportTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            JointOperationalParamsReportTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            JointOperationalParamsReportTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            JointOperationalParamsReportTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            JointOperationalParamsReportTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                JointOperationalParamsReportType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            JointOperationalParamsReportTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                JointOperationalParamsReportType *out,
                const JointOperationalParamsReportType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            JointOperationalParamsReportTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const JointOperationalParamsReportType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            JointOperationalParamsReportTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                JointOperationalParamsReportType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            JointOperationalParamsReportTypePlugin_deserialize_from_cdr_buffer(
                JointOperationalParamsReportType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            JointOperationalParamsReportTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            JointOperationalParamsReportTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            JointOperationalParamsReportTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            JointOperationalParamsReportTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            JointOperationalParamsReportTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                JointOperationalParamsReportType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            JointOperationalParamsReportTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                JointOperationalParamsReportTypeKeyHolder *key, 
                const JointOperationalParamsReportType *instance);

            NDDSUSERDllExport extern RTIBool 
            JointOperationalParamsReportTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                JointOperationalParamsReportType *instance, 
                const JointOperationalParamsReportTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            JointOperationalParamsReportTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *stream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            JointOperationalParamsReportTypePlugin_new(void);

            NDDSUSERDllExport extern void
            JointOperationalParamsReportTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace ExtendedPayloadStatus  */
    } /* namespace SEM  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* JointOperationalParamsReportTypePlugin_1879797462_h */

