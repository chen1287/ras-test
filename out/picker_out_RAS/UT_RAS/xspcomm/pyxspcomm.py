# This file was automatically generated by SWIG (https://www.swig.org).
# Version 4.2.1
#
# Do not make changes to this file unless you know what you are doing - modify
# the SWIG interface file instead.

from sys import version_info as _swig_python_version_info
# Import the low-level C/C++ module
if __package__ or "." in __name__:
    from . import _pyxspcomm
else:
    import _pyxspcomm

try:
    import builtins as __builtin__
except ImportError:
    import __builtin__

def _swig_repr(self):
    try:
        strthis = "proxy of " + self.this.__repr__()
    except __builtin__.Exception:
        strthis = ""
    return "<%s.%s; %s >" % (self.__class__.__module__, self.__class__.__name__, strthis,)


def _swig_setattr_nondynamic_instance_variable(set):
    def set_instance_attr(self, name, value):
        if name == "this":
            set(self, name, value)
        elif name == "thisown":
            self.this.own(value)
        elif hasattr(self, name) and isinstance(getattr(type(self), name), property):
            set(self, name, value)
        else:
            raise AttributeError("You cannot add instance attributes to %s" % self)
    return set_instance_attr


def _swig_setattr_nondynamic_class_variable(set):
    def set_class_attr(cls, name, value):
        if hasattr(cls, name) and not isinstance(getattr(cls, name), property):
            set(cls, name, value)
        else:
            raise AttributeError("You cannot add class attributes to %s" % cls)
    return set_class_attr


def _swig_add_metaclass(metaclass):
    """Class decorator for adding a metaclass to a SWIG wrapped class - a slimmed down version of six.add_metaclass"""
    def wrapper(cls):
        return metaclass(cls.__name__, cls.__bases__, cls.__dict__.copy())
    return wrapper


class _SwigNonDynamicMeta(type):
    """Meta class to enforce nondynamic attributes (no new attributes) for a class"""
    __setattr__ = _swig_setattr_nondynamic_class_variable(type.__setattr__)


import weakref


def free_third_call():
    return _pyxspcomm.free_third_call()

def init_third_call():
    return _pyxspcomm.init_third_call()

def get_function_id(function_name):
    return _pyxspcomm.get_function_id(function_name)

def call_third_function(id, args, argc, ret, retc):
    return _pyxspcomm.call_third_function(id, args, argc, ret, retc)

def test_third_call():
    return _pyxspcomm.test_third_call()
class SwigPyIterator(object):
    thisown = property(lambda x: x.this.own(), lambda x, v: x.this.own(v), doc="The membership flag")

    def __init__(self, *args, **kwargs):
        raise AttributeError("No constructor defined - class is abstract")
    __repr__ = _swig_repr
    __swig_destroy__ = _pyxspcomm.delete_SwigPyIterator

    def value(self):
        return _pyxspcomm.SwigPyIterator_value(self)

    def incr(self, n=1):
        return _pyxspcomm.SwigPyIterator_incr(self, n)

    def decr(self, n=1):
        return _pyxspcomm.SwigPyIterator_decr(self, n)

    def distance(self, x):
        return _pyxspcomm.SwigPyIterator_distance(self, x)

    def equal(self, x):
        return _pyxspcomm.SwigPyIterator_equal(self, x)

    def copy(self):
        return _pyxspcomm.SwigPyIterator_copy(self)

    def next(self):
        return _pyxspcomm.SwigPyIterator_next(self)

    def __next__(self):
        return _pyxspcomm.SwigPyIterator___next__(self)

    def previous(self):
        return _pyxspcomm.SwigPyIterator_previous(self)

    def advance(self, n):
        return _pyxspcomm.SwigPyIterator_advance(self, n)

    def __eq__(self, x):
        return _pyxspcomm.SwigPyIterator___eq__(self, x)

    def __ne__(self, x):
        return _pyxspcomm.SwigPyIterator___ne__(self, x)

    def __iadd__(self, n):
        return _pyxspcomm.SwigPyIterator___iadd__(self, n)

    def __isub__(self, n):
        return _pyxspcomm.SwigPyIterator___isub__(self, n)

    def __add__(self, n):
        return _pyxspcomm.SwigPyIterator___add__(self, n)

    def __sub__(self, *args):
        return _pyxspcomm.SwigPyIterator___sub__(self, *args)
    def __iter__(self):
        return self

