#coding=utf8

from typing import Any
from mlvp import Bundle, setup_logging, WriteMode
from mlvp.logger import ERROR
from queue import Queue
import mlvp.funcov as fc
from mlvp.reporter import *
from report import *
setup_logging(ERROR)

class InPC(Bundle):
    signals = ["io_in_bits_s0_pc_0", "io_in_bits_s0_pc_1", "io_in_bits_s0_pc_2", "io_in_bits_s0_pc_3"]


class OutPC(Bundle):
    signals = ["pc_0", "pc_1", "pc_2", "pc_3"]


class InFullPred(Bundle):
    signals = [
        "br_taken_mask_0",
        "br_taken_mask_1",
        "slot_valids_0",
        "slot_valids_1",
        "targets_0",
        "targets_1",
        "jalr_target",
        "offsets_0",
        "offsets_1",
        "fallThroughAddr",
        "is_jalr",
        "is_call",
        "is_ret",
        "is_br_sharing",
        "hit",
    ]


class OutFullPred(Bundle):
    # no jalr_target
    signals = [
        "br_taken_mask_0",
        "br_taken_mask_1",
        "slot_valids_0",
        "slot_valids_1",
        "targets_0",
        "targets_1",
        "offsets_0",
        "offsets_1",
        "fallThroughAddr",
        "is_br_sharing",
        "hit",
    ]


class InOutLastStageFtb(Bundle):
    signals = [
        "entry_valid",
        "entry_brSlots_0_offset",
        "entry_brSlots_0_lower",
        "entry_brSlots_0_tarStat",
        "entry_brSlots_0_sharing",
        "entry_brSlots_0_valid",
        "entry_tailSlot_offset",
        "entry_tailSlot_lower",
        "entry_tailSlot_tarStat"
        "entry_tailSlot_sharing",
        "entry_tailSlot_valid",
        "entry_pftAddr",
        "entry_carry",
        "entry_isCall",
        "entry_isRet",
        "entry_isJalr",
        "entry_last_may_be_rvi_call",
        "entry_always_taken_0",
        "entry_always_taken_1",
    ]


class OutLastStageMeta(Bundle):
    signals = ["meta"]


class OutLastStageSpec(Bundle):
    signals = [
        "ssp",
        "sctr",
        "TOSW_flag",
        "TOSW_value",
        "TOSR_flag",
        "TOSR_value",
        "NOS_flag",
        "NOS_value",
        "topAddr"
    ]


class UpdateBundle(Bundle):
    signals = [
        "valid",
        "bits_ftb_entry_tailSlot_offset",
        "bits_ftb_entry_tailSlot_valid",
        "bits_ftb_entry_isCall",
        "bits_ftb_entry_isRet",
        "bits_cfi_idx_valid",
        "bits_cfi_idx_bits",
        "bits_jmp_taken",
        "bits_meta",
    ]


class RedirectBundle(Bundle):
    signals = [
        "valid",
        "bits_level",
        "bits_cfiUpdate_pc",
        "bits_cfiUpdate_pd_isRVC",
        "bits_cfiUpdate_pd_isCall",
        "bits_cfiUpdate_pd_isRet",
        "bits_cfiUpdate_ssp",
        "bits_cfiUpdate_sctr",
        "bits_cfiUpdate_TOSW_flag",
        "bits_cfiUpdate_TOSW_value",
        "bits_cfiUpdate_TOSR_flag"
        "bits_cfiUpdate_TOSR_value",
        "bits_cfiUpdate_NOS_flag",
        "bits_cfiUpdate_NOS_value",
    ]


class ControlBundle(Bundle):
    signals = [
        "reset",
        "io_reset_vector",
        "io_s3_redirect_2",
        "io_ctrl_ras_enable",
        "io_s0_fire_0",
        "io_s0_fire_1",
        "io_s0_fire_2",
        "io_s0_fire_3",
        "io_s1_fire_0",
        "io_s1_fire_1",
        "io_s1_fire_2",
        "io_s1_fire_3",
        "io_s2_fire_0",
        "io_s2_fire_1",
        "io_s2_fire_2",
        "io_s2_fire_3",
        "io_s3_fire_2",
    ]

class Spec_stack(Bundle):
    signals = [
        # 0_retAddr一直到31_retAddr"
        "0_retAddr",
        "1_retAddr",
        "2_retAddr",
        "3_retAddr",
        "4_retAddr",
        "5_retAddr",
        "6_retAddr",
        "7_retAddr",
        "8_retAddr",
        "9_retAddr",
        "10_retAddr",
        "11_retAddr",
        "12_retAddr",
        "13_retAddr",
        "14_retAddr",
        "15_retAddr",
        "16_retAddr",
        "17_retAddr",
        "18_retAddr",
        "19_retAddr",
        "20_retAddr",
        "21_retAddr",
        "22_retAddr",
        "23_retAddr",
        "24_retAddr",
        "25_retAddr",
        "26_retAddr",
        "27_retAddr",
        "28_retAddr",
        "29_retAddr",
        "30_retAddr",
        "31_retAddr",
    ]


class Commit_stack(Bundle):
    signals = [
        # 0_retAddr一直到31_retAddr"
        "0_retAddr",
        "1_retAddr",
        "2_retAddr",
        "3_retAddr",
        "4_retAddr",
        "5_retAddr",
        "6_retAddr",
        "7_retAddr",
        "8_retAddr",
        "9_retAddr",
        "10_retAddr",
        "11_retAddr",
        "12_retAddr",
        "13_retAddr",
        "14_retAddr",
        "15_retAddr",
    ]

