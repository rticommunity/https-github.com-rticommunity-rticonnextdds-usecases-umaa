

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from DriverConfigReportType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef DriverConfigReportTypePlugin_551596296_h
#define DriverConfigReportTypePlugin_551596296_h

#include "DriverConfigReportType.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/Common/Capabilities/Speed_BSL_CapabilityPlugin.hpp"
#include "UMAA/Common/Measurement/Acceleration3D_PlatformXYZPlugin.hpp"
#include "UMAA/Common/Measurement/ElevationTypePlugin.hpp"
#include "UMAA/Common/Measurement/MeasurementsPlugin.hpp"
#include "UMAA/Common/Measurement/OrientationAcceleration3DPlugin.hpp"
#include "UMAA/Common/Speed/SpeedControlTypePlugin.hpp"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace UMAA {
    namespace MO {
        namespace DriverConfig {

            /* The type used to store keys for instances of type struct
            * AnotherSimple.
            *
            * By default, this type is struct DriverConfigReportType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct DriverConfigReportType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * DriverConfigReportType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct DriverConfigReportType.
            */
            typedef class DriverConfigReportType DriverConfigReportTypeKeyHolder;

            #define DriverConfigReportTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define DriverConfigReportTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define DriverConfigReportTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define DriverConfigReportTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define DriverConfigReportTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define DriverConfigReportTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define DriverConfigReportTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern DriverConfigReportType*
            DriverConfigReportTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern DriverConfigReportType*
            DriverConfigReportTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern DriverConfigReportType*
            DriverConfigReportTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            DriverConfigReportTypePluginSupport_copy_data(
                DriverConfigReportType *out,
                const DriverConfigReportType *in);

            NDDSUSERDllExport extern void 
            DriverConfigReportTypePluginSupport_destroy_data_w_params(
                DriverConfigReportType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            DriverConfigReportTypePluginSupport_destroy_data_ex(
                DriverConfigReportType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            DriverConfigReportTypePluginSupport_destroy_data(
                DriverConfigReportType *sample);

            NDDSUSERDllExport extern void 
            DriverConfigReportTypePluginSupport_print_data(
                const DriverConfigReportType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern DriverConfigReportType*
            DriverConfigReportTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern DriverConfigReportType*
            DriverConfigReportTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            DriverConfigReportTypePluginSupport_destroy_key_ex(
                DriverConfigReportTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            DriverConfigReportTypePluginSupport_destroy_key(
                DriverConfigReportTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            DriverConfigReportTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            DriverConfigReportTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            DriverConfigReportTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            DriverConfigReportTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            DriverConfigReportTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                DriverConfigReportType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            DriverConfigReportTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                DriverConfigReportType *out,
                const DriverConfigReportType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            DriverConfigReportTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const DriverConfigReportType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            DriverConfigReportTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                DriverConfigReportType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            DriverConfigReportTypePlugin_deserialize_from_cdr_buffer(
                DriverConfigReportType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            DriverConfigReportTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            DriverConfigReportTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            DriverConfigReportTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            DriverConfigReportTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            DriverConfigReportTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                DriverConfigReportType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            DriverConfigReportTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                DriverConfigReportTypeKeyHolder *key, 
                const DriverConfigReportType *instance);

            NDDSUSERDllExport extern RTIBool 
            DriverConfigReportTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                DriverConfigReportType *instance, 
                const DriverConfigReportTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            DriverConfigReportTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *stream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            DriverConfigReportTypePlugin_new(void);

            NDDSUSERDllExport extern void
            DriverConfigReportTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace DriverConfig  */
    } /* namespace MO  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* DriverConfigReportTypePlugin_551596296_h */