# Register SwigPyIterator in _pyxspcomm:
_pyxspcomm.SwigPyIterator_swigregister(SwigPyIterator)
class XStep(object):
    thisown = property(lambda x: x.this.own(), lambda x, v: x.this.own(v), doc="The membership flag")
    __repr__ = _swig_repr

    def __init__(self, clk, step=1):
        _pyxspcomm.XStep_swiginit(self, _pyxspcomm.new_XStep(clk, step))
    __swig_destroy__ = _pyxspcomm.delete_XStep

# Register XStep in _pyxspcomm:
_pyxspcomm.XStep_swigregister(XStep)
class XClockCallBack(object):
    thisown = property(lambda x: x.this.own(), lambda x, v: x.this.own(v), doc="The membership flag")
    __repr__ = _swig_repr
    desc = property(_pyxspcomm.XClockCallBack_desc_get, _pyxspcomm.XClockCallBack_desc_set)
    func = property(_pyxspcomm.XClockCallBack_func_get, _pyxspcomm.XClockCallBack_func_set)
    args = property(_pyxspcomm.XClockCallBack_args_get, _pyxspcomm.XClockCallBack_args_set)

    def __init__(self):
        _pyxspcomm.XClockCallBack_swiginit(self, _pyxspcomm.new_XClockCallBack())
    __swig_destroy__ = _pyxspcomm.delete_XClockCallBack

# Register XClockCallBack in _pyxspcomm:
_pyxspcomm.XClockCallBack_swigregister(XClockCallBack)
class XClock(object):
    thisown = property(lambda x: x.this.own(), lambda x, v: x.this.own(v), doc="The membership flag")
    __repr__ = _swig_repr
    clock_pins = property(_pyxspcomm.XClock_clock_pins_get, _pyxspcomm.XClock_clock_pins_set)
    ports = property(_pyxspcomm.XClock_ports_get, _pyxspcomm.XClock_ports_set)
    clk = property(_pyxspcomm.XClock_clk_get, _pyxspcomm.XClock_clk_set)
    stop_on_rise = property(_pyxspcomm.XClock_stop_on_rise_get, _pyxspcomm.XClock_stop_on_rise_set)

    def default_stop_on_rise(self, rise):
        return _pyxspcomm.XClock_default_stop_on_rise(self, rise)

    def __init__(self, *args):
        _pyxspcomm.XClock_swiginit(self, _pyxspcomm.new_XClock(*args))

    def ReInit(self, *args):
        return _pyxspcomm.XClock_ReInit(self, *args)

    def Add(self, *args):
        return _pyxspcomm.XClock_Add(self, *args)

    def eval(self):
        return _pyxspcomm.XClock_eval(self)

    def eval_t(self):
        return _pyxspcomm.XClock_eval_t(self)

    def Step(self, s=1):
        return _pyxspcomm.XClock_Step(self, s)

    def RunStep(self, s=1):
        return _pyxspcomm.XClock_RunStep(self, s)

    def _step_fal(self):
        return _pyxspcomm.XClock__step_fal(self)

    def _step_ris(self):
        return _pyxspcomm.XClock__step_ris(self)

    def Reset(self):
        return _pyxspcomm.XClock_Reset(self)

    def StepRis(self, *args):
        return _pyxspcomm.XClock_StepRis(self, *args)

    def StepFal(self, *args):
        return _pyxspcomm.XClock_StepFal(self, *args)
    __swig_destroy__ = _pyxspcomm.delete_XClock

# Register XClock in _pyxspcomm:
_pyxspcomm.XClock_swigregister(XClock)
class xsvLogicVecVal(object):
    thisown = property(lambda x: x.this.own(), lambda x, v: x.this.own(v), doc="The membership flag")
    __repr__ = _swig_repr
    aval = property(_pyxspcomm.xsvLogicVecVal_aval_get, _pyxspcomm.xsvLogicVecVal_aval_set)
    bval = property(_pyxspcomm.xsvLogicVecVal_bval_get, _pyxspcomm.xsvLogicVecVal_bval_set)

    def __init__(self):
        _pyxspcomm.xsvLogicVecVal_swiginit(self, _pyxspcomm.new_xsvLogicVecVal())
    __swig_destroy__ = _pyxspcomm.delete_xsvLogicVecVal

