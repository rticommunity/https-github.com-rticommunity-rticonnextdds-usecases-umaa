

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from BilgePumpReportType.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef BilgePumpReportTypePlugin_845057044_h
#define BilgePumpReportTypePlugin_845057044_h

#include "BilgePumpReportType.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/Common/MaritimeEnumeration/EnumerationSetsPlugin.hpp"
#include "UMAA/Common/Measurement/MeasurementsPlugin.hpp"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace UMAA {
    namespace EO {
        namespace BilgePumpStatus {

            /* The type used to store keys for instances of type struct
            * AnotherSimple.
            *
            * By default, this type is struct BilgePumpReportType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct BilgePumpReportType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * BilgePumpReportType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct BilgePumpReportType.
            */
            typedef  class BilgePumpReportType BilgePumpReportTypeKeyHolder;

            #define BilgePumpReportTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define BilgePumpReportTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define BilgePumpReportTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define BilgePumpReportTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define BilgePumpReportTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define BilgePumpReportTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define BilgePumpReportTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern BilgePumpReportType*
            BilgePumpReportTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern BilgePumpReportType*
            BilgePumpReportTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern BilgePumpReportType*
            BilgePumpReportTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            BilgePumpReportTypePluginSupport_copy_data(
                BilgePumpReportType *out,
                const BilgePumpReportType *in);

            NDDSUSERDllExport extern void 
            BilgePumpReportTypePluginSupport_destroy_data_w_params(
                BilgePumpReportType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            BilgePumpReportTypePluginSupport_destroy_data_ex(
                BilgePumpReportType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            BilgePumpReportTypePluginSupport_destroy_data(
                BilgePumpReportType *sample);

            NDDSUSERDllExport extern void 
            BilgePumpReportTypePluginSupport_print_data(
                const BilgePumpReportType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern BilgePumpReportType*
            BilgePumpReportTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern BilgePumpReportType*
            BilgePumpReportTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            BilgePumpReportTypePluginSupport_destroy_key_ex(
                BilgePumpReportTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            BilgePumpReportTypePluginSupport_destroy_key(
                BilgePumpReportTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            BilgePumpReportTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            BilgePumpReportTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            BilgePumpReportTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            BilgePumpReportTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            BilgePumpReportTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                BilgePumpReportType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            BilgePumpReportTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                BilgePumpReportType *out,
                const BilgePumpReportType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            BilgePumpReportTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const BilgePumpReportType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            BilgePumpReportTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                BilgePumpReportType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            BilgePumpReportTypePlugin_deserialize_from_cdr_buffer(
                BilgePumpReportType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            BilgePumpReportTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            BilgePumpReportTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            BilgePumpReportTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            BilgePumpReportTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            BilgePumpReportTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                BilgePumpReportType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            BilgePumpReportTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                BilgePumpReportTypeKeyHolder *key, 
                const BilgePumpReportType *instance);

            NDDSUSERDllExport extern RTIBool 
            BilgePumpReportTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                BilgePumpReportType *instance, 
                const BilgePumpReportTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            BilgePumpReportTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *stream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            BilgePumpReportTypePlugin_new(void);

            NDDSUSERDllExport extern void
            BilgePumpReportTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace BilgePumpStatus  */
    } /* namespace EO  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* BilgePumpReportTypePlugin_845057044_h */

