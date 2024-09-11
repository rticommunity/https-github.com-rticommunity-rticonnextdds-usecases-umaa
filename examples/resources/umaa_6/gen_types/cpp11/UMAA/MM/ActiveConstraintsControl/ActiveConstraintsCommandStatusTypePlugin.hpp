

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ActiveConstraintsCommandStatusType.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef ActiveConstraintsCommandStatusTypePlugin_744446579_h
#define ActiveConstraintsCommandStatusTypePlugin_744446579_h

#include "ActiveConstraintsCommandStatusType.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "UMAA/Common/IdentifierTypePlugin.hpp"
#include "UMAA/Common/MaritimeEnumeration/MaritimeEnumerationSetsPlugin.hpp"
#include "UMAA/Common/Measurement/MeasurementsPlugin.hpp"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace UMAA {
    namespace MM {
        namespace ActiveConstraintsControl {

            /* The type used to store keys for instances of type struct
            * AnotherSimple.
            *
            * By default, this type is struct ActiveConstraintsCommandStatusType
            * itself. However, if for some reason this choice is not practical for your
            * system (e.g. if sizeof(struct ActiveConstraintsCommandStatusType)
            * is very large), you may redefine this typedef in terms of another type of
            * your choosing. HOWEVER, if you define the KeyHolder type to be something
            * other than struct AnotherSimple, the
            * following restriction applies: the key of struct
            * ActiveConstraintsCommandStatusType must consist of a
            * single field of your redefined KeyHolder type and that field must be the
            * first field in struct ActiveConstraintsCommandStatusType.
            */
            typedef class ActiveConstraintsCommandStatusType ActiveConstraintsCommandStatusTypeKeyHolder;

            #define ActiveConstraintsCommandStatusTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

            #define ActiveConstraintsCommandStatusTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define ActiveConstraintsCommandStatusTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

            #define ActiveConstraintsCommandStatusTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
            #define ActiveConstraintsCommandStatusTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

            #define ActiveConstraintsCommandStatusTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define ActiveConstraintsCommandStatusTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern ActiveConstraintsCommandStatusType*
            ActiveConstraintsCommandStatusTypePluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern ActiveConstraintsCommandStatusType*
            ActiveConstraintsCommandStatusTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern ActiveConstraintsCommandStatusType*
            ActiveConstraintsCommandStatusTypePluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            ActiveConstraintsCommandStatusTypePluginSupport_copy_data(
                ActiveConstraintsCommandStatusType *out,
                const ActiveConstraintsCommandStatusType *in);

            NDDSUSERDllExport extern void 
            ActiveConstraintsCommandStatusTypePluginSupport_destroy_data_w_params(
                ActiveConstraintsCommandStatusType *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            ActiveConstraintsCommandStatusTypePluginSupport_destroy_data_ex(
                ActiveConstraintsCommandStatusType *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            ActiveConstraintsCommandStatusTypePluginSupport_destroy_data(
                ActiveConstraintsCommandStatusType *sample);

            NDDSUSERDllExport extern void 
            ActiveConstraintsCommandStatusTypePluginSupport_print_data(
                const ActiveConstraintsCommandStatusType *sample,
                const char *desc,
                unsigned int indent);

            NDDSUSERDllExport extern ActiveConstraintsCommandStatusType*
            ActiveConstraintsCommandStatusTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern ActiveConstraintsCommandStatusType*
            ActiveConstraintsCommandStatusTypePluginSupport_create_key(void);

            NDDSUSERDllExport extern void 
            ActiveConstraintsCommandStatusTypePluginSupport_destroy_key_ex(
                ActiveConstraintsCommandStatusTypeKeyHolder *key,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            ActiveConstraintsCommandStatusTypePluginSupport_destroy_key(
                ActiveConstraintsCommandStatusTypeKeyHolder *key);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            ActiveConstraintsCommandStatusTypePlugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            ActiveConstraintsCommandStatusTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            ActiveConstraintsCommandStatusTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            ActiveConstraintsCommandStatusTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            ActiveConstraintsCommandStatusTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                ActiveConstraintsCommandStatusType *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            ActiveConstraintsCommandStatusTypePlugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                ActiveConstraintsCommandStatusType *out,
                const ActiveConstraintsCommandStatusType *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool
            ActiveConstraintsCommandStatusTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const ActiveConstraintsCommandStatusType *sample,
                ::dds::core::policy::DataRepresentationId representation
                = ::dds::core::policy::DataRepresentation::xcdr()); 

            NDDSUSERDllExport extern RTIBool 
            ActiveConstraintsCommandStatusTypePlugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                ActiveConstraintsCommandStatusType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            ActiveConstraintsCommandStatusTypePlugin_deserialize_from_cdr_buffer(
                ActiveConstraintsCommandStatusType *sample,
                const char * buffer,
                unsigned int length);    

            NDDSUSERDllExport extern unsigned int 
            ActiveConstraintsCommandStatusTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            ActiveConstraintsCommandStatusTypePlugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            ActiveConstraintsCommandStatusTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            ActiveConstraintsCommandStatusTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            ActiveConstraintsCommandStatusTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                ActiveConstraintsCommandStatusType ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *cdrStream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            ActiveConstraintsCommandStatusTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                ActiveConstraintsCommandStatusTypeKeyHolder *key, 
                const ActiveConstraintsCommandStatusType *instance);

            NDDSUSERDllExport extern RTIBool 
            ActiveConstraintsCommandStatusTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                ActiveConstraintsCommandStatusType *instance, 
                const ActiveConstraintsCommandStatusTypeKeyHolder *key);

            NDDSUSERDllExport extern RTIBool 
            ActiveConstraintsCommandStatusTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *cdrStream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos); 

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            ActiveConstraintsCommandStatusTypePlugin_new(void);

            NDDSUSERDllExport extern void
            ActiveConstraintsCommandStatusTypePlugin_delete(struct PRESTypePlugin *);

        } /* namespace ActiveConstraintsControl  */
    } /* namespace MM  */
} /* namespace UMAA  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* ActiveConstraintsCommandStatusTypePlugin_744446579_h */

