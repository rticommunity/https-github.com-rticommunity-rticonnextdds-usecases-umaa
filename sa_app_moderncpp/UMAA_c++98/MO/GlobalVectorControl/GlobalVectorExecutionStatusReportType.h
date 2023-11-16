

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from GlobalVectorExecutionStatusReportType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef GlobalVectorExecutionStatusReportType_707232337_h
#define GlobalVectorExecutionStatusReportType_707232337_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#include "rti/xcdr/Interpreter.hpp"
#else
#include "ndds_standalone_type.h"
#endif

#include "UMAA/Common/Enumeration/EnumerationSets.h"
#include "UMAA/Common/Measurement/Measurements.h"

static const DDS_Char * const UMAA_MO_GlobalVectorControl_GlobalVectorExecutionStatusReport_TOPIC= "UMAA::MO::GlobalVectorControl::GlobalVectorExecutionStatusReport";

extern "C" {

    extern const char *UMAA_MO_GlobalVectorControl_GlobalVectorExecutionStatusReportTypeTYPENAME;

}

struct UMAA_MO_GlobalVectorControl_GlobalVectorExecutionStatusReportTypeSeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_MO_GlobalVectorControl_GlobalVectorExecutionStatusReportTypeTypeSupport;
class UMAA_MO_GlobalVectorControl_GlobalVectorExecutionStatusReportTypeDataWriter;
class UMAA_MO_GlobalVectorControl_GlobalVectorExecutionStatusReportTypeDataReader;
#endif
class UMAA_MO_GlobalVectorControl_GlobalVectorExecutionStatusReportType 
{
  public:
    typedef struct UMAA_MO_GlobalVectorControl_GlobalVectorExecutionStatusReportTypeSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_MO_GlobalVectorControl_GlobalVectorExecutionStatusReportTypeTypeSupport TypeSupport;
    typedef UMAA_MO_GlobalVectorControl_GlobalVectorExecutionStatusReportTypeDataWriter DataWriter;
    typedef UMAA_MO_GlobalVectorControl_GlobalVectorExecutionStatusReportTypeDataReader DataReader;
    #endif

    DDS_Boolean   attitudeAchieved ;
    DDS_Boolean   elevationAchieved ;
    DDS_Boolean   speedAchieved ;
    UMAA_Common_Measurement_NumericGUID   source ;
    UMAA_Common_Measurement_NumericGUID   sessionID ;

};
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode * UMAA_MO_GlobalVectorControl_GlobalVectorExecutionStatusReportType_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_MO_GlobalVectorControl_GlobalVectorExecutionStatusReportType_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_MO_GlobalVectorControl_GlobalVectorExecutionStatusReportType_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_MO_GlobalVectorControl_GlobalVectorExecutionStatusReportType_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_MO_GlobalVectorControl_GlobalVectorExecutionStatusReportTypeSeq, UMAA_MO_GlobalVectorControl_GlobalVectorExecutionStatusReportType);

NDDSUSERDllExport
RTIBool UMAA_MO_GlobalVectorControl_GlobalVectorExecutionStatusReportType_initialize(
    UMAA_MO_GlobalVectorControl_GlobalVectorExecutionStatusReportType* self);

NDDSUSERDllExport
RTIBool UMAA_MO_GlobalVectorControl_GlobalVectorExecutionStatusReportType_initialize_ex(
    UMAA_MO_GlobalVectorControl_GlobalVectorExecutionStatusReportType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_MO_GlobalVectorControl_GlobalVectorExecutionStatusReportType_initialize_w_params(
    UMAA_MO_GlobalVectorControl_GlobalVectorExecutionStatusReportType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_MO_GlobalVectorControl_GlobalVectorExecutionStatusReportType_finalize_w_return(
    UMAA_MO_GlobalVectorControl_GlobalVectorExecutionStatusReportType* self);

NDDSUSERDllExport
void UMAA_MO_GlobalVectorControl_GlobalVectorExecutionStatusReportType_finalize(
    UMAA_MO_GlobalVectorControl_GlobalVectorExecutionStatusReportType* self);

NDDSUSERDllExport
void UMAA_MO_GlobalVectorControl_GlobalVectorExecutionStatusReportType_finalize_ex(
    UMAA_MO_GlobalVectorControl_GlobalVectorExecutionStatusReportType* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_MO_GlobalVectorControl_GlobalVectorExecutionStatusReportType_finalize_w_params(
    UMAA_MO_GlobalVectorControl_GlobalVectorExecutionStatusReportType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_MO_GlobalVectorControl_GlobalVectorExecutionStatusReportType_finalize_optional_members(
    UMAA_MO_GlobalVectorControl_GlobalVectorExecutionStatusReportType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_MO_GlobalVectorControl_GlobalVectorExecutionStatusReportType_copy(
    UMAA_MO_GlobalVectorControl_GlobalVectorExecutionStatusReportType* dst,
    const UMAA_MO_GlobalVectorControl_GlobalVectorExecutionStatusReportType* src);

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
        struct type_code< UMAA_MO_GlobalVectorControl_GlobalVectorExecutionStatusReportType> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* GlobalVectorExecutionStatusReportType */

