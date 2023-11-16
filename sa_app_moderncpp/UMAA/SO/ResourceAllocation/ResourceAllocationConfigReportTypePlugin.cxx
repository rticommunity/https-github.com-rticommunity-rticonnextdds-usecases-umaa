

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ResourceAllocationConfigReportType.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#include <string.h>

#ifndef ndds_c_h
#include "ndds/ndds_c.h"
#endif

#ifndef osapi_type_h
#include "osapi/osapi_type.h"
#endif
#ifndef osapi_heap_h
#include "osapi/osapi_heap.h"
#endif

#ifndef osapi_utility_h
#include "osapi/osapi_utility.h"
#endif

#ifndef cdr_log_h
#include "cdr/cdr_log.h"
#endif

#ifndef cdr_type_h
#include "cdr/cdr_type.h"
#endif

#ifndef cdr_type_object_h
#include "cdr/cdr_typeObject.h"
#endif

#ifndef cdr_encapsulation_h
#include "cdr/cdr_encapsulation.h"
#endif

#ifndef cdr_stream_h
#include "cdr/cdr_stream.h"
#endif

#ifndef cdr_log_h
#include "cdr/cdr_log.h"
#endif

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "dds_c/dds_c_typecode_impl.h"

#include "rti/topic/cdr/Serialization.hpp"

#define RTI_CDR_CURRENT_SUBMODULE RTI_CDR_SUBMODULE_MASK_STREAM

#include "ResourceAllocationConfigReportTypePlugin.hpp"

namespace UMAA {
    namespace SO {
        namespace ResourceAllocation {

            /* ----------------------------------------------------------------------------
            *  Type ResourceAllocationConfigReportType
            * -------------------------------------------------------------------------- */

            /* -----------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------- */

            ResourceAllocationConfigReportType *
            ResourceAllocationConfigReportTypePluginSupport_create_data(void)
            {
                try {
                    ResourceAllocationConfigReportType *sample = new ResourceAllocationConfigReportType();
                    ::rti::topic::allocate_sample(*sample);
                    return sample;
                } catch (...) {
                    return NULL;
                }
            }

            void 
            ResourceAllocationConfigReportTypePluginSupport_destroy_data(
                ResourceAllocationConfigReportType *sample) 
            {
                delete sample;
            }

            RTIBool 
            ResourceAllocationConfigReportTypePluginSupport_copy_data(
                ResourceAllocationConfigReportType *dst,
                const ResourceAllocationConfigReportType *src)
            {
                try {
                    *dst = *src;
                } catch (...) {
                    return RTI_FALSE;
                }

                return RTI_TRUE;
            }

            ResourceAllocationConfigReportType *
            ResourceAllocationConfigReportTypePluginSupport_create_key(void)
            {
                return ResourceAllocationConfigReportTypePluginSupport_create_data();
            }

            void 
            ResourceAllocationConfigReportTypePluginSupport_destroy_key(
                ResourceAllocationConfigReportTypeKeyHolder *key) 
            {
                ResourceAllocationConfigReportTypePluginSupport_destroy_data(key);
            }

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            PRESTypePluginParticipantData 
            ResourceAllocationConfigReportTypePlugin_on_participant_attached(
                void *registration_data,
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration,
                void *container_plugin_context,
                RTICdrTypeCode *type_code)
            {
                struct RTIXCdrInterpreterPrograms *programs = NULL;
                struct PRESTypePluginDefaultParticipantData *pd = NULL;
                struct RTIXCdrInterpreterProgramsGenProperty programProperty =
                RTIXCdrInterpreterProgramsGenProperty_INITIALIZER;
                if (registration_data) {} /* To avoid warnings */
                if (participant_info) {} /* To avoid warnings */
                if (top_level_registration) {} /* To avoid warnings */
                if (container_plugin_context) {} /* To avoid warnings */
                if (type_code) {} /* To avoid warnings */
                pd = (struct PRESTypePluginDefaultParticipantData *)
                PRESTypePluginDefaultParticipantData_new(participant_info);

                programProperty.generateV1Encapsulation = RTI_XCDR_TRUE;
                programProperty.generateV2Encapsulation = RTI_XCDR_TRUE;
                programProperty.resolveAlias = RTI_XCDR_TRUE;
                programProperty.inlineStruct = RTI_XCDR_TRUE;
                programProperty.optimizeEnum = RTI_XCDR_TRUE;

                programProperty.externalReferenceSize = 
                (RTIXCdrUnsignedShort) sizeof(::dds::core::external<char>);
                programProperty.getExternalRefPointerFcn = 
                ::rti::topic::interpreter::get_external_value_pointer;

                programs = DDS_TypeCodeFactory_assert_programs_in_global_list(
                    DDS_TypeCodeFactory_get_instance(),
                    (DDS_TypeCode *) (RTIXCdrTypeCode *)&::rti::topic::dynamic_type< ResourceAllocationConfigReportType >::get().native()
                    ,
                    &programProperty,
                    RTI_XCDR_PROGRAM_MASK_TYPEPLUGIN);

                if (programs == NULL) {
                    PRESTypePluginDefaultParticipantData_delete(
                        (PRESTypePluginParticipantData)pd);
                    return NULL;
                }

                pd->programs = programs;
                return (PRESTypePluginParticipantData)pd;
            }

            void 
            ResourceAllocationConfigReportTypePlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data)
            {
                if (participant_data != NULL) {
                    struct PRESTypePluginDefaultParticipantData *pd = 
                    (struct PRESTypePluginDefaultParticipantData *)participant_data;

                    if (pd->programs != NULL) {
                        DDS_TypeCodeFactory_remove_programs_from_global_list(
                            DDS_TypeCodeFactory_get_instance(),
                            pd->programs);
                        pd->programs = NULL;
                    }
                    PRESTypePluginDefaultParticipantData_delete(participant_data);
                }
            }

