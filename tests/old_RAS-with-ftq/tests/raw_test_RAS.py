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
    # 测试push的功能点
    ras.io_s3_redirect_2.value = 0
    ras.io_s2_fire_2.value = 1
    ras.io_s3_fire_2.value = 1


    ras.io_in_bits_resp_in_0_s2_full_pred_2_slot_valids_0.value = 0
    ras.io_in_bits_resp_in_0_s2_full_pred_2_hit.value = 1
    ras.io_in_bits_resp_in_0_s2_full_pred_2_slot_valids_1.value = 1
    ras.io_in_bits_resp_in_0_s2_full_pred_2_is_br_sharing.value = 0
    ras.io_in_bits_resp_in_0_s2_full_pred_2_is_call.value = 1
    ras.io_in_bits_resp_in_0_s2_full_pred_2_slot_valids_1.value = 1
    ras.io_in_bits_resp_in_0_s2_full_pred_2_br_taken_mask_1.value = 1
    ras.io_in_bits_resp_in_0_s2_full_pred_2_br_taken_mask_0.value = 0
    ras.io_in_bits_resp_in_0_s2_full_pred_0_fallThroughAddr.value = 0x80001234
    ras.io_in_bits_resp_in_0_s2_full_pred_1_fallThroughAddr.value = 0x80001234
    ras.io_in_bits_resp_in_0_s2_full_pred_2_fallThroughAddr.value = 0x80001234
    ras.io_in_bits_resp_in_0_s2_full_pred_3_fallThroughAddr.value = 0x80001234
    ras.io_in_bits_resp_in_0_s2_full_pred_2_last_may_be_rvi_call.value = 0


    ras.io_in_bits_resp_in_0_s3_full_pred_2_slot_valids_0.value = 0
    ras.io_in_bits_resp_in_0_s3_full_pred_2_hit.value = 1
    ras.io_in_bits_resp_in_0_s3_full_pred_2_slot_valids_1.value = 1
    ras.io_in_bits_resp_in_0_s3_full_pred_2_is_br_sharing.value = 0
    ras.io_in_bits_resp_in_0_s3_full_pred_2_is_call.value = 1
    ras.io_in_bits_resp_in_0_s3_full_pred_2_slot_valids_1.value = 1
    ras.io_in_bits_resp_in_0_s3_full_pred_2_br_taken_mask_1.value = 1
    ras.io_in_bits_resp_in_0_s2_full_pred_2_br_taken_mask_0.value = 0
    ras.io_in_bits_resp_in_0_s3_full_pred_0_fallThroughAddr.value = 0x80005678  
    ras.io_in_bits_resp_in_0_s3_full_pred_1_fallThroughAddr.value = 0x80005678 
    ras.io_in_bits_resp_in_0_s3_full_pred_1_fallThroughAddr.value = 0x80005678 
    ras.io_in_bits_resp_in_0_s3_full_pred_1_fallThroughAddr.value = 0x80005678 
    ras.Step(34)
    
    # 测试pop的功能点
    ras.io_s2_fire_2.value = 1
    ras.io_in_bits_resp_in_0_s2_full_pred_2_hit.value = 1
    ras.io_in_bits_resp_in_0_s2_full_pred_2_slot_valids_1.value = 1
    ras.io_in_bits_resp_in_0_s2_full_pred_2_is_br_sharing.value = 0
    ras.io_in_bits_resp_in_0_s2_full_pred_2_br_taken_mask_0.value = 0
    ras.io_in_bits_resp_in_0_s2_full_pred_2_is_ret.value = 1
    ras.io_s3_redirect_2.value = 0
    ras.io_s3_fire_2.value = 1
    ras.io_in_bits_resp_in_0_s3_full_pred_2_hit.value = 1
    ras.io_in_bits_resp_in_0_s3_full_pred_2_slot_valids_1.value = 1
    ras.io_in_bits_resp_in_0_s3_full_pred_2_is_br_sharing.value = 0
    ras.io_in_bits_resp_in_0_s3_full_pred_2_br_taken_mask_0.value = 0
    ras.io_in_bits_resp_in_0_s3_full_pred_2_is_ret.value = 1
    ras.io_s3_redirect_2.value = 0
    ras.Step(32)

    # s3_cancel = io.s3_fire(2) && (s3_pushed_in_s2 =/= s3_push || s3_popped_in_s2 =/= s3_pop)
    """  wire        s3_push =
    ~(_s3_pop_T_8 & io_in_bits_resp_in_0_s3_full_pred_2_hit)
    & io_in_bits_resp_in_0_s3_full_pred_2_slot_valids_1
    & (_s3_pop_T_9 | ~io_in_bits_resp_in_0_s3_full_pred_2_is_br_sharing)
    & io_in_bits_resp_in_0_s3_full_pred_2_hit
    & ~io_in_bits_resp_in_0_s3_full_pred_2_is_br_sharing
    & io_in_bits_resp_in_0_s3_full_pred_2_is_call;	
    """
    
    ras.finalize()