# Register xsvLogicVecVal in _pyxspcomm:
_pyxspcomm.xsvLogicVecVal_swigregister(xsvLogicVecVal)

def TEST_DPI_LR(v):
    return _pyxspcomm.TEST_DPI_LR(v)

def TEST_DPI_LW(v):
    return _pyxspcomm.TEST_DPI_LW(v)

def TEST_DPI_VR(v):
    return _pyxspcomm.TEST_DPI_VR(v)

def TEST_DPI_VW(v):
    return _pyxspcomm.TEST_DPI_VW(v)
IOType_Input = _pyxspcomm.IOType_Input
IOType_Output = _pyxspcomm.IOType_Output
IOType_InOut = _pyxspcomm.IOType_InOut
WriteMode_Imme = _pyxspcomm.WriteMode_Imme
WriteMode_Rise = _pyxspcomm.WriteMode_Rise
WriteMode_Fall = _pyxspcomm.WriteMode_Fall
class PinBind(object):
    thisown = property(lambda x: x.this.own(), lambda x, v: x.this.own(v), doc="The membership flag")
    __repr__ = _swig_repr
    write_fc = property(_pyxspcomm.PinBind_write_fc_get, _pyxspcomm.PinBind_write_fc_set)

    def __init__(self, *args):
        _pyxspcomm.PinBind_swiginit(self, _pyxspcomm.new_PinBind(*args))

    def Set(self, v):
        return _pyxspcomm.PinBind_Set(self, v)

    def AsInt32(self):
        return _pyxspcomm.PinBind_AsInt32(self)
    __swig_destroy__ = _pyxspcomm.delete_PinBind

# Register PinBind in _pyxspcomm:
_pyxspcomm.PinBind_swigregister(PinBind)
class XDataCallBack(object):
    thisown = property(lambda x: x.this.own(), lambda x, v: x.this.own(v), doc="The membership flag")
    __repr__ = _swig_repr
    desc = property(_pyxspcomm.XDataCallBack_desc_get, _pyxspcomm.XDataCallBack_desc_set)
    fc = property(_pyxspcomm.XDataCallBack_fc_get, _pyxspcomm.XDataCallBack_fc_set)
    args = property(_pyxspcomm.XDataCallBack_args_get, _pyxspcomm.XDataCallBack_args_set)

    def __init__(self):
        _pyxspcomm.XDataCallBack_swiginit(self, _pyxspcomm.new_XDataCallBack())
    __swig_destroy__ = _pyxspcomm.delete_XDataCallBack

