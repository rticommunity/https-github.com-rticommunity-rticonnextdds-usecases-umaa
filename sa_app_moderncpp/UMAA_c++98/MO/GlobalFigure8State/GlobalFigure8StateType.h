

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from GlobalFigure8StateType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef GlobalFigure8StateType_2019986166_h
#define GlobalFigure8StateType_2019986166_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#include "rti/xcdr/Interpreter.hpp"
#else
#include "ndds_standalone_type.h"
#endif

#include "UMAA/MO/GlobalFigure8State/GlobalFigure8PatternType.h"
#include "UMAA/MO/GlobalFigure8State/GlobalFigure8TransitType.h"

typedef enum UMAA_MO_GlobalFigure8State_GlobalFigure8StateType_Specializations_GlobalFigure8StateType_Selectors
{
    UMAA_MO_GlobalFigure8State_GlobalFigure8StateType_Specializations_GlobalFigure8StateType_Selectors_GLOBALFIGURE8PATTERNTYPE_SELECT , 
    UMAA_MO_GlobalFigure8State_GlobalFigure8StateType_Specializations_GlobalFigure8StateType_Selectors_GLOBALFIGURE8TRANSITTYPE_SELECT 
} UMAA_MO_GlobalFigure8State_GlobalFigure8StateType_Specializations_GlobalFigure8StateType_Selectors;
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode * UMAA_MO_GlobalFigure8State_GlobalFigure8StateType_Specializations_GlobalFigure8StateType_Selectors_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_MO_GlobalFigure8State_GlobalFigure8StateType_Specializations_GlobalFigure8StateType_Selectors_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_MO_GlobalFigure8State_GlobalFigure8StateType_Specializations_GlobalFigure8StateType_Selectors_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_MO_GlobalFigure8State_GlobalFigure8StateType_Specializations_GlobalFigure8StateType_Selectors_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_MO_GlobalFigure8State_GlobalFigure8StateType_Specializations_GlobalFigure8StateType_SelectorsSeq, UMAA_MO_GlobalFigure8State_GlobalFigure8StateType_Specializations_GlobalFigure8StateType_Selectors);

NDDSUSERDllExport
RTIBool UMAA_MO_GlobalFigure8State_GlobalFigure8StateType_Specializations_GlobalFigure8StateType_Selectors_initialize(
    UMAA_MO_GlobalFigure8State_GlobalFigure8StateType_Specializations_GlobalFigure8StateType_Selectors* self);

