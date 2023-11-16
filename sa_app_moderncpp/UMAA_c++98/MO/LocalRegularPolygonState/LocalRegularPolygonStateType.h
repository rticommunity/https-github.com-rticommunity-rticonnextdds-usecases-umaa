

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from LocalRegularPolygonStateType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef LocalRegularPolygonStateType_2639132_h
#define LocalRegularPolygonStateType_2639132_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#include "rti/xcdr/Interpreter.hpp"
#else
#include "ndds_standalone_type.h"
#endif

#include "UMAA/MO/LocalRegularPolygonState/LocalRegularPolygonPatternType.h"
#include "UMAA/MO/LocalRegularPolygonState/LocalRegularPolygonTransitTypeType.h"

typedef enum UMAA_MO_LocalRegularPolygonState_LocalRegularPolygonStateType_Specializations_LocalRegularPolygonStateType_Selectors
{
    UMAA_MO_LocalRegularPolygonState_LocalRegularPolygonStateType_Specializations_LocalRegularPolygonStateType_Selectors_LOCALREGULARPOLYGONPATTERNTYPE_SELECT , 
    UMAA_MO_LocalRegularPolygonState_LocalRegularPolygonStateType_Specializations_LocalRegularPolygonStateType_Selectors_LOCALREGULARPOLYGONTRANSITTYPETYPE_SELECT 
} UMAA_MO_LocalRegularPolygonState_LocalRegularPolygonStateType_Specializations_LocalRegularPolygonStateType_Selectors;
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode * UMAA_MO_LocalRegularPolygonState_LocalRegularPolygonStateType_Specializations_LocalRegularPolygonStateType_Selectors_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_MO_LocalRegularPolygonState_LocalRegularPolygonStateType_Specializations_LocalRegularPolygonStateType_Selectors_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_MO_LocalRegularPolygonState_LocalRegularPolygonStateType_Specializations_LocalRegularPolygonStateType_Selectors_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_MO_LocalRegularPolygonState_LocalRegularPolygonStateType_Specializations_LocalRegularPolygonStateType_Selectors_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_MO_LocalRegularPolygonState_LocalRegularPolygonStateType_Specializations_LocalRegularPolygonStateType_SelectorsSeq, UMAA_MO_LocalRegularPolygonState_LocalRegularPolygonStateType_Specializations_LocalRegularPolygonStateType_Selectors);

NDDSUSERDllExport
RTIBool UMAA_MO_LocalRegularPolygonState_LocalRegularPolygonStateType_Specializations_LocalRegularPolygonStateType_Selectors_initialize(
    UMAA_MO_LocalRegularPolygonState_LocalRegularPolygonStateType_Specializations_LocalRegularPolygonStateType_Selectors* self);

