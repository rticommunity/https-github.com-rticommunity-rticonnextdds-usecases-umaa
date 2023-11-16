

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from LightSpecsReportType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef LightSpecsReportType_1091443327_h
#define LightSpecsReportType_1091443327_h

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

static const DDS_Char * const UMAA_EO_LightSpecs_LightSpecsReport_TOPIC= "UMAA::EO::LightSpecs::LightSpecsReport";

extern "C" {

    extern const char *UMAA_EO_LightSpecs_LightSpecsReportTypeTYPENAME;

}

struct UMAA_EO_LightSpecs_LightSpecsReportTypeSeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_EO_LightSpecs_LightSpecsReportTypeTypeSupport;
class UMAA_EO_LightSpecs_LightSpecsReportTypeDataWriter;
class UMAA_EO_LightSpecs_LightSpecsReportTypeDataReader;
#endif
class UMAA_EO_LightSpecs_LightSpecsReportType 
{
  public:
    typedef struct UMAA_EO_LightSpecs_LightSpecsReportTypeSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_EO_LightSpecs_LightSpecsReportTypeTypeSupport TypeSupport;
    typedef UMAA_EO_LightSpecs_LightSpecsReportTypeDataWriter DataWriter;
    typedef UMAA_EO_LightSpecs_LightSpecsReportTypeDataReader DataReader;
    #endif

    DDS_Boolean   allroundLight ;
    DDS_Boolean   flashingLight ;
    DDS_Boolean   mastheadLight ;
    DDS_Boolean   portSideLight ;
    DDS_Boolean   starboardSideLight ;
    DDS_Boolean   sternLight ;
    DDS_Boolean   towingLight ;
    UMAA_Common_Measurement_NumericGUID   source ;
    UMAA_Common_Measurement_DateTime   timeStamp ;

};
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode * UMAA_EO_LightSpecs_LightSpecsReportType_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_EO_LightSpecs_LightSpecsReportType_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_EO_LightSpecs_LightSpecsReportType_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_EO_LightSpecs_LightSpecsReportType_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_EO_LightSpecs_LightSpecsReportTypeSeq, UMAA_EO_LightSpecs_LightSpecsReportType);

NDDSUSERDllExport
RTIBool UMAA_EO_LightSpecs_LightSpecsReportType_initialize(
    UMAA_EO_LightSpecs_LightSpecsReportType* self);

NDDSUSERDllExport
RTIBool UMAA_EO_LightSpecs_LightSpecsReportType_initialize_ex(
    UMAA_EO_LightSpecs_LightSpecsReportType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_EO_LightSpecs_LightSpecsReportType_initialize_w_params(
    UMAA_EO_LightSpecs_LightSpecsReportType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_EO_LightSpecs_LightSpecsReportType_finalize_w_return(
    UMAA_EO_LightSpecs_LightSpecsReportType* self);

NDDSUSERDllExport
void UMAA_EO_LightSpecs_LightSpecsReportType_finalize(
    UMAA_EO_LightSpecs_LightSpecsReportType* self);

NDDSUSERDllExport
void UMAA_EO_LightSpecs_LightSpecsReportType_finalize_ex(
    UMAA_EO_LightSpecs_LightSpecsReportType* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_EO_LightSpecs_LightSpecsReportType_finalize_w_params(
    UMAA_EO_LightSpecs_LightSpecsReportType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_EO_LightSpecs_LightSpecsReportType_finalize_optional_members(
    UMAA_EO_LightSpecs_LightSpecsReportType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_EO_LightSpecs_LightSpecsReportType_copy(
    UMAA_EO_LightSpecs_LightSpecsReportType* dst,
    const UMAA_EO_LightSpecs_LightSpecsReportType* src);

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
        struct type_code< UMAA_EO_LightSpecs_LightSpecsReportType> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* LightSpecsReportType */