class RASPins(Bundle):

    def __init__(self, dut):
        super().__init__()
        self.dut = dut
        # control
        self.control = ControlBundle()
        # in out pc
        self.in_pc_s0 = InPC()
        self.out_pc_s2 = OutPC.from_prefix("io_out_s2_")
        self.out_pc_s3 = OutPC.from_prefix("io_out_s3_")
        # in pred and last_stage
        self.in_full_pred_s2_0 = InFullPred.from_prefix("io_in_bits_resp_in_0_s2_full_pred_0_")
        self.in_full_pred_s2_1 = InFullPred.from_prefix("io_in_bits_resp_in_0_s2_full_pred_1_")
        self.in_full_pred_s2_2 = InFullPred.from_prefix("io_in_bits_resp_in_0_s2_full_pred_2_") # mark
        self.in_full_pred_s2_3 = InFullPred.from_prefix("io_in_bits_resp_in_0_s2_full_pred_3_")
        self.in_full_pred_s3_0 = InFullPred.from_prefix("io_in_bits_resp_in_0_s3_full_pred_0_")
        self.in_full_pred_s3_1 = InFullPred.from_prefix("io_in_bits_resp_in_0_s3_full_pred_1_")
        self.in_full_pred_s3_2 = InFullPred.from_prefix("io_in_bits_resp_in_0_s3_full_pred_2_")
        self.in_full_pred_s3_3 = InFullPred.from_prefix("io_in_bits_resp_in_0_s3_full_pred_3_")
        self.in_last_stage_ftb = InOutLastStageFtb.from_prefix("io_in_bits_resp_in_0_last_stage_ftb_entry_")
        # out pred and last stage
        self.out_full_pred_s2_0 = OutFullPred.from_prefix("io_out_s2_full_pred_0_")
        self.out_full_pred_s2_1 = OutFullPred.from_prefix("io_out_s2_full_pred_1_")
        self.out_full_pred_s2_2 = OutFullPred.from_prefix("io_out_s2_full_pred_2_")
        self.out_full_pred_s2_3 = OutFullPred.from_prefix("io_out_s2_full_pred_3_")
        self.out_full_pred_s3_0 = OutFullPred.from_prefix("io_out_s3_full_pred_0_")
        self.out_full_pred_s3_1 = OutFullPred.from_prefix("io_out_s3_full_pred_1_")
        self.out_full_pred_s3_2 = OutFullPred.from_prefix("io_out_s3_full_pred_2_")
        self.out_full_pred_s3_3 = OutFullPred.from_prefix("io_out_s3_full_pred_3_")
        self.out_last_stage_ftb = InOutLastStageFtb.from_prefix("io_out_last_stage_ftb_")
        self.out_last_stage_spec = OutLastStageSpec.from_prefix("io_out_last_stage_spec_info_")
        self.out_last_stage_meta = OutLastStageMeta.from_prefix("io_out_last_stage_")
        # RASStack
        self.spec_stack = Spec_stack.from_prefix("RAS_RASStack_spec_queue_")
        self.commit_stack = Commit_stack.from_prefix("RAS_RASStack_commit_stack_")

        # update and redirect
        self.update = UpdateBundle.from_prefix("io_update_")
        self.redirect = RedirectBundle.from_prefix("io_redirect_")

        # data queue
        self.data_to_drive = Queue()

        # init handler
        self.dut.StepRis(self.on_step)

        # bind
        self.bind(dut)
        #self.in_full_pred_s2_0.set_write_mode(WriteMode.Imme)
        #self.in_full_pred_s2_1.set_write_mode(WriteMode.Imme)
        #self.in_full_pred_s2_2.set_write_mode(WriteMode.Imme)
        #self.in_full_pred_s2_3.set_write_mode(WriteMode.Imme)
        #self.in_full_pred_s3_0.set_write_mode(WriteMode.Imme)
        #self.in_full_pred_s3_1.set_write_mode(WriteMode.Imme)
        #self.in_full_pred_s3_2.set_write_mode(WriteMode.Imme)
        #self.in_full_pred_s3_3.set_write_mode(WriteMode.Imme)

    def AddData(self, data):
        if not isinstance(data, list):
            data = [data]
        for d in data:
            self.data_to_drive.put(d)
    
    def on_step(self, cycle):
        if self.data_to_drive.empty():
            return
        data = self.data_to_drive.get()
        if data is None:
            return
        if callable(data):
            data(cycle, self)
            return
        assert isinstance(data, dict), "data should be dict: %s" % data
        # assert (False)
        func = data.pop("func", None)
        self.assign(data)
        #print(f"cycle: {cycle}, set: {data}")
        if callable(func):
            func(cycle, self)

    def reset(self):
        self.AddData([
            cmd_rest_on(),
            cmd_rest_off(),
            *cmd_none(2),            
        ])
        while not self.data_to_drive.empty():
            self.dut.Step(1)

    def push(self, value):
        assert self.data_to_drive.empty(), "data_to_drive should be empty"
        meta = None
        def read_meta(cycle, pins):
            nonlocal meta
            meta = pins.out_last_stage_spec.as_dict()
            #assert meta["topAddr"] == value, "topAddr should be equal to value:%0x, %s"%(value, meta)
        self.AddData([
            *cmd_push(value),
            *cmd_zero(1),
            read_meta,
            *cmd_zero(1),
        ])  
        while not self.data_to_drive.empty():
            self.dut.Step(1)        
        return value, meta
    
    def pop(self):
        assert self.data_to_drive.empty(), "data_to_drive should be empty"
        value = None
        meta = None
        def read_meta(cycle, pins):
            nonlocal value, meta
            value = pins.out_last_stage_spec.topAddr.value
            meta = pins.out_last_stage_spec.as_dict()
        self.AddData([
            *cmd_pop(),
            read_meta,
            *cmd_zero(2),
            *cmd_zero(1),
        ])
        while not self.data_to_drive.empty():
            self.dut.Step(1)
        return value, meta
    
    def empty(self):
        meta = self.out_last_stage_spec.as_dict()
        assert isBefore(meta, "TOSR", "TOSW"), "Need TOSR < TOSW"
        return isBefore(meta, "TOSR", "NOS")
    

    def commit_push(self, meta):
        assert self.data_to_drive.empty(), "data_to_drive should be empty"
        new_meta = None
        def check_commit(cycle, pins):
            nonlocal new_meta
            new_meta = pins.out_last_stage_spec.as_dict()
        self.AddData([
            cmd_commit_push(meta["TOSW_value"], meta["ssp"]),
            *cmd_zero(1, check_commit),
        ])
        while not self.data_to_drive.empty():
            self.dut.Step(1)
        return new_meta["topAddr"], new_meta
    
    def commit_pop(self, meta):
        assert self.data_to_drive.empty(), "data_to_drive should be empty"
        new_meta = None
        def check_commit(cycle, pins):
            nonlocal new_meta
            new_meta = pins.out_last_stage_spec.as_dict()
        self.AddData([
            cmd_commit_pop(meta["ssp"]),
            *cmd_zero(1, check_commit),
        ])
        while not self.data_to_drive.empty():
            self.dut.Step(1)
        return new_meta["topAddr"], new_meta
    
    def redirctRas(self, pc, isRVC, isCall, isRet, ssp, sctr, TOSW_flag, TOSW_value, TOSR_flag, TOSR_value, NOS_flag, NOS_value):
        assert self.data_to_drive.empty(), "data_to_drive should be empty"
        new_meta = None
        def check_redirect(cycle, pins):
            nonlocal new_meta
            new_meta = pins.out_last_stage_spec.as_dict()
        self.AddData([
            cmd_redirect(pc, isRVC, isCall, isRet, ssp, sctr, TOSW_flag, TOSW_value, TOSR_flag, TOSR_value, NOS_flag, NOS_value),
            *cmd_zero(1),
            check_redirect,
            *cmd_zero(1),
        ])
        while not self.data_to_drive.empty():
            self.dut.Step(1)
        if isCall:
            return new_meta
        else:
            return pc + (2 if isRVC else 4)

    def spec_is_empty(self):
        if self.dut.RAS_RASStack_TOSW_value.value == self.dut.RAS_RASStack_BOS_value.value:
            return True
        return False
    

    def keep_after_push(self, addr):   # spec_push
        assert self.data_to_drive.empty(), "data_to_drive should be empty"
        value = None
        meta = None
        def read_meta(cycle, pins):
            nonlocal value, meta
            value = pins.out_last_stage_spec.topAddr.value
            meta = pins.out_last_stage_spec.as_dict()
        self.AddData([
            *s2_push(addr),
            *s3_keep(),
            read_meta,
            *cmd_zero(2),
        ])
        i = 0
        while not self.data_to_drive.empty():
            self.dut.Step(1)
            # debug
            # print("this is step {}".format(i))
            # print("{} is s3_cancel".format(self.dut.RAS_RASStack_io_s3_cancel.value))
            # print("{} is s3_push".format(self.dut.RAS_s3_push.value))
            # print("{} is s3_pushed_in_s2".format(self.dut.RAS_s3_pushed_in_s2.value))
            # print("{} is s2_spec_push".format(self.dut.RAS_s2_spec_push.value))
            # print()
            # i +=1
        return value, meta
    
    def push(self, value):
        assert self.data_to_drive.empty(), "data_to_drive should be empty"
        meta = None
        def read_meta(cycle, pins):
            nonlocal meta
            meta = pins.out_last_stage_spec.as_dict()
            #assert meta["topAddr"] == value, "topAddr should be equal to value:%0x, %s"%(value, meta)
        self.AddData([
            *cmd_push(value),
            *cmd_zero(1),
            read_meta,
            *cmd_zero(1),
        ])
        while not self.data_to_drive.empty():
            self.dut.Step(1)        
        return value, meta

    
    def keep_after_push(self, addr):   # spec_push
        assert self.data_to_drive.empty(), "data_to_drive should be empty"
        value = None
        meta = None
        def read_meta(cycle, pins):
            nonlocal value, meta
            value = pins.out_last_stage_spec.topAddr.value
            meta = pins.out_last_stage_spec.as_dict()
        self.AddData([
            *s2_push(addr),
            *s3_keep(),
            read_meta,
            *cmd_zero(2),
        ])
        i = 0
        while not self.data_to_drive.empty():
            self.dut.Step(1)
            # debug
            # print("this is step {}".format(i))
            # print("{} is s3_cancel".format(self.dut.RAS_RASStack_io_s3_cancel.value))
            # print("{} is s3_push".format(self.dut.RAS_s3_push.value))
            # print("{} is s3_pushed_in_s2".format(self.dut.RAS_s3_pushed_in_s2.value))
            # print("{} is s2_spec_push".format(self.dut.RAS_s2_spec_push.value))
            # print()
            # i +=1
        return value, meta
    
    def pop_after_keep(self):   # spec_push
        assert self.data_to_drive.empty(), "data_to_drive should be empty"
        value = None
        meta = None
        def read_meta(cycle, pins):
            nonlocal value, meta
            value = pins.out_last_stage_spec.topAddr.value
            meta = pins.out_last_stage_spec.as_dict()
        self.AddData([
            *s2_keep(),
            *s3_pop(),
            read_meta,
            *cmd_zero(2),
        ])
        i = 0
        while not self.data_to_drive.empty():
            self.dut.Step(1)
            # # debug
            # print("this is step {}".format(i))
            # print("{} is s3_cancel".format(self.dut.RAS_RASStack_io_s3_cancel.value))
            # print()
            # i +=1
        return value, meta

    def keep_after_pop(self):
        assert self.data_to_drive.empty(), "data_to_drive should be empty"
        meta = None
        def read_meta(cycle, pins):
            nonlocal meta
            meta = pins.out_last_stage_spec.as_dict()
            #assert meta["topAddr"] == value, "topAddr should be equal to value:%0x, %s"%(value, meta)
        self.AddData([
            *s2_pop(),
            *s3_keep(),
            read_meta,
            *cmd_zero(1),
        ])
        i = 0
        while not self.data_to_drive.empty():
            self.dut.Step(1)        
            # debug
            # print("this is step {}".format(i))
            # print("{} is s3_cancel".format(self.dut.RAS_RASStack_io_s3_cancel.value))
            # print()
            # i +=1
        return  meta

    def push_after_keep(self,value):
        assert self.data_to_drive.empty(), "data_to_drive should be empty"
        meta = None
        def read_meta(cycle, pins):
            nonlocal meta
            meta = pins.out_last_stage_spec.as_dict()
            #assert meta["topAddr"] == value, "topAddr should be equal to value:%0x, %s"%(value, meta)
        self.AddData([
            *s2_keep(),
            *s3_push(value),
            read_meta,
            *cmd_zero(1),
        ])
        i = 0
        while not self.data_to_drive.empty():
            self.dut.Step(1)        
            # debug
            # print("this is step {}".format(i))
            # print("{} is s3_cancel".format(self.dut.RAS_RASStack_io_s3_cancel.value))
            # print()
            # i +=1
        return  value, meta
    
    
    def redirect_push(self, pc, isRCV, meta):
        assert self.data_to_drive.empty(), "data_to_drive should be empty"
        new_meta = None
        def check_commit(cycle, pins):
            nonlocal new_meta
            new_meta = pins.out_last_stage_spec.as_dict()
        self.AddData([
            cmd_redirect(pc,isRCV, 1, 0,  meta["ssp"],  meta["sctr"], 
                         meta["TOSW_flag"], meta["TOSW_value"], 
                         meta["TOSR_flag"], meta["TOSR_value"],
                         meta["NOS_flag"], meta["NOS_value"]),
            cmd_redirect_zero(),
            # *cmd_zero(1, check_commit),
            check_commit
        ])
        while not self.data_to_drive.empty():
            self.dut.Step(1)
        return new_meta["topAddr"], new_meta
    
    def redirect_pop(self, meta):
        assert self.data_to_drive.empty(), "data_to_drive should be empty"
        new_meta = None
        def check_commit(cycle, pins):
            nonlocal new_meta
            new_meta = pins.out_last_stage_spec.as_dict()
        self.AddData([
            cmd_redirect(0, 0, 0, 1, meta["ssp"],  meta["sctr"], 
                         meta["TOSW_flag"], meta["TOSW_value"], 
                         meta["TOSR_flag"], meta["TOSR_value"],
                         meta["NOS_flag"], meta["NOS_value"]),
            cmd_redirect_zero(),
            check_commit
        ])
        while not self.data_to_drive.empty():
            self.dut.Step(1)
        return new_meta["topAddr"], new_meta

    def set_base_coverage(self):
        g1 = fc.CovGroup("spec")   # spec_push
        g1.add_watch_point(self.dut.RAS_RASStack_io_spec_push_valid, {"spec_push_valid": fc.Eq(1)}, name="spec_push_valid")
        g1.add_watch_point(self.dut.RAS_RASStack_io_spec_pop_valid, {"spec_pop": fc.Eq(1)}, name="spec_pop")
        g1.add_watch_point(self.dut.RAS_RASStack_spec_overflowed, {"spec_of": fc.Eq(1)}, name="spec_of")

        g2 = fc.CovGroup("commit")
        g2.add_watch_point(self.dut.RAS_RASStack_io_commit_pop_valid, {"commit_pop": fc.Eq(1)}, name="commit_pop")
        g2.add_watch_point(self.dut.RAS_RASStack_io_commit_push_valid, {"commit_push": fc.Eq(1)}, name="commit_push")

        g3 = fc.CovGroup("redirect")
        g3.add_watch_point(self.dut.RAS_RASStack_io_redirect_valid, { "redirect_valid": fc.Eq(1), }, name="redirect_valid")
        g3.add_watch_point(self.dut.RAS_RASStack_io_redirect_isCall, { "redirect_call": fc.Eq(1), }, name="redirect_call")
        g3.add_watch_point(self.dut.RAS_RASStack_io_redirect_isRet, { "redirect_ret": fc.Eq(1), }, name="redirect_ret")

        g4 = fc.CovGroup("reset") # reset
        g4.add_watch_point(self.dut.reset, {"reset": fc.Eq(1)}, name="reset")

        g5 = fc.CovGroup("spec_pop") # writebypass
        g5.add_watch_point(self.dut.RAS_RASStack_writeBypassValid, {"writebypass": fc.Eq(1)}, name="writebypass")

        g6 = fc.CovGroup("update") # s3 update s2
        g6.add_watch_point(self.dut.RAS_RASStack_io_s3_cancel, {"s3_cancel": fc.Eq(1)}, name="s3_cancel")

        self.dut.xclock.StepRis(lambda _: g1.sample())
        self.dut.xclock.StepRis(lambda _: g2.sample())
        self.dut.xclock.StepRis(lambda _: g3.sample())
        self.dut.xclock.StepRis(lambda _: g4.sample())
        self.dut.xclock.StepRis(lambda _: g5.sample())
        self.dut.xclock.StepRis(lambda _: g6.sample())
        return [g1, g2, g3, g4, g5, g6]

