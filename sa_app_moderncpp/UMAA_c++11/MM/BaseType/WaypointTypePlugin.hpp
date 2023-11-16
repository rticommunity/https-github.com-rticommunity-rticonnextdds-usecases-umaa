

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from WaypointType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef WaypointTypePlugin_968560137_h
#define WaypointTypePlugin_968560137_h

#include "WaypointType.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/Common/MaritimeEnumeration/EnumerationSetsPlugin.hpp"
#include "UMAA/Common/Measurement/Altitude_AGLPlugin.hpp"
#include "UMAA/Common/Measurement/Altitude_MSLPlugin.hpp"
#include "UMAA/Common/Measurement/MeasurementsPlugin.hpp"
#include "UMAA/Common/Measurement/Orientation3DPlugin.hpp"
#include "UMAA/Common/Measurement/Position2DPlugin.hpp"
#include "UMAA/Common/Measurement/Position3D_PlatformXYZPlugin.hpp"
#include "UMAA/Common/Measurement/MeasurementsPlugin.hpp"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace UMAA {
    namespace MM {
        namespace BaseType {

            /* The type used to store keys for instances of type struct
            * AnotherSimple.
            *
            * By default, this type is struct WaypointType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct WaypointType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * WaypointType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct WaypointType.
            */
            typedef class WaypointType WaypointTypeKeyHolder;

            #define WaypointTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define WaypointTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define WaypointTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define WaypointTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define WaypointTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define WaypointTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define WaypointTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern WaypointType*
            WaypointTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern WaypointType*
            WaypointTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern WaypointType*
            WaypointTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            WaypointTypePluginSupport_copy_data(
                WaypointType *out,
                const WaypointType *in);

            NDDSUSERDllExport extern void 
            WaypointTypePluginSupport_destroy_data_w_params(
                WaypointType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            WaypointTypePluginSupport_destroy_data_ex(
                WaypointType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            WaypointTypePluginSupport_destroy_data(
                WaypointType *sample);

            NDDSUSERDllExport extern void 
            WaypointTypePluginSupport_print_data(
                const WaypointType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern WaypointType*
            WaypointTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern WaypointType*
            WaypointTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            WaypointTypePluginSupport_destroy_key_ex(
                WaypointTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            WaypointTypePluginSupport_destroy_key(
                WaypointTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            WaypointTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            WaypointTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            WaypointTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            WaypointTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            WaypointTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                WaypointType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            WaypointTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                WaypointType *out,
                const WaypointType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            WaypointTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const WaypointType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            WaypointTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                WaypointType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            WaypointTypePlugin_deserialize_from_cdr_buffer(
                WaypointType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            WaypointTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            WaypointTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            WaypointTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            WaypointTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            WaypointTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                WaypointType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            WaypointTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                WaypointTypeKeyHolder *key, 
                const WaypointType *instance);

            NDDSUSERDllExport extern RTIBool 
            WaypointTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                WaypointType *instance, 
                const WaypointTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            WaypointTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *stream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            WaypointTypePlugin_new(void);

            NDDSUSERDllExport extern void
            WaypointTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace BaseType  */
    } /* namespace MM  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* WaypointTypePlugin_968560137_h */

