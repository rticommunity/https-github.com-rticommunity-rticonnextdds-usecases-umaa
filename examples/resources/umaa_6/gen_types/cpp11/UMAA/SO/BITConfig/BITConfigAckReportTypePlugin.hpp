

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from BITConfigAckReportType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef BITConfigAckReportTypePlugin_958256211_h
#define BITConfigAckReportTypePlugin_958256211_h

#include "BITConfigAckReportType.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/Common/IdentifierTypePlugin.hpp"
#include "UMAA/Common/Measurement/MeasurementsPlugin.hpp"
#include "UMAA/SO/BITConfig/BITConfigCommandTypePlugin.hpp"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace UMAA {
    namespace SO {
        namespace BITConfig {

            /* The type used to store keys for instances of type struct
            * AnotherSimple.
            *
            * By default, this type is struct BITConfigAckReportType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct BITConfigAckReportType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * BITConfigAckReportType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct BITConfigAckReportType.
            */
            typedef class BITConfigAckReportType BITConfigAckReportTypeKeyHolder;

            #define BITConfigAckReportTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define BITConfigAckReportTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define BITConfigAckReportTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define BITConfigAckReportTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define BITConfigAckReportTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define BITConfigAckReportTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define BITConfigAckReportTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern BITConfigAckReportType*
            BITConfigAckReportTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern BITConfigAckReportType*
            BITConfigAckReportTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern BITConfigAckReportType*
            BITConfigAckReportTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            BITConfigAckReportTypePluginSupport_copy_data(
                BITConfigAckReportType *out,
                const BITConfigAckReportType *in);

            NDDSUSERDllExport extern void 
            BITConfigAckReportTypePluginSupport_destroy_data_w_params(
                BITConfigAckReportType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            BITConfigAckReportTypePluginSupport_destroy_data_ex(
                BITConfigAckReportType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            BITConfigAckReportTypePluginSupport_destroy_data(
                BITConfigAckReportType *sample);

            NDDSUSERDllExport extern void 
            BITConfigAckReportTypePluginSupport_print_data(
                const BITConfigAckReportType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern BITConfigAckReportType*
            BITConfigAckReportTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern BITConfigAckReportType*
            BITConfigAckReportTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            BITConfigAckReportTypePluginSupport_destroy_key_ex(
                BITConfigAckReportTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            BITConfigAckReportTypePluginSupport_destroy_key(
                BITConfigAckReportTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            BITConfigAckReportTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            BITConfigAckReportTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            BITConfigAckReportTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            BITConfigAckReportTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            BITConfigAckReportTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                BITConfigAckReportType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            BITConfigAckReportTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                BITConfigAckReportType *out,
                const BITConfigAckReportType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            BITConfigAckReportTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const BITConfigAckReportType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            BITConfigAckReportTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                BITConfigAckReportType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            BITConfigAckReportTypePlugin_deserialize_from_cdr_buffer(
                BITConfigAckReportType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            BITConfigAckReportTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            BITConfigAckReportTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            BITConfigAckReportTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            BITConfigAckReportTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            BITConfigAckReportTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                BITConfigAckReportType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            BITConfigAckReportTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                BITConfigAckReportTypeKeyHolder *key, 
                const BITConfigAckReportType *instance);

            NDDSUSERDllExport extern RTIBool 
            BITConfigAckReportTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                BITConfigAckReportType *instance, 
                const BITConfigAckReportTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            BITConfigAckReportTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *cdrStream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            BITConfigAckReportTypePlugin_new(void);

            NDDSUSERDllExport extern void
            BITConfigAckReportTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace BITConfig  */
    } /* namespace SO  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* BITConfigAckReportTypePlugin_958256211_h */