def isBefore(data, a, b):
    differentFlag = data[a+"_flag"] ^ data[b+"_flag"]
    compare = data[a+"_value"] < data[b+"_value"]
    return (differentFlag ^ compare) == 1


def cmd_none(n=1):
    return [None] * n


def cmd_rest_on():
    return {"control": {"reset": 1, "io_ctrl_ras_enable": 1,  "io_s2_fire_2": 1}}


def cmd_rest_off():
    return {"control": {"reset":0, "io_ctrl_ras_enable": 1,  "io_s2_fire_2": 1}}


def cmd_zero(n=0, cb=None):
        ret = {
            "control": {"io_ctrl_ras_enable": 1,  "io_s2_fire_2": 1, "io_s3_fire_2": 1},
            "*":0,
           }
        if cb is not None:
            ret.update({"func": cb})
        if n <= 0:
            return ret
        return [ret] * n


def cmd_push(address):
    # _s2_spec_pop_T_8 =
    #    io_in_bits_resp_in_0_s2_full_pred_2_slot_valids_0
    #    & io_in_bits_resp_in_0_s2_full_pred_2_br_taken_mask_0;
    # _s2_spec_pop_T_9 =
    #    io_in_bits_resp_in_0_s2_full_pred_2_is_br_sharing
    #    & io_in_bits_resp_in_0_s2_full_pred_2_br_taken_mask_1;

    # s2_spec_push =
    #    io_s2_fire_2 & ~(_s2_spec_pop_T_8 & io_in_bits_resp_in_0_s2_full_pred_2_hit)
    #    & io_in_bits_resp_in_0_s2_full_pred_2_slot_valids_1
    #    & (_s2_spec_pop_T_9 | ~io_in_bits_resp_in_0_s2_full_pred_2_is_br_sharing)
    #    & io_in_bits_resp_in_0_s2_full_pred_2_hit
    #    & ~io_in_bits_resp_in_0_s2_full_pred_2_is_br_sharing
    #    & io_in_bits_resp_in_0_s2_full_pred_2_is_call & ~io_s3_redirect_2;
    return [{
            "control": {"io_s3_redirect_2": 0, "io_ctrl_ras_enable": 1,  "io_s2_fire_2": 1, "io_s3_fire_2": 1},
            "in_full_pred_s2_2": {"is_call": 1, "is_ret": 0, "is_br_sharing": 0, "hit": 1, "slot_valids_1": 1, "br_taken_mask_1": 1, "fallThroughAddr": address,
                                  "slot_valids_0": 0, "br_taken_mask_0": 0},
            "in_full_pred_s3_2": {"is_call": 0, "is_ret": 0, "is_br_sharing": 0, "hit": 1, "slot_valids_1": 1, "br_taken_mask_1": 1, "fallThroughAddr": address,
                                  "slot_valids_0": 0, "br_taken_mask_0": 0},
           },
            {
            "control": {"io_s3_redirect_2": 0, "io_ctrl_ras_enable": 1,  "io_s2_fire_2": 1, "io_s3_fire_2": 1},
            "in_full_pred_s2_2": {"is_call": 0, "is_ret": 0, "is_br_sharing": 0, "hit": 1, "slot_valids_1": 1, "br_taken_mask_1": 1, "fallThroughAddr": address,
                                  "slot_valids_0": 0, "br_taken_mask_0": 0},
            "in_full_pred_s3_2": {"is_call": 1, "is_ret": 0, "is_br_sharing": 0, "hit": 1, "slot_valids_1": 1, "br_taken_mask_1": 1, "fallThroughAddr": address,
                                  "slot_valids_0": 0, "br_taken_mask_0": 0},
           }]


