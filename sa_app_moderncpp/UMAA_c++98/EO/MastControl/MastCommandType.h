

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from MastCommandType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef MastCommandType_979157273_h
#define MastCommandType_979157273_h

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

static const DDS_Char * const UMAA_EO_MastControl_MastCommand_TOPIC= "UMAA::EO::MastControl::MastCommand";

extern "C" {

    extern const char *UMAA_EO_MastControl_MastCommandTypeTYPENAME;

}

struct UMAA_EO_MastControl_MastCommandTypeSeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_EO_MastControl_MastCommandTypeTypeSupport;
class UMAA_EO_MastControl_MastCommandTypeDataWriter;
class UMAA_EO_MastControl_MastCommandTypeDataReader;
#endif
class UMAA_EO_MastControl_MastCommandType 
{
  public:
    typedef struct UMAA_EO_MastControl_MastCommandTypeSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_EO_MastControl_MastCommandTypeTypeSupport TypeSupport;
    typedef UMAA_EO_MastControl_MastCommandTypeDataWriter DataWriter;
    typedef UMAA_EO_MastControl_MastCommandTypeDataReader DataReader;
    #endif

    UMAA_Common_MaritimeEnumeration_MastActionEnumType_MastActionEnumType   action ;
    UMAA_Common_Measurement_NumericGUID   source ;
    UMAA_Common_Measurement_NumericGUID   destination ;
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
NDDSUSERDllExport DDS_TypeCode * UMAA_EO_MastControl_MastCommandType_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_EO_MastControl_MastCommandType_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_EO_MastControl_MastCommandType_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_EO_MastControl_MastCommandType_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_EO_MastControl_MastCommandTypeSeq, UMAA_EO_MastControl_MastCommandType);

NDDSUSERDllExport
RTIBool UMAA_EO_MastControl_MastCommandType_initialize(
    UMAA_EO_MastControl_MastCommandType* self);

NDDSUSERDllExport
RTIBool UMAA_EO_MastControl_MastCommandType_initialize_ex(
    UMAA_EO_MastControl_MastCommandType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_EO_MastControl_MastCommandType_initialize_w_params(
    UMAA_EO_MastControl_MastCommandType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_EO_MastControl_MastCommandType_finalize_w_return(
    UMAA_EO_MastControl_MastCommandType* self);

NDDSUSERDllExport
void UMAA_EO_MastControl_MastCommandType_finalize(
    UMAA_EO_MastControl_MastCommandType* self);

NDDSUSERDllExport
void UMAA_EO_MastControl_MastCommandType_finalize_ex(
    UMAA_EO_MastControl_MastCommandType* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_EO_MastControl_MastCommandType_finalize_w_params(
    UMAA_EO_MastControl_MastCommandType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_EO_MastControl_MastCommandType_finalize_optional_members(
    UMAA_EO_MastControl_MastCommandType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_EO_MastControl_MastCommandType_copy(
    UMAA_EO_MastControl_MastCommandType* dst,
    const UMAA_EO_MastControl_MastCommandType* src);

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
        struct type_code< UMAA_EO_MastControl_MastCommandType> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* MastCommandType */

