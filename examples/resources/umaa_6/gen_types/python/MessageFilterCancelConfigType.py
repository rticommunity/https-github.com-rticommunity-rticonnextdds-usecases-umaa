
# WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

# This file was generated from MessageFilterCancelConfigType.idl
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

UMAA = idl.get_module("UMAA")

UMAA_CO = idl.get_module("UMAA_CO")

UMAA.CO = UMAA_CO

UMAA_CO_MessageFilterConfig = idl.get_module("UMAA_CO_MessageFilterConfig")

UMAA.CO.MessageFilterConfig = UMAA_CO_MessageFilterConfig

UMAA_CO_MessageFilterConfig_MessageFilterCancelConfigTypeTopic = "UMAA::CO::MessageFilterConfig::MessageFilterCancelConfigType"

UMAA.CO.MessageFilterConfig.MessageFilterCancelConfigTypeTopic = UMAA_CO_MessageFilterConfig_MessageFilterCancelConfigTypeTopic

@idl.struct(
    type_annotations = [idl.type_name("UMAA::CO::MessageFilterConfig::MessageFilterCancelConfigType")],
    member_annotations = {
        'source': [idl.key, ],
        'sessionID': [idl.key, ],
        'destination': [idl.key, ],
    }
)
class UMAA_CO_MessageFilterConfig_MessageFilterCancelConfigType:
    timeStamp: UMAA.Common.Measurement.DateTime = field(default_factory = UMAA.Common.Measurement.DateTime)
    source: UMAA.Common.IdentifierType = field(default_factory = UMAA.Common.IdentifierType)
    sessionID: UMAA.Common.Measurement.NumericGUID = field(default_factory = UMAA.Common.Measurement.NumericGUID)
    destination: UMAA.Common.IdentifierType = field(default_factory = UMAA.Common.IdentifierType)

UMAA.CO.MessageFilterConfig.MessageFilterCancelConfigType = UMAA_CO_MessageFilterConfig_MessageFilterCancelConfigType