def cmd_xpush(address):
    return {
            "control": {"io_s3_redirect_2": 0, "io_ctrl_ras_enable": 1,  "io_s2_fire_2": 1, "io_s3_fire_2": 1},
            "in_full_pred_s2_2": {"is_call": 0, "is_ret": 0, "is_br_sharing": 0, "hit": 1, "slot_valids_1": 1, "br_taken_mask_1": 1, "fallThroughAddr": address,
                                  "slot_valids_0": 0, "br_taken_mask_0": 0},
            "in_full_pred_s3_2": {"is_call": 1, "is_ret": 0, "is_br_sharing": 0, "hit": 1, "slot_valids_1": 1, "br_taken_mask_1": 1, "fallThroughAddr": address,
                                  "slot_valids_0": 0, "br_taken_mask_0": 0},
           }


def cmd_pop():
    # s2_spec_pop =
    #    io_s2_fire_2 & ~(_s2_spec_pop_T_8 & io_in_bits_resp_in_0_s2_full_pred_2_hit)
    #    & io_in_bits_resp_in_0_s2_full_pred_2_slot_valids_1
    #    & (_s2_spec_pop_T_9 | ~io_in_bits_resp_in_0_s2_full_pred_2_is_br_sharing)
    #    & io_in_bits_resp_in_0_s2_full_pred_2_hit
    #    & ~io_in_bits_resp_in_0_s2_full_pred_2_is_br_sharing
    #    & io_in_bits_resp_in_0_s2_full_pred_2_is_ret & ~io_s3_redirect_2;	
    return [{
            "control": {"io_s3_redirect_2": 0, "io_ctrl_ras_enable": 1,  "io_s2_fire_2": 1, "io_s3_fire_2": 1},
            "in_full_pred_s2_2": {"is_call": 0, "is_ret": 1, "is_br_sharing": 0, "hit": 1, "slot_valids_1": 1, "br_taken_mask_1": 1, "fallThroughAddr": 0x00,
                                  "slot_valids_0": 0, "br_taken_mask_0": 0},
            "in_full_pred_s3_2": {"is_call": 0, "is_ret": 0, "is_br_sharing": 0, "hit": 1, "slot_valids_1": 1, "br_taken_mask_1": 1, "fallThroughAddr": 0x00,
                                  "slot_valids_0": 0, "br_taken_mask_0": 0},
           },
            {
            "control": {"io_s3_redirect_2": 0, "io_ctrl_ras_enable": 1,  "io_s2_fire_2": 1, "io_s3_fire_2": 0},
            "in_full_pred_s2_2": {"is_call": 0, "is_ret": 0, "is_br_sharing": 0, "hit": 1, "slot_valids_1": 1, "br_taken_mask_1": 1, "fallThroughAddr": 0x00,
                                  "slot_valids_0": 0, "br_taken_mask_0": 0},
            "in_full_pred_s3_2": {"is_call": 0, "is_ret": 1, "is_br_sharing": 0, "hit": 1, "slot_valids_1": 1, "br_taken_mask_1": 1, "fallThroughAddr": 0x00,
                                  "slot_valids_0": 0, "br_taken_mask_0": 0},
           }]

