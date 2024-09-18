
# WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

# This file was generated from ObjectiveStateConditionalType.idl
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

sys.path.append(os.path.join(os.path.dirname(__file__), 'UMAA/Common/MaritimeEnumeration/'))
from MaritimeEnumerationSets import *
sys.path.pop()
sys.path.append(os.path.join(os.path.dirname(__file__), 'UMAA/Common/Measurement/'))
from Measurements import *
sys.path.pop()
sys.path.append(os.path.join(os.path.dirname(__file__), 'UMAA/Common/PrimitiveConstrained/'))
from ConstrainedTypes import *
sys.path.pop()

UMAA = idl.get_module("UMAA")

UMAA_MM = idl.get_module("UMAA_MM")

UMAA.MM = UMAA_MM

UMAA_MM_Conditional = idl.get_module("UMAA_MM_Conditional")

UMAA.MM.Conditional = UMAA_MM_Conditional

UMAA_MM_Conditional_ObjectiveStateConditionalTypeTopic = "UMAA::MM::Conditional::ObjectiveStateConditionalType"

UMAA.MM.Conditional.ObjectiveStateConditionalTypeTopic = UMAA_MM_Conditional_ObjectiveStateConditionalTypeTopic

@idl.struct(
    type_annotations = [idl.type_name("UMAA::MM::Conditional::ObjectiveStateConditionalType")],
    member_annotations = {
        'specializationReferenceID': [idl.key, ],
    }
)
class UMAA_MM_Conditional_ObjectiveStateConditionalType:
    missionID: UMAA.Common.Measurement.NumericGUID = field(default_factory = UMAA.Common.Measurement.NumericGUID)
    objectiveID: UMAA.Common.Measurement.NumericGUID = field(default_factory = UMAA.Common.Measurement.NumericGUID)
    objectiveState: UMAA.Common.MaritimeEnumeration.TaskStateEnumModule.TaskStateEnumType = UMAA.Common.MaritimeEnumeration.TaskStateEnumModule.TaskStateEnumType.AWAITING_EXECUTION_APPROVAL
    taskID: UMAA.Common.Measurement.NumericGUID = field(default_factory = UMAA.Common.Measurement.NumericGUID)
    specializationReferenceTimestamp: UMAA.Common.Measurement.DateTime = field(default_factory = UMAA.Common.Measurement.DateTime)
    specializationReferenceID: UMAA.Common.Measurement.NumericGUID = field(default_factory = UMAA.Common.Measurement.NumericGUID)

UMAA.MM.Conditional.ObjectiveStateConditionalType = UMAA_MM_Conditional_ObjectiveStateConditionalType