# Register XDataCallBack in _pyxspcomm:
_pyxspcomm.XDataCallBack_swigregister(XDataCallBack)
class XData(object):
    thisown = property(lambda x: x.this.own(), lambda x, v: x.this.own(v), doc="The membership flag")
    __repr__ = _swig_repr
    In = _pyxspcomm.XData_In
    Out = _pyxspcomm.XData_Out
    InOut = _pyxspcomm.XData_InOut
    Imme = _pyxspcomm.XData_Imme
    Rise = _pyxspcomm.XData_Rise
    Fall = _pyxspcomm.XData_Fall
    value = property(_pyxspcomm.XData_value_get, _pyxspcomm.XData_value_set)
    mName = property(_pyxspcomm.XData_mName_get, _pyxspcomm.XData_mName_set)
    mIOType = property(_pyxspcomm.XData_mIOType_get, _pyxspcomm.XData_mIOType_set)
    mWidth = property(_pyxspcomm.XData_mWidth_get, _pyxspcomm.XData_mWidth_set)
    pVecData = property(_pyxspcomm.XData_pVecData_get, _pyxspcomm.XData_pVecData_set)
    mLogicData = property(_pyxspcomm.XData_mLogicData_get, _pyxspcomm.XData_mLogicData_set)

    def ReInit(self, *args):
        return _pyxspcomm.XData_ReInit(self, *args)

    def __init__(self, *args):
        _pyxspcomm.XData_swiginit(self, _pyxspcomm.new_XData(*args))
    __swig_destroy__ = _pyxspcomm.delete_XData

    def SubDataRef(self, name, start, width):
        return _pyxspcomm.XData_SubDataRef(self, name, start, width)

    def GetWriteMode(self):
        return _pyxspcomm.XData_GetWriteMode(self)

    def SetWriteMode(self, mode):
        return _pyxspcomm.XData_SetWriteMode(self, mode)

    def WriteOnRise(self):
        return _pyxspcomm.XData_WriteOnRise(self)

    def WriteOnFall(self):
        return _pyxspcomm.XData_WriteOnFall(self)

    def WriteDirect(self):
        return _pyxspcomm.XData_WriteDirect(self)

    def SetIgnoreSameDataWrite(self, w):
        return _pyxspcomm.XData_SetIgnoreSameDataWrite(self, w)

    def DataValid(self):
        return _pyxspcomm.XData_DataValid(self)

    def BindDPIRW(self, *args):
        return _pyxspcomm.XData_BindDPIRW(self, *args)

    def _TestBindDPIL(self):
        return _pyxspcomm.XData__TestBindDPIL(self)

    def _TestBindDPIV(self):
        return _pyxspcomm.XData__TestBindDPIV(self)

    def SetBits(self, *args):
        return _pyxspcomm.XData_SetBits(self, *args)

    def SetVU8(self, buffer):
        return _pyxspcomm.XData_SetVU8(self, buffer)

    def GetVU8(self):
        return _pyxspcomm.XData_GetVU8(self)

    def GetBits(self, *args):
        return _pyxspcomm.XData_GetBits(self, *args)

    def OnChange(self, *args):
        return _pyxspcomm.XData_OnChange(self, *args)

    def ReadFresh(self, m):
        return _pyxspcomm.XData_ReadFresh(self, m)

    def W(self):
        return _pyxspcomm.XData_W(self)

    def U(self):
        return _pyxspcomm.XData_U(self)

    def S(self):
        return _pyxspcomm.XData_S(self)

    def B(self):
        return _pyxspcomm.XData_B(self)

    def String(self):
        return _pyxspcomm.XData_String(self)

    def Connect(self, xdata):
        return _pyxspcomm.XData_Connect(self, xdata)

    def __eq__(self, *args):
        return _pyxspcomm.XData___eq__(self, *args)

    def Set(self, *args):
        return _pyxspcomm.XData_Set(self, *args)

    def IsInIO(self):
        return _pyxspcomm.XData_IsInIO(self)

    def IsOutIO(self):
        return _pyxspcomm.XData_IsOutIO(self)

    def IsBiIO(self):
        return _pyxspcomm.XData_IsBiIO(self)

    def IsImmWrite(self):
        return _pyxspcomm.XData_IsImmWrite(self)

    def IsRiseWrite(self):
        return _pyxspcomm.XData_IsRiseWrite(self)

    def IsFallWrite(self):
        return _pyxspcomm.XData_IsFallWrite(self)

    def AsImmWrite(self):
        return _pyxspcomm.XData_AsImmWrite(self)

    def AsRiseWrite(self):
        return _pyxspcomm.XData_AsRiseWrite(self)

    def AsFallWrite(self):
        return _pyxspcomm.XData_AsFallWrite(self)

    def AsBiIO(self):
        return _pyxspcomm.XData_AsBiIO(self)

    def AsInIO(self):
        return _pyxspcomm.XData_AsInIO(self)

    def AsOutIO(self):
        return _pyxspcomm.XData_AsOutIO(self)

    def Flip(self):
        return _pyxspcomm.XData_Flip(self)

    def Invert(self):
        return _pyxspcomm.XData_Invert(self)

    def At(self, index):
        return _pyxspcomm.XData_At(self, index)

    def AsString(self):
        return _pyxspcomm.XData_AsString(self)

    def AsInt64(self):
        return _pyxspcomm.XData_AsInt64(self)

    def AsInt32(self):
        return _pyxspcomm.XData_AsInt32(self)