def cmd_xpop():
    return {
            "control": {"io_s3_redirect_2": 0, "io_ctrl_ras_enable": 1,  "io_s2_fire_2": 1, "io_s3_fire_2": 1},
            "in_full_pred_s2_2": {"is_call": 0, "is_ret": 0, "is_br_sharing": 0, "hit": 1, "slot_valids_1": 1, "br_taken_mask_1": 1, "fallThroughAddr": 0x00,
                                  "slot_valids_0": 0, "br_taken_mask_0": 0},
            "in_full_pred_s3_2": {"is_call": 0, "is_ret": 1, "is_br_sharing": 0, "hit": 1, "slot_valids_1": 1, "br_taken_mask_1": 1, "fallThroughAddr": 0x00,
                                  "slot_valids_0": 0, "br_taken_mask_0": 0},
           }

def cmd_commit_push(tosw, ssp):
    # io_commit_push_valid
    #  (io_update_valid & io_update_bits_ftb_entry_tailSlot_valid
    #   & io_update_bits_ftb_entry_isCall & io_update_bits_jmp_taken
    #   & io_update_bits_cfi_idx_valid & _GEN_1)
    # _GEN_1 =
    # io_update_bits_cfi_idx_bits == io_update_bits_ftb_entry_tailSlot_offset;
    print("{} is tosw".format(tosw))
    print("{} is ssp".format(ssp))
    return {
        "control": {"io_s3_redirect_2": 0, "io_ctrl_ras_enable": 1,  "io_s2_fire_2": 0, "io_s3_fire_2": 0},
        "update": {"valid": 1, "bits_ftb_entry_tailSlot_valid": 1, 
                               "bits_ftb_entry_isCall": 1, 
                               "bits_ftb_entry_isRet": 0,
                               "bits_jmp_taken" : 1, "bits_cfi_idx_valid" :1, "bits_cfi_idx_bits" : 1, "bits_ftb_entry_tailSlot_offset" : 1,
                "bits_meta" : (tosw) + (ssp << 6)},
        "*": 0,
    }



