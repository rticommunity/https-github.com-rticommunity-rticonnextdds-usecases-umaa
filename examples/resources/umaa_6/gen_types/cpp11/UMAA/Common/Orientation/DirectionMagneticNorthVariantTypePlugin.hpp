

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from DirectionMagneticNorthVariantType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef DirectionMagneticNorthVariantTypePlugin_1586582475_h
#define DirectionMagneticNorthVariantTypePlugin_1586582475_h

#include "DirectionMagneticNorthVariantType.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/Common/Measurement/MeasurementsPlugin.hpp"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace UMAA {
    namespace Common {
        namespace Orientation {

            #define DirectionMagneticNorthVariantTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define DirectionMagneticNorthVariantTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define DirectionMagneticNorthVariantTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define DirectionMagneticNorthVariantTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define DirectionMagneticNorthVariantTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern DirectionMagneticNorthVariantType*
            DirectionMagneticNorthVariantTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern DirectionMagneticNorthVariantType*
            DirectionMagneticNorthVariantTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern DirectionMagneticNorthVariantType*
            DirectionMagneticNorthVariantTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            DirectionMagneticNorthVariantTypePluginSupport_copy_data(
                DirectionMagneticNorthVariantType *out,
                const DirectionMagneticNorthVariantType *in);

            NDDSUSERDllExport extern void 
            DirectionMagneticNorthVariantTypePluginSupport_destroy_data_w_params(
                DirectionMagneticNorthVariantType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            DirectionMagneticNorthVariantTypePluginSupport_destroy_data_ex(
                DirectionMagneticNorthVariantType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            DirectionMagneticNorthVariantTypePluginSupport_destroy_data(
                DirectionMagneticNorthVariantType *sample);

            NDDSUSERDllExport extern void 
            DirectionMagneticNorthVariantTypePluginSupport_print_data(
                const DirectionMagneticNorthVariantType *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool 
            DirectionMagneticNorthVariantTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                DirectionMagneticNorthVariantType *out,
                const DirectionMagneticNorthVariantType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            DirectionMagneticNorthVariantTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const DirectionMagneticNorthVariantType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            DirectionMagneticNorthVariantTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                DirectionMagneticNorthVariantType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            DirectionMagneticNorthVariantTypePlugin_deserialize_from_cdr_buffer(
                DirectionMagneticNorthVariantType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            DirectionMagneticNorthVariantTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            DirectionMagneticNorthVariantTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            DirectionMagneticNorthVariantTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            DirectionMagneticNorthVariantTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            DirectionMagneticNorthVariantTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                DirectionMagneticNorthVariantType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

        } /* namespace Orientation  */
    } /* namespace Common  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* DirectionMagneticNorthVariantTypePlugin_1586582475_h */