# Register XData in _pyxspcomm:
_pyxspcomm.XData_swigregister(XData)
class XPort(object):
    thisown = property(lambda x: x.this.own(), lambda x, v: x.this.own(v), doc="The membership flag")
    __repr__ = _swig_repr
    prefix = property(_pyxspcomm.XPort_prefix_get, _pyxspcomm.XPort_prefix_set)
    port_list = property(_pyxspcomm.XPort_port_list_get, _pyxspcomm.XPort_port_list_set)

    def __init__(self, *args):
        _pyxspcomm.XPort_swiginit(self, _pyxspcomm.new_XPort(*args))

    def PortCount(self):
        return _pyxspcomm.XPort_PortCount(self)

    def Add(self, pin, pin_data):
        return _pyxspcomm.XPort_Add(self, pin, pin_data)

    def Del(self, pin):
        return _pyxspcomm.XPort_Del(self, pin)

    def Connect(self, target):
        return _pyxspcomm.XPort_Connect(self, target)

    def NewSubPort(self, subprefix):
        return _pyxspcomm.XPort_NewSubPort(self, subprefix)

    def Get(self, key, raw_key=False):
        return _pyxspcomm.XPort_Get(self, key, raw_key)

    def Flip(self):
        return _pyxspcomm.XPort_Flip(self)

    def AsBiIO(self):
        return _pyxspcomm.XPort_AsBiIO(self)

    def WriteOnRise(self):
        return _pyxspcomm.XPort_WriteOnRise(self)

    def WriteOnFall(self):
        return _pyxspcomm.XPort_WriteOnFall(self)

    def ReadFresh(self, m):
        return _pyxspcomm.XPort_ReadFresh(self, m)

    def SetZero(self):
        return _pyxspcomm.XPort_SetZero(self)

    def String(self, *args):
        return _pyxspcomm.XPort_String(self, *args)
    __swig_destroy__ = _pyxspcomm.delete_XPort

# Register XPort in _pyxspcomm:
_pyxspcomm.XPort_swigregister(XPort)

def Traceback(*args):
    return _pyxspcomm.Traceback(*args)

def uTime():
    return _pyxspcomm.uTime()

def fmtTime(*args):
    return _pyxspcomm.fmtTime(*args)

def fmtNow(*args):
    return _pyxspcomm.fmtNow(*args)
LogLevel_debug = _pyxspcomm.LogLevel_debug
LogLevel_info = _pyxspcomm.LogLevel_info
LogLevel_warning = _pyxspcomm.LogLevel_warning
LogLevel_error = _pyxspcomm.LogLevel_error
LogLevel_fatal = _pyxspcomm.LogLevel_fatal

def get_log_level():
    return _pyxspcomm.get_log_level()

def set_log_level(val):
    return _pyxspcomm.set_log_level(val)

def version():
    return _pyxspcomm.version()

def sArrayHex(buff, size):
    return _pyxspcomm.sArrayHex(buff, size)

def sWith(str, prefix):
    return _pyxspcomm.sWith(str, prefix)

def sLower(input):
    return _pyxspcomm.sLower(input)

def FmtSize(s):
    return _pyxspcomm.FmtSize(s)

def xRandom(a, b):
    return _pyxspcomm.xRandom(a, b)

def XSeed(seed):
    return _pyxspcomm.XSeed(seed)

def checkVersion():
    return _pyxspcomm.checkVersion()

def removeSuffix(str, suffix):
    return _pyxspcomm.removeSuffix(str, suffix)