            PRESTypePluginEndpointData
            ResourceAllocationConfigReportTypePlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *containerPluginContext)
            {
                try {
                    PRESTypePluginEndpointData epd = NULL;
                    unsigned int serializedSampleMaxSize = 0;

                    unsigned int serializedKeyMaxSize = 0;
                    unsigned int serializedKeyMaxSizeV2 = 0;

                    if (top_level_registration) {} /* To avoid warnings */
                    if (containerPluginContext) {} /* To avoid warnings */

                    if (participant_data == NULL) {
                        return NULL;
                    } 

                    epd = PRESTypePluginDefaultEndpointData_new(
                        participant_data,
                        endpoint_info,
                        (PRESTypePluginDefaultEndpointDataCreateSampleFunction)
                        ResourceAllocationConfigReportTypePluginSupport_create_data,
                        (PRESTypePluginDefaultEndpointDataDestroySampleFunction)
                        ResourceAllocationConfigReportTypePluginSupport_destroy_data,
                        (PRESTypePluginDefaultEndpointDataCreateKeyFunction)
                        UMAA::SO::ResourceAllocation::ResourceAllocationConfigReportTypePluginSupport_create_key ,                (PRESTypePluginDefaultEndpointDataDestroyKeyFunction)
                        UMAA::SO::ResourceAllocation::ResourceAllocationConfigReportTypePluginSupport_destroy_key);

                    if (epd == NULL) {
                        return NULL;
                    } 

                    serializedKeyMaxSize =  UMAA::SO::ResourceAllocation::ResourceAllocationConfigReportTypePlugin_get_serialized_key_max_size(
                        epd,RTI_FALSE,RTI_CDR_ENCAPSULATION_ID_CDR_BE,0);
                    serializedKeyMaxSizeV2 = ResourceAllocationConfigReportTypePlugin_get_serialized_key_max_size_for_keyhash(
                        epd,
                        RTI_CDR_ENCAPSULATION_ID_CDR2_BE,
                        0);

                    if(!PRESTypePluginDefaultEndpointData_createMD5StreamWithInfo(
                        epd,
                        endpoint_info,
                        serializedKeyMaxSize,
                        serializedKeyMaxSizeV2))  
                    {
                        PRESTypePluginDefaultEndpointData_delete(epd);
                        return NULL;
                    }

                    if (endpoint_info->endpointKind == PRES_TYPEPLUGIN_ENDPOINT_WRITER) {
                        serializedSampleMaxSize = UMAA::SO::ResourceAllocation::ResourceAllocationConfigReportTypePlugin_get_serialized_sample_max_size(
                            epd,RTI_FALSE,RTI_CDR_ENCAPSULATION_ID_CDR_BE,0);
                        PRESTypePluginDefaultEndpointData_setMaxSizeSerializedSample(epd, serializedSampleMaxSize);

                        if (PRESTypePluginDefaultEndpointData_createWriterPool(
                            epd,
                            endpoint_info,
                            (PRESTypePluginGetSerializedSampleMaxSizeFunction)
                            UMAA::SO::ResourceAllocation::ResourceAllocationConfigReportTypePlugin_get_serialized_sample_max_size, epd,
                            (PRESTypePluginGetSerializedSampleSizeFunction)
                            PRESTypePlugin_interpretedGetSerializedSampleSize,
                            epd) == RTI_FALSE) {
                            PRESTypePluginDefaultEndpointData_delete(epd);
                            return NULL;
                        }
                    }

                    return epd;
                } catch (...) {
                    return NULL;
                }
            }