def cmd_commit_pop(ssp):
    """
        io_commit_pop_valid
      (io_update_valid & io_update_bits_ftb_entry_tailSlot_valid
       & io_update_bits_ftb_entry_isRet & io_update_bits_jmp_taken
       & io_update_bits_cfi_idx_valid & _GEN_1)
       """
    return {
        "control": {"io_s3_redirect_2": 0, "io_ctrl_ras_enable": 1,  "io_s2_fire_2": 0, "io_s3_fire_2": 0},
        "update": {"valid": 1, "bits_ftb_entry_tailSlot_valid": 1, 
                               "bits_ftb_entry_isCall": 0, 
                               "bits_ftb_entry_isRet": 1,
                               "bits_jmp_taken" : 1, "bits_cfi_idx_valid" :1, "bits_cfi_idx_bits" : 1, "bits_ftb_entry_tailSlot_offset" : 1,
                "bits_meta" : (ssp << 9)},
        "*": 0,
    }

def cmd_redirect(pc, isRVC, isCall, isRet, ssp, sctr, TOSW_flag, TOSW_value, TOSR_flag, TOSR_value, NOS_flag, NOS_value ):
    return {
        "control": {"io_s3_redirect_2": 0, "io_ctrl_ras_enable": 1,  "io_s2_fire_2": 0, "io_s3_fire_2": 0},
        "redirect": {"valid": 1, "bits_level": 0, "bits_cfiUpdate_pc": pc, "bits_cfiUpdate_pd_isRVC": isRVC, "bits_cfiUpdate_pd_isCall": isCall, "bits_cfiUpdate_pd_isRet": isRet,
                     "bits_cfiUpdate_ssp": ssp, "bits_cfiUpdate_sctr": sctr, "bits_cfiUpdate_TOSW_flag": TOSW_flag, "bits_cfiUpdate_TOSW_value": TOSW_value,
                     "bits_cfiUpdate_TOSR_flag": TOSR_flag, "bits_cfiUpdate_TOSR_value": TOSR_value, "bits_cfiUpdate_NOS_flag": NOS_flag, "bits_cfiUpdate_NOS_value": NOS_value},
        "*": 0,
        
    }

