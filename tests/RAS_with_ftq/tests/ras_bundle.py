#coding=utf8

from mlvp import Bundle, setup_logging
from mlvp.logger import ERROR
from queue import Queue

class PC(Bundle):
    signals = [ "pc_0", "pc_1", "pc_2", "pc_3" ]

class Full_pred(Bundle):
    signals = ["hit", 
               "slot_valids_0", "slot_valids_1", 
               "targets_0", "targets_1",
               "offsets_0", "offsets_1", 
               "fallThroughAddr", "fallThroughErr",
               "is_jal", "is_jalr", "is_call", "is_ret", "is_br_sharing",
               "last_may_be_rvi_call",
               "br_taken_mask_0", "br_taken_mask_1",
               "jalr_target"]

class FTB_entry(Bundle):
    signals = ["brSlots_0_offset", "brSlots_0_lower", "brSlots_0_tarStat", "brSlots_0_valid",
               "tailSlot_offset", "tailSlot_lower", "tailSlot_tarStat", "tailSlot_sharing", "tailSlot_valid",
               "pftAddr", "carry", 
               "isCall", "isRet", "isJalr", 
               "last_may_be_rvi_call",
               "always_taken_0", "always_taken_1"]

class Stack(Bundle):
    signals = [
        "ssp", "sctr",
        "TOSW_flag", "TOSW_value",
        "TOSR_flag", "TOSR_value",
        "NOS_flag", "NOS_value"
        "topAddr"
    ]

