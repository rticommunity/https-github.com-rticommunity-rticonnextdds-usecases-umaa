

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Polygon.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef Polygon_634213427_h
#define Polygon_634213427_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#include "rti/xcdr/Interpreter.hpp"
#else
#include "ndds_standalone_type.h"
#endif

#include "UMAA/Common/Enumeration/EnumerationSets.h"
#include "UMAA/Common/Measurement/Position2DTime.h"

extern "C" {

    extern const char *UMAA_Common_Measurement_PolygonTYPENAME;

}

struct UMAA_Common_Measurement_PolygonSeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_Common_Measurement_PolygonTypeSupport;
class UMAA_Common_Measurement_PolygonDataWriter;
class UMAA_Common_Measurement_PolygonDataReader;
#endif
class UMAA_Common_Measurement_Polygon 
{
  public:
    typedef struct UMAA_Common_Measurement_PolygonSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_Common_Measurement_PolygonTypeSupport TypeSupport;
    typedef UMAA_Common_Measurement_PolygonDataWriter DataWriter;
    typedef UMAA_Common_Measurement_PolygonDataReader DataReader;
    #endif

    UMAA_Common_Enumeration_LineSegmentEnumType_LineSegmentEnumType   lineKind ;
    UMAA_Common_Measurement_Position2DTimeSeq  referencePoint ;

};
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode * UMAA_Common_Measurement_Polygon_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_Common_Measurement_Polygon_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_Polygon_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_Common_Measurement_Polygon_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_Common_Measurement_PolygonSeq, UMAA_Common_Measurement_Polygon);

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_Polygon_initialize(
    UMAA_Common_Measurement_Polygon* self);

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_Polygon_initialize_ex(
    UMAA_Common_Measurement_Polygon* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_Polygon_initialize_w_params(
    UMAA_Common_Measurement_Polygon* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_Polygon_finalize_w_return(
    UMAA_Common_Measurement_Polygon* self);

NDDSUSERDllExport
void UMAA_Common_Measurement_Polygon_finalize(
    UMAA_Common_Measurement_Polygon* self);

NDDSUSERDllExport
void UMAA_Common_Measurement_Polygon_finalize_ex(
    UMAA_Common_Measurement_Polygon* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_Common_Measurement_Polygon_finalize_w_params(
    UMAA_Common_Measurement_Polygon* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_Common_Measurement_Polygon_finalize_optional_members(
    UMAA_Common_Measurement_Polygon* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_Common_Measurement_Polygon_copy(
    UMAA_Common_Measurement_Polygon* dst,
    const UMAA_Common_Measurement_Polygon* src);

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
        struct type_code< UMAA_Common_Measurement_Polygon> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* Polygon */

