

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from BallastTankCommandStatusType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef BallastTankCommandStatusType_309642512_h
#define BallastTankCommandStatusType_309642512_h

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

static const DDS_Char * const UMAA_EO_BallastTank_BallastTankCommandStatus_TOPIC= "UMAA::EO::BallastTank::BallastTankCommandStatus";

extern "C" {

    extern const char *UMAA_EO_BallastTank_BallastTankCommandStatusTypeTYPENAME;

}

struct UMAA_EO_BallastTank_BallastTankCommandStatusTypeSeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_EO_BallastTank_BallastTankCommandStatusTypeTypeSupport;
class UMAA_EO_BallastTank_BallastTankCommandStatusTypeDataWriter;
class UMAA_EO_BallastTank_BallastTankCommandStatusTypeDataReader;
#endif
class UMAA_EO_BallastTank_BallastTankCommandStatusType 
{
  public:
    typedef struct UMAA_EO_BallastTank_BallastTankCommandStatusTypeSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_EO_BallastTank_BallastTankCommandStatusTypeTypeSupport TypeSupport;
    typedef UMAA_EO_BallastTank_BallastTankCommandStatusTypeDataWriter DataWriter;
    typedef UMAA_EO_BallastTank_BallastTankCommandStatusTypeDataReader DataReader;
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
NDDSUSERDllExport DDS_TypeCode * UMAA_EO_BallastTank_BallastTankCommandStatusType_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_EO_BallastTank_BallastTankCommandStatusType_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_EO_BallastTank_BallastTankCommandStatusType_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_EO_BallastTank_BallastTankCommandStatusType_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_EO_BallastTank_BallastTankCommandStatusTypeSeq, UMAA_EO_BallastTank_BallastTankCommandStatusType);

NDDSUSERDllExport
RTIBool UMAA_EO_BallastTank_BallastTankCommandStatusType_initialize(
    UMAA_EO_BallastTank_BallastTankCommandStatusType* self);

NDDSUSERDllExport
RTIBool UMAA_EO_BallastTank_BallastTankCommandStatusType_initialize_ex(
    UMAA_EO_BallastTank_BallastTankCommandStatusType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_EO_BallastTank_BallastTankCommandStatusType_initialize_w_params(
    UMAA_EO_BallastTank_BallastTankCommandStatusType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_EO_BallastTank_BallastTankCommandStatusType_finalize_w_return(
    UMAA_EO_BallastTank_BallastTankCommandStatusType* self);

NDDSUSERDllExport
void UMAA_EO_BallastTank_BallastTankCommandStatusType_finalize(
    UMAA_EO_BallastTank_BallastTankCommandStatusType* self);

NDDSUSERDllExport
void UMAA_EO_BallastTank_BallastTankCommandStatusType_finalize_ex(
    UMAA_EO_BallastTank_BallastTankCommandStatusType* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_EO_BallastTank_BallastTankCommandStatusType_finalize_w_params(
    UMAA_EO_BallastTank_BallastTankCommandStatusType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_EO_BallastTank_BallastTankCommandStatusType_finalize_optional_members(
    UMAA_EO_BallastTank_BallastTankCommandStatusType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_EO_BallastTank_BallastTankCommandStatusType_copy(
    UMAA_EO_BallastTank_BallastTankCommandStatusType* dst,
    const UMAA_EO_BallastTank_BallastTankCommandStatusType* src);

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
        struct type_code< UMAA_EO_BallastTank_BallastTankCommandStatusType> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* BallastTankCommandStatusType */