_TEST_DPI_LR = _pyxspcomm._TEST_DPI_LR
_TEST_DPI_LW = _pyxspcomm._TEST_DPI_LW
_TEST_DPI_VR = _pyxspcomm._TEST_DPI_VR
_TEST_DPI_VW = _pyxspcomm._TEST_DPI_VW
class cb_void_bool_XDatap_u43_voidp(object):
    thisown = property(lambda x: x.this.own(), lambda x, v: x.this.own(v), doc="The membership flag")
    __repr__ = _swig_repr

    def set_force_callable(self):
        return _pyxspcomm.cb_void_bool_XDatap_u43_voidp_set_force_callable(self)

    def __init__(self):
        if self.__class__ == cb_void_bool_XDatap_u43_voidp:
            _self = None
        else:
            _self = self
        _pyxspcomm.cb_void_bool_XDatap_u43_voidp_swiginit(self, _pyxspcomm.new_cb_void_bool_XDatap_u43_voidp(_self, ))
    __swig_destroy__ = _pyxspcomm.delete_cb_void_bool_XDatap_u43_voidp

    def call(self, __args1, __args2, __args3, __args4):
        return _pyxspcomm.cb_void_bool_XDatap_u43_voidp_call(self, __args1, __args2, __args3, __args4)

    def _xfunction(self, cb):
        return _pyxspcomm.cb_void_bool_XDatap_u43_voidp__xfunction(self, cb)

    def __eq__(self, n):
        return _pyxspcomm.cb_void_bool_XDatap_u43_voidp___eq__(self, n)

    def __ne__(self, n):
        return _pyxspcomm.cb_void_bool_XDatap_u43_voidp___ne__(self, n)
    def __disown__(self):
        self.this.disown()
        _pyxspcomm.disown_cb_void_bool_XDatap_u43_voidp(self)
        return weakref.proxy(self)

# Register cb_void_bool_XDatap_u43_voidp in _pyxspcomm:
_pyxspcomm.cb_void_bool_XDatap_u43_voidp_swigregister(cb_void_bool_XDatap_u43_voidp)
class cb_void_xsvLogicp(object):
    thisown = property(lambda x: x.this.own(), lambda x, v: x.this.own(v), doc="The membership flag")
    __repr__ = _swig_repr

    def set_force_callable(self):
        return _pyxspcomm.cb_void_xsvLogicp_set_force_callable(self)

    def __init__(self):
        if self.__class__ == cb_void_xsvLogicp:
            _self = None
        else:
            _self = self
        _pyxspcomm.cb_void_xsvLogicp_swiginit(self, _pyxspcomm.new_cb_void_xsvLogicp(_self, ))
    __swig_destroy__ = _pyxspcomm.delete_cb_void_xsvLogicp

    def call(self, __args1):
        return _pyxspcomm.cb_void_xsvLogicp_call(self, __args1)

    def _xfunction(self, cb):
        return _pyxspcomm.cb_void_xsvLogicp__xfunction(self, cb)

    def __eq__(self, n):
        return _pyxspcomm.cb_void_xsvLogicp___eq__(self, n)

    def __ne__(self, n):
        return _pyxspcomm.cb_void_xsvLogicp___ne__(self, n)
    def __disown__(self):
        self.this.disown()
        _pyxspcomm.disown_cb_void_xsvLogicp(self)
        return weakref.proxy(self)

# Register cb_void_xsvLogicp in _pyxspcomm:
_pyxspcomm.cb_void_xsvLogicp_swigregister(cb_void_xsvLogicp)
class cb_void_xsvLogic(object):
    thisown = property(lambda x: x.this.own(), lambda x, v: x.this.own(v), doc="The membership flag")
    __repr__ = _swig_repr

    def set_force_callable(self):
        return _pyxspcomm.cb_void_xsvLogic_set_force_callable(self)

    def __init__(self):
        if self.__class__ == cb_void_xsvLogic:
            _self = None
        else:
            _self = self
        _pyxspcomm.cb_void_xsvLogic_swiginit(self, _pyxspcomm.new_cb_void_xsvLogic(_self, ))
    __swig_destroy__ = _pyxspcomm.delete_cb_void_xsvLogic

    def call(self, __args1):
        return _pyxspcomm.cb_void_xsvLogic_call(self, __args1)

    def _xfunction(self, cb):
        return _pyxspcomm.cb_void_xsvLogic__xfunction(self, cb)

    def __eq__(self, n):
        return _pyxspcomm.cb_void_xsvLogic___eq__(self, n)

    def __ne__(self, n):
        return _pyxspcomm.cb_void_xsvLogic___ne__(self, n)
    def __disown__(self):
        self.this.disown()
        _pyxspcomm.disown_cb_void_xsvLogic(self)
        return weakref.proxy(self)

