#pragma once
#include "dut_base.hpp"
#include "xspcomm/xcomm.h"
using namespace xspcomm;

class UTRAS: public DutUnifiedBase
{
public:
    /*
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

    // RAS 
    XData clock;
    XData reset;
    XData io_reset_vector;
    XData io_in_bits_s0_pc_0;
    XData io_in_bits_s0_pc_1;
    XData io_in_bits_s0_pc_2;
    XData io_in_bits_s0_pc_3;
    XData io_in_bits_resp_in_0_s2_full_pred_0_br_taken_mask_0;
    XData io_in_bits_resp_in_0_s2_full_pred_0_br_taken_mask_1;
    XData io_in_bits_resp_in_0_s2_full_pred_0_slot_valids_0;
    XData io_in_bits_resp_in_0_s2_full_pred_0_slot_valids_1;
    XData io_in_bits_resp_in_0_s2_full_pred_0_targets_0;
    XData io_in_bits_resp_in_0_s2_full_pred_0_targets_1;
    XData io_in_bits_resp_in_0_s2_full_pred_0_jalr_target;
    XData io_in_bits_resp_in_0_s2_full_pred_0_offsets_0;
    XData io_in_bits_resp_in_0_s2_full_pred_0_offsets_1;
    XData io_in_bits_resp_in_0_s2_full_pred_0_fallThroughAddr;
    XData io_in_bits_resp_in_0_s2_full_pred_0_is_br_sharing;
    XData io_in_bits_resp_in_0_s2_full_pred_0_hit;
    XData io_in_bits_resp_in_0_s2_full_pred_1_br_taken_mask_0;
    XData io_in_bits_resp_in_0_s2_full_pred_1_br_taken_mask_1;
    XData io_in_bits_resp_in_0_s2_full_pred_1_slot_valids_0;
    XData io_in_bits_resp_in_0_s2_full_pred_1_slot_valids_1;
    XData io_in_bits_resp_in_0_s2_full_pred_1_targets_0;
    XData io_in_bits_resp_in_0_s2_full_pred_1_targets_1;
    XData io_in_bits_resp_in_0_s2_full_pred_1_jalr_target;
    XData io_in_bits_resp_in_0_s2_full_pred_1_offsets_0;
    XData io_in_bits_resp_in_0_s2_full_pred_1_offsets_1;
    XData io_in_bits_resp_in_0_s2_full_pred_1_fallThroughAddr;
    XData io_in_bits_resp_in_0_s2_full_pred_1_is_br_sharing;
    XData io_in_bits_resp_in_0_s2_full_pred_1_hit;
    XData io_in_bits_resp_in_0_s2_full_pred_2_br_taken_mask_0;
    XData io_in_bits_resp_in_0_s2_full_pred_2_br_taken_mask_1;
    XData io_in_bits_resp_in_0_s2_full_pred_2_slot_valids_0;
    XData io_in_bits_resp_in_0_s2_full_pred_2_slot_valids_1;
    XData io_in_bits_resp_in_0_s2_full_pred_2_targets_0;
    XData io_in_bits_resp_in_0_s2_full_pred_2_targets_1;
    XData io_in_bits_resp_in_0_s2_full_pred_2_jalr_target;
    XData io_in_bits_resp_in_0_s2_full_pred_2_offsets_0;
    XData io_in_bits_resp_in_0_s2_full_pred_2_offsets_1;
    XData io_in_bits_resp_in_0_s2_full_pred_2_fallThroughAddr;
    XData io_in_bits_resp_in_0_s2_full_pred_2_is_jalr;
    XData io_in_bits_resp_in_0_s2_full_pred_2_is_call;
    XData io_in_bits_resp_in_0_s2_full_pred_2_is_ret;
    XData io_in_bits_resp_in_0_s2_full_pred_2_last_may_be_rvi_call;
    XData io_in_bits_resp_in_0_s2_full_pred_2_is_br_sharing;
    XData io_in_bits_resp_in_0_s2_full_pred_2_hit;
    XData io_in_bits_resp_in_0_s2_full_pred_3_br_taken_mask_0;
    XData io_in_bits_resp_in_0_s2_full_pred_3_br_taken_mask_1;
    XData io_in_bits_resp_in_0_s2_full_pred_3_slot_valids_0;
    XData io_in_bits_resp_in_0_s2_full_pred_3_slot_valids_1;
    XData io_in_bits_resp_in_0_s2_full_pred_3_targets_0;
    XData io_in_bits_resp_in_0_s2_full_pred_3_targets_1;
    XData io_in_bits_resp_in_0_s2_full_pred_3_jalr_target;
    XData io_in_bits_resp_in_0_s2_full_pred_3_offsets_0;
    XData io_in_bits_resp_in_0_s2_full_pred_3_offsets_1;
    XData io_in_bits_resp_in_0_s2_full_pred_3_fallThroughAddr;
    XData io_in_bits_resp_in_0_s2_full_pred_3_fallThroughErr;
    XData io_in_bits_resp_in_0_s2_full_pred_3_is_br_sharing;
    XData io_in_bits_resp_in_0_s2_full_pred_3_hit;
    XData io_in_bits_resp_in_0_s3_full_pred_0_br_taken_mask_0;
    XData io_in_bits_resp_in_0_s3_full_pred_0_br_taken_mask_1;
    XData io_in_bits_resp_in_0_s3_full_pred_0_slot_valids_0;
    XData io_in_bits_resp_in_0_s3_full_pred_0_slot_valids_1;
    XData io_in_bits_resp_in_0_s3_full_pred_0_targets_0;
    XData io_in_bits_resp_in_0_s3_full_pred_0_targets_1;
    XData io_in_bits_resp_in_0_s3_full_pred_0_jalr_target;
    XData io_in_bits_resp_in_0_s3_full_pred_0_fallThroughAddr;
    XData io_in_bits_resp_in_0_s3_full_pred_0_fallThroughErr;
    XData io_in_bits_resp_in_0_s3_full_pred_0_multiHit;
    XData io_in_bits_resp_in_0_s3_full_pred_0_is_br_sharing;
    XData io_in_bits_resp_in_0_s3_full_pred_0_hit;
    XData io_in_bits_resp_in_0_s3_full_pred_1_br_taken_mask_0;
    XData io_in_bits_resp_in_0_s3_full_pred_1_br_taken_mask_1;
    XData io_in_bits_resp_in_0_s3_full_pred_1_slot_valids_0;
    XData io_in_bits_resp_in_0_s3_full_pred_1_slot_valids_1;
    XData io_in_bits_resp_in_0_s3_full_pred_1_targets_0;
    XData io_in_bits_resp_in_0_s3_full_pred_1_targets_1;
    XData io_in_bits_resp_in_0_s3_full_pred_1_jalr_target;
    XData io_in_bits_resp_in_0_s3_full_pred_1_fallThroughAddr;
    XData io_in_bits_resp_in_0_s3_full_pred_1_fallThroughErr;
    XData io_in_bits_resp_in_0_s3_full_pred_1_multiHit;
    XData io_in_bits_resp_in_0_s3_full_pred_1_is_br_sharing;
    XData io_in_bits_resp_in_0_s3_full_pred_1_hit;
    XData io_in_bits_resp_in_0_s3_full_pred_2_br_taken_mask_0;
    XData io_in_bits_resp_in_0_s3_full_pred_2_br_taken_mask_1;
    XData io_in_bits_resp_in_0_s3_full_pred_2_slot_valids_0;
    XData io_in_bits_resp_in_0_s3_full_pred_2_slot_valids_1;
    XData io_in_bits_resp_in_0_s3_full_pred_2_targets_0;
    XData io_in_bits_resp_in_0_s3_full_pred_2_targets_1;
    XData io_in_bits_resp_in_0_s3_full_pred_2_jalr_target;
    XData io_in_bits_resp_in_0_s3_full_pred_2_fallThroughAddr;
    XData io_in_bits_resp_in_0_s3_full_pred_2_fallThroughErr;
    XData io_in_bits_resp_in_0_s3_full_pred_2_multiHit;
    XData io_in_bits_resp_in_0_s3_full_pred_2_is_jalr;
    XData io_in_bits_resp_in_0_s3_full_pred_2_is_call;
    XData io_in_bits_resp_in_0_s3_full_pred_2_is_ret;
    XData io_in_bits_resp_in_0_s3_full_pred_2_is_br_sharing;
    XData io_in_bits_resp_in_0_s3_full_pred_2_hit;
    XData io_in_bits_resp_in_0_s3_full_pred_3_br_taken_mask_0;
    XData io_in_bits_resp_in_0_s3_full_pred_3_br_taken_mask_1;
    XData io_in_bits_resp_in_0_s3_full_pred_3_slot_valids_0;
    XData io_in_bits_resp_in_0_s3_full_pred_3_slot_valids_1;
    XData io_in_bits_resp_in_0_s3_full_pred_3_targets_0;
    XData io_in_bits_resp_in_0_s3_full_pred_3_targets_1;
    XData io_in_bits_resp_in_0_s3_full_pred_3_jalr_target;
    XData io_in_bits_resp_in_0_s3_full_pred_3_offsets_0;
    XData io_in_bits_resp_in_0_s3_full_pred_3_offsets_1;
    XData io_in_bits_resp_in_0_s3_full_pred_3_fallThroughAddr;
    XData io_in_bits_resp_in_0_s3_full_pred_3_fallThroughErr;
    XData io_in_bits_resp_in_0_s3_full_pred_3_multiHit;
    XData io_in_bits_resp_in_0_s3_full_pred_3_is_br_sharing;
    XData io_in_bits_resp_in_0_s3_full_pred_3_hit;
    XData io_in_bits_resp_in_0_last_stage_ftb_entry_isCall;
    XData io_in_bits_resp_in_0_last_stage_ftb_entry_isRet;
    XData io_in_bits_resp_in_0_last_stage_ftb_entry_isJalr;
    XData io_in_bits_resp_in_0_last_stage_ftb_entry_valid;
    XData io_in_bits_resp_in_0_last_stage_ftb_entry_brSlots_0_offset;
    XData io_in_bits_resp_in_0_last_stage_ftb_entry_brSlots_0_sharing;
    XData io_in_bits_resp_in_0_last_stage_ftb_entry_brSlots_0_valid;
    XData io_in_bits_resp_in_0_last_stage_ftb_entry_brSlots_0_lower;
    XData io_in_bits_resp_in_0_last_stage_ftb_entry_brSlots_0_tarStat;
    XData io_in_bits_resp_in_0_last_stage_ftb_entry_tailSlot_offset;
    XData io_in_bits_resp_in_0_last_stage_ftb_entry_tailSlot_sharing;
    XData io_in_bits_resp_in_0_last_stage_ftb_entry_tailSlot_valid;
    XData io_in_bits_resp_in_0_last_stage_ftb_entry_tailSlot_lower;
    XData io_in_bits_resp_in_0_last_stage_ftb_entry_tailSlot_tarStat;
    XData io_in_bits_resp_in_0_last_stage_ftb_entry_pftAddr;
    XData io_in_bits_resp_in_0_last_stage_ftb_entry_carry;
    XData io_in_bits_resp_in_0_last_stage_ftb_entry_last_may_be_rvi_call;
    XData io_in_bits_resp_in_0_last_stage_ftb_entry_always_taken_0;
    XData io_in_bits_resp_in_0_last_stage_ftb_entry_always_taken_1;
    XData io_out_s2_pc_0;
    XData io_out_s2_pc_1;
    XData io_out_s2_pc_2;
    XData io_out_s2_pc_3;
    XData io_out_s2_full_pred_0_br_taken_mask_0;
    XData io_out_s2_full_pred_0_br_taken_mask_1;
    XData io_out_s2_full_pred_0_slot_valids_0;
    XData io_out_s2_full_pred_0_slot_valids_1;
    XData io_out_s2_full_pred_0_targets_0;
    XData io_out_s2_full_pred_0_targets_1;
    XData io_out_s2_full_pred_0_offsets_0;
    XData io_out_s2_full_pred_0_offsets_1;
    XData io_out_s2_full_pred_0_fallThroughAddr;
    XData io_out_s2_full_pred_0_is_br_sharing;
    XData io_out_s2_full_pred_0_hit;
    XData io_out_s2_full_pred_1_br_taken_mask_0;
    XData io_out_s2_full_pred_1_br_taken_mask_1;
    XData io_out_s2_full_pred_1_slot_valids_0;
    XData io_out_s2_full_pred_1_slot_valids_1;
    XData io_out_s2_full_pred_1_targets_0;
    XData io_out_s2_full_pred_1_targets_1;
    XData io_out_s2_full_pred_1_offsets_0;
    XData io_out_s2_full_pred_1_offsets_1;
    XData io_out_s2_full_pred_1_fallThroughAddr;
    XData io_out_s2_full_pred_1_is_br_sharing;
    XData io_out_s2_full_pred_1_hit;
    XData io_out_s2_full_pred_2_br_taken_mask_0;
    XData io_out_s2_full_pred_2_br_taken_mask_1;
    XData io_out_s2_full_pred_2_slot_valids_0;
    XData io_out_s2_full_pred_2_slot_valids_1;
    XData io_out_s2_full_pred_2_targets_0;
    XData io_out_s2_full_pred_2_targets_1;
    XData io_out_s2_full_pred_2_offsets_0;
    XData io_out_s2_full_pred_2_offsets_1;
    XData io_out_s2_full_pred_2_fallThroughAddr;
    XData io_out_s2_full_pred_2_is_br_sharing;
    XData io_out_s2_full_pred_2_hit;
    XData io_out_s2_full_pred_3_br_taken_mask_0;
    XData io_out_s2_full_pred_3_br_taken_mask_1;
    XData io_out_s2_full_pred_3_slot_valids_0;
    XData io_out_s2_full_pred_3_slot_valids_1;
    XData io_out_s2_full_pred_3_targets_0;
    XData io_out_s2_full_pred_3_targets_1;
    XData io_out_s2_full_pred_3_offsets_0;
    XData io_out_s2_full_pred_3_offsets_1;
    XData io_out_s2_full_pred_3_fallThroughAddr;
    XData io_out_s2_full_pred_3_fallThroughErr;
    XData io_out_s2_full_pred_3_is_br_sharing;
    XData io_out_s2_full_pred_3_hit;
    XData io_out_s3_pc_0;
    XData io_out_s3_pc_1;
    XData io_out_s3_pc_2;
    XData io_out_s3_pc_3;
    XData io_out_s3_full_pred_0_br_taken_mask_0;
    XData io_out_s3_full_pred_0_br_taken_mask_1;
    XData io_out_s3_full_pred_0_slot_valids_0;
    XData io_out_s3_full_pred_0_slot_valids_1;
    XData io_out_s3_full_pred_0_targets_0;
    XData io_out_s3_full_pred_0_targets_1;
    XData io_out_s3_full_pred_0_fallThroughAddr;
    XData io_out_s3_full_pred_0_fallThroughErr;
    XData io_out_s3_full_pred_0_multiHit;
    XData io_out_s3_full_pred_0_is_br_sharing;
    XData io_out_s3_full_pred_0_hit;
    XData io_out_s3_full_pred_1_br_taken_mask_0;
    XData io_out_s3_full_pred_1_br_taken_mask_1;
    XData io_out_s3_full_pred_1_slot_valids_0;
    XData io_out_s3_full_pred_1_slot_valids_1;
    XData io_out_s3_full_pred_1_targets_0;
    XData io_out_s3_full_pred_1_targets_1;
    XData io_out_s3_full_pred_1_fallThroughAddr;
    XData io_out_s3_full_pred_1_fallThroughErr;
    XData io_out_s3_full_pred_1_multiHit;
    XData io_out_s3_full_pred_1_is_br_sharing;
    XData io_out_s3_full_pred_1_hit;
    XData io_out_s3_full_pred_2_br_taken_mask_0;
    XData io_out_s3_full_pred_2_br_taken_mask_1;
    XData io_out_s3_full_pred_2_slot_valids_0;
    XData io_out_s3_full_pred_2_slot_valids_1;
    XData io_out_s3_full_pred_2_targets_0;
    XData io_out_s3_full_pred_2_targets_1;
    XData io_out_s3_full_pred_2_fallThroughAddr;
    XData io_out_s3_full_pred_2_fallThroughErr;
    XData io_out_s3_full_pred_2_multiHit;
    XData io_out_s3_full_pred_2_is_br_sharing;
    XData io_out_s3_full_pred_2_hit;
    XData io_out_s3_full_pred_3_br_taken_mask_0;
    XData io_out_s3_full_pred_3_br_taken_mask_1;
    XData io_out_s3_full_pred_3_slot_valids_0;
    XData io_out_s3_full_pred_3_slot_valids_1;
    XData io_out_s3_full_pred_3_targets_0;
    XData io_out_s3_full_pred_3_targets_1;
    XData io_out_s3_full_pred_3_offsets_0;
    XData io_out_s3_full_pred_3_offsets_1;
    XData io_out_s3_full_pred_3_fallThroughAddr;
    XData io_out_s3_full_pred_3_fallThroughErr;
    XData io_out_s3_full_pred_3_multiHit;
    XData io_out_s3_full_pred_3_is_br_sharing;
    XData io_out_s3_full_pred_3_hit;
    XData io_out_last_stage_meta;
    XData io_out_last_stage_spec_info_ssp;
    XData io_out_last_stage_spec_info_sctr;
    XData io_out_last_stage_spec_info_TOSW_flag;
    XData io_out_last_stage_spec_info_TOSW_value;
    XData io_out_last_stage_spec_info_TOSR_flag;
    XData io_out_last_stage_spec_info_TOSR_value;
    XData io_out_last_stage_spec_info_NOS_flag;
    XData io_out_last_stage_spec_info_NOS_value;
    XData io_out_last_stage_spec_info_topAddr;
    XData io_out_last_stage_ftb_entry_isCall;
    XData io_out_last_stage_ftb_entry_isRet;
    XData io_out_last_stage_ftb_entry_isJalr;
    XData io_out_last_stage_ftb_entry_valid;
    XData io_out_last_stage_ftb_entry_brSlots_0_offset;
    XData io_out_last_stage_ftb_entry_brSlots_0_sharing;
    XData io_out_last_stage_ftb_entry_brSlots_0_valid;
    XData io_out_last_stage_ftb_entry_brSlots_0_lower;
    XData io_out_last_stage_ftb_entry_brSlots_0_tarStat;
    XData io_out_last_stage_ftb_entry_tailSlot_offset;
    XData io_out_last_stage_ftb_entry_tailSlot_sharing;
    XData io_out_last_stage_ftb_entry_tailSlot_valid;
    XData io_out_last_stage_ftb_entry_tailSlot_lower;
    XData io_out_last_stage_ftb_entry_tailSlot_tarStat;
    XData io_out_last_stage_ftb_entry_pftAddr;
    XData io_out_last_stage_ftb_entry_carry;
    XData io_out_last_stage_ftb_entry_last_may_be_rvi_call;
    XData io_out_last_stage_ftb_entry_always_taken_0;
    XData io_out_last_stage_ftb_entry_always_taken_1;
    XData io_ctrl_ras_enable;
    XData io_s0_fire_0;
    XData io_s0_fire_1;
    XData io_s0_fire_2;
    XData io_s0_fire_3;
    XData io_s1_fire_0;
    XData io_s1_fire_1;
    XData io_s1_fire_2;
    XData io_s1_fire_3;
    XData io_s2_fire_0;
    XData io_s2_fire_1;
    XData io_s2_fire_2;
    XData io_s2_fire_3;
    XData io_s3_fire_2;
    XData io_s3_redirect_2;
    XData io_update_valid;
    XData io_update_bits_ftb_entry_isCall;
    XData io_update_bits_ftb_entry_isRet;
    XData io_update_bits_ftb_entry_tailSlot_offset;
    XData io_update_bits_ftb_entry_tailSlot_valid;
    XData io_update_bits_cfi_idx_valid;
    XData io_update_bits_cfi_idx_bits;
    XData io_update_bits_jmp_taken;
    XData io_update_bits_meta;
    XData io_redirect_valid;
    XData io_redirect_bits_level;
    XData io_redirect_bits_cfiUpdate_pc;
    XData io_redirect_bits_cfiUpdate_pd_isRVC;
    XData io_redirect_bits_cfiUpdate_pd_isCall;
    XData io_redirect_bits_cfiUpdate_pd_isRet;
    XData io_redirect_bits_cfiUpdate_ssp;
    XData io_redirect_bits_cfiUpdate_sctr;
    XData io_redirect_bits_cfiUpdate_TOSW_flag;
    XData io_redirect_bits_cfiUpdate_TOSW_value;
    XData io_redirect_bits_cfiUpdate_TOSR_flag;
    XData io_redirect_bits_cfiUpdate_TOSR_value;
    XData io_redirect_bits_cfiUpdate_NOS_flag;
    XData io_redirect_bits_cfiUpdate_NOS_value;
    XData RAS_s3_push;
    XData RAS_s3_pop;
    XData RAS_s3_pushed_in_s2;
    XData RAS_s2_spec_push;
    XData RAS_RASStack_realPush;
    XData RAS_RASStack_TOSR_value;
    XData RAS_RASStack_TOSW_value;
    XData RAS_RASStack_BOS_value;
    XData RAS_RASStack_ssp;
    XData RAS_RASStack_nsp;
    XData RAS_RASStack_spec_overflowed;
    XData RAS_RASStack_writeBypassValid;
    XData RAS_RASStack_timingTop_retAddr;
    XData RAS_RASStack_sctr;
    XData RAS_RASStack_spec_queue_0_retAddr;
    XData RAS_RASStack_spec_queue_1_retAddr;
    XData RAS_RASStack_spec_queue_2_retAddr;
    XData RAS_RASStack_spec_queue_3_retAddr;
    XData RAS_RASStack_spec_queue_4_retAddr;
    XData RAS_RASStack_spec_queue_5_retAddr;
    XData RAS_RASStack_spec_queue_6_retAddr;
    XData RAS_RASStack_spec_queue_7_retAddr;
    XData RAS_RASStack_spec_queue_8_retAddr;
    XData RAS_RASStack_spec_queue_9_retAddr;
    XData RAS_RASStack_spec_queue_10_retAddr;
    XData RAS_RASStack_spec_queue_11_retAddr;
    XData RAS_RASStack_spec_queue_12_retAddr;
    XData RAS_RASStack_spec_queue_13_retAddr;
    XData RAS_RASStack_spec_queue_14_retAddr;
    XData RAS_RASStack_spec_queue_15_retAddr;
    XData RAS_RASStack_spec_queue_16_retAddr;
    XData RAS_RASStack_spec_queue_17_retAddr;
    XData RAS_RASStack_spec_queue_18_retAddr;
    XData RAS_RASStack_spec_queue_19_retAddr;
    XData RAS_RASStack_spec_queue_20_retAddr;
    XData RAS_RASStack_spec_queue_21_retAddr;
    XData RAS_RASStack_spec_queue_22_retAddr;
    XData RAS_RASStack_spec_queue_23_retAddr;
    XData RAS_RASStack_spec_queue_24_retAddr;
    XData RAS_RASStack_spec_queue_25_retAddr;
    XData RAS_RASStack_spec_queue_26_retAddr;
    XData RAS_RASStack_spec_queue_27_retAddr;
    XData RAS_RASStack_spec_queue_28_retAddr;
    XData RAS_RASStack_spec_queue_29_retAddr;
    XData RAS_RASStack_spec_queue_30_retAddr;
    XData RAS_RASStack_spec_queue_31_retAddr;
    XData RAS_RASStack_commit_stack_0_retAddr;
    XData RAS_RASStack_commit_stack_1_retAddr;
    XData RAS_RASStack_commit_stack_2_retAddr;
    XData RAS_RASStack_commit_stack_3_retAddr;
    XData RAS_RASStack_commit_stack_4_retAddr;
    XData RAS_RASStack_commit_stack_5_retAddr;
    XData RAS_RASStack_commit_stack_6_retAddr;
    XData RAS_RASStack_commit_stack_7_retAddr;
    XData RAS_RASStack_commit_stack_8_retAddr;
    XData RAS_RASStack_commit_stack_9_retAddr;
    XData RAS_RASStack_commit_stack_10_retAddr;
    XData RAS_RASStack_commit_stack_11_retAddr;
    XData RAS_RASStack_commit_stack_12_retAddr;
    XData RAS_RASStack_commit_stack_13_retAddr;
    XData RAS_RASStack_commit_stack_14_retAddr;
    XData RAS_RASStack_commit_stack_15_retAddr;
    XData RAS_RASStack_commit_stack_0_ctr;
    XData RAS_RASStack_commit_stack_1_ctr;
    XData RAS_RASStack_commit_stack_2_ctr;
    XData RAS_RASStack_commit_stack_3_ctr;
    XData RAS_RASStack_commit_stack_4_ctr;
    XData RAS_RASStack_commit_stack_5_ctr;
    XData RAS_RASStack_commit_stack_6_ctr;
    XData RAS_RASStack_commit_stack_7_ctr;
    XData RAS_RASStack_commit_stack_8_ctr;
    XData RAS_RASStack_commit_stack_9_ctr;
    XData RAS_RASStack_commit_stack_10_ctr;
    XData RAS_RASStack_commit_stack_11_ctr;
    XData RAS_RASStack_commit_stack_12_ctr;
    XData RAS_RASStack_commit_stack_13_ctr;
    XData RAS_RASStack_commit_stack_14_ctr;
    XData RAS_RASStack_commit_stack_15_ctr;
    XData RAS_RASStack_io_spec_push_valid;
    XData RAS_RASStack_io_spec_pop_valid;
    XData RAS_RASStack_io_commit_push_valid;
    XData RAS_RASStack_io_commit_pop_valid;
    XData RAS_RASStack_io_redirect_valid;
    XData RAS_RASStack_io_redirect_isCall;
    XData RAS_RASStack_io_redirect_isRet;
    XData RAS_RASStack_io_s3_cancel;


    // Ports for binding
    XPort port;

    // Clock for DUT timing
    XClock xclk;

    // RAS
    UTRAS();
    UTRAS(int argc, char **argv);
    UTRAS(char *filename);
    UTRAS(char *filename, int argc, char **argv);
    UTRAS(std::initializer_list<const char *> args);
    ~UTRAS();

    // Funtions for DUT
    void init();
    void initClock(XData &clk);
};
