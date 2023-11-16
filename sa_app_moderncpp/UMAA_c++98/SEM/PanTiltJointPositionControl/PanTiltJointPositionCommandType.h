

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from PanTiltJointPositionCommandType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef PanTiltJointPositionCommandType_794783564_h
#define PanTiltJointPositionCommandType_794783564_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#include "rti/xcdr/Interpreter.hpp"
#else
#include "ndds_standalone_type.h"
#endif

#include "UMAA/Common/Measurement/Measurements.h"

static const DDS_Char * const UMAA_SEM_PanTiltJointPositionControl_PanTiltJointPositionCommand_TOPIC= "UMAA::SEM::PanTiltJointPositionControl::PanTiltJointPositionCommand";

extern "C" {

    extern const char *UMAA_SEM_PanTiltJointPositionControl_PanTiltJointPositionCommandTypeTYPENAME;

}

struct UMAA_SEM_PanTiltJointPositionControl_PanTiltJointPositionCommandTypeSeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_SEM_PanTiltJointPositionControl_PanTiltJointPositionCommandTypeTypeSupport;
class UMAA_SEM_PanTiltJointPositionControl_PanTiltJointPositionCommandTypeDataWriter;
class UMAA_SEM_PanTiltJointPositionControl_PanTiltJointPositionCommandTypeDataReader;
#endif
class UMAA_SEM_PanTiltJointPositionControl_PanTiltJointPositionCommandType 
{
  public:
    typedef struct UMAA_SEM_PanTiltJointPositionControl_PanTiltJointPositionCommandTypeSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_SEM_PanTiltJointPositionControl_PanTiltJointPositionCommandTypeTypeSupport TypeSupport;
    typedef UMAA_SEM_PanTiltJointPositionControl_PanTiltJointPositionCommandTypeDataWriter DataWriter;
    typedef UMAA_SEM_PanTiltJointPositionControl_PanTiltJointPositionCommandTypeDataReader DataReader;
    #endif

    DDS_Double   pan ;
    DDS_Double   tilt ;
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
NDDSUSERDllExport DDS_TypeCode * UMAA_SEM_PanTiltJointPositionControl_PanTiltJointPositionCommandType_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_SEM_PanTiltJointPositionControl_PanTiltJointPositionCommandType_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_SEM_PanTiltJointPositionControl_PanTiltJointPositionCommandType_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_SEM_PanTiltJointPositionControl_PanTiltJointPositionCommandType_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_SEM_PanTiltJointPositionControl_PanTiltJointPositionCommandTypeSeq, UMAA_SEM_PanTiltJointPositionControl_PanTiltJointPositionCommandType);

NDDSUSERDllExport
RTIBool UMAA_SEM_PanTiltJointPositionControl_PanTiltJointPositionCommandType_initialize(
    UMAA_SEM_PanTiltJointPositionControl_PanTiltJointPositionCommandType* self);

NDDSUSERDllExport
RTIBool UMAA_SEM_PanTiltJointPositionControl_PanTiltJointPositionCommandType_initialize_ex(
    UMAA_SEM_PanTiltJointPositionControl_PanTiltJointPositionCommandType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_SEM_PanTiltJointPositionControl_PanTiltJointPositionCommandType_initialize_w_params(
    UMAA_SEM_PanTiltJointPositionControl_PanTiltJointPositionCommandType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_SEM_PanTiltJointPositionControl_PanTiltJointPositionCommandType_finalize_w_return(
    UMAA_SEM_PanTiltJointPositionControl_PanTiltJointPositionCommandType* self);

NDDSUSERDllExport
void UMAA_SEM_PanTiltJointPositionControl_PanTiltJointPositionCommandType_finalize(
    UMAA_SEM_PanTiltJointPositionControl_PanTiltJointPositionCommandType* self);

NDDSUSERDllExport
void UMAA_SEM_PanTiltJointPositionControl_PanTiltJointPositionCommandType_finalize_ex(
    UMAA_SEM_PanTiltJointPositionControl_PanTiltJointPositionCommandType* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_SEM_PanTiltJointPositionControl_PanTiltJointPositionCommandType_finalize_w_params(
    UMAA_SEM_PanTiltJointPositionControl_PanTiltJointPositionCommandType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_SEM_PanTiltJointPositionControl_PanTiltJointPositionCommandType_finalize_optional_members(
    UMAA_SEM_PanTiltJointPositionControl_PanTiltJointPositionCommandType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_SEM_PanTiltJointPositionControl_PanTiltJointPositionCommandType_copy(
    UMAA_SEM_PanTiltJointPositionControl_PanTiltJointPositionCommandType* dst,
    const UMAA_SEM_PanTiltJointPositionControl_PanTiltJointPositionCommandType* src);

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
        struct type_code< UMAA_SEM_PanTiltJointPositionControl_PanTiltJointPositionCommandType> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* PanTiltJointPositionCommandType */