def cmd_redirect_zero():
    return {
        "control": {"io_s3_redirect_2": 0, "io_ctrl_ras_enable": 1,  "io_s2_fire_2": 0, "io_s3_fire_2": 0},
        "redirect": {"valid": 0, "bits_level": 0, "bits_cfiUpdate_pc": 0, "bits_cfiUpdate_pd_isRVC": 0, "bits_cfiUpdate_pd_isCall": 0, "bits_cfiUpdate_pd_isRet": 0,
                     "bits_cfiUpdate_ssp": 0, "bits_cfiUpdate_sctr": 0, "bits_cfiUpdate_TOSW_flag": 0, "bits_cfiUpdate_TOSW_value": 0,
                     "bits_cfiUpdate_TOSR_flag": 0, "bits_cfiUpdate_TOSR_value": 0, "bits_cfiUpdate_NOS_flag": 0, "bits_cfiUpdate_NOS_value": 0}
    }

def s2_push(address):
    # _s2_spec_pop_T_8 =
    #    io_in_bits_resp_in_0_s2_full_pred_2_slot_valids_0
    #    & io_in_bits_resp_in_0_s2_full_pred_2_br_taken_mask_0;
    # _s2_spec_pop_T_9 =
    #    io_in_bits_resp_in_0_s2_full_pred_2_is_br_sharing
    #    & io_in_bits_resp_in_0_s2_full_pred_2_br_taken_mask_1;

    # s2_spec_push =
    #    io_s2_fire_2 & ~(_s2_spec_pop_T_8 & io_in_bits_resp_in_0_s2_full_pred_2_hit)
    #    & io_in_bits_resp_in_0_s2_full_pred_2_slot_valids_1
    #    & (_s2_spec_pop_T_9 | ~io_in_bits_resp_in_0_s2_full_pred_2_is_br_sharing)
    #    & io_in_bits_resp_in_0_s2_full_pred_2_hit
    #    & ~io_in_bits_resp_in_0_s2_full_pred_2_is_br_sharing
    #    & io_in_bits_resp_in_0_s2_full_pred_2_is_call & ~io_s3_redirect_2;
    return [{
            "control": {"io_s3_redirect_2": 0, "io_ctrl_ras_enable": 1,  "io_s2_fire_2": 1, "io_s3_fire_2": 1},
            "in_full_pred_s2_2": {"is_call": 1, "is_ret": 0, "is_br_sharing": 0, "hit": 1, "slot_valids_1": 1, "br_taken_mask_1": 1, "fallThroughAddr": address,
                                  "slot_valids_0": 0, "br_taken_mask_0": 0},
            "*": 0,
           }]

def s2_pop():
    # s2_spec_pop =
    #    io_s2_fire_2 & ~(_s2_spec_pop_T_8 & io_in_bits_resp_in_0_s2_full_pred_2_hit)
    #    & io_in_bits_resp_in_0_s2_full_pred_2_slot_valids_1
    #    & (_s2_spec_pop_T_9 | ~io_in_bits_resp_in_0_s2_full_pred_2_is_br_sharing)
    #    & io_in_bits_resp_in_0_s2_full_pred_2_hit
    #    & ~io_in_bits_resp_in_0_s2_full_pred_2_is_br_sharing
    #    & io_in_bits_resp_in_0_s2_full_pred_2_is_ret & ~io_s3_redirect_2;	
    return [{
            "control": {"io_s3_redirect_2": 0, "io_ctrl_ras_enable": 1,  "io_s2_fire_2": 1, "io_s3_fire_2": 1},
            "in_full_pred_s2_2": {"is_call": 0, "is_ret": 1, "is_br_sharing": 0, "hit": 1, "slot_valids_1": 1, "br_taken_mask_1": 1, "fallThroughAddr": 0x00,
                                  "slot_valids_0": 0, "br_taken_mask_0": 0},
            "*": 0,}]

