
# WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

# This file was generated from BallastPumpCommandStatusType.idl
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

UMAA_EO = idl.get_module("UMAA_EO")

UMAA.EO = UMAA_EO

UMAA_EO_BallastTank = idl.get_module("UMAA_EO_BallastTank")

UMAA.EO.BallastTank = UMAA_EO_BallastTank

UMAA_EO_BallastTank_BallastPumpCommandStatusTypeTopic = "UMAA::EO::BallastTank::BallastPumpCommandStatusType"

UMAA.EO.BallastTank.BallastPumpCommandStatusTypeTopic = UMAA_EO_BallastTank_BallastPumpCommandStatusTypeTopic

@idl.struct(
    type_annotations = [idl.type_name("UMAA::EO::BallastTank::BallastPumpCommandStatusType")],
    member_annotations = {
        'source': [idl.key, ],
        'sessionID': [idl.key, ],
        'logMessage': [idl.bound(4095)],
    }
)
class UMAA_EO_BallastTank_BallastPumpCommandStatusType:
    timeStamp: UMAA.Common.Measurement.DateTime = field(default_factory = UMAA.Common.Measurement.DateTime)
    source: UMAA.Common.IdentifierType = field(default_factory = UMAA.Common.IdentifierType)
    sessionID: UMAA.Common.Measurement.NumericGUID = field(default_factory = UMAA.Common.Measurement.NumericGUID)
    commandStatus: UMAA.Common.MaritimeEnumeration.CommandStatusEnumModule.CommandStatusEnumType = UMAA.Common.MaritimeEnumeration.CommandStatusEnumModule.CommandStatusEnumType.CANCELED
    commandStatusReason: UMAA.Common.MaritimeEnumeration.CommandStatusReasonEnumModule.CommandStatusReasonEnumType = UMAA.Common.MaritimeEnumeration.CommandStatusReasonEnumModule.CommandStatusReasonEnumType.CANCELED
    logMessage: str = ""

UMAA.EO.BallastTank.BallastPumpCommandStatusType = UMAA_EO_BallastTank_BallastPumpCommandStatusType
