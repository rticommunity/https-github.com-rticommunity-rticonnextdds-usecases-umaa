

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from GPSFixCommandStatusType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef GPSFixCommandStatusType_471852354_h
#define GPSFixCommandStatusType_471852354_h

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

static const DDS_Char * const UMAA_SEM_GPSFixControl_GPSFixCommandStatus_TOPIC= "UMAA::SEM::GPSFixControl::GPSFixCommandStatus";

extern "C" {

    extern const char *UMAA_SEM_GPSFixControl_GPSFixCommandStatusTypeTYPENAME;

}

struct UMAA_SEM_GPSFixControl_GPSFixCommandStatusTypeSeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_SEM_GPSFixControl_GPSFixCommandStatusTypeTypeSupport;
class UMAA_SEM_GPSFixControl_GPSFixCommandStatusTypeDataWriter;
class UMAA_SEM_GPSFixControl_GPSFixCommandStatusTypeDataReader;
#endif
class UMAA_SEM_GPSFixControl_GPSFixCommandStatusType 
{
  public:
    typedef struct UMAA_SEM_GPSFixControl_GPSFixCommandStatusTypeSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_SEM_GPSFixControl_GPSFixCommandStatusTypeTypeSupport TypeSupport;
    typedef UMAA_SEM_GPSFixControl_GPSFixCommandStatusTypeDataWriter DataWriter;
    typedef UMAA_SEM_GPSFixControl_GPSFixCommandStatusTypeDataReader DataReader;
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
NDDSUSERDllExport DDS_TypeCode * UMAA_SEM_GPSFixControl_GPSFixCommandStatusType_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_SEM_GPSFixControl_GPSFixCommandStatusType_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_SEM_GPSFixControl_GPSFixCommandStatusType_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_SEM_GPSFixControl_GPSFixCommandStatusType_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_SEM_GPSFixControl_GPSFixCommandStatusTypeSeq, UMAA_SEM_GPSFixControl_GPSFixCommandStatusType);

NDDSUSERDllExport
RTIBool UMAA_SEM_GPSFixControl_GPSFixCommandStatusType_initialize(
    UMAA_SEM_GPSFixControl_GPSFixCommandStatusType* self);

NDDSUSERDllExport
RTIBool UMAA_SEM_GPSFixControl_GPSFixCommandStatusType_initialize_ex(
    UMAA_SEM_GPSFixControl_GPSFixCommandStatusType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_SEM_GPSFixControl_GPSFixCommandStatusType_initialize_w_params(
    UMAA_SEM_GPSFixControl_GPSFixCommandStatusType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_SEM_GPSFixControl_GPSFixCommandStatusType_finalize_w_return(
    UMAA_SEM_GPSFixControl_GPSFixCommandStatusType* self);

NDDSUSERDllExport
void UMAA_SEM_GPSFixControl_GPSFixCommandStatusType_finalize(
    UMAA_SEM_GPSFixControl_GPSFixCommandStatusType* self);

NDDSUSERDllExport
void UMAA_SEM_GPSFixControl_GPSFixCommandStatusType_finalize_ex(
    UMAA_SEM_GPSFixControl_GPSFixCommandStatusType* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_SEM_GPSFixControl_GPSFixCommandStatusType_finalize_w_params(
    UMAA_SEM_GPSFixControl_GPSFixCommandStatusType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_SEM_GPSFixControl_GPSFixCommandStatusType_finalize_optional_members(
    UMAA_SEM_GPSFixControl_GPSFixCommandStatusType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_SEM_GPSFixControl_GPSFixCommandStatusType_copy(
    UMAA_SEM_GPSFixControl_GPSFixCommandStatusType* dst,
    const UMAA_SEM_GPSFixControl_GPSFixCommandStatusType* src);

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
        struct type_code< UMAA_SEM_GPSFixControl_GPSFixCommandStatusType> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* GPSFixCommandStatusType */

