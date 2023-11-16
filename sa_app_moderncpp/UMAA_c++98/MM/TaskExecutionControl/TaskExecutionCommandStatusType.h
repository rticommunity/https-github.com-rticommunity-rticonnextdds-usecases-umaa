

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from TaskExecutionCommandStatusType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef TaskExecutionCommandStatusType_698371253_h
#define TaskExecutionCommandStatusType_698371253_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#include "rti/xcdr/Interpreter.hpp"
#else
#include "ndds_standalone_type.h"
#endif

#include "UMAA/Common/Measurement/Measurements.h"
#include "UMAA/Common/MaritimeEnumeration/EnumerationSets.h"

static const DDS_Char * const UMAA_MM_TaskExecutionControl_TaskExecutionCommandStatus_TOPIC= "UMAA::MM::TaskExecutionControl::TaskExecutionCommandStatus";

extern "C" {

    extern const char *UMAA_MM_TaskExecutionControl_TaskExecutionCommandStatusTypeTYPENAME;

}

struct UMAA_MM_TaskExecutionControl_TaskExecutionCommandStatusTypeSeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_MM_TaskExecutionControl_TaskExecutionCommandStatusTypeTypeSupport;
class UMAA_MM_TaskExecutionControl_TaskExecutionCommandStatusTypeDataWriter;
class UMAA_MM_TaskExecutionControl_TaskExecutionCommandStatusTypeDataReader;
#endif
class UMAA_MM_TaskExecutionControl_TaskExecutionCommandStatusType 
{
  public:
    typedef struct UMAA_MM_TaskExecutionControl_TaskExecutionCommandStatusTypeSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_MM_TaskExecutionControl_TaskExecutionCommandStatusTypeTypeSupport TypeSupport;
    typedef UMAA_MM_TaskExecutionControl_TaskExecutionCommandStatusTypeDataWriter DataWriter;
    typedef UMAA_MM_TaskExecutionControl_TaskExecutionCommandStatusTypeDataReader DataReader;
    #endif

    UMAA_Common_Measurement_NumericGUID   source ;
    UMAA_Common_MaritimeEnumeration_CommandStatusEnumType_CommandStatusEnumType   commandStatus ;
    UMAA_Common_MaritimeEnumeration_CommandStatusReasonEnumType_CommandStatusReasonEnumType   commandStatusReason ;
    DDS_Char *   logMessage ;
    UMAA_Common_Measurement_NumericGUID   sessionID ;
    UMAA_Common_Measurement_DateTime   timeStamp ;

};
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode * UMAA_MM_TaskExecutionControl_TaskExecutionCommandStatusType_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_MM_TaskExecutionControl_TaskExecutionCommandStatusType_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_MM_TaskExecutionControl_TaskExecutionCommandStatusType_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_MM_TaskExecutionControl_TaskExecutionCommandStatusType_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_MM_TaskExecutionControl_TaskExecutionCommandStatusTypeSeq, UMAA_MM_TaskExecutionControl_TaskExecutionCommandStatusType);

NDDSUSERDllExport
RTIBool UMAA_MM_TaskExecutionControl_TaskExecutionCommandStatusType_initialize(
    UMAA_MM_TaskExecutionControl_TaskExecutionCommandStatusType* self);

NDDSUSERDllExport
RTIBool UMAA_MM_TaskExecutionControl_TaskExecutionCommandStatusType_initialize_ex(
    UMAA_MM_TaskExecutionControl_TaskExecutionCommandStatusType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_MM_TaskExecutionControl_TaskExecutionCommandStatusType_initialize_w_params(
    UMAA_MM_TaskExecutionControl_TaskExecutionCommandStatusType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_MM_TaskExecutionControl_TaskExecutionCommandStatusType_finalize_w_return(
    UMAA_MM_TaskExecutionControl_TaskExecutionCommandStatusType* self);

NDDSUSERDllExport
void UMAA_MM_TaskExecutionControl_TaskExecutionCommandStatusType_finalize(
    UMAA_MM_TaskExecutionControl_TaskExecutionCommandStatusType* self);

NDDSUSERDllExport
void UMAA_MM_TaskExecutionControl_TaskExecutionCommandStatusType_finalize_ex(
    UMAA_MM_TaskExecutionControl_TaskExecutionCommandStatusType* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_MM_TaskExecutionControl_TaskExecutionCommandStatusType_finalize_w_params(
    UMAA_MM_TaskExecutionControl_TaskExecutionCommandStatusType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_MM_TaskExecutionControl_TaskExecutionCommandStatusType_finalize_optional_members(
    UMAA_MM_TaskExecutionControl_TaskExecutionCommandStatusType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_MM_TaskExecutionControl_TaskExecutionCommandStatusType_copy(
    UMAA_MM_TaskExecutionControl_TaskExecutionCommandStatusType* dst,
    const UMAA_MM_TaskExecutionControl_TaskExecutionCommandStatusType* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#ifndef NDDS_STANDALONE_TYPE
namespace rti { 
    namespace xcdr {
        template <>
        struct type_code< UMAA_MM_TaskExecutionControl_TaskExecutionCommandStatusType> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* TaskExecutionCommandStatusType */

