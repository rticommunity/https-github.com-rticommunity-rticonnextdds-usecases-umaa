

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ObjectiveExecutionCommandAckReportType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef ObjectiveExecutionCommandAckReportType_988473992_h
#define ObjectiveExecutionCommandAckReportType_988473992_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#include "rti/xcdr/Interpreter.hpp"
#else
#include "ndds_standalone_type.h"
#endif

#include "UMAA/Common/MaritimeEnumeration/EnumerationSets.h"
#include "UMAA/Common/Measurement/Measurements.h"

static const DDS_Char * const UMAA_MM_ObjectiveExecutionControl_ObjectiveExecutionCommandAckReport_TOPIC= "UMAA::MM::ObjectiveExecutionControl::ObjectiveExecutionCommandAckReport";

extern "C" {

    extern const char *UMAA_MM_ObjectiveExecutionControl_ObjectiveExecutionCommandAckReportTypeTYPENAME;

}

struct UMAA_MM_ObjectiveExecutionControl_ObjectiveExecutionCommandAckReportTypeSeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_MM_ObjectiveExecutionControl_ObjectiveExecutionCommandAckReportTypeTypeSupport;
class UMAA_MM_ObjectiveExecutionControl_ObjectiveExecutionCommandAckReportTypeDataWriter;
class UMAA_MM_ObjectiveExecutionControl_ObjectiveExecutionCommandAckReportTypeDataReader;
#endif
class UMAA_MM_ObjectiveExecutionControl_ObjectiveExecutionCommandAckReportType 
{
  public:
    typedef struct UMAA_MM_ObjectiveExecutionControl_ObjectiveExecutionCommandAckReportTypeSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_MM_ObjectiveExecutionControl_ObjectiveExecutionCommandAckReportTypeTypeSupport TypeSupport;
    typedef UMAA_MM_ObjectiveExecutionControl_ObjectiveExecutionCommandAckReportTypeDataWriter DataWriter;
    typedef UMAA_MM_ObjectiveExecutionControl_ObjectiveExecutionCommandAckReportTypeDataReader DataReader;
    #endif

    UMAA_Common_MaritimeEnumeration_TaskStateEnumType_TaskStateEnumType   state ;
    UMAA_Common_Measurement_NumericGUID   source ;
    UMAA_Common_Measurement_NumericGUID   sessionID ;
    UMAA_Common_Measurement_NumericGUID   missionID ;
    UMAA_Common_Measurement_NumericGUID   objectiveID ;
    UMAA_Common_Measurement_NumericGUID   taskID ;

};
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode * UMAA_MM_ObjectiveExecutionControl_ObjectiveExecutionCommandAckReportType_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_MM_ObjectiveExecutionControl_ObjectiveExecutionCommandAckReportType_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_MM_ObjectiveExecutionControl_ObjectiveExecutionCommandAckReportType_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_MM_ObjectiveExecutionControl_ObjectiveExecutionCommandAckReportType_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_MM_ObjectiveExecutionControl_ObjectiveExecutionCommandAckReportTypeSeq, UMAA_MM_ObjectiveExecutionControl_ObjectiveExecutionCommandAckReportType);

NDDSUSERDllExport
RTIBool UMAA_MM_ObjectiveExecutionControl_ObjectiveExecutionCommandAckReportType_initialize(
    UMAA_MM_ObjectiveExecutionControl_ObjectiveExecutionCommandAckReportType* self);

NDDSUSERDllExport
RTIBool UMAA_MM_ObjectiveExecutionControl_ObjectiveExecutionCommandAckReportType_initialize_ex(
    UMAA_MM_ObjectiveExecutionControl_ObjectiveExecutionCommandAckReportType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_MM_ObjectiveExecutionControl_ObjectiveExecutionCommandAckReportType_initialize_w_params(
    UMAA_MM_ObjectiveExecutionControl_ObjectiveExecutionCommandAckReportType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_MM_ObjectiveExecutionControl_ObjectiveExecutionCommandAckReportType_finalize_w_return(
    UMAA_MM_ObjectiveExecutionControl_ObjectiveExecutionCommandAckReportType* self);

NDDSUSERDllExport
void UMAA_MM_ObjectiveExecutionControl_ObjectiveExecutionCommandAckReportType_finalize(
    UMAA_MM_ObjectiveExecutionControl_ObjectiveExecutionCommandAckReportType* self);

NDDSUSERDllExport
void UMAA_MM_ObjectiveExecutionControl_ObjectiveExecutionCommandAckReportType_finalize_ex(
    UMAA_MM_ObjectiveExecutionControl_ObjectiveExecutionCommandAckReportType* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_MM_ObjectiveExecutionControl_ObjectiveExecutionCommandAckReportType_finalize_w_params(
    UMAA_MM_ObjectiveExecutionControl_ObjectiveExecutionCommandAckReportType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_MM_ObjectiveExecutionControl_ObjectiveExecutionCommandAckReportType_finalize_optional_members(
    UMAA_MM_ObjectiveExecutionControl_ObjectiveExecutionCommandAckReportType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_MM_ObjectiveExecutionControl_ObjectiveExecutionCommandAckReportType_copy(
    UMAA_MM_ObjectiveExecutionControl_ObjectiveExecutionCommandAckReportType* dst,
    const UMAA_MM_ObjectiveExecutionControl_ObjectiveExecutionCommandAckReportType* src);

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
        struct type_code< UMAA_MM_ObjectiveExecutionControl_ObjectiveExecutionCommandAckReportType> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* ObjectiveExecutionCommandAckReportType */

