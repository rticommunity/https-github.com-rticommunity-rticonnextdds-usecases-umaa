

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from GlobalDriftCommandType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef GlobalDriftCommandType_1016333982_h
#define GlobalDriftCommandType_1016333982_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#include "rti/xcdr/Interpreter.hpp"
#else
#include "ndds_standalone_type.h"
#endif

#include "UMAA/Common/Measurement/ElevationType.h"
#include "UMAA/Common/Measurement/Measurements.h"
#include "UMAA/Common/Measurement/Position2D.h"
#include "UMAA/Common/VariableSpeedControl/VariableSpeedControlType.h"

static const DDS_Char * const UMAA_MO_GlobalDriftControl_GlobalDriftCommand_TOPIC= "UMAA::MO::GlobalDriftControl::GlobalDriftCommand";

extern "C" {

    extern const char *UMAA_MO_GlobalDriftControl_GlobalDriftCommandTypeTYPENAME;

}

struct UMAA_MO_GlobalDriftControl_GlobalDriftCommandTypeSeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_MO_GlobalDriftControl_GlobalDriftCommandTypeTypeSupport;
class UMAA_MO_GlobalDriftControl_GlobalDriftCommandTypeDataWriter;
class UMAA_MO_GlobalDriftControl_GlobalDriftCommandTypeDataReader;
#endif
class UMAA_MO_GlobalDriftControl_GlobalDriftCommandType 
{
  public:
    typedef struct UMAA_MO_GlobalDriftControl_GlobalDriftCommandTypeSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_MO_GlobalDriftControl_GlobalDriftCommandTypeTypeSupport TypeSupport;
    typedef UMAA_MO_GlobalDriftControl_GlobalDriftCommandTypeDataWriter DataWriter;
    typedef UMAA_MO_GlobalDriftControl_GlobalDriftCommandTypeDataReader DataReader;
    #endif

    DDS_Double   driftTolerance ;
    UMAA_Common_Measurement_ElevationType   elevation ;
    DDS_Double   elevationTolerance ;
    UMAA_Common_Measurement_DateTime   * endTime ;
    UMAA_Common_Measurement_Position2D   * position ;
    DDS_Double   positionTolerance ;
    UMAA_Common_VariableSpeedControl_VariableSpeedControlType   speed ;
    DDS_Double   speedTolerance ;
    UMAA_Common_Measurement_ElevationType   transitElevation ;
    DDS_Double   transitElevationTolerance ;
    UMAA_Common_VariableSpeedControl_VariableSpeedControlType   transitSpeed ;
    DDS_Double   transitSpeedTolerance ;
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
NDDSUSERDllExport DDS_TypeCode * UMAA_MO_GlobalDriftControl_GlobalDriftCommandType_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_MO_GlobalDriftControl_GlobalDriftCommandType_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_MO_GlobalDriftControl_GlobalDriftCommandType_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_MO_GlobalDriftControl_GlobalDriftCommandType_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_MO_GlobalDriftControl_GlobalDriftCommandTypeSeq, UMAA_MO_GlobalDriftControl_GlobalDriftCommandType);

NDDSUSERDllExport
RTIBool UMAA_MO_GlobalDriftControl_GlobalDriftCommandType_initialize(
    UMAA_MO_GlobalDriftControl_GlobalDriftCommandType* self);

NDDSUSERDllExport
RTIBool UMAA_MO_GlobalDriftControl_GlobalDriftCommandType_initialize_ex(
    UMAA_MO_GlobalDriftControl_GlobalDriftCommandType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_MO_GlobalDriftControl_GlobalDriftCommandType_initialize_w_params(
    UMAA_MO_GlobalDriftControl_GlobalDriftCommandType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_MO_GlobalDriftControl_GlobalDriftCommandType_finalize_w_return(
    UMAA_MO_GlobalDriftControl_GlobalDriftCommandType* self);

NDDSUSERDllExport
void UMAA_MO_GlobalDriftControl_GlobalDriftCommandType_finalize(
    UMAA_MO_GlobalDriftControl_GlobalDriftCommandType* self);

NDDSUSERDllExport
void UMAA_MO_GlobalDriftControl_GlobalDriftCommandType_finalize_ex(
    UMAA_MO_GlobalDriftControl_GlobalDriftCommandType* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_MO_GlobalDriftControl_GlobalDriftCommandType_finalize_w_params(
    UMAA_MO_GlobalDriftControl_GlobalDriftCommandType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_MO_GlobalDriftControl_GlobalDriftCommandType_finalize_optional_members(
    UMAA_MO_GlobalDriftControl_GlobalDriftCommandType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_MO_GlobalDriftControl_GlobalDriftCommandType_copy(
    UMAA_MO_GlobalDriftControl_GlobalDriftCommandType* dst,
    const UMAA_MO_GlobalDriftControl_GlobalDriftCommandType* src);

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
        struct type_code< UMAA_MO_GlobalDriftControl_GlobalDriftCommandType> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* GlobalDriftCommandType */

