
/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ManagementStateReportType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef ManagementStateReportTypeSupport_762201397_h
#define ManagementStateReportTypeSupport_762201397_h

/* Uses */
#include "ManagementStateReportType.h"

#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)

class __declspec(dllimport) DDSTypeSupport;
class __declspec(dllimport) DDSDataWriter;
class __declspec(dllimport) DDSDataReader;

#endif

/* ========================================================================= */
/**
Uses:     T

Defines:  TTypeSupport, TDataWriter, TDataReader

Organized using the well-documented "Generics Pattern" for
implementing generics in C and C++.
*/

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)

#endif

DDS_TYPESUPPORT_CPP(
    UMAA_SO_ManagementState_ManagementStateReportTypeTypeSupport, 
    UMAA_SO_ManagementState_ManagementStateReportType);

#define ENABLE_TDATAWRITER_DATA_CONSTRUCTOR_METHODS
DDS_DATAWRITER_WITH_DATA_CONSTRUCTOR_METHODS_CPP(UMAA_SO_ManagementState_ManagementStateReportTypeDataWriter, UMAA_SO_ManagementState_ManagementStateReportType);
#undef ENABLE_TDATAWRITER_DATA_CONSTRUCTOR_METHODS
#define ENABLE_TDATAREADER_DATA_CONSISTENCY_CHECK_METHOD
DDS_DATAREADER_W_DATA_CONSISTENCY_CHECK(UMAA_SO_ManagementState_ManagementStateReportTypeDataReader, UMAA_SO_ManagementState_ManagementStateReportTypeSeq, UMAA_SO_ManagementState_ManagementStateReportType);
#undef ENABLE_TDATAREADER_DATA_CONSISTENCY_CHECK_METHOD

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif  /* ManagementStateReportTypeSupport_762201397_h */