            void 
            ResourceAllocationConfigReportTypePlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data)
            {  
                PRESTypePluginDefaultEndpointData_delete(endpoint_data);
            }

            void    
            ResourceAllocationConfigReportTypePlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                ResourceAllocationConfigReportType *sample,
                void *handle)
            {
                try {
                    ::rti::topic::reset_sample(*sample);
                } catch(const std::exception& ex) {
                    RTICdrLog_logWithFunctionName(
                        RTI_LOG_BIT_EXCEPTION,
                        "ResourceAllocationConfigReportTypePlugin_return_sample",
                        &RTI_LOG_ANY_FAILURE_ss,
                        "exception: ",
                        ex.what());
                }

                PRESTypePluginDefaultEndpointData_returnSample(
                    endpoint_data, sample, handle);
            }

            RTIBool 
            ResourceAllocationConfigReportTypePlugin_copy_sample(
                PRESTypePluginEndpointData,
                ResourceAllocationConfigReportType *dst,
                const ResourceAllocationConfigReportType *src)
            {
                return UMAA::SO::ResourceAllocation::ResourceAllocationConfigReportTypePluginSupport_copy_data(dst,src);
            }

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */
            unsigned int 
            ResourceAllocationConfigReportTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            RTIBool
            ResourceAllocationConfigReportTypePlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const ResourceAllocationConfigReportType *sample,
                ::dds::core::policy::DataRepresentationId representation)
            {
                using namespace ::dds::core::policy;

                try{
                    RTIEncapsulationId encapsulationId = RTI_CDR_ENCAPSULATION_ID_INVALID;
                    struct RTICdrStream stream;
                    struct PRESTypePluginDefaultEndpointData epd;
                    RTIBool result;
                    struct PRESTypePluginDefaultParticipantData pd;
                    struct RTIXCdrTypePluginProgramContext defaultProgramContext =
                    RTIXCdrTypePluginProgramContext_INTIALIZER;
                    struct PRESTypePlugin plugin = PRES_TYPEPLUGIN_DEFAULT;

                    if (length == NULL) {
                        return RTI_FALSE;
                    }

                    RTIOsapiMemory_zero(&epd, sizeof(struct PRESTypePluginDefaultEndpointData));
                    epd.programContext = defaultProgramContext;
                    epd._participantData = &pd;
                    epd.typePlugin = &plugin;
                    epd.programContext.endpointPluginData = &epd;
                    plugin.typeCode = (struct RTICdrTypeCode *)
                    (RTIXCdrTypeCode *)&::rti::topic::dynamic_type< ResourceAllocationConfigReportType >::get().native()
                    ;
                    pd.programs = ::rti::topic::interpreter::get_cdr_serialization_programs<
                    ResourceAllocationConfigReportType, 
                    true, true, true>();

                    encapsulationId = DDS_TypeCode_get_native_encapsulation(
                        (DDS_TypeCode *) plugin.typeCode,
                        representation);

                    if (encapsulationId == RTI_CDR_ENCAPSULATION_ID_INVALID) {
                        return RTI_FALSE;
                    }

                    epd._maxSizeSerializedSample =
                    ResourceAllocationConfigReportTypePlugin_get_serialized_sample_max_size(
                        (PRESTypePluginEndpointData)&epd, 
                        RTI_TRUE, 
                        encapsulationId,
                        0);

                    if (buffer == NULL) {
                        *length = 
                        PRESTypePlugin_interpretedGetSerializedSampleSize(
                            (PRESTypePluginEndpointData)&epd,
                            RTI_TRUE,
                            encapsulationId,
                            0,
                            sample);

                        if (*length == 0) {
                            return RTI_FALSE;
                        }

                        return RTI_TRUE;
                    }    

                    RTICdrStream_init(&stream);
                    RTICdrStream_set(&stream, (char *)buffer, *length);

                    result = PRESTypePlugin_interpretedSerialize(
                        (PRESTypePluginEndpointData)&epd, 
                        sample, 
                        &stream, 
                        RTI_TRUE, 
                        encapsulationId,
                        RTI_TRUE, 
                        NULL);  

                    *length = RTICdrStream_getCurrentPositionOffset(&stream);
                    return result;     
                } catch (...) {
                    return RTI_FALSE;
                }
            }

            RTIBool
            ResourceAllocationConfigReportTypePlugin_deserialize_from_cdr_buffer(
                ResourceAllocationConfigReportType *sample,
                const char * buffer,
                unsigned int length)
            {
                struct RTICdrStream stream;
                struct PRESTypePluginDefaultParticipantData pd;
                struct RTIXCdrTypePluginProgramContext defaultProgramContext =
                RTIXCdrTypePluginProgramContext_INTIALIZER;
                struct PRESTypePlugin plugin;
                struct PRESTypePluginDefaultEndpointData epd;

                RTICdrStream_init(&stream);
                RTICdrStream_set(&stream, (char *)buffer, length);

                epd.programContext = defaultProgramContext;
                epd._participantData = &pd;
                epd.typePlugin = &plugin;
                epd.programContext.endpointPluginData = &epd;
                plugin.typeCode = (struct RTICdrTypeCode *)
                (struct RTICdrTypeCode *)(RTIXCdrTypeCode *)&::rti::topic::dynamic_type< ResourceAllocationConfigReportType >::get().native()
                ;
                pd.programs = ::rti::topic::interpreter::get_cdr_serialization_programs<
                ResourceAllocationConfigReportType, 
                true, true, true>();

                epd._assignabilityProperty.acceptUnknownEnumValue = RTI_XCDR_TRUE;
                epd._assignabilityProperty.acceptUnknownUnionDiscriminator = RTI_XCDR_TRUE;

                ::rti::topic::reset_sample(*sample);
                return PRESTypePlugin_interpretedDeserialize( 
                    (PRESTypePluginEndpointData)&epd,
                    sample,
                    &stream, 
                    RTI_TRUE, 
                    RTI_TRUE, 
                    NULL);
            }

            unsigned int 
            ResourceAllocationConfigReportTypePlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment)
            {
                try {
                    unsigned int size;
                    RTIBool overflow = RTI_FALSE;

                    size = PRESTypePlugin_interpretedGetSerializedSampleMaxSize(
                        endpoint_data,&overflow,include_encapsulation,encapsulation_id,current_alignment);

                    if (overflow) {
                        size = RTI_CDR_MAX_SERIALIZED_SIZE;
                    }

                    return size;
                } catch (...) {
                    return 0;
                }    
            }

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */

            PRESTypePluginKeyKind 
            ResourceAllocationConfigReportTypePlugin_get_key_kind(void)
            {
                return PRES_TYPEPLUGIN_USER_KEY;
            }

            RTIBool ResourceAllocationConfigReportTypePlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                ResourceAllocationConfigReportType **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos)
            {
                try {
                    RTIBool result;
                    if (drop_sample) {} /* To avoid warnings */
                    stream->_xTypesState.unassignable = RTI_FALSE;
                    result= PRESTypePlugin_interpretedDeserializeKey( 
                        endpoint_data, (sample != NULL)?*sample:NULL, stream,
                        deserialize_encapsulation, deserialize_key, endpoint_plugin_qos);
                    if (result) {
                        if (stream->_xTypesState.unassignable) {
                            result = RTI_FALSE;
                        }
                    }
                    return result;    
                } catch (...) {
                    return RTI_FALSE;
                }     
            }

            unsigned int
            ResourceAllocationConfigReportTypePlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment)
            {
                try {
                    unsigned int size;
                    RTIBool overflow = RTI_FALSE;

                    size = PRESTypePlugin_interpretedGetSerializedKeyMaxSize(
                        endpoint_data,&overflow,include_encapsulation,encapsulation_id,current_alignment);
                    if (overflow) {
                        size = RTI_CDR_MAX_SERIALIZED_SIZE;
                    }

                    return size;
                } catch (...) {
                    return RTI_FALSE;
                }    
            }

            unsigned int
            ResourceAllocationConfigReportTypePlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment)
            {
                unsigned int size;
                RTIBool overflow = RTI_FALSE;

                size = PRESTypePlugin_interpretedGetSerializedKeyMaxSizeForKeyhash(
                    endpoint_data,
                    &overflow,
                    encapsulation_id,
                    current_alignment);
                if (overflow) {
                    size = RTI_CDR_MAX_SERIALIZED_SIZE;
                }

                return size;
            }

            RTIBool 
            ResourceAllocationConfigReportTypePlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                ResourceAllocationConfigReportTypeKeyHolder *dst, 
                const ResourceAllocationConfigReportType *src)
            {
                try {
                    if (endpoint_data) {} /* To avoid warnings */   

                    dst->source() = src->source();
                    return RTI_TRUE;
                } catch (...) {
                    return RTI_FALSE;
                }    
            }

            RTIBool 
            ResourceAllocationConfigReportTypePlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                ResourceAllocationConfigReportType *dst, const
                ResourceAllocationConfigReportTypeKeyHolder *src)
            {
                try {
                    if (endpoint_data) {} /* To avoid warnings */   
                    dst->source() = src->source();
                    return RTI_TRUE;
                } catch (...) {
                    return RTI_FALSE;
                }    
            }

            RTIBool 
            ResourceAllocationConfigReportTypePlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *stream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos)
            {
                ResourceAllocationConfigReportType * sample = NULL;
                sample = (ResourceAllocationConfigReportType *)
                PRESTypePluginDefaultEndpointData_getTempSample(endpoint_data);
                if (sample == NULL) {
                    return RTI_FALSE;
                }
                if (!PRESTypePlugin_interpretedSerializedSampleToKey(
                    endpoint_data,
                    sample,
                    stream, 
                    deserialize_encapsulation, 
                    RTI_TRUE,
                    endpoint_plugin_qos)) {
                    return RTI_FALSE;
                }
                if (!PRESTypePlugin_interpretedInstanceToKeyHash(
                    endpoint_data,
                    keyhash,
                    sample,
                    RTICdrStream_getEncapsulationKind(stream))) {
                    return RTI_FALSE;
                }
                return RTI_TRUE;   
            }

            /* ------------------------------------------------------------------------
            * Plug-in Installation Methods
            * ------------------------------------------------------------------------ */
            struct PRESTypePlugin *ResourceAllocationConfigReportTypePlugin_new(void) 
            { 
                struct PRESTypePlugin *plugin = NULL;
                const struct PRESTypePluginVersion PLUGIN_VERSION = 
                PRES_TYPE_PLUGIN_VERSION_2_0;

                RTIOsapiHeap_allocateStructure(
                    &plugin, struct PRESTypePlugin);
                if (plugin == NULL) {
                    return NULL;
                }

                plugin->version = PLUGIN_VERSION;

                /* set up parent's function pointers */
                plugin->onParticipantAttached =
                (PRESTypePluginOnParticipantAttachedCallback)
                UMAA::SO::ResourceAllocation::ResourceAllocationConfigReportTypePlugin_on_participant_attached;
                plugin->onParticipantDetached =
                (PRESTypePluginOnParticipantDetachedCallback)
                UMAA::SO::ResourceAllocation::ResourceAllocationConfigReportTypePlugin_on_participant_detached;
                plugin->onEndpointAttached =
                (PRESTypePluginOnEndpointAttachedCallback)
                UMAA::SO::ResourceAllocation::ResourceAllocationConfigReportTypePlugin_on_endpoint_attached;
                plugin->onEndpointDetached =
                (PRESTypePluginOnEndpointDetachedCallback)
                UMAA::SO::ResourceAllocation::ResourceAllocationConfigReportTypePlugin_on_endpoint_detached;

                plugin->copySampleFnc =
                (PRESTypePluginCopySampleFunction)
                UMAA::SO::ResourceAllocation::ResourceAllocationConfigReportTypePlugin_copy_sample;
                plugin->createSampleFnc =
                (PRESTypePluginCreateSampleFunction)
                ResourceAllocationConfigReportTypePlugin_create_sample;
                plugin->destroySampleFnc =
                (PRESTypePluginDestroySampleFunction)
                ResourceAllocationConfigReportTypePlugin_destroy_sample;

                plugin->serializeFnc = 
                (PRESTypePluginSerializeFunction) PRESTypePlugin_interpretedSerialize;
                plugin->deserializeFnc =
                (PRESTypePluginDeserializeFunction) PRESTypePlugin_interpretedDeserializeWithAlloc;
                plugin->getSerializedSampleMaxSizeFnc =
                (PRESTypePluginGetSerializedSampleMaxSizeFunction)
                UMAA::SO::ResourceAllocation::ResourceAllocationConfigReportTypePlugin_get_serialized_sample_max_size;
                plugin->getSerializedSampleMinSizeFnc =
                (PRESTypePluginGetSerializedSampleMinSizeFunction)
                PRESTypePlugin_interpretedGetSerializedSampleMinSize;
                plugin->getDeserializedSampleMaxSizeFnc = NULL; 
                plugin->getSampleFnc =
                (PRESTypePluginGetSampleFunction)
                ResourceAllocationConfigReportTypePlugin_get_sample;
                plugin->returnSampleFnc =
                (PRESTypePluginReturnSampleFunction)
                ResourceAllocationConfigReportTypePlugin_return_sample;
                plugin->getKeyKindFnc =
                (PRESTypePluginGetKeyKindFunction)
                UMAA::SO::ResourceAllocation::ResourceAllocationConfigReportTypePlugin_get_key_kind;

                plugin->getSerializedKeyMaxSizeFnc =   
                (PRESTypePluginGetSerializedKeyMaxSizeFunction)
                UMAA::SO::ResourceAllocation::ResourceAllocationConfigReportTypePlugin_get_serialized_key_max_size;
                plugin->serializeKeyFnc =
                (PRESTypePluginSerializeKeyFunction)
                PRESTypePlugin_interpretedSerializeKey;
                plugin->deserializeKeyFnc =
                (PRESTypePluginDeserializeKeyFunction)
                UMAA::SO::ResourceAllocation::ResourceAllocationConfigReportTypePlugin_deserialize_key;
                plugin->deserializeKeySampleFnc =
                (PRESTypePluginDeserializeKeySampleFunction)
                PRESTypePlugin_interpretedDeserializeKey;

                plugin-> instanceToKeyHashFnc = 
                (PRESTypePluginInstanceToKeyHashFunction)
                PRESTypePlugin_interpretedInstanceToKeyHash;
                plugin->serializedSampleToKeyHashFnc = 
                (PRESTypePluginSerializedSampleToKeyHashFunction)
                UMAA::SO::ResourceAllocation::ResourceAllocationConfigReportTypePlugin_serialized_sample_to_keyhash;

                plugin->getKeyFnc =
                (PRESTypePluginGetKeyFunction)
                ResourceAllocationConfigReportTypePlugin_get_key;
                plugin->returnKeyFnc =
                (PRESTypePluginReturnKeyFunction)
                ResourceAllocationConfigReportTypePlugin_return_key;

                plugin->instanceToKeyFnc =
                (PRESTypePluginInstanceToKeyFunction)
                UMAA::SO::ResourceAllocation::ResourceAllocationConfigReportTypePlugin_instance_to_key;
                plugin->keyToInstanceFnc =
                (PRESTypePluginKeyToInstanceFunction)
                UMAA::SO::ResourceAllocation::ResourceAllocationConfigReportTypePlugin_key_to_instance;
                plugin->serializedKeyToKeyHashFnc = NULL; /* Not supported yet */
                #ifdef NDDS_STANDALONE_TYPE
                plugin->typeCode = NULL; 
                #else
                plugin->typeCode = (struct RTICdrTypeCode *) 
                &::rti::topic::dynamic_type< UMAA::SO::ResourceAllocation::ResourceAllocationConfigReportType >::get().native();
                #endif
                plugin->languageKind = PRES_TYPEPLUGIN_CPPSTL_LANG;

                /* Serialized buffer */
                plugin->getBuffer = 
                (PRESTypePluginGetBufferFunction)
                ResourceAllocationConfigReportTypePlugin_get_buffer;
                plugin->returnBuffer = 
                (PRESTypePluginReturnBufferFunction)
                ResourceAllocationConfigReportTypePlugin_return_buffer;
                plugin->getBufferWithParams = NULL;
                plugin->returnBufferWithParams = NULL;
                plugin->getSerializedSampleSizeFnc =
                (PRESTypePluginGetSerializedSampleSizeFunction)
                PRESTypePlugin_interpretedGetSerializedSampleSize;

                plugin->getWriterLoanedSampleFnc = NULL; 
                plugin->returnWriterLoanedSampleFnc = NULL;
                plugin->returnWriterLoanedSampleFromCookieFnc = NULL;
                plugin->validateWriterLoanedSampleFnc = NULL;
                plugin->setWriterLoanedSampleSerializedStateFnc = NULL;

                static const char * TYPE_NAME = "UMAA::SO::ResourceAllocation::ResourceAllocationConfigReportType";
                plugin->endpointTypeName = TYPE_NAME;
                plugin->isMetpType = RTI_FALSE;
                return plugin;
            }

            void
            ResourceAllocationConfigReportTypePlugin_delete(struct PRESTypePlugin *plugin)
            {
                RTIOsapiHeap_freeStructure(plugin);
            } 

            /* ----------------------------------------------------------------------------
            *  Type ResourceAllocationConfigReportType_ResourcesSet
            * -------------------------------------------------------------------------- */

            /* -----------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------- */

            ResourceAllocationConfigReportType_ResourcesSet *
            ResourceAllocationConfigReportType_ResourcesSetPluginSupport_create_data(void)
            {
                try {
                    ResourceAllocationConfigReportType_ResourcesSet *sample = new ResourceAllocationConfigReportType_ResourcesSet();
                    ::rti::topic::allocate_sample(*sample);
                    return sample;
                } catch (...) {
                    return NULL;
                }
            }

            void 
            ResourceAllocationConfigReportType_ResourcesSetPluginSupport_destroy_data(
                ResourceAllocationConfigReportType_ResourcesSet *sample) 
            {
                delete sample;
            }

            RTIBool 
            ResourceAllocationConfigReportType_ResourcesSetPluginSupport_copy_data(
                ResourceAllocationConfigReportType_ResourcesSet *dst,
                const ResourceAllocationConfigReportType_ResourcesSet *src)
            {
                try {
                    *dst = *src;
                } catch (...) {
                    return RTI_FALSE;
                }

                return RTI_TRUE;
            }

            ResourceAllocationConfigReportType_ResourcesSet *
            ResourceAllocationConfigReportType_ResourcesSetPluginSupport_create_key(void)
            {
                return ResourceAllocationConfigReportType_ResourcesSetPluginSupport_create_data();
            }

            void 
            ResourceAllocationConfigReportType_ResourcesSetPluginSupport_destroy_key(
                ResourceAllocationConfigReportType_ResourcesSetKeyHolder *key) 
            {
                ResourceAllocationConfigReportType_ResourcesSetPluginSupport_destroy_data(key);
            }

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            PRESTypePluginParticipantData 
            ResourceAllocationConfigReportType_ResourcesSetPlugin_on_participant_attached(
                void *registration_data,
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration,
                void *container_plugin_context,
                RTICdrTypeCode *type_code)
            {
                struct RTIXCdrInterpreterPrograms *programs = NULL;
                struct PRESTypePluginDefaultParticipantData *pd = NULL;
                struct RTIXCdrInterpreterProgramsGenProperty programProperty =
                RTIXCdrInterpreterProgramsGenProperty_INITIALIZER;
                if (registration_data) {} /* To avoid warnings */
                if (participant_info) {} /* To avoid warnings */
                if (top_level_registration) {} /* To avoid warnings */
                if (container_plugin_context) {} /* To avoid warnings */
                if (type_code) {} /* To avoid warnings */
                pd = (struct PRESTypePluginDefaultParticipantData *)
                PRESTypePluginDefaultParticipantData_new(participant_info);

                programProperty.generateV1Encapsulation = RTI_XCDR_TRUE;
                programProperty.generateV2Encapsulation = RTI_XCDR_TRUE;
                programProperty.resolveAlias = RTI_XCDR_TRUE;
                programProperty.inlineStruct = RTI_XCDR_TRUE;
                programProperty.optimizeEnum = RTI_XCDR_TRUE;

                programProperty.externalReferenceSize = 
                (RTIXCdrUnsignedShort) sizeof(::dds::core::external<char>);
                programProperty.getExternalRefPointerFcn = 
                ::rti::topic::interpreter::get_external_value_pointer;

                programs = DDS_TypeCodeFactory_assert_programs_in_global_list(
                    DDS_TypeCodeFactory_get_instance(),
                    (DDS_TypeCode *) (RTIXCdrTypeCode *)&::rti::topic::dynamic_type< ResourceAllocationConfigReportType_ResourcesSet >::get().native()
                    ,
                    &programProperty,
                    RTI_XCDR_PROGRAM_MASK_TYPEPLUGIN);

                if (programs == NULL) {
                    PRESTypePluginDefaultParticipantData_delete(
                        (PRESTypePluginParticipantData)pd);
                    return NULL;
                }

                pd->programs = programs;
                return (PRESTypePluginParticipantData)pd;
            }

            void 
            ResourceAllocationConfigReportType_ResourcesSetPlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data)
            {
                if (participant_data != NULL) {
                    struct PRESTypePluginDefaultParticipantData *pd = 
                    (struct PRESTypePluginDefaultParticipantData *)participant_data;

                    if (pd->programs != NULL) {
                        DDS_TypeCodeFactory_remove_programs_from_global_list(
                            DDS_TypeCodeFactory_get_instance(),
                            pd->programs);
                        pd->programs = NULL;
                    }
                    PRESTypePluginDefaultParticipantData_delete(participant_data);
                }
            }

            PRESTypePluginEndpointData
            ResourceAllocationConfigReportType_ResourcesSetPlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *containerPluginContext)
            {
                try {
                    PRESTypePluginEndpointData epd = NULL;
                    unsigned int serializedSampleMaxSize = 0;

                    unsigned int serializedKeyMaxSize = 0;
                    unsigned int serializedKeyMaxSizeV2 = 0;

                    if (top_level_registration) {} /* To avoid warnings */
                    if (containerPluginContext) {} /* To avoid warnings */

                    if (participant_data == NULL) {
                        return NULL;
                    } 

                    epd = PRESTypePluginDefaultEndpointData_new(
                        participant_data,
                        endpoint_info,
                        (PRESTypePluginDefaultEndpointDataCreateSampleFunction)
                        ResourceAllocationConfigReportType_ResourcesSetPluginSupport_create_data,
                        (PRESTypePluginDefaultEndpointDataDestroySampleFunction)
                        ResourceAllocationConfigReportType_ResourcesSetPluginSupport_destroy_data,
                        (PRESTypePluginDefaultEndpointDataCreateKeyFunction)
                        UMAA::SO::ResourceAllocation::ResourceAllocationConfigReportType_ResourcesSetPluginSupport_create_key ,                (PRESTypePluginDefaultEndpointDataDestroyKeyFunction)
                        UMAA::SO::ResourceAllocation::ResourceAllocationConfigReportType_ResourcesSetPluginSupport_destroy_key);

                    if (epd == NULL) {
                        return NULL;
                    } 

                    serializedKeyMaxSize =  UMAA::SO::ResourceAllocation::ResourceAllocationConfigReportType_ResourcesSetPlugin_get_serialized_key_max_size(
                        epd,RTI_FALSE,RTI_CDR_ENCAPSULATION_ID_CDR_BE,0);
                    serializedKeyMaxSizeV2 = ResourceAllocationConfigReportType_ResourcesSetPlugin_get_serialized_key_max_size_for_keyhash(
                        epd,
                        RTI_CDR_ENCAPSULATION_ID_CDR2_BE,
                        0);

                    if(!PRESTypePluginDefaultEndpointData_createMD5StreamWithInfo(
                        epd,
                        endpoint_info,
                        serializedKeyMaxSize,
                        serializedKeyMaxSizeV2))  
                    {
                        PRESTypePluginDefaultEndpointData_delete(epd);
                        return NULL;
                    }

                    if (endpoint_info->endpointKind == PRES_TYPEPLUGIN_ENDPOINT_WRITER) {
                        serializedSampleMaxSize = UMAA::SO::ResourceAllocation::ResourceAllocationConfigReportType_ResourcesSetPlugin_get_serialized_sample_max_size(
                            epd,RTI_FALSE,RTI_CDR_ENCAPSULATION_ID_CDR_BE,0);
                        PRESTypePluginDefaultEndpointData_setMaxSizeSerializedSample(epd, serializedSampleMaxSize);

                        if (PRESTypePluginDefaultEndpointData_createWriterPool(
                            epd,
                            endpoint_info,
                            (PRESTypePluginGetSerializedSampleMaxSizeFunction)
                            UMAA::SO::ResourceAllocation::ResourceAllocationConfigReportType_ResourcesSetPlugin_get_serialized_sample_max_size, epd,
                            (PRESTypePluginGetSerializedSampleSizeFunction)
                            PRESTypePlugin_interpretedGetSerializedSampleSize,
                            epd) == RTI_FALSE) {
                            PRESTypePluginDefaultEndpointData_delete(epd);
                            return NULL;
                        }
                    }

                    return epd;
                } catch (...) {
                    return NULL;
                }
            }

            void 
            ResourceAllocationConfigReportType_ResourcesSetPlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data)
            {  
                PRESTypePluginDefaultEndpointData_delete(endpoint_data);
            }

            void    
            ResourceAllocationConfigReportType_ResourcesSetPlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                ResourceAllocationConfigReportType_ResourcesSet *sample,
                void *handle)
            {
                try {
                    ::rti::topic::reset_sample(*sample);
                } catch(const std::exception& ex) {
                    RTICdrLog_logWithFunctionName(
                        RTI_LOG_BIT_EXCEPTION,
                        "ResourceAllocationConfigReportType_ResourcesSetPlugin_return_sample",
                        &RTI_LOG_ANY_FAILURE_ss,
                        "exception: ",
                        ex.what());
                }

                PRESTypePluginDefaultEndpointData_returnSample(
                    endpoint_data, sample, handle);
            }

            RTIBool 
            ResourceAllocationConfigReportType_ResourcesSetPlugin_copy_sample(
                PRESTypePluginEndpointData,
                ResourceAllocationConfigReportType_ResourcesSet *dst,
                const ResourceAllocationConfigReportType_ResourcesSet *src)
            {
                return UMAA::SO::ResourceAllocation::ResourceAllocationConfigReportType_ResourcesSetPluginSupport_copy_data(dst,src);
            }

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */
            unsigned int 
            ResourceAllocationConfigReportType_ResourcesSetPlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            RTIBool
            ResourceAllocationConfigReportType_ResourcesSetPlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const ResourceAllocationConfigReportType_ResourcesSet *sample,
                ::dds::core::policy::DataRepresentationId representation)
            {
                using namespace ::dds::core::policy;

                try{
                    RTIEncapsulationId encapsulationId = RTI_CDR_ENCAPSULATION_ID_INVALID;
                    struct RTICdrStream stream;
                    struct PRESTypePluginDefaultEndpointData epd;
                    RTIBool result;
                    struct PRESTypePluginDefaultParticipantData pd;
                    struct RTIXCdrTypePluginProgramContext defaultProgramContext =
                    RTIXCdrTypePluginProgramContext_INTIALIZER;
                    struct PRESTypePlugin plugin = PRES_TYPEPLUGIN_DEFAULT;

                    if (length == NULL) {
                        return RTI_FALSE;
                    }

                    RTIOsapiMemory_zero(&epd, sizeof(struct PRESTypePluginDefaultEndpointData));
                    epd.programContext = defaultProgramContext;
                    epd._participantData = &pd;
                    epd.typePlugin = &plugin;
                    epd.programContext.endpointPluginData = &epd;
                    plugin.typeCode = (struct RTICdrTypeCode *)
                    (RTIXCdrTypeCode *)&::rti::topic::dynamic_type< ResourceAllocationConfigReportType_ResourcesSet >::get().native()
                    ;
                    pd.programs = ::rti::topic::interpreter::get_cdr_serialization_programs<
                    ResourceAllocationConfigReportType_ResourcesSet, 
                    true, true, true>();

                    encapsulationId = DDS_TypeCode_get_native_encapsulation(
                        (DDS_TypeCode *) plugin.typeCode,
                        representation);

                    if (encapsulationId == RTI_CDR_ENCAPSULATION_ID_INVALID) {
                        return RTI_FALSE;
                    }

                    epd._maxSizeSerializedSample =
                    ResourceAllocationConfigReportType_ResourcesSetPlugin_get_serialized_sample_max_size(
                        (PRESTypePluginEndpointData)&epd, 
                        RTI_TRUE, 
                        encapsulationId,
                        0);

                    if (buffer == NULL) {
                        *length = 
                        PRESTypePlugin_interpretedGetSerializedSampleSize(
                            (PRESTypePluginEndpointData)&epd,
                            RTI_TRUE,
                            encapsulationId,
                            0,
                            sample);

                        if (*length == 0) {
                            return RTI_FALSE;
                        }

                        return RTI_TRUE;
                    }    

                    RTICdrStream_init(&stream);
                    RTICdrStream_set(&stream, (char *)buffer, *length);

                    result = PRESTypePlugin_interpretedSerialize(
                        (PRESTypePluginEndpointData)&epd, 
                        sample, 
                        &stream, 
                        RTI_TRUE, 
                        encapsulationId,
                        RTI_TRUE, 
                        NULL);  

                    *length = RTICdrStream_getCurrentPositionOffset(&stream);
                    return result;     
                } catch (...) {
                    return RTI_FALSE;
                }
            }

            RTIBool
            ResourceAllocationConfigReportType_ResourcesSetPlugin_deserialize_from_cdr_buffer(
                ResourceAllocationConfigReportType_ResourcesSet *sample,
                const char * buffer,
                unsigned int length)
            {
                struct RTICdrStream stream;
                struct PRESTypePluginDefaultParticipantData pd;
                struct RTIXCdrTypePluginProgramContext defaultProgramContext =
                RTIXCdrTypePluginProgramContext_INTIALIZER;
                struct PRESTypePlugin plugin;
                struct PRESTypePluginDefaultEndpointData epd;

                RTICdrStream_init(&stream);
                RTICdrStream_set(&stream, (char *)buffer, length);

                epd.programContext = defaultProgramContext;
                epd._participantData = &pd;
                epd.typePlugin = &plugin;
                epd.programContext.endpointPluginData = &epd;
                plugin.typeCode = (struct RTICdrTypeCode *)
                (struct RTICdrTypeCode *)(RTIXCdrTypeCode *)&::rti::topic::dynamic_type< ResourceAllocationConfigReportType_ResourcesSet >::get().native()
                ;
                pd.programs = ::rti::topic::interpreter::get_cdr_serialization_programs<
                ResourceAllocationConfigReportType_ResourcesSet, 
                true, true, true>();

                epd._assignabilityProperty.acceptUnknownEnumValue = RTI_XCDR_TRUE;
                epd._assignabilityProperty.acceptUnknownUnionDiscriminator = RTI_XCDR_TRUE;

                ::rti::topic::reset_sample(*sample);
                return PRESTypePlugin_interpretedDeserialize( 
                    (PRESTypePluginEndpointData)&epd,
                    sample,
                    &stream, 
                    RTI_TRUE, 
                    RTI_TRUE, 
                    NULL);
            }

            unsigned int 
            ResourceAllocationConfigReportType_ResourcesSetPlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment)
            {
                try {
                    unsigned int size;
                    RTIBool overflow = RTI_FALSE;

                    size = PRESTypePlugin_interpretedGetSerializedSampleMaxSize(
                        endpoint_data,&overflow,include_encapsulation,encapsulation_id,current_alignment);

                    if (overflow) {
                        size = RTI_CDR_MAX_SERIALIZED_SIZE;
                    }

                    return size;
                } catch (...) {
                    return 0;
                }    
            }

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */

            PRESTypePluginKeyKind 
            ResourceAllocationConfigReportType_ResourcesSetPlugin_get_key_kind(void)
            {
                return PRES_TYPEPLUGIN_USER_KEY;
            }

            RTIBool ResourceAllocationConfigReportType_ResourcesSetPlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                ResourceAllocationConfigReportType_ResourcesSet **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos)
            {
                try {
                    RTIBool result;
                    if (drop_sample) {} /* To avoid warnings */
                    stream->_xTypesState.unassignable = RTI_FALSE;
                    result= PRESTypePlugin_interpretedDeserializeKey( 
                        endpoint_data, (sample != NULL)?*sample:NULL, stream,
                        deserialize_encapsulation, deserialize_key, endpoint_plugin_qos);
                    if (result) {
                        if (stream->_xTypesState.unassignable) {
                            result = RTI_FALSE;
                        }
                    }
                    return result;    
                } catch (...) {
                    return RTI_FALSE;
                }     
            }

            unsigned int
            ResourceAllocationConfigReportType_ResourcesSetPlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment)
            {
                try {
                    unsigned int size;
                    RTIBool overflow = RTI_FALSE;

                    size = PRESTypePlugin_interpretedGetSerializedKeyMaxSize(
                        endpoint_data,&overflow,include_encapsulation,encapsulation_id,current_alignment);
                    if (overflow) {
                        size = RTI_CDR_MAX_SERIALIZED_SIZE;
                    }

                    return size;
                } catch (...) {
                    return RTI_FALSE;
                }    
            }

            unsigned int
            ResourceAllocationConfigReportType_ResourcesSetPlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment)
            {
                unsigned int size;
                RTIBool overflow = RTI_FALSE;

                size = PRESTypePlugin_interpretedGetSerializedKeyMaxSizeForKeyhash(
                    endpoint_data,
                    &overflow,
                    encapsulation_id,
                    current_alignment);
                if (overflow) {
                    size = RTI_CDR_MAX_SERIALIZED_SIZE;
                }

                return size;
            }

            RTIBool 
            ResourceAllocationConfigReportType_ResourcesSetPlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                ResourceAllocationConfigReportType_ResourcesSetKeyHolder *dst, 
                const ResourceAllocationConfigReportType_ResourcesSet *src)
            {
                try {
                    if (!UMAA::SO::ResourceAllocation::ResourceAllocationDefinitionTypePlugin_instance_to_key(endpoint_data,(UMAA::SO::ResourceAllocation::ResourceAllocationDefinitionType *)dst,(const UMAA::SO::ResourceAllocation::ResourceAllocationDefinitionType*)src)) {
                        return RTI_FALSE;
                    }

                    dst->resourcesSetID() = src->resourcesSetID();
                    return RTI_TRUE;
                } catch (...) {
                    return RTI_FALSE;
                }    
            }

            RTIBool 
            ResourceAllocationConfigReportType_ResourcesSetPlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                ResourceAllocationConfigReportType_ResourcesSet *dst, const
                ResourceAllocationConfigReportType_ResourcesSetKeyHolder *src)
            {
                try {
                    if (!UMAA::SO::ResourceAllocation::ResourceAllocationDefinitionTypePlugin_key_to_instance(endpoint_data,(UMAA::SO::ResourceAllocation::ResourceAllocationDefinitionType*)dst,(const UMAA::SO::ResourceAllocation::ResourceAllocationDefinitionType*)src)) {
                        return RTI_FALSE;
                    }
                    dst->resourcesSetID() = src->resourcesSetID();
                    return RTI_TRUE;
                } catch (...) {
                    return RTI_FALSE;
                }    
            }

            RTIBool 
            ResourceAllocationConfigReportType_ResourcesSetPlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *stream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos)
            {
                ResourceAllocationConfigReportType_ResourcesSet * sample = NULL;
                sample = (ResourceAllocationConfigReportType_ResourcesSet *)
                PRESTypePluginDefaultEndpointData_getTempSample(endpoint_data);
                if (sample == NULL) {
                    return RTI_FALSE;
                }
                if (!PRESTypePlugin_interpretedSerializedSampleToKey(
                    endpoint_data,
                    sample,
                    stream, 
                    deserialize_encapsulation, 
                    RTI_TRUE,
                    endpoint_plugin_qos)) {
                    return RTI_FALSE;
                }
                if (!PRESTypePlugin_interpretedInstanceToKeyHash(
                    endpoint_data,
                    keyhash,
                    sample,
                    RTICdrStream_getEncapsulationKind(stream))) {
                    return RTI_FALSE;
                }
                return RTI_TRUE;   
            }

            /* ------------------------------------------------------------------------
            * Plug-in Installation Methods
            * ------------------------------------------------------------------------ */
            struct PRESTypePlugin *ResourceAllocationConfigReportType_ResourcesSetPlugin_new(void) 
            { 
                struct PRESTypePlugin *plugin = NULL;
                const struct PRESTypePluginVersion PLUGIN_VERSION = 
                PRES_TYPE_PLUGIN_VERSION_2_0;

                RTIOsapiHeap_allocateStructure(
                    &plugin, struct PRESTypePlugin);
                if (plugin == NULL) {
                    return NULL;
                }

                plugin->version = PLUGIN_VERSION;

                /* set up parent's function pointers */
                plugin->onParticipantAttached =
                (PRESTypePluginOnParticipantAttachedCallback)
                UMAA::SO::ResourceAllocation::ResourceAllocationConfigReportType_ResourcesSetPlugin_on_participant_attached;
                plugin->onParticipantDetached =
                (PRESTypePluginOnParticipantDetachedCallback)
                UMAA::SO::ResourceAllocation::ResourceAllocationConfigReportType_ResourcesSetPlugin_on_participant_detached;
                plugin->onEndpointAttached =
                (PRESTypePluginOnEndpointAttachedCallback)
                UMAA::SO::ResourceAllocation::ResourceAllocationConfigReportType_ResourcesSetPlugin_on_endpoint_attached;
                plugin->onEndpointDetached =
                (PRESTypePluginOnEndpointDetachedCallback)
                UMAA::SO::ResourceAllocation::ResourceAllocationConfigReportType_ResourcesSetPlugin_on_endpoint_detached;

                plugin->copySampleFnc =
                (PRESTypePluginCopySampleFunction)
                UMAA::SO::ResourceAllocation::ResourceAllocationConfigReportType_ResourcesSetPlugin_copy_sample;
                plugin->createSampleFnc =
                (PRESTypePluginCreateSampleFunction)
                ResourceAllocationConfigReportType_ResourcesSetPlugin_create_sample;
                plugin->destroySampleFnc =
                (PRESTypePluginDestroySampleFunction)
                ResourceAllocationConfigReportType_ResourcesSetPlugin_destroy_sample;

                plugin->serializeFnc = 
                (PRESTypePluginSerializeFunction) PRESTypePlugin_interpretedSerialize;
                plugin->deserializeFnc =
                (PRESTypePluginDeserializeFunction) PRESTypePlugin_interpretedDeserializeWithAlloc;
                plugin->getSerializedSampleMaxSizeFnc =
                (PRESTypePluginGetSerializedSampleMaxSizeFunction)
                UMAA::SO::ResourceAllocation::ResourceAllocationConfigReportType_ResourcesSetPlugin_get_serialized_sample_max_size;
                plugin->getSerializedSampleMinSizeFnc =
                (PRESTypePluginGetSerializedSampleMinSizeFunction)
                PRESTypePlugin_interpretedGetSerializedSampleMinSize;
                plugin->getDeserializedSampleMaxSizeFnc = NULL; 
                plugin->getSampleFnc =
                (PRESTypePluginGetSampleFunction)
                ResourceAllocationConfigReportType_ResourcesSetPlugin_get_sample;
                plugin->returnSampleFnc =
                (PRESTypePluginReturnSampleFunction)
                ResourceAllocationConfigReportType_ResourcesSetPlugin_return_sample;
                plugin->getKeyKindFnc =
                (PRESTypePluginGetKeyKindFunction)
                UMAA::SO::ResourceAllocation::ResourceAllocationConfigReportType_ResourcesSetPlugin_get_key_kind;

                plugin->getSerializedKeyMaxSizeFnc =   
                (PRESTypePluginGetSerializedKeyMaxSizeFunction)
                UMAA::SO::ResourceAllocation::ResourceAllocationConfigReportType_ResourcesSetPlugin_get_serialized_key_max_size;
                plugin->serializeKeyFnc =
                (PRESTypePluginSerializeKeyFunction)
                PRESTypePlugin_interpretedSerializeKey;
                plugin->deserializeKeyFnc =
                (PRESTypePluginDeserializeKeyFunction)
                UMAA::SO::ResourceAllocation::ResourceAllocationConfigReportType_ResourcesSetPlugin_deserialize_key;
                plugin->deserializeKeySampleFnc =
                (PRESTypePluginDeserializeKeySampleFunction)
                PRESTypePlugin_interpretedDeserializeKey;

                plugin-> instanceToKeyHashFnc = 
                (PRESTypePluginInstanceToKeyHashFunction)
                PRESTypePlugin_interpretedInstanceToKeyHash;
                plugin->serializedSampleToKeyHashFnc = 
                (PRESTypePluginSerializedSampleToKeyHashFunction)
                UMAA::SO::ResourceAllocation::ResourceAllocationConfigReportType_ResourcesSetPlugin_serialized_sample_to_keyhash;

                plugin->getKeyFnc =
                (PRESTypePluginGetKeyFunction)
                ResourceAllocationConfigReportType_ResourcesSetPlugin_get_key;
                plugin->returnKeyFnc =
                (PRESTypePluginReturnKeyFunction)
                ResourceAllocationConfigReportType_ResourcesSetPlugin_return_key;

                plugin->instanceToKeyFnc =
                (PRESTypePluginInstanceToKeyFunction)
                UMAA::SO::ResourceAllocation::ResourceAllocationConfigReportType_ResourcesSetPlugin_instance_to_key;
                plugin->keyToInstanceFnc =
                (PRESTypePluginKeyToInstanceFunction)
                UMAA::SO::ResourceAllocation::ResourceAllocationConfigReportType_ResourcesSetPlugin_key_to_instance;
                plugin->serializedKeyToKeyHashFnc = NULL; /* Not supported yet */
                #ifdef NDDS_STANDALONE_TYPE
                plugin->typeCode = NULL; 
                #else
                plugin->typeCode = (struct RTICdrTypeCode *) 
                &::rti::topic::dynamic_type< UMAA::SO::ResourceAllocation::ResourceAllocationConfigReportType_ResourcesSet >::get().native();
                #endif
                plugin->languageKind = PRES_TYPEPLUGIN_CPPSTL_LANG;

                /* Serialized buffer */
                plugin->getBuffer = 
                (PRESTypePluginGetBufferFunction)
                ResourceAllocationConfigReportType_ResourcesSetPlugin_get_buffer;
                plugin->returnBuffer = 
                (PRESTypePluginReturnBufferFunction)
                ResourceAllocationConfigReportType_ResourcesSetPlugin_return_buffer;
                plugin->getBufferWithParams = NULL;
                plugin->returnBufferWithParams = NULL;
                plugin->getSerializedSampleSizeFnc =
                (PRESTypePluginGetSerializedSampleSizeFunction)
                PRESTypePlugin_interpretedGetSerializedSampleSize;

                plugin->getWriterLoanedSampleFnc = NULL; 
                plugin->returnWriterLoanedSampleFnc = NULL;
                plugin->returnWriterLoanedSampleFromCookieFnc = NULL;
                plugin->validateWriterLoanedSampleFnc = NULL;
                plugin->setWriterLoanedSampleSerializedStateFnc = NULL;

                static const char * TYPE_NAME = "UMAA::SO::ResourceAllocation::ResourceAllocationConfigReportType_ResourcesSet";
                plugin->endpointTypeName = TYPE_NAME;
                plugin->isMetpType = RTI_FALSE;
                return plugin;
            }

            void
            ResourceAllocationConfigReportType_ResourcesSetPlugin_delete(struct PRESTypePlugin *plugin)
            {
                RTIOsapiHeap_freeStructure(plugin);
            } 
        } /* namespace ResourceAllocation  */
    } /* namespace SO  */
} /* namespace UMAA  */
#undef RTI_CDR_CURRENT_SUBMODULE 
