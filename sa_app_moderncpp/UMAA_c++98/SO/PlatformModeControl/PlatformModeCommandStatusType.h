

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from PlatformModeCommandStatusType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef PlatformModeCommandStatusType_1455169261_h
#define PlatformModeCommandStatusType_1455169261_h

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

static const DDS_Char * const UMAA_SO_PlatformModeControl_PlatformModeCommandStatus_TOPIC= "UMAA::SO::PlatformModeControl::PlatformModeCommandStatus";

extern "C" {

    extern const char *UMAA_SO_PlatformModeControl_PlatformModeCommandStatusTypeTYPENAME;

}

struct UMAA_SO_PlatformModeControl_PlatformModeCommandStatusTypeSeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_SO_PlatformModeControl_PlatformModeCommandStatusTypeTypeSupport;
class UMAA_SO_PlatformModeControl_PlatformModeCommandStatusTypeDataWriter;
class UMAA_SO_PlatformModeControl_PlatformModeCommandStatusTypeDataReader;
#endif
class UMAA_SO_PlatformModeControl_PlatformModeCommandStatusType 
{
  public:
    typedef struct UMAA_SO_PlatformModeControl_PlatformModeCommandStatusTypeSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_SO_PlatformModeControl_PlatformModeCommandStatusTypeTypeSupport TypeSupport;
    typedef UMAA_SO_PlatformModeControl_PlatformModeCommandStatusTypeDataWriter DataWriter;
    typedef UMAA_SO_PlatformModeControl_PlatformModeCommandStatusTypeDataReader DataReader;
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
NDDSUSERDllExport DDS_TypeCode * UMAA_SO_PlatformModeControl_PlatformModeCommandStatusType_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_SO_PlatformModeControl_PlatformModeCommandStatusType_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_SO_PlatformModeControl_PlatformModeCommandStatusType_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_SO_PlatformModeControl_PlatformModeCommandStatusType_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_SO_PlatformModeControl_PlatformModeCommandStatusTypeSeq, UMAA_SO_PlatformModeControl_PlatformModeCommandStatusType);

NDDSUSERDllExport
RTIBool UMAA_SO_PlatformModeControl_PlatformModeCommandStatusType_initialize(
    UMAA_SO_PlatformModeControl_PlatformModeCommandStatusType* self);

NDDSUSERDllExport
RTIBool UMAA_SO_PlatformModeControl_PlatformModeCommandStatusType_initialize_ex(
    UMAA_SO_PlatformModeControl_PlatformModeCommandStatusType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_SO_PlatformModeControl_PlatformModeCommandStatusType_initialize_w_params(
    UMAA_SO_PlatformModeControl_PlatformModeCommandStatusType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_SO_PlatformModeControl_PlatformModeCommandStatusType_finalize_w_return(
    UMAA_SO_PlatformModeControl_PlatformModeCommandStatusType* self);

NDDSUSERDllExport
void UMAA_SO_PlatformModeControl_PlatformModeCommandStatusType_finalize(
    UMAA_SO_PlatformModeControl_PlatformModeCommandStatusType* self);

NDDSUSERDllExport
void UMAA_SO_PlatformModeControl_PlatformModeCommandStatusType_finalize_ex(
    UMAA_SO_PlatformModeControl_PlatformModeCommandStatusType* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_SO_PlatformModeControl_PlatformModeCommandStatusType_finalize_w_params(
    UMAA_SO_PlatformModeControl_PlatformModeCommandStatusType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_SO_PlatformModeControl_PlatformModeCommandStatusType_finalize_optional_members(
    UMAA_SO_PlatformModeControl_PlatformModeCommandStatusType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_SO_PlatformModeControl_PlatformModeCommandStatusType_copy(
    UMAA_SO_PlatformModeControl_PlatformModeCommandStatusType* dst,
    const UMAA_SO_PlatformModeControl_PlatformModeCommandStatusType* src);

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
        struct type_code< UMAA_SO_PlatformModeControl_PlatformModeCommandStatusType> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* PlatformModeCommandStatusType */

