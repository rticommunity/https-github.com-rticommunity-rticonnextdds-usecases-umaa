

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from RangeConfigReportType.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef RangeConfigReportTypePlugin_319386127_h
#define RangeConfigReportTypePlugin_319386127_h

#include "RangeConfigReportType.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/Common/Enumeration/EnumerationSetsPlugin.hpp"
#include "UMAA/Common/Measurement/MeasurementsPlugin.hpp"
#include "UMAA/SEM/SensorManagement/RangeErrorTypePlugin.hpp"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace UMAA {
    namespace SA {
        namespace RangeConfig {

            /* The type used to store keys for instances of type struct
            * AnotherSimple.
            *
            * By default, this type is struct RangeConfigReportType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct RangeConfigReportType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * RangeConfigReportType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct RangeConfigReportType.
            */
            typedef  class RangeConfigReportType RangeConfigReportTypeKeyHolder;

            #define RangeConfigReportTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define RangeConfigReportTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define RangeConfigReportTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define RangeConfigReportTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define RangeConfigReportTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define RangeConfigReportTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define RangeConfigReportTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RangeConfigReportType*
            RangeConfigReportTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern RangeConfigReportType*
            RangeConfigReportTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern RangeConfigReportType*
            RangeConfigReportTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            RangeConfigReportTypePluginSupport_copy_data(
                RangeConfigReportType *out,
                const RangeConfigReportType *in);

            NDDSUSERDllExport extern void 
            RangeConfigReportTypePluginSupport_destroy_data_w_params(
                RangeConfigReportType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            RangeConfigReportTypePluginSupport_destroy_data_ex(
                RangeConfigReportType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            RangeConfigReportTypePluginSupport_destroy_data(
                RangeConfigReportType *sample);

            NDDSUSERDllExport extern void 
            RangeConfigReportTypePluginSupport_print_data(
                const RangeConfigReportType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern RangeConfigReportType*
            RangeConfigReportTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern RangeConfigReportType*
            RangeConfigReportTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            RangeConfigReportTypePluginSupport_destroy_key_ex(
                RangeConfigReportTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            RangeConfigReportTypePluginSupport_destroy_key(
                RangeConfigReportTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            RangeConfigReportTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            RangeConfigReportTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            RangeConfigReportTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            RangeConfigReportTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            RangeConfigReportTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                RangeConfigReportType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            RangeConfigReportTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                RangeConfigReportType *out,
                const RangeConfigReportType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            RangeConfigReportTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const RangeConfigReportType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            RangeConfigReportTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                RangeConfigReportType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            RangeConfigReportTypePlugin_deserialize_from_cdr_buffer(
                RangeConfigReportType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            RangeConfigReportTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            RangeConfigReportTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            RangeConfigReportTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            RangeConfigReportTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            RangeConfigReportTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                RangeConfigReportType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            RangeConfigReportTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                RangeConfigReportTypeKeyHolder *key, 
                const RangeConfigReportType *instance);

            NDDSUSERDllExport extern RTIBool 
            RangeConfigReportTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                RangeConfigReportType *instance, 
                const RangeConfigReportTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            RangeConfigReportTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *stream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            RangeConfigReportTypePlugin_new(void);

            NDDSUSERDllExport extern void
            RangeConfigReportTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace RangeConfig  */
    } /* namespace SA  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* RangeConfigReportTypePlugin_319386127_h */

