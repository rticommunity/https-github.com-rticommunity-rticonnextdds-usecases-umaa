

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from GlobalWaypointType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef GlobalWaypointType_2035351271_h
#define GlobalWaypointType_2035351271_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#include "rti/xcdr/Interpreter.hpp"
#else
#include "ndds_standalone_type.h"
#endif

#include "UMAA/Common/Enumeration/EnumerationSets.h"
#include "UMAA/Common/Measurement/ElevationType.h"
#include "UMAA/Common/Measurement/Measurements.h"
#include "UMAA/Common/Measurement/Orientation3D_PlatformXYZ.h"
#include "UMAA/Common/Measurement/Position2D.h"
#include "UMAA/Common/VariableSpeedControl/VariableSpeedControlType.h"
#include "UMAA/Common/Measurement/Measurements.h"

extern "C" {

    extern const char *UMAA_MO_GlobalWaypointControl_GlobalWaypointTypeTYPENAME;

}

struct UMAA_MO_GlobalWaypointControl_GlobalWaypointTypeSeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_MO_GlobalWaypointControl_GlobalWaypointTypeTypeSupport;
class UMAA_MO_GlobalWaypointControl_GlobalWaypointTypeDataWriter;
class UMAA_MO_GlobalWaypointControl_GlobalWaypointTypeDataReader;
#endif
class UMAA_MO_GlobalWaypointControl_GlobalWaypointType 
{
  public:
    typedef struct UMAA_MO_GlobalWaypointControl_GlobalWaypointTypeSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_MO_GlobalWaypointControl_GlobalWaypointTypeTypeSupport TypeSupport;
    typedef UMAA_MO_GlobalWaypointControl_GlobalWaypointTypeDataWriter DataWriter;
    typedef UMAA_MO_GlobalWaypointControl_GlobalWaypointTypeDataReader DataReader;
    #endif

    UMAA_Common_Measurement_Orientation3D_PlatformXYZ   * attitude ;
    UMAA_Common_Measurement_ElevationType   elevation ;
    DDS_Boolean   maintainTrack ;
    UMAA_Common_Measurement_Position2D   position ;
    UMAA_Common_VariableSpeedControl_VariableSpeedControlType   speed ;
    DDS_Double   * trackTolerance ;
    UMAA_Common_Measurement_NumericGUID   waypointID ;
    DDS_Double   waypointTolerance ;

};
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode * UMAA_MO_GlobalWaypointControl_GlobalWaypointType_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_MO_GlobalWaypointControl_GlobalWaypointType_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_MO_GlobalWaypointControl_GlobalWaypointType_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_MO_GlobalWaypointControl_GlobalWaypointType_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_MO_GlobalWaypointControl_GlobalWaypointTypeSeq, UMAA_MO_GlobalWaypointControl_GlobalWaypointType);

NDDSUSERDllExport
RTIBool UMAA_MO_GlobalWaypointControl_GlobalWaypointType_initialize(
    UMAA_MO_GlobalWaypointControl_GlobalWaypointType* self);

NDDSUSERDllExport
RTIBool UMAA_MO_GlobalWaypointControl_GlobalWaypointType_initialize_ex(
    UMAA_MO_GlobalWaypointControl_GlobalWaypointType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_MO_GlobalWaypointControl_GlobalWaypointType_initialize_w_params(
    UMAA_MO_GlobalWaypointControl_GlobalWaypointType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_MO_GlobalWaypointControl_GlobalWaypointType_finalize_w_return(
    UMAA_MO_GlobalWaypointControl_GlobalWaypointType* self);

NDDSUSERDllExport
void UMAA_MO_GlobalWaypointControl_GlobalWaypointType_finalize(
    UMAA_MO_GlobalWaypointControl_GlobalWaypointType* self);

NDDSUSERDllExport
void UMAA_MO_GlobalWaypointControl_GlobalWaypointType_finalize_ex(
    UMAA_MO_GlobalWaypointControl_GlobalWaypointType* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_MO_GlobalWaypointControl_GlobalWaypointType_finalize_w_params(
    UMAA_MO_GlobalWaypointControl_GlobalWaypointType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_MO_GlobalWaypointControl_GlobalWaypointType_finalize_optional_members(
    UMAA_MO_GlobalWaypointControl_GlobalWaypointType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_MO_GlobalWaypointControl_GlobalWaypointType_copy(
    UMAA_MO_GlobalWaypointControl_GlobalWaypointType* dst,
    const UMAA_MO_GlobalWaypointControl_GlobalWaypointType* src);

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
        struct type_code< UMAA_MO_GlobalWaypointControl_GlobalWaypointType> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* GlobalWaypointType */

