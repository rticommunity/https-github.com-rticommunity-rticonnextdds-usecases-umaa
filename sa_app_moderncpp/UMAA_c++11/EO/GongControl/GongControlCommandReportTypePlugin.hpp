

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from GongControlCommandReportType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef GongControlCommandReportTypePlugin_1053810251_h
#define GongControlCommandReportTypePlugin_1053810251_h

#include "GongControlCommandReportType.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/Common/Enumeration/EnumerationSetsPlugin.hpp"
#include "UMAA/Common/Measurement/MeasurementsPlugin.hpp"
#include "UMAA/Common/Propulsion/BlastPropertiesTypePlugin.hpp"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace UMAA {
    namespace EO {
        namespace GongControl {

            /* The type used to store keys for instances of type struct
            * AnotherSimple.
            *
            * By default, this type is struct GongControlCommandReportType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct GongControlCommandReportType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * GongControlCommandReportType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct GongControlCommandReportType.
            */
            typedef class GongControlCommandReportType GongControlCommandReportTypeKeyHolder;

            #define GongControlCommandReportTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define GongControlCommandReportTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define GongControlCommandReportTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define GongControlCommandReportTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define GongControlCommandReportTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define GongControlCommandReportTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define GongControlCommandReportTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern GongControlCommandReportType*
            GongControlCommandReportTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern GongControlCommandReportType*
            GongControlCommandReportTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern GongControlCommandReportType*
            GongControlCommandReportTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            GongControlCommandReportTypePluginSupport_copy_data(
                GongControlCommandReportType *out,
                const GongControlCommandReportType *in);

            NDDSUSERDllExport extern void 
            GongControlCommandReportTypePluginSupport_destroy_data_w_params(
                GongControlCommandReportType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            GongControlCommandReportTypePluginSupport_destroy_data_ex(
                GongControlCommandReportType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            GongControlCommandReportTypePluginSupport_destroy_data(
                GongControlCommandReportType *sample);

            NDDSUSERDllExport extern void 
            GongControlCommandReportTypePluginSupport_print_data(
                const GongControlCommandReportType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern GongControlCommandReportType*
            GongControlCommandReportTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern GongControlCommandReportType*
            GongControlCommandReportTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            GongControlCommandReportTypePluginSupport_destroy_key_ex(
                GongControlCommandReportTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            GongControlCommandReportTypePluginSupport_destroy_key(
                GongControlCommandReportTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            GongControlCommandReportTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            GongControlCommandReportTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            GongControlCommandReportTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            GongControlCommandReportTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            GongControlCommandReportTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                GongControlCommandReportType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            GongControlCommandReportTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                GongControlCommandReportType *out,
                const GongControlCommandReportType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            GongControlCommandReportTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const GongControlCommandReportType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            GongControlCommandReportTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                GongControlCommandReportType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            GongControlCommandReportTypePlugin_deserialize_from_cdr_buffer(
                GongControlCommandReportType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            GongControlCommandReportTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            GongControlCommandReportTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            GongControlCommandReportTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            GongControlCommandReportTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            GongControlCommandReportTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                GongControlCommandReportType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            GongControlCommandReportTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                GongControlCommandReportTypeKeyHolder *key, 
                const GongControlCommandReportType *instance);

            NDDSUSERDllExport extern RTIBool 
            GongControlCommandReportTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                GongControlCommandReportType *instance, 
                const GongControlCommandReportTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            GongControlCommandReportTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *stream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            GongControlCommandReportTypePlugin_new(void);

            NDDSUSERDllExport extern void
            GongControlCommandReportTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace GongControl  */
    } /* namespace EO  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* GongControlCommandReportTypePlugin_1053810251_h */

