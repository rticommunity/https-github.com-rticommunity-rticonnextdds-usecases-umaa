

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from CompartmentReportType.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef CompartmentReportTypePlugin_936047304_h
#define CompartmentReportTypePlugin_936047304_h

#include "CompartmentReportType.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/Common/Enumeration/EnumerationSetsPlugin.hpp"
#include "UMAA/Common/Measurement/MeasurementsPlugin.hpp"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace UMAA {
    namespace SA {
        namespace CompartmentStatus {

            /* The type used to store keys for instances of type struct
            * AnotherSimple.
            *
            * By default, this type is struct CompartmentReportType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct CompartmentReportType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * CompartmentReportType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct CompartmentReportType.
            */
            typedef  class CompartmentReportType CompartmentReportTypeKeyHolder;

            #define CompartmentReportTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define CompartmentReportTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define CompartmentReportTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define CompartmentReportTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define CompartmentReportTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define CompartmentReportTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define CompartmentReportTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern CompartmentReportType*
            CompartmentReportTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern CompartmentReportType*
            CompartmentReportTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern CompartmentReportType*
            CompartmentReportTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            CompartmentReportTypePluginSupport_copy_data(
                CompartmentReportType *out,
                const CompartmentReportType *in);

            NDDSUSERDllExport extern void 
            CompartmentReportTypePluginSupport_destroy_data_w_params(
                CompartmentReportType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            CompartmentReportTypePluginSupport_destroy_data_ex(
                CompartmentReportType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            CompartmentReportTypePluginSupport_destroy_data(
                CompartmentReportType *sample);

            NDDSUSERDllExport extern void 
            CompartmentReportTypePluginSupport_print_data(
                const CompartmentReportType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern CompartmentReportType*
            CompartmentReportTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern CompartmentReportType*
            CompartmentReportTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            CompartmentReportTypePluginSupport_destroy_key_ex(
                CompartmentReportTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            CompartmentReportTypePluginSupport_destroy_key(
                CompartmentReportTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            CompartmentReportTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            CompartmentReportTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            CompartmentReportTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            CompartmentReportTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            CompartmentReportTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                CompartmentReportType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            CompartmentReportTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                CompartmentReportType *out,
                const CompartmentReportType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            CompartmentReportTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const CompartmentReportType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            CompartmentReportTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                CompartmentReportType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            CompartmentReportTypePlugin_deserialize_from_cdr_buffer(
                CompartmentReportType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            CompartmentReportTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            CompartmentReportTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            CompartmentReportTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            CompartmentReportTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            CompartmentReportTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                CompartmentReportType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            CompartmentReportTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                CompartmentReportTypeKeyHolder *key, 
                const CompartmentReportType *instance);

            NDDSUSERDllExport extern RTIBool 
            CompartmentReportTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                CompartmentReportType *instance, 
                const CompartmentReportTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            CompartmentReportTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *stream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            CompartmentReportTypePlugin_new(void);

            NDDSUSERDllExport extern void
            CompartmentReportTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace CompartmentStatus  */
    } /* namespace SA  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* CompartmentReportTypePlugin_936047304_h */

