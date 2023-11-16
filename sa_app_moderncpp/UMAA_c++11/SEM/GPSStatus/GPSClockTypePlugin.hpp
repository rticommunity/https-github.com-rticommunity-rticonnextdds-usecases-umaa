

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from GPSClockType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef GPSClockTypePlugin_1708034919_h
#define GPSClockTypePlugin_1708034919_h

#include "GPSClockType.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/Common/MaritimeEnumeration/EnumerationSetsPlugin.hpp"
#include "UMAA/Common/Measurement/MeasurementsPlugin.hpp"
#include "UMAA/Common/PrimitiveConstrained/ConstrainedTypesPlugin.hpp"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace UMAA {
    namespace SEM {
        namespace GPSStatus {

            #define GPSClockTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define GPSClockTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define GPSClockTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define GPSClockTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define GPSClockTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern GPSClockType*
            GPSClockTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern GPSClockType*
            GPSClockTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern GPSClockType*
            GPSClockTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            GPSClockTypePluginSupport_copy_data(
                GPSClockType *out,
                const GPSClockType *in);

            NDDSUSERDllExport extern void 
            GPSClockTypePluginSupport_destroy_data_w_params(
                GPSClockType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            GPSClockTypePluginSupport_destroy_data_ex(
                GPSClockType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            GPSClockTypePluginSupport_destroy_data(
                GPSClockType *sample);

            NDDSUSERDllExport extern void 
            GPSClockTypePluginSupport_print_data(
                const GPSClockType *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            GPSClockTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            GPSClockTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            GPSClockTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            GPSClockTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            GPSClockTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                GPSClockType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            GPSClockTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                GPSClockType *out,
                const GPSClockType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            GPSClockTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const GPSClockType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            GPSClockTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                GPSClockType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            GPSClockTypePlugin_deserialize_from_cdr_buffer(
                GPSClockType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            GPSClockTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            GPSClockTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            GPSClockTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            GPSClockTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            GPSClockTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                GPSClockType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            GPSClockTypePlugin_new(void);

            NDDSUSERDllExport extern void
            GPSClockTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace GPSStatus  */
    } /* namespace SEM  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* GPSClockTypePlugin_1708034919_h */

