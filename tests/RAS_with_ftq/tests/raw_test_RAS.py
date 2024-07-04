import mlvp
import logging

import os
os.sys.path.append(os.path.dirname(os.path.abspath(__file__)) + "/..")

from env.bundle import *
from env.bpu_top import *
from env.config import *

os.sys.path.append(DUT_PATH)

from UT_RAS import *

import mlvp.funcov as fc
from mlvp.reporter import *

import logging

import random

def generate_random_number(bit_length):
    if bit_length <= 0:
        raise ValueError("The bit length must be greater than zero")
    
    max_value = (1 << bit_length) - 1
    
    return random.randint(0, max_value)


class RAS(DUTRAS):
    def __init__(self, *args, **kwargs):
        super().__init__(*args, **kwargs)
    def finalize(self):
        super().finalize()

def ras_init(dut):
    ras = RAS(dut)
    ras.init_clock("clock")
    return ras
if __name__ == "__main__":
    ras = RAS(
        waveform_filename="report/test_ras.vcd", 
        coverage_filename="report/ras_coverage.dat"
        )
    ras.init_clock("clock")
    # bind 接口
    ras_in = RASIn.from_prefix("io_in_").set_name("ras_in").bind(ras)
    ras_out = BranchPredictionResp.from_prefix("io_out_").set_name("ras_out").bind(ras)
    ras_update = UpdateBundle.from_prefix("io_update_").set_name("ras_update").bind(ras)
    pipeline_ctrl = PipelineCtrlBundle.from_prefix("io_").set_name("pipeline_ctrl").bind(ras)
    enable_ctrl = EnableCtrlBundle.from_prefix("io_ctrl_").set_name("enable_ctrl").bind(ras)
    ras_redirect = RASRediret.from_prefix("io_redirect_").set_name("ras_redirect").bind(ras)

    # 测试push的功能点
    ras.reset.value = 1
    ras.Step(2)
    ras.reset.value = 0
    ras.Step(1)
    ras.io_s2_fire_2.value = 1
    ras.io_s3_fire_2.value = 1
    ras.io_s3_redirect_2.value = 0
    ras.io_ctrl_ras_enable.value = 1

    push_full_pred = {
                "hit" : 1 , "slot_valids_0" : 0 , "slot_valids_1": 1 , "targets_0": 0 , "targets_1": 0 ,
               "offsets_0": 0 , "offsets_1": 0 , "fallThroughAddr": 0x80001234 , "fallThroughErr": 0 ,
               "is_jal": 0 , "is_jalr": 0 , "is_call": 1 , "is_ret": 0 , "is_br_sharing": 0 ,
               "last_may_be_rvi_call": 0 ,
               "br_taken_mask_0": 0 , "br_taken_mask_1": 1 ,
               "jalr_target": 0 
               }
    ras_in.bits_resp_in.s2.full_pred_0.assign(push_full_pred)
    ras_in.bits_resp_in.s2.full_pred_1.assign(push_full_pred)
    ras_in.bits_resp_in.s2.full_pred_2.assign(push_full_pred)
    ras_in.bits_resp_in.s2.full_pred_3.assign(push_full_pred)
    ras_in.bits_resp_in.s3.full_pred_0.assign(push_full_pred)
    ras_in.bits_resp_in.s3.full_pred_1.assign(push_full_pred)
    ras_in.bits_resp_in.s3.full_pred_2.assign(push_full_pred)
    ras_in.bits_resp_in.s3.full_pred_3.assign(push_full_pred)
    ras.Step(50)

    push_full_pred_zero = dict.fromkeys(push_full_pred, 0)
    ras_in.bits_resp_in.s2.full_pred_0.assign(push_full_pred_zero)
    ras_in.bits_resp_in.s2.full_pred_0.assign(push_full_pred_zero)
    ras_in.bits_resp_in.s2.full_pred_1.assign(push_full_pred_zero)
    ras_in.bits_resp_in.s2.full_pred_2.assign(push_full_pred_zero)
    ras_in.bits_resp_in.s2.full_pred_3.assign(push_full_pred_zero)
    ras_in.bits_resp_in.s3.full_pred_0.assign(push_full_pred_zero)
    ras_in.bits_resp_in.s3.full_pred_1.assign(push_full_pred_zero)
    ras_in.bits_resp_in.s3.full_pred_2.assign(push_full_pred_zero)
    ras_in.bits_resp_in.s3.full_pred_3.assign(push_full_pred_zero)
    # 测试pop的功能点 spec.pop.val=1 spec.push.val = 0

    ras.io_s2_fire_2.value = 1
    ras.io_s3_redirect_2.value = 0
    ras.io_s3_fire_2.value = 1
    pop_full_pred = {
            "hit" : 1 , "slot_valids_0" : 0 , "slot_valids_1": 1 , "targets_0": 0 , "targets_1": 0 ,
            "offsets_0": 0 , "offsets_1": 0 , "fallThroughAddr": 0x80001234 , "fallThroughErr": 0 ,
            "is_jal": 0 , "is_jalr": 0 , "is_call": 0 , "is_ret": 1 , "is_br_sharing": 0 ,
            "last_may_be_rvi_call": 0 ,
            "br_taken_mask_0": 0 , "br_taken_mask_1": 0 ,
            "jalr_target": 0 
            }
    ras_in.bits_resp_in.s2.full_pred_0.assign(pop_full_pred)
    ras_in.bits_resp_in.s2.full_pred_1.assign(pop_full_pred)
    ras_in.bits_resp_in.s2.full_pred_2.assign(pop_full_pred)
    ras_in.bits_resp_in.s2.full_pred_3.assign(pop_full_pred)
    ras_in.bits_resp_in.s3.full_pred_0.assign(pop_full_pred)
    ras_in.bits_resp_in.s3.full_pred_1.assign(pop_full_pred)
    ras_in.bits_resp_in.s3.full_pred_2.assign(pop_full_pred)
    ras_in.bits_resp_in.s3.full_pred_3.assign(pop_full_pred)
    ras.Step(34)


    # ras.Step(24)

    # s3_cancel = io.s3_fire(2) && (s3_pushed_in_s2 =/= s3_push || s3_popped_in_s2 =/= s3_pop)
    """  wire        s3_push =
    ~(_s3_pop_T_8 & io_in_bits_resp_in_0_s3_full_pred_2_hit)
    & io_in_bits_resp_in_0_s3_full_pred_2_slot_valids_1
    & (_s3_pop_T_9 | ~io_in_bits_resp_in_0_s3_full_pred_2_is_br_sharing)
    & io_in_bits_resp_in_0_s3_full_pred_2_hit
    & ~io_in_bits_resp_in_0_s3_full_pred_2_is_br_sharing
    & io_in_bits_resp_in_0_s3_full_pred_2_is_call;	
    """
    


    """
      wire        _GEN_1 =
    io_update_bits_cfi_idx_bits == io_update_bits_ftb_entry_tailSlot_offset;

    .io_commit_push_valid
    (io_update_valid & io_update_bits_ftb_entry_tailSlot_valid
    & io_update_bits_ftb_entry_isCall & io_update_bits_jmp_taken
    & io_update_bits_cfi_idx_valid & _GEN_1),	// @[src/main/scala/xiangshan/frontend/FrontendBundle.scala:658:77, src/main/scala/xiangshan/frontend/newRAS.scala:643:42]
    """
    ras.finalize()