# Register cb_void_xsvLogic in _pyxspcomm:
_pyxspcomm.cb_void_xsvLogic_swigregister(cb_void_xsvLogic)
class cb_void_xsvlogicVecValp(object):
    thisown = property(lambda x: x.this.own(), lambda x, v: x.this.own(v), doc="The membership flag")
    __repr__ = _swig_repr

    def set_force_callable(self):
        return _pyxspcomm.cb_void_xsvlogicVecValp_set_force_callable(self)

    def __init__(self):
        if self.__class__ == cb_void_xsvlogicVecValp:
            _self = None
        else:
            _self = self
        _pyxspcomm.cb_void_xsvlogicVecValp_swiginit(self, _pyxspcomm.new_cb_void_xsvlogicVecValp(_self, ))
    __swig_destroy__ = _pyxspcomm.delete_cb_void_xsvlogicVecValp

    def call(self, __args1):
        return _pyxspcomm.cb_void_xsvlogicVecValp_call(self, __args1)

    def _xfunction(self, cb):
        return _pyxspcomm.cb_void_xsvlogicVecValp__xfunction(self, cb)

    def __eq__(self, n):
        return _pyxspcomm.cb_void_xsvlogicVecValp___eq__(self, n)

    def __ne__(self, n):
        return _pyxspcomm.cb_void_xsvlogicVecValp___ne__(self, n)
    def __disown__(self):
        self.this.disown()
        _pyxspcomm.disown_cb_void_xsvlogicVecValp(self)
        return weakref.proxy(self)

# Register cb_void_xsvlogicVecValp in _pyxspcomm:
_pyxspcomm.cb_void_xsvlogicVecValp_swigregister(cb_void_xsvlogicVecValp)
class cb_int_bool(object):
    thisown = property(lambda x: x.this.own(), lambda x, v: x.this.own(v), doc="The membership flag")
    __repr__ = _swig_repr

    def set_force_callable(self):
        return _pyxspcomm.cb_int_bool_set_force_callable(self)

    def __init__(self):
        if self.__class__ == cb_int_bool:
            _self = None
        else:
            _self = self
        _pyxspcomm.cb_int_bool_swiginit(self, _pyxspcomm.new_cb_int_bool(_self, ))
    __swig_destroy__ = _pyxspcomm.delete_cb_int_bool

    def call(self, __args1):
        return _pyxspcomm.cb_int_bool_call(self, __args1)

    def _xfunction(self, cb):
        return _pyxspcomm.cb_int_bool__xfunction(self, cb)

    def __eq__(self, n):
        return _pyxspcomm.cb_int_bool___eq__(self, n)

    def __ne__(self, n):
        return _pyxspcomm.cb_int_bool___ne__(self, n)
    def __disown__(self):
        self.this.disown()
        _pyxspcomm.disown_cb_int_bool(self)
        return weakref.proxy(self)

# Register cb_int_bool in _pyxspcomm:
_pyxspcomm.cb_int_bool_swigregister(cb_int_bool)
class cb_void_u64_voidp(object):
    thisown = property(lambda x: x.this.own(), lambda x, v: x.this.own(v), doc="The membership flag")
    __repr__ = _swig_repr

    def set_force_callable(self):
        return _pyxspcomm.cb_void_u64_voidp_set_force_callable(self)

    def __init__(self):
        if self.__class__ == cb_void_u64_voidp:
            _self = None
        else:
            _self = self
        _pyxspcomm.cb_void_u64_voidp_swiginit(self, _pyxspcomm.new_cb_void_u64_voidp(_self, ))
    __swig_destroy__ = _pyxspcomm.delete_cb_void_u64_voidp

    def call(self, __args1, __args2):
        return _pyxspcomm.cb_void_u64_voidp_call(self, __args1, __args2)

    def _xfunction(self, cb):
        return _pyxspcomm.cb_void_u64_voidp__xfunction(self, cb)

    def __eq__(self, n):
        return _pyxspcomm.cb_void_u64_voidp___eq__(self, n)

    def __ne__(self, n):
        return _pyxspcomm.cb_void_u64_voidp___ne__(self, n)
    def __disown__(self):
        self.this.disown()
        _pyxspcomm.disown_cb_void_u64_voidp(self)
        return weakref.proxy(self)

# Register cb_void_u64_voidp in _pyxspcomm:
_pyxspcomm.cb_void_u64_voidp_swigregister(cb_void_u64_voidp)

# PYTHON code


