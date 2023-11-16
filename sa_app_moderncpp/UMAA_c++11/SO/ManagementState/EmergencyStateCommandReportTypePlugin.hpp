

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from EmergencyStateCommandReportType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef EmergencyStateCommandReportTypePlugin_644226982_h
#define EmergencyStateCommandReportTypePlugin_644226982_h

#include "EmergencyStateCommandReportType.hpp"

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
    namespace SO {
        namespace ManagementState {

            /* The type used to store keys for instances of type struct
            * AnotherSimple.
            *
            * By default, this type is struct EmergencyStateCommandReportType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct EmergencyStateCommandReportType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * EmergencyStateCommandReportType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct EmergencyStateCommandReportType.
            */
            typedef class EmergencyStateCommandReportType EmergencyStateCommandReportTypeKeyHolder;

            #define EmergencyStateCommandReportTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define EmergencyStateCommandReportTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define EmergencyStateCommandReportTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define EmergencyStateCommandReportTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define EmergencyStateCommandReportTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define EmergencyStateCommandReportTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define EmergencyStateCommandReportTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern EmergencyStateCommandReportType*
            EmergencyStateCommandReportTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern EmergencyStateCommandReportType*
            EmergencyStateCommandReportTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern EmergencyStateCommandReportType*
            EmergencyStateCommandReportTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            EmergencyStateCommandReportTypePluginSupport_copy_data(
                EmergencyStateCommandReportType *out,
                const EmergencyStateCommandReportType *in);

            NDDSUSERDllExport extern void 
            EmergencyStateCommandReportTypePluginSupport_destroy_data_w_params(
                EmergencyStateCommandReportType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            EmergencyStateCommandReportTypePluginSupport_destroy_data_ex(
                EmergencyStateCommandReportType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            EmergencyStateCommandReportTypePluginSupport_destroy_data(
                EmergencyStateCommandReportType *sample);

            NDDSUSERDllExport extern void 
            EmergencyStateCommandReportTypePluginSupport_print_data(
                const EmergencyStateCommandReportType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern EmergencyStateCommandReportType*
            EmergencyStateCommandReportTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern EmergencyStateCommandReportType*
            EmergencyStateCommandReportTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            EmergencyStateCommandReportTypePluginSupport_destroy_key_ex(
                EmergencyStateCommandReportTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            EmergencyStateCommandReportTypePluginSupport_destroy_key(
                EmergencyStateCommandReportTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            EmergencyStateCommandReportTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            EmergencyStateCommandReportTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            EmergencyStateCommandReportTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            EmergencyStateCommandReportTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            EmergencyStateCommandReportTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                EmergencyStateCommandReportType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            EmergencyStateCommandReportTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                EmergencyStateCommandReportType *out,
                const EmergencyStateCommandReportType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            EmergencyStateCommandReportTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const EmergencyStateCommandReportType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            EmergencyStateCommandReportTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                EmergencyStateCommandReportType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            EmergencyStateCommandReportTypePlugin_deserialize_from_cdr_buffer(
                EmergencyStateCommandReportType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            EmergencyStateCommandReportTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            EmergencyStateCommandReportTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            EmergencyStateCommandReportTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            EmergencyStateCommandReportTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            EmergencyStateCommandReportTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                EmergencyStateCommandReportType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            EmergencyStateCommandReportTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                EmergencyStateCommandReportTypeKeyHolder *key, 
                const EmergencyStateCommandReportType *instance);

            NDDSUSERDllExport extern RTIBool 
            EmergencyStateCommandReportTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                EmergencyStateCommandReportType *instance, 
                const EmergencyStateCommandReportTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            EmergencyStateCommandReportTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *stream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            EmergencyStateCommandReportTypePlugin_new(void);

            NDDSUSERDllExport extern void
            EmergencyStateCommandReportTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace ManagementState  */
    } /* namespace SO  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* EmergencyStateCommandReportTypePlugin_644226982_h */

