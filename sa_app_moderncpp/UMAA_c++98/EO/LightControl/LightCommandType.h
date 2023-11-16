

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from LightCommandType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef LightCommandType_1591096658_h
#define LightCommandType_1591096658_h

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

static const DDS_Char * const UMAA_EO_LightControl_LightCommand_TOPIC= "UMAA::EO::LightControl::LightCommand";

extern "C" {

    extern const char *UMAA_EO_LightControl_LightCommandTypeTYPENAME;

}

struct UMAA_EO_LightControl_LightCommandTypeSeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_EO_LightControl_LightCommandTypeTypeSupport;
class UMAA_EO_LightControl_LightCommandTypeDataWriter;
class UMAA_EO_LightControl_LightCommandTypeDataReader;
#endif
class UMAA_EO_LightControl_LightCommandType 
{
  public:
    typedef struct UMAA_EO_LightControl_LightCommandTypeSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_EO_LightControl_LightCommandTypeTypeSupport TypeSupport;
    typedef UMAA_EO_LightControl_LightCommandTypeDataWriter DataWriter;
    typedef UMAA_EO_LightControl_LightCommandTypeDataReader DataReader;
    #endif

    DDS_Boolean   allroundLight ;
    DDS_Boolean   flashingLight ;
    DDS_Boolean   mastheadLight ;
    DDS_Boolean   portSideLight ;
    DDS_Boolean   starboardSideLight ;
    DDS_Boolean   sternLight ;
    DDS_Boolean   towingLight ;
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
NDDSUSERDllExport DDS_TypeCode * UMAA_EO_LightControl_LightCommandType_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_EO_LightControl_LightCommandType_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_EO_LightControl_LightCommandType_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_EO_LightControl_LightCommandType_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_EO_LightControl_LightCommandTypeSeq, UMAA_EO_LightControl_LightCommandType);

NDDSUSERDllExport
RTIBool UMAA_EO_LightControl_LightCommandType_initialize(
    UMAA_EO_LightControl_LightCommandType* self);

NDDSUSERDllExport
RTIBool UMAA_EO_LightControl_LightCommandType_initialize_ex(
    UMAA_EO_LightControl_LightCommandType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_EO_LightControl_LightCommandType_initialize_w_params(
    UMAA_EO_LightControl_LightCommandType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_EO_LightControl_LightCommandType_finalize_w_return(
    UMAA_EO_LightControl_LightCommandType* self);

NDDSUSERDllExport
void UMAA_EO_LightControl_LightCommandType_finalize(
    UMAA_EO_LightControl_LightCommandType* self);

NDDSUSERDllExport
void UMAA_EO_LightControl_LightCommandType_finalize_ex(
    UMAA_EO_LightControl_LightCommandType* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_EO_LightControl_LightCommandType_finalize_w_params(
    UMAA_EO_LightControl_LightCommandType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_EO_LightControl_LightCommandType_finalize_optional_members(
    UMAA_EO_LightControl_LightCommandType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_EO_LightControl_LightCommandType_copy(
    UMAA_EO_LightControl_LightCommandType* dst,
    const UMAA_EO_LightControl_LightCommandType* src);

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
        struct type_code< UMAA_EO_LightControl_LightCommandType> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* LightCommandType */

