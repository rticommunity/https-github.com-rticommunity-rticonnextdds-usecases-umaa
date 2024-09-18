
# WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

# This file was generated from SpeedReportType.idl
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
sys.path.append(os.path.join(os.path.dirname(__file__), 'UMAA/Common/MaritimeEnumeration/'))
from MaritimeEnumerationSets import *
sys.path.pop()
sys.path.append(os.path.join(os.path.dirname(__file__), 'UMAA/Common/Measurement/'))
from Measurements import *
sys.path.pop()

UMAA = idl.get_module("UMAA")

UMAA_SA = idl.get_module("UMAA_SA")

UMAA.SA = UMAA_SA

UMAA_SA_SpeedStatus = idl.get_module("UMAA_SA_SpeedStatus")

UMAA.SA.SpeedStatus = UMAA_SA_SpeedStatus

UMAA_SA_SpeedStatus_SpeedReportTypeTopic = "UMAA::SA::SpeedStatus::SpeedReportType"

UMAA.SA.SpeedStatus.SpeedReportTypeTopic = UMAA_SA_SpeedStatus_SpeedReportTypeTopic

@idl.struct(
    type_annotations = [idl.type_name("UMAA::SA::SpeedStatus::SpeedReportType")],
    member_annotations = {
        'source': [idl.key, ],
    }
)
class UMAA_SA_SpeedStatus_SpeedReportType:
    mode: Optional[UMAA.Common.MaritimeEnumeration.VehicleSpeedModeEnumModule.VehicleSpeedModeEnumType] = None
    speedOverGround: Optional[float] = None
    speedThroughAir: Optional[float] = None
    speedThroughWater: Optional[float] = None
    timeStamp: UMAA.Common.Measurement.DateTime = field(default_factory = UMAA.Common.Measurement.DateTime)
    source: UMAA.Common.IdentifierType = field(default_factory = UMAA.Common.IdentifierType)

UMAA.SA.SpeedStatus.SpeedReportType = UMAA_SA_SpeedStatus_SpeedReportType
