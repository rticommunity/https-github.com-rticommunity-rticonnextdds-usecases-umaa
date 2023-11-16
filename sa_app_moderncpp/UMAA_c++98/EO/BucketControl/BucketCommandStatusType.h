

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from BucketCommandStatusType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef BucketCommandStatusType_1370182486_h
#define BucketCommandStatusType_1370182486_h

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

static const DDS_Char * const UMAA_EO_BucketControl_BucketCommandStatus_TOPIC= "UMAA::EO::BucketControl::BucketCommandStatus";

extern "C" {

    extern const char *UMAA_EO_BucketControl_BucketCommandStatusTypeTYPENAME;

}

struct UMAA_EO_BucketControl_BucketCommandStatusTypeSeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_EO_BucketControl_BucketCommandStatusTypeTypeSupport;
class UMAA_EO_BucketControl_BucketCommandStatusTypeDataWriter;
class UMAA_EO_BucketControl_BucketCommandStatusTypeDataReader;
#endif
class UMAA_EO_BucketControl_BucketCommandStatusType 
{
  public:
    typedef struct UMAA_EO_BucketControl_BucketCommandStatusTypeSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_EO_BucketControl_BucketCommandStatusTypeTypeSupport TypeSupport;
    typedef UMAA_EO_BucketControl_BucketCommandStatusTypeDataWriter DataWriter;
    typedef UMAA_EO_BucketControl_BucketCommandStatusTypeDataReader DataReader;
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
NDDSUSERDllExport DDS_TypeCode * UMAA_EO_BucketControl_BucketCommandStatusType_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_EO_BucketControl_BucketCommandStatusType_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_EO_BucketControl_BucketCommandStatusType_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_EO_BucketControl_BucketCommandStatusType_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_EO_BucketControl_BucketCommandStatusTypeSeq, UMAA_EO_BucketControl_BucketCommandStatusType);

NDDSUSERDllExport
RTIBool UMAA_EO_BucketControl_BucketCommandStatusType_initialize(
    UMAA_EO_BucketControl_BucketCommandStatusType* self);

NDDSUSERDllExport
RTIBool UMAA_EO_BucketControl_BucketCommandStatusType_initialize_ex(
    UMAA_EO_BucketControl_BucketCommandStatusType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_EO_BucketControl_BucketCommandStatusType_initialize_w_params(
    UMAA_EO_BucketControl_BucketCommandStatusType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_EO_BucketControl_BucketCommandStatusType_finalize_w_return(
    UMAA_EO_BucketControl_BucketCommandStatusType* self);

NDDSUSERDllExport
void UMAA_EO_BucketControl_BucketCommandStatusType_finalize(
    UMAA_EO_BucketControl_BucketCommandStatusType* self);

NDDSUSERDllExport
void UMAA_EO_BucketControl_BucketCommandStatusType_finalize_ex(
    UMAA_EO_BucketControl_BucketCommandStatusType* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_EO_BucketControl_BucketCommandStatusType_finalize_w_params(
    UMAA_EO_BucketControl_BucketCommandStatusType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_EO_BucketControl_BucketCommandStatusType_finalize_optional_members(
    UMAA_EO_BucketControl_BucketCommandStatusType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_EO_BucketControl_BucketCommandStatusType_copy(
    UMAA_EO_BucketControl_BucketCommandStatusType* dst,
    const UMAA_EO_BucketControl_BucketCommandStatusType* src);

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
        struct type_code< UMAA_EO_BucketControl_BucketCommandStatusType> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* BucketCommandStatusType */

