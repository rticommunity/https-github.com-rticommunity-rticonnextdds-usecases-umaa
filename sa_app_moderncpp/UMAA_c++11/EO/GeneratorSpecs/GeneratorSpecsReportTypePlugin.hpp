

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from GeneratorSpecsReportType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef GeneratorSpecsReportTypePlugin_1933929472_h
#define GeneratorSpecsReportTypePlugin_1933929472_h

#include "GeneratorSpecsReportType.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/Common/Measurement/MeasurementsPlugin.hpp"
#include "UMAA/Common/PrimitiveConstrained/ConstrainedTypesPlugin.hpp"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace UMAA {
    namespace EO {
        namespace GeneratorSpecs {

            /* The type used to store keys for instances of type struct
            * AnotherSimple.
            *
            * By default, this type is struct GeneratorSpecsReportType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct GeneratorSpecsReportType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * GeneratorSpecsReportType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct GeneratorSpecsReportType.
            */
            typedef class GeneratorSpecsReportType GeneratorSpecsReportTypeKeyHolder;

            #define GeneratorSpecsReportTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define GeneratorSpecsReportTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define GeneratorSpecsReportTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define GeneratorSpecsReportTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define GeneratorSpecsReportTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define GeneratorSpecsReportTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define GeneratorSpecsReportTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern GeneratorSpecsReportType*
            GeneratorSpecsReportTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern GeneratorSpecsReportType*
            GeneratorSpecsReportTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern GeneratorSpecsReportType*
            GeneratorSpecsReportTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            GeneratorSpecsReportTypePluginSupport_copy_data(
                GeneratorSpecsReportType *out,
                const GeneratorSpecsReportType *in);

            NDDSUSERDllExport extern void 
            GeneratorSpecsReportTypePluginSupport_destroy_data_w_params(
                GeneratorSpecsReportType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            GeneratorSpecsReportTypePluginSupport_destroy_data_ex(
                GeneratorSpecsReportType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            GeneratorSpecsReportTypePluginSupport_destroy_data(
                GeneratorSpecsReportType *sample);

            NDDSUSERDllExport extern void 
            GeneratorSpecsReportTypePluginSupport_print_data(
                const GeneratorSpecsReportType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern GeneratorSpecsReportType*
            GeneratorSpecsReportTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern GeneratorSpecsReportType*
            GeneratorSpecsReportTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            GeneratorSpecsReportTypePluginSupport_destroy_key_ex(
                GeneratorSpecsReportTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            GeneratorSpecsReportTypePluginSupport_destroy_key(
                GeneratorSpecsReportTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            GeneratorSpecsReportTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            GeneratorSpecsReportTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            GeneratorSpecsReportTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            GeneratorSpecsReportTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            GeneratorSpecsReportTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                GeneratorSpecsReportType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            GeneratorSpecsReportTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                GeneratorSpecsReportType *out,
                const GeneratorSpecsReportType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            GeneratorSpecsReportTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const GeneratorSpecsReportType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            GeneratorSpecsReportTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                GeneratorSpecsReportType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            GeneratorSpecsReportTypePlugin_deserialize_from_cdr_buffer(
                GeneratorSpecsReportType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            GeneratorSpecsReportTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            GeneratorSpecsReportTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            GeneratorSpecsReportTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            GeneratorSpecsReportTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            GeneratorSpecsReportTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                GeneratorSpecsReportType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            GeneratorSpecsReportTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                GeneratorSpecsReportTypeKeyHolder *key, 
                const GeneratorSpecsReportType *instance);

            NDDSUSERDllExport extern RTIBool 
            GeneratorSpecsReportTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                GeneratorSpecsReportType *instance, 
                const GeneratorSpecsReportTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            GeneratorSpecsReportTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *stream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            GeneratorSpecsReportTypePlugin_new(void);

            NDDSUSERDllExport extern void
            GeneratorSpecsReportTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace GeneratorSpecs  */
    } /* namespace EO  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* GeneratorSpecsReportTypePlugin_1933929472_h */

