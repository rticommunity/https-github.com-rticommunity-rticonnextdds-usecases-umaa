
/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from PanTiltJointPositionStateReportType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#include "PanTiltJointPositionStateReportTypeSupport.h"
#include "PanTiltJointPositionStateReportTypePlugin.h"

#ifndef dds_c_log_impl_h              
#include "dds_c/dds_c_log_impl.h"                                
#endif        

/* ========================================================================= */
/**
<<IMPLEMENTATION>>

Defines:   TData,
TDataWriter,
TDataReader,
TTypeSupport

Configure and implement 'UMAA_SEM_PanTiltJointPositionStatus_PanTiltJointPositionStateReportType' support classes.

Note: Only the #defined classes get defined
*/

/* ----------------------------------------------------------------- */
/* DDSDataWriter
*/

/**
<<IMPLEMENTATION >>

Defines:   TDataWriter, TData
*/

/* Requires */
#define TTYPENAME   UMAA_SEM_PanTiltJointPositionStatus_PanTiltJointPositionStateReportTypeTYPENAME

/* Defines */
#define TDataWriter UMAA_SEM_PanTiltJointPositionStatus_PanTiltJointPositionStateReportTypeDataWriter
#define TData       UMAA_SEM_PanTiltJointPositionStatus_PanTiltJointPositionStateReportType

#define ENABLE_TDATAWRITER_DATA_CONSTRUCTOR_METHODS
#include "dds_cpp/generic/dds_cpp_data_TDataWriter.gen"
#undef ENABLE_TDATAWRITER_DATA_CONSTRUCTOR_METHODS

#undef TDataWriter
#undef TData

#undef TTYPENAME

/* ----------------------------------------------------------------- */
/* DDSDataReader
*/

/**
<<IMPLEMENTATION >>

Defines:   TDataReader, TDataSeq, TData
*/

/* Requires */
#define TTYPENAME   UMAA_SEM_PanTiltJointPositionStatus_PanTiltJointPositionStateReportTypeTYPENAME

/* Defines */
#define TDataReader UMAA_SEM_PanTiltJointPositionStatus_PanTiltJointPositionStateReportTypeDataReader
#define TDataSeq    UMAA_SEM_PanTiltJointPositionStatus_PanTiltJointPositionStateReportTypeSeq
#define TData       UMAA_SEM_PanTiltJointPositionStatus_PanTiltJointPositionStateReportType

#define ENABLE_TDATAREADER_DATA_CONSISTENCY_CHECK_METHOD
#include "dds_cpp/generic/dds_cpp_data_TDataReader.gen"
#undef ENABLE_TDATAREADER_DATA_CONSISTENCY_CHECK_METHOD

#undef TDataReader
#undef TDataSeq
#undef TData

#undef TTYPENAME

/* ----------------------------------------------------------------- */
/* TypeSupport

<<IMPLEMENTATION >>

Requires:  TTYPENAME,
TPlugin_new
TPlugin_delete
Defines:   TTypeSupport, TData, TDataReader, TDataWriter
*/

/* Requires */
#define TTYPENAME    UMAA_SEM_PanTiltJointPositionStatus_PanTiltJointPositionStateReportTypeTYPENAME
#define TPlugin_new  UMAA_SEM_PanTiltJointPositionStatus_PanTiltJointPositionStateReportTypePlugin_new
#define TPlugin_delete  UMAA_SEM_PanTiltJointPositionStatus_PanTiltJointPositionStateReportTypePlugin_delete

/* Defines */
#define TTypeSupport UMAA_SEM_PanTiltJointPositionStatus_PanTiltJointPositionStateReportTypeTypeSupport
#define TData        UMAA_SEM_PanTiltJointPositionStatus_PanTiltJointPositionStateReportType
#define TDataReader  UMAA_SEM_PanTiltJointPositionStatus_PanTiltJointPositionStateReportTypeDataReader
#define TDataWriter  UMAA_SEM_PanTiltJointPositionStatus_PanTiltJointPositionStateReportTypeDataWriter
#define TGENERATE_SER_CODE
#ifndef NDDS_STANDALONE_TYPE
#define TGENERATE_TYPECODE
#endif

#include "dds_cpp/generic/dds_cpp_data_TTypeSupport.gen"

#undef TTypeSupport
#undef TData
#undef TDataReader
#undef TDataWriter
#ifndef NDDS_STANDALONE_TYPE
#undef TGENERATE_TYPECODE
#endif
#undef TGENERATE_SER_CODE
#undef TTYPENAME
#undef TPlugin_new
#undef TPlugin_delete

