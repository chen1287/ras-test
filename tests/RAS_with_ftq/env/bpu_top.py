from mlvp import *
from .bundle import *
from .ftq import *

def assert_equal(a, b):
    if a != b:
        error(f"[Error] Expected is {a}, but actual is {b}")
        exit(1)

def compare_uftb_full_pred(uftb_output, std_output):
    need_compare = ["hit", "slot_valids_0", "slot_valids_1", "targets_0", "targets_1",
                    "offsets_0", "offsets_1", "fallThroughAddr", "is_br_sharing",
                    "br_taken_mask_0", "br_taken_mask_1"]
    for key in need_compare:
        assert_equal(uftb_output[key], std_output[key])

class BPUTop:
    def __init__(self, dut, dut_in: RASIn, dut_out: BranchPredictionResp ,dut_update: UpdateBundle,  
                 pipeline_ctrl: PipelineCtrlBundle,enable_ctrl: EnableCtrlBundle, 
                 redirect: RASRediret, 
                 ):
        self.dut = dut
        self.dut_in = dut_in
        self.dut_out = dut_out
        self.dut_update = dut_update
        self.pipeline_ctrl = pipeline_ctrl
        self.enable_ctrl = enable_ctrl
        self.redirect = redirect


        self.s0_fire = 0
        self.s1_fire = 0
        self.s2_fire = 0
        self.s3_fire = 0
        self.s0_pc = 0
        self.s1_pc = 0
        self.s2_pc = 0
        self.s3_pc = 0

        self.ftq = FTQ()
        self.ftb_provider = FTBProvider()

    def pipeline_assign(self):
        self.pipeline_ctrl.s0_fire_0.value = self.s0_fire
        self.pipeline_ctrl.s0_fire_1.value = self.s0_fire
        self.pipeline_ctrl.s0_fire_2.value = self.s0_fire
        self.pipeline_ctrl.s0_fire_3.value = self.s0_fire

        self.pipeline_ctrl.s1_fire_0.value = self.s1_fire
        self.pipeline_ctrl.s1_fire_1.value = self.s1_fire
        self.pipeline_ctrl.s1_fire_2.value = self.s1_fire
        self.pipeline_ctrl.s1_fire_3.value = self.s1_fire

        self.pipeline_ctrl.s2_fire_0.value = self.s2_fire
        self.pipeline_ctrl.s2_fire_1.value = self.s2_fire
        self.pipeline_ctrl.s2_fire_2.value = self.s2_fire
        self.pipeline_ctrl.s2_fire_3.value = self.s2_fire

        self.pipeline_ctrl.s3_fire_2.value = self.s3_fire


        self.dut.io_in_bits_s0_pc_0.value = self.s0_pc
        self.dut.io_in_bits_s0_pc_1.value = self.s0_pc
        self.dut.io_in_bits_s0_pc_2.value = self.s0_pc
        self.dut.io_in_bits_s0_pc_3.value = self.s0_pc

    def generate_bpu_output(self, dut_output):

        dut_output["s2"]["valid"] = self.s2_fire
        dut_output["s3"]["valid"] = self.s3_fire


        dut_output["s2"]["pc_0"] = self.s2_pc
        dut_output["s2"]["pc_1"] = self.s2_pc
        dut_output["s2"]["pc_2"] = self.s2_pc
        dut_output["s2"]["pc_3"] = self.s2_pc
        dut_output["s3"]["pc_0"] = self.s2_pc
        dut_output["s3"]["pc_1"] = self.s2_pc
        dut_output["s3"]["pc_2"] = self.s2_pc
        dut_output["s3"]["pc_3"] = self.s3_pc

        # Provide Basic FTB Prediction
        ftb_provider_stage_enable = (False, True, True)

        if self.s1_fire and ftb_provider_stage_enable[0]:
            ftb_entry = self.ftb_provider.provide_ftb_entry(self.s1_fire, self.s1_pc)
            if ftb_entry is not None:
                ftb_entry.put_to_full_pred_dict(self.s1_pc, dut_output["s1"]["full_pred_0"])
            else:
                set_all_none_item_to_zero(dut_output["s1"]["full_pred_0"])

        if self.s2_fire and ftb_provider_stage_enable[1]:
            ftb_entry = self.ftb_provider.provide_ftb_entry(self.s2_fire, self.s2_pc)
            if ftb_entry is not None:
                ftb_entry.put_to_full_pred_dict(self.s2_pc, dut_output["s2"]["full_pred_0"])
                # print("{} is full pred".format(full_pred_dict))
                # self.dut_in.bits_resp_in.s2.full_pred_0.value = dut_output["s2"]["full_pred_0"]
                self.dut_in.bits_resp_in.s2.full_pred_0.br_taken_mask_0.value = dut_output["s2"]["full_pred_0"]["br_taken_mask_0"]
                self.dut_in.bits_resp_in.s2.full_pred_0.br_taken_mask_1.value = dut_output["s2"]["full_pred_0"]["br_taken_mask_1"]
                self.dut_in.bits_resp_in.s2.full_pred_0.slot_valids_0.value = dut_output["s2"]["full_pred_0"]["slot_valids_0"]
                self.dut_in.bits_resp_in.s2.full_pred_0.slot_valids_1.value = dut_output["s2"]["full_pred_0"]["slot_valids_1"]
                self.dut_in.bits_resp_in.s2.full_pred_0.targets_0.value = dut_output["s2"]["full_pred_0"]["targets_0"]
                self.dut_in.bits_resp_in.s2.full_pred_0.targets_1.value = dut_output["s2"]["full_pred_0"]["targets_1"]
                self.dut_in.bits_resp_in.s2.full_pred_0.jalr_target.value = dut_output["s2"]["full_pred_0"]["jalr_target"]
                self.dut_in.bits_resp_in.s2.full_pred_0.offsets_0.value = dut_output["s2"]["full_pred_0"]["offsets_0"]
                self.dut_in.bits_resp_in.s2.full_pred_0.offsets_1.value = dut_output["s2"]["full_pred_0"]["offsets_1"]
                self.dut_in.bits_resp_in.s2.full_pred_0.fallThroughAddr.value = dut_output["s2"]["full_pred_0"]["fallThroughAddr"]
                self.dut_in.bits_resp_in.s2.full_pred_0.is_br_sharing.value = dut_output["s2"]["full_pred_0"]["is_br_sharing"]
                self.dut_in.bits_resp_in.s2.full_pred_0.hit.value = dut_output["s2"]["full_pred_0"]["hit"]
                self.dut_in.bits_resp_in.s2.full_pred_1 = self.dut_in.bits_resp_in.s2.full_pred_0
                self.dut_in.bits_resp_in.s2.full_pred_2 = self.dut_in.bits_resp_in.s2.full_pred_0
                self.dut_in.bits_resp_in.s2.full_pred_3 = self.dut_in.bits_resp_in.s2.full_pred_0
            else:
                set_all_none_item_to_zero(dut_output["s2"]["full_pred_0"])
                # self.dut_in.bits_resp_in.s2.full_pred_0 = dut_output["s2"]["full_pred_0"]
                self.dut_in.bits_resp_in.s2.full_pred_0.br_taken_mask_0.value = dut_output["s2"]["full_pred_0"]["br_taken_mask_0"]
                self.dut_in.bits_resp_in.s2.full_pred_0.br_taken_mask_1.value = dut_output["s2"]["full_pred_0"]["br_taken_mask_1"]
                self.dut_in.bits_resp_in.s2.full_pred_0.slot_valids_0.value = dut_output["s2"]["full_pred_0"]["slot_valids_0"]
                self.dut_in.bits_resp_in.s2.full_pred_0.slot_valids_1.value = dut_output["s2"]["full_pred_0"]["slot_valids_1"]
                self.dut_in.bits_resp_in.s2.full_pred_0.targets_0.value = dut_output["s2"]["full_pred_0"]["targets_0"]
                self.dut_in.bits_resp_in.s2.full_pred_0.targets_1.value = dut_output["s2"]["full_pred_0"]["targets_1"]
                self.dut_in.bits_resp_in.s2.full_pred_0.jalr_target.value = dut_output["s2"]["full_pred_0"]["jalr_target"]
                self.dut_in.bits_resp_in.s2.full_pred_0.offsets_0.value = dut_output["s2"]["full_pred_0"]["offsets_0"]
                self.dut_in.bits_resp_in.s2.full_pred_0.offsets_1.value = dut_output["s2"]["full_pred_0"]["offsets_1"]
                self.dut_in.bits_resp_in.s2.full_pred_0.fallThroughAddr.value = dut_output["s2"]["full_pred_0"]["fallThroughAddr"]
                self.dut_in.bits_resp_in.s2.full_pred_0.is_br_sharing.value = dut_output["s2"]["full_pred_0"]["is_br_sharing"]
                self.dut_in.bits_resp_in.s2.full_pred_0.hit.value = dut_output["s2"]["full_pred_0"]["hit"]
                self.dut_in.bits_resp_in.s2.full_pred_1 = self.dut_in.bits_resp_in.s2.full_pred_0
                self.dut_in.bits_resp_in.s2.full_pred_2 = self.dut_in.bits_resp_in.s2.full_pred_0
                self.dut_in.bits_resp_in.s2.full_pred_3 = self.dut_in.bits_resp_in.s2.full_pred_0

        if self.s3_fire and ftb_provider_stage_enable[2]:
            ftb_entry = self.ftb_provider.provide_ftb_entry(self.s3_fire, self.s3_pc)
            if ftb_entry is not None:
                ftb_entry.put_to_full_pred_dict(self.s3_pc, dut_output["s3"]["full_pred_0"])
                dut_output["last_stage_ftb_entry"] = ftb_entry.__dict__()
                self.dut_in.bits_resp_in.s3.full_pred_0.br_taken_mask_0.value = dut_output["s3"]["full_pred_0"]["br_taken_mask_0"]
                self.dut_in.bits_resp_in.s3.full_pred_0.br_taken_mask_1.value = dut_output["s3"]["full_pred_0"]["br_taken_mask_1"]
                self.dut_in.bits_resp_in.s3.full_pred_0.slot_valids_0.value = dut_output["s3"]["full_pred_0"]["slot_valids_0"]
                self.dut_in.bits_resp_in.s3.full_pred_0.slot_valids_1.value = dut_output["s3"]["full_pred_0"]["slot_valids_1"]
                self.dut_in.bits_resp_in.s3.full_pred_0.targets_0.value = dut_output["s3"]["full_pred_0"]["targets_0"]
                self.dut_in.bits_resp_in.s3.full_pred_0.targets_1.value = dut_output["s3"]["full_pred_0"]["targets_1"]
                self.dut_in.bits_resp_in.s3.full_pred_0.jalr_target.value = dut_output["s3"]["full_pred_0"]["jalr_target"]
                self.dut_in.bits_resp_in.s3.full_pred_0.offsets_0.value = dut_output["s3"]["full_pred_0"]["offsets_0"]
                self.dut_in.bits_resp_in.s3.full_pred_0.offsets_1.value = dut_output["s3"]["full_pred_0"]["offsets_1"]
                self.dut_in.bits_resp_in.s3.full_pred_0.fallThroughAddr.value = dut_output["s3"]["full_pred_0"]["fallThroughAddr"]
                self.dut_in.bits_resp_in.s3.full_pred_0.is_br_sharing.value = dut_output["s3"]["full_pred_0"]["is_br_sharing"]
                self.dut_in.bits_resp_in.s3.full_pred_0.hit.value = dut_output["s3"]["full_pred_0"]["hit"]
                self.dut_in.bits_resp_in.s3.full_pred_1 = self.dut_in.bits_resp_in.s3.full_pred_0
                self.dut_in.bits_resp_in.s3.full_pred_2 = self.dut_in.bits_resp_in.s3.full_pred_0
                self.dut_in.bits_resp_in.s3.full_pred_3 = self.dut_in.bits_resp_in.s3.full_pred_0
            else:
                set_all_none_item_to_zero(dut_output["s3"]["full_pred_0"])
                dut_output["last_stage_ftb_entry"] = FTBEntry().__dict__()
                self.dut_in.bits_resp_in.s3.full_pred_0.br_taken_mask_0.value = dut_output["s3"]["full_pred_0"]["br_taken_mask_0"]
                self.dut_in.bits_resp_in.s3.full_pred_0.br_taken_mask_1.value = dut_output["s3"]["full_pred_0"]["br_taken_mask_1"]
                self.dut_in.bits_resp_in.s3.full_pred_0.slot_valids_0.value = dut_output["s3"]["full_pred_0"]["slot_valids_0"]
                self.dut_in.bits_resp_in.s3.full_pred_0.slot_valids_1.value = dut_output["s3"]["full_pred_0"]["slot_valids_1"]
                self.dut_in.bits_resp_in.s3.full_pred_0.targets_0.value = dut_output["s3"]["full_pred_0"]["targets_0"]
                self.dut_in.bits_resp_in.s3.full_pred_0.targets_1.value = dut_output["s3"]["full_pred_0"]["targets_1"]
                self.dut_in.bits_resp_in.s3.full_pred_0.jalr_target.value = dut_output["s3"]["full_pred_0"]["jalr_target"]
                self.dut_in.bits_resp_in.s3.full_pred_0.offsets_0.value = dut_output["s3"]["full_pred_0"]["offsets_0"]
                self.dut_in.bits_resp_in.s3.full_pred_0.offsets_1.value = dut_output["s3"]["full_pred_0"]["offsets_1"]
                self.dut_in.bits_resp_in.s3.full_pred_0.fallThroughAddr.value = dut_output["s3"]["full_pred_0"]["fallThroughAddr"]
                self.dut_in.bits_resp_in.s3.full_pred_0.is_br_sharing.value = dut_output["s3"]["full_pred_0"]["is_br_sharing"]
                self.dut_in.bits_resp_in.s3.full_pred_0.hit.value = dut_output["s3"]["full_pred_0"]["hit"]
                self.dut_in.bits_resp_in.s3.full_pred_1 = self.dut_in.bits_resp_in.s3.full_pred_0
                self.dut_in.bits_resp_in.s3.full_pred_2 = self.dut_in.bits_resp_in.s3.full_pred_0
                self.dut_in.bits_resp_in.s3.full_pred_3 = self.dut_in.bits_resp_in.s3.full_pred_0

        return dut_output

    async def run(self):
        self.enable_ctrl.ras_enable.value = 1
        self.s0_pc = RESET_VECTOR

        self.dut.reset.value = 1
        await ClockCycles(self.dut, 10)
        self.dut.reset.value = 0
        await ClockCycles(self.dut, 10)

        while True:
            self.pipeline_assign()
            await ClockCycles(self.dut, 1)

            self.s3_fire = self.s2_fire
            self.s2_fire = self.s1_fire
            self.s1_fire = self.s0_fire
            self.s3_pc = self.s2_pc
            self.s2_pc = self.s1_pc
            self.s1_pc = self.s0_pc

            npc_gen = self.s0_pc
            next_s0_fire = 1
            s1_flush = False
            s2_flush = False
            s3_flush = False


            # Get dut output and generate bpu output
            dut_output = self.dut_out.as_dict()
            bpu_output = self.generate_bpu_output(dut_output)

            ftb_entry = FTBEntry.from_full_pred_dict(self.s3_pc, dut_output["s3"]["full_pred_0"])
            std_ftb_entry = self.ftb_provider.provide_ftb_entry(self.s3_fire, self.s3_pc)

            # Forward to FTQ and get update and redirect request

            if self.s3_fire:
                npc_gen = get_target_from_full_pred_dict(self.s3_pc, dut_output["s3"]["full_pred_0"])

            update_request, redirect_request = self.ftq.update(bpu_output, std_ftb_entry)

            ## Update Request
            if update_request:
                self.ftb_provider.update(update_request)
                self.dut_update.assign(update_request)
                self.dut_update.valid.value = 1
            else:
                self.dut_update.valid.value = 0

            ## Redirect Request
            if redirect_request:
                next_s0_fire = 1
                s1_flush = True
                s2_flush = True
                s3_flush = True
                self.redirect.assign(redirect_request)
                npc_gen = redirect_request["cfiUpdate"]["target"]

            # Add new control information
            self.s0_fire = next_s0_fire
            self.s0_pc = npc_gen
            if s1_flush:
                self.s1_fire = 0
            if s2_flush:
                self.s2_fire = 0
            if s3_flush:
                self.s3_fire = 0