

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from BallastTankCommandReportType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef BallastTankCommandReportType_1415146465_h
#define BallastTankCommandReportType_1415146465_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#include "rti/xcdr/Interpreter.hpp"
#else
#include "ndds_standalone_type.h"
#endif

#include "UMAA/Common/Measurement/Measurements.h"
#include "UMAA/EO/BallastTank/BallastFillType.h"

static const DDS_Char * const UMAA_EO_BallastTank_BallastTankCommandReport_TOPIC= "UMAA::EO::BallastTank::BallastTankCommandReport";

extern "C" {

    extern const char *UMAA_EO_BallastTank_BallastTankCommandReportTypeTYPENAME;

}

struct UMAA_EO_BallastTank_BallastTankCommandReportTypeSeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_EO_BallastTank_BallastTankCommandReportTypeTypeSupport;
class UMAA_EO_BallastTank_BallastTankCommandReportTypeDataWriter;
class UMAA_EO_BallastTank_BallastTankCommandReportTypeDataReader;
#endif
class UMAA_EO_BallastTank_BallastTankCommandReportType 
{
  public:
    typedef struct UMAA_EO_BallastTank_BallastTankCommandReportTypeSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_EO_BallastTank_BallastTankCommandReportTypeTypeSupport TypeSupport;
    typedef UMAA_EO_BallastTank_BallastTankCommandReportTypeDataWriter DataWriter;
    typedef UMAA_EO_BallastTank_BallastTankCommandReportTypeDataReader DataReader;
    #endif

    UMAA_EO_BallastTank_BallastFillType   ballastFill ;
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
NDDSUSERDllExport DDS_TypeCode * UMAA_EO_BallastTank_BallastTankCommandReportType_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_EO_BallastTank_BallastTankCommandReportType_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_EO_BallastTank_BallastTankCommandReportType_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_EO_BallastTank_BallastTankCommandReportType_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_EO_BallastTank_BallastTankCommandReportTypeSeq, UMAA_EO_BallastTank_BallastTankCommandReportType);

NDDSUSERDllExport
RTIBool UMAA_EO_BallastTank_BallastTankCommandReportType_initialize(
    UMAA_EO_BallastTank_BallastTankCommandReportType* self);

NDDSUSERDllExport
RTIBool UMAA_EO_BallastTank_BallastTankCommandReportType_initialize_ex(
    UMAA_EO_BallastTank_BallastTankCommandReportType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_EO_BallastTank_BallastTankCommandReportType_initialize_w_params(
    UMAA_EO_BallastTank_BallastTankCommandReportType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_EO_BallastTank_BallastTankCommandReportType_finalize_w_return(
    UMAA_EO_BallastTank_BallastTankCommandReportType* self);

NDDSUSERDllExport
void UMAA_EO_BallastTank_BallastTankCommandReportType_finalize(
    UMAA_EO_BallastTank_BallastTankCommandReportType* self);

NDDSUSERDllExport
void UMAA_EO_BallastTank_BallastTankCommandReportType_finalize_ex(
    UMAA_EO_BallastTank_BallastTankCommandReportType* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_EO_BallastTank_BallastTankCommandReportType_finalize_w_params(
    UMAA_EO_BallastTank_BallastTankCommandReportType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_EO_BallastTank_BallastTankCommandReportType_finalize_optional_members(
    UMAA_EO_BallastTank_BallastTankCommandReportType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_EO_BallastTank_BallastTankCommandReportType_copy(
    UMAA_EO_BallastTank_BallastTankCommandReportType* dst,
    const UMAA_EO_BallastTank_BallastTankCommandReportType* src);

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
        struct type_code< UMAA_EO_BallastTank_BallastTankCommandReportType> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* BallastTankCommandReportType */