def s2_keep():
    # s2_spec_pop =
    #    io_s2_fire_2 & ~(_s2_spec_pop_T_8 & io_in_bits_resp_in_0_s2_full_pred_2_hit)
    #    & io_in_bits_resp_in_0_s2_full_pred_2_slot_valids_1
    #    & (_s2_spec_pop_T_9 | ~io_in_bits_resp_in_0_s2_full_pred_2_is_br_sharing)
    #    & io_in_bits_resp_in_0_s2_full_pred_2_hit
    #    & ~io_in_bits_resp_in_0_s2_full_pred_2_is_br_sharing
    #    & io_in_bits_resp_in_0_s2_full_pred_2_is_ret & ~io_s3_redirect_2;	
    return [{
            "control": {"io_s3_redirect_2": 0, "io_ctrl_ras_enable": 1,  "io_s2_fire_2": 1, "io_s3_fire_2": 1},
            "in_full_pred_s2_2": {"is_call": 0, "is_ret": 0, "is_br_sharing": 0, "hit": 0, "slot_valids_1": 0, "br_taken_mask_1": 0,
                                  "slot_valids_0": 0, "br_taken_mask_0": 0},
            "*": 0,}]


def s3_push(address):
    """
    ~(
    (io_in_bits_resp_in_0_s3_full_pred_2_slot_valids_0 & io_in_bits_resp_in_0_s3_full_pred_2_br_taken_mask_0)
    & io_in_bits_resp_in_0_s3_full_pred_2_hit
    )
    & io_in_bits_resp_in_0_s3_full_pred_2_slot_valids_1
    & (
    (io_in_bits_resp_in_0_s3_full_pred_2_is_br_sharing & io_in_bits_resp_in_0_s3_full_pred_2_br_taken_mask_1)
    | ~io_in_bits_resp_in_0_s3_full_pred_2_is_br_sharing
    )
    & io_in_bits_resp_in_0_s3_full_pred_2_hit
    & ~io_in_bits_resp_in_0_s3_full_pred_2_is_br_sharing
    & io_in_bits_resp_in_0_s3_full_pred_2_is_call;
    """
    return [{
            "control": {"io_s3_redirect_2": 0, "io_ctrl_ras_enable": 1,  "io_s2_fire_2": 1, "io_s3_fire_2": 1},
            "in_full_pred_s2_2": {"is_call": 0, "is_ret": 0, "is_br_sharing": 0, "hit": 0, "slot_valids_1": 0, "br_taken_mask_1": 0, "fallThroughAddr": 0,
                                  "slot_valids_0": 0, "br_taken_mask_0": 0},
            "in_full_pred_s3_2": {"is_call": 1, "is_ret": 0, "is_br_sharing": 0, "hit": 1, "slot_valids_1": 1, "br_taken_mask_1": 0, "fallThroughAddr": address,
                                  "slot_valids_0": 0, "br_taken_mask_0": 0},
            "*": 0,
    }]

def s3_keep():
    """
    ~(
    (io_in_bits_resp_in_0_s3_full_pred_2_slot_valids_0 & io_in_bits_resp_in_0_s3_full_pred_2_br_taken_mask_0)
    & io_in_bits_resp_in_0_s3_full_pred_2_hit
    )
    & io_in_bits_resp_in_0_s3_full_pred_2_slot_valids_1
    & (
    (io_in_bits_resp_in_0_s3_full_pred_2_is_br_sharing & io_in_bits_resp_in_0_s3_full_pred_2_br_taken_mask_1)
    | ~io_in_bits_resp_in_0_s3_full_pred_2_is_br_sharing
    )
    & io_in_bits_resp_in_0_s3_full_pred_2_hit
    & ~io_in_bits_resp_in_0_s3_full_pred_2_is_br_sharing
    & io_in_bits_resp_in_0_s3_full_pred_2_is_call;
    """
    return [{
            "control": {"io_s3_redirect_2": 0, "io_ctrl_ras_enable": 1,  "io_s2_fire_2": 1, "io_s3_fire_2": 1},
            "in_full_pred_s2_2": {"is_call": 0, "is_ret": 0, "is_br_sharing": 0, "hit": 0, "slot_valids_1": 0, "br_taken_mask_1": 0, "fallThroughAddr": 0,
                                  "slot_valids_0": 0, "br_taken_mask_0": 0},
            "in_full_pred_s3_2": {"is_call": 0, "is_ret": 0, "is_br_sharing": 0, "hit": 0, "slot_valids_1": 0, "br_taken_mask_1": 0, "fallThroughAddr": 0,
                                  "slot_valids_0": 0, "br_taken_mask_0": 0},
    }]

def s3_pop():
    """
wire s3_pop = 
            ~(
                (io_in_bits_resp_in_0_s3_full_pred_2_slot_valids_0 
                & io_in_bits_resp_in_0_s3_full_pred_2_br_taken_mask_0
            ) 
            & io_in_bits_resp_in_0_s3_full_pred_2_hit
            )
            & io_in_bits_resp_in_0_s3_full_pred_2_slot_valids_1
            & io_in_bits_resp_in_0_s3_full_pred_2_hit
            & ~io_in_bits_resp_in_0_s3_full_pred_2_is_br_sharing
            & io_in_bits_resp_in_0_s3_full_pred_2_is_ret;
    """
    return [{
            "control": {"io_s3_redirect_2": 0, "io_ctrl_ras_enable": 1,  "io_s2_fire_2": 1, "io_s3_fire_2": 1},
            "in_full_pred_s2_2": {"is_call": 0, "is_ret": 0, "is_br_sharing": 0, "hit": 0, "slot_valids_1": 0, "br_taken_mask_1": 0, 
                                  "slot_valids_0": 0, "br_taken_mask_0": 0},
            "in_full_pred_s3_2": {"is_call": 0, "is_ret": 1, "is_br_sharing": 0, "hit": 1, "slot_valids_1": 1, "br_taken_mask_1": 0, 
                                  "slot_valids_0": 0, "br_taken_mask_0": 0},
    }]