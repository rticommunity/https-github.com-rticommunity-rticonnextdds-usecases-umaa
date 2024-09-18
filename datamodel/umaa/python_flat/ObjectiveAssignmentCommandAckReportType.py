
# WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

# This file was generated from ObjectiveAssignmentCommandAckReportType.idl
# using RTI Code Generator (rtiddsgen) version 4.3.0.
# The rtiddsgen tool is part of the RTI Connext DDS distribution.
# For more information, type 'rtiddsgen -help' at a command shell
# or consult the Code Generator User's Manual.

from dataclasses import field
from typing import Union, Sequence, Optional
import rti.idl as idl
from enum import IntEnum
import sys
import os

sys.path.append(os.path.join(os.path.dirname(__file__), 'UMAA/Common/'))
from IdentifierType import *
sys.path.pop()
sys.path.append(os.path.join(os.path.dirname(__file__), 'UMAA/Common/Measurement/'))
from Measurements import *
sys.path.pop()
sys.path.append(os.path.join(os.path.dirname(__file__), 'UMAA/MM/ObjectiveAssignmentControl/'))
from ObjectiveAssignmentCommandType import *
sys.path.pop()

UMAA = idl.get_module("UMAA")

UMAA_MM = idl.get_module("UMAA_MM")

UMAA.MM = UMAA_MM

UMAA_MM_ObjectiveAssignmentControl = idl.get_module("UMAA_MM_ObjectiveAssignmentControl")

UMAA.MM.ObjectiveAssignmentControl = UMAA_MM_ObjectiveAssignmentControl

UMAA_MM_ObjectiveAssignmentControl_ObjectiveAssignmentCommandAckReportTypeTopic = "UMAA::MM::ObjectiveAssignmentControl::ObjectiveAssignmentCommandAckReportType"

UMAA.MM.ObjectiveAssignmentControl.ObjectiveAssignmentCommandAckReportTypeTopic = UMAA_MM_ObjectiveAssignmentControl_ObjectiveAssignmentCommandAckReportTypeTopic

@idl.struct(
    type_annotations = [idl.type_name("UMAA::MM::ObjectiveAssignmentControl::ObjectiveAssignmentCommandAckReportType")],
    member_annotations = {
        'source': [idl.key, ],
        'sessionID': [idl.key, ],
    }
)
class UMAA_MM_ObjectiveAssignmentControl_ObjectiveAssignmentCommandAckReportType:
    command: UMAA.MM.ObjectiveAssignmentControl.ObjectiveAssignmentCommandType = field(default_factory = UMAA.MM.ObjectiveAssignmentControl.ObjectiveAssignmentCommandType)
    timeStamp: UMAA.Common.Measurement.DateTime = field(default_factory = UMAA.Common.Measurement.DateTime)
    source: UMAA.Common.IdentifierType = field(default_factory = UMAA.Common.IdentifierType)
    sessionID: UMAA.Common.Measurement.NumericGUID = field(default_factory = UMAA.Common.Measurement.NumericGUID)

UMAA.MM.ObjectiveAssignmentControl.ObjectiveAssignmentCommandAckReportType = UMAA_MM_ObjectiveAssignmentControl_ObjectiveAssignmentCommandAckReportType