NDDSUSERDllExport
RTIBool UMAA_MO_GlobalFigure8State_GlobalFigure8StateType_Specializations_GlobalFigure8StateType_Selectors_initialize_ex(
    UMAA_MO_GlobalFigure8State_GlobalFigure8StateType_Specializations_GlobalFigure8StateType_Selectors* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_MO_GlobalFigure8State_GlobalFigure8StateType_Specializations_GlobalFigure8StateType_Selectors_initialize_w_params(
    UMAA_MO_GlobalFigure8State_GlobalFigure8StateType_Specializations_GlobalFigure8StateType_Selectors* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_MO_GlobalFigure8State_GlobalFigure8StateType_Specializations_GlobalFigure8StateType_Selectors_finalize_w_return(
    UMAA_MO_GlobalFigure8State_GlobalFigure8StateType_Specializations_GlobalFigure8StateType_Selectors* self);

NDDSUSERDllExport
void UMAA_MO_GlobalFigure8State_GlobalFigure8StateType_Specializations_GlobalFigure8StateType_Selectors_finalize(
    UMAA_MO_GlobalFigure8State_GlobalFigure8StateType_Specializations_GlobalFigure8StateType_Selectors* self);

NDDSUSERDllExport
void UMAA_MO_GlobalFigure8State_GlobalFigure8StateType_Specializations_GlobalFigure8StateType_Selectors_finalize_ex(
    UMAA_MO_GlobalFigure8State_GlobalFigure8StateType_Specializations_GlobalFigure8StateType_Selectors* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_MO_GlobalFigure8State_GlobalFigure8StateType_Specializations_GlobalFigure8StateType_Selectors_finalize_w_params(
    UMAA_MO_GlobalFigure8State_GlobalFigure8StateType_Specializations_GlobalFigure8StateType_Selectors* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_MO_GlobalFigure8State_GlobalFigure8StateType_Specializations_GlobalFigure8StateType_Selectors_finalize_optional_members(
    UMAA_MO_GlobalFigure8State_GlobalFigure8StateType_Specializations_GlobalFigure8StateType_Selectors* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_MO_GlobalFigure8State_GlobalFigure8StateType_Specializations_GlobalFigure8StateType_Selectors_copy(
    UMAA_MO_GlobalFigure8State_GlobalFigure8StateType_Specializations_GlobalFigure8StateType_Selectors* dst,
    const UMAA_MO_GlobalFigure8State_GlobalFigure8StateType_Specializations_GlobalFigure8StateType_Selectors* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

extern "C" {

    extern const char *UMAA_MO_GlobalFigure8State_GlobalFigure8StateType_Specializations_GlobalFigure8StateType_UnionTYPENAME;

}

struct UMAA_MO_GlobalFigure8State_GlobalFigure8StateType_Specializations_GlobalFigure8StateType_UnionSeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_MO_GlobalFigure8State_GlobalFigure8StateType_Specializations_GlobalFigure8StateType_UnionTypeSupport;
class UMAA_MO_GlobalFigure8State_GlobalFigure8StateType_Specializations_GlobalFigure8StateType_UnionDataWriter;
class UMAA_MO_GlobalFigure8State_GlobalFigure8StateType_Specializations_GlobalFigure8StateType_UnionDataReader;
#endif

typedef struct UMAA_MO_GlobalFigure8State_GlobalFigure8StateType_Specializations_GlobalFigure8StateType_Union
{
    typedef struct UMAA_MO_GlobalFigure8State_GlobalFigure8StateType_Specializations_GlobalFigure8StateType_UnionSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_MO_GlobalFigure8State_GlobalFigure8StateType_Specializations_GlobalFigure8StateType_UnionTypeSupport TypeSupport;
    typedef UMAA_MO_GlobalFigure8State_GlobalFigure8StateType_Specializations_GlobalFigure8StateType_UnionDataWriter DataWriter;
    typedef UMAA_MO_GlobalFigure8State_GlobalFigure8StateType_Specializations_GlobalFigure8StateType_UnionDataReader DataReader;
    #endif

    UMAA_MO_GlobalFigure8State_GlobalFigure8StateType_Specializations_GlobalFigure8StateType_Selectors _d;
    struct UMAA_MO_GlobalFigure8State_GlobalFigure8StateType_Specializations_GlobalFigure8StateType_Union_u 
    {

        UMAA_MO_GlobalFigure8State_GlobalFigure8PatternType   GlobalFigure8PatternType_data ;
        UMAA_MO_GlobalFigure8State_GlobalFigure8TransitType   GlobalFigure8TransitType_data ;
    }_u;

} UMAA_MO_GlobalFigure8State_GlobalFigure8StateType_Specializations_GlobalFigure8StateType_Union ;
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode * UMAA_MO_GlobalFigure8State_GlobalFigure8StateType_Specializations_GlobalFigure8StateType_Union_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_MO_GlobalFigure8State_GlobalFigure8StateType_Specializations_GlobalFigure8StateType_Union_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_MO_GlobalFigure8State_GlobalFigure8StateType_Specializations_GlobalFigure8StateType_Union_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_MO_GlobalFigure8State_GlobalFigure8StateType_Specializations_GlobalFigure8StateType_Union_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_MO_GlobalFigure8State_GlobalFigure8StateType_Specializations_GlobalFigure8StateType_UnionSeq, UMAA_MO_GlobalFigure8State_GlobalFigure8StateType_Specializations_GlobalFigure8StateType_Union);

NDDSUSERDllExport
RTIBool UMAA_MO_GlobalFigure8State_GlobalFigure8StateType_Specializations_GlobalFigure8StateType_Union_initialize(
    UMAA_MO_GlobalFigure8State_GlobalFigure8StateType_Specializations_GlobalFigure8StateType_Union* self);

NDDSUSERDllExport
RTIBool UMAA_MO_GlobalFigure8State_GlobalFigure8StateType_Specializations_GlobalFigure8StateType_Union_initialize_ex(
    UMAA_MO_GlobalFigure8State_GlobalFigure8StateType_Specializations_GlobalFigure8StateType_Union* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_MO_GlobalFigure8State_GlobalFigure8StateType_Specializations_GlobalFigure8StateType_Union_initialize_w_params(
    UMAA_MO_GlobalFigure8State_GlobalFigure8StateType_Specializations_GlobalFigure8StateType_Union* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_MO_GlobalFigure8State_GlobalFigure8StateType_Specializations_GlobalFigure8StateType_Union_finalize_w_return(
    UMAA_MO_GlobalFigure8State_GlobalFigure8StateType_Specializations_GlobalFigure8StateType_Union* self);

NDDSUSERDllExport
void UMAA_MO_GlobalFigure8State_GlobalFigure8StateType_Specializations_GlobalFigure8StateType_Union_finalize(
    UMAA_MO_GlobalFigure8State_GlobalFigure8StateType_Specializations_GlobalFigure8StateType_Union* self);

NDDSUSERDllExport
void UMAA_MO_GlobalFigure8State_GlobalFigure8StateType_Specializations_GlobalFigure8StateType_Union_finalize_ex(
    UMAA_MO_GlobalFigure8State_GlobalFigure8StateType_Specializations_GlobalFigure8StateType_Union* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_MO_GlobalFigure8State_GlobalFigure8StateType_Specializations_GlobalFigure8StateType_Union_finalize_w_params(
    UMAA_MO_GlobalFigure8State_GlobalFigure8StateType_Specializations_GlobalFigure8StateType_Union* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_MO_GlobalFigure8State_GlobalFigure8StateType_Specializations_GlobalFigure8StateType_Union_finalize_optional_members(
    UMAA_MO_GlobalFigure8State_GlobalFigure8StateType_Specializations_GlobalFigure8StateType_Union* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_MO_GlobalFigure8State_GlobalFigure8StateType_Specializations_GlobalFigure8StateType_Union_copy(
    UMAA_MO_GlobalFigure8State_GlobalFigure8StateType_Specializations_GlobalFigure8StateType_Union* dst,
    const UMAA_MO_GlobalFigure8State_GlobalFigure8StateType_Specializations_GlobalFigure8StateType_Union* src);

NDDSUSERDllExport
DDS_LongLong UMAA_MO_GlobalFigure8State_GlobalFigure8StateType_Specializations_GlobalFigure8StateType_Union_getDefaultDiscriminator(void);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

extern "C" {

    extern const char *UMAA_MO_GlobalFigure8State_GlobalFigure8StateTypeTYPENAME;

}

struct UMAA_MO_GlobalFigure8State_GlobalFigure8StateTypeSeq;
#ifndef NDDS_STANDALONE_TYPE
class UMAA_MO_GlobalFigure8State_GlobalFigure8StateTypeTypeSupport;
class UMAA_MO_GlobalFigure8State_GlobalFigure8StateTypeDataWriter;
class UMAA_MO_GlobalFigure8State_GlobalFigure8StateTypeDataReader;
#endif
class UMAA_MO_GlobalFigure8State_GlobalFigure8StateType 
{
  public:
    typedef struct UMAA_MO_GlobalFigure8State_GlobalFigure8StateTypeSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef UMAA_MO_GlobalFigure8State_GlobalFigure8StateTypeTypeSupport TypeSupport;
    typedef UMAA_MO_GlobalFigure8State_GlobalFigure8StateTypeDataWriter DataWriter;
    typedef UMAA_MO_GlobalFigure8State_GlobalFigure8StateTypeDataReader DataReader;
    #endif

    UMAA_MO_GlobalFigure8State_GlobalFigure8StateType_Specializations_GlobalFigure8StateType_Union   GlobalFigure8StateType_subtypes ;

};
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode * UMAA_MO_GlobalFigure8State_GlobalFigure8StateType_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *UMAA_MO_GlobalFigure8State_GlobalFigure8StateType_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_MO_GlobalFigure8State_GlobalFigure8StateType_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *UMAA_MO_GlobalFigure8State_GlobalFigure8StateType_get_sample_seq_access_info(void);
#endif
DDS_SEQUENCE(UMAA_MO_GlobalFigure8State_GlobalFigure8StateTypeSeq, UMAA_MO_GlobalFigure8State_GlobalFigure8StateType);

NDDSUSERDllExport
RTIBool UMAA_MO_GlobalFigure8State_GlobalFigure8StateType_initialize(
    UMAA_MO_GlobalFigure8State_GlobalFigure8StateType* self);

NDDSUSERDllExport
RTIBool UMAA_MO_GlobalFigure8State_GlobalFigure8StateType_initialize_ex(
    UMAA_MO_GlobalFigure8State_GlobalFigure8StateType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UMAA_MO_GlobalFigure8State_GlobalFigure8StateType_initialize_w_params(
    UMAA_MO_GlobalFigure8State_GlobalFigure8StateType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool UMAA_MO_GlobalFigure8State_GlobalFigure8StateType_finalize_w_return(
    UMAA_MO_GlobalFigure8State_GlobalFigure8StateType* self);

NDDSUSERDllExport
void UMAA_MO_GlobalFigure8State_GlobalFigure8StateType_finalize(
    UMAA_MO_GlobalFigure8State_GlobalFigure8StateType* self);

NDDSUSERDllExport
void UMAA_MO_GlobalFigure8State_GlobalFigure8StateType_finalize_ex(
    UMAA_MO_GlobalFigure8State_GlobalFigure8StateType* self,RTIBool deletePointers);

NDDSUSERDllExport
void UMAA_MO_GlobalFigure8State_GlobalFigure8StateType_finalize_w_params(
    UMAA_MO_GlobalFigure8State_GlobalFigure8StateType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UMAA_MO_GlobalFigure8State_GlobalFigure8StateType_finalize_optional_members(
    UMAA_MO_GlobalFigure8State_GlobalFigure8StateType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool UMAA_MO_GlobalFigure8State_GlobalFigure8StateType_copy(
    UMAA_MO_GlobalFigure8State_GlobalFigure8StateType* dst,
    const UMAA_MO_GlobalFigure8State_GlobalFigure8StateType* src);

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
        struct type_code< UMAA_MO_GlobalFigure8State_GlobalFigure8StateType_Specializations_GlobalFigure8StateType_Union> {
            static const RTIXCdrTypeCode * get();
        };

        template <>
        struct type_code< UMAA_MO_GlobalFigure8State_GlobalFigure8StateType> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* GlobalFigure8StateType */

