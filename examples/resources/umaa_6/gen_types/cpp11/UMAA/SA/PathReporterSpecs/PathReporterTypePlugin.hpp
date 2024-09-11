

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from PathReporterType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef PathReporterTypePlugin_1057600987_h
#define PathReporterTypePlugin_1057600987_h

#include "PathReporterType.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/Common/MaritimeEnumeration/MaritimeEnumerationSetsPlugin.hpp"
#include "UMAA/Common/Measurement/MeasurementsPlugin.hpp"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace UMAA {
    namespace SA {
        namespace PathReporterSpecs {

            #define PathReporterTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define PathReporterTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define PathReporterTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define PathReporterTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define PathReporterTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PathReporterType*
            PathReporterTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern PathReporterType*
            PathReporterTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern PathReporterType*
            PathReporterTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            PathReporterTypePluginSupport_copy_data(
                PathReporterType *out,
                const PathReporterType *in);

            NDDSUSERDllExport extern void 
            PathReporterTypePluginSupport_destroy_data_w_params(
                PathReporterType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            PathReporterTypePluginSupport_destroy_data_ex(
                PathReporterType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            PathReporterTypePluginSupport_destroy_data(
                PathReporterType *sample);

            NDDSUSERDllExport extern void 
            PathReporterTypePluginSupport_print_data(
                const PathReporterType *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool 
            PathReporterTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                PathReporterType *out,
                const PathReporterType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            PathReporterTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const PathReporterType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            PathReporterTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                PathReporterType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            PathReporterTypePlugin_deserialize_from_cdr_buffer(
                PathReporterType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            PathReporterTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            PathReporterTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            PathReporterTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            PathReporterTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            PathReporterTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                PathReporterType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

        } /* namespace PathReporterSpecs  */
    } /* namespace SA  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* PathReporterTypePlugin_1057600987_h */

