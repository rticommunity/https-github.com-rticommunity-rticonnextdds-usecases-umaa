

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from RegularPolygonObjectiveType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef RegularPolygonObjectiveTypePlugin_699710667_h
#define RegularPolygonObjectiveTypePlugin_699710667_h

#include "RegularPolygonObjectiveType.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/Common/Distance/DistanceRequirementTypePlugin.hpp"
#include "UMAA/Common/Enumeration/EnumerationSetsPlugin.hpp"
#include "UMAA/Common/IdentifierTypePlugin.hpp"
#include "UMAA/Common/MaritimeEnumeration/MaritimeEnumerationSetsPlugin.hpp"
#include "UMAA/Common/Measurement/ElevationRequirementVariantTypePlugin.hpp"
#include "UMAA/Common/Measurement/ElevationVariantTypePlugin.hpp"
#include "UMAA/Common/Measurement/GeoPosition2DPlugin.hpp"
#include "UMAA/Common/Measurement/MeasurementsPlugin.hpp"
#include "UMAA/Common/Orientation/DirectionVariantTypePlugin.hpp"
#include "UMAA/Common/PrimitiveConstrained/ConstrainedTypesPlugin.hpp"
#include "UMAA/Common/Speed/SpeedRequirementVariantTypePlugin.hpp"
#include "UMAA/Common/Speed/SpeedVariantTypePlugin.hpp"
#include "UMAA/Common/Time/DateTimeRequirementTypePlugin.hpp"
#include "UMAA/MM/BaseType/StateTriggerTypePlugin.hpp"

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
            * By default, this type is struct RegularPolygonObjectiveType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct RegularPolygonObjectiveType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * RegularPolygonObjectiveType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct RegularPolygonObjectiveType.
            */
            typedef class RegularPolygonObjectiveType RegularPolygonObjectiveTypeKeyHolder;

            #define RegularPolygonObjectiveTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define RegularPolygonObjectiveTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define RegularPolygonObjectiveTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define RegularPolygonObjectiveTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define RegularPolygonObjectiveTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define RegularPolygonObjectiveTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define RegularPolygonObjectiveTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RegularPolygonObjectiveType*
            RegularPolygonObjectiveTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern RegularPolygonObjectiveType*
            RegularPolygonObjectiveTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern RegularPolygonObjectiveType*
            RegularPolygonObjectiveTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            RegularPolygonObjectiveTypePluginSupport_copy_data(
                RegularPolygonObjectiveType *out,
                const RegularPolygonObjectiveType *in);

            NDDSUSERDllExport extern void 
            RegularPolygonObjectiveTypePluginSupport_destroy_data_w_params(
                RegularPolygonObjectiveType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            RegularPolygonObjectiveTypePluginSupport_destroy_data_ex(
                RegularPolygonObjectiveType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            RegularPolygonObjectiveTypePluginSupport_destroy_data(
                RegularPolygonObjectiveType *sample);

            NDDSUSERDllExport extern void 
            RegularPolygonObjectiveTypePluginSupport_print_data(
                const RegularPolygonObjectiveType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern RegularPolygonObjectiveType*
            RegularPolygonObjectiveTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern RegularPolygonObjectiveType*
            RegularPolygonObjectiveTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            RegularPolygonObjectiveTypePluginSupport_destroy_key_ex(
                RegularPolygonObjectiveTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            RegularPolygonObjectiveTypePluginSupport_destroy_key(
                RegularPolygonObjectiveTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            RegularPolygonObjectiveTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            RegularPolygonObjectiveTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            RegularPolygonObjectiveTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            RegularPolygonObjectiveTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            RegularPolygonObjectiveTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                RegularPolygonObjectiveType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            RegularPolygonObjectiveTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                RegularPolygonObjectiveType *out,
                const RegularPolygonObjectiveType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            RegularPolygonObjectiveTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const RegularPolygonObjectiveType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            RegularPolygonObjectiveTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                RegularPolygonObjectiveType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            RegularPolygonObjectiveTypePlugin_deserialize_from_cdr_buffer(
                RegularPolygonObjectiveType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            RegularPolygonObjectiveTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            RegularPolygonObjectiveTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            RegularPolygonObjectiveTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            RegularPolygonObjectiveTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            RegularPolygonObjectiveTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                RegularPolygonObjectiveType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            RegularPolygonObjectiveTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                RegularPolygonObjectiveTypeKeyHolder *key, 
                const RegularPolygonObjectiveType *instance);

            NDDSUSERDllExport extern RTIBool 
            RegularPolygonObjectiveTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                RegularPolygonObjectiveType *instance, 
                const RegularPolygonObjectiveTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            RegularPolygonObjectiveTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *cdrStream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            RegularPolygonObjectiveTypePlugin_new(void);

            NDDSUSERDllExport extern void
            RegularPolygonObjectiveTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace BaseType  */
    } /* namespace MM  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* RegularPolygonObjectiveTypePlugin_699710667_h */

