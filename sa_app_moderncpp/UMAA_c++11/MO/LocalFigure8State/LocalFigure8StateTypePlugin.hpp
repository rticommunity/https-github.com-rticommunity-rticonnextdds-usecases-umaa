

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from LocalFigure8StateType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef LocalFigure8StateTypePlugin_1186436630_h
#define LocalFigure8StateTypePlugin_1186436630_h

#include "LocalFigure8StateType.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/MO/LocalFigure8State/LocalFigure8PatternTypePlugin.hpp"
#include "UMAA/MO/LocalFigure8State/LocalFigure8TransitTypePlugin.hpp"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace UMAA {
    namespace MO {
        namespace LocalFigure8State {
            namespace LocalFigure8StateType_Specializations {

                /* ----------------------------------------------------------------------------
                (De)Serialize functions:
                * ------------------------------------------------------------------------- */

                NDDSUSERDllExport extern unsigned int 
                LocalFigure8StateType_SelectorsPlugin_get_serialized_sample_max_size(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIBool include_encapsulation,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                /* --------------------------------------------------------------------------------------
                Key Management functions:
                * -------------------------------------------------------------------------------------- */

                NDDSUSERDllExport extern unsigned int 
                LocalFigure8StateType_SelectorsPlugin_get_serialized_key_max_size(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIBool include_encapsulation,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                NDDSUSERDllExport extern unsigned int 
                LocalFigure8StateType_SelectorsPlugin_get_serialized_key_max_size_for_keyhash(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                /* ----------------------------------------------------------------------------
                Support functions:
                * ---------------------------------------------------------------------------- */

                NDDSUSERDllExport extern void
                LocalFigure8StateType_SelectorsPluginSupport_print_data(
                    const LocalFigure8StateType_Selectors *sample,
                    const char *desc,
                    unsigned int indent_level);

                #define LocalFigure8StateType_UnionPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

                #define LocalFigure8StateType_UnionPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
                #define LocalFigure8StateType_UnionPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

                #define LocalFigure8StateType_UnionPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
                #define LocalFigure8StateType_UnionPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

                /* --------------------------------------------------------------------------------------
                Support functions:
                * -------------------------------------------------------------------------------------- */

                NDDSUSERDllExport extern LocalFigure8StateType_Union*
                LocalFigure8StateType_UnionPluginSupport_create_data_w_params(
                    const struct DDS_TypeAllocationParams_t * alloc_params);

                NDDSUSERDllExport extern LocalFigure8StateType_Union*
                LocalFigure8StateType_UnionPluginSupport_create_data_ex(RTIBool allocate_pointers);

                NDDSUSERDllExport extern LocalFigure8StateType_Union*
                LocalFigure8StateType_UnionPluginSupport_create_data(void);

                NDDSUSERDllExport extern RTIBool 
                LocalFigure8StateType_UnionPluginSupport_copy_data(
                    LocalFigure8StateType_Union *out,
                    const LocalFigure8StateType_Union *in);

                NDDSUSERDllExport extern void 
                LocalFigure8StateType_UnionPluginSupport_destroy_data_w_params(
                    LocalFigure8StateType_Union *sample,
                    const struct DDS_TypeDeallocationParams_t * dealloc_params);

                NDDSUSERDllExport extern void 
                LocalFigure8StateType_UnionPluginSupport_destroy_data_ex(
                    LocalFigure8StateType_Union *sample,RTIBool deallocate_pointers);

                NDDSUSERDllExport extern void 
                LocalFigure8StateType_UnionPluginSupport_destroy_data(
                    LocalFigure8StateType_Union *sample);

                NDDSUSERDllExport extern void 
                LocalFigure8StateType_UnionPluginSupport_print_data(
                    const LocalFigure8StateType_Union *sample,
                    const char *desc,
                    unsigned int indent);

                /* ----------------------------------------------------------------------------
                Callback functions:
                * ---------------------------------------------------------------------------- */

                NDDSUSERDllExport extern PRESTypePluginParticipantData 
                LocalFigure8StateType_UnionPlugin_on_participant_attached(
                    void *registration_data, 
                    const struct PRESTypePluginParticipantInfo *participant_info,
                    RTIBool top_level_registration, 
                    void *container_plugin_context,
                    RTICdrTypeCode *typeCode);

                NDDSUSERDllExport extern void 
                LocalFigure8StateType_UnionPlugin_on_participant_detached(
                    PRESTypePluginParticipantData participant_data);

                NDDSUSERDllExport extern PRESTypePluginEndpointData 
                LocalFigure8StateType_UnionPlugin_on_endpoint_attached(
                    PRESTypePluginParticipantData participant_data,
                    const struct PRESTypePluginEndpointInfo *endpoint_info,
                    RTIBool top_level_registration, 
                    void *container_plugin_context);

                NDDSUSERDllExport extern void 
                LocalFigure8StateType_UnionPlugin_on_endpoint_detached(
                    PRESTypePluginEndpointData endpoint_data);

                NDDSUSERDllExport extern void    
                LocalFigure8StateType_UnionPlugin_return_sample(
                    PRESTypePluginEndpointData endpoint_data,
                    LocalFigure8StateType_Union *sample,
                    void *handle);    

                NDDSUSERDllExport extern RTIBool 
                LocalFigure8StateType_UnionPlugin_copy_sample(
                    PRESTypePluginEndpointData endpoint_data,
                    LocalFigure8StateType_Union *out,
                    const LocalFigure8StateType_Union *in);

                /* ----------------------------------------------------------------------------
                (De)Serialize functions:
                * ------------------------------------------------------------------------- */

                NDDSUSERDllExport extern RTIBool
                LocalFigure8StateType_UnionPlugin_serialize_to_cdr_buffer(
                    char * buffer,
                    unsigned int * length,
                    const LocalFigure8StateType_Union *sample,
                    ::dds::core::policy::DataRepresentationId representation
                    = ::dds::core::policy::DataRepresentation::xcdr()); 

                NDDSUSERDllExport extern RTIBool 
                LocalFigure8StateType_UnionPlugin_deserialize(
                    PRESTypePluginEndpointData endpoint_data,
                    LocalFigure8StateType_Union **sample, 
                    RTIBool * drop_sample,
                    struct RTICdrStream *stream,
                    RTIBool deserialize_encapsulation,
                    RTIBool deserialize_sample, 
                    void *endpoint_plugin_qos);

                NDDSUSERDllExport extern RTIBool
                LocalFigure8StateType_UnionPlugin_deserialize_from_cdr_buffer(
                    LocalFigure8StateType_Union *sample,
                    const char * buffer,
                    unsigned int length);    

                NDDSUSERDllExport extern unsigned int 
                LocalFigure8StateType_UnionPlugin_get_serialized_sample_max_size(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIBool include_encapsulation,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                /* --------------------------------------------------------------------------------------
                Key Management functions:
                * -------------------------------------------------------------------------------------- */
                NDDSUSERDllExport extern PRESTypePluginKeyKind 
                LocalFigure8StateType_UnionPlugin_get_key_kind(void);

                NDDSUSERDllExport extern unsigned int 
                LocalFigure8StateType_UnionPlugin_get_serialized_key_max_size(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIBool include_encapsulation,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                NDDSUSERDllExport extern unsigned int 
                LocalFigure8StateType_UnionPlugin_get_serialized_key_max_size_for_keyhash(
                    PRESTypePluginEndpointData endpoint_data,
                    RTIEncapsulationId encapsulation_id,
                    unsigned int current_alignment);

                NDDSUSERDllExport extern RTIBool 
                LocalFigure8StateType_UnionPlugin_deserialize_key(
                    PRESTypePluginEndpointData endpoint_data,
                    LocalFigure8StateType_Union ** sample,
                    RTIBool * drop_sample,
                    struct RTICdrStream *stream,
                    RTIBool deserialize_encapsulation,
                    RTIBool deserialize_key,
                    void *endpoint_plugin_qos);

                /* Plugin Functions */
                NDDSUSERDllExport extern struct PRESTypePlugin*
                LocalFigure8StateType_UnionPlugin_new(void);

                NDDSUSERDllExport extern void
                LocalFigure8StateType_UnionPlugin_delete(struct PRESTypePlugin *);

            } /* namespace LocalFigure8StateType_Specializations  */

            #define LocalFigure8StateTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define LocalFigure8StateTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define LocalFigure8StateTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define LocalFigure8StateTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define LocalFigure8StateTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern LocalFigure8StateType*
            LocalFigure8StateTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern LocalFigure8StateType*
            LocalFigure8StateTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern LocalFigure8StateType*
            LocalFigure8StateTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            LocalFigure8StateTypePluginSupport_copy_data(
                LocalFigure8StateType *out,
                const LocalFigure8StateType *in);

            NDDSUSERDllExport extern void 
            LocalFigure8StateTypePluginSupport_destroy_data_w_params(
                LocalFigure8StateType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            LocalFigure8StateTypePluginSupport_destroy_data_ex(
                LocalFigure8StateType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            LocalFigure8StateTypePluginSupport_destroy_data(
                LocalFigure8StateType *sample);

            NDDSUSERDllExport extern void 
            LocalFigure8StateTypePluginSupport_print_data(
                const LocalFigure8StateType *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            LocalFigure8StateTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            LocalFigure8StateTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            LocalFigure8StateTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            LocalFigure8StateTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            LocalFigure8StateTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                LocalFigure8StateType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            LocalFigure8StateTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                LocalFigure8StateType *out,
                const LocalFigure8StateType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            LocalFigure8StateTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const LocalFigure8StateType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            LocalFigure8StateTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                LocalFigure8StateType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            LocalFigure8StateTypePlugin_deserialize_from_cdr_buffer(
                LocalFigure8StateType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            LocalFigure8StateTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            LocalFigure8StateTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            LocalFigure8StateTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            LocalFigure8StateTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            LocalFigure8StateTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                LocalFigure8StateType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            LocalFigure8StateTypePlugin_new(void);

            NDDSUSERDllExport extern void
            LocalFigure8StateTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace LocalFigure8State  */
    } /* namespace MO  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* LocalFigure8StateTypePlugin_1186436630_h */

