

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from StationkeepingStationkeepType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef StationkeepingStationkeepType_797128733_h
#define StationkeepingStationkeepType_797128733_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#include "rti/xcdr/Interpreter.hpp"
#else
#include "ndds_standalone_type.h"
#endif

#include "UMAA/Common/Enumeration/EnumerationSets.h"

extern "C" {

    extern const char *UMAA_MO_StationkeepState_StationkeepingStationkeepTypeTYPENAME;

}

struct UMAA_MO_StationkeepState_StationkeepingStationkeepTypeSeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_MO_StationkeepState_StationkeepingStationkeepTypeTypeSupport;
class UMAA_MO_StationkeepState_StationkeepingStationkeepTypeDataWriter;
class UMAA_MO_StationkeepState_StationkeepingStationkeepTypeDataReader;
#endif
class UMAA_MO_StationkeepState_StationkeepingStationkeepType 
{
  public:
    typedef struct UMAA_MO_StationkeepState_StationkeepingStationkeepTypeSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_MO_StationkeepState_StationkeepingStationkeepTypeTypeSupport TypeSupport;
    typedef UMAA_MO_StationkeepState_StationkeepingStationkeepTypeDataWriter DataWriter;
    typedef UMAA_MO_StationkeepState_StationkeepingStationkeepTypeDataReader DataReader;
    #endif

    DDS_Boolean   bearingToContactAchieved ;
    DDS_Boolean   elevationAchieved ;
    DDS_Boolean   rangeAchieved ;

};
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode * UMAA_MO_StationkeepState_StationkeepingStationkeepType_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_MO_StationkeepState_StationkeepingStationkeepType_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_MO_StationkeepState_StationkeepingStationkeepType_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_MO_StationkeepState_StationkeepingStationkeepType_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_MO_StationkeepState_StationkeepingStationkeepTypeSeq, UMAA_MO_StationkeepState_StationkeepingStationkeepType);

NDDSUSERDllExport
RTIBool UMAA_MO_StationkeepState_StationkeepingStationkeepType_initialize(
    UMAA_MO_StationkeepState_StationkeepingStationkeepType* self);

NDDSUSERDllExport
RTIBool UMAA_MO_StationkeepState_StationkeepingStationkeepType_initialize_ex(
    UMAA_MO_StationkeepState_StationkeepingStationkeepType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_MO_StationkeepState_StationkeepingStationkeepType_initialize_w_params(
    UMAA_MO_StationkeepState_StationkeepingStationkeepType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_MO_StationkeepState_StationkeepingStationkeepType_finalize_w_return(
    UMAA_MO_StationkeepState_StationkeepingStationkeepType* self);

NDDSUSERDllExport
void UMAA_MO_StationkeepState_StationkeepingStationkeepType_finalize(
    UMAA_MO_StationkeepState_StationkeepingStationkeepType* self);

NDDSUSERDllExport
void UMAA_MO_StationkeepState_StationkeepingStationkeepType_finalize_ex(
    UMAA_MO_StationkeepState_StationkeepingStationkeepType* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_MO_StationkeepState_StationkeepingStationkeepType_finalize_w_params(
    UMAA_MO_StationkeepState_StationkeepingStationkeepType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_MO_StationkeepState_StationkeepingStationkeepType_finalize_optional_members(
    UMAA_MO_StationkeepState_StationkeepingStationkeepType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_MO_StationkeepState_StationkeepingStationkeepType_copy(
    UMAA_MO_StationkeepState_StationkeepingStationkeepType* dst,
    const UMAA_MO_StationkeepState_StationkeepingStationkeepType* src);

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
        struct type_code< UMAA_MO_StationkeepState_StationkeepingStationkeepType> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* StationkeepingStationkeepType */

