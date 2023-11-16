

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Velocity3D_PlatformNED.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef Velocity3D_PlatformNED_992756190_h
#define Velocity3D_PlatformNED_992756190_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#include "rti/xcdr/Interpreter.hpp"
#else
#include "ndds_standalone_type.h"
#endif

#include "UMAA/Common/MeasurementCoordinate/Engineering_Coordinate_Axes.h"

extern "C" {

    extern const char *UMAA_Common_Measurement_Velocity3D_PlatformNEDTYPENAME;

}

struct UMAA_Common_Measurement_Velocity3D_PlatformNEDSeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_Common_Measurement_Velocity3D_PlatformNEDTypeSupport;
class UMAA_Common_Measurement_Velocity3D_PlatformNEDDataWriter;
class UMAA_Common_Measurement_Velocity3D_PlatformNEDDataReader;
#endif
class UMAA_Common_Measurement_Velocity3D_PlatformNED 
{
  public:
    typedef struct UMAA_Common_Measurement_Velocity3D_PlatformNEDSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_Common_Measurement_Velocity3D_PlatformNEDTypeSupport TypeSupport;
    typedef UMAA_Common_Measurement_Velocity3D_PlatformNEDDataWriter DataWriter;
    typedef UMAA_Common_Measurement_Velocity3D_PlatformNEDDataReader DataReader;
    #endif

    DDS_Double   downSpeed ;
    DDS_Double   eastSpeed ;
    DDS_Double   northSpeed ;

};
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode * UMAA_Common_Measurement_Velocity3D_PlatformNED_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_Common_Measurement_Velocity3D_PlatformNED_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_Velocity3D_PlatformNED_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_Velocity3D_PlatformNED_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_Common_Measurement_Velocity3D_PlatformNEDSeq, UMAA_Common_Measurement_Velocity3D_PlatformNED);

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_Velocity3D_PlatformNED_initialize(
    UMAA_Common_Measurement_Velocity3D_PlatformNED* self);

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_Velocity3D_PlatformNED_initialize_ex(
    UMAA_Common_Measurement_Velocity3D_PlatformNED* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_Velocity3D_PlatformNED_initialize_w_params(
    UMAA_Common_Measurement_Velocity3D_PlatformNED* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_Velocity3D_PlatformNED_finalize_w_return(
    UMAA_Common_Measurement_Velocity3D_PlatformNED* self);

NDDSUSERDllExport
void UMAA_Common_Measurement_Velocity3D_PlatformNED_finalize(
    UMAA_Common_Measurement_Velocity3D_PlatformNED* self);

NDDSUSERDllExport
void UMAA_Common_Measurement_Velocity3D_PlatformNED_finalize_ex(
    UMAA_Common_Measurement_Velocity3D_PlatformNED* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_Common_Measurement_Velocity3D_PlatformNED_finalize_w_params(
    UMAA_Common_Measurement_Velocity3D_PlatformNED* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_Common_Measurement_Velocity3D_PlatformNED_finalize_optional_members(
    UMAA_Common_Measurement_Velocity3D_PlatformNED* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_Velocity3D_PlatformNED_copy(
    UMAA_Common_Measurement_Velocity3D_PlatformNED* dst,
    const UMAA_Common_Measurement_Velocity3D_PlatformNED* src);

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
        struct type_code< UMAA_Common_Measurement_Velocity3D_PlatformNED> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* Velocity3D_PlatformNED */