class OutMeta(Bundle):
    signals = [
        "meta"
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


class RAS_pins(Bundle):
    
    def __init__(self, dut):
        super().__init__()
        self.dut = dut
        #control
        self.control = ControlBundle()

        #in_pc
        self.in_s0_pc = PC().from_prefix("io_in_bits_s0_")

        # in_s2_full_pred
        self.in_s2_full_pred_0 = Full_pred().from_prefix("io_in_bits_resp_in_0_s2_full_pred_0_")
        self.in_s2_full_pred_1 = Full_pred().from_prefix("io_in_bits_resp_in_0_s2_full_pred_1_")
        self.in_s2_full_pred_2 = Full_pred().from_prefix("io_in_bits_resp_in_0_s2_full_pred_2_")
        self.in_s2_full_pred_3 = Full_pred().from_prefix("io_in_bits_resp_in_0_s2_full_pred_3_")

        # in_s3_full_pred
        self.in_s3_full_pred_0 = Full_pred().from_prefix("io_in_bits_resp_in_0_s3_full_pred_0_")
        self.in_s3_full_pred_1 = Full_pred().from_prefix("io_in_bits_resp_in_0_s3_full_pred_1_")
        self.in_s3_full_pred_2 = Full_pred().from_prefix("io_in_bits_resp_in_0_s3_full_pred_2_")
        self.in_s3_full_pred_3 = Full_pred().from_prefix("io_in_bits_resp_in_0_s3_full_pred_3_")

        # in_last_stage_ftb
        self.in_last_stage_ftb_entry = FTB_entry().from_prefix("io_in_bits_resp_in_0_last_stage_")

        # out_s2_pc
        self.out_pc_s2 = PC().from_prefix("io_out_bits_s2_")

        # out_s2_full_pred
        self.out_s2_full_pred_0 = Full_pred().from_prefix("io_out_s2_full_pred_0_")
        self.out_s2_full_pred_1 = Full_pred().from_prefix("io_out_s2_full_pred_1_")
        self.out_s2_full_pred_2 = Full_pred().from_prefix("io_out_s2_full_pred_2_")
        self.out_s2_full_pred_3 = Full_pred().from_prefix("io_out_s2_full_pred_3_")

        # out_s2_pc
        self.out_pc_s3 = PC().from_prefix("io_out_bits_s3_")

        # out_s3_full_pred
        self.out_s3_full_pred_0 = Full_pred().from_prefix("io_out_s3_full_pred_0_")
        self.out_s3_full_pred_1 = Full_pred().from_prefix("io_out_s3_full_pred_1_")
        self.out_s3_full_pred_2 = Full_pred().from_prefix("io_out_s3_full_pred_2_")
        self.out_s3_full_pred_3 = Full_pred().from_prefix("io_out_s3_full_pred_3_")

        # out_last_stage_ftb
        self.out_last_stage_ftb_entry = FTB_entry().from_prefix("io_out_last_stage_ftb_entry_")

        # out_last_stage_spec_info
        self.out_last_stage_spec_info = Stack().from_prefix("io_out_last_stage_spec_info_")

        # out_last_stage_meta
        self.out_last_stage_meta = OutMeta().from_prefix("io_out_last_stage_")

        # update
        self.update = UpdateBundle.from_prefix("io_update_")

        # redirect
        self.redirect = RedirectBundle.from_prefix("io_redirect_")

        # data_queue
        self.data_drive = Queue()

        # 回调函数
        self.dut.StepRis(self.on_step)

        # bind
        self.bind(dut)

    def AddData(self, data):
        if not isinstance(data, list):
            data = [data]
        for d in data:
            self.data_drive.put(d)
    
    def on_step(self, cycle):
        if self.data_drive.empty():
            return
        data = self.data_drive.get()
        if data is None:
            return
        if callable(data):
            data(cycle, self)
            return
        self.assign(data)
        print(f"cycle: {cycle}, set: {data}")


def ras_reset_on():
    return {"control" : {"reset" : 1, "io_reset_vector" : 0x80000000, "io_ctrl_ras_enable" : 0}, "io_s2_fire_2" : 1}

def ras_reset_off():
    return {"control" : {"reset" : 0, "io_reset_vector" : 0x80000000, "io_ctrl_ras_enable" : 0}, "io_s2_fire_2" : 1}

# spec_push 信号赋能
def spec_push(push_addr):
    push_valid ={
        "control": {"io_s3_redirect_2": 0, "io_ctrl_ras_enable": 1,  "io_s2_fire_2": 1, "io_s3_fire_2": 1},
        "in_s2_full_pred_2": {"hit" : 1 , "slot_valids_0" : 0 , "slot_valids_1": 1 , "targets_0": 0 , "targets_1": 0 ,
               "offsets_0": 0 , "offsets_1": 0 , "fallThroughAddr": push_addr , "fallThroughErr": 0 ,
               "is_jal": 0 , "is_jalr": 0 , "is_call": 1 , "is_ret": 0 , "is_br_sharing": 0 ,
               "last_may_be_rvi_call": 0 ,
               "br_taken_mask_0": 0 , "br_taken_mask_1": 1 ,
               "jalr_target": 0 
               },
        "in_s3_full_pred_2": {"hit" : 1 , "slot_valids_0" : 0 , "slot_valids_1": 1 , "targets_0": 0 , "targets_1": 0 ,
               "offsets_0": 0 , "offsets_1": 0 , "fallThroughAddr": push_addr , "fallThroughErr": 0 ,
               "is_jal": 0 , "is_jalr": 0 , "is_call": 1 , "is_ret": 0 , "is_br_sharing": 0 ,
               "last_may_be_rvi_call": 0 ,
               "br_taken_mask_0": 0 , "br_taken_mask_1": 1 ,
               "jalr_target": 0 
               }
    }

    return  push_valid
# spec_push 信号置零
def spec_valid_zero():
    push_valid_zero = {
        "control": {"io_s3_redirect_2": 0, "io_s2_fire_2": 0, "io_s3_fire_2": 0},
        "in_s2_full_pred_2": {"hit" : 0 , "slot_valids_0" : 0 , "slot_valids_1": 0 , "targets_0": 0 , "targets_1": 0 ,
               "offsets_0": 0 , "offsets_1": 0 , "fallThroughAddr": 0 , "fallThroughErr": 0 ,
               "is_jal": 0 , "is_jalr": 0 , "is_call": 0 , "is_ret": 0 , "is_br_sharing": 0 ,
               "last_may_be_rvi_call": 0 ,
               "br_taken_mask_0": 0 , "br_taken_mask_1": 0 ,
               "jalr_target": 0 
               },
        "in_s3_full_pred_2": {"hit" : 0 , "slot_valids_0" : 0 , "slot_valids_1": 0 , "targets_0": 0 , "targets_1": 0 ,
               "offsets_0": 0 , "offsets_1": 0 , "fallThroughAddr": 0 , "fallThroughErr": 0 ,
               "is_jal": 0 , "is_jalr": 0 , "is_call": 0 , "is_ret": 0 , "is_br_sharing": 0 ,
               "last_may_be_rvi_call": 0 ,
               "br_taken_mask_0": 0 , "br_taken_mask_1": 0 ,
               "jalr_target": 0 
               }

    }
    return push_valid_zero

def spec_pop(pop_addr ):
    pop_valid = {
        "control": {"io_s3_redirect_2": 0, "io_ctrl_ras_enable": 1,  "io_s2_fire_2": 1, "io_s3_fire_2": 1},
        "in_s2_full_pred_2": {
            "hit" : 1 , "slot_valids_0" : 0 , "slot_valids_1": 1 , "targets_0": 0 , "targets_1": 0 ,
            "offsets_0": 0 , "offsets_1": 0 , "fallThroughAddr": pop_addr , "fallThroughErr": 0 ,
            "is_jal": 0 , "is_jalr": 0 , "is_call": 0 , "is_ret": 1 , "is_br_sharing": 0 ,
            "last_may_be_rvi_call": 0 ,
            "br_taken_mask_0": 0 , "br_taken_mask_1": 0 ,
            "jalr_target": 0 
            },
        "in_s3_full_pred_2": {
            "hit" : 1 , "slot_valids_0" : 0 , "slot_valids_1": 1 , "targets_0": 0 , "targets_1": 0 ,
            "offsets_0": 0 , "offsets_1": 0 , "fallThroughAddr": pop_addr , "fallThroughErr": 0 ,
            "is_jal": 0 , "is_jalr": 0 , "is_call": 0 , "is_ret": 1 , "is_br_sharing": 0 ,
            "last_may_be_rvi_call": 0 ,
            "br_taken_mask_0": 0 , "br_taken_mask_1": 0 ,
            "jalr_target": 0 
            }
    }

    return pop_valid

def spec_pop_zero():
    pop_valid = {
        "control": {"io_s3_redirect_2": 0, "io_ctrl_ras_enable": 0,  "io_s2_fire_2": 0, "io_s3_fire_2": 0},
        "in_s2_full_pred_2": {
            "hit" : 0 , "slot_valids_0" : 0 , "slot_valids_1": 0 , "targets_0": 0 , "targets_1": 0 ,
            "offsets_0": 0 , "offsets_1": 0 , "fallThroughAddr": 0 , "fallThroughErr": 0 ,
            "is_jal": 0 , "is_jalr": 0 , "is_call": 0 , "is_ret": 0 , "is_br_sharing": 0 ,
            "last_may_be_rvi_call": 0 ,
            "br_taken_mask_0": 0 , "br_taken_mask_1": 0 ,
            "jalr_target": 0 
            },
        "in_s3_full_pred_2": {
            "hit" : 0 , "slot_valids_0" : 0 , "slot_valids_1": 0 , "targets_0": 0 , "targets_1": 0 ,
            "offsets_0": 0 , "offsets_1": 0 , "fallThroughAddr": 0 , "fallThroughErr": 0 ,
            "is_jal": 0 , "is_jalr": 0 , "is_call": 0 , "is_ret": 0 , "is_br_sharing": 0 ,
            "last_may_be_rvi_call": 0 ,
            "br_taken_mask_0": 0 , "br_taken_mask_1": 0 ,
            "jalr_target": 0 
            }
    }

    return pop_valid
# commit_push 赋值
"""    .io_commit_push_valid
      (io_update_valid & io_update_bits_ftb_entry_tailSlot_valid
       & io_update_bits_ftb_entry_isCall & io_update_bits_jmp_taken
       & io_update_bits_cfi_idx_valid & _GEN_1),
          wire        _GEN_1 =
    io_update_bits_cfi_idx_bits == io_update_bits_ftb_entry_tailSlot_offset;	"""
def commit_push(TOSW,ssp):
    commit_push_valid={
            "update" : {
                "valid" :1,
                "bits_ftb_entry_tailSlot_valid" :1, "bits_ftb_entry_isCall" : 1, 
                "bits_jmp_taken" : 1, "bits_cfi_idx_valid" :1, "bits_cfi_idx_bits" : 1, "bits_ftb_entry_tailSlot_offset" : 1,
                "bits_meta" : (TOSW << 12) + (ssp << 21)
            }
            # push_spec_addr
    }
    return commit_push_valid
# commit_push 置零
def commit_push_zero():
    commit_push_valid_zero={
            "update" : {
                "valid" :0,
                "bits_ftb_entry_tailSlot_valid" :0, "bits_ftb_entry_isCall" : 0, 
                "bits_jmp_taken" : 0, "bits_cfi_idx_valid" :0, "bits_cfi_idx_bits" : 0, "bits_ftb_entry_tailSlot_offset" : 0,
                "bits_meta" : 0

            }
    }
    
    return commit_push_valid_zero


# commit_push

