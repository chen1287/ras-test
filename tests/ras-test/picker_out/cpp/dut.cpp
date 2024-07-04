#include "UT_RAS.hpp"
#include "UT_RAS_dpi.hpp"

UTRAS::UTRAS() : DutUnifiedBase() {
    this->init();
};

UTRAS::UTRAS(int argc, char **argv) : DutUnifiedBase(argc, argv) {
    this->init();
};

UTRAS::UTRAS(char *filename) : DutUnifiedBase(filename) {
    this->init();
};

UTRAS::UTRAS(char *filename, int argc, char **argv) : DutUnifiedBase(filename, argc, argv) {
    this->init();
};

UTRAS::UTRAS(std::initializer_list<const char *> args) : DutUnifiedBase(args){
    this->init();
}



UTRAS::~UTRAS()
{
    // finalize RAS
}

void UTRAS::init()
{
    /*
    reg  RAS.redirect_next_bits_r_level
    reg  RAS.redirect_next_valid_last_r
    reg  RAS.redirect_next_bits_r_cfiUpdate_pd_isRVC
    reg  RAS.redirect_next_bits_r_cfiUpdate_pd_isCall
    reg  RAS.redirect_next_bits_r_cfiUpdate_pd_isRet
    wire  RAS.s3_push
    wire  RAS.s3_pop
    reg  RAS.s3_pushed_in_s2
    wire  RAS.s2_spec_push
    wire  RAS.RASStack.realPush
    reg [4:0] RAS.RASStack.TOSR_value
    reg [4:0] RAS.RASStack.TOSW_value
    reg [4:0] RAS.RASStack.BOS_value
    reg [3:0] RAS.RASStack.ssp
    reg [3:0] RAS.RASStack.nsp
    reg  RAS.RASStack.spec_overflowed
    reg  RAS.RASStack.writeBypassValid
    reg [40:0] RAS.RASStack.timingTop_retAddr
    reg [2:0] RAS.RASStack.sctr
    reg [40:0] RAS.RASStack.spec_queue_0_retAddr
    reg [40:0] RAS.RASStack.spec_queue_1_retAddr
    reg [40:0] RAS.RASStack.spec_queue_2_retAddr
    reg [40:0] RAS.RASStack.spec_queue_3_retAddr
    reg [40:0] RAS.RASStack.spec_queue_4_retAddr
    reg [40:0] RAS.RASStack.spec_queue_5_retAddr
    reg [40:0] RAS.RASStack.spec_queue_6_retAddr
    reg [40:0] RAS.RASStack.spec_queue_7_retAddr
    reg [40:0] RAS.RASStack.spec_queue_8_retAddr
    reg [40:0] RAS.RASStack.spec_queue_9_retAddr
    reg [40:0] RAS.RASStack.spec_queue_10_retAddr
    reg [40:0] RAS.RASStack.spec_queue_11_retAddr
    reg [40:0] RAS.RASStack.spec_queue_12_retAddr
    reg [40:0] RAS.RASStack.spec_queue_13_retAddr
    reg [40:0] RAS.RASStack.spec_queue_14_retAddr
    reg [40:0] RAS.RASStack.spec_queue_15_retAddr
    reg [40:0] RAS.RASStack.spec_queue_16_retAddr
    reg [40:0] RAS.RASStack.spec_queue_17_retAddr
    reg [40:0] RAS.RASStack.spec_queue_18_retAddr
    reg [40:0] RAS.RASStack.spec_queue_19_retAddr
    reg [40:0] RAS.RASStack.spec_queue_20_retAddr
    reg [40:0] RAS.RASStack.spec_queue_21_retAddr
    reg [40:0] RAS.RASStack.spec_queue_22_retAddr
    reg [40:0] RAS.RASStack.spec_queue_23_retAddr
    reg [40:0] RAS.RASStack.spec_queue_24_retAddr
    reg [40:0] RAS.RASStack.spec_queue_25_retAddr
    reg [40:0] RAS.RASStack.spec_queue_26_retAddr
    reg [40:0] RAS.RASStack.spec_queue_27_retAddr
    reg [40:0] RAS.RASStack.spec_queue_28_retAddr
    reg [40:0] RAS.RASStack.spec_queue_29_retAddr
    reg [40:0] RAS.RASStack.spec_queue_30_retAddr
    reg [40:0] RAS.RASStack.spec_queue_31_retAddr
    reg [40:0] RAS.RASStack.commit_stack_0_retAddr
    reg [40:0] RAS.RASStack.commit_stack_1_retAddr
    reg [40:0] RAS.RASStack.commit_stack_2_retAddr
    reg [40:0] RAS.RASStack.commit_stack_3_retAddr
    reg [40:0] RAS.RASStack.commit_stack_4_retAddr
    reg [40:0] RAS.RASStack.commit_stack_5_retAddr
    reg [40:0] RAS.RASStack.commit_stack_6_retAddr
    reg [40:0] RAS.RASStack.commit_stack_7_retAddr
    reg [40:0] RAS.RASStack.commit_stack_8_retAddr
    reg [40:0] RAS.RASStack.commit_stack_9_retAddr
    reg [40:0] RAS.RASStack.commit_stack_10_retAddr
    reg [40:0] RAS.RASStack.commit_stack_11_retAddr
    reg [40:0] RAS.RASStack.commit_stack_12_retAddr
    reg [40:0] RAS.RASStack.commit_stack_13_retAddr
    reg [40:0] RAS.RASStack.commit_stack_14_retAddr
    reg [40:0] RAS.RASStack.commit_stack_15_retAddr
    reg [7:0] RAS.RASStack.commit_stack_0_ctr
    reg [7:0] RAS.RASStack.commit_stack_1_ctr
    reg [7:0] RAS.RASStack.commit_stack_2_ctr
    reg [7:0] RAS.RASStack.commit_stack_3_ctr
    reg [7:0] RAS.RASStack.commit_stack_4_ctr
    reg [7:0] RAS.RASStack.commit_stack_5_ctr
    reg [7:0] RAS.RASStack.commit_stack_6_ctr
    reg [7:0] RAS.RASStack.commit_stack_7_ctr
    reg [7:0] RAS.RASStack.commit_stack_8_ctr
    reg [7:0] RAS.RASStack.commit_stack_9_ctr
    reg [7:0] RAS.RASStack.commit_stack_10_ctr
    reg [7:0] RAS.RASStack.commit_stack_11_ctr
    reg [7:0] RAS.RASStack.commit_stack_12_ctr
    reg [7:0] RAS.RASStack.commit_stack_13_ctr
    reg [7:0] RAS.RASStack.commit_stack_14_ctr
    reg [7:0] RAS.RASStack.commit_stack_15_ctr
    wire  RAS.RASStack.io_spec_push_valid
    wire  RAS.RASStack.io_spec_pop_valid
    wire  RAS.RASStack.io_commit_push_valid
    wire  RAS.RASStack.io_commit_pop_valid
    wire  RAS.RASStack.io_redirect_valid
    wire  RAS.RASStack.io_redirect_isCall
    wire  RAS.RASStack.io_redirect_isRet
    wire  RAS.RASStack.io_s3_cancel

    */

    // initialize RAS
    this->clock.ReInit(0, IOType::Input, "clock");
    this->reset.ReInit(0, IOType::Input, "reset");
    this->io_reset_vector.ReInit(36, IOType::Input, "io_reset_vector");
    this->io_in_bits_s0_pc_0.ReInit(41, IOType::Input, "io_in_bits_s0_pc_0");
    this->io_in_bits_s0_pc_1.ReInit(41, IOType::Input, "io_in_bits_s0_pc_1");
    this->io_in_bits_s0_pc_2.ReInit(41, IOType::Input, "io_in_bits_s0_pc_2");
    this->io_in_bits_s0_pc_3.ReInit(41, IOType::Input, "io_in_bits_s0_pc_3");
    this->io_in_bits_resp_in_0_s2_full_pred_0_br_taken_mask_0.ReInit(0, IOType::Input, "io_in_bits_resp_in_0_s2_full_pred_0_br_taken_mask_0");
    this->io_in_bits_resp_in_0_s2_full_pred_0_br_taken_mask_1.ReInit(0, IOType::Input, "io_in_bits_resp_in_0_s2_full_pred_0_br_taken_mask_1");
    this->io_in_bits_resp_in_0_s2_full_pred_0_slot_valids_0.ReInit(0, IOType::Input, "io_in_bits_resp_in_0_s2_full_pred_0_slot_valids_0");
    this->io_in_bits_resp_in_0_s2_full_pred_0_slot_valids_1.ReInit(0, IOType::Input, "io_in_bits_resp_in_0_s2_full_pred_0_slot_valids_1");
    this->io_in_bits_resp_in_0_s2_full_pred_0_targets_0.ReInit(41, IOType::Input, "io_in_bits_resp_in_0_s2_full_pred_0_targets_0");
    this->io_in_bits_resp_in_0_s2_full_pred_0_targets_1.ReInit(41, IOType::Input, "io_in_bits_resp_in_0_s2_full_pred_0_targets_1");
    this->io_in_bits_resp_in_0_s2_full_pred_0_jalr_target.ReInit(41, IOType::Input, "io_in_bits_resp_in_0_s2_full_pred_0_jalr_target");
    this->io_in_bits_resp_in_0_s2_full_pred_0_offsets_0.ReInit(4, IOType::Input, "io_in_bits_resp_in_0_s2_full_pred_0_offsets_0");
    this->io_in_bits_resp_in_0_s2_full_pred_0_offsets_1.ReInit(4, IOType::Input, "io_in_bits_resp_in_0_s2_full_pred_0_offsets_1");
    this->io_in_bits_resp_in_0_s2_full_pred_0_fallThroughAddr.ReInit(41, IOType::Input, "io_in_bits_resp_in_0_s2_full_pred_0_fallThroughAddr");
    this->io_in_bits_resp_in_0_s2_full_pred_0_is_br_sharing.ReInit(0, IOType::Input, "io_in_bits_resp_in_0_s2_full_pred_0_is_br_sharing");
    this->io_in_bits_resp_in_0_s2_full_pred_0_hit.ReInit(0, IOType::Input, "io_in_bits_resp_in_0_s2_full_pred_0_hit");
    this->io_in_bits_resp_in_0_s2_full_pred_1_br_taken_mask_0.ReInit(0, IOType::Input, "io_in_bits_resp_in_0_s2_full_pred_1_br_taken_mask_0");
    this->io_in_bits_resp_in_0_s2_full_pred_1_br_taken_mask_1.ReInit(0, IOType::Input, "io_in_bits_resp_in_0_s2_full_pred_1_br_taken_mask_1");
    this->io_in_bits_resp_in_0_s2_full_pred_1_slot_valids_0.ReInit(0, IOType::Input, "io_in_bits_resp_in_0_s2_full_pred_1_slot_valids_0");
    this->io_in_bits_resp_in_0_s2_full_pred_1_slot_valids_1.ReInit(0, IOType::Input, "io_in_bits_resp_in_0_s2_full_pred_1_slot_valids_1");
    this->io_in_bits_resp_in_0_s2_full_pred_1_targets_0.ReInit(41, IOType::Input, "io_in_bits_resp_in_0_s2_full_pred_1_targets_0");
    this->io_in_bits_resp_in_0_s2_full_pred_1_targets_1.ReInit(41, IOType::Input, "io_in_bits_resp_in_0_s2_full_pred_1_targets_1");
    this->io_in_bits_resp_in_0_s2_full_pred_1_jalr_target.ReInit(41, IOType::Input, "io_in_bits_resp_in_0_s2_full_pred_1_jalr_target");
    this->io_in_bits_resp_in_0_s2_full_pred_1_offsets_0.ReInit(4, IOType::Input, "io_in_bits_resp_in_0_s2_full_pred_1_offsets_0");
    this->io_in_bits_resp_in_0_s2_full_pred_1_offsets_1.ReInit(4, IOType::Input, "io_in_bits_resp_in_0_s2_full_pred_1_offsets_1");
    this->io_in_bits_resp_in_0_s2_full_pred_1_fallThroughAddr.ReInit(41, IOType::Input, "io_in_bits_resp_in_0_s2_full_pred_1_fallThroughAddr");
    this->io_in_bits_resp_in_0_s2_full_pred_1_is_br_sharing.ReInit(0, IOType::Input, "io_in_bits_resp_in_0_s2_full_pred_1_is_br_sharing");
    this->io_in_bits_resp_in_0_s2_full_pred_1_hit.ReInit(0, IOType::Input, "io_in_bits_resp_in_0_s2_full_pred_1_hit");
    this->io_in_bits_resp_in_0_s2_full_pred_2_br_taken_mask_0.ReInit(0, IOType::Input, "io_in_bits_resp_in_0_s2_full_pred_2_br_taken_mask_0");
    this->io_in_bits_resp_in_0_s2_full_pred_2_br_taken_mask_1.ReInit(0, IOType::Input, "io_in_bits_resp_in_0_s2_full_pred_2_br_taken_mask_1");
    this->io_in_bits_resp_in_0_s2_full_pred_2_slot_valids_0.ReInit(0, IOType::Input, "io_in_bits_resp_in_0_s2_full_pred_2_slot_valids_0");
    this->io_in_bits_resp_in_0_s2_full_pred_2_slot_valids_1.ReInit(0, IOType::Input, "io_in_bits_resp_in_0_s2_full_pred_2_slot_valids_1");
    this->io_in_bits_resp_in_0_s2_full_pred_2_targets_0.ReInit(41, IOType::Input, "io_in_bits_resp_in_0_s2_full_pred_2_targets_0");
    this->io_in_bits_resp_in_0_s2_full_pred_2_targets_1.ReInit(41, IOType::Input, "io_in_bits_resp_in_0_s2_full_pred_2_targets_1");
    this->io_in_bits_resp_in_0_s2_full_pred_2_jalr_target.ReInit(41, IOType::Input, "io_in_bits_resp_in_0_s2_full_pred_2_jalr_target");
    this->io_in_bits_resp_in_0_s2_full_pred_2_offsets_0.ReInit(4, IOType::Input, "io_in_bits_resp_in_0_s2_full_pred_2_offsets_0");
    this->io_in_bits_resp_in_0_s2_full_pred_2_offsets_1.ReInit(4, IOType::Input, "io_in_bits_resp_in_0_s2_full_pred_2_offsets_1");
    this->io_in_bits_resp_in_0_s2_full_pred_2_fallThroughAddr.ReInit(41, IOType::Input, "io_in_bits_resp_in_0_s2_full_pred_2_fallThroughAddr");
    this->io_in_bits_resp_in_0_s2_full_pred_2_is_jalr.ReInit(0, IOType::Input, "io_in_bits_resp_in_0_s2_full_pred_2_is_jalr");
    this->io_in_bits_resp_in_0_s2_full_pred_2_is_call.ReInit(0, IOType::Input, "io_in_bits_resp_in_0_s2_full_pred_2_is_call");
    this->io_in_bits_resp_in_0_s2_full_pred_2_is_ret.ReInit(0, IOType::Input, "io_in_bits_resp_in_0_s2_full_pred_2_is_ret");
    this->io_in_bits_resp_in_0_s2_full_pred_2_last_may_be_rvi_call.ReInit(0, IOType::Input, "io_in_bits_resp_in_0_s2_full_pred_2_last_may_be_rvi_call");
    this->io_in_bits_resp_in_0_s2_full_pred_2_is_br_sharing.ReInit(0, IOType::Input, "io_in_bits_resp_in_0_s2_full_pred_2_is_br_sharing");
    this->io_in_bits_resp_in_0_s2_full_pred_2_hit.ReInit(0, IOType::Input, "io_in_bits_resp_in_0_s2_full_pred_2_hit");
    this->io_in_bits_resp_in_0_s2_full_pred_3_br_taken_mask_0.ReInit(0, IOType::Input, "io_in_bits_resp_in_0_s2_full_pred_3_br_taken_mask_0");
    this->io_in_bits_resp_in_0_s2_full_pred_3_br_taken_mask_1.ReInit(0, IOType::Input, "io_in_bits_resp_in_0_s2_full_pred_3_br_taken_mask_1");
    this->io_in_bits_resp_in_0_s2_full_pred_3_slot_valids_0.ReInit(0, IOType::Input, "io_in_bits_resp_in_0_s2_full_pred_3_slot_valids_0");
    this->io_in_bits_resp_in_0_s2_full_pred_3_slot_valids_1.ReInit(0, IOType::Input, "io_in_bits_resp_in_0_s2_full_pred_3_slot_valids_1");
    this->io_in_bits_resp_in_0_s2_full_pred_3_targets_0.ReInit(41, IOType::Input, "io_in_bits_resp_in_0_s2_full_pred_3_targets_0");
    this->io_in_bits_resp_in_0_s2_full_pred_3_targets_1.ReInit(41, IOType::Input, "io_in_bits_resp_in_0_s2_full_pred_3_targets_1");
    this->io_in_bits_resp_in_0_s2_full_pred_3_jalr_target.ReInit(41, IOType::Input, "io_in_bits_resp_in_0_s2_full_pred_3_jalr_target");
    this->io_in_bits_resp_in_0_s2_full_pred_3_offsets_0.ReInit(4, IOType::Input, "io_in_bits_resp_in_0_s2_full_pred_3_offsets_0");
    this->io_in_bits_resp_in_0_s2_full_pred_3_offsets_1.ReInit(4, IOType::Input, "io_in_bits_resp_in_0_s2_full_pred_3_offsets_1");
    this->io_in_bits_resp_in_0_s2_full_pred_3_fallThroughAddr.ReInit(41, IOType::Input, "io_in_bits_resp_in_0_s2_full_pred_3_fallThroughAddr");
    this->io_in_bits_resp_in_0_s2_full_pred_3_fallThroughErr.ReInit(0, IOType::Input, "io_in_bits_resp_in_0_s2_full_pred_3_fallThroughErr");
    this->io_in_bits_resp_in_0_s2_full_pred_3_is_br_sharing.ReInit(0, IOType::Input, "io_in_bits_resp_in_0_s2_full_pred_3_is_br_sharing");
    this->io_in_bits_resp_in_0_s2_full_pred_3_hit.ReInit(0, IOType::Input, "io_in_bits_resp_in_0_s2_full_pred_3_hit");
    this->io_in_bits_resp_in_0_s3_full_pred_0_br_taken_mask_0.ReInit(0, IOType::Input, "io_in_bits_resp_in_0_s3_full_pred_0_br_taken_mask_0");
    this->io_in_bits_resp_in_0_s3_full_pred_0_br_taken_mask_1.ReInit(0, IOType::Input, "io_in_bits_resp_in_0_s3_full_pred_0_br_taken_mask_1");
    this->io_in_bits_resp_in_0_s3_full_pred_0_slot_valids_0.ReInit(0, IOType::Input, "io_in_bits_resp_in_0_s3_full_pred_0_slot_valids_0");
    this->io_in_bits_resp_in_0_s3_full_pred_0_slot_valids_1.ReInit(0, IOType::Input, "io_in_bits_resp_in_0_s3_full_pred_0_slot_valids_1");
    this->io_in_bits_resp_in_0_s3_full_pred_0_targets_0.ReInit(41, IOType::Input, "io_in_bits_resp_in_0_s3_full_pred_0_targets_0");
    this->io_in_bits_resp_in_0_s3_full_pred_0_targets_1.ReInit(41, IOType::Input, "io_in_bits_resp_in_0_s3_full_pred_0_targets_1");
    this->io_in_bits_resp_in_0_s3_full_pred_0_jalr_target.ReInit(41, IOType::Input, "io_in_bits_resp_in_0_s3_full_pred_0_jalr_target");
    this->io_in_bits_resp_in_0_s3_full_pred_0_fallThroughAddr.ReInit(41, IOType::Input, "io_in_bits_resp_in_0_s3_full_pred_0_fallThroughAddr");
    this->io_in_bits_resp_in_0_s3_full_pred_0_fallThroughErr.ReInit(0, IOType::Input, "io_in_bits_resp_in_0_s3_full_pred_0_fallThroughErr");
    this->io_in_bits_resp_in_0_s3_full_pred_0_multiHit.ReInit(0, IOType::Input, "io_in_bits_resp_in_0_s3_full_pred_0_multiHit");
    this->io_in_bits_resp_in_0_s3_full_pred_0_is_br_sharing.ReInit(0, IOType::Input, "io_in_bits_resp_in_0_s3_full_pred_0_is_br_sharing");
    this->io_in_bits_resp_in_0_s3_full_pred_0_hit.ReInit(0, IOType::Input, "io_in_bits_resp_in_0_s3_full_pred_0_hit");
    this->io_in_bits_resp_in_0_s3_full_pred_1_br_taken_mask_0.ReInit(0, IOType::Input, "io_in_bits_resp_in_0_s3_full_pred_1_br_taken_mask_0");
    this->io_in_bits_resp_in_0_s3_full_pred_1_br_taken_mask_1.ReInit(0, IOType::Input, "io_in_bits_resp_in_0_s3_full_pred_1_br_taken_mask_1");
    this->io_in_bits_resp_in_0_s3_full_pred_1_slot_valids_0.ReInit(0, IOType::Input, "io_in_bits_resp_in_0_s3_full_pred_1_slot_valids_0");
    this->io_in_bits_resp_in_0_s3_full_pred_1_slot_valids_1.ReInit(0, IOType::Input, "io_in_bits_resp_in_0_s3_full_pred_1_slot_valids_1");
    this->io_in_bits_resp_in_0_s3_full_pred_1_targets_0.ReInit(41, IOType::Input, "io_in_bits_resp_in_0_s3_full_pred_1_targets_0");
    this->io_in_bits_resp_in_0_s3_full_pred_1_targets_1.ReInit(41, IOType::Input, "io_in_bits_resp_in_0_s3_full_pred_1_targets_1");
    this->io_in_bits_resp_in_0_s3_full_pred_1_jalr_target.ReInit(41, IOType::Input, "io_in_bits_resp_in_0_s3_full_pred_1_jalr_target");
    this->io_in_bits_resp_in_0_s3_full_pred_1_fallThroughAddr.ReInit(41, IOType::Input, "io_in_bits_resp_in_0_s3_full_pred_1_fallThroughAddr");
    this->io_in_bits_resp_in_0_s3_full_pred_1_fallThroughErr.ReInit(0, IOType::Input, "io_in_bits_resp_in_0_s3_full_pred_1_fallThroughErr");
    this->io_in_bits_resp_in_0_s3_full_pred_1_multiHit.ReInit(0, IOType::Input, "io_in_bits_resp_in_0_s3_full_pred_1_multiHit");
    this->io_in_bits_resp_in_0_s3_full_pred_1_is_br_sharing.ReInit(0, IOType::Input, "io_in_bits_resp_in_0_s3_full_pred_1_is_br_sharing");
    this->io_in_bits_resp_in_0_s3_full_pred_1_hit.ReInit(0, IOType::Input, "io_in_bits_resp_in_0_s3_full_pred_1_hit");
    this->io_in_bits_resp_in_0_s3_full_pred_2_br_taken_mask_0.ReInit(0, IOType::Input, "io_in_bits_resp_in_0_s3_full_pred_2_br_taken_mask_0");
    this->io_in_bits_resp_in_0_s3_full_pred_2_br_taken_mask_1.ReInit(0, IOType::Input, "io_in_bits_resp_in_0_s3_full_pred_2_br_taken_mask_1");
    this->io_in_bits_resp_in_0_s3_full_pred_2_slot_valids_0.ReInit(0, IOType::Input, "io_in_bits_resp_in_0_s3_full_pred_2_slot_valids_0");
    this->io_in_bits_resp_in_0_s3_full_pred_2_slot_valids_1.ReInit(0, IOType::Input, "io_in_bits_resp_in_0_s3_full_pred_2_slot_valids_1");
    this->io_in_bits_resp_in_0_s3_full_pred_2_targets_0.ReInit(41, IOType::Input, "io_in_bits_resp_in_0_s3_full_pred_2_targets_0");
    this->io_in_bits_resp_in_0_s3_full_pred_2_targets_1.ReInit(41, IOType::Input, "io_in_bits_resp_in_0_s3_full_pred_2_targets_1");
    this->io_in_bits_resp_in_0_s3_full_pred_2_jalr_target.ReInit(41, IOType::Input, "io_in_bits_resp_in_0_s3_full_pred_2_jalr_target");
    this->io_in_bits_resp_in_0_s3_full_pred_2_fallThroughAddr.ReInit(41, IOType::Input, "io_in_bits_resp_in_0_s3_full_pred_2_fallThroughAddr");
    this->io_in_bits_resp_in_0_s3_full_pred_2_fallThroughErr.ReInit(0, IOType::Input, "io_in_bits_resp_in_0_s3_full_pred_2_fallThroughErr");
    this->io_in_bits_resp_in_0_s3_full_pred_2_multiHit.ReInit(0, IOType::Input, "io_in_bits_resp_in_0_s3_full_pred_2_multiHit");
    this->io_in_bits_resp_in_0_s3_full_pred_2_is_jalr.ReInit(0, IOType::Input, "io_in_bits_resp_in_0_s3_full_pred_2_is_jalr");
    this->io_in_bits_resp_in_0_s3_full_pred_2_is_call.ReInit(0, IOType::Input, "io_in_bits_resp_in_0_s3_full_pred_2_is_call");
    this->io_in_bits_resp_in_0_s3_full_pred_2_is_ret.ReInit(0, IOType::Input, "io_in_bits_resp_in_0_s3_full_pred_2_is_ret");
    this->io_in_bits_resp_in_0_s3_full_pred_2_is_br_sharing.ReInit(0, IOType::Input, "io_in_bits_resp_in_0_s3_full_pred_2_is_br_sharing");
    this->io_in_bits_resp_in_0_s3_full_pred_2_hit.ReInit(0, IOType::Input, "io_in_bits_resp_in_0_s3_full_pred_2_hit");
    this->io_in_bits_resp_in_0_s3_full_pred_3_br_taken_mask_0.ReInit(0, IOType::Input, "io_in_bits_resp_in_0_s3_full_pred_3_br_taken_mask_0");
    this->io_in_bits_resp_in_0_s3_full_pred_3_br_taken_mask_1.ReInit(0, IOType::Input, "io_in_bits_resp_in_0_s3_full_pred_3_br_taken_mask_1");
    this->io_in_bits_resp_in_0_s3_full_pred_3_slot_valids_0.ReInit(0, IOType::Input, "io_in_bits_resp_in_0_s3_full_pred_3_slot_valids_0");
    this->io_in_bits_resp_in_0_s3_full_pred_3_slot_valids_1.ReInit(0, IOType::Input, "io_in_bits_resp_in_0_s3_full_pred_3_slot_valids_1");
    this->io_in_bits_resp_in_0_s3_full_pred_3_targets_0.ReInit(41, IOType::Input, "io_in_bits_resp_in_0_s3_full_pred_3_targets_0");
    this->io_in_bits_resp_in_0_s3_full_pred_3_targets_1.ReInit(41, IOType::Input, "io_in_bits_resp_in_0_s3_full_pred_3_targets_1");
    this->io_in_bits_resp_in_0_s3_full_pred_3_jalr_target.ReInit(41, IOType::Input, "io_in_bits_resp_in_0_s3_full_pred_3_jalr_target");
    this->io_in_bits_resp_in_0_s3_full_pred_3_offsets_0.ReInit(4, IOType::Input, "io_in_bits_resp_in_0_s3_full_pred_3_offsets_0");
    this->io_in_bits_resp_in_0_s3_full_pred_3_offsets_1.ReInit(4, IOType::Input, "io_in_bits_resp_in_0_s3_full_pred_3_offsets_1");
    this->io_in_bits_resp_in_0_s3_full_pred_3_fallThroughAddr.ReInit(41, IOType::Input, "io_in_bits_resp_in_0_s3_full_pred_3_fallThroughAddr");
    this->io_in_bits_resp_in_0_s3_full_pred_3_fallThroughErr.ReInit(0, IOType::Input, "io_in_bits_resp_in_0_s3_full_pred_3_fallThroughErr");
    this->io_in_bits_resp_in_0_s3_full_pred_3_multiHit.ReInit(0, IOType::Input, "io_in_bits_resp_in_0_s3_full_pred_3_multiHit");
    this->io_in_bits_resp_in_0_s3_full_pred_3_is_br_sharing.ReInit(0, IOType::Input, "io_in_bits_resp_in_0_s3_full_pred_3_is_br_sharing");
    this->io_in_bits_resp_in_0_s3_full_pred_3_hit.ReInit(0, IOType::Input, "io_in_bits_resp_in_0_s3_full_pred_3_hit");
    this->io_in_bits_resp_in_0_last_stage_ftb_entry_isCall.ReInit(0, IOType::Input, "io_in_bits_resp_in_0_last_stage_ftb_entry_isCall");
    this->io_in_bits_resp_in_0_last_stage_ftb_entry_isRet.ReInit(0, IOType::Input, "io_in_bits_resp_in_0_last_stage_ftb_entry_isRet");
    this->io_in_bits_resp_in_0_last_stage_ftb_entry_isJalr.ReInit(0, IOType::Input, "io_in_bits_resp_in_0_last_stage_ftb_entry_isJalr");
    this->io_in_bits_resp_in_0_last_stage_ftb_entry_valid.ReInit(0, IOType::Input, "io_in_bits_resp_in_0_last_stage_ftb_entry_valid");
    this->io_in_bits_resp_in_0_last_stage_ftb_entry_brSlots_0_offset.ReInit(4, IOType::Input, "io_in_bits_resp_in_0_last_stage_ftb_entry_brSlots_0_offset");
    this->io_in_bits_resp_in_0_last_stage_ftb_entry_brSlots_0_sharing.ReInit(0, IOType::Input, "io_in_bits_resp_in_0_last_stage_ftb_entry_brSlots_0_sharing");
    this->io_in_bits_resp_in_0_last_stage_ftb_entry_brSlots_0_valid.ReInit(0, IOType::Input, "io_in_bits_resp_in_0_last_stage_ftb_entry_brSlots_0_valid");
    this->io_in_bits_resp_in_0_last_stage_ftb_entry_brSlots_0_lower.ReInit(12, IOType::Input, "io_in_bits_resp_in_0_last_stage_ftb_entry_brSlots_0_lower");
    this->io_in_bits_resp_in_0_last_stage_ftb_entry_brSlots_0_tarStat.ReInit(2, IOType::Input, "io_in_bits_resp_in_0_last_stage_ftb_entry_brSlots_0_tarStat");
    this->io_in_bits_resp_in_0_last_stage_ftb_entry_tailSlot_offset.ReInit(4, IOType::Input, "io_in_bits_resp_in_0_last_stage_ftb_entry_tailSlot_offset");
    this->io_in_bits_resp_in_0_last_stage_ftb_entry_tailSlot_sharing.ReInit(0, IOType::Input, "io_in_bits_resp_in_0_last_stage_ftb_entry_tailSlot_sharing");
    this->io_in_bits_resp_in_0_last_stage_ftb_entry_tailSlot_valid.ReInit(0, IOType::Input, "io_in_bits_resp_in_0_last_stage_ftb_entry_tailSlot_valid");
    this->io_in_bits_resp_in_0_last_stage_ftb_entry_tailSlot_lower.ReInit(20, IOType::Input, "io_in_bits_resp_in_0_last_stage_ftb_entry_tailSlot_lower");
    this->io_in_bits_resp_in_0_last_stage_ftb_entry_tailSlot_tarStat.ReInit(2, IOType::Input, "io_in_bits_resp_in_0_last_stage_ftb_entry_tailSlot_tarStat");
    this->io_in_bits_resp_in_0_last_stage_ftb_entry_pftAddr.ReInit(4, IOType::Input, "io_in_bits_resp_in_0_last_stage_ftb_entry_pftAddr");
    this->io_in_bits_resp_in_0_last_stage_ftb_entry_carry.ReInit(0, IOType::Input, "io_in_bits_resp_in_0_last_stage_ftb_entry_carry");
    this->io_in_bits_resp_in_0_last_stage_ftb_entry_last_may_be_rvi_call.ReInit(0, IOType::Input, "io_in_bits_resp_in_0_last_stage_ftb_entry_last_may_be_rvi_call");
    this->io_in_bits_resp_in_0_last_stage_ftb_entry_always_taken_0.ReInit(0, IOType::Input, "io_in_bits_resp_in_0_last_stage_ftb_entry_always_taken_0");
    this->io_in_bits_resp_in_0_last_stage_ftb_entry_always_taken_1.ReInit(0, IOType::Input, "io_in_bits_resp_in_0_last_stage_ftb_entry_always_taken_1");
    this->io_out_s2_pc_0.ReInit(41, IOType::Output, "io_out_s2_pc_0");
    this->io_out_s2_pc_1.ReInit(41, IOType::Output, "io_out_s2_pc_1");
    this->io_out_s2_pc_2.ReInit(41, IOType::Output, "io_out_s2_pc_2");
    this->io_out_s2_pc_3.ReInit(41, IOType::Output, "io_out_s2_pc_3");
    this->io_out_s2_full_pred_0_br_taken_mask_0.ReInit(0, IOType::Output, "io_out_s2_full_pred_0_br_taken_mask_0");
    this->io_out_s2_full_pred_0_br_taken_mask_1.ReInit(0, IOType::Output, "io_out_s2_full_pred_0_br_taken_mask_1");
    this->io_out_s2_full_pred_0_slot_valids_0.ReInit(0, IOType::Output, "io_out_s2_full_pred_0_slot_valids_0");
    this->io_out_s2_full_pred_0_slot_valids_1.ReInit(0, IOType::Output, "io_out_s2_full_pred_0_slot_valids_1");
    this->io_out_s2_full_pred_0_targets_0.ReInit(41, IOType::Output, "io_out_s2_full_pred_0_targets_0");
    this->io_out_s2_full_pred_0_targets_1.ReInit(41, IOType::Output, "io_out_s2_full_pred_0_targets_1");
    this->io_out_s2_full_pred_0_offsets_0.ReInit(4, IOType::Output, "io_out_s2_full_pred_0_offsets_0");
    this->io_out_s2_full_pred_0_offsets_1.ReInit(4, IOType::Output, "io_out_s2_full_pred_0_offsets_1");
    this->io_out_s2_full_pred_0_fallThroughAddr.ReInit(41, IOType::Output, "io_out_s2_full_pred_0_fallThroughAddr");
    this->io_out_s2_full_pred_0_is_br_sharing.ReInit(0, IOType::Output, "io_out_s2_full_pred_0_is_br_sharing");
    this->io_out_s2_full_pred_0_hit.ReInit(0, IOType::Output, "io_out_s2_full_pred_0_hit");
    this->io_out_s2_full_pred_1_br_taken_mask_0.ReInit(0, IOType::Output, "io_out_s2_full_pred_1_br_taken_mask_0");
    this->io_out_s2_full_pred_1_br_taken_mask_1.ReInit(0, IOType::Output, "io_out_s2_full_pred_1_br_taken_mask_1");
    this->io_out_s2_full_pred_1_slot_valids_0.ReInit(0, IOType::Output, "io_out_s2_full_pred_1_slot_valids_0");
    this->io_out_s2_full_pred_1_slot_valids_1.ReInit(0, IOType::Output, "io_out_s2_full_pred_1_slot_valids_1");
    this->io_out_s2_full_pred_1_targets_0.ReInit(41, IOType::Output, "io_out_s2_full_pred_1_targets_0");
    this->io_out_s2_full_pred_1_targets_1.ReInit(41, IOType::Output, "io_out_s2_full_pred_1_targets_1");
    this->io_out_s2_full_pred_1_offsets_0.ReInit(4, IOType::Output, "io_out_s2_full_pred_1_offsets_0");
    this->io_out_s2_full_pred_1_offsets_1.ReInit(4, IOType::Output, "io_out_s2_full_pred_1_offsets_1");
    this->io_out_s2_full_pred_1_fallThroughAddr.ReInit(41, IOType::Output, "io_out_s2_full_pred_1_fallThroughAddr");
    this->io_out_s2_full_pred_1_is_br_sharing.ReInit(0, IOType::Output, "io_out_s2_full_pred_1_is_br_sharing");
    this->io_out_s2_full_pred_1_hit.ReInit(0, IOType::Output, "io_out_s2_full_pred_1_hit");
    this->io_out_s2_full_pred_2_br_taken_mask_0.ReInit(0, IOType::Output, "io_out_s2_full_pred_2_br_taken_mask_0");
    this->io_out_s2_full_pred_2_br_taken_mask_1.ReInit(0, IOType::Output, "io_out_s2_full_pred_2_br_taken_mask_1");
    this->io_out_s2_full_pred_2_slot_valids_0.ReInit(0, IOType::Output, "io_out_s2_full_pred_2_slot_valids_0");
    this->io_out_s2_full_pred_2_slot_valids_1.ReInit(0, IOType::Output, "io_out_s2_full_pred_2_slot_valids_1");
    this->io_out_s2_full_pred_2_targets_0.ReInit(41, IOType::Output, "io_out_s2_full_pred_2_targets_0");
    this->io_out_s2_full_pred_2_targets_1.ReInit(41, IOType::Output, "io_out_s2_full_pred_2_targets_1");
    this->io_out_s2_full_pred_2_offsets_0.ReInit(4, IOType::Output, "io_out_s2_full_pred_2_offsets_0");
    this->io_out_s2_full_pred_2_offsets_1.ReInit(4, IOType::Output, "io_out_s2_full_pred_2_offsets_1");
    this->io_out_s2_full_pred_2_fallThroughAddr.ReInit(41, IOType::Output, "io_out_s2_full_pred_2_fallThroughAddr");
    this->io_out_s2_full_pred_2_is_br_sharing.ReInit(0, IOType::Output, "io_out_s2_full_pred_2_is_br_sharing");
    this->io_out_s2_full_pred_2_hit.ReInit(0, IOType::Output, "io_out_s2_full_pred_2_hit");
    this->io_out_s2_full_pred_3_br_taken_mask_0.ReInit(0, IOType::Output, "io_out_s2_full_pred_3_br_taken_mask_0");
    this->io_out_s2_full_pred_3_br_taken_mask_1.ReInit(0, IOType::Output, "io_out_s2_full_pred_3_br_taken_mask_1");
    this->io_out_s2_full_pred_3_slot_valids_0.ReInit(0, IOType::Output, "io_out_s2_full_pred_3_slot_valids_0");
    this->io_out_s2_full_pred_3_slot_valids_1.ReInit(0, IOType::Output, "io_out_s2_full_pred_3_slot_valids_1");
    this->io_out_s2_full_pred_3_targets_0.ReInit(41, IOType::Output, "io_out_s2_full_pred_3_targets_0");
    this->io_out_s2_full_pred_3_targets_1.ReInit(41, IOType::Output, "io_out_s2_full_pred_3_targets_1");
    this->io_out_s2_full_pred_3_offsets_0.ReInit(4, IOType::Output, "io_out_s2_full_pred_3_offsets_0");
    this->io_out_s2_full_pred_3_offsets_1.ReInit(4, IOType::Output, "io_out_s2_full_pred_3_offsets_1");
    this->io_out_s2_full_pred_3_fallThroughAddr.ReInit(41, IOType::Output, "io_out_s2_full_pred_3_fallThroughAddr");
    this->io_out_s2_full_pred_3_fallThroughErr.ReInit(0, IOType::Output, "io_out_s2_full_pred_3_fallThroughErr");
    this->io_out_s2_full_pred_3_is_br_sharing.ReInit(0, IOType::Output, "io_out_s2_full_pred_3_is_br_sharing");
    this->io_out_s2_full_pred_3_hit.ReInit(0, IOType::Output, "io_out_s2_full_pred_3_hit");
    this->io_out_s3_pc_0.ReInit(41, IOType::Output, "io_out_s3_pc_0");
    this->io_out_s3_pc_1.ReInit(41, IOType::Output, "io_out_s3_pc_1");
    this->io_out_s3_pc_2.ReInit(41, IOType::Output, "io_out_s3_pc_2");
    this->io_out_s3_pc_3.ReInit(41, IOType::Output, "io_out_s3_pc_3");
    this->io_out_s3_full_pred_0_br_taken_mask_0.ReInit(0, IOType::Output, "io_out_s3_full_pred_0_br_taken_mask_0");
    this->io_out_s3_full_pred_0_br_taken_mask_1.ReInit(0, IOType::Output, "io_out_s3_full_pred_0_br_taken_mask_1");
    this->io_out_s3_full_pred_0_slot_valids_0.ReInit(0, IOType::Output, "io_out_s3_full_pred_0_slot_valids_0");
    this->io_out_s3_full_pred_0_slot_valids_1.ReInit(0, IOType::Output, "io_out_s3_full_pred_0_slot_valids_1");
    this->io_out_s3_full_pred_0_targets_0.ReInit(41, IOType::Output, "io_out_s3_full_pred_0_targets_0");
    this->io_out_s3_full_pred_0_targets_1.ReInit(41, IOType::Output, "io_out_s3_full_pred_0_targets_1");
    this->io_out_s3_full_pred_0_fallThroughAddr.ReInit(41, IOType::Output, "io_out_s3_full_pred_0_fallThroughAddr");
    this->io_out_s3_full_pred_0_fallThroughErr.ReInit(0, IOType::Output, "io_out_s3_full_pred_0_fallThroughErr");
    this->io_out_s3_full_pred_0_multiHit.ReInit(0, IOType::Output, "io_out_s3_full_pred_0_multiHit");
    this->io_out_s3_full_pred_0_is_br_sharing.ReInit(0, IOType::Output, "io_out_s3_full_pred_0_is_br_sharing");
    this->io_out_s3_full_pred_0_hit.ReInit(0, IOType::Output, "io_out_s3_full_pred_0_hit");
    this->io_out_s3_full_pred_1_br_taken_mask_0.ReInit(0, IOType::Output, "io_out_s3_full_pred_1_br_taken_mask_0");
    this->io_out_s3_full_pred_1_br_taken_mask_1.ReInit(0, IOType::Output, "io_out_s3_full_pred_1_br_taken_mask_1");
    this->io_out_s3_full_pred_1_slot_valids_0.ReInit(0, IOType::Output, "io_out_s3_full_pred_1_slot_valids_0");
    this->io_out_s3_full_pred_1_slot_valids_1.ReInit(0, IOType::Output, "io_out_s3_full_pred_1_slot_valids_1");
    this->io_out_s3_full_pred_1_targets_0.ReInit(41, IOType::Output, "io_out_s3_full_pred_1_targets_0");
    this->io_out_s3_full_pred_1_targets_1.ReInit(41, IOType::Output, "io_out_s3_full_pred_1_targets_1");
    this->io_out_s3_full_pred_1_fallThroughAddr.ReInit(41, IOType::Output, "io_out_s3_full_pred_1_fallThroughAddr");
    this->io_out_s3_full_pred_1_fallThroughErr.ReInit(0, IOType::Output, "io_out_s3_full_pred_1_fallThroughErr");
    this->io_out_s3_full_pred_1_multiHit.ReInit(0, IOType::Output, "io_out_s3_full_pred_1_multiHit");
    this->io_out_s3_full_pred_1_is_br_sharing.ReInit(0, IOType::Output, "io_out_s3_full_pred_1_is_br_sharing");
    this->io_out_s3_full_pred_1_hit.ReInit(0, IOType::Output, "io_out_s3_full_pred_1_hit");
    this->io_out_s3_full_pred_2_br_taken_mask_0.ReInit(0, IOType::Output, "io_out_s3_full_pred_2_br_taken_mask_0");
    this->io_out_s3_full_pred_2_br_taken_mask_1.ReInit(0, IOType::Output, "io_out_s3_full_pred_2_br_taken_mask_1");
    this->io_out_s3_full_pred_2_slot_valids_0.ReInit(0, IOType::Output, "io_out_s3_full_pred_2_slot_valids_0");
    this->io_out_s3_full_pred_2_slot_valids_1.ReInit(0, IOType::Output, "io_out_s3_full_pred_2_slot_valids_1");
    this->io_out_s3_full_pred_2_targets_0.ReInit(41, IOType::Output, "io_out_s3_full_pred_2_targets_0");
    this->io_out_s3_full_pred_2_targets_1.ReInit(41, IOType::Output, "io_out_s3_full_pred_2_targets_1");
    this->io_out_s3_full_pred_2_fallThroughAddr.ReInit(41, IOType::Output, "io_out_s3_full_pred_2_fallThroughAddr");
    this->io_out_s3_full_pred_2_fallThroughErr.ReInit(0, IOType::Output, "io_out_s3_full_pred_2_fallThroughErr");
    this->io_out_s3_full_pred_2_multiHit.ReInit(0, IOType::Output, "io_out_s3_full_pred_2_multiHit");
    this->io_out_s3_full_pred_2_is_br_sharing.ReInit(0, IOType::Output, "io_out_s3_full_pred_2_is_br_sharing");
    this->io_out_s3_full_pred_2_hit.ReInit(0, IOType::Output, "io_out_s3_full_pred_2_hit");
    this->io_out_s3_full_pred_3_br_taken_mask_0.ReInit(0, IOType::Output, "io_out_s3_full_pred_3_br_taken_mask_0");
    this->io_out_s3_full_pred_3_br_taken_mask_1.ReInit(0, IOType::Output, "io_out_s3_full_pred_3_br_taken_mask_1");
    this->io_out_s3_full_pred_3_slot_valids_0.ReInit(0, IOType::Output, "io_out_s3_full_pred_3_slot_valids_0");
    this->io_out_s3_full_pred_3_slot_valids_1.ReInit(0, IOType::Output, "io_out_s3_full_pred_3_slot_valids_1");
    this->io_out_s3_full_pred_3_targets_0.ReInit(41, IOType::Output, "io_out_s3_full_pred_3_targets_0");
    this->io_out_s3_full_pred_3_targets_1.ReInit(41, IOType::Output, "io_out_s3_full_pred_3_targets_1");
    this->io_out_s3_full_pred_3_offsets_0.ReInit(4, IOType::Output, "io_out_s3_full_pred_3_offsets_0");
    this->io_out_s3_full_pred_3_offsets_1.ReInit(4, IOType::Output, "io_out_s3_full_pred_3_offsets_1");
    this->io_out_s3_full_pred_3_fallThroughAddr.ReInit(41, IOType::Output, "io_out_s3_full_pred_3_fallThroughAddr");
    this->io_out_s3_full_pred_3_fallThroughErr.ReInit(0, IOType::Output, "io_out_s3_full_pred_3_fallThroughErr");
    this->io_out_s3_full_pred_3_multiHit.ReInit(0, IOType::Output, "io_out_s3_full_pred_3_multiHit");
    this->io_out_s3_full_pred_3_is_br_sharing.ReInit(0, IOType::Output, "io_out_s3_full_pred_3_is_br_sharing");
    this->io_out_s3_full_pred_3_hit.ReInit(0, IOType::Output, "io_out_s3_full_pred_3_hit");
    this->io_out_last_stage_meta.ReInit(251, IOType::Output, "io_out_last_stage_meta");
    this->io_out_last_stage_spec_info_ssp.ReInit(4, IOType::Output, "io_out_last_stage_spec_info_ssp");
    this->io_out_last_stage_spec_info_sctr.ReInit(3, IOType::Output, "io_out_last_stage_spec_info_sctr");
    this->io_out_last_stage_spec_info_TOSW_flag.ReInit(0, IOType::Output, "io_out_last_stage_spec_info_TOSW_flag");
    this->io_out_last_stage_spec_info_TOSW_value.ReInit(5, IOType::Output, "io_out_last_stage_spec_info_TOSW_value");
    this->io_out_last_stage_spec_info_TOSR_flag.ReInit(0, IOType::Output, "io_out_last_stage_spec_info_TOSR_flag");
    this->io_out_last_stage_spec_info_TOSR_value.ReInit(5, IOType::Output, "io_out_last_stage_spec_info_TOSR_value");
    this->io_out_last_stage_spec_info_NOS_flag.ReInit(0, IOType::Output, "io_out_last_stage_spec_info_NOS_flag");
    this->io_out_last_stage_spec_info_NOS_value.ReInit(5, IOType::Output, "io_out_last_stage_spec_info_NOS_value");
    this->io_out_last_stage_spec_info_topAddr.ReInit(41, IOType::Output, "io_out_last_stage_spec_info_topAddr");
    this->io_out_last_stage_ftb_entry_isCall.ReInit(0, IOType::Output, "io_out_last_stage_ftb_entry_isCall");
    this->io_out_last_stage_ftb_entry_isRet.ReInit(0, IOType::Output, "io_out_last_stage_ftb_entry_isRet");
    this->io_out_last_stage_ftb_entry_isJalr.ReInit(0, IOType::Output, "io_out_last_stage_ftb_entry_isJalr");
    this->io_out_last_stage_ftb_entry_valid.ReInit(0, IOType::Output, "io_out_last_stage_ftb_entry_valid");
    this->io_out_last_stage_ftb_entry_brSlots_0_offset.ReInit(4, IOType::Output, "io_out_last_stage_ftb_entry_brSlots_0_offset");
    this->io_out_last_stage_ftb_entry_brSlots_0_sharing.ReInit(0, IOType::Output, "io_out_last_stage_ftb_entry_brSlots_0_sharing");
    this->io_out_last_stage_ftb_entry_brSlots_0_valid.ReInit(0, IOType::Output, "io_out_last_stage_ftb_entry_brSlots_0_valid");
    this->io_out_last_stage_ftb_entry_brSlots_0_lower.ReInit(12, IOType::Output, "io_out_last_stage_ftb_entry_brSlots_0_lower");
    this->io_out_last_stage_ftb_entry_brSlots_0_tarStat.ReInit(2, IOType::Output, "io_out_last_stage_ftb_entry_brSlots_0_tarStat");
    this->io_out_last_stage_ftb_entry_tailSlot_offset.ReInit(4, IOType::Output, "io_out_last_stage_ftb_entry_tailSlot_offset");
    this->io_out_last_stage_ftb_entry_tailSlot_sharing.ReInit(0, IOType::Output, "io_out_last_stage_ftb_entry_tailSlot_sharing");
    this->io_out_last_stage_ftb_entry_tailSlot_valid.ReInit(0, IOType::Output, "io_out_last_stage_ftb_entry_tailSlot_valid");
    this->io_out_last_stage_ftb_entry_tailSlot_lower.ReInit(20, IOType::Output, "io_out_last_stage_ftb_entry_tailSlot_lower");
    this->io_out_last_stage_ftb_entry_tailSlot_tarStat.ReInit(2, IOType::Output, "io_out_last_stage_ftb_entry_tailSlot_tarStat");
    this->io_out_last_stage_ftb_entry_pftAddr.ReInit(4, IOType::Output, "io_out_last_stage_ftb_entry_pftAddr");
    this->io_out_last_stage_ftb_entry_carry.ReInit(0, IOType::Output, "io_out_last_stage_ftb_entry_carry");
    this->io_out_last_stage_ftb_entry_last_may_be_rvi_call.ReInit(0, IOType::Output, "io_out_last_stage_ftb_entry_last_may_be_rvi_call");
    this->io_out_last_stage_ftb_entry_always_taken_0.ReInit(0, IOType::Output, "io_out_last_stage_ftb_entry_always_taken_0");
    this->io_out_last_stage_ftb_entry_always_taken_1.ReInit(0, IOType::Output, "io_out_last_stage_ftb_entry_always_taken_1");
    this->io_ctrl_ras_enable.ReInit(0, IOType::Input, "io_ctrl_ras_enable");
    this->io_s0_fire_0.ReInit(0, IOType::Input, "io_s0_fire_0");
    this->io_s0_fire_1.ReInit(0, IOType::Input, "io_s0_fire_1");
    this->io_s0_fire_2.ReInit(0, IOType::Input, "io_s0_fire_2");
    this->io_s0_fire_3.ReInit(0, IOType::Input, "io_s0_fire_3");
    this->io_s1_fire_0.ReInit(0, IOType::Input, "io_s1_fire_0");
    this->io_s1_fire_1.ReInit(0, IOType::Input, "io_s1_fire_1");
    this->io_s1_fire_2.ReInit(0, IOType::Input, "io_s1_fire_2");
    this->io_s1_fire_3.ReInit(0, IOType::Input, "io_s1_fire_3");
    this->io_s2_fire_0.ReInit(0, IOType::Input, "io_s2_fire_0");
    this->io_s2_fire_1.ReInit(0, IOType::Input, "io_s2_fire_1");
    this->io_s2_fire_2.ReInit(0, IOType::Input, "io_s2_fire_2");
    this->io_s2_fire_3.ReInit(0, IOType::Input, "io_s2_fire_3");
    this->io_s3_fire_2.ReInit(0, IOType::Input, "io_s3_fire_2");
    this->io_s3_redirect_2.ReInit(0, IOType::Input, "io_s3_redirect_2");
    this->io_update_valid.ReInit(0, IOType::Input, "io_update_valid");
    this->io_update_bits_ftb_entry_isCall.ReInit(0, IOType::Input, "io_update_bits_ftb_entry_isCall");
    this->io_update_bits_ftb_entry_isRet.ReInit(0, IOType::Input, "io_update_bits_ftb_entry_isRet");
    this->io_update_bits_ftb_entry_tailSlot_offset.ReInit(4, IOType::Input, "io_update_bits_ftb_entry_tailSlot_offset");
    this->io_update_bits_ftb_entry_tailSlot_valid.ReInit(0, IOType::Input, "io_update_bits_ftb_entry_tailSlot_valid");
    this->io_update_bits_cfi_idx_valid.ReInit(0, IOType::Input, "io_update_bits_cfi_idx_valid");
    this->io_update_bits_cfi_idx_bits.ReInit(4, IOType::Input, "io_update_bits_cfi_idx_bits");
    this->io_update_bits_jmp_taken.ReInit(0, IOType::Input, "io_update_bits_jmp_taken");
    this->io_update_bits_meta.ReInit(251, IOType::Input, "io_update_bits_meta");
    this->io_redirect_valid.ReInit(0, IOType::Input, "io_redirect_valid");
    this->io_redirect_bits_level.ReInit(0, IOType::Input, "io_redirect_bits_level");
    this->io_redirect_bits_cfiUpdate_pc.ReInit(41, IOType::Input, "io_redirect_bits_cfiUpdate_pc");
    this->io_redirect_bits_cfiUpdate_pd_isRVC.ReInit(0, IOType::Input, "io_redirect_bits_cfiUpdate_pd_isRVC");
    this->io_redirect_bits_cfiUpdate_pd_isCall.ReInit(0, IOType::Input, "io_redirect_bits_cfiUpdate_pd_isCall");
    this->io_redirect_bits_cfiUpdate_pd_isRet.ReInit(0, IOType::Input, "io_redirect_bits_cfiUpdate_pd_isRet");
    this->io_redirect_bits_cfiUpdate_ssp.ReInit(4, IOType::Input, "io_redirect_bits_cfiUpdate_ssp");
    this->io_redirect_bits_cfiUpdate_sctr.ReInit(2, IOType::Input, "io_redirect_bits_cfiUpdate_sctr");
    this->io_redirect_bits_cfiUpdate_TOSW_flag.ReInit(0, IOType::Input, "io_redirect_bits_cfiUpdate_TOSW_flag");
    this->io_redirect_bits_cfiUpdate_TOSW_value.ReInit(5, IOType::Input, "io_redirect_bits_cfiUpdate_TOSW_value");
    this->io_redirect_bits_cfiUpdate_TOSR_flag.ReInit(0, IOType::Input, "io_redirect_bits_cfiUpdate_TOSR_flag");
    this->io_redirect_bits_cfiUpdate_TOSR_value.ReInit(5, IOType::Input, "io_redirect_bits_cfiUpdate_TOSR_value");
    this->io_redirect_bits_cfiUpdate_NOS_flag.ReInit(0, IOType::Input, "io_redirect_bits_cfiUpdate_NOS_flag");
    this->io_redirect_bits_cfiUpdate_NOS_value.ReInit(5, IOType::Input, "io_redirect_bits_cfiUpdate_NOS_value");
    this->RAS_redirect_next_bits_r_level.ReInit(0, IOType::Output, "RAS.redirect_next_bits_r_level");
    this->RAS_redirect_next_valid_last_r.ReInit(0, IOType::Output, "RAS.redirect_next_valid_last_r");
    this->RAS_redirect_next_bits_r_cfiUpdate_pd_isRVC.ReInit(0, IOType::Output, "RAS.redirect_next_bits_r_cfiUpdate_pd_isRVC");
    this->RAS_redirect_next_bits_r_cfiUpdate_pd_isCall.ReInit(0, IOType::Output, "RAS.redirect_next_bits_r_cfiUpdate_pd_isCall");
    this->RAS_redirect_next_bits_r_cfiUpdate_pd_isRet.ReInit(0, IOType::Output, "RAS.redirect_next_bits_r_cfiUpdate_pd_isRet");
    this->RAS_s3_push.ReInit(0, IOType::Output, "RAS.s3_push");
    this->RAS_s3_pop.ReInit(0, IOType::Output, "RAS.s3_pop");
    this->RAS_s3_pushed_in_s2.ReInit(0, IOType::Output, "RAS.s3_pushed_in_s2");
    this->RAS_s2_spec_push.ReInit(0, IOType::Output, "RAS.s2_spec_push");
    this->RAS_RASStack_realPush.ReInit(0, IOType::Output, "RAS.RASStack.realPush");
    this->RAS_RASStack_TOSR_value.ReInit(5, IOType::Output, "RAS.RASStack.TOSR_value");
    this->RAS_RASStack_TOSW_value.ReInit(5, IOType::Output, "RAS.RASStack.TOSW_value");
    this->RAS_RASStack_BOS_value.ReInit(5, IOType::Output, "RAS.RASStack.BOS_value");
    this->RAS_RASStack_ssp.ReInit(4, IOType::Output, "RAS.RASStack.ssp");
    this->RAS_RASStack_nsp.ReInit(4, IOType::Output, "RAS.RASStack.nsp");
    this->RAS_RASStack_spec_overflowed.ReInit(0, IOType::Output, "RAS.RASStack.spec_overflowed");
    this->RAS_RASStack_writeBypassValid.ReInit(0, IOType::Output, "RAS.RASStack.writeBypassValid");
    this->RAS_RASStack_timingTop_retAddr.ReInit(41, IOType::Output, "RAS.RASStack.timingTop_retAddr");
    this->RAS_RASStack_sctr.ReInit(3, IOType::Output, "RAS.RASStack.sctr");
    this->RAS_RASStack_spec_queue_0_retAddr.ReInit(41, IOType::Output, "RAS.RASStack.spec_queue_0_retAddr");
    this->RAS_RASStack_spec_queue_1_retAddr.ReInit(41, IOType::Output, "RAS.RASStack.spec_queue_1_retAddr");
    this->RAS_RASStack_spec_queue_2_retAddr.ReInit(41, IOType::Output, "RAS.RASStack.spec_queue_2_retAddr");
    this->RAS_RASStack_spec_queue_3_retAddr.ReInit(41, IOType::Output, "RAS.RASStack.spec_queue_3_retAddr");
    this->RAS_RASStack_spec_queue_4_retAddr.ReInit(41, IOType::Output, "RAS.RASStack.spec_queue_4_retAddr");
    this->RAS_RASStack_spec_queue_5_retAddr.ReInit(41, IOType::Output, "RAS.RASStack.spec_queue_5_retAddr");
    this->RAS_RASStack_spec_queue_6_retAddr.ReInit(41, IOType::Output, "RAS.RASStack.spec_queue_6_retAddr");
    this->RAS_RASStack_spec_queue_7_retAddr.ReInit(41, IOType::Output, "RAS.RASStack.spec_queue_7_retAddr");
    this->RAS_RASStack_spec_queue_8_retAddr.ReInit(41, IOType::Output, "RAS.RASStack.spec_queue_8_retAddr");
    this->RAS_RASStack_spec_queue_9_retAddr.ReInit(41, IOType::Output, "RAS.RASStack.spec_queue_9_retAddr");
    this->RAS_RASStack_spec_queue_10_retAddr.ReInit(41, IOType::Output, "RAS.RASStack.spec_queue_10_retAddr");
    this->RAS_RASStack_spec_queue_11_retAddr.ReInit(41, IOType::Output, "RAS.RASStack.spec_queue_11_retAddr");
    this->RAS_RASStack_spec_queue_12_retAddr.ReInit(41, IOType::Output, "RAS.RASStack.spec_queue_12_retAddr");
    this->RAS_RASStack_spec_queue_13_retAddr.ReInit(41, IOType::Output, "RAS.RASStack.spec_queue_13_retAddr");
    this->RAS_RASStack_spec_queue_14_retAddr.ReInit(41, IOType::Output, "RAS.RASStack.spec_queue_14_retAddr");
    this->RAS_RASStack_spec_queue_15_retAddr.ReInit(41, IOType::Output, "RAS.RASStack.spec_queue_15_retAddr");
    this->RAS_RASStack_spec_queue_16_retAddr.ReInit(41, IOType::Output, "RAS.RASStack.spec_queue_16_retAddr");
    this->RAS_RASStack_spec_queue_17_retAddr.ReInit(41, IOType::Output, "RAS.RASStack.spec_queue_17_retAddr");
    this->RAS_RASStack_spec_queue_18_retAddr.ReInit(41, IOType::Output, "RAS.RASStack.spec_queue_18_retAddr");
    this->RAS_RASStack_spec_queue_19_retAddr.ReInit(41, IOType::Output, "RAS.RASStack.spec_queue_19_retAddr");
    this->RAS_RASStack_spec_queue_20_retAddr.ReInit(41, IOType::Output, "RAS.RASStack.spec_queue_20_retAddr");
    this->RAS_RASStack_spec_queue_21_retAddr.ReInit(41, IOType::Output, "RAS.RASStack.spec_queue_21_retAddr");
    this->RAS_RASStack_spec_queue_22_retAddr.ReInit(41, IOType::Output, "RAS.RASStack.spec_queue_22_retAddr");
    this->RAS_RASStack_spec_queue_23_retAddr.ReInit(41, IOType::Output, "RAS.RASStack.spec_queue_23_retAddr");
    this->RAS_RASStack_spec_queue_24_retAddr.ReInit(41, IOType::Output, "RAS.RASStack.spec_queue_24_retAddr");
    this->RAS_RASStack_spec_queue_25_retAddr.ReInit(41, IOType::Output, "RAS.RASStack.spec_queue_25_retAddr");
    this->RAS_RASStack_spec_queue_26_retAddr.ReInit(41, IOType::Output, "RAS.RASStack.spec_queue_26_retAddr");
    this->RAS_RASStack_spec_queue_27_retAddr.ReInit(41, IOType::Output, "RAS.RASStack.spec_queue_27_retAddr");
    this->RAS_RASStack_spec_queue_28_retAddr.ReInit(41, IOType::Output, "RAS.RASStack.spec_queue_28_retAddr");
    this->RAS_RASStack_spec_queue_29_retAddr.ReInit(41, IOType::Output, "RAS.RASStack.spec_queue_29_retAddr");
    this->RAS_RASStack_spec_queue_30_retAddr.ReInit(41, IOType::Output, "RAS.RASStack.spec_queue_30_retAddr");
    this->RAS_RASStack_spec_queue_31_retAddr.ReInit(41, IOType::Output, "RAS.RASStack.spec_queue_31_retAddr");
    this->RAS_RASStack_commit_stack_0_retAddr.ReInit(41, IOType::Output, "RAS.RASStack.commit_stack_0_retAddr");
    this->RAS_RASStack_commit_stack_1_retAddr.ReInit(41, IOType::Output, "RAS.RASStack.commit_stack_1_retAddr");
    this->RAS_RASStack_commit_stack_2_retAddr.ReInit(41, IOType::Output, "RAS.RASStack.commit_stack_2_retAddr");
    this->RAS_RASStack_commit_stack_3_retAddr.ReInit(41, IOType::Output, "RAS.RASStack.commit_stack_3_retAddr");
    this->RAS_RASStack_commit_stack_4_retAddr.ReInit(41, IOType::Output, "RAS.RASStack.commit_stack_4_retAddr");
    this->RAS_RASStack_commit_stack_5_retAddr.ReInit(41, IOType::Output, "RAS.RASStack.commit_stack_5_retAddr");
    this->RAS_RASStack_commit_stack_6_retAddr.ReInit(41, IOType::Output, "RAS.RASStack.commit_stack_6_retAddr");
    this->RAS_RASStack_commit_stack_7_retAddr.ReInit(41, IOType::Output, "RAS.RASStack.commit_stack_7_retAddr");
    this->RAS_RASStack_commit_stack_8_retAddr.ReInit(41, IOType::Output, "RAS.RASStack.commit_stack_8_retAddr");
    this->RAS_RASStack_commit_stack_9_retAddr.ReInit(41, IOType::Output, "RAS.RASStack.commit_stack_9_retAddr");
    this->RAS_RASStack_commit_stack_10_retAddr.ReInit(41, IOType::Output, "RAS.RASStack.commit_stack_10_retAddr");
    this->RAS_RASStack_commit_stack_11_retAddr.ReInit(41, IOType::Output, "RAS.RASStack.commit_stack_11_retAddr");
    this->RAS_RASStack_commit_stack_12_retAddr.ReInit(41, IOType::Output, "RAS.RASStack.commit_stack_12_retAddr");
    this->RAS_RASStack_commit_stack_13_retAddr.ReInit(41, IOType::Output, "RAS.RASStack.commit_stack_13_retAddr");
    this->RAS_RASStack_commit_stack_14_retAddr.ReInit(41, IOType::Output, "RAS.RASStack.commit_stack_14_retAddr");
    this->RAS_RASStack_commit_stack_15_retAddr.ReInit(41, IOType::Output, "RAS.RASStack.commit_stack_15_retAddr");
    this->RAS_RASStack_commit_stack_0_ctr.ReInit(8, IOType::Output, "RAS.RASStack.commit_stack_0_ctr");
    this->RAS_RASStack_commit_stack_1_ctr.ReInit(8, IOType::Output, "RAS.RASStack.commit_stack_1_ctr");
    this->RAS_RASStack_commit_stack_2_ctr.ReInit(8, IOType::Output, "RAS.RASStack.commit_stack_2_ctr");
    this->RAS_RASStack_commit_stack_3_ctr.ReInit(8, IOType::Output, "RAS.RASStack.commit_stack_3_ctr");
    this->RAS_RASStack_commit_stack_4_ctr.ReInit(8, IOType::Output, "RAS.RASStack.commit_stack_4_ctr");
    this->RAS_RASStack_commit_stack_5_ctr.ReInit(8, IOType::Output, "RAS.RASStack.commit_stack_5_ctr");
    this->RAS_RASStack_commit_stack_6_ctr.ReInit(8, IOType::Output, "RAS.RASStack.commit_stack_6_ctr");
    this->RAS_RASStack_commit_stack_7_ctr.ReInit(8, IOType::Output, "RAS.RASStack.commit_stack_7_ctr");
    this->RAS_RASStack_commit_stack_8_ctr.ReInit(8, IOType::Output, "RAS.RASStack.commit_stack_8_ctr");
    this->RAS_RASStack_commit_stack_9_ctr.ReInit(8, IOType::Output, "RAS.RASStack.commit_stack_9_ctr");
    this->RAS_RASStack_commit_stack_10_ctr.ReInit(8, IOType::Output, "RAS.RASStack.commit_stack_10_ctr");
    this->RAS_RASStack_commit_stack_11_ctr.ReInit(8, IOType::Output, "RAS.RASStack.commit_stack_11_ctr");
    this->RAS_RASStack_commit_stack_12_ctr.ReInit(8, IOType::Output, "RAS.RASStack.commit_stack_12_ctr");
    this->RAS_RASStack_commit_stack_13_ctr.ReInit(8, IOType::Output, "RAS.RASStack.commit_stack_13_ctr");
    this->RAS_RASStack_commit_stack_14_ctr.ReInit(8, IOType::Output, "RAS.RASStack.commit_stack_14_ctr");
    this->RAS_RASStack_commit_stack_15_ctr.ReInit(8, IOType::Output, "RAS.RASStack.commit_stack_15_ctr");
    this->RAS_RASStack_io_spec_push_valid.ReInit(0, IOType::Output, "RAS.RASStack.io_spec_push_valid");
    this->RAS_RASStack_io_spec_pop_valid.ReInit(0, IOType::Output, "RAS.RASStack.io_spec_pop_valid");
    this->RAS_RASStack_io_commit_push_valid.ReInit(0, IOType::Output, "RAS.RASStack.io_commit_push_valid");
    this->RAS_RASStack_io_commit_pop_valid.ReInit(0, IOType::Output, "RAS.RASStack.io_commit_pop_valid");
    this->RAS_RASStack_io_redirect_valid.ReInit(0, IOType::Output, "RAS.RASStack.io_redirect_valid");
    this->RAS_RASStack_io_redirect_isCall.ReInit(0, IOType::Output, "RAS.RASStack.io_redirect_isCall");
    this->RAS_RASStack_io_redirect_isRet.ReInit(0, IOType::Output, "RAS.RASStack.io_redirect_isRet");
    this->RAS_RASStack_io_s3_cancel.ReInit(0, IOType::Output, "RAS.RASStack.io_s3_cancel");


    // bind RAS pins
    this->clock.BindDPIRW((void (*)(void*))get_clock, (void (*)(const unsigned char))set_clock);
    this->reset.BindDPIRW((void (*)(void*))get_reset, (void (*)(const unsigned char))set_reset);
    this->io_reset_vector.BindDPIRW((void (*)(void*))get_io_reset_vector, (void (*)(const void*))set_io_reset_vector);
    this->io_in_bits_s0_pc_0.BindDPIRW((void (*)(void*))get_io_in_bits_s0_pc_0, (void (*)(const void*))set_io_in_bits_s0_pc_0);
    this->io_in_bits_s0_pc_1.BindDPIRW((void (*)(void*))get_io_in_bits_s0_pc_1, (void (*)(const void*))set_io_in_bits_s0_pc_1);
    this->io_in_bits_s0_pc_2.BindDPIRW((void (*)(void*))get_io_in_bits_s0_pc_2, (void (*)(const void*))set_io_in_bits_s0_pc_2);
    this->io_in_bits_s0_pc_3.BindDPIRW((void (*)(void*))get_io_in_bits_s0_pc_3, (void (*)(const void*))set_io_in_bits_s0_pc_3);
    this->io_in_bits_resp_in_0_s2_full_pred_0_br_taken_mask_0.BindDPIRW((void (*)(void*))get_io_in_bits_resp_in_0_s2_full_pred_0_br_taken_mask_0, (void (*)(const unsigned char))set_io_in_bits_resp_in_0_s2_full_pred_0_br_taken_mask_0);
    this->io_in_bits_resp_in_0_s2_full_pred_0_br_taken_mask_1.BindDPIRW((void (*)(void*))get_io_in_bits_resp_in_0_s2_full_pred_0_br_taken_mask_1, (void (*)(const unsigned char))set_io_in_bits_resp_in_0_s2_full_pred_0_br_taken_mask_1);
    this->io_in_bits_resp_in_0_s2_full_pred_0_slot_valids_0.BindDPIRW((void (*)(void*))get_io_in_bits_resp_in_0_s2_full_pred_0_slot_valids_0, (void (*)(const unsigned char))set_io_in_bits_resp_in_0_s2_full_pred_0_slot_valids_0);
    this->io_in_bits_resp_in_0_s2_full_pred_0_slot_valids_1.BindDPIRW((void (*)(void*))get_io_in_bits_resp_in_0_s2_full_pred_0_slot_valids_1, (void (*)(const unsigned char))set_io_in_bits_resp_in_0_s2_full_pred_0_slot_valids_1);
    this->io_in_bits_resp_in_0_s2_full_pred_0_targets_0.BindDPIRW((void (*)(void*))get_io_in_bits_resp_in_0_s2_full_pred_0_targets_0, (void (*)(const void*))set_io_in_bits_resp_in_0_s2_full_pred_0_targets_0);
    this->io_in_bits_resp_in_0_s2_full_pred_0_targets_1.BindDPIRW((void (*)(void*))get_io_in_bits_resp_in_0_s2_full_pred_0_targets_1, (void (*)(const void*))set_io_in_bits_resp_in_0_s2_full_pred_0_targets_1);
    this->io_in_bits_resp_in_0_s2_full_pred_0_jalr_target.BindDPIRW((void (*)(void*))get_io_in_bits_resp_in_0_s2_full_pred_0_jalr_target, (void (*)(const void*))set_io_in_bits_resp_in_0_s2_full_pred_0_jalr_target);
    this->io_in_bits_resp_in_0_s2_full_pred_0_offsets_0.BindDPIRW((void (*)(void*))get_io_in_bits_resp_in_0_s2_full_pred_0_offsets_0, (void (*)(const void*))set_io_in_bits_resp_in_0_s2_full_pred_0_offsets_0);
    this->io_in_bits_resp_in_0_s2_full_pred_0_offsets_1.BindDPIRW((void (*)(void*))get_io_in_bits_resp_in_0_s2_full_pred_0_offsets_1, (void (*)(const void*))set_io_in_bits_resp_in_0_s2_full_pred_0_offsets_1);
    this->io_in_bits_resp_in_0_s2_full_pred_0_fallThroughAddr.BindDPIRW((void (*)(void*))get_io_in_bits_resp_in_0_s2_full_pred_0_fallThroughAddr, (void (*)(const void*))set_io_in_bits_resp_in_0_s2_full_pred_0_fallThroughAddr);
    this->io_in_bits_resp_in_0_s2_full_pred_0_is_br_sharing.BindDPIRW((void (*)(void*))get_io_in_bits_resp_in_0_s2_full_pred_0_is_br_sharing, (void (*)(const unsigned char))set_io_in_bits_resp_in_0_s2_full_pred_0_is_br_sharing);
    this->io_in_bits_resp_in_0_s2_full_pred_0_hit.BindDPIRW((void (*)(void*))get_io_in_bits_resp_in_0_s2_full_pred_0_hit, (void (*)(const unsigned char))set_io_in_bits_resp_in_0_s2_full_pred_0_hit);
    this->io_in_bits_resp_in_0_s2_full_pred_1_br_taken_mask_0.BindDPIRW((void (*)(void*))get_io_in_bits_resp_in_0_s2_full_pred_1_br_taken_mask_0, (void (*)(const unsigned char))set_io_in_bits_resp_in_0_s2_full_pred_1_br_taken_mask_0);
    this->io_in_bits_resp_in_0_s2_full_pred_1_br_taken_mask_1.BindDPIRW((void (*)(void*))get_io_in_bits_resp_in_0_s2_full_pred_1_br_taken_mask_1, (void (*)(const unsigned char))set_io_in_bits_resp_in_0_s2_full_pred_1_br_taken_mask_1);
    this->io_in_bits_resp_in_0_s2_full_pred_1_slot_valids_0.BindDPIRW((void (*)(void*))get_io_in_bits_resp_in_0_s2_full_pred_1_slot_valids_0, (void (*)(const unsigned char))set_io_in_bits_resp_in_0_s2_full_pred_1_slot_valids_0);
    this->io_in_bits_resp_in_0_s2_full_pred_1_slot_valids_1.BindDPIRW((void (*)(void*))get_io_in_bits_resp_in_0_s2_full_pred_1_slot_valids_1, (void (*)(const unsigned char))set_io_in_bits_resp_in_0_s2_full_pred_1_slot_valids_1);
    this->io_in_bits_resp_in_0_s2_full_pred_1_targets_0.BindDPIRW((void (*)(void*))get_io_in_bits_resp_in_0_s2_full_pred_1_targets_0, (void (*)(const void*))set_io_in_bits_resp_in_0_s2_full_pred_1_targets_0);
    this->io_in_bits_resp_in_0_s2_full_pred_1_targets_1.BindDPIRW((void (*)(void*))get_io_in_bits_resp_in_0_s2_full_pred_1_targets_1, (void (*)(const void*))set_io_in_bits_resp_in_0_s2_full_pred_1_targets_1);
    this->io_in_bits_resp_in_0_s2_full_pred_1_jalr_target.BindDPIRW((void (*)(void*))get_io_in_bits_resp_in_0_s2_full_pred_1_jalr_target, (void (*)(const void*))set_io_in_bits_resp_in_0_s2_full_pred_1_jalr_target);
    this->io_in_bits_resp_in_0_s2_full_pred_1_offsets_0.BindDPIRW((void (*)(void*))get_io_in_bits_resp_in_0_s2_full_pred_1_offsets_0, (void (*)(const void*))set_io_in_bits_resp_in_0_s2_full_pred_1_offsets_0);
    this->io_in_bits_resp_in_0_s2_full_pred_1_offsets_1.BindDPIRW((void (*)(void*))get_io_in_bits_resp_in_0_s2_full_pred_1_offsets_1, (void (*)(const void*))set_io_in_bits_resp_in_0_s2_full_pred_1_offsets_1);
    this->io_in_bits_resp_in_0_s2_full_pred_1_fallThroughAddr.BindDPIRW((void (*)(void*))get_io_in_bits_resp_in_0_s2_full_pred_1_fallThroughAddr, (void (*)(const void*))set_io_in_bits_resp_in_0_s2_full_pred_1_fallThroughAddr);
    this->io_in_bits_resp_in_0_s2_full_pred_1_is_br_sharing.BindDPIRW((void (*)(void*))get_io_in_bits_resp_in_0_s2_full_pred_1_is_br_sharing, (void (*)(const unsigned char))set_io_in_bits_resp_in_0_s2_full_pred_1_is_br_sharing);
    this->io_in_bits_resp_in_0_s2_full_pred_1_hit.BindDPIRW((void (*)(void*))get_io_in_bits_resp_in_0_s2_full_pred_1_hit, (void (*)(const unsigned char))set_io_in_bits_resp_in_0_s2_full_pred_1_hit);
    this->io_in_bits_resp_in_0_s2_full_pred_2_br_taken_mask_0.BindDPIRW((void (*)(void*))get_io_in_bits_resp_in_0_s2_full_pred_2_br_taken_mask_0, (void (*)(const unsigned char))set_io_in_bits_resp_in_0_s2_full_pred_2_br_taken_mask_0);
    this->io_in_bits_resp_in_0_s2_full_pred_2_br_taken_mask_1.BindDPIRW((void (*)(void*))get_io_in_bits_resp_in_0_s2_full_pred_2_br_taken_mask_1, (void (*)(const unsigned char))set_io_in_bits_resp_in_0_s2_full_pred_2_br_taken_mask_1);
    this->io_in_bits_resp_in_0_s2_full_pred_2_slot_valids_0.BindDPIRW((void (*)(void*))get_io_in_bits_resp_in_0_s2_full_pred_2_slot_valids_0, (void (*)(const unsigned char))set_io_in_bits_resp_in_0_s2_full_pred_2_slot_valids_0);
    this->io_in_bits_resp_in_0_s2_full_pred_2_slot_valids_1.BindDPIRW((void (*)(void*))get_io_in_bits_resp_in_0_s2_full_pred_2_slot_valids_1, (void (*)(const unsigned char))set_io_in_bits_resp_in_0_s2_full_pred_2_slot_valids_1);
    this->io_in_bits_resp_in_0_s2_full_pred_2_targets_0.BindDPIRW((void (*)(void*))get_io_in_bits_resp_in_0_s2_full_pred_2_targets_0, (void (*)(const void*))set_io_in_bits_resp_in_0_s2_full_pred_2_targets_0);
    this->io_in_bits_resp_in_0_s2_full_pred_2_targets_1.BindDPIRW((void (*)(void*))get_io_in_bits_resp_in_0_s2_full_pred_2_targets_1, (void (*)(const void*))set_io_in_bits_resp_in_0_s2_full_pred_2_targets_1);
    this->io_in_bits_resp_in_0_s2_full_pred_2_jalr_target.BindDPIRW((void (*)(void*))get_io_in_bits_resp_in_0_s2_full_pred_2_jalr_target, (void (*)(const void*))set_io_in_bits_resp_in_0_s2_full_pred_2_jalr_target);
    this->io_in_bits_resp_in_0_s2_full_pred_2_offsets_0.BindDPIRW((void (*)(void*))get_io_in_bits_resp_in_0_s2_full_pred_2_offsets_0, (void (*)(const void*))set_io_in_bits_resp_in_0_s2_full_pred_2_offsets_0);
    this->io_in_bits_resp_in_0_s2_full_pred_2_offsets_1.BindDPIRW((void (*)(void*))get_io_in_bits_resp_in_0_s2_full_pred_2_offsets_1, (void (*)(const void*))set_io_in_bits_resp_in_0_s2_full_pred_2_offsets_1);
    this->io_in_bits_resp_in_0_s2_full_pred_2_fallThroughAddr.BindDPIRW((void (*)(void*))get_io_in_bits_resp_in_0_s2_full_pred_2_fallThroughAddr, (void (*)(const void*))set_io_in_bits_resp_in_0_s2_full_pred_2_fallThroughAddr);
    this->io_in_bits_resp_in_0_s2_full_pred_2_is_jalr.BindDPIRW((void (*)(void*))get_io_in_bits_resp_in_0_s2_full_pred_2_is_jalr, (void (*)(const unsigned char))set_io_in_bits_resp_in_0_s2_full_pred_2_is_jalr);
    this->io_in_bits_resp_in_0_s2_full_pred_2_is_call.BindDPIRW((void (*)(void*))get_io_in_bits_resp_in_0_s2_full_pred_2_is_call, (void (*)(const unsigned char))set_io_in_bits_resp_in_0_s2_full_pred_2_is_call);
    this->io_in_bits_resp_in_0_s2_full_pred_2_is_ret.BindDPIRW((void (*)(void*))get_io_in_bits_resp_in_0_s2_full_pred_2_is_ret, (void (*)(const unsigned char))set_io_in_bits_resp_in_0_s2_full_pred_2_is_ret);
    this->io_in_bits_resp_in_0_s2_full_pred_2_last_may_be_rvi_call.BindDPIRW((void (*)(void*))get_io_in_bits_resp_in_0_s2_full_pred_2_last_may_be_rvi_call, (void (*)(const unsigned char))set_io_in_bits_resp_in_0_s2_full_pred_2_last_may_be_rvi_call);
    this->io_in_bits_resp_in_0_s2_full_pred_2_is_br_sharing.BindDPIRW((void (*)(void*))get_io_in_bits_resp_in_0_s2_full_pred_2_is_br_sharing, (void (*)(const unsigned char))set_io_in_bits_resp_in_0_s2_full_pred_2_is_br_sharing);
    this->io_in_bits_resp_in_0_s2_full_pred_2_hit.BindDPIRW((void (*)(void*))get_io_in_bits_resp_in_0_s2_full_pred_2_hit, (void (*)(const unsigned char))set_io_in_bits_resp_in_0_s2_full_pred_2_hit);
    this->io_in_bits_resp_in_0_s2_full_pred_3_br_taken_mask_0.BindDPIRW((void (*)(void*))get_io_in_bits_resp_in_0_s2_full_pred_3_br_taken_mask_0, (void (*)(const unsigned char))set_io_in_bits_resp_in_0_s2_full_pred_3_br_taken_mask_0);
    this->io_in_bits_resp_in_0_s2_full_pred_3_br_taken_mask_1.BindDPIRW((void (*)(void*))get_io_in_bits_resp_in_0_s2_full_pred_3_br_taken_mask_1, (void (*)(const unsigned char))set_io_in_bits_resp_in_0_s2_full_pred_3_br_taken_mask_1);
    this->io_in_bits_resp_in_0_s2_full_pred_3_slot_valids_0.BindDPIRW((void (*)(void*))get_io_in_bits_resp_in_0_s2_full_pred_3_slot_valids_0, (void (*)(const unsigned char))set_io_in_bits_resp_in_0_s2_full_pred_3_slot_valids_0);
    this->io_in_bits_resp_in_0_s2_full_pred_3_slot_valids_1.BindDPIRW((void (*)(void*))get_io_in_bits_resp_in_0_s2_full_pred_3_slot_valids_1, (void (*)(const unsigned char))set_io_in_bits_resp_in_0_s2_full_pred_3_slot_valids_1);
    this->io_in_bits_resp_in_0_s2_full_pred_3_targets_0.BindDPIRW((void (*)(void*))get_io_in_bits_resp_in_0_s2_full_pred_3_targets_0, (void (*)(const void*))set_io_in_bits_resp_in_0_s2_full_pred_3_targets_0);
    this->io_in_bits_resp_in_0_s2_full_pred_3_targets_1.BindDPIRW((void (*)(void*))get_io_in_bits_resp_in_0_s2_full_pred_3_targets_1, (void (*)(const void*))set_io_in_bits_resp_in_0_s2_full_pred_3_targets_1);
    this->io_in_bits_resp_in_0_s2_full_pred_3_jalr_target.BindDPIRW((void (*)(void*))get_io_in_bits_resp_in_0_s2_full_pred_3_jalr_target, (void (*)(const void*))set_io_in_bits_resp_in_0_s2_full_pred_3_jalr_target);
    this->io_in_bits_resp_in_0_s2_full_pred_3_offsets_0.BindDPIRW((void (*)(void*))get_io_in_bits_resp_in_0_s2_full_pred_3_offsets_0, (void (*)(const void*))set_io_in_bits_resp_in_0_s2_full_pred_3_offsets_0);
    this->io_in_bits_resp_in_0_s2_full_pred_3_offsets_1.BindDPIRW((void (*)(void*))get_io_in_bits_resp_in_0_s2_full_pred_3_offsets_1, (void (*)(const void*))set_io_in_bits_resp_in_0_s2_full_pred_3_offsets_1);
    this->io_in_bits_resp_in_0_s2_full_pred_3_fallThroughAddr.BindDPIRW((void (*)(void*))get_io_in_bits_resp_in_0_s2_full_pred_3_fallThroughAddr, (void (*)(const void*))set_io_in_bits_resp_in_0_s2_full_pred_3_fallThroughAddr);
    this->io_in_bits_resp_in_0_s2_full_pred_3_fallThroughErr.BindDPIRW((void (*)(void*))get_io_in_bits_resp_in_0_s2_full_pred_3_fallThroughErr, (void (*)(const unsigned char))set_io_in_bits_resp_in_0_s2_full_pred_3_fallThroughErr);
    this->io_in_bits_resp_in_0_s2_full_pred_3_is_br_sharing.BindDPIRW((void (*)(void*))get_io_in_bits_resp_in_0_s2_full_pred_3_is_br_sharing, (void (*)(const unsigned char))set_io_in_bits_resp_in_0_s2_full_pred_3_is_br_sharing);
    this->io_in_bits_resp_in_0_s2_full_pred_3_hit.BindDPIRW((void (*)(void*))get_io_in_bits_resp_in_0_s2_full_pred_3_hit, (void (*)(const unsigned char))set_io_in_bits_resp_in_0_s2_full_pred_3_hit);
    this->io_in_bits_resp_in_0_s3_full_pred_0_br_taken_mask_0.BindDPIRW((void (*)(void*))get_io_in_bits_resp_in_0_s3_full_pred_0_br_taken_mask_0, (void (*)(const unsigned char))set_io_in_bits_resp_in_0_s3_full_pred_0_br_taken_mask_0);
    this->io_in_bits_resp_in_0_s3_full_pred_0_br_taken_mask_1.BindDPIRW((void (*)(void*))get_io_in_bits_resp_in_0_s3_full_pred_0_br_taken_mask_1, (void (*)(const unsigned char))set_io_in_bits_resp_in_0_s3_full_pred_0_br_taken_mask_1);
    this->io_in_bits_resp_in_0_s3_full_pred_0_slot_valids_0.BindDPIRW((void (*)(void*))get_io_in_bits_resp_in_0_s3_full_pred_0_slot_valids_0, (void (*)(const unsigned char))set_io_in_bits_resp_in_0_s3_full_pred_0_slot_valids_0);
    this->io_in_bits_resp_in_0_s3_full_pred_0_slot_valids_1.BindDPIRW((void (*)(void*))get_io_in_bits_resp_in_0_s3_full_pred_0_slot_valids_1, (void (*)(const unsigned char))set_io_in_bits_resp_in_0_s3_full_pred_0_slot_valids_1);
    this->io_in_bits_resp_in_0_s3_full_pred_0_targets_0.BindDPIRW((void (*)(void*))get_io_in_bits_resp_in_0_s3_full_pred_0_targets_0, (void (*)(const void*))set_io_in_bits_resp_in_0_s3_full_pred_0_targets_0);
    this->io_in_bits_resp_in_0_s3_full_pred_0_targets_1.BindDPIRW((void (*)(void*))get_io_in_bits_resp_in_0_s3_full_pred_0_targets_1, (void (*)(const void*))set_io_in_bits_resp_in_0_s3_full_pred_0_targets_1);
    this->io_in_bits_resp_in_0_s3_full_pred_0_jalr_target.BindDPIRW((void (*)(void*))get_io_in_bits_resp_in_0_s3_full_pred_0_jalr_target, (void (*)(const void*))set_io_in_bits_resp_in_0_s3_full_pred_0_jalr_target);
    this->io_in_bits_resp_in_0_s3_full_pred_0_fallThroughAddr.BindDPIRW((void (*)(void*))get_io_in_bits_resp_in_0_s3_full_pred_0_fallThroughAddr, (void (*)(const void*))set_io_in_bits_resp_in_0_s3_full_pred_0_fallThroughAddr);
    this->io_in_bits_resp_in_0_s3_full_pred_0_fallThroughErr.BindDPIRW((void (*)(void*))get_io_in_bits_resp_in_0_s3_full_pred_0_fallThroughErr, (void (*)(const unsigned char))set_io_in_bits_resp_in_0_s3_full_pred_0_fallThroughErr);
    this->io_in_bits_resp_in_0_s3_full_pred_0_multiHit.BindDPIRW((void (*)(void*))get_io_in_bits_resp_in_0_s3_full_pred_0_multiHit, (void (*)(const unsigned char))set_io_in_bits_resp_in_0_s3_full_pred_0_multiHit);
    this->io_in_bits_resp_in_0_s3_full_pred_0_is_br_sharing.BindDPIRW((void (*)(void*))get_io_in_bits_resp_in_0_s3_full_pred_0_is_br_sharing, (void (*)(const unsigned char))set_io_in_bits_resp_in_0_s3_full_pred_0_is_br_sharing);
    this->io_in_bits_resp_in_0_s3_full_pred_0_hit.BindDPIRW((void (*)(void*))get_io_in_bits_resp_in_0_s3_full_pred_0_hit, (void (*)(const unsigned char))set_io_in_bits_resp_in_0_s3_full_pred_0_hit);
    this->io_in_bits_resp_in_0_s3_full_pred_1_br_taken_mask_0.BindDPIRW((void (*)(void*))get_io_in_bits_resp_in_0_s3_full_pred_1_br_taken_mask_0, (void (*)(const unsigned char))set_io_in_bits_resp_in_0_s3_full_pred_1_br_taken_mask_0);
    this->io_in_bits_resp_in_0_s3_full_pred_1_br_taken_mask_1.BindDPIRW((void (*)(void*))get_io_in_bits_resp_in_0_s3_full_pred_1_br_taken_mask_1, (void (*)(const unsigned char))set_io_in_bits_resp_in_0_s3_full_pred_1_br_taken_mask_1);
    this->io_in_bits_resp_in_0_s3_full_pred_1_slot_valids_0.BindDPIRW((void (*)(void*))get_io_in_bits_resp_in_0_s3_full_pred_1_slot_valids_0, (void (*)(const unsigned char))set_io_in_bits_resp_in_0_s3_full_pred_1_slot_valids_0);
    this->io_in_bits_resp_in_0_s3_full_pred_1_slot_valids_1.BindDPIRW((void (*)(void*))get_io_in_bits_resp_in_0_s3_full_pred_1_slot_valids_1, (void (*)(const unsigned char))set_io_in_bits_resp_in_0_s3_full_pred_1_slot_valids_1);
    this->io_in_bits_resp_in_0_s3_full_pred_1_targets_0.BindDPIRW((void (*)(void*))get_io_in_bits_resp_in_0_s3_full_pred_1_targets_0, (void (*)(const void*))set_io_in_bits_resp_in_0_s3_full_pred_1_targets_0);
    this->io_in_bits_resp_in_0_s3_full_pred_1_targets_1.BindDPIRW((void (*)(void*))get_io_in_bits_resp_in_0_s3_full_pred_1_targets_1, (void (*)(const void*))set_io_in_bits_resp_in_0_s3_full_pred_1_targets_1);
    this->io_in_bits_resp_in_0_s3_full_pred_1_jalr_target.BindDPIRW((void (*)(void*))get_io_in_bits_resp_in_0_s3_full_pred_1_jalr_target, (void (*)(const void*))set_io_in_bits_resp_in_0_s3_full_pred_1_jalr_target);
    this->io_in_bits_resp_in_0_s3_full_pred_1_fallThroughAddr.BindDPIRW((void (*)(void*))get_io_in_bits_resp_in_0_s3_full_pred_1_fallThroughAddr, (void (*)(const void*))set_io_in_bits_resp_in_0_s3_full_pred_1_fallThroughAddr);
    this->io_in_bits_resp_in_0_s3_full_pred_1_fallThroughErr.BindDPIRW((void (*)(void*))get_io_in_bits_resp_in_0_s3_full_pred_1_fallThroughErr, (void (*)(const unsigned char))set_io_in_bits_resp_in_0_s3_full_pred_1_fallThroughErr);
    this->io_in_bits_resp_in_0_s3_full_pred_1_multiHit.BindDPIRW((void (*)(void*))get_io_in_bits_resp_in_0_s3_full_pred_1_multiHit, (void (*)(const unsigned char))set_io_in_bits_resp_in_0_s3_full_pred_1_multiHit);
    this->io_in_bits_resp_in_0_s3_full_pred_1_is_br_sharing.BindDPIRW((void (*)(void*))get_io_in_bits_resp_in_0_s3_full_pred_1_is_br_sharing, (void (*)(const unsigned char))set_io_in_bits_resp_in_0_s3_full_pred_1_is_br_sharing);
    this->io_in_bits_resp_in_0_s3_full_pred_1_hit.BindDPIRW((void (*)(void*))get_io_in_bits_resp_in_0_s3_full_pred_1_hit, (void (*)(const unsigned char))set_io_in_bits_resp_in_0_s3_full_pred_1_hit);
    this->io_in_bits_resp_in_0_s3_full_pred_2_br_taken_mask_0.BindDPIRW((void (*)(void*))get_io_in_bits_resp_in_0_s3_full_pred_2_br_taken_mask_0, (void (*)(const unsigned char))set_io_in_bits_resp_in_0_s3_full_pred_2_br_taken_mask_0);
    this->io_in_bits_resp_in_0_s3_full_pred_2_br_taken_mask_1.BindDPIRW((void (*)(void*))get_io_in_bits_resp_in_0_s3_full_pred_2_br_taken_mask_1, (void (*)(const unsigned char))set_io_in_bits_resp_in_0_s3_full_pred_2_br_taken_mask_1);
    this->io_in_bits_resp_in_0_s3_full_pred_2_slot_valids_0.BindDPIRW((void (*)(void*))get_io_in_bits_resp_in_0_s3_full_pred_2_slot_valids_0, (void (*)(const unsigned char))set_io_in_bits_resp_in_0_s3_full_pred_2_slot_valids_0);
    this->io_in_bits_resp_in_0_s3_full_pred_2_slot_valids_1.BindDPIRW((void (*)(void*))get_io_in_bits_resp_in_0_s3_full_pred_2_slot_valids_1, (void (*)(const unsigned char))set_io_in_bits_resp_in_0_s3_full_pred_2_slot_valids_1);
    this->io_in_bits_resp_in_0_s3_full_pred_2_targets_0.BindDPIRW((void (*)(void*))get_io_in_bits_resp_in_0_s3_full_pred_2_targets_0, (void (*)(const void*))set_io_in_bits_resp_in_0_s3_full_pred_2_targets_0);
    this->io_in_bits_resp_in_0_s3_full_pred_2_targets_1.BindDPIRW((void (*)(void*))get_io_in_bits_resp_in_0_s3_full_pred_2_targets_1, (void (*)(const void*))set_io_in_bits_resp_in_0_s3_full_pred_2_targets_1);
    this->io_in_bits_resp_in_0_s3_full_pred_2_jalr_target.BindDPIRW((void (*)(void*))get_io_in_bits_resp_in_0_s3_full_pred_2_jalr_target, (void (*)(const void*))set_io_in_bits_resp_in_0_s3_full_pred_2_jalr_target);
    this->io_in_bits_resp_in_0_s3_full_pred_2_fallThroughAddr.BindDPIRW((void (*)(void*))get_io_in_bits_resp_in_0_s3_full_pred_2_fallThroughAddr, (void (*)(const void*))set_io_in_bits_resp_in_0_s3_full_pred_2_fallThroughAddr);
    this->io_in_bits_resp_in_0_s3_full_pred_2_fallThroughErr.BindDPIRW((void (*)(void*))get_io_in_bits_resp_in_0_s3_full_pred_2_fallThroughErr, (void (*)(const unsigned char))set_io_in_bits_resp_in_0_s3_full_pred_2_fallThroughErr);
    this->io_in_bits_resp_in_0_s3_full_pred_2_multiHit.BindDPIRW((void (*)(void*))get_io_in_bits_resp_in_0_s3_full_pred_2_multiHit, (void (*)(const unsigned char))set_io_in_bits_resp_in_0_s3_full_pred_2_multiHit);
    this->io_in_bits_resp_in_0_s3_full_pred_2_is_jalr.BindDPIRW((void (*)(void*))get_io_in_bits_resp_in_0_s3_full_pred_2_is_jalr, (void (*)(const unsigned char))set_io_in_bits_resp_in_0_s3_full_pred_2_is_jalr);
    this->io_in_bits_resp_in_0_s3_full_pred_2_is_call.BindDPIRW((void (*)(void*))get_io_in_bits_resp_in_0_s3_full_pred_2_is_call, (void (*)(const unsigned char))set_io_in_bits_resp_in_0_s3_full_pred_2_is_call);
    this->io_in_bits_resp_in_0_s3_full_pred_2_is_ret.BindDPIRW((void (*)(void*))get_io_in_bits_resp_in_0_s3_full_pred_2_is_ret, (void (*)(const unsigned char))set_io_in_bits_resp_in_0_s3_full_pred_2_is_ret);
    this->io_in_bits_resp_in_0_s3_full_pred_2_is_br_sharing.BindDPIRW((void (*)(void*))get_io_in_bits_resp_in_0_s3_full_pred_2_is_br_sharing, (void (*)(const unsigned char))set_io_in_bits_resp_in_0_s3_full_pred_2_is_br_sharing);
    this->io_in_bits_resp_in_0_s3_full_pred_2_hit.BindDPIRW((void (*)(void*))get_io_in_bits_resp_in_0_s3_full_pred_2_hit, (void (*)(const unsigned char))set_io_in_bits_resp_in_0_s3_full_pred_2_hit);
    this->io_in_bits_resp_in_0_s3_full_pred_3_br_taken_mask_0.BindDPIRW((void (*)(void*))get_io_in_bits_resp_in_0_s3_full_pred_3_br_taken_mask_0, (void (*)(const unsigned char))set_io_in_bits_resp_in_0_s3_full_pred_3_br_taken_mask_0);
    this->io_in_bits_resp_in_0_s3_full_pred_3_br_taken_mask_1.BindDPIRW((void (*)(void*))get_io_in_bits_resp_in_0_s3_full_pred_3_br_taken_mask_1, (void (*)(const unsigned char))set_io_in_bits_resp_in_0_s3_full_pred_3_br_taken_mask_1);
    this->io_in_bits_resp_in_0_s3_full_pred_3_slot_valids_0.BindDPIRW((void (*)(void*))get_io_in_bits_resp_in_0_s3_full_pred_3_slot_valids_0, (void (*)(const unsigned char))set_io_in_bits_resp_in_0_s3_full_pred_3_slot_valids_0);
    this->io_in_bits_resp_in_0_s3_full_pred_3_slot_valids_1.BindDPIRW((void (*)(void*))get_io_in_bits_resp_in_0_s3_full_pred_3_slot_valids_1, (void (*)(const unsigned char))set_io_in_bits_resp_in_0_s3_full_pred_3_slot_valids_1);
    this->io_in_bits_resp_in_0_s3_full_pred_3_targets_0.BindDPIRW((void (*)(void*))get_io_in_bits_resp_in_0_s3_full_pred_3_targets_0, (void (*)(const void*))set_io_in_bits_resp_in_0_s3_full_pred_3_targets_0);
    this->io_in_bits_resp_in_0_s3_full_pred_3_targets_1.BindDPIRW((void (*)(void*))get_io_in_bits_resp_in_0_s3_full_pred_3_targets_1, (void (*)(const void*))set_io_in_bits_resp_in_0_s3_full_pred_3_targets_1);
    this->io_in_bits_resp_in_0_s3_full_pred_3_jalr_target.BindDPIRW((void (*)(void*))get_io_in_bits_resp_in_0_s3_full_pred_3_jalr_target, (void (*)(const void*))set_io_in_bits_resp_in_0_s3_full_pred_3_jalr_target);
    this->io_in_bits_resp_in_0_s3_full_pred_3_offsets_0.BindDPIRW((void (*)(void*))get_io_in_bits_resp_in_0_s3_full_pred_3_offsets_0, (void (*)(const void*))set_io_in_bits_resp_in_0_s3_full_pred_3_offsets_0);
    this->io_in_bits_resp_in_0_s3_full_pred_3_offsets_1.BindDPIRW((void (*)(void*))get_io_in_bits_resp_in_0_s3_full_pred_3_offsets_1, (void (*)(const void*))set_io_in_bits_resp_in_0_s3_full_pred_3_offsets_1);
    this->io_in_bits_resp_in_0_s3_full_pred_3_fallThroughAddr.BindDPIRW((void (*)(void*))get_io_in_bits_resp_in_0_s3_full_pred_3_fallThroughAddr, (void (*)(const void*))set_io_in_bits_resp_in_0_s3_full_pred_3_fallThroughAddr);
    this->io_in_bits_resp_in_0_s3_full_pred_3_fallThroughErr.BindDPIRW((void (*)(void*))get_io_in_bits_resp_in_0_s3_full_pred_3_fallThroughErr, (void (*)(const unsigned char))set_io_in_bits_resp_in_0_s3_full_pred_3_fallThroughErr);
    this->io_in_bits_resp_in_0_s3_full_pred_3_multiHit.BindDPIRW((void (*)(void*))get_io_in_bits_resp_in_0_s3_full_pred_3_multiHit, (void (*)(const unsigned char))set_io_in_bits_resp_in_0_s3_full_pred_3_multiHit);
    this->io_in_bits_resp_in_0_s3_full_pred_3_is_br_sharing.BindDPIRW((void (*)(void*))get_io_in_bits_resp_in_0_s3_full_pred_3_is_br_sharing, (void (*)(const unsigned char))set_io_in_bits_resp_in_0_s3_full_pred_3_is_br_sharing);
    this->io_in_bits_resp_in_0_s3_full_pred_3_hit.BindDPIRW((void (*)(void*))get_io_in_bits_resp_in_0_s3_full_pred_3_hit, (void (*)(const unsigned char))set_io_in_bits_resp_in_0_s3_full_pred_3_hit);
    this->io_in_bits_resp_in_0_last_stage_ftb_entry_isCall.BindDPIRW((void (*)(void*))get_io_in_bits_resp_in_0_last_stage_ftb_entry_isCall, (void (*)(const unsigned char))set_io_in_bits_resp_in_0_last_stage_ftb_entry_isCall);
    this->io_in_bits_resp_in_0_last_stage_ftb_entry_isRet.BindDPIRW((void (*)(void*))get_io_in_bits_resp_in_0_last_stage_ftb_entry_isRet, (void (*)(const unsigned char))set_io_in_bits_resp_in_0_last_stage_ftb_entry_isRet);
    this->io_in_bits_resp_in_0_last_stage_ftb_entry_isJalr.BindDPIRW((void (*)(void*))get_io_in_bits_resp_in_0_last_stage_ftb_entry_isJalr, (void (*)(const unsigned char))set_io_in_bits_resp_in_0_last_stage_ftb_entry_isJalr);
    this->io_in_bits_resp_in_0_last_stage_ftb_entry_valid.BindDPIRW((void (*)(void*))get_io_in_bits_resp_in_0_last_stage_ftb_entry_valid, (void (*)(const unsigned char))set_io_in_bits_resp_in_0_last_stage_ftb_entry_valid);
    this->io_in_bits_resp_in_0_last_stage_ftb_entry_brSlots_0_offset.BindDPIRW((void (*)(void*))get_io_in_bits_resp_in_0_last_stage_ftb_entry_brSlots_0_offset, (void (*)(const void*))set_io_in_bits_resp_in_0_last_stage_ftb_entry_brSlots_0_offset);
    this->io_in_bits_resp_in_0_last_stage_ftb_entry_brSlots_0_sharing.BindDPIRW((void (*)(void*))get_io_in_bits_resp_in_0_last_stage_ftb_entry_brSlots_0_sharing, (void (*)(const unsigned char))set_io_in_bits_resp_in_0_last_stage_ftb_entry_brSlots_0_sharing);
    this->io_in_bits_resp_in_0_last_stage_ftb_entry_brSlots_0_valid.BindDPIRW((void (*)(void*))get_io_in_bits_resp_in_0_last_stage_ftb_entry_brSlots_0_valid, (void (*)(const unsigned char))set_io_in_bits_resp_in_0_last_stage_ftb_entry_brSlots_0_valid);
    this->io_in_bits_resp_in_0_last_stage_ftb_entry_brSlots_0_lower.BindDPIRW((void (*)(void*))get_io_in_bits_resp_in_0_last_stage_ftb_entry_brSlots_0_lower, (void (*)(const void*))set_io_in_bits_resp_in_0_last_stage_ftb_entry_brSlots_0_lower);
    this->io_in_bits_resp_in_0_last_stage_ftb_entry_brSlots_0_tarStat.BindDPIRW((void (*)(void*))get_io_in_bits_resp_in_0_last_stage_ftb_entry_brSlots_0_tarStat, (void (*)(const void*))set_io_in_bits_resp_in_0_last_stage_ftb_entry_brSlots_0_tarStat);
    this->io_in_bits_resp_in_0_last_stage_ftb_entry_tailSlot_offset.BindDPIRW((void (*)(void*))get_io_in_bits_resp_in_0_last_stage_ftb_entry_tailSlot_offset, (void (*)(const void*))set_io_in_bits_resp_in_0_last_stage_ftb_entry_tailSlot_offset);
    this->io_in_bits_resp_in_0_last_stage_ftb_entry_tailSlot_sharing.BindDPIRW((void (*)(void*))get_io_in_bits_resp_in_0_last_stage_ftb_entry_tailSlot_sharing, (void (*)(const unsigned char))set_io_in_bits_resp_in_0_last_stage_ftb_entry_tailSlot_sharing);
    this->io_in_bits_resp_in_0_last_stage_ftb_entry_tailSlot_valid.BindDPIRW((void (*)(void*))get_io_in_bits_resp_in_0_last_stage_ftb_entry_tailSlot_valid, (void (*)(const unsigned char))set_io_in_bits_resp_in_0_last_stage_ftb_entry_tailSlot_valid);
    this->io_in_bits_resp_in_0_last_stage_ftb_entry_tailSlot_lower.BindDPIRW((void (*)(void*))get_io_in_bits_resp_in_0_last_stage_ftb_entry_tailSlot_lower, (void (*)(const void*))set_io_in_bits_resp_in_0_last_stage_ftb_entry_tailSlot_lower);
    this->io_in_bits_resp_in_0_last_stage_ftb_entry_tailSlot_tarStat.BindDPIRW((void (*)(void*))get_io_in_bits_resp_in_0_last_stage_ftb_entry_tailSlot_tarStat, (void (*)(const void*))set_io_in_bits_resp_in_0_last_stage_ftb_entry_tailSlot_tarStat);
    this->io_in_bits_resp_in_0_last_stage_ftb_entry_pftAddr.BindDPIRW((void (*)(void*))get_io_in_bits_resp_in_0_last_stage_ftb_entry_pftAddr, (void (*)(const void*))set_io_in_bits_resp_in_0_last_stage_ftb_entry_pftAddr);
    this->io_in_bits_resp_in_0_last_stage_ftb_entry_carry.BindDPIRW((void (*)(void*))get_io_in_bits_resp_in_0_last_stage_ftb_entry_carry, (void (*)(const unsigned char))set_io_in_bits_resp_in_0_last_stage_ftb_entry_carry);
    this->io_in_bits_resp_in_0_last_stage_ftb_entry_last_may_be_rvi_call.BindDPIRW((void (*)(void*))get_io_in_bits_resp_in_0_last_stage_ftb_entry_last_may_be_rvi_call, (void (*)(const unsigned char))set_io_in_bits_resp_in_0_last_stage_ftb_entry_last_may_be_rvi_call);
    this->io_in_bits_resp_in_0_last_stage_ftb_entry_always_taken_0.BindDPIRW((void (*)(void*))get_io_in_bits_resp_in_0_last_stage_ftb_entry_always_taken_0, (void (*)(const unsigned char))set_io_in_bits_resp_in_0_last_stage_ftb_entry_always_taken_0);
    this->io_in_bits_resp_in_0_last_stage_ftb_entry_always_taken_1.BindDPIRW((void (*)(void*))get_io_in_bits_resp_in_0_last_stage_ftb_entry_always_taken_1, (void (*)(const unsigned char))set_io_in_bits_resp_in_0_last_stage_ftb_entry_always_taken_1);
    this->io_out_s2_pc_0.BindDPIRW((void (*)(void*))get_io_out_s2_pc_0, (void (*)(const void*))set_io_out_s2_pc_0);
    this->io_out_s2_pc_1.BindDPIRW((void (*)(void*))get_io_out_s2_pc_1, (void (*)(const void*))set_io_out_s2_pc_1);
    this->io_out_s2_pc_2.BindDPIRW((void (*)(void*))get_io_out_s2_pc_2, (void (*)(const void*))set_io_out_s2_pc_2);
    this->io_out_s2_pc_3.BindDPIRW((void (*)(void*))get_io_out_s2_pc_3, (void (*)(const void*))set_io_out_s2_pc_3);
    this->io_out_s2_full_pred_0_br_taken_mask_0.BindDPIRW((void (*)(void*))get_io_out_s2_full_pred_0_br_taken_mask_0, (void (*)(const unsigned char))set_io_out_s2_full_pred_0_br_taken_mask_0);
    this->io_out_s2_full_pred_0_br_taken_mask_1.BindDPIRW((void (*)(void*))get_io_out_s2_full_pred_0_br_taken_mask_1, (void (*)(const unsigned char))set_io_out_s2_full_pred_0_br_taken_mask_1);
    this->io_out_s2_full_pred_0_slot_valids_0.BindDPIRW((void (*)(void*))get_io_out_s2_full_pred_0_slot_valids_0, (void (*)(const unsigned char))set_io_out_s2_full_pred_0_slot_valids_0);
    this->io_out_s2_full_pred_0_slot_valids_1.BindDPIRW((void (*)(void*))get_io_out_s2_full_pred_0_slot_valids_1, (void (*)(const unsigned char))set_io_out_s2_full_pred_0_slot_valids_1);
    this->io_out_s2_full_pred_0_targets_0.BindDPIRW((void (*)(void*))get_io_out_s2_full_pred_0_targets_0, (void (*)(const void*))set_io_out_s2_full_pred_0_targets_0);
    this->io_out_s2_full_pred_0_targets_1.BindDPIRW((void (*)(void*))get_io_out_s2_full_pred_0_targets_1, (void (*)(const void*))set_io_out_s2_full_pred_0_targets_1);
    this->io_out_s2_full_pred_0_offsets_0.BindDPIRW((void (*)(void*))get_io_out_s2_full_pred_0_offsets_0, (void (*)(const void*))set_io_out_s2_full_pred_0_offsets_0);
    this->io_out_s2_full_pred_0_offsets_1.BindDPIRW((void (*)(void*))get_io_out_s2_full_pred_0_offsets_1, (void (*)(const void*))set_io_out_s2_full_pred_0_offsets_1);
    this->io_out_s2_full_pred_0_fallThroughAddr.BindDPIRW((void (*)(void*))get_io_out_s2_full_pred_0_fallThroughAddr, (void (*)(const void*))set_io_out_s2_full_pred_0_fallThroughAddr);
    this->io_out_s2_full_pred_0_is_br_sharing.BindDPIRW((void (*)(void*))get_io_out_s2_full_pred_0_is_br_sharing, (void (*)(const unsigned char))set_io_out_s2_full_pred_0_is_br_sharing);
    this->io_out_s2_full_pred_0_hit.BindDPIRW((void (*)(void*))get_io_out_s2_full_pred_0_hit, (void (*)(const unsigned char))set_io_out_s2_full_pred_0_hit);
    this->io_out_s2_full_pred_1_br_taken_mask_0.BindDPIRW((void (*)(void*))get_io_out_s2_full_pred_1_br_taken_mask_0, (void (*)(const unsigned char))set_io_out_s2_full_pred_1_br_taken_mask_0);
    this->io_out_s2_full_pred_1_br_taken_mask_1.BindDPIRW((void (*)(void*))get_io_out_s2_full_pred_1_br_taken_mask_1, (void (*)(const unsigned char))set_io_out_s2_full_pred_1_br_taken_mask_1);
    this->io_out_s2_full_pred_1_slot_valids_0.BindDPIRW((void (*)(void*))get_io_out_s2_full_pred_1_slot_valids_0, (void (*)(const unsigned char))set_io_out_s2_full_pred_1_slot_valids_0);
    this->io_out_s2_full_pred_1_slot_valids_1.BindDPIRW((void (*)(void*))get_io_out_s2_full_pred_1_slot_valids_1, (void (*)(const unsigned char))set_io_out_s2_full_pred_1_slot_valids_1);
    this->io_out_s2_full_pred_1_targets_0.BindDPIRW((void (*)(void*))get_io_out_s2_full_pred_1_targets_0, (void (*)(const void*))set_io_out_s2_full_pred_1_targets_0);
    this->io_out_s2_full_pred_1_targets_1.BindDPIRW((void (*)(void*))get_io_out_s2_full_pred_1_targets_1, (void (*)(const void*))set_io_out_s2_full_pred_1_targets_1);
    this->io_out_s2_full_pred_1_offsets_0.BindDPIRW((void (*)(void*))get_io_out_s2_full_pred_1_offsets_0, (void (*)(const void*))set_io_out_s2_full_pred_1_offsets_0);
    this->io_out_s2_full_pred_1_offsets_1.BindDPIRW((void (*)(void*))get_io_out_s2_full_pred_1_offsets_1, (void (*)(const void*))set_io_out_s2_full_pred_1_offsets_1);
    this->io_out_s2_full_pred_1_fallThroughAddr.BindDPIRW((void (*)(void*))get_io_out_s2_full_pred_1_fallThroughAddr, (void (*)(const void*))set_io_out_s2_full_pred_1_fallThroughAddr);
    this->io_out_s2_full_pred_1_is_br_sharing.BindDPIRW((void (*)(void*))get_io_out_s2_full_pred_1_is_br_sharing, (void (*)(const unsigned char))set_io_out_s2_full_pred_1_is_br_sharing);
    this->io_out_s2_full_pred_1_hit.BindDPIRW((void (*)(void*))get_io_out_s2_full_pred_1_hit, (void (*)(const unsigned char))set_io_out_s2_full_pred_1_hit);
    this->io_out_s2_full_pred_2_br_taken_mask_0.BindDPIRW((void (*)(void*))get_io_out_s2_full_pred_2_br_taken_mask_0, (void (*)(const unsigned char))set_io_out_s2_full_pred_2_br_taken_mask_0);
    this->io_out_s2_full_pred_2_br_taken_mask_1.BindDPIRW((void (*)(void*))get_io_out_s2_full_pred_2_br_taken_mask_1, (void (*)(const unsigned char))set_io_out_s2_full_pred_2_br_taken_mask_1);
    this->io_out_s2_full_pred_2_slot_valids_0.BindDPIRW((void (*)(void*))get_io_out_s2_full_pred_2_slot_valids_0, (void (*)(const unsigned char))set_io_out_s2_full_pred_2_slot_valids_0);
    this->io_out_s2_full_pred_2_slot_valids_1.BindDPIRW((void (*)(void*))get_io_out_s2_full_pred_2_slot_valids_1, (void (*)(const unsigned char))set_io_out_s2_full_pred_2_slot_valids_1);
    this->io_out_s2_full_pred_2_targets_0.BindDPIRW((void (*)(void*))get_io_out_s2_full_pred_2_targets_0, (void (*)(const void*))set_io_out_s2_full_pred_2_targets_0);
    this->io_out_s2_full_pred_2_targets_1.BindDPIRW((void (*)(void*))get_io_out_s2_full_pred_2_targets_1, (void (*)(const void*))set_io_out_s2_full_pred_2_targets_1);
    this->io_out_s2_full_pred_2_offsets_0.BindDPIRW((void (*)(void*))get_io_out_s2_full_pred_2_offsets_0, (void (*)(const void*))set_io_out_s2_full_pred_2_offsets_0);
    this->io_out_s2_full_pred_2_offsets_1.BindDPIRW((void (*)(void*))get_io_out_s2_full_pred_2_offsets_1, (void (*)(const void*))set_io_out_s2_full_pred_2_offsets_1);
    this->io_out_s2_full_pred_2_fallThroughAddr.BindDPIRW((void (*)(void*))get_io_out_s2_full_pred_2_fallThroughAddr, (void (*)(const void*))set_io_out_s2_full_pred_2_fallThroughAddr);
    this->io_out_s2_full_pred_2_is_br_sharing.BindDPIRW((void (*)(void*))get_io_out_s2_full_pred_2_is_br_sharing, (void (*)(const unsigned char))set_io_out_s2_full_pred_2_is_br_sharing);
    this->io_out_s2_full_pred_2_hit.BindDPIRW((void (*)(void*))get_io_out_s2_full_pred_2_hit, (void (*)(const unsigned char))set_io_out_s2_full_pred_2_hit);
    this->io_out_s2_full_pred_3_br_taken_mask_0.BindDPIRW((void (*)(void*))get_io_out_s2_full_pred_3_br_taken_mask_0, (void (*)(const unsigned char))set_io_out_s2_full_pred_3_br_taken_mask_0);
    this->io_out_s2_full_pred_3_br_taken_mask_1.BindDPIRW((void (*)(void*))get_io_out_s2_full_pred_3_br_taken_mask_1, (void (*)(const unsigned char))set_io_out_s2_full_pred_3_br_taken_mask_1);
    this->io_out_s2_full_pred_3_slot_valids_0.BindDPIRW((void (*)(void*))get_io_out_s2_full_pred_3_slot_valids_0, (void (*)(const unsigned char))set_io_out_s2_full_pred_3_slot_valids_0);
    this->io_out_s2_full_pred_3_slot_valids_1.BindDPIRW((void (*)(void*))get_io_out_s2_full_pred_3_slot_valids_1, (void (*)(const unsigned char))set_io_out_s2_full_pred_3_slot_valids_1);
    this->io_out_s2_full_pred_3_targets_0.BindDPIRW((void (*)(void*))get_io_out_s2_full_pred_3_targets_0, (void (*)(const void*))set_io_out_s2_full_pred_3_targets_0);
    this->io_out_s2_full_pred_3_targets_1.BindDPIRW((void (*)(void*))get_io_out_s2_full_pred_3_targets_1, (void (*)(const void*))set_io_out_s2_full_pred_3_targets_1);
    this->io_out_s2_full_pred_3_offsets_0.BindDPIRW((void (*)(void*))get_io_out_s2_full_pred_3_offsets_0, (void (*)(const void*))set_io_out_s2_full_pred_3_offsets_0);
    this->io_out_s2_full_pred_3_offsets_1.BindDPIRW((void (*)(void*))get_io_out_s2_full_pred_3_offsets_1, (void (*)(const void*))set_io_out_s2_full_pred_3_offsets_1);
    this->io_out_s2_full_pred_3_fallThroughAddr.BindDPIRW((void (*)(void*))get_io_out_s2_full_pred_3_fallThroughAddr, (void (*)(const void*))set_io_out_s2_full_pred_3_fallThroughAddr);
    this->io_out_s2_full_pred_3_fallThroughErr.BindDPIRW((void (*)(void*))get_io_out_s2_full_pred_3_fallThroughErr, (void (*)(const unsigned char))set_io_out_s2_full_pred_3_fallThroughErr);
    this->io_out_s2_full_pred_3_is_br_sharing.BindDPIRW((void (*)(void*))get_io_out_s2_full_pred_3_is_br_sharing, (void (*)(const unsigned char))set_io_out_s2_full_pred_3_is_br_sharing);
    this->io_out_s2_full_pred_3_hit.BindDPIRW((void (*)(void*))get_io_out_s2_full_pred_3_hit, (void (*)(const unsigned char))set_io_out_s2_full_pred_3_hit);
    this->io_out_s3_pc_0.BindDPIRW((void (*)(void*))get_io_out_s3_pc_0, (void (*)(const void*))set_io_out_s3_pc_0);
    this->io_out_s3_pc_1.BindDPIRW((void (*)(void*))get_io_out_s3_pc_1, (void (*)(const void*))set_io_out_s3_pc_1);
    this->io_out_s3_pc_2.BindDPIRW((void (*)(void*))get_io_out_s3_pc_2, (void (*)(const void*))set_io_out_s3_pc_2);
    this->io_out_s3_pc_3.BindDPIRW((void (*)(void*))get_io_out_s3_pc_3, (void (*)(const void*))set_io_out_s3_pc_3);
    this->io_out_s3_full_pred_0_br_taken_mask_0.BindDPIRW((void (*)(void*))get_io_out_s3_full_pred_0_br_taken_mask_0, (void (*)(const unsigned char))set_io_out_s3_full_pred_0_br_taken_mask_0);
    this->io_out_s3_full_pred_0_br_taken_mask_1.BindDPIRW((void (*)(void*))get_io_out_s3_full_pred_0_br_taken_mask_1, (void (*)(const unsigned char))set_io_out_s3_full_pred_0_br_taken_mask_1);
    this->io_out_s3_full_pred_0_slot_valids_0.BindDPIRW((void (*)(void*))get_io_out_s3_full_pred_0_slot_valids_0, (void (*)(const unsigned char))set_io_out_s3_full_pred_0_slot_valids_0);
    this->io_out_s3_full_pred_0_slot_valids_1.BindDPIRW((void (*)(void*))get_io_out_s3_full_pred_0_slot_valids_1, (void (*)(const unsigned char))set_io_out_s3_full_pred_0_slot_valids_1);
    this->io_out_s3_full_pred_0_targets_0.BindDPIRW((void (*)(void*))get_io_out_s3_full_pred_0_targets_0, (void (*)(const void*))set_io_out_s3_full_pred_0_targets_0);
    this->io_out_s3_full_pred_0_targets_1.BindDPIRW((void (*)(void*))get_io_out_s3_full_pred_0_targets_1, (void (*)(const void*))set_io_out_s3_full_pred_0_targets_1);
    this->io_out_s3_full_pred_0_fallThroughAddr.BindDPIRW((void (*)(void*))get_io_out_s3_full_pred_0_fallThroughAddr, (void (*)(const void*))set_io_out_s3_full_pred_0_fallThroughAddr);
    this->io_out_s3_full_pred_0_fallThroughErr.BindDPIRW((void (*)(void*))get_io_out_s3_full_pred_0_fallThroughErr, (void (*)(const unsigned char))set_io_out_s3_full_pred_0_fallThroughErr);
    this->io_out_s3_full_pred_0_multiHit.BindDPIRW((void (*)(void*))get_io_out_s3_full_pred_0_multiHit, (void (*)(const unsigned char))set_io_out_s3_full_pred_0_multiHit);
    this->io_out_s3_full_pred_0_is_br_sharing.BindDPIRW((void (*)(void*))get_io_out_s3_full_pred_0_is_br_sharing, (void (*)(const unsigned char))set_io_out_s3_full_pred_0_is_br_sharing);
    this->io_out_s3_full_pred_0_hit.BindDPIRW((void (*)(void*))get_io_out_s3_full_pred_0_hit, (void (*)(const unsigned char))set_io_out_s3_full_pred_0_hit);
    this->io_out_s3_full_pred_1_br_taken_mask_0.BindDPIRW((void (*)(void*))get_io_out_s3_full_pred_1_br_taken_mask_0, (void (*)(const unsigned char))set_io_out_s3_full_pred_1_br_taken_mask_0);
    this->io_out_s3_full_pred_1_br_taken_mask_1.BindDPIRW((void (*)(void*))get_io_out_s3_full_pred_1_br_taken_mask_1, (void (*)(const unsigned char))set_io_out_s3_full_pred_1_br_taken_mask_1);
    this->io_out_s3_full_pred_1_slot_valids_0.BindDPIRW((void (*)(void*))get_io_out_s3_full_pred_1_slot_valids_0, (void (*)(const unsigned char))set_io_out_s3_full_pred_1_slot_valids_0);
    this->io_out_s3_full_pred_1_slot_valids_1.BindDPIRW((void (*)(void*))get_io_out_s3_full_pred_1_slot_valids_1, (void (*)(const unsigned char))set_io_out_s3_full_pred_1_slot_valids_1);
    this->io_out_s3_full_pred_1_targets_0.BindDPIRW((void (*)(void*))get_io_out_s3_full_pred_1_targets_0, (void (*)(const void*))set_io_out_s3_full_pred_1_targets_0);
    this->io_out_s3_full_pred_1_targets_1.BindDPIRW((void (*)(void*))get_io_out_s3_full_pred_1_targets_1, (void (*)(const void*))set_io_out_s3_full_pred_1_targets_1);
    this->io_out_s3_full_pred_1_fallThroughAddr.BindDPIRW((void (*)(void*))get_io_out_s3_full_pred_1_fallThroughAddr, (void (*)(const void*))set_io_out_s3_full_pred_1_fallThroughAddr);
    this->io_out_s3_full_pred_1_fallThroughErr.BindDPIRW((void (*)(void*))get_io_out_s3_full_pred_1_fallThroughErr, (void (*)(const unsigned char))set_io_out_s3_full_pred_1_fallThroughErr);
    this->io_out_s3_full_pred_1_multiHit.BindDPIRW((void (*)(void*))get_io_out_s3_full_pred_1_multiHit, (void (*)(const unsigned char))set_io_out_s3_full_pred_1_multiHit);
    this->io_out_s3_full_pred_1_is_br_sharing.BindDPIRW((void (*)(void*))get_io_out_s3_full_pred_1_is_br_sharing, (void (*)(const unsigned char))set_io_out_s3_full_pred_1_is_br_sharing);
    this->io_out_s3_full_pred_1_hit.BindDPIRW((void (*)(void*))get_io_out_s3_full_pred_1_hit, (void (*)(const unsigned char))set_io_out_s3_full_pred_1_hit);
    this->io_out_s3_full_pred_2_br_taken_mask_0.BindDPIRW((void (*)(void*))get_io_out_s3_full_pred_2_br_taken_mask_0, (void (*)(const unsigned char))set_io_out_s3_full_pred_2_br_taken_mask_0);
    this->io_out_s3_full_pred_2_br_taken_mask_1.BindDPIRW((void (*)(void*))get_io_out_s3_full_pred_2_br_taken_mask_1, (void (*)(const unsigned char))set_io_out_s3_full_pred_2_br_taken_mask_1);
    this->io_out_s3_full_pred_2_slot_valids_0.BindDPIRW((void (*)(void*))get_io_out_s3_full_pred_2_slot_valids_0, (void (*)(const unsigned char))set_io_out_s3_full_pred_2_slot_valids_0);
    this->io_out_s3_full_pred_2_slot_valids_1.BindDPIRW((void (*)(void*))get_io_out_s3_full_pred_2_slot_valids_1, (void (*)(const unsigned char))set_io_out_s3_full_pred_2_slot_valids_1);
    this->io_out_s3_full_pred_2_targets_0.BindDPIRW((void (*)(void*))get_io_out_s3_full_pred_2_targets_0, (void (*)(const void*))set_io_out_s3_full_pred_2_targets_0);
    this->io_out_s3_full_pred_2_targets_1.BindDPIRW((void (*)(void*))get_io_out_s3_full_pred_2_targets_1, (void (*)(const void*))set_io_out_s3_full_pred_2_targets_1);
    this->io_out_s3_full_pred_2_fallThroughAddr.BindDPIRW((void (*)(void*))get_io_out_s3_full_pred_2_fallThroughAddr, (void (*)(const void*))set_io_out_s3_full_pred_2_fallThroughAddr);
    this->io_out_s3_full_pred_2_fallThroughErr.BindDPIRW((void (*)(void*))get_io_out_s3_full_pred_2_fallThroughErr, (void (*)(const unsigned char))set_io_out_s3_full_pred_2_fallThroughErr);
    this->io_out_s3_full_pred_2_multiHit.BindDPIRW((void (*)(void*))get_io_out_s3_full_pred_2_multiHit, (void (*)(const unsigned char))set_io_out_s3_full_pred_2_multiHit);
    this->io_out_s3_full_pred_2_is_br_sharing.BindDPIRW((void (*)(void*))get_io_out_s3_full_pred_2_is_br_sharing, (void (*)(const unsigned char))set_io_out_s3_full_pred_2_is_br_sharing);
    this->io_out_s3_full_pred_2_hit.BindDPIRW((void (*)(void*))get_io_out_s3_full_pred_2_hit, (void (*)(const unsigned char))set_io_out_s3_full_pred_2_hit);
    this->io_out_s3_full_pred_3_br_taken_mask_0.BindDPIRW((void (*)(void*))get_io_out_s3_full_pred_3_br_taken_mask_0, (void (*)(const unsigned char))set_io_out_s3_full_pred_3_br_taken_mask_0);
    this->io_out_s3_full_pred_3_br_taken_mask_1.BindDPIRW((void (*)(void*))get_io_out_s3_full_pred_3_br_taken_mask_1, (void (*)(const unsigned char))set_io_out_s3_full_pred_3_br_taken_mask_1);
    this->io_out_s3_full_pred_3_slot_valids_0.BindDPIRW((void (*)(void*))get_io_out_s3_full_pred_3_slot_valids_0, (void (*)(const unsigned char))set_io_out_s3_full_pred_3_slot_valids_0);
    this->io_out_s3_full_pred_3_slot_valids_1.BindDPIRW((void (*)(void*))get_io_out_s3_full_pred_3_slot_valids_1, (void (*)(const unsigned char))set_io_out_s3_full_pred_3_slot_valids_1);
    this->io_out_s3_full_pred_3_targets_0.BindDPIRW((void (*)(void*))get_io_out_s3_full_pred_3_targets_0, (void (*)(const void*))set_io_out_s3_full_pred_3_targets_0);
    this->io_out_s3_full_pred_3_targets_1.BindDPIRW((void (*)(void*))get_io_out_s3_full_pred_3_targets_1, (void (*)(const void*))set_io_out_s3_full_pred_3_targets_1);
    this->io_out_s3_full_pred_3_offsets_0.BindDPIRW((void (*)(void*))get_io_out_s3_full_pred_3_offsets_0, (void (*)(const void*))set_io_out_s3_full_pred_3_offsets_0);
    this->io_out_s3_full_pred_3_offsets_1.BindDPIRW((void (*)(void*))get_io_out_s3_full_pred_3_offsets_1, (void (*)(const void*))set_io_out_s3_full_pred_3_offsets_1);
    this->io_out_s3_full_pred_3_fallThroughAddr.BindDPIRW((void (*)(void*))get_io_out_s3_full_pred_3_fallThroughAddr, (void (*)(const void*))set_io_out_s3_full_pred_3_fallThroughAddr);
    this->io_out_s3_full_pred_3_fallThroughErr.BindDPIRW((void (*)(void*))get_io_out_s3_full_pred_3_fallThroughErr, (void (*)(const unsigned char))set_io_out_s3_full_pred_3_fallThroughErr);
    this->io_out_s3_full_pred_3_multiHit.BindDPIRW((void (*)(void*))get_io_out_s3_full_pred_3_multiHit, (void (*)(const unsigned char))set_io_out_s3_full_pred_3_multiHit);
    this->io_out_s3_full_pred_3_is_br_sharing.BindDPIRW((void (*)(void*))get_io_out_s3_full_pred_3_is_br_sharing, (void (*)(const unsigned char))set_io_out_s3_full_pred_3_is_br_sharing);
    this->io_out_s3_full_pred_3_hit.BindDPIRW((void (*)(void*))get_io_out_s3_full_pred_3_hit, (void (*)(const unsigned char))set_io_out_s3_full_pred_3_hit);
    this->io_out_last_stage_meta.BindDPIRW((void (*)(void*))get_io_out_last_stage_meta, (void (*)(const void*))set_io_out_last_stage_meta);
    this->io_out_last_stage_spec_info_ssp.BindDPIRW((void (*)(void*))get_io_out_last_stage_spec_info_ssp, (void (*)(const void*))set_io_out_last_stage_spec_info_ssp);
    this->io_out_last_stage_spec_info_sctr.BindDPIRW((void (*)(void*))get_io_out_last_stage_spec_info_sctr, (void (*)(const void*))set_io_out_last_stage_spec_info_sctr);
    this->io_out_last_stage_spec_info_TOSW_flag.BindDPIRW((void (*)(void*))get_io_out_last_stage_spec_info_TOSW_flag, (void (*)(const unsigned char))set_io_out_last_stage_spec_info_TOSW_flag);
    this->io_out_last_stage_spec_info_TOSW_value.BindDPIRW((void (*)(void*))get_io_out_last_stage_spec_info_TOSW_value, (void (*)(const void*))set_io_out_last_stage_spec_info_TOSW_value);
    this->io_out_last_stage_spec_info_TOSR_flag.BindDPIRW((void (*)(void*))get_io_out_last_stage_spec_info_TOSR_flag, (void (*)(const unsigned char))set_io_out_last_stage_spec_info_TOSR_flag);
    this->io_out_last_stage_spec_info_TOSR_value.BindDPIRW((void (*)(void*))get_io_out_last_stage_spec_info_TOSR_value, (void (*)(const void*))set_io_out_last_stage_spec_info_TOSR_value);
    this->io_out_last_stage_spec_info_NOS_flag.BindDPIRW((void (*)(void*))get_io_out_last_stage_spec_info_NOS_flag, (void (*)(const unsigned char))set_io_out_last_stage_spec_info_NOS_flag);
    this->io_out_last_stage_spec_info_NOS_value.BindDPIRW((void (*)(void*))get_io_out_last_stage_spec_info_NOS_value, (void (*)(const void*))set_io_out_last_stage_spec_info_NOS_value);
    this->io_out_last_stage_spec_info_topAddr.BindDPIRW((void (*)(void*))get_io_out_last_stage_spec_info_topAddr, (void (*)(const void*))set_io_out_last_stage_spec_info_topAddr);
    this->io_out_last_stage_ftb_entry_isCall.BindDPIRW((void (*)(void*))get_io_out_last_stage_ftb_entry_isCall, (void (*)(const unsigned char))set_io_out_last_stage_ftb_entry_isCall);
    this->io_out_last_stage_ftb_entry_isRet.BindDPIRW((void (*)(void*))get_io_out_last_stage_ftb_entry_isRet, (void (*)(const unsigned char))set_io_out_last_stage_ftb_entry_isRet);
    this->io_out_last_stage_ftb_entry_isJalr.BindDPIRW((void (*)(void*))get_io_out_last_stage_ftb_entry_isJalr, (void (*)(const unsigned char))set_io_out_last_stage_ftb_entry_isJalr);
    this->io_out_last_stage_ftb_entry_valid.BindDPIRW((void (*)(void*))get_io_out_last_stage_ftb_entry_valid, (void (*)(const unsigned char))set_io_out_last_stage_ftb_entry_valid);
    this->io_out_last_stage_ftb_entry_brSlots_0_offset.BindDPIRW((void (*)(void*))get_io_out_last_stage_ftb_entry_brSlots_0_offset, (void (*)(const void*))set_io_out_last_stage_ftb_entry_brSlots_0_offset);
    this->io_out_last_stage_ftb_entry_brSlots_0_sharing.BindDPIRW((void (*)(void*))get_io_out_last_stage_ftb_entry_brSlots_0_sharing, (void (*)(const unsigned char))set_io_out_last_stage_ftb_entry_brSlots_0_sharing);
    this->io_out_last_stage_ftb_entry_brSlots_0_valid.BindDPIRW((void (*)(void*))get_io_out_last_stage_ftb_entry_brSlots_0_valid, (void (*)(const unsigned char))set_io_out_last_stage_ftb_entry_brSlots_0_valid);
    this->io_out_last_stage_ftb_entry_brSlots_0_lower.BindDPIRW((void (*)(void*))get_io_out_last_stage_ftb_entry_brSlots_0_lower, (void (*)(const void*))set_io_out_last_stage_ftb_entry_brSlots_0_lower);
    this->io_out_last_stage_ftb_entry_brSlots_0_tarStat.BindDPIRW((void (*)(void*))get_io_out_last_stage_ftb_entry_brSlots_0_tarStat, (void (*)(const void*))set_io_out_last_stage_ftb_entry_brSlots_0_tarStat);
    this->io_out_last_stage_ftb_entry_tailSlot_offset.BindDPIRW((void (*)(void*))get_io_out_last_stage_ftb_entry_tailSlot_offset, (void (*)(const void*))set_io_out_last_stage_ftb_entry_tailSlot_offset);
    this->io_out_last_stage_ftb_entry_tailSlot_sharing.BindDPIRW((void (*)(void*))get_io_out_last_stage_ftb_entry_tailSlot_sharing, (void (*)(const unsigned char))set_io_out_last_stage_ftb_entry_tailSlot_sharing);
    this->io_out_last_stage_ftb_entry_tailSlot_valid.BindDPIRW((void (*)(void*))get_io_out_last_stage_ftb_entry_tailSlot_valid, (void (*)(const unsigned char))set_io_out_last_stage_ftb_entry_tailSlot_valid);
    this->io_out_last_stage_ftb_entry_tailSlot_lower.BindDPIRW((void (*)(void*))get_io_out_last_stage_ftb_entry_tailSlot_lower, (void (*)(const void*))set_io_out_last_stage_ftb_entry_tailSlot_lower);
    this->io_out_last_stage_ftb_entry_tailSlot_tarStat.BindDPIRW((void (*)(void*))get_io_out_last_stage_ftb_entry_tailSlot_tarStat, (void (*)(const void*))set_io_out_last_stage_ftb_entry_tailSlot_tarStat);
    this->io_out_last_stage_ftb_entry_pftAddr.BindDPIRW((void (*)(void*))get_io_out_last_stage_ftb_entry_pftAddr, (void (*)(const void*))set_io_out_last_stage_ftb_entry_pftAddr);
    this->io_out_last_stage_ftb_entry_carry.BindDPIRW((void (*)(void*))get_io_out_last_stage_ftb_entry_carry, (void (*)(const unsigned char))set_io_out_last_stage_ftb_entry_carry);
    this->io_out_last_stage_ftb_entry_last_may_be_rvi_call.BindDPIRW((void (*)(void*))get_io_out_last_stage_ftb_entry_last_may_be_rvi_call, (void (*)(const unsigned char))set_io_out_last_stage_ftb_entry_last_may_be_rvi_call);
    this->io_out_last_stage_ftb_entry_always_taken_0.BindDPIRW((void (*)(void*))get_io_out_last_stage_ftb_entry_always_taken_0, (void (*)(const unsigned char))set_io_out_last_stage_ftb_entry_always_taken_0);
    this->io_out_last_stage_ftb_entry_always_taken_1.BindDPIRW((void (*)(void*))get_io_out_last_stage_ftb_entry_always_taken_1, (void (*)(const unsigned char))set_io_out_last_stage_ftb_entry_always_taken_1);
    this->io_ctrl_ras_enable.BindDPIRW((void (*)(void*))get_io_ctrl_ras_enable, (void (*)(const unsigned char))set_io_ctrl_ras_enable);
    this->io_s0_fire_0.BindDPIRW((void (*)(void*))get_io_s0_fire_0, (void (*)(const unsigned char))set_io_s0_fire_0);
    this->io_s0_fire_1.BindDPIRW((void (*)(void*))get_io_s0_fire_1, (void (*)(const unsigned char))set_io_s0_fire_1);
    this->io_s0_fire_2.BindDPIRW((void (*)(void*))get_io_s0_fire_2, (void (*)(const unsigned char))set_io_s0_fire_2);
    this->io_s0_fire_3.BindDPIRW((void (*)(void*))get_io_s0_fire_3, (void (*)(const unsigned char))set_io_s0_fire_3);
    this->io_s1_fire_0.BindDPIRW((void (*)(void*))get_io_s1_fire_0, (void (*)(const unsigned char))set_io_s1_fire_0);
    this->io_s1_fire_1.BindDPIRW((void (*)(void*))get_io_s1_fire_1, (void (*)(const unsigned char))set_io_s1_fire_1);
    this->io_s1_fire_2.BindDPIRW((void (*)(void*))get_io_s1_fire_2, (void (*)(const unsigned char))set_io_s1_fire_2);
    this->io_s1_fire_3.BindDPIRW((void (*)(void*))get_io_s1_fire_3, (void (*)(const unsigned char))set_io_s1_fire_3);
    this->io_s2_fire_0.BindDPIRW((void (*)(void*))get_io_s2_fire_0, (void (*)(const unsigned char))set_io_s2_fire_0);
    this->io_s2_fire_1.BindDPIRW((void (*)(void*))get_io_s2_fire_1, (void (*)(const unsigned char))set_io_s2_fire_1);
    this->io_s2_fire_2.BindDPIRW((void (*)(void*))get_io_s2_fire_2, (void (*)(const unsigned char))set_io_s2_fire_2);
    this->io_s2_fire_3.BindDPIRW((void (*)(void*))get_io_s2_fire_3, (void (*)(const unsigned char))set_io_s2_fire_3);
    this->io_s3_fire_2.BindDPIRW((void (*)(void*))get_io_s3_fire_2, (void (*)(const unsigned char))set_io_s3_fire_2);
    this->io_s3_redirect_2.BindDPIRW((void (*)(void*))get_io_s3_redirect_2, (void (*)(const unsigned char))set_io_s3_redirect_2);
    this->io_update_valid.BindDPIRW((void (*)(void*))get_io_update_valid, (void (*)(const unsigned char))set_io_update_valid);
    this->io_update_bits_ftb_entry_isCall.BindDPIRW((void (*)(void*))get_io_update_bits_ftb_entry_isCall, (void (*)(const unsigned char))set_io_update_bits_ftb_entry_isCall);
    this->io_update_bits_ftb_entry_isRet.BindDPIRW((void (*)(void*))get_io_update_bits_ftb_entry_isRet, (void (*)(const unsigned char))set_io_update_bits_ftb_entry_isRet);
    this->io_update_bits_ftb_entry_tailSlot_offset.BindDPIRW((void (*)(void*))get_io_update_bits_ftb_entry_tailSlot_offset, (void (*)(const void*))set_io_update_bits_ftb_entry_tailSlot_offset);
    this->io_update_bits_ftb_entry_tailSlot_valid.BindDPIRW((void (*)(void*))get_io_update_bits_ftb_entry_tailSlot_valid, (void (*)(const unsigned char))set_io_update_bits_ftb_entry_tailSlot_valid);
    this->io_update_bits_cfi_idx_valid.BindDPIRW((void (*)(void*))get_io_update_bits_cfi_idx_valid, (void (*)(const unsigned char))set_io_update_bits_cfi_idx_valid);
    this->io_update_bits_cfi_idx_bits.BindDPIRW((void (*)(void*))get_io_update_bits_cfi_idx_bits, (void (*)(const void*))set_io_update_bits_cfi_idx_bits);
    this->io_update_bits_jmp_taken.BindDPIRW((void (*)(void*))get_io_update_bits_jmp_taken, (void (*)(const unsigned char))set_io_update_bits_jmp_taken);
    this->io_update_bits_meta.BindDPIRW((void (*)(void*))get_io_update_bits_meta, (void (*)(const void*))set_io_update_bits_meta);
    this->io_redirect_valid.BindDPIRW((void (*)(void*))get_io_redirect_valid, (void (*)(const unsigned char))set_io_redirect_valid);
    this->io_redirect_bits_level.BindDPIRW((void (*)(void*))get_io_redirect_bits_level, (void (*)(const unsigned char))set_io_redirect_bits_level);
    this->io_redirect_bits_cfiUpdate_pc.BindDPIRW((void (*)(void*))get_io_redirect_bits_cfiUpdate_pc, (void (*)(const void*))set_io_redirect_bits_cfiUpdate_pc);
    this->io_redirect_bits_cfiUpdate_pd_isRVC.BindDPIRW((void (*)(void*))get_io_redirect_bits_cfiUpdate_pd_isRVC, (void (*)(const unsigned char))set_io_redirect_bits_cfiUpdate_pd_isRVC);
    this->io_redirect_bits_cfiUpdate_pd_isCall.BindDPIRW((void (*)(void*))get_io_redirect_bits_cfiUpdate_pd_isCall, (void (*)(const unsigned char))set_io_redirect_bits_cfiUpdate_pd_isCall);
    this->io_redirect_bits_cfiUpdate_pd_isRet.BindDPIRW((void (*)(void*))get_io_redirect_bits_cfiUpdate_pd_isRet, (void (*)(const unsigned char))set_io_redirect_bits_cfiUpdate_pd_isRet);
    this->io_redirect_bits_cfiUpdate_ssp.BindDPIRW((void (*)(void*))get_io_redirect_bits_cfiUpdate_ssp, (void (*)(const void*))set_io_redirect_bits_cfiUpdate_ssp);
    this->io_redirect_bits_cfiUpdate_sctr.BindDPIRW((void (*)(void*))get_io_redirect_bits_cfiUpdate_sctr, (void (*)(const void*))set_io_redirect_bits_cfiUpdate_sctr);
    this->io_redirect_bits_cfiUpdate_TOSW_flag.BindDPIRW((void (*)(void*))get_io_redirect_bits_cfiUpdate_TOSW_flag, (void (*)(const unsigned char))set_io_redirect_bits_cfiUpdate_TOSW_flag);
    this->io_redirect_bits_cfiUpdate_TOSW_value.BindDPIRW((void (*)(void*))get_io_redirect_bits_cfiUpdate_TOSW_value, (void (*)(const void*))set_io_redirect_bits_cfiUpdate_TOSW_value);
    this->io_redirect_bits_cfiUpdate_TOSR_flag.BindDPIRW((void (*)(void*))get_io_redirect_bits_cfiUpdate_TOSR_flag, (void (*)(const unsigned char))set_io_redirect_bits_cfiUpdate_TOSR_flag);
    this->io_redirect_bits_cfiUpdate_TOSR_value.BindDPIRW((void (*)(void*))get_io_redirect_bits_cfiUpdate_TOSR_value, (void (*)(const void*))set_io_redirect_bits_cfiUpdate_TOSR_value);
    this->io_redirect_bits_cfiUpdate_NOS_flag.BindDPIRW((void (*)(void*))get_io_redirect_bits_cfiUpdate_NOS_flag, (void (*)(const unsigned char))set_io_redirect_bits_cfiUpdate_NOS_flag);
    this->io_redirect_bits_cfiUpdate_NOS_value.BindDPIRW((void (*)(void*))get_io_redirect_bits_cfiUpdate_NOS_value, (void (*)(const void*))set_io_redirect_bits_cfiUpdate_NOS_value);
    this->RAS_redirect_next_bits_r_level.BindDPIRW((void (*)(void*))get_RAS_redirect_next_bits_r_level, (void (*)(const unsigned char))nullptr);
    this->RAS_redirect_next_valid_last_r.BindDPIRW((void (*)(void*))get_RAS_redirect_next_valid_last_r, (void (*)(const unsigned char))nullptr);
    this->RAS_redirect_next_bits_r_cfiUpdate_pd_isRVC.BindDPIRW((void (*)(void*))get_RAS_redirect_next_bits_r_cfiUpdate_pd_isRVC, (void (*)(const unsigned char))nullptr);
    this->RAS_redirect_next_bits_r_cfiUpdate_pd_isCall.BindDPIRW((void (*)(void*))get_RAS_redirect_next_bits_r_cfiUpdate_pd_isCall, (void (*)(const unsigned char))nullptr);
    this->RAS_redirect_next_bits_r_cfiUpdate_pd_isRet.BindDPIRW((void (*)(void*))get_RAS_redirect_next_bits_r_cfiUpdate_pd_isRet, (void (*)(const unsigned char))nullptr);
    this->RAS_s3_push.BindDPIRW((void (*)(void*))get_RAS_s3_push, (void (*)(const unsigned char))nullptr);
    this->RAS_s3_pop.BindDPIRW((void (*)(void*))get_RAS_s3_pop, (void (*)(const unsigned char))nullptr);
    this->RAS_s3_pushed_in_s2.BindDPIRW((void (*)(void*))get_RAS_s3_pushed_in_s2, (void (*)(const unsigned char))nullptr);
    this->RAS_s2_spec_push.BindDPIRW((void (*)(void*))get_RAS_s2_spec_push, (void (*)(const unsigned char))nullptr);
    this->RAS_RASStack_realPush.BindDPIRW((void (*)(void*))get_RAS_RASStack_realPush, (void (*)(const unsigned char))nullptr);
    this->RAS_RASStack_TOSR_value.BindDPIRW((void (*)(void*))get_RAS_RASStack_TOSR_value, (void (*)(const void*))nullptr);
    this->RAS_RASStack_TOSW_value.BindDPIRW((void (*)(void*))get_RAS_RASStack_TOSW_value, (void (*)(const void*))nullptr);
    this->RAS_RASStack_BOS_value.BindDPIRW((void (*)(void*))get_RAS_RASStack_BOS_value, (void (*)(const void*))nullptr);
    this->RAS_RASStack_ssp.BindDPIRW((void (*)(void*))get_RAS_RASStack_ssp, (void (*)(const void*))nullptr);
    this->RAS_RASStack_nsp.BindDPIRW((void (*)(void*))get_RAS_RASStack_nsp, (void (*)(const void*))nullptr);
    this->RAS_RASStack_spec_overflowed.BindDPIRW((void (*)(void*))get_RAS_RASStack_spec_overflowed, (void (*)(const unsigned char))nullptr);
    this->RAS_RASStack_writeBypassValid.BindDPIRW((void (*)(void*))get_RAS_RASStack_writeBypassValid, (void (*)(const unsigned char))nullptr);
    this->RAS_RASStack_timingTop_retAddr.BindDPIRW((void (*)(void*))get_RAS_RASStack_timingTop_retAddr, (void (*)(const void*))nullptr);
    this->RAS_RASStack_sctr.BindDPIRW((void (*)(void*))get_RAS_RASStack_sctr, (void (*)(const void*))nullptr);
    this->RAS_RASStack_spec_queue_0_retAddr.BindDPIRW((void (*)(void*))get_RAS_RASStack_spec_queue_0_retAddr, (void (*)(const void*))nullptr);
    this->RAS_RASStack_spec_queue_1_retAddr.BindDPIRW((void (*)(void*))get_RAS_RASStack_spec_queue_1_retAddr, (void (*)(const void*))nullptr);
    this->RAS_RASStack_spec_queue_2_retAddr.BindDPIRW((void (*)(void*))get_RAS_RASStack_spec_queue_2_retAddr, (void (*)(const void*))nullptr);
    this->RAS_RASStack_spec_queue_3_retAddr.BindDPIRW((void (*)(void*))get_RAS_RASStack_spec_queue_3_retAddr, (void (*)(const void*))nullptr);
    this->RAS_RASStack_spec_queue_4_retAddr.BindDPIRW((void (*)(void*))get_RAS_RASStack_spec_queue_4_retAddr, (void (*)(const void*))nullptr);
    this->RAS_RASStack_spec_queue_5_retAddr.BindDPIRW((void (*)(void*))get_RAS_RASStack_spec_queue_5_retAddr, (void (*)(const void*))nullptr);
    this->RAS_RASStack_spec_queue_6_retAddr.BindDPIRW((void (*)(void*))get_RAS_RASStack_spec_queue_6_retAddr, (void (*)(const void*))nullptr);
    this->RAS_RASStack_spec_queue_7_retAddr.BindDPIRW((void (*)(void*))get_RAS_RASStack_spec_queue_7_retAddr, (void (*)(const void*))nullptr);
    this->RAS_RASStack_spec_queue_8_retAddr.BindDPIRW((void (*)(void*))get_RAS_RASStack_spec_queue_8_retAddr, (void (*)(const void*))nullptr);
    this->RAS_RASStack_spec_queue_9_retAddr.BindDPIRW((void (*)(void*))get_RAS_RASStack_spec_queue_9_retAddr, (void (*)(const void*))nullptr);
    this->RAS_RASStack_spec_queue_10_retAddr.BindDPIRW((void (*)(void*))get_RAS_RASStack_spec_queue_10_retAddr, (void (*)(const void*))nullptr);
    this->RAS_RASStack_spec_queue_11_retAddr.BindDPIRW((void (*)(void*))get_RAS_RASStack_spec_queue_11_retAddr, (void (*)(const void*))nullptr);
    this->RAS_RASStack_spec_queue_12_retAddr.BindDPIRW((void (*)(void*))get_RAS_RASStack_spec_queue_12_retAddr, (void (*)(const void*))nullptr);
    this->RAS_RASStack_spec_queue_13_retAddr.BindDPIRW((void (*)(void*))get_RAS_RASStack_spec_queue_13_retAddr, (void (*)(const void*))nullptr);
    this->RAS_RASStack_spec_queue_14_retAddr.BindDPIRW((void (*)(void*))get_RAS_RASStack_spec_queue_14_retAddr, (void (*)(const void*))nullptr);
    this->RAS_RASStack_spec_queue_15_retAddr.BindDPIRW((void (*)(void*))get_RAS_RASStack_spec_queue_15_retAddr, (void (*)(const void*))nullptr);
    this->RAS_RASStack_spec_queue_16_retAddr.BindDPIRW((void (*)(void*))get_RAS_RASStack_spec_queue_16_retAddr, (void (*)(const void*))nullptr);
    this->RAS_RASStack_spec_queue_17_retAddr.BindDPIRW((void (*)(void*))get_RAS_RASStack_spec_queue_17_retAddr, (void (*)(const void*))nullptr);
    this->RAS_RASStack_spec_queue_18_retAddr.BindDPIRW((void (*)(void*))get_RAS_RASStack_spec_queue_18_retAddr, (void (*)(const void*))nullptr);
    this->RAS_RASStack_spec_queue_19_retAddr.BindDPIRW((void (*)(void*))get_RAS_RASStack_spec_queue_19_retAddr, (void (*)(const void*))nullptr);
    this->RAS_RASStack_spec_queue_20_retAddr.BindDPIRW((void (*)(void*))get_RAS_RASStack_spec_queue_20_retAddr, (void (*)(const void*))nullptr);
    this->RAS_RASStack_spec_queue_21_retAddr.BindDPIRW((void (*)(void*))get_RAS_RASStack_spec_queue_21_retAddr, (void (*)(const void*))nullptr);
    this->RAS_RASStack_spec_queue_22_retAddr.BindDPIRW((void (*)(void*))get_RAS_RASStack_spec_queue_22_retAddr, (void (*)(const void*))nullptr);
    this->RAS_RASStack_spec_queue_23_retAddr.BindDPIRW((void (*)(void*))get_RAS_RASStack_spec_queue_23_retAddr, (void (*)(const void*))nullptr);
    this->RAS_RASStack_spec_queue_24_retAddr.BindDPIRW((void (*)(void*))get_RAS_RASStack_spec_queue_24_retAddr, (void (*)(const void*))nullptr);
    this->RAS_RASStack_spec_queue_25_retAddr.BindDPIRW((void (*)(void*))get_RAS_RASStack_spec_queue_25_retAddr, (void (*)(const void*))nullptr);
    this->RAS_RASStack_spec_queue_26_retAddr.BindDPIRW((void (*)(void*))get_RAS_RASStack_spec_queue_26_retAddr, (void (*)(const void*))nullptr);
    this->RAS_RASStack_spec_queue_27_retAddr.BindDPIRW((void (*)(void*))get_RAS_RASStack_spec_queue_27_retAddr, (void (*)(const void*))nullptr);
    this->RAS_RASStack_spec_queue_28_retAddr.BindDPIRW((void (*)(void*))get_RAS_RASStack_spec_queue_28_retAddr, (void (*)(const void*))nullptr);
    this->RAS_RASStack_spec_queue_29_retAddr.BindDPIRW((void (*)(void*))get_RAS_RASStack_spec_queue_29_retAddr, (void (*)(const void*))nullptr);
    this->RAS_RASStack_spec_queue_30_retAddr.BindDPIRW((void (*)(void*))get_RAS_RASStack_spec_queue_30_retAddr, (void (*)(const void*))nullptr);
    this->RAS_RASStack_spec_queue_31_retAddr.BindDPIRW((void (*)(void*))get_RAS_RASStack_spec_queue_31_retAddr, (void (*)(const void*))nullptr);
    this->RAS_RASStack_commit_stack_0_retAddr.BindDPIRW((void (*)(void*))get_RAS_RASStack_commit_stack_0_retAddr, (void (*)(const void*))nullptr);
    this->RAS_RASStack_commit_stack_1_retAddr.BindDPIRW((void (*)(void*))get_RAS_RASStack_commit_stack_1_retAddr, (void (*)(const void*))nullptr);
    this->RAS_RASStack_commit_stack_2_retAddr.BindDPIRW((void (*)(void*))get_RAS_RASStack_commit_stack_2_retAddr, (void (*)(const void*))nullptr);
    this->RAS_RASStack_commit_stack_3_retAddr.BindDPIRW((void (*)(void*))get_RAS_RASStack_commit_stack_3_retAddr, (void (*)(const void*))nullptr);
    this->RAS_RASStack_commit_stack_4_retAddr.BindDPIRW((void (*)(void*))get_RAS_RASStack_commit_stack_4_retAddr, (void (*)(const void*))nullptr);
    this->RAS_RASStack_commit_stack_5_retAddr.BindDPIRW((void (*)(void*))get_RAS_RASStack_commit_stack_5_retAddr, (void (*)(const void*))nullptr);
    this->RAS_RASStack_commit_stack_6_retAddr.BindDPIRW((void (*)(void*))get_RAS_RASStack_commit_stack_6_retAddr, (void (*)(const void*))nullptr);
    this->RAS_RASStack_commit_stack_7_retAddr.BindDPIRW((void (*)(void*))get_RAS_RASStack_commit_stack_7_retAddr, (void (*)(const void*))nullptr);
    this->RAS_RASStack_commit_stack_8_retAddr.BindDPIRW((void (*)(void*))get_RAS_RASStack_commit_stack_8_retAddr, (void (*)(const void*))nullptr);
    this->RAS_RASStack_commit_stack_9_retAddr.BindDPIRW((void (*)(void*))get_RAS_RASStack_commit_stack_9_retAddr, (void (*)(const void*))nullptr);
    this->RAS_RASStack_commit_stack_10_retAddr.BindDPIRW((void (*)(void*))get_RAS_RASStack_commit_stack_10_retAddr, (void (*)(const void*))nullptr);
    this->RAS_RASStack_commit_stack_11_retAddr.BindDPIRW((void (*)(void*))get_RAS_RASStack_commit_stack_11_retAddr, (void (*)(const void*))nullptr);
    this->RAS_RASStack_commit_stack_12_retAddr.BindDPIRW((void (*)(void*))get_RAS_RASStack_commit_stack_12_retAddr, (void (*)(const void*))nullptr);
    this->RAS_RASStack_commit_stack_13_retAddr.BindDPIRW((void (*)(void*))get_RAS_RASStack_commit_stack_13_retAddr, (void (*)(const void*))nullptr);
    this->RAS_RASStack_commit_stack_14_retAddr.BindDPIRW((void (*)(void*))get_RAS_RASStack_commit_stack_14_retAddr, (void (*)(const void*))nullptr);
    this->RAS_RASStack_commit_stack_15_retAddr.BindDPIRW((void (*)(void*))get_RAS_RASStack_commit_stack_15_retAddr, (void (*)(const void*))nullptr);
    this->RAS_RASStack_commit_stack_0_ctr.BindDPIRW((void (*)(void*))get_RAS_RASStack_commit_stack_0_ctr, (void (*)(const void*))nullptr);
    this->RAS_RASStack_commit_stack_1_ctr.BindDPIRW((void (*)(void*))get_RAS_RASStack_commit_stack_1_ctr, (void (*)(const void*))nullptr);
    this->RAS_RASStack_commit_stack_2_ctr.BindDPIRW((void (*)(void*))get_RAS_RASStack_commit_stack_2_ctr, (void (*)(const void*))nullptr);
    this->RAS_RASStack_commit_stack_3_ctr.BindDPIRW((void (*)(void*))get_RAS_RASStack_commit_stack_3_ctr, (void (*)(const void*))nullptr);
    this->RAS_RASStack_commit_stack_4_ctr.BindDPIRW((void (*)(void*))get_RAS_RASStack_commit_stack_4_ctr, (void (*)(const void*))nullptr);
    this->RAS_RASStack_commit_stack_5_ctr.BindDPIRW((void (*)(void*))get_RAS_RASStack_commit_stack_5_ctr, (void (*)(const void*))nullptr);
    this->RAS_RASStack_commit_stack_6_ctr.BindDPIRW((void (*)(void*))get_RAS_RASStack_commit_stack_6_ctr, (void (*)(const void*))nullptr);
    this->RAS_RASStack_commit_stack_7_ctr.BindDPIRW((void (*)(void*))get_RAS_RASStack_commit_stack_7_ctr, (void (*)(const void*))nullptr);
    this->RAS_RASStack_commit_stack_8_ctr.BindDPIRW((void (*)(void*))get_RAS_RASStack_commit_stack_8_ctr, (void (*)(const void*))nullptr);
    this->RAS_RASStack_commit_stack_9_ctr.BindDPIRW((void (*)(void*))get_RAS_RASStack_commit_stack_9_ctr, (void (*)(const void*))nullptr);
    this->RAS_RASStack_commit_stack_10_ctr.BindDPIRW((void (*)(void*))get_RAS_RASStack_commit_stack_10_ctr, (void (*)(const void*))nullptr);
    this->RAS_RASStack_commit_stack_11_ctr.BindDPIRW((void (*)(void*))get_RAS_RASStack_commit_stack_11_ctr, (void (*)(const void*))nullptr);
    this->RAS_RASStack_commit_stack_12_ctr.BindDPIRW((void (*)(void*))get_RAS_RASStack_commit_stack_12_ctr, (void (*)(const void*))nullptr);
    this->RAS_RASStack_commit_stack_13_ctr.BindDPIRW((void (*)(void*))get_RAS_RASStack_commit_stack_13_ctr, (void (*)(const void*))nullptr);
    this->RAS_RASStack_commit_stack_14_ctr.BindDPIRW((void (*)(void*))get_RAS_RASStack_commit_stack_14_ctr, (void (*)(const void*))nullptr);
    this->RAS_RASStack_commit_stack_15_ctr.BindDPIRW((void (*)(void*))get_RAS_RASStack_commit_stack_15_ctr, (void (*)(const void*))nullptr);
    this->RAS_RASStack_io_spec_push_valid.BindDPIRW((void (*)(void*))get_RAS_RASStack_io_spec_push_valid, (void (*)(const unsigned char))nullptr);
    this->RAS_RASStack_io_spec_pop_valid.BindDPIRW((void (*)(void*))get_RAS_RASStack_io_spec_pop_valid, (void (*)(const unsigned char))nullptr);
    this->RAS_RASStack_io_commit_push_valid.BindDPIRW((void (*)(void*))get_RAS_RASStack_io_commit_push_valid, (void (*)(const unsigned char))nullptr);
    this->RAS_RASStack_io_commit_pop_valid.BindDPIRW((void (*)(void*))get_RAS_RASStack_io_commit_pop_valid, (void (*)(const unsigned char))nullptr);
    this->RAS_RASStack_io_redirect_valid.BindDPIRW((void (*)(void*))get_RAS_RASStack_io_redirect_valid, (void (*)(const unsigned char))nullptr);
    this->RAS_RASStack_io_redirect_isCall.BindDPIRW((void (*)(void*))get_RAS_RASStack_io_redirect_isCall, (void (*)(const unsigned char))nullptr);
    this->RAS_RASStack_io_redirect_isRet.BindDPIRW((void (*)(void*))get_RAS_RASStack_io_redirect_isRet, (void (*)(const unsigned char))nullptr);
    this->RAS_RASStack_io_s3_cancel.BindDPIRW((void (*)(void*))get_RAS_RASStack_io_s3_cancel, (void (*)(const unsigned char))nullptr);


    // add RAS ports
    this->port.Add(this->clock.mName, this->clock);
    this->port.Add(this->reset.mName, this->reset);
    this->port.Add(this->io_reset_vector.mName, this->io_reset_vector);
    this->port.Add(this->io_in_bits_s0_pc_0.mName, this->io_in_bits_s0_pc_0);
    this->port.Add(this->io_in_bits_s0_pc_1.mName, this->io_in_bits_s0_pc_1);
    this->port.Add(this->io_in_bits_s0_pc_2.mName, this->io_in_bits_s0_pc_2);
    this->port.Add(this->io_in_bits_s0_pc_3.mName, this->io_in_bits_s0_pc_3);
    this->port.Add(this->io_in_bits_resp_in_0_s2_full_pred_0_br_taken_mask_0.mName, this->io_in_bits_resp_in_0_s2_full_pred_0_br_taken_mask_0);
    this->port.Add(this->io_in_bits_resp_in_0_s2_full_pred_0_br_taken_mask_1.mName, this->io_in_bits_resp_in_0_s2_full_pred_0_br_taken_mask_1);
    this->port.Add(this->io_in_bits_resp_in_0_s2_full_pred_0_slot_valids_0.mName, this->io_in_bits_resp_in_0_s2_full_pred_0_slot_valids_0);
    this->port.Add(this->io_in_bits_resp_in_0_s2_full_pred_0_slot_valids_1.mName, this->io_in_bits_resp_in_0_s2_full_pred_0_slot_valids_1);
    this->port.Add(this->io_in_bits_resp_in_0_s2_full_pred_0_targets_0.mName, this->io_in_bits_resp_in_0_s2_full_pred_0_targets_0);
    this->port.Add(this->io_in_bits_resp_in_0_s2_full_pred_0_targets_1.mName, this->io_in_bits_resp_in_0_s2_full_pred_0_targets_1);
    this->port.Add(this->io_in_bits_resp_in_0_s2_full_pred_0_jalr_target.mName, this->io_in_bits_resp_in_0_s2_full_pred_0_jalr_target);
    this->port.Add(this->io_in_bits_resp_in_0_s2_full_pred_0_offsets_0.mName, this->io_in_bits_resp_in_0_s2_full_pred_0_offsets_0);
    this->port.Add(this->io_in_bits_resp_in_0_s2_full_pred_0_offsets_1.mName, this->io_in_bits_resp_in_0_s2_full_pred_0_offsets_1);
    this->port.Add(this->io_in_bits_resp_in_0_s2_full_pred_0_fallThroughAddr.mName, this->io_in_bits_resp_in_0_s2_full_pred_0_fallThroughAddr);
    this->port.Add(this->io_in_bits_resp_in_0_s2_full_pred_0_is_br_sharing.mName, this->io_in_bits_resp_in_0_s2_full_pred_0_is_br_sharing);
    this->port.Add(this->io_in_bits_resp_in_0_s2_full_pred_0_hit.mName, this->io_in_bits_resp_in_0_s2_full_pred_0_hit);
    this->port.Add(this->io_in_bits_resp_in_0_s2_full_pred_1_br_taken_mask_0.mName, this->io_in_bits_resp_in_0_s2_full_pred_1_br_taken_mask_0);
    this->port.Add(this->io_in_bits_resp_in_0_s2_full_pred_1_br_taken_mask_1.mName, this->io_in_bits_resp_in_0_s2_full_pred_1_br_taken_mask_1);
    this->port.Add(this->io_in_bits_resp_in_0_s2_full_pred_1_slot_valids_0.mName, this->io_in_bits_resp_in_0_s2_full_pred_1_slot_valids_0);
    this->port.Add(this->io_in_bits_resp_in_0_s2_full_pred_1_slot_valids_1.mName, this->io_in_bits_resp_in_0_s2_full_pred_1_slot_valids_1);
    this->port.Add(this->io_in_bits_resp_in_0_s2_full_pred_1_targets_0.mName, this->io_in_bits_resp_in_0_s2_full_pred_1_targets_0);
    this->port.Add(this->io_in_bits_resp_in_0_s2_full_pred_1_targets_1.mName, this->io_in_bits_resp_in_0_s2_full_pred_1_targets_1);
    this->port.Add(this->io_in_bits_resp_in_0_s2_full_pred_1_jalr_target.mName, this->io_in_bits_resp_in_0_s2_full_pred_1_jalr_target);
    this->port.Add(this->io_in_bits_resp_in_0_s2_full_pred_1_offsets_0.mName, this->io_in_bits_resp_in_0_s2_full_pred_1_offsets_0);
    this->port.Add(this->io_in_bits_resp_in_0_s2_full_pred_1_offsets_1.mName, this->io_in_bits_resp_in_0_s2_full_pred_1_offsets_1);
    this->port.Add(this->io_in_bits_resp_in_0_s2_full_pred_1_fallThroughAddr.mName, this->io_in_bits_resp_in_0_s2_full_pred_1_fallThroughAddr);
    this->port.Add(this->io_in_bits_resp_in_0_s2_full_pred_1_is_br_sharing.mName, this->io_in_bits_resp_in_0_s2_full_pred_1_is_br_sharing);
    this->port.Add(this->io_in_bits_resp_in_0_s2_full_pred_1_hit.mName, this->io_in_bits_resp_in_0_s2_full_pred_1_hit);
    this->port.Add(this->io_in_bits_resp_in_0_s2_full_pred_2_br_taken_mask_0.mName, this->io_in_bits_resp_in_0_s2_full_pred_2_br_taken_mask_0);
    this->port.Add(this->io_in_bits_resp_in_0_s2_full_pred_2_br_taken_mask_1.mName, this->io_in_bits_resp_in_0_s2_full_pred_2_br_taken_mask_1);
    this->port.Add(this->io_in_bits_resp_in_0_s2_full_pred_2_slot_valids_0.mName, this->io_in_bits_resp_in_0_s2_full_pred_2_slot_valids_0);
    this->port.Add(this->io_in_bits_resp_in_0_s2_full_pred_2_slot_valids_1.mName, this->io_in_bits_resp_in_0_s2_full_pred_2_slot_valids_1);
    this->port.Add(this->io_in_bits_resp_in_0_s2_full_pred_2_targets_0.mName, this->io_in_bits_resp_in_0_s2_full_pred_2_targets_0);
    this->port.Add(this->io_in_bits_resp_in_0_s2_full_pred_2_targets_1.mName, this->io_in_bits_resp_in_0_s2_full_pred_2_targets_1);
    this->port.Add(this->io_in_bits_resp_in_0_s2_full_pred_2_jalr_target.mName, this->io_in_bits_resp_in_0_s2_full_pred_2_jalr_target);
    this->port.Add(this->io_in_bits_resp_in_0_s2_full_pred_2_offsets_0.mName, this->io_in_bits_resp_in_0_s2_full_pred_2_offsets_0);
    this->port.Add(this->io_in_bits_resp_in_0_s2_full_pred_2_offsets_1.mName, this->io_in_bits_resp_in_0_s2_full_pred_2_offsets_1);
    this->port.Add(this->io_in_bits_resp_in_0_s2_full_pred_2_fallThroughAddr.mName, this->io_in_bits_resp_in_0_s2_full_pred_2_fallThroughAddr);
    this->port.Add(this->io_in_bits_resp_in_0_s2_full_pred_2_is_jalr.mName, this->io_in_bits_resp_in_0_s2_full_pred_2_is_jalr);
    this->port.Add(this->io_in_bits_resp_in_0_s2_full_pred_2_is_call.mName, this->io_in_bits_resp_in_0_s2_full_pred_2_is_call);
    this->port.Add(this->io_in_bits_resp_in_0_s2_full_pred_2_is_ret.mName, this->io_in_bits_resp_in_0_s2_full_pred_2_is_ret);
    this->port.Add(this->io_in_bits_resp_in_0_s2_full_pred_2_last_may_be_rvi_call.mName, this->io_in_bits_resp_in_0_s2_full_pred_2_last_may_be_rvi_call);
    this->port.Add(this->io_in_bits_resp_in_0_s2_full_pred_2_is_br_sharing.mName, this->io_in_bits_resp_in_0_s2_full_pred_2_is_br_sharing);
    this->port.Add(this->io_in_bits_resp_in_0_s2_full_pred_2_hit.mName, this->io_in_bits_resp_in_0_s2_full_pred_2_hit);
    this->port.Add(this->io_in_bits_resp_in_0_s2_full_pred_3_br_taken_mask_0.mName, this->io_in_bits_resp_in_0_s2_full_pred_3_br_taken_mask_0);
    this->port.Add(this->io_in_bits_resp_in_0_s2_full_pred_3_br_taken_mask_1.mName, this->io_in_bits_resp_in_0_s2_full_pred_3_br_taken_mask_1);
    this->port.Add(this->io_in_bits_resp_in_0_s2_full_pred_3_slot_valids_0.mName, this->io_in_bits_resp_in_0_s2_full_pred_3_slot_valids_0);
    this->port.Add(this->io_in_bits_resp_in_0_s2_full_pred_3_slot_valids_1.mName, this->io_in_bits_resp_in_0_s2_full_pred_3_slot_valids_1);
    this->port.Add(this->io_in_bits_resp_in_0_s2_full_pred_3_targets_0.mName, this->io_in_bits_resp_in_0_s2_full_pred_3_targets_0);
    this->port.Add(this->io_in_bits_resp_in_0_s2_full_pred_3_targets_1.mName, this->io_in_bits_resp_in_0_s2_full_pred_3_targets_1);
    this->port.Add(this->io_in_bits_resp_in_0_s2_full_pred_3_jalr_target.mName, this->io_in_bits_resp_in_0_s2_full_pred_3_jalr_target);
    this->port.Add(this->io_in_bits_resp_in_0_s2_full_pred_3_offsets_0.mName, this->io_in_bits_resp_in_0_s2_full_pred_3_offsets_0);
    this->port.Add(this->io_in_bits_resp_in_0_s2_full_pred_3_offsets_1.mName, this->io_in_bits_resp_in_0_s2_full_pred_3_offsets_1);
    this->port.Add(this->io_in_bits_resp_in_0_s2_full_pred_3_fallThroughAddr.mName, this->io_in_bits_resp_in_0_s2_full_pred_3_fallThroughAddr);
    this->port.Add(this->io_in_bits_resp_in_0_s2_full_pred_3_fallThroughErr.mName, this->io_in_bits_resp_in_0_s2_full_pred_3_fallThroughErr);
    this->port.Add(this->io_in_bits_resp_in_0_s2_full_pred_3_is_br_sharing.mName, this->io_in_bits_resp_in_0_s2_full_pred_3_is_br_sharing);
    this->port.Add(this->io_in_bits_resp_in_0_s2_full_pred_3_hit.mName, this->io_in_bits_resp_in_0_s2_full_pred_3_hit);
    this->port.Add(this->io_in_bits_resp_in_0_s3_full_pred_0_br_taken_mask_0.mName, this->io_in_bits_resp_in_0_s3_full_pred_0_br_taken_mask_0);
    this->port.Add(this->io_in_bits_resp_in_0_s3_full_pred_0_br_taken_mask_1.mName, this->io_in_bits_resp_in_0_s3_full_pred_0_br_taken_mask_1);
    this->port.Add(this->io_in_bits_resp_in_0_s3_full_pred_0_slot_valids_0.mName, this->io_in_bits_resp_in_0_s3_full_pred_0_slot_valids_0);
    this->port.Add(this->io_in_bits_resp_in_0_s3_full_pred_0_slot_valids_1.mName, this->io_in_bits_resp_in_0_s3_full_pred_0_slot_valids_1);
    this->port.Add(this->io_in_bits_resp_in_0_s3_full_pred_0_targets_0.mName, this->io_in_bits_resp_in_0_s3_full_pred_0_targets_0);
    this->port.Add(this->io_in_bits_resp_in_0_s3_full_pred_0_targets_1.mName, this->io_in_bits_resp_in_0_s3_full_pred_0_targets_1);
    this->port.Add(this->io_in_bits_resp_in_0_s3_full_pred_0_jalr_target.mName, this->io_in_bits_resp_in_0_s3_full_pred_0_jalr_target);
    this->port.Add(this->io_in_bits_resp_in_0_s3_full_pred_0_fallThroughAddr.mName, this->io_in_bits_resp_in_0_s3_full_pred_0_fallThroughAddr);
    this->port.Add(this->io_in_bits_resp_in_0_s3_full_pred_0_fallThroughErr.mName, this->io_in_bits_resp_in_0_s3_full_pred_0_fallThroughErr);
    this->port.Add(this->io_in_bits_resp_in_0_s3_full_pred_0_multiHit.mName, this->io_in_bits_resp_in_0_s3_full_pred_0_multiHit);
    this->port.Add(this->io_in_bits_resp_in_0_s3_full_pred_0_is_br_sharing.mName, this->io_in_bits_resp_in_0_s3_full_pred_0_is_br_sharing);
    this->port.Add(this->io_in_bits_resp_in_0_s3_full_pred_0_hit.mName, this->io_in_bits_resp_in_0_s3_full_pred_0_hit);
    this->port.Add(this->io_in_bits_resp_in_0_s3_full_pred_1_br_taken_mask_0.mName, this->io_in_bits_resp_in_0_s3_full_pred_1_br_taken_mask_0);
    this->port.Add(this->io_in_bits_resp_in_0_s3_full_pred_1_br_taken_mask_1.mName, this->io_in_bits_resp_in_0_s3_full_pred_1_br_taken_mask_1);
    this->port.Add(this->io_in_bits_resp_in_0_s3_full_pred_1_slot_valids_0.mName, this->io_in_bits_resp_in_0_s3_full_pred_1_slot_valids_0);
    this->port.Add(this->io_in_bits_resp_in_0_s3_full_pred_1_slot_valids_1.mName, this->io_in_bits_resp_in_0_s3_full_pred_1_slot_valids_1);
    this->port.Add(this->io_in_bits_resp_in_0_s3_full_pred_1_targets_0.mName, this->io_in_bits_resp_in_0_s3_full_pred_1_targets_0);
    this->port.Add(this->io_in_bits_resp_in_0_s3_full_pred_1_targets_1.mName, this->io_in_bits_resp_in_0_s3_full_pred_1_targets_1);
    this->port.Add(this->io_in_bits_resp_in_0_s3_full_pred_1_jalr_target.mName, this->io_in_bits_resp_in_0_s3_full_pred_1_jalr_target);
    this->port.Add(this->io_in_bits_resp_in_0_s3_full_pred_1_fallThroughAddr.mName, this->io_in_bits_resp_in_0_s3_full_pred_1_fallThroughAddr);
    this->port.Add(this->io_in_bits_resp_in_0_s3_full_pred_1_fallThroughErr.mName, this->io_in_bits_resp_in_0_s3_full_pred_1_fallThroughErr);
    this->port.Add(this->io_in_bits_resp_in_0_s3_full_pred_1_multiHit.mName, this->io_in_bits_resp_in_0_s3_full_pred_1_multiHit);
    this->port.Add(this->io_in_bits_resp_in_0_s3_full_pred_1_is_br_sharing.mName, this->io_in_bits_resp_in_0_s3_full_pred_1_is_br_sharing);
    this->port.Add(this->io_in_bits_resp_in_0_s3_full_pred_1_hit.mName, this->io_in_bits_resp_in_0_s3_full_pred_1_hit);
    this->port.Add(this->io_in_bits_resp_in_0_s3_full_pred_2_br_taken_mask_0.mName, this->io_in_bits_resp_in_0_s3_full_pred_2_br_taken_mask_0);
    this->port.Add(this->io_in_bits_resp_in_0_s3_full_pred_2_br_taken_mask_1.mName, this->io_in_bits_resp_in_0_s3_full_pred_2_br_taken_mask_1);
    this->port.Add(this->io_in_bits_resp_in_0_s3_full_pred_2_slot_valids_0.mName, this->io_in_bits_resp_in_0_s3_full_pred_2_slot_valids_0);
    this->port.Add(this->io_in_bits_resp_in_0_s3_full_pred_2_slot_valids_1.mName, this->io_in_bits_resp_in_0_s3_full_pred_2_slot_valids_1);
    this->port.Add(this->io_in_bits_resp_in_0_s3_full_pred_2_targets_0.mName, this->io_in_bits_resp_in_0_s3_full_pred_2_targets_0);
    this->port.Add(this->io_in_bits_resp_in_0_s3_full_pred_2_targets_1.mName, this->io_in_bits_resp_in_0_s3_full_pred_2_targets_1);
    this->port.Add(this->io_in_bits_resp_in_0_s3_full_pred_2_jalr_target.mName, this->io_in_bits_resp_in_0_s3_full_pred_2_jalr_target);
    this->port.Add(this->io_in_bits_resp_in_0_s3_full_pred_2_fallThroughAddr.mName, this->io_in_bits_resp_in_0_s3_full_pred_2_fallThroughAddr);
    this->port.Add(this->io_in_bits_resp_in_0_s3_full_pred_2_fallThroughErr.mName, this->io_in_bits_resp_in_0_s3_full_pred_2_fallThroughErr);
    this->port.Add(this->io_in_bits_resp_in_0_s3_full_pred_2_multiHit.mName, this->io_in_bits_resp_in_0_s3_full_pred_2_multiHit);
    this->port.Add(this->io_in_bits_resp_in_0_s3_full_pred_2_is_jalr.mName, this->io_in_bits_resp_in_0_s3_full_pred_2_is_jalr);
    this->port.Add(this->io_in_bits_resp_in_0_s3_full_pred_2_is_call.mName, this->io_in_bits_resp_in_0_s3_full_pred_2_is_call);
    this->port.Add(this->io_in_bits_resp_in_0_s3_full_pred_2_is_ret.mName, this->io_in_bits_resp_in_0_s3_full_pred_2_is_ret);
    this->port.Add(this->io_in_bits_resp_in_0_s3_full_pred_2_is_br_sharing.mName, this->io_in_bits_resp_in_0_s3_full_pred_2_is_br_sharing);
    this->port.Add(this->io_in_bits_resp_in_0_s3_full_pred_2_hit.mName, this->io_in_bits_resp_in_0_s3_full_pred_2_hit);
    this->port.Add(this->io_in_bits_resp_in_0_s3_full_pred_3_br_taken_mask_0.mName, this->io_in_bits_resp_in_0_s3_full_pred_3_br_taken_mask_0);
    this->port.Add(this->io_in_bits_resp_in_0_s3_full_pred_3_br_taken_mask_1.mName, this->io_in_bits_resp_in_0_s3_full_pred_3_br_taken_mask_1);
    this->port.Add(this->io_in_bits_resp_in_0_s3_full_pred_3_slot_valids_0.mName, this->io_in_bits_resp_in_0_s3_full_pred_3_slot_valids_0);
    this->port.Add(this->io_in_bits_resp_in_0_s3_full_pred_3_slot_valids_1.mName, this->io_in_bits_resp_in_0_s3_full_pred_3_slot_valids_1);
    this->port.Add(this->io_in_bits_resp_in_0_s3_full_pred_3_targets_0.mName, this->io_in_bits_resp_in_0_s3_full_pred_3_targets_0);
    this->port.Add(this->io_in_bits_resp_in_0_s3_full_pred_3_targets_1.mName, this->io_in_bits_resp_in_0_s3_full_pred_3_targets_1);
    this->port.Add(this->io_in_bits_resp_in_0_s3_full_pred_3_jalr_target.mName, this->io_in_bits_resp_in_0_s3_full_pred_3_jalr_target);
    this->port.Add(this->io_in_bits_resp_in_0_s3_full_pred_3_offsets_0.mName, this->io_in_bits_resp_in_0_s3_full_pred_3_offsets_0);
    this->port.Add(this->io_in_bits_resp_in_0_s3_full_pred_3_offsets_1.mName, this->io_in_bits_resp_in_0_s3_full_pred_3_offsets_1);
    this->port.Add(this->io_in_bits_resp_in_0_s3_full_pred_3_fallThroughAddr.mName, this->io_in_bits_resp_in_0_s3_full_pred_3_fallThroughAddr);
    this->port.Add(this->io_in_bits_resp_in_0_s3_full_pred_3_fallThroughErr.mName, this->io_in_bits_resp_in_0_s3_full_pred_3_fallThroughErr);
    this->port.Add(this->io_in_bits_resp_in_0_s3_full_pred_3_multiHit.mName, this->io_in_bits_resp_in_0_s3_full_pred_3_multiHit);
    this->port.Add(this->io_in_bits_resp_in_0_s3_full_pred_3_is_br_sharing.mName, this->io_in_bits_resp_in_0_s3_full_pred_3_is_br_sharing);
    this->port.Add(this->io_in_bits_resp_in_0_s3_full_pred_3_hit.mName, this->io_in_bits_resp_in_0_s3_full_pred_3_hit);
    this->port.Add(this->io_in_bits_resp_in_0_last_stage_ftb_entry_isCall.mName, this->io_in_bits_resp_in_0_last_stage_ftb_entry_isCall);
    this->port.Add(this->io_in_bits_resp_in_0_last_stage_ftb_entry_isRet.mName, this->io_in_bits_resp_in_0_last_stage_ftb_entry_isRet);
    this->port.Add(this->io_in_bits_resp_in_0_last_stage_ftb_entry_isJalr.mName, this->io_in_bits_resp_in_0_last_stage_ftb_entry_isJalr);
    this->port.Add(this->io_in_bits_resp_in_0_last_stage_ftb_entry_valid.mName, this->io_in_bits_resp_in_0_last_stage_ftb_entry_valid);
    this->port.Add(this->io_in_bits_resp_in_0_last_stage_ftb_entry_brSlots_0_offset.mName, this->io_in_bits_resp_in_0_last_stage_ftb_entry_brSlots_0_offset);
    this->port.Add(this->io_in_bits_resp_in_0_last_stage_ftb_entry_brSlots_0_sharing.mName, this->io_in_bits_resp_in_0_last_stage_ftb_entry_brSlots_0_sharing);
    this->port.Add(this->io_in_bits_resp_in_0_last_stage_ftb_entry_brSlots_0_valid.mName, this->io_in_bits_resp_in_0_last_stage_ftb_entry_brSlots_0_valid);
    this->port.Add(this->io_in_bits_resp_in_0_last_stage_ftb_entry_brSlots_0_lower.mName, this->io_in_bits_resp_in_0_last_stage_ftb_entry_brSlots_0_lower);
    this->port.Add(this->io_in_bits_resp_in_0_last_stage_ftb_entry_brSlots_0_tarStat.mName, this->io_in_bits_resp_in_0_last_stage_ftb_entry_brSlots_0_tarStat);
    this->port.Add(this->io_in_bits_resp_in_0_last_stage_ftb_entry_tailSlot_offset.mName, this->io_in_bits_resp_in_0_last_stage_ftb_entry_tailSlot_offset);
    this->port.Add(this->io_in_bits_resp_in_0_last_stage_ftb_entry_tailSlot_sharing.mName, this->io_in_bits_resp_in_0_last_stage_ftb_entry_tailSlot_sharing);
    this->port.Add(this->io_in_bits_resp_in_0_last_stage_ftb_entry_tailSlot_valid.mName, this->io_in_bits_resp_in_0_last_stage_ftb_entry_tailSlot_valid);
    this->port.Add(this->io_in_bits_resp_in_0_last_stage_ftb_entry_tailSlot_lower.mName, this->io_in_bits_resp_in_0_last_stage_ftb_entry_tailSlot_lower);
    this->port.Add(this->io_in_bits_resp_in_0_last_stage_ftb_entry_tailSlot_tarStat.mName, this->io_in_bits_resp_in_0_last_stage_ftb_entry_tailSlot_tarStat);
    this->port.Add(this->io_in_bits_resp_in_0_last_stage_ftb_entry_pftAddr.mName, this->io_in_bits_resp_in_0_last_stage_ftb_entry_pftAddr);
    this->port.Add(this->io_in_bits_resp_in_0_last_stage_ftb_entry_carry.mName, this->io_in_bits_resp_in_0_last_stage_ftb_entry_carry);
    this->port.Add(this->io_in_bits_resp_in_0_last_stage_ftb_entry_last_may_be_rvi_call.mName, this->io_in_bits_resp_in_0_last_stage_ftb_entry_last_may_be_rvi_call);
    this->port.Add(this->io_in_bits_resp_in_0_last_stage_ftb_entry_always_taken_0.mName, this->io_in_bits_resp_in_0_last_stage_ftb_entry_always_taken_0);
    this->port.Add(this->io_in_bits_resp_in_0_last_stage_ftb_entry_always_taken_1.mName, this->io_in_bits_resp_in_0_last_stage_ftb_entry_always_taken_1);
    this->port.Add(this->io_out_s2_pc_0.mName, this->io_out_s2_pc_0);
    this->port.Add(this->io_out_s2_pc_1.mName, this->io_out_s2_pc_1);
    this->port.Add(this->io_out_s2_pc_2.mName, this->io_out_s2_pc_2);
    this->port.Add(this->io_out_s2_pc_3.mName, this->io_out_s2_pc_3);
    this->port.Add(this->io_out_s2_full_pred_0_br_taken_mask_0.mName, this->io_out_s2_full_pred_0_br_taken_mask_0);
    this->port.Add(this->io_out_s2_full_pred_0_br_taken_mask_1.mName, this->io_out_s2_full_pred_0_br_taken_mask_1);
    this->port.Add(this->io_out_s2_full_pred_0_slot_valids_0.mName, this->io_out_s2_full_pred_0_slot_valids_0);
    this->port.Add(this->io_out_s2_full_pred_0_slot_valids_1.mName, this->io_out_s2_full_pred_0_slot_valids_1);
    this->port.Add(this->io_out_s2_full_pred_0_targets_0.mName, this->io_out_s2_full_pred_0_targets_0);
    this->port.Add(this->io_out_s2_full_pred_0_targets_1.mName, this->io_out_s2_full_pred_0_targets_1);
    this->port.Add(this->io_out_s2_full_pred_0_offsets_0.mName, this->io_out_s2_full_pred_0_offsets_0);
    this->port.Add(this->io_out_s2_full_pred_0_offsets_1.mName, this->io_out_s2_full_pred_0_offsets_1);
    this->port.Add(this->io_out_s2_full_pred_0_fallThroughAddr.mName, this->io_out_s2_full_pred_0_fallThroughAddr);
    this->port.Add(this->io_out_s2_full_pred_0_is_br_sharing.mName, this->io_out_s2_full_pred_0_is_br_sharing);
    this->port.Add(this->io_out_s2_full_pred_0_hit.mName, this->io_out_s2_full_pred_0_hit);
    this->port.Add(this->io_out_s2_full_pred_1_br_taken_mask_0.mName, this->io_out_s2_full_pred_1_br_taken_mask_0);
    this->port.Add(this->io_out_s2_full_pred_1_br_taken_mask_1.mName, this->io_out_s2_full_pred_1_br_taken_mask_1);
    this->port.Add(this->io_out_s2_full_pred_1_slot_valids_0.mName, this->io_out_s2_full_pred_1_slot_valids_0);
    this->port.Add(this->io_out_s2_full_pred_1_slot_valids_1.mName, this->io_out_s2_full_pred_1_slot_valids_1);
    this->port.Add(this->io_out_s2_full_pred_1_targets_0.mName, this->io_out_s2_full_pred_1_targets_0);
    this->port.Add(this->io_out_s2_full_pred_1_targets_1.mName, this->io_out_s2_full_pred_1_targets_1);
    this->port.Add(this->io_out_s2_full_pred_1_offsets_0.mName, this->io_out_s2_full_pred_1_offsets_0);
    this->port.Add(this->io_out_s2_full_pred_1_offsets_1.mName, this->io_out_s2_full_pred_1_offsets_1);
    this->port.Add(this->io_out_s2_full_pred_1_fallThroughAddr.mName, this->io_out_s2_full_pred_1_fallThroughAddr);
    this->port.Add(this->io_out_s2_full_pred_1_is_br_sharing.mName, this->io_out_s2_full_pred_1_is_br_sharing);
    this->port.Add(this->io_out_s2_full_pred_1_hit.mName, this->io_out_s2_full_pred_1_hit);
    this->port.Add(this->io_out_s2_full_pred_2_br_taken_mask_0.mName, this->io_out_s2_full_pred_2_br_taken_mask_0);
    this->port.Add(this->io_out_s2_full_pred_2_br_taken_mask_1.mName, this->io_out_s2_full_pred_2_br_taken_mask_1);
    this->port.Add(this->io_out_s2_full_pred_2_slot_valids_0.mName, this->io_out_s2_full_pred_2_slot_valids_0);
    this->port.Add(this->io_out_s2_full_pred_2_slot_valids_1.mName, this->io_out_s2_full_pred_2_slot_valids_1);
    this->port.Add(this->io_out_s2_full_pred_2_targets_0.mName, this->io_out_s2_full_pred_2_targets_0);
    this->port.Add(this->io_out_s2_full_pred_2_targets_1.mName, this->io_out_s2_full_pred_2_targets_1);
    this->port.Add(this->io_out_s2_full_pred_2_offsets_0.mName, this->io_out_s2_full_pred_2_offsets_0);
    this->port.Add(this->io_out_s2_full_pred_2_offsets_1.mName, this->io_out_s2_full_pred_2_offsets_1);
    this->port.Add(this->io_out_s2_full_pred_2_fallThroughAddr.mName, this->io_out_s2_full_pred_2_fallThroughAddr);
    this->port.Add(this->io_out_s2_full_pred_2_is_br_sharing.mName, this->io_out_s2_full_pred_2_is_br_sharing);
    this->port.Add(this->io_out_s2_full_pred_2_hit.mName, this->io_out_s2_full_pred_2_hit);
    this->port.Add(this->io_out_s2_full_pred_3_br_taken_mask_0.mName, this->io_out_s2_full_pred_3_br_taken_mask_0);
    this->port.Add(this->io_out_s2_full_pred_3_br_taken_mask_1.mName, this->io_out_s2_full_pred_3_br_taken_mask_1);
    this->port.Add(this->io_out_s2_full_pred_3_slot_valids_0.mName, this->io_out_s2_full_pred_3_slot_valids_0);
    this->port.Add(this->io_out_s2_full_pred_3_slot_valids_1.mName, this->io_out_s2_full_pred_3_slot_valids_1);
    this->port.Add(this->io_out_s2_full_pred_3_targets_0.mName, this->io_out_s2_full_pred_3_targets_0);
    this->port.Add(this->io_out_s2_full_pred_3_targets_1.mName, this->io_out_s2_full_pred_3_targets_1);
    this->port.Add(this->io_out_s2_full_pred_3_offsets_0.mName, this->io_out_s2_full_pred_3_offsets_0);
    this->port.Add(this->io_out_s2_full_pred_3_offsets_1.mName, this->io_out_s2_full_pred_3_offsets_1);
    this->port.Add(this->io_out_s2_full_pred_3_fallThroughAddr.mName, this->io_out_s2_full_pred_3_fallThroughAddr);
    this->port.Add(this->io_out_s2_full_pred_3_fallThroughErr.mName, this->io_out_s2_full_pred_3_fallThroughErr);
    this->port.Add(this->io_out_s2_full_pred_3_is_br_sharing.mName, this->io_out_s2_full_pred_3_is_br_sharing);
    this->port.Add(this->io_out_s2_full_pred_3_hit.mName, this->io_out_s2_full_pred_3_hit);
    this->port.Add(this->io_out_s3_pc_0.mName, this->io_out_s3_pc_0);
    this->port.Add(this->io_out_s3_pc_1.mName, this->io_out_s3_pc_1);
    this->port.Add(this->io_out_s3_pc_2.mName, this->io_out_s3_pc_2);
    this->port.Add(this->io_out_s3_pc_3.mName, this->io_out_s3_pc_3);
    this->port.Add(this->io_out_s3_full_pred_0_br_taken_mask_0.mName, this->io_out_s3_full_pred_0_br_taken_mask_0);
    this->port.Add(this->io_out_s3_full_pred_0_br_taken_mask_1.mName, this->io_out_s3_full_pred_0_br_taken_mask_1);
    this->port.Add(this->io_out_s3_full_pred_0_slot_valids_0.mName, this->io_out_s3_full_pred_0_slot_valids_0);
    this->port.Add(this->io_out_s3_full_pred_0_slot_valids_1.mName, this->io_out_s3_full_pred_0_slot_valids_1);
    this->port.Add(this->io_out_s3_full_pred_0_targets_0.mName, this->io_out_s3_full_pred_0_targets_0);
    this->port.Add(this->io_out_s3_full_pred_0_targets_1.mName, this->io_out_s3_full_pred_0_targets_1);
    this->port.Add(this->io_out_s3_full_pred_0_fallThroughAddr.mName, this->io_out_s3_full_pred_0_fallThroughAddr);
    this->port.Add(this->io_out_s3_full_pred_0_fallThroughErr.mName, this->io_out_s3_full_pred_0_fallThroughErr);
    this->port.Add(this->io_out_s3_full_pred_0_multiHit.mName, this->io_out_s3_full_pred_0_multiHit);
    this->port.Add(this->io_out_s3_full_pred_0_is_br_sharing.mName, this->io_out_s3_full_pred_0_is_br_sharing);
    this->port.Add(this->io_out_s3_full_pred_0_hit.mName, this->io_out_s3_full_pred_0_hit);
    this->port.Add(this->io_out_s3_full_pred_1_br_taken_mask_0.mName, this->io_out_s3_full_pred_1_br_taken_mask_0);
    this->port.Add(this->io_out_s3_full_pred_1_br_taken_mask_1.mName, this->io_out_s3_full_pred_1_br_taken_mask_1);
    this->port.Add(this->io_out_s3_full_pred_1_slot_valids_0.mName, this->io_out_s3_full_pred_1_slot_valids_0);
    this->port.Add(this->io_out_s3_full_pred_1_slot_valids_1.mName, this->io_out_s3_full_pred_1_slot_valids_1);
    this->port.Add(this->io_out_s3_full_pred_1_targets_0.mName, this->io_out_s3_full_pred_1_targets_0);
    this->port.Add(this->io_out_s3_full_pred_1_targets_1.mName, this->io_out_s3_full_pred_1_targets_1);
    this->port.Add(this->io_out_s3_full_pred_1_fallThroughAddr.mName, this->io_out_s3_full_pred_1_fallThroughAddr);
    this->port.Add(this->io_out_s3_full_pred_1_fallThroughErr.mName, this->io_out_s3_full_pred_1_fallThroughErr);
    this->port.Add(this->io_out_s3_full_pred_1_multiHit.mName, this->io_out_s3_full_pred_1_multiHit);
    this->port.Add(this->io_out_s3_full_pred_1_is_br_sharing.mName, this->io_out_s3_full_pred_1_is_br_sharing);
    this->port.Add(this->io_out_s3_full_pred_1_hit.mName, this->io_out_s3_full_pred_1_hit);
    this->port.Add(this->io_out_s3_full_pred_2_br_taken_mask_0.mName, this->io_out_s3_full_pred_2_br_taken_mask_0);
    this->port.Add(this->io_out_s3_full_pred_2_br_taken_mask_1.mName, this->io_out_s3_full_pred_2_br_taken_mask_1);
    this->port.Add(this->io_out_s3_full_pred_2_slot_valids_0.mName, this->io_out_s3_full_pred_2_slot_valids_0);
    this->port.Add(this->io_out_s3_full_pred_2_slot_valids_1.mName, this->io_out_s3_full_pred_2_slot_valids_1);
    this->port.Add(this->io_out_s3_full_pred_2_targets_0.mName, this->io_out_s3_full_pred_2_targets_0);
    this->port.Add(this->io_out_s3_full_pred_2_targets_1.mName, this->io_out_s3_full_pred_2_targets_1);
    this->port.Add(this->io_out_s3_full_pred_2_fallThroughAddr.mName, this->io_out_s3_full_pred_2_fallThroughAddr);
    this->port.Add(this->io_out_s3_full_pred_2_fallThroughErr.mName, this->io_out_s3_full_pred_2_fallThroughErr);
    this->port.Add(this->io_out_s3_full_pred_2_multiHit.mName, this->io_out_s3_full_pred_2_multiHit);
    this->port.Add(this->io_out_s3_full_pred_2_is_br_sharing.mName, this->io_out_s3_full_pred_2_is_br_sharing);
    this->port.Add(this->io_out_s3_full_pred_2_hit.mName, this->io_out_s3_full_pred_2_hit);
    this->port.Add(this->io_out_s3_full_pred_3_br_taken_mask_0.mName, this->io_out_s3_full_pred_3_br_taken_mask_0);
    this->port.Add(this->io_out_s3_full_pred_3_br_taken_mask_1.mName, this->io_out_s3_full_pred_3_br_taken_mask_1);
    this->port.Add(this->io_out_s3_full_pred_3_slot_valids_0.mName, this->io_out_s3_full_pred_3_slot_valids_0);
    this->port.Add(this->io_out_s3_full_pred_3_slot_valids_1.mName, this->io_out_s3_full_pred_3_slot_valids_1);
    this->port.Add(this->io_out_s3_full_pred_3_targets_0.mName, this->io_out_s3_full_pred_3_targets_0);
    this->port.Add(this->io_out_s3_full_pred_3_targets_1.mName, this->io_out_s3_full_pred_3_targets_1);
    this->port.Add(this->io_out_s3_full_pred_3_offsets_0.mName, this->io_out_s3_full_pred_3_offsets_0);
    this->port.Add(this->io_out_s3_full_pred_3_offsets_1.mName, this->io_out_s3_full_pred_3_offsets_1);
    this->port.Add(this->io_out_s3_full_pred_3_fallThroughAddr.mName, this->io_out_s3_full_pred_3_fallThroughAddr);
    this->port.Add(this->io_out_s3_full_pred_3_fallThroughErr.mName, this->io_out_s3_full_pred_3_fallThroughErr);
    this->port.Add(this->io_out_s3_full_pred_3_multiHit.mName, this->io_out_s3_full_pred_3_multiHit);
    this->port.Add(this->io_out_s3_full_pred_3_is_br_sharing.mName, this->io_out_s3_full_pred_3_is_br_sharing);
    this->port.Add(this->io_out_s3_full_pred_3_hit.mName, this->io_out_s3_full_pred_3_hit);
    this->port.Add(this->io_out_last_stage_meta.mName, this->io_out_last_stage_meta);
    this->port.Add(this->io_out_last_stage_spec_info_ssp.mName, this->io_out_last_stage_spec_info_ssp);
    this->port.Add(this->io_out_last_stage_spec_info_sctr.mName, this->io_out_last_stage_spec_info_sctr);
    this->port.Add(this->io_out_last_stage_spec_info_TOSW_flag.mName, this->io_out_last_stage_spec_info_TOSW_flag);
    this->port.Add(this->io_out_last_stage_spec_info_TOSW_value.mName, this->io_out_last_stage_spec_info_TOSW_value);
    this->port.Add(this->io_out_last_stage_spec_info_TOSR_flag.mName, this->io_out_last_stage_spec_info_TOSR_flag);
    this->port.Add(this->io_out_last_stage_spec_info_TOSR_value.mName, this->io_out_last_stage_spec_info_TOSR_value);
    this->port.Add(this->io_out_last_stage_spec_info_NOS_flag.mName, this->io_out_last_stage_spec_info_NOS_flag);
    this->port.Add(this->io_out_last_stage_spec_info_NOS_value.mName, this->io_out_last_stage_spec_info_NOS_value);
    this->port.Add(this->io_out_last_stage_spec_info_topAddr.mName, this->io_out_last_stage_spec_info_topAddr);
    this->port.Add(this->io_out_last_stage_ftb_entry_isCall.mName, this->io_out_last_stage_ftb_entry_isCall);
    this->port.Add(this->io_out_last_stage_ftb_entry_isRet.mName, this->io_out_last_stage_ftb_entry_isRet);
    this->port.Add(this->io_out_last_stage_ftb_entry_isJalr.mName, this->io_out_last_stage_ftb_entry_isJalr);
    this->port.Add(this->io_out_last_stage_ftb_entry_valid.mName, this->io_out_last_stage_ftb_entry_valid);
    this->port.Add(this->io_out_last_stage_ftb_entry_brSlots_0_offset.mName, this->io_out_last_stage_ftb_entry_brSlots_0_offset);
    this->port.Add(this->io_out_last_stage_ftb_entry_brSlots_0_sharing.mName, this->io_out_last_stage_ftb_entry_brSlots_0_sharing);
    this->port.Add(this->io_out_last_stage_ftb_entry_brSlots_0_valid.mName, this->io_out_last_stage_ftb_entry_brSlots_0_valid);
    this->port.Add(this->io_out_last_stage_ftb_entry_brSlots_0_lower.mName, this->io_out_last_stage_ftb_entry_brSlots_0_lower);
    this->port.Add(this->io_out_last_stage_ftb_entry_brSlots_0_tarStat.mName, this->io_out_last_stage_ftb_entry_brSlots_0_tarStat);
    this->port.Add(this->io_out_last_stage_ftb_entry_tailSlot_offset.mName, this->io_out_last_stage_ftb_entry_tailSlot_offset);
    this->port.Add(this->io_out_last_stage_ftb_entry_tailSlot_sharing.mName, this->io_out_last_stage_ftb_entry_tailSlot_sharing);
    this->port.Add(this->io_out_last_stage_ftb_entry_tailSlot_valid.mName, this->io_out_last_stage_ftb_entry_tailSlot_valid);
    this->port.Add(this->io_out_last_stage_ftb_entry_tailSlot_lower.mName, this->io_out_last_stage_ftb_entry_tailSlot_lower);
    this->port.Add(this->io_out_last_stage_ftb_entry_tailSlot_tarStat.mName, this->io_out_last_stage_ftb_entry_tailSlot_tarStat);
    this->port.Add(this->io_out_last_stage_ftb_entry_pftAddr.mName, this->io_out_last_stage_ftb_entry_pftAddr);
    this->port.Add(this->io_out_last_stage_ftb_entry_carry.mName, this->io_out_last_stage_ftb_entry_carry);
    this->port.Add(this->io_out_last_stage_ftb_entry_last_may_be_rvi_call.mName, this->io_out_last_stage_ftb_entry_last_may_be_rvi_call);
    this->port.Add(this->io_out_last_stage_ftb_entry_always_taken_0.mName, this->io_out_last_stage_ftb_entry_always_taken_0);
    this->port.Add(this->io_out_last_stage_ftb_entry_always_taken_1.mName, this->io_out_last_stage_ftb_entry_always_taken_1);
    this->port.Add(this->io_ctrl_ras_enable.mName, this->io_ctrl_ras_enable);
    this->port.Add(this->io_s0_fire_0.mName, this->io_s0_fire_0);
    this->port.Add(this->io_s0_fire_1.mName, this->io_s0_fire_1);
    this->port.Add(this->io_s0_fire_2.mName, this->io_s0_fire_2);
    this->port.Add(this->io_s0_fire_3.mName, this->io_s0_fire_3);
    this->port.Add(this->io_s1_fire_0.mName, this->io_s1_fire_0);
    this->port.Add(this->io_s1_fire_1.mName, this->io_s1_fire_1);
    this->port.Add(this->io_s1_fire_2.mName, this->io_s1_fire_2);
    this->port.Add(this->io_s1_fire_3.mName, this->io_s1_fire_3);
    this->port.Add(this->io_s2_fire_0.mName, this->io_s2_fire_0);
    this->port.Add(this->io_s2_fire_1.mName, this->io_s2_fire_1);
    this->port.Add(this->io_s2_fire_2.mName, this->io_s2_fire_2);
    this->port.Add(this->io_s2_fire_3.mName, this->io_s2_fire_3);
    this->port.Add(this->io_s3_fire_2.mName, this->io_s3_fire_2);
    this->port.Add(this->io_s3_redirect_2.mName, this->io_s3_redirect_2);
    this->port.Add(this->io_update_valid.mName, this->io_update_valid);
    this->port.Add(this->io_update_bits_ftb_entry_isCall.mName, this->io_update_bits_ftb_entry_isCall);
    this->port.Add(this->io_update_bits_ftb_entry_isRet.mName, this->io_update_bits_ftb_entry_isRet);
    this->port.Add(this->io_update_bits_ftb_entry_tailSlot_offset.mName, this->io_update_bits_ftb_entry_tailSlot_offset);
    this->port.Add(this->io_update_bits_ftb_entry_tailSlot_valid.mName, this->io_update_bits_ftb_entry_tailSlot_valid);
    this->port.Add(this->io_update_bits_cfi_idx_valid.mName, this->io_update_bits_cfi_idx_valid);
    this->port.Add(this->io_update_bits_cfi_idx_bits.mName, this->io_update_bits_cfi_idx_bits);
    this->port.Add(this->io_update_bits_jmp_taken.mName, this->io_update_bits_jmp_taken);
    this->port.Add(this->io_update_bits_meta.mName, this->io_update_bits_meta);
    this->port.Add(this->io_redirect_valid.mName, this->io_redirect_valid);
    this->port.Add(this->io_redirect_bits_level.mName, this->io_redirect_bits_level);
    this->port.Add(this->io_redirect_bits_cfiUpdate_pc.mName, this->io_redirect_bits_cfiUpdate_pc);
    this->port.Add(this->io_redirect_bits_cfiUpdate_pd_isRVC.mName, this->io_redirect_bits_cfiUpdate_pd_isRVC);
    this->port.Add(this->io_redirect_bits_cfiUpdate_pd_isCall.mName, this->io_redirect_bits_cfiUpdate_pd_isCall);
    this->port.Add(this->io_redirect_bits_cfiUpdate_pd_isRet.mName, this->io_redirect_bits_cfiUpdate_pd_isRet);
    this->port.Add(this->io_redirect_bits_cfiUpdate_ssp.mName, this->io_redirect_bits_cfiUpdate_ssp);
    this->port.Add(this->io_redirect_bits_cfiUpdate_sctr.mName, this->io_redirect_bits_cfiUpdate_sctr);
    this->port.Add(this->io_redirect_bits_cfiUpdate_TOSW_flag.mName, this->io_redirect_bits_cfiUpdate_TOSW_flag);
    this->port.Add(this->io_redirect_bits_cfiUpdate_TOSW_value.mName, this->io_redirect_bits_cfiUpdate_TOSW_value);
    this->port.Add(this->io_redirect_bits_cfiUpdate_TOSR_flag.mName, this->io_redirect_bits_cfiUpdate_TOSR_flag);
    this->port.Add(this->io_redirect_bits_cfiUpdate_TOSR_value.mName, this->io_redirect_bits_cfiUpdate_TOSR_value);
    this->port.Add(this->io_redirect_bits_cfiUpdate_NOS_flag.mName, this->io_redirect_bits_cfiUpdate_NOS_flag);
    this->port.Add(this->io_redirect_bits_cfiUpdate_NOS_value.mName, this->io_redirect_bits_cfiUpdate_NOS_value);
    this->port.Add(this->RAS_redirect_next_bits_r_level.mName, this->RAS_redirect_next_bits_r_level);
    this->port.Add(this->RAS_redirect_next_valid_last_r.mName, this->RAS_redirect_next_valid_last_r);
    this->port.Add(this->RAS_redirect_next_bits_r_cfiUpdate_pd_isRVC.mName, this->RAS_redirect_next_bits_r_cfiUpdate_pd_isRVC);
    this->port.Add(this->RAS_redirect_next_bits_r_cfiUpdate_pd_isCall.mName, this->RAS_redirect_next_bits_r_cfiUpdate_pd_isCall);
    this->port.Add(this->RAS_redirect_next_bits_r_cfiUpdate_pd_isRet.mName, this->RAS_redirect_next_bits_r_cfiUpdate_pd_isRet);
    this->port.Add(this->RAS_s3_push.mName, this->RAS_s3_push);
    this->port.Add(this->RAS_s3_pop.mName, this->RAS_s3_pop);
    this->port.Add(this->RAS_s3_pushed_in_s2.mName, this->RAS_s3_pushed_in_s2);
    this->port.Add(this->RAS_s2_spec_push.mName, this->RAS_s2_spec_push);
    this->port.Add(this->RAS_RASStack_realPush.mName, this->RAS_RASStack_realPush);
    this->port.Add(this->RAS_RASStack_TOSR_value.mName, this->RAS_RASStack_TOSR_value);
    this->port.Add(this->RAS_RASStack_TOSW_value.mName, this->RAS_RASStack_TOSW_value);
    this->port.Add(this->RAS_RASStack_BOS_value.mName, this->RAS_RASStack_BOS_value);
    this->port.Add(this->RAS_RASStack_ssp.mName, this->RAS_RASStack_ssp);
    this->port.Add(this->RAS_RASStack_nsp.mName, this->RAS_RASStack_nsp);
    this->port.Add(this->RAS_RASStack_spec_overflowed.mName, this->RAS_RASStack_spec_overflowed);
    this->port.Add(this->RAS_RASStack_writeBypassValid.mName, this->RAS_RASStack_writeBypassValid);
    this->port.Add(this->RAS_RASStack_timingTop_retAddr.mName, this->RAS_RASStack_timingTop_retAddr);
    this->port.Add(this->RAS_RASStack_sctr.mName, this->RAS_RASStack_sctr);
    this->port.Add(this->RAS_RASStack_spec_queue_0_retAddr.mName, this->RAS_RASStack_spec_queue_0_retAddr);
    this->port.Add(this->RAS_RASStack_spec_queue_1_retAddr.mName, this->RAS_RASStack_spec_queue_1_retAddr);
    this->port.Add(this->RAS_RASStack_spec_queue_2_retAddr.mName, this->RAS_RASStack_spec_queue_2_retAddr);
    this->port.Add(this->RAS_RASStack_spec_queue_3_retAddr.mName, this->RAS_RASStack_spec_queue_3_retAddr);
    this->port.Add(this->RAS_RASStack_spec_queue_4_retAddr.mName, this->RAS_RASStack_spec_queue_4_retAddr);
    this->port.Add(this->RAS_RASStack_spec_queue_5_retAddr.mName, this->RAS_RASStack_spec_queue_5_retAddr);
    this->port.Add(this->RAS_RASStack_spec_queue_6_retAddr.mName, this->RAS_RASStack_spec_queue_6_retAddr);
    this->port.Add(this->RAS_RASStack_spec_queue_7_retAddr.mName, this->RAS_RASStack_spec_queue_7_retAddr);
    this->port.Add(this->RAS_RASStack_spec_queue_8_retAddr.mName, this->RAS_RASStack_spec_queue_8_retAddr);
    this->port.Add(this->RAS_RASStack_spec_queue_9_retAddr.mName, this->RAS_RASStack_spec_queue_9_retAddr);
    this->port.Add(this->RAS_RASStack_spec_queue_10_retAddr.mName, this->RAS_RASStack_spec_queue_10_retAddr);
    this->port.Add(this->RAS_RASStack_spec_queue_11_retAddr.mName, this->RAS_RASStack_spec_queue_11_retAddr);
    this->port.Add(this->RAS_RASStack_spec_queue_12_retAddr.mName, this->RAS_RASStack_spec_queue_12_retAddr);
    this->port.Add(this->RAS_RASStack_spec_queue_13_retAddr.mName, this->RAS_RASStack_spec_queue_13_retAddr);
    this->port.Add(this->RAS_RASStack_spec_queue_14_retAddr.mName, this->RAS_RASStack_spec_queue_14_retAddr);
    this->port.Add(this->RAS_RASStack_spec_queue_15_retAddr.mName, this->RAS_RASStack_spec_queue_15_retAddr);
    this->port.Add(this->RAS_RASStack_spec_queue_16_retAddr.mName, this->RAS_RASStack_spec_queue_16_retAddr);
    this->port.Add(this->RAS_RASStack_spec_queue_17_retAddr.mName, this->RAS_RASStack_spec_queue_17_retAddr);
    this->port.Add(this->RAS_RASStack_spec_queue_18_retAddr.mName, this->RAS_RASStack_spec_queue_18_retAddr);
    this->port.Add(this->RAS_RASStack_spec_queue_19_retAddr.mName, this->RAS_RASStack_spec_queue_19_retAddr);
    this->port.Add(this->RAS_RASStack_spec_queue_20_retAddr.mName, this->RAS_RASStack_spec_queue_20_retAddr);
    this->port.Add(this->RAS_RASStack_spec_queue_21_retAddr.mName, this->RAS_RASStack_spec_queue_21_retAddr);
    this->port.Add(this->RAS_RASStack_spec_queue_22_retAddr.mName, this->RAS_RASStack_spec_queue_22_retAddr);
    this->port.Add(this->RAS_RASStack_spec_queue_23_retAddr.mName, this->RAS_RASStack_spec_queue_23_retAddr);
    this->port.Add(this->RAS_RASStack_spec_queue_24_retAddr.mName, this->RAS_RASStack_spec_queue_24_retAddr);
    this->port.Add(this->RAS_RASStack_spec_queue_25_retAddr.mName, this->RAS_RASStack_spec_queue_25_retAddr);
    this->port.Add(this->RAS_RASStack_spec_queue_26_retAddr.mName, this->RAS_RASStack_spec_queue_26_retAddr);
    this->port.Add(this->RAS_RASStack_spec_queue_27_retAddr.mName, this->RAS_RASStack_spec_queue_27_retAddr);
    this->port.Add(this->RAS_RASStack_spec_queue_28_retAddr.mName, this->RAS_RASStack_spec_queue_28_retAddr);
    this->port.Add(this->RAS_RASStack_spec_queue_29_retAddr.mName, this->RAS_RASStack_spec_queue_29_retAddr);
    this->port.Add(this->RAS_RASStack_spec_queue_30_retAddr.mName, this->RAS_RASStack_spec_queue_30_retAddr);
    this->port.Add(this->RAS_RASStack_spec_queue_31_retAddr.mName, this->RAS_RASStack_spec_queue_31_retAddr);
    this->port.Add(this->RAS_RASStack_commit_stack_0_retAddr.mName, this->RAS_RASStack_commit_stack_0_retAddr);
    this->port.Add(this->RAS_RASStack_commit_stack_1_retAddr.mName, this->RAS_RASStack_commit_stack_1_retAddr);
    this->port.Add(this->RAS_RASStack_commit_stack_2_retAddr.mName, this->RAS_RASStack_commit_stack_2_retAddr);
    this->port.Add(this->RAS_RASStack_commit_stack_3_retAddr.mName, this->RAS_RASStack_commit_stack_3_retAddr);
    this->port.Add(this->RAS_RASStack_commit_stack_4_retAddr.mName, this->RAS_RASStack_commit_stack_4_retAddr);
    this->port.Add(this->RAS_RASStack_commit_stack_5_retAddr.mName, this->RAS_RASStack_commit_stack_5_retAddr);
    this->port.Add(this->RAS_RASStack_commit_stack_6_retAddr.mName, this->RAS_RASStack_commit_stack_6_retAddr);
    this->port.Add(this->RAS_RASStack_commit_stack_7_retAddr.mName, this->RAS_RASStack_commit_stack_7_retAddr);
    this->port.Add(this->RAS_RASStack_commit_stack_8_retAddr.mName, this->RAS_RASStack_commit_stack_8_retAddr);
    this->port.Add(this->RAS_RASStack_commit_stack_9_retAddr.mName, this->RAS_RASStack_commit_stack_9_retAddr);
    this->port.Add(this->RAS_RASStack_commit_stack_10_retAddr.mName, this->RAS_RASStack_commit_stack_10_retAddr);
    this->port.Add(this->RAS_RASStack_commit_stack_11_retAddr.mName, this->RAS_RASStack_commit_stack_11_retAddr);
    this->port.Add(this->RAS_RASStack_commit_stack_12_retAddr.mName, this->RAS_RASStack_commit_stack_12_retAddr);
    this->port.Add(this->RAS_RASStack_commit_stack_13_retAddr.mName, this->RAS_RASStack_commit_stack_13_retAddr);
    this->port.Add(this->RAS_RASStack_commit_stack_14_retAddr.mName, this->RAS_RASStack_commit_stack_14_retAddr);
    this->port.Add(this->RAS_RASStack_commit_stack_15_retAddr.mName, this->RAS_RASStack_commit_stack_15_retAddr);
    this->port.Add(this->RAS_RASStack_commit_stack_0_ctr.mName, this->RAS_RASStack_commit_stack_0_ctr);
    this->port.Add(this->RAS_RASStack_commit_stack_1_ctr.mName, this->RAS_RASStack_commit_stack_1_ctr);
    this->port.Add(this->RAS_RASStack_commit_stack_2_ctr.mName, this->RAS_RASStack_commit_stack_2_ctr);
    this->port.Add(this->RAS_RASStack_commit_stack_3_ctr.mName, this->RAS_RASStack_commit_stack_3_ctr);
    this->port.Add(this->RAS_RASStack_commit_stack_4_ctr.mName, this->RAS_RASStack_commit_stack_4_ctr);
    this->port.Add(this->RAS_RASStack_commit_stack_5_ctr.mName, this->RAS_RASStack_commit_stack_5_ctr);
    this->port.Add(this->RAS_RASStack_commit_stack_6_ctr.mName, this->RAS_RASStack_commit_stack_6_ctr);
    this->port.Add(this->RAS_RASStack_commit_stack_7_ctr.mName, this->RAS_RASStack_commit_stack_7_ctr);
    this->port.Add(this->RAS_RASStack_commit_stack_8_ctr.mName, this->RAS_RASStack_commit_stack_8_ctr);
    this->port.Add(this->RAS_RASStack_commit_stack_9_ctr.mName, this->RAS_RASStack_commit_stack_9_ctr);
    this->port.Add(this->RAS_RASStack_commit_stack_10_ctr.mName, this->RAS_RASStack_commit_stack_10_ctr);
    this->port.Add(this->RAS_RASStack_commit_stack_11_ctr.mName, this->RAS_RASStack_commit_stack_11_ctr);
    this->port.Add(this->RAS_RASStack_commit_stack_12_ctr.mName, this->RAS_RASStack_commit_stack_12_ctr);
    this->port.Add(this->RAS_RASStack_commit_stack_13_ctr.mName, this->RAS_RASStack_commit_stack_13_ctr);
    this->port.Add(this->RAS_RASStack_commit_stack_14_ctr.mName, this->RAS_RASStack_commit_stack_14_ctr);
    this->port.Add(this->RAS_RASStack_commit_stack_15_ctr.mName, this->RAS_RASStack_commit_stack_15_ctr);
    this->port.Add(this->RAS_RASStack_io_spec_push_valid.mName, this->RAS_RASStack_io_spec_push_valid);
    this->port.Add(this->RAS_RASStack_io_spec_pop_valid.mName, this->RAS_RASStack_io_spec_pop_valid);
    this->port.Add(this->RAS_RASStack_io_commit_push_valid.mName, this->RAS_RASStack_io_commit_push_valid);
    this->port.Add(this->RAS_RASStack_io_commit_pop_valid.mName, this->RAS_RASStack_io_commit_pop_valid);
    this->port.Add(this->RAS_RASStack_io_redirect_valid.mName, this->RAS_RASStack_io_redirect_valid);
    this->port.Add(this->RAS_RASStack_io_redirect_isCall.mName, this->RAS_RASStack_io_redirect_isCall);
    this->port.Add(this->RAS_RASStack_io_redirect_isRet.mName, this->RAS_RASStack_io_redirect_isRet);
    this->port.Add(this->RAS_RASStack_io_s3_cancel.mName, this->RAS_RASStack_io_s3_cancel);


    xfunction<int, bool> stepfunc = [&](bool d) -> int {
        return this->step(d);
    };
    this->xclk.ReInit(stepfunc, {}, {&this->port});
}

void UTRAS::initClock(XData &clk)
{
    // initialize RAS clock
    xfunction<int, bool> stepfunc = [&](bool d) -> int {
        return this->step(d);
    };
    this->xclk.ReInit(stepfunc, {&clk}, {});
}