NDDSUSERDllExport
RTIBool UMAA_MO_LocalRegularPolygonState_LocalRegularPolygonStateType_Specializations_LocalRegularPolygonStateType_Selectors_initialize_ex(
    UMAA_MO_LocalRegularPolygonState_LocalRegularPolygonStateType_Specializations_LocalRegularPolygonStateType_Selectors* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_MO_LocalRegularPolygonState_LocalRegularPolygonStateType_Specializations_LocalRegularPolygonStateType_Selectors_initialize_w_params(
    UMAA_MO_LocalRegularPolygonState_LocalRegularPolygonStateType_Specializations_LocalRegularPolygonStateType_Selectors* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_MO_LocalRegularPolygonState_LocalRegularPolygonStateType_Specializations_LocalRegularPolygonStateType_Selectors_finalize_w_return(
    UMAA_MO_LocalRegularPolygonState_LocalRegularPolygonStateType_Specializations_LocalRegularPolygonStateType_Selectors* self);

NDDSUSERDllExport
void UMAA_MO_LocalRegularPolygonState_LocalRegularPolygonStateType_Specializations_LocalRegularPolygonStateType_Selectors_finalize(
    UMAA_MO_LocalRegularPolygonState_LocalRegularPolygonStateType_Specializations_LocalRegularPolygonStateType_Selectors* self);

NDDSUSERDllExport
void UMAA_MO_LocalRegularPolygonState_LocalRegularPolygonStateType_Specializations_LocalRegularPolygonStateType_Selectors_finalize_ex(
    UMAA_MO_LocalRegularPolygonState_LocalRegularPolygonStateType_Specializations_LocalRegularPolygonStateType_Selectors* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_MO_LocalRegularPolygonState_LocalRegularPolygonStateType_Specializations_LocalRegularPolygonStateType_Selectors_finalize_w_params(
    UMAA_MO_LocalRegularPolygonState_LocalRegularPolygonStateType_Specializations_LocalRegularPolygonStateType_Selectors* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_MO_LocalRegularPolygonState_LocalRegularPolygonStateType_Specializations_LocalRegularPolygonStateType_Selectors_finalize_optional_members(
    UMAA_MO_LocalRegularPolygonState_LocalRegularPolygonStateType_Specializations_LocalRegularPolygonStateType_Selectors* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_MO_LocalRegularPolygonState_LocalRegularPolygonStateType_Specializations_LocalRegularPolygonStateType_Selectors_copy(
    UMAA_MO_LocalRegularPolygonState_LocalRegularPolygonStateType_Specializations_LocalRegularPolygonStateType_Selectors* dst,
    const UMAA_MO_LocalRegularPolygonState_LocalRegularPolygonStateType_Specializations_LocalRegularPolygonStateType_Selectors* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

extern "C" {

    extern const char *UMAA_MO_LocalRegularPolygonState_LocalRegularPolygonStateType_Specializations_LocalRegularPolygonStateType_UnionTYPENAME;

}

struct UMAA_MO_LocalRegularPolygonState_LocalRegularPolygonStateType_Specializations_LocalRegularPolygonStateType_UnionSeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_MO_LocalRegularPolygonState_LocalRegularPolygonStateType_Specializations_LocalRegularPolygonStateType_UnionTypeSupport;
class UMAA_MO_LocalRegularPolygonState_LocalRegularPolygonStateType_Specializations_LocalRegularPolygonStateType_UnionDataWriter;
class UMAA_MO_LocalRegularPolygonState_LocalRegularPolygonStateType_Specializations_LocalRegularPolygonStateType_UnionDataReader;
#endif

typedef struct UMAA_MO_LocalRegularPolygonState_LocalRegularPolygonStateType_Specializations_LocalRegularPolygonStateType_Union
{
    typedef struct UMAA_MO_LocalRegularPolygonState_LocalRegularPolygonStateType_Specializations_LocalRegularPolygonStateType_UnionSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_MO_LocalRegularPolygonState_LocalRegularPolygonStateType_Specializations_LocalRegularPolygonStateType_UnionTypeSupport TypeSupport;
    typedef UMAA_MO_LocalRegularPolygonState_LocalRegularPolygonStateType_Specializations_LocalRegularPolygonStateType_UnionDataWriter DataWriter;
    typedef UMAA_MO_LocalRegularPolygonState_LocalRegularPolygonStateType_Specializations_LocalRegularPolygonStateType_UnionDataReader DataReader;
    #endif

    UMAA_MO_LocalRegularPolygonState_LocalRegularPolygonStateType_Specializations_LocalRegularPolygonStateType_Selectors _d;
    struct UMAA_MO_LocalRegularPolygonState_LocalRegularPolygonStateType_Specializations_LocalRegularPolygonStateType_Union_u 
    {

        UMAA_MO_LocalRegularPolygonState_LocalRegularPolygonPatternType   LocalRegularPolygonPatternType_data ;
        UMAA_MO_LocalRegularPolygonState_LocalRegularPolygonTransitTypeType   LocalRegularPolygonTransitTypeType_data ;
    }_u;

} UMAA_MO_LocalRegularPolygonState_LocalRegularPolygonStateType_Specializations_LocalRegularPolygonStateType_Union ;
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode * UMAA_MO_LocalRegularPolygonState_LocalRegularPolygonStateType_Specializations_LocalRegularPolygonStateType_Union_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_MO_LocalRegularPolygonState_LocalRegularPolygonStateType_Specializations_LocalRegularPolygonStateType_Union_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_MO_LocalRegularPolygonState_LocalRegularPolygonStateType_Specializations_LocalRegularPolygonStateType_Union_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_MO_LocalRegularPolygonState_LocalRegularPolygonStateType_Specializations_LocalRegularPolygonStateType_Union_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_MO_LocalRegularPolygonState_LocalRegularPolygonStateType_Specializations_LocalRegularPolygonStateType_UnionSeq, UMAA_MO_LocalRegularPolygonState_LocalRegularPolygonStateType_Specializations_LocalRegularPolygonStateType_Union);

NDDSUSERDllExport
RTIBool UMAA_MO_LocalRegularPolygonState_LocalRegularPolygonStateType_Specializations_LocalRegularPolygonStateType_Union_initialize(
    UMAA_MO_LocalRegularPolygonState_LocalRegularPolygonStateType_Specializations_LocalRegularPolygonStateType_Union* self);

NDDSUSERDllExport
RTIBool UMAA_MO_LocalRegularPolygonState_LocalRegularPolygonStateType_Specializations_LocalRegularPolygonStateType_Union_initialize_ex(
    UMAA_MO_LocalRegularPolygonState_LocalRegularPolygonStateType_Specializations_LocalRegularPolygonStateType_Union* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_MO_LocalRegularPolygonState_LocalRegularPolygonStateType_Specializations_LocalRegularPolygonStateType_Union_initialize_w_params(
    UMAA_MO_LocalRegularPolygonState_LocalRegularPolygonStateType_Specializations_LocalRegularPolygonStateType_Union* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_MO_LocalRegularPolygonState_LocalRegularPolygonStateType_Specializations_LocalRegularPolygonStateType_Union_finalize_w_return(
    UMAA_MO_LocalRegularPolygonState_LocalRegularPolygonStateType_Specializations_LocalRegularPolygonStateType_Union* self);

NDDSUSERDllExport
void UMAA_MO_LocalRegularPolygonState_LocalRegularPolygonStateType_Specializations_LocalRegularPolygonStateType_Union_finalize(
    UMAA_MO_LocalRegularPolygonState_LocalRegularPolygonStateType_Specializations_LocalRegularPolygonStateType_Union* self);

NDDSUSERDllExport
void UMAA_MO_LocalRegularPolygonState_LocalRegularPolygonStateType_Specializations_LocalRegularPolygonStateType_Union_finalize_ex(
    UMAA_MO_LocalRegularPolygonState_LocalRegularPolygonStateType_Specializations_LocalRegularPolygonStateType_Union* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_MO_LocalRegularPolygonState_LocalRegularPolygonStateType_Specializations_LocalRegularPolygonStateType_Union_finalize_w_params(
    UMAA_MO_LocalRegularPolygonState_LocalRegularPolygonStateType_Specializations_LocalRegularPolygonStateType_Union* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_MO_LocalRegularPolygonState_LocalRegularPolygonStateType_Specializations_LocalRegularPolygonStateType_Union_finalize_optional_members(
    UMAA_MO_LocalRegularPolygonState_LocalRegularPolygonStateType_Specializations_LocalRegularPolygonStateType_Union* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_MO_LocalRegularPolygonState_LocalRegularPolygonStateType_Specializations_LocalRegularPolygonStateType_Union_copy(
    UMAA_MO_LocalRegularPolygonState_LocalRegularPolygonStateType_Specializations_LocalRegularPolygonStateType_Union* dst,
    const UMAA_MO_LocalRegularPolygonState_LocalRegularPolygonStateType_Specializations_LocalRegularPolygonStateType_Union* src);

NDDSUSERDllExport
DDS_LongLong UMAA_MO_LocalRegularPolygonState_LocalRegularPolygonStateType_Specializations_LocalRegularPolygonStateType_Union_getDefaultDiscriminator(void);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

extern "C" {

    extern const char *UMAA_MO_LocalRegularPolygonState_LocalRegularPolygonStateTypeTYPENAME;

}

struct UMAA_MO_LocalRegularPolygonState_LocalRegularPolygonStateTypeSeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_MO_LocalRegularPolygonState_LocalRegularPolygonStateTypeTypeSupport;
class UMAA_MO_LocalRegularPolygonState_LocalRegularPolygonStateTypeDataWriter;
class UMAA_MO_LocalRegularPolygonState_LocalRegularPolygonStateTypeDataReader;
#endif
class UMAA_MO_LocalRegularPolygonState_LocalRegularPolygonStateType 
{
  public:
    typedef struct UMAA_MO_LocalRegularPolygonState_LocalRegularPolygonStateTypeSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_MO_LocalRegularPolygonState_LocalRegularPolygonStateTypeTypeSupport TypeSupport;
    typedef UMAA_MO_LocalRegularPolygonState_LocalRegularPolygonStateTypeDataWriter DataWriter;
    typedef UMAA_MO_LocalRegularPolygonState_LocalRegularPolygonStateTypeDataReader DataReader;
    #endif

    UMAA_MO_LocalRegularPolygonState_LocalRegularPolygonStateType_Specializations_LocalRegularPolygonStateType_Union   LocalRegularPolygonStateType_subtypes ;

};
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode * UMAA_MO_LocalRegularPolygonState_LocalRegularPolygonStateType_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_MO_LocalRegularPolygonState_LocalRegularPolygonStateType_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_MO_LocalRegularPolygonState_LocalRegularPolygonStateType_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_MO_LocalRegularPolygonState_LocalRegularPolygonStateType_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_MO_LocalRegularPolygonState_LocalRegularPolygonStateTypeSeq, UMAA_MO_LocalRegularPolygonState_LocalRegularPolygonStateType);

NDDSUSERDllExport
RTIBool UMAA_MO_LocalRegularPolygonState_LocalRegularPolygonStateType_initialize(
    UMAA_MO_LocalRegularPolygonState_LocalRegularPolygonStateType* self);

NDDSUSERDllExport
RTIBool UMAA_MO_LocalRegularPolygonState_LocalRegularPolygonStateType_initialize_ex(
    UMAA_MO_LocalRegularPolygonState_LocalRegularPolygonStateType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_MO_LocalRegularPolygonState_LocalRegularPolygonStateType_initialize_w_params(
    UMAA_MO_LocalRegularPolygonState_LocalRegularPolygonStateType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_MO_LocalRegularPolygonState_LocalRegularPolygonStateType_finalize_w_return(
    UMAA_MO_LocalRegularPolygonState_LocalRegularPolygonStateType* self);

NDDSUSERDllExport
void UMAA_MO_LocalRegularPolygonState_LocalRegularPolygonStateType_finalize(
    UMAA_MO_LocalRegularPolygonState_LocalRegularPolygonStateType* self);

NDDSUSERDllExport
void UMAA_MO_LocalRegularPolygonState_LocalRegularPolygonStateType_finalize_ex(
    UMAA_MO_LocalRegularPolygonState_LocalRegularPolygonStateType* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_MO_LocalRegularPolygonState_LocalRegularPolygonStateType_finalize_w_params(
    UMAA_MO_LocalRegularPolygonState_LocalRegularPolygonStateType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_MO_LocalRegularPolygonState_LocalRegularPolygonStateType_finalize_optional_members(
    UMAA_MO_LocalRegularPolygonState_LocalRegularPolygonStateType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_MO_LocalRegularPolygonState_LocalRegularPolygonStateType_copy(
    UMAA_MO_LocalRegularPolygonState_LocalRegularPolygonStateType* dst,
    const UMAA_MO_LocalRegularPolygonState_LocalRegularPolygonStateType* src);

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
        struct type_code< UMAA_MO_LocalRegularPolygonState_LocalRegularPolygonStateType_Specializations_LocalRegularPolygonStateType_Union> {
            static const RTIXCdrTypeCode * get();
        };

        template <>
        struct type_code< UMAA_MO_LocalRegularPolygonState_LocalRegularPolygonStateType> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* LocalRegularPolygonStateType */

