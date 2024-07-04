module RAS_top;

  wire  clock;
  wire  reset;
  wire [35:0] io_reset_vector;
  wire [40:0] io_in_bits_s0_pc_0;
  wire [40:0] io_in_bits_s0_pc_1;
  wire [40:0] io_in_bits_s0_pc_2;
  wire [40:0] io_in_bits_s0_pc_3;
  wire  io_in_bits_resp_in_0_s2_full_pred_0_br_taken_mask_0;
  wire  io_in_bits_resp_in_0_s2_full_pred_0_br_taken_mask_1;
  wire  io_in_bits_resp_in_0_s2_full_pred_0_slot_valids_0;
  wire  io_in_bits_resp_in_0_s2_full_pred_0_slot_valids_1;
  wire [40:0] io_in_bits_resp_in_0_s2_full_pred_0_targets_0;
  wire [40:0] io_in_bits_resp_in_0_s2_full_pred_0_targets_1;
  wire [40:0] io_in_bits_resp_in_0_s2_full_pred_0_jalr_target;
  wire [3:0] io_in_bits_resp_in_0_s2_full_pred_0_offsets_0;
  wire [3:0] io_in_bits_resp_in_0_s2_full_pred_0_offsets_1;
  wire [40:0] io_in_bits_resp_in_0_s2_full_pred_0_fallThroughAddr;
  wire  io_in_bits_resp_in_0_s2_full_pred_0_is_br_sharing;
  wire  io_in_bits_resp_in_0_s2_full_pred_0_hit;
  wire  io_in_bits_resp_in_0_s2_full_pred_1_br_taken_mask_0;
  wire  io_in_bits_resp_in_0_s2_full_pred_1_br_taken_mask_1;
  wire  io_in_bits_resp_in_0_s2_full_pred_1_slot_valids_0;
  wire  io_in_bits_resp_in_0_s2_full_pred_1_slot_valids_1;
  wire [40:0] io_in_bits_resp_in_0_s2_full_pred_1_targets_0;
  wire [40:0] io_in_bits_resp_in_0_s2_full_pred_1_targets_1;
  wire [40:0] io_in_bits_resp_in_0_s2_full_pred_1_jalr_target;
  wire [3:0] io_in_bits_resp_in_0_s2_full_pred_1_offsets_0;
  wire [3:0] io_in_bits_resp_in_0_s2_full_pred_1_offsets_1;
  wire [40:0] io_in_bits_resp_in_0_s2_full_pred_1_fallThroughAddr;
  wire  io_in_bits_resp_in_0_s2_full_pred_1_is_br_sharing;
  wire  io_in_bits_resp_in_0_s2_full_pred_1_hit;
  wire  io_in_bits_resp_in_0_s2_full_pred_2_br_taken_mask_0;
  wire  io_in_bits_resp_in_0_s2_full_pred_2_br_taken_mask_1;
  wire  io_in_bits_resp_in_0_s2_full_pred_2_slot_valids_0;
  wire  io_in_bits_resp_in_0_s2_full_pred_2_slot_valids_1;
  wire [40:0] io_in_bits_resp_in_0_s2_full_pred_2_targets_0;
  wire [40:0] io_in_bits_resp_in_0_s2_full_pred_2_targets_1;
  wire [40:0] io_in_bits_resp_in_0_s2_full_pred_2_jalr_target;
  wire [3:0] io_in_bits_resp_in_0_s2_full_pred_2_offsets_0;
  wire [3:0] io_in_bits_resp_in_0_s2_full_pred_2_offsets_1;
  wire [40:0] io_in_bits_resp_in_0_s2_full_pred_2_fallThroughAddr;
  wire  io_in_bits_resp_in_0_s2_full_pred_2_is_jalr;
  wire  io_in_bits_resp_in_0_s2_full_pred_2_is_call;
  wire  io_in_bits_resp_in_0_s2_full_pred_2_is_ret;
  wire  io_in_bits_resp_in_0_s2_full_pred_2_last_may_be_rvi_call;
  wire  io_in_bits_resp_in_0_s2_full_pred_2_is_br_sharing;
  wire  io_in_bits_resp_in_0_s2_full_pred_2_hit;
  wire  io_in_bits_resp_in_0_s2_full_pred_3_br_taken_mask_0;
  wire  io_in_bits_resp_in_0_s2_full_pred_3_br_taken_mask_1;
  wire  io_in_bits_resp_in_0_s2_full_pred_3_slot_valids_0;
  wire  io_in_bits_resp_in_0_s2_full_pred_3_slot_valids_1;
  wire [40:0] io_in_bits_resp_in_0_s2_full_pred_3_targets_0;
  wire [40:0] io_in_bits_resp_in_0_s2_full_pred_3_targets_1;
  wire [40:0] io_in_bits_resp_in_0_s2_full_pred_3_jalr_target;
  wire [3:0] io_in_bits_resp_in_0_s2_full_pred_3_offsets_0;
  wire [3:0] io_in_bits_resp_in_0_s2_full_pred_3_offsets_1;
  wire [40:0] io_in_bits_resp_in_0_s2_full_pred_3_fallThroughAddr;
  wire  io_in_bits_resp_in_0_s2_full_pred_3_fallThroughErr;
  wire  io_in_bits_resp_in_0_s2_full_pred_3_is_br_sharing;
  wire  io_in_bits_resp_in_0_s2_full_pred_3_hit;
  wire  io_in_bits_resp_in_0_s3_full_pred_0_br_taken_mask_0;
  wire  io_in_bits_resp_in_0_s3_full_pred_0_br_taken_mask_1;
  wire  io_in_bits_resp_in_0_s3_full_pred_0_slot_valids_0;
  wire  io_in_bits_resp_in_0_s3_full_pred_0_slot_valids_1;
  wire [40:0] io_in_bits_resp_in_0_s3_full_pred_0_targets_0;
  wire [40:0] io_in_bits_resp_in_0_s3_full_pred_0_targets_1;
  wire [40:0] io_in_bits_resp_in_0_s3_full_pred_0_jalr_target;
  wire [40:0] io_in_bits_resp_in_0_s3_full_pred_0_fallThroughAddr;
  wire  io_in_bits_resp_in_0_s3_full_pred_0_fallThroughErr;
  wire  io_in_bits_resp_in_0_s3_full_pred_0_multiHit;
  wire  io_in_bits_resp_in_0_s3_full_pred_0_is_br_sharing;
  wire  io_in_bits_resp_in_0_s3_full_pred_0_hit;
  wire  io_in_bits_resp_in_0_s3_full_pred_1_br_taken_mask_0;
  wire  io_in_bits_resp_in_0_s3_full_pred_1_br_taken_mask_1;
  wire  io_in_bits_resp_in_0_s3_full_pred_1_slot_valids_0;
  wire  io_in_bits_resp_in_0_s3_full_pred_1_slot_valids_1;
  wire [40:0] io_in_bits_resp_in_0_s3_full_pred_1_targets_0;
  wire [40:0] io_in_bits_resp_in_0_s3_full_pred_1_targets_1;
  wire [40:0] io_in_bits_resp_in_0_s3_full_pred_1_jalr_target;
  wire [40:0] io_in_bits_resp_in_0_s3_full_pred_1_fallThroughAddr;
  wire  io_in_bits_resp_in_0_s3_full_pred_1_fallThroughErr;
  wire  io_in_bits_resp_in_0_s3_full_pred_1_multiHit;
  wire  io_in_bits_resp_in_0_s3_full_pred_1_is_br_sharing;
  wire  io_in_bits_resp_in_0_s3_full_pred_1_hit;
  wire  io_in_bits_resp_in_0_s3_full_pred_2_br_taken_mask_0;
  wire  io_in_bits_resp_in_0_s3_full_pred_2_br_taken_mask_1;
  wire  io_in_bits_resp_in_0_s3_full_pred_2_slot_valids_0;
  wire  io_in_bits_resp_in_0_s3_full_pred_2_slot_valids_1;
  wire [40:0] io_in_bits_resp_in_0_s3_full_pred_2_targets_0;
  wire [40:0] io_in_bits_resp_in_0_s3_full_pred_2_targets_1;
  wire [40:0] io_in_bits_resp_in_0_s3_full_pred_2_jalr_target;
  wire [40:0] io_in_bits_resp_in_0_s3_full_pred_2_fallThroughAddr;
  wire  io_in_bits_resp_in_0_s3_full_pred_2_fallThroughErr;
  wire  io_in_bits_resp_in_0_s3_full_pred_2_multiHit;
  wire  io_in_bits_resp_in_0_s3_full_pred_2_is_jalr;
  wire  io_in_bits_resp_in_0_s3_full_pred_2_is_call;
  wire  io_in_bits_resp_in_0_s3_full_pred_2_is_ret;
  wire  io_in_bits_resp_in_0_s3_full_pred_2_is_br_sharing;
  wire  io_in_bits_resp_in_0_s3_full_pred_2_hit;
  wire  io_in_bits_resp_in_0_s3_full_pred_3_br_taken_mask_0;
  wire  io_in_bits_resp_in_0_s3_full_pred_3_br_taken_mask_1;
  wire  io_in_bits_resp_in_0_s3_full_pred_3_slot_valids_0;
  wire  io_in_bits_resp_in_0_s3_full_pred_3_slot_valids_1;
  wire [40:0] io_in_bits_resp_in_0_s3_full_pred_3_targets_0;
  wire [40:0] io_in_bits_resp_in_0_s3_full_pred_3_targets_1;
  wire [40:0] io_in_bits_resp_in_0_s3_full_pred_3_jalr_target;
  wire [3:0] io_in_bits_resp_in_0_s3_full_pred_3_offsets_0;
  wire [3:0] io_in_bits_resp_in_0_s3_full_pred_3_offsets_1;
  wire [40:0] io_in_bits_resp_in_0_s3_full_pred_3_fallThroughAddr;
  wire  io_in_bits_resp_in_0_s3_full_pred_3_fallThroughErr;
  wire  io_in_bits_resp_in_0_s3_full_pred_3_multiHit;
  wire  io_in_bits_resp_in_0_s3_full_pred_3_is_br_sharing;
  wire  io_in_bits_resp_in_0_s3_full_pred_3_hit;
  wire  io_in_bits_resp_in_0_last_stage_ftb_entry_isCall;
  wire  io_in_bits_resp_in_0_last_stage_ftb_entry_isRet;
  wire  io_in_bits_resp_in_0_last_stage_ftb_entry_isJalr;
  wire  io_in_bits_resp_in_0_last_stage_ftb_entry_valid;
  wire [3:0] io_in_bits_resp_in_0_last_stage_ftb_entry_brSlots_0_offset;
  wire  io_in_bits_resp_in_0_last_stage_ftb_entry_brSlots_0_sharing;
  wire  io_in_bits_resp_in_0_last_stage_ftb_entry_brSlots_0_valid;
  wire [11:0] io_in_bits_resp_in_0_last_stage_ftb_entry_brSlots_0_lower;
  wire [1:0] io_in_bits_resp_in_0_last_stage_ftb_entry_brSlots_0_tarStat;
  wire [3:0] io_in_bits_resp_in_0_last_stage_ftb_entry_tailSlot_offset;
  wire  io_in_bits_resp_in_0_last_stage_ftb_entry_tailSlot_sharing;
  wire  io_in_bits_resp_in_0_last_stage_ftb_entry_tailSlot_valid;
  wire [19:0] io_in_bits_resp_in_0_last_stage_ftb_entry_tailSlot_lower;
  wire [1:0] io_in_bits_resp_in_0_last_stage_ftb_entry_tailSlot_tarStat;
  wire [3:0] io_in_bits_resp_in_0_last_stage_ftb_entry_pftAddr;
  wire  io_in_bits_resp_in_0_last_stage_ftb_entry_carry;
  wire  io_in_bits_resp_in_0_last_stage_ftb_entry_last_may_be_rvi_call;
  wire  io_in_bits_resp_in_0_last_stage_ftb_entry_always_taken_0;
  wire  io_in_bits_resp_in_0_last_stage_ftb_entry_always_taken_1;
  wire [40:0] io_out_s2_pc_0;
  wire [40:0] io_out_s2_pc_1;
  wire [40:0] io_out_s2_pc_2;
  wire [40:0] io_out_s2_pc_3;
  wire  io_out_s2_full_pred_0_br_taken_mask_0;
  wire  io_out_s2_full_pred_0_br_taken_mask_1;
  wire  io_out_s2_full_pred_0_slot_valids_0;
  wire  io_out_s2_full_pred_0_slot_valids_1;
  wire [40:0] io_out_s2_full_pred_0_targets_0;
  wire [40:0] io_out_s2_full_pred_0_targets_1;
  wire [3:0] io_out_s2_full_pred_0_offsets_0;
  wire [3:0] io_out_s2_full_pred_0_offsets_1;
  wire [40:0] io_out_s2_full_pred_0_fallThroughAddr;
  wire  io_out_s2_full_pred_0_is_br_sharing;
  wire  io_out_s2_full_pred_0_hit;
  wire  io_out_s2_full_pred_1_br_taken_mask_0;
  wire  io_out_s2_full_pred_1_br_taken_mask_1;
  wire  io_out_s2_full_pred_1_slot_valids_0;
  wire  io_out_s2_full_pred_1_slot_valids_1;
  wire [40:0] io_out_s2_full_pred_1_targets_0;
  wire [40:0] io_out_s2_full_pred_1_targets_1;
  wire [3:0] io_out_s2_full_pred_1_offsets_0;
  wire [3:0] io_out_s2_full_pred_1_offsets_1;
  wire [40:0] io_out_s2_full_pred_1_fallThroughAddr;
  wire  io_out_s2_full_pred_1_is_br_sharing;
  wire  io_out_s2_full_pred_1_hit;
  wire  io_out_s2_full_pred_2_br_taken_mask_0;
  wire  io_out_s2_full_pred_2_br_taken_mask_1;
  wire  io_out_s2_full_pred_2_slot_valids_0;
  wire  io_out_s2_full_pred_2_slot_valids_1;
  wire [40:0] io_out_s2_full_pred_2_targets_0;
  wire [40:0] io_out_s2_full_pred_2_targets_1;
  wire [3:0] io_out_s2_full_pred_2_offsets_0;
  wire [3:0] io_out_s2_full_pred_2_offsets_1;
  wire [40:0] io_out_s2_full_pred_2_fallThroughAddr;
  wire  io_out_s2_full_pred_2_is_br_sharing;
  wire  io_out_s2_full_pred_2_hit;
  wire  io_out_s2_full_pred_3_br_taken_mask_0;
  wire  io_out_s2_full_pred_3_br_taken_mask_1;
  wire  io_out_s2_full_pred_3_slot_valids_0;
  wire  io_out_s2_full_pred_3_slot_valids_1;
  wire [40:0] io_out_s2_full_pred_3_targets_0;
  wire [40:0] io_out_s2_full_pred_3_targets_1;
  wire [3:0] io_out_s2_full_pred_3_offsets_0;
  wire [3:0] io_out_s2_full_pred_3_offsets_1;
  wire [40:0] io_out_s2_full_pred_3_fallThroughAddr;
  wire  io_out_s2_full_pred_3_fallThroughErr;
  wire  io_out_s2_full_pred_3_is_br_sharing;
  wire  io_out_s2_full_pred_3_hit;
  wire [40:0] io_out_s3_pc_0;
  wire [40:0] io_out_s3_pc_1;
  wire [40:0] io_out_s3_pc_2;
  wire [40:0] io_out_s3_pc_3;
  wire  io_out_s3_full_pred_0_br_taken_mask_0;
  wire  io_out_s3_full_pred_0_br_taken_mask_1;
  wire  io_out_s3_full_pred_0_slot_valids_0;
  wire  io_out_s3_full_pred_0_slot_valids_1;
  wire [40:0] io_out_s3_full_pred_0_targets_0;
  wire [40:0] io_out_s3_full_pred_0_targets_1;
  wire [40:0] io_out_s3_full_pred_0_fallThroughAddr;
  wire  io_out_s3_full_pred_0_fallThroughErr;
  wire  io_out_s3_full_pred_0_multiHit;
  wire  io_out_s3_full_pred_0_is_br_sharing;
  wire  io_out_s3_full_pred_0_hit;
  wire  io_out_s3_full_pred_1_br_taken_mask_0;
  wire  io_out_s3_full_pred_1_br_taken_mask_1;
  wire  io_out_s3_full_pred_1_slot_valids_0;
  wire  io_out_s3_full_pred_1_slot_valids_1;
  wire [40:0] io_out_s3_full_pred_1_targets_0;
  wire [40:0] io_out_s3_full_pred_1_targets_1;
  wire [40:0] io_out_s3_full_pred_1_fallThroughAddr;
  wire  io_out_s3_full_pred_1_fallThroughErr;
  wire  io_out_s3_full_pred_1_multiHit;
  wire  io_out_s3_full_pred_1_is_br_sharing;
  wire  io_out_s3_full_pred_1_hit;
  wire  io_out_s3_full_pred_2_br_taken_mask_0;
  wire  io_out_s3_full_pred_2_br_taken_mask_1;
  wire  io_out_s3_full_pred_2_slot_valids_0;
  wire  io_out_s3_full_pred_2_slot_valids_1;
  wire [40:0] io_out_s3_full_pred_2_targets_0;
  wire [40:0] io_out_s3_full_pred_2_targets_1;
  wire [40:0] io_out_s3_full_pred_2_fallThroughAddr;
  wire  io_out_s3_full_pred_2_fallThroughErr;
  wire  io_out_s3_full_pred_2_multiHit;
  wire  io_out_s3_full_pred_2_is_br_sharing;
  wire  io_out_s3_full_pred_2_hit;
  wire  io_out_s3_full_pred_3_br_taken_mask_0;
  wire  io_out_s3_full_pred_3_br_taken_mask_1;
  wire  io_out_s3_full_pred_3_slot_valids_0;
  wire  io_out_s3_full_pred_3_slot_valids_1;
  wire [40:0] io_out_s3_full_pred_3_targets_0;
  wire [40:0] io_out_s3_full_pred_3_targets_1;
  wire [3:0] io_out_s3_full_pred_3_offsets_0;
  wire [3:0] io_out_s3_full_pred_3_offsets_1;
  wire [40:0] io_out_s3_full_pred_3_fallThroughAddr;
  wire  io_out_s3_full_pred_3_fallThroughErr;
  wire  io_out_s3_full_pred_3_multiHit;
  wire  io_out_s3_full_pred_3_is_br_sharing;
  wire  io_out_s3_full_pred_3_hit;
  wire [250:0] io_out_last_stage_meta;
  wire [3:0] io_out_last_stage_spec_info_ssp;
  wire [2:0] io_out_last_stage_spec_info_sctr;
  wire  io_out_last_stage_spec_info_TOSW_flag;
  wire [4:0] io_out_last_stage_spec_info_TOSW_value;
  wire  io_out_last_stage_spec_info_TOSR_flag;
  wire [4:0] io_out_last_stage_spec_info_TOSR_value;
  wire  io_out_last_stage_spec_info_NOS_flag;
  wire [4:0] io_out_last_stage_spec_info_NOS_value;
  wire [40:0] io_out_last_stage_spec_info_topAddr;
  wire  io_out_last_stage_ftb_entry_isCall;
  wire  io_out_last_stage_ftb_entry_isRet;
  wire  io_out_last_stage_ftb_entry_isJalr;
  wire  io_out_last_stage_ftb_entry_valid;
  wire [3:0] io_out_last_stage_ftb_entry_brSlots_0_offset;
  wire  io_out_last_stage_ftb_entry_brSlots_0_sharing;
  wire  io_out_last_stage_ftb_entry_brSlots_0_valid;
  wire [11:0] io_out_last_stage_ftb_entry_brSlots_0_lower;
  wire [1:0] io_out_last_stage_ftb_entry_brSlots_0_tarStat;
  wire [3:0] io_out_last_stage_ftb_entry_tailSlot_offset;
  wire  io_out_last_stage_ftb_entry_tailSlot_sharing;
  wire  io_out_last_stage_ftb_entry_tailSlot_valid;
  wire [19:0] io_out_last_stage_ftb_entry_tailSlot_lower;
  wire [1:0] io_out_last_stage_ftb_entry_tailSlot_tarStat;
  wire [3:0] io_out_last_stage_ftb_entry_pftAddr;
  wire  io_out_last_stage_ftb_entry_carry;
  wire  io_out_last_stage_ftb_entry_last_may_be_rvi_call;
  wire  io_out_last_stage_ftb_entry_always_taken_0;
  wire  io_out_last_stage_ftb_entry_always_taken_1;
  wire  io_ctrl_ras_enable;
  wire  io_s0_fire_0;
  wire  io_s0_fire_1;
  wire  io_s0_fire_2;
  wire  io_s0_fire_3;
  wire  io_s1_fire_0;
  wire  io_s1_fire_1;
  wire  io_s1_fire_2;
  wire  io_s1_fire_3;
  wire  io_s2_fire_0;
  wire  io_s2_fire_1;
  wire  io_s2_fire_2;
  wire  io_s2_fire_3;
  wire  io_s3_fire_2;
  wire  io_s3_redirect_2;
  wire  io_update_valid;
  wire  io_update_bits_ftb_entry_isCall;
  wire  io_update_bits_ftb_entry_isRet;
  wire [3:0] io_update_bits_ftb_entry_tailSlot_offset;
  wire  io_update_bits_ftb_entry_tailSlot_valid;
  wire  io_update_bits_cfi_idx_valid;
  wire [3:0] io_update_bits_cfi_idx_bits;
  wire  io_update_bits_jmp_taken;
  wire [250:0] io_update_bits_meta;
  wire  io_redirect_valid;
  wire  io_redirect_bits_level;
  wire [40:0] io_redirect_bits_cfiUpdate_pc;
  wire  io_redirect_bits_cfiUpdate_pd_isRVC;
  wire  io_redirect_bits_cfiUpdate_pd_isCall;
  wire  io_redirect_bits_cfiUpdate_pd_isRet;
  wire [3:0] io_redirect_bits_cfiUpdate_ssp;
  wire [1:0] io_redirect_bits_cfiUpdate_sctr;
  wire  io_redirect_bits_cfiUpdate_TOSW_flag;
  wire [4:0] io_redirect_bits_cfiUpdate_TOSW_value;
  wire  io_redirect_bits_cfiUpdate_TOSR_flag;
  wire [4:0] io_redirect_bits_cfiUpdate_TOSR_value;
  wire  io_redirect_bits_cfiUpdate_NOS_flag;
  wire [4:0] io_redirect_bits_cfiUpdate_NOS_value;


RAS RAS (
    .clock(clock),
    .reset(reset),
    .io_reset_vector(io_reset_vector),
    .io_in_bits_s0_pc_0(io_in_bits_s0_pc_0),
    .io_in_bits_s0_pc_1(io_in_bits_s0_pc_1),
    .io_in_bits_s0_pc_2(io_in_bits_s0_pc_2),
    .io_in_bits_s0_pc_3(io_in_bits_s0_pc_3),
    .io_in_bits_resp_in_0_s2_full_pred_0_br_taken_mask_0(io_in_bits_resp_in_0_s2_full_pred_0_br_taken_mask_0),
    .io_in_bits_resp_in_0_s2_full_pred_0_br_taken_mask_1(io_in_bits_resp_in_0_s2_full_pred_0_br_taken_mask_1),
    .io_in_bits_resp_in_0_s2_full_pred_0_slot_valids_0(io_in_bits_resp_in_0_s2_full_pred_0_slot_valids_0),
    .io_in_bits_resp_in_0_s2_full_pred_0_slot_valids_1(io_in_bits_resp_in_0_s2_full_pred_0_slot_valids_1),
    .io_in_bits_resp_in_0_s2_full_pred_0_targets_0(io_in_bits_resp_in_0_s2_full_pred_0_targets_0),
    .io_in_bits_resp_in_0_s2_full_pred_0_targets_1(io_in_bits_resp_in_0_s2_full_pred_0_targets_1),
    .io_in_bits_resp_in_0_s2_full_pred_0_jalr_target(io_in_bits_resp_in_0_s2_full_pred_0_jalr_target),
    .io_in_bits_resp_in_0_s2_full_pred_0_offsets_0(io_in_bits_resp_in_0_s2_full_pred_0_offsets_0),
    .io_in_bits_resp_in_0_s2_full_pred_0_offsets_1(io_in_bits_resp_in_0_s2_full_pred_0_offsets_1),
    .io_in_bits_resp_in_0_s2_full_pred_0_fallThroughAddr(io_in_bits_resp_in_0_s2_full_pred_0_fallThroughAddr),
    .io_in_bits_resp_in_0_s2_full_pred_0_is_br_sharing(io_in_bits_resp_in_0_s2_full_pred_0_is_br_sharing),
    .io_in_bits_resp_in_0_s2_full_pred_0_hit(io_in_bits_resp_in_0_s2_full_pred_0_hit),
    .io_in_bits_resp_in_0_s2_full_pred_1_br_taken_mask_0(io_in_bits_resp_in_0_s2_full_pred_1_br_taken_mask_0),
    .io_in_bits_resp_in_0_s2_full_pred_1_br_taken_mask_1(io_in_bits_resp_in_0_s2_full_pred_1_br_taken_mask_1),
    .io_in_bits_resp_in_0_s2_full_pred_1_slot_valids_0(io_in_bits_resp_in_0_s2_full_pred_1_slot_valids_0),
    .io_in_bits_resp_in_0_s2_full_pred_1_slot_valids_1(io_in_bits_resp_in_0_s2_full_pred_1_slot_valids_1),
    .io_in_bits_resp_in_0_s2_full_pred_1_targets_0(io_in_bits_resp_in_0_s2_full_pred_1_targets_0),
    .io_in_bits_resp_in_0_s2_full_pred_1_targets_1(io_in_bits_resp_in_0_s2_full_pred_1_targets_1),
    .io_in_bits_resp_in_0_s2_full_pred_1_jalr_target(io_in_bits_resp_in_0_s2_full_pred_1_jalr_target),
    .io_in_bits_resp_in_0_s2_full_pred_1_offsets_0(io_in_bits_resp_in_0_s2_full_pred_1_offsets_0),
    .io_in_bits_resp_in_0_s2_full_pred_1_offsets_1(io_in_bits_resp_in_0_s2_full_pred_1_offsets_1),
    .io_in_bits_resp_in_0_s2_full_pred_1_fallThroughAddr(io_in_bits_resp_in_0_s2_full_pred_1_fallThroughAddr),
    .io_in_bits_resp_in_0_s2_full_pred_1_is_br_sharing(io_in_bits_resp_in_0_s2_full_pred_1_is_br_sharing),
    .io_in_bits_resp_in_0_s2_full_pred_1_hit(io_in_bits_resp_in_0_s2_full_pred_1_hit),
    .io_in_bits_resp_in_0_s2_full_pred_2_br_taken_mask_0(io_in_bits_resp_in_0_s2_full_pred_2_br_taken_mask_0),
    .io_in_bits_resp_in_0_s2_full_pred_2_br_taken_mask_1(io_in_bits_resp_in_0_s2_full_pred_2_br_taken_mask_1),
    .io_in_bits_resp_in_0_s2_full_pred_2_slot_valids_0(io_in_bits_resp_in_0_s2_full_pred_2_slot_valids_0),
    .io_in_bits_resp_in_0_s2_full_pred_2_slot_valids_1(io_in_bits_resp_in_0_s2_full_pred_2_slot_valids_1),
    .io_in_bits_resp_in_0_s2_full_pred_2_targets_0(io_in_bits_resp_in_0_s2_full_pred_2_targets_0),
    .io_in_bits_resp_in_0_s2_full_pred_2_targets_1(io_in_bits_resp_in_0_s2_full_pred_2_targets_1),
    .io_in_bits_resp_in_0_s2_full_pred_2_jalr_target(io_in_bits_resp_in_0_s2_full_pred_2_jalr_target),
    .io_in_bits_resp_in_0_s2_full_pred_2_offsets_0(io_in_bits_resp_in_0_s2_full_pred_2_offsets_0),
    .io_in_bits_resp_in_0_s2_full_pred_2_offsets_1(io_in_bits_resp_in_0_s2_full_pred_2_offsets_1),
    .io_in_bits_resp_in_0_s2_full_pred_2_fallThroughAddr(io_in_bits_resp_in_0_s2_full_pred_2_fallThroughAddr),
    .io_in_bits_resp_in_0_s2_full_pred_2_is_jalr(io_in_bits_resp_in_0_s2_full_pred_2_is_jalr),
    .io_in_bits_resp_in_0_s2_full_pred_2_is_call(io_in_bits_resp_in_0_s2_full_pred_2_is_call),
    .io_in_bits_resp_in_0_s2_full_pred_2_is_ret(io_in_bits_resp_in_0_s2_full_pred_2_is_ret),
    .io_in_bits_resp_in_0_s2_full_pred_2_last_may_be_rvi_call(io_in_bits_resp_in_0_s2_full_pred_2_last_may_be_rvi_call),
    .io_in_bits_resp_in_0_s2_full_pred_2_is_br_sharing(io_in_bits_resp_in_0_s2_full_pred_2_is_br_sharing),
    .io_in_bits_resp_in_0_s2_full_pred_2_hit(io_in_bits_resp_in_0_s2_full_pred_2_hit),
    .io_in_bits_resp_in_0_s2_full_pred_3_br_taken_mask_0(io_in_bits_resp_in_0_s2_full_pred_3_br_taken_mask_0),
    .io_in_bits_resp_in_0_s2_full_pred_3_br_taken_mask_1(io_in_bits_resp_in_0_s2_full_pred_3_br_taken_mask_1),
    .io_in_bits_resp_in_0_s2_full_pred_3_slot_valids_0(io_in_bits_resp_in_0_s2_full_pred_3_slot_valids_0),
    .io_in_bits_resp_in_0_s2_full_pred_3_slot_valids_1(io_in_bits_resp_in_0_s2_full_pred_3_slot_valids_1),
    .io_in_bits_resp_in_0_s2_full_pred_3_targets_0(io_in_bits_resp_in_0_s2_full_pred_3_targets_0),
    .io_in_bits_resp_in_0_s2_full_pred_3_targets_1(io_in_bits_resp_in_0_s2_full_pred_3_targets_1),
    .io_in_bits_resp_in_0_s2_full_pred_3_jalr_target(io_in_bits_resp_in_0_s2_full_pred_3_jalr_target),
    .io_in_bits_resp_in_0_s2_full_pred_3_offsets_0(io_in_bits_resp_in_0_s2_full_pred_3_offsets_0),
    .io_in_bits_resp_in_0_s2_full_pred_3_offsets_1(io_in_bits_resp_in_0_s2_full_pred_3_offsets_1),
    .io_in_bits_resp_in_0_s2_full_pred_3_fallThroughAddr(io_in_bits_resp_in_0_s2_full_pred_3_fallThroughAddr),
    .io_in_bits_resp_in_0_s2_full_pred_3_fallThroughErr(io_in_bits_resp_in_0_s2_full_pred_3_fallThroughErr),
    .io_in_bits_resp_in_0_s2_full_pred_3_is_br_sharing(io_in_bits_resp_in_0_s2_full_pred_3_is_br_sharing),
    .io_in_bits_resp_in_0_s2_full_pred_3_hit(io_in_bits_resp_in_0_s2_full_pred_3_hit),
    .io_in_bits_resp_in_0_s3_full_pred_0_br_taken_mask_0(io_in_bits_resp_in_0_s3_full_pred_0_br_taken_mask_0),
    .io_in_bits_resp_in_0_s3_full_pred_0_br_taken_mask_1(io_in_bits_resp_in_0_s3_full_pred_0_br_taken_mask_1),
    .io_in_bits_resp_in_0_s3_full_pred_0_slot_valids_0(io_in_bits_resp_in_0_s3_full_pred_0_slot_valids_0),
    .io_in_bits_resp_in_0_s3_full_pred_0_slot_valids_1(io_in_bits_resp_in_0_s3_full_pred_0_slot_valids_1),
    .io_in_bits_resp_in_0_s3_full_pred_0_targets_0(io_in_bits_resp_in_0_s3_full_pred_0_targets_0),
    .io_in_bits_resp_in_0_s3_full_pred_0_targets_1(io_in_bits_resp_in_0_s3_full_pred_0_targets_1),
    .io_in_bits_resp_in_0_s3_full_pred_0_jalr_target(io_in_bits_resp_in_0_s3_full_pred_0_jalr_target),
    .io_in_bits_resp_in_0_s3_full_pred_0_fallThroughAddr(io_in_bits_resp_in_0_s3_full_pred_0_fallThroughAddr),
    .io_in_bits_resp_in_0_s3_full_pred_0_fallThroughErr(io_in_bits_resp_in_0_s3_full_pred_0_fallThroughErr),
    .io_in_bits_resp_in_0_s3_full_pred_0_multiHit(io_in_bits_resp_in_0_s3_full_pred_0_multiHit),
    .io_in_bits_resp_in_0_s3_full_pred_0_is_br_sharing(io_in_bits_resp_in_0_s3_full_pred_0_is_br_sharing),
    .io_in_bits_resp_in_0_s3_full_pred_0_hit(io_in_bits_resp_in_0_s3_full_pred_0_hit),
    .io_in_bits_resp_in_0_s3_full_pred_1_br_taken_mask_0(io_in_bits_resp_in_0_s3_full_pred_1_br_taken_mask_0),
    .io_in_bits_resp_in_0_s3_full_pred_1_br_taken_mask_1(io_in_bits_resp_in_0_s3_full_pred_1_br_taken_mask_1),
    .io_in_bits_resp_in_0_s3_full_pred_1_slot_valids_0(io_in_bits_resp_in_0_s3_full_pred_1_slot_valids_0),
    .io_in_bits_resp_in_0_s3_full_pred_1_slot_valids_1(io_in_bits_resp_in_0_s3_full_pred_1_slot_valids_1),
    .io_in_bits_resp_in_0_s3_full_pred_1_targets_0(io_in_bits_resp_in_0_s3_full_pred_1_targets_0),
    .io_in_bits_resp_in_0_s3_full_pred_1_targets_1(io_in_bits_resp_in_0_s3_full_pred_1_targets_1),
    .io_in_bits_resp_in_0_s3_full_pred_1_jalr_target(io_in_bits_resp_in_0_s3_full_pred_1_jalr_target),
    .io_in_bits_resp_in_0_s3_full_pred_1_fallThroughAddr(io_in_bits_resp_in_0_s3_full_pred_1_fallThroughAddr),
    .io_in_bits_resp_in_0_s3_full_pred_1_fallThroughErr(io_in_bits_resp_in_0_s3_full_pred_1_fallThroughErr),
    .io_in_bits_resp_in_0_s3_full_pred_1_multiHit(io_in_bits_resp_in_0_s3_full_pred_1_multiHit),
    .io_in_bits_resp_in_0_s3_full_pred_1_is_br_sharing(io_in_bits_resp_in_0_s3_full_pred_1_is_br_sharing),
    .io_in_bits_resp_in_0_s3_full_pred_1_hit(io_in_bits_resp_in_0_s3_full_pred_1_hit),
    .io_in_bits_resp_in_0_s3_full_pred_2_br_taken_mask_0(io_in_bits_resp_in_0_s3_full_pred_2_br_taken_mask_0),
    .io_in_bits_resp_in_0_s3_full_pred_2_br_taken_mask_1(io_in_bits_resp_in_0_s3_full_pred_2_br_taken_mask_1),
    .io_in_bits_resp_in_0_s3_full_pred_2_slot_valids_0(io_in_bits_resp_in_0_s3_full_pred_2_slot_valids_0),
    .io_in_bits_resp_in_0_s3_full_pred_2_slot_valids_1(io_in_bits_resp_in_0_s3_full_pred_2_slot_valids_1),
    .io_in_bits_resp_in_0_s3_full_pred_2_targets_0(io_in_bits_resp_in_0_s3_full_pred_2_targets_0),
    .io_in_bits_resp_in_0_s3_full_pred_2_targets_1(io_in_bits_resp_in_0_s3_full_pred_2_targets_1),
    .io_in_bits_resp_in_0_s3_full_pred_2_jalr_target(io_in_bits_resp_in_0_s3_full_pred_2_jalr_target),
    .io_in_bits_resp_in_0_s3_full_pred_2_fallThroughAddr(io_in_bits_resp_in_0_s3_full_pred_2_fallThroughAddr),
    .io_in_bits_resp_in_0_s3_full_pred_2_fallThroughErr(io_in_bits_resp_in_0_s3_full_pred_2_fallThroughErr),
    .io_in_bits_resp_in_0_s3_full_pred_2_multiHit(io_in_bits_resp_in_0_s3_full_pred_2_multiHit),
    .io_in_bits_resp_in_0_s3_full_pred_2_is_jalr(io_in_bits_resp_in_0_s3_full_pred_2_is_jalr),
    .io_in_bits_resp_in_0_s3_full_pred_2_is_call(io_in_bits_resp_in_0_s3_full_pred_2_is_call),
    .io_in_bits_resp_in_0_s3_full_pred_2_is_ret(io_in_bits_resp_in_0_s3_full_pred_2_is_ret),
    .io_in_bits_resp_in_0_s3_full_pred_2_is_br_sharing(io_in_bits_resp_in_0_s3_full_pred_2_is_br_sharing),
    .io_in_bits_resp_in_0_s3_full_pred_2_hit(io_in_bits_resp_in_0_s3_full_pred_2_hit),
    .io_in_bits_resp_in_0_s3_full_pred_3_br_taken_mask_0(io_in_bits_resp_in_0_s3_full_pred_3_br_taken_mask_0),
    .io_in_bits_resp_in_0_s3_full_pred_3_br_taken_mask_1(io_in_bits_resp_in_0_s3_full_pred_3_br_taken_mask_1),
    .io_in_bits_resp_in_0_s3_full_pred_3_slot_valids_0(io_in_bits_resp_in_0_s3_full_pred_3_slot_valids_0),
    .io_in_bits_resp_in_0_s3_full_pred_3_slot_valids_1(io_in_bits_resp_in_0_s3_full_pred_3_slot_valids_1),
    .io_in_bits_resp_in_0_s3_full_pred_3_targets_0(io_in_bits_resp_in_0_s3_full_pred_3_targets_0),
    .io_in_bits_resp_in_0_s3_full_pred_3_targets_1(io_in_bits_resp_in_0_s3_full_pred_3_targets_1),
    .io_in_bits_resp_in_0_s3_full_pred_3_jalr_target(io_in_bits_resp_in_0_s3_full_pred_3_jalr_target),
    .io_in_bits_resp_in_0_s3_full_pred_3_offsets_0(io_in_bits_resp_in_0_s3_full_pred_3_offsets_0),
    .io_in_bits_resp_in_0_s3_full_pred_3_offsets_1(io_in_bits_resp_in_0_s3_full_pred_3_offsets_1),
    .io_in_bits_resp_in_0_s3_full_pred_3_fallThroughAddr(io_in_bits_resp_in_0_s3_full_pred_3_fallThroughAddr),
    .io_in_bits_resp_in_0_s3_full_pred_3_fallThroughErr(io_in_bits_resp_in_0_s3_full_pred_3_fallThroughErr),
    .io_in_bits_resp_in_0_s3_full_pred_3_multiHit(io_in_bits_resp_in_0_s3_full_pred_3_multiHit),
    .io_in_bits_resp_in_0_s3_full_pred_3_is_br_sharing(io_in_bits_resp_in_0_s3_full_pred_3_is_br_sharing),
    .io_in_bits_resp_in_0_s3_full_pred_3_hit(io_in_bits_resp_in_0_s3_full_pred_3_hit),
    .io_in_bits_resp_in_0_last_stage_ftb_entry_isCall(io_in_bits_resp_in_0_last_stage_ftb_entry_isCall),
    .io_in_bits_resp_in_0_last_stage_ftb_entry_isRet(io_in_bits_resp_in_0_last_stage_ftb_entry_isRet),
    .io_in_bits_resp_in_0_last_stage_ftb_entry_isJalr(io_in_bits_resp_in_0_last_stage_ftb_entry_isJalr),
    .io_in_bits_resp_in_0_last_stage_ftb_entry_valid(io_in_bits_resp_in_0_last_stage_ftb_entry_valid),
    .io_in_bits_resp_in_0_last_stage_ftb_entry_brSlots_0_offset(io_in_bits_resp_in_0_last_stage_ftb_entry_brSlots_0_offset),
    .io_in_bits_resp_in_0_last_stage_ftb_entry_brSlots_0_sharing(io_in_bits_resp_in_0_last_stage_ftb_entry_brSlots_0_sharing),
    .io_in_bits_resp_in_0_last_stage_ftb_entry_brSlots_0_valid(io_in_bits_resp_in_0_last_stage_ftb_entry_brSlots_0_valid),
    .io_in_bits_resp_in_0_last_stage_ftb_entry_brSlots_0_lower(io_in_bits_resp_in_0_last_stage_ftb_entry_brSlots_0_lower),
    .io_in_bits_resp_in_0_last_stage_ftb_entry_brSlots_0_tarStat(io_in_bits_resp_in_0_last_stage_ftb_entry_brSlots_0_tarStat),
    .io_in_bits_resp_in_0_last_stage_ftb_entry_tailSlot_offset(io_in_bits_resp_in_0_last_stage_ftb_entry_tailSlot_offset),
    .io_in_bits_resp_in_0_last_stage_ftb_entry_tailSlot_sharing(io_in_bits_resp_in_0_last_stage_ftb_entry_tailSlot_sharing),
    .io_in_bits_resp_in_0_last_stage_ftb_entry_tailSlot_valid(io_in_bits_resp_in_0_last_stage_ftb_entry_tailSlot_valid),
    .io_in_bits_resp_in_0_last_stage_ftb_entry_tailSlot_lower(io_in_bits_resp_in_0_last_stage_ftb_entry_tailSlot_lower),
    .io_in_bits_resp_in_0_last_stage_ftb_entry_tailSlot_tarStat(io_in_bits_resp_in_0_last_stage_ftb_entry_tailSlot_tarStat),
    .io_in_bits_resp_in_0_last_stage_ftb_entry_pftAddr(io_in_bits_resp_in_0_last_stage_ftb_entry_pftAddr),
    .io_in_bits_resp_in_0_last_stage_ftb_entry_carry(io_in_bits_resp_in_0_last_stage_ftb_entry_carry),
    .io_in_bits_resp_in_0_last_stage_ftb_entry_last_may_be_rvi_call(io_in_bits_resp_in_0_last_stage_ftb_entry_last_may_be_rvi_call),
    .io_in_bits_resp_in_0_last_stage_ftb_entry_always_taken_0(io_in_bits_resp_in_0_last_stage_ftb_entry_always_taken_0),
    .io_in_bits_resp_in_0_last_stage_ftb_entry_always_taken_1(io_in_bits_resp_in_0_last_stage_ftb_entry_always_taken_1),
    .io_out_s2_pc_0(io_out_s2_pc_0),
    .io_out_s2_pc_1(io_out_s2_pc_1),
    .io_out_s2_pc_2(io_out_s2_pc_2),
    .io_out_s2_pc_3(io_out_s2_pc_3),
    .io_out_s2_full_pred_0_br_taken_mask_0(io_out_s2_full_pred_0_br_taken_mask_0),
    .io_out_s2_full_pred_0_br_taken_mask_1(io_out_s2_full_pred_0_br_taken_mask_1),
    .io_out_s2_full_pred_0_slot_valids_0(io_out_s2_full_pred_0_slot_valids_0),
    .io_out_s2_full_pred_0_slot_valids_1(io_out_s2_full_pred_0_slot_valids_1),
    .io_out_s2_full_pred_0_targets_0(io_out_s2_full_pred_0_targets_0),
    .io_out_s2_full_pred_0_targets_1(io_out_s2_full_pred_0_targets_1),
    .io_out_s2_full_pred_0_offsets_0(io_out_s2_full_pred_0_offsets_0),
    .io_out_s2_full_pred_0_offsets_1(io_out_s2_full_pred_0_offsets_1),
    .io_out_s2_full_pred_0_fallThroughAddr(io_out_s2_full_pred_0_fallThroughAddr),
    .io_out_s2_full_pred_0_is_br_sharing(io_out_s2_full_pred_0_is_br_sharing),
    .io_out_s2_full_pred_0_hit(io_out_s2_full_pred_0_hit),
    .io_out_s2_full_pred_1_br_taken_mask_0(io_out_s2_full_pred_1_br_taken_mask_0),
    .io_out_s2_full_pred_1_br_taken_mask_1(io_out_s2_full_pred_1_br_taken_mask_1),
    .io_out_s2_full_pred_1_slot_valids_0(io_out_s2_full_pred_1_slot_valids_0),
    .io_out_s2_full_pred_1_slot_valids_1(io_out_s2_full_pred_1_slot_valids_1),
    .io_out_s2_full_pred_1_targets_0(io_out_s2_full_pred_1_targets_0),
    .io_out_s2_full_pred_1_targets_1(io_out_s2_full_pred_1_targets_1),
    .io_out_s2_full_pred_1_offsets_0(io_out_s2_full_pred_1_offsets_0),
    .io_out_s2_full_pred_1_offsets_1(io_out_s2_full_pred_1_offsets_1),
    .io_out_s2_full_pred_1_fallThroughAddr(io_out_s2_full_pred_1_fallThroughAddr),
    .io_out_s2_full_pred_1_is_br_sharing(io_out_s2_full_pred_1_is_br_sharing),
    .io_out_s2_full_pred_1_hit(io_out_s2_full_pred_1_hit),
    .io_out_s2_full_pred_2_br_taken_mask_0(io_out_s2_full_pred_2_br_taken_mask_0),
    .io_out_s2_full_pred_2_br_taken_mask_1(io_out_s2_full_pred_2_br_taken_mask_1),
    .io_out_s2_full_pred_2_slot_valids_0(io_out_s2_full_pred_2_slot_valids_0),
    .io_out_s2_full_pred_2_slot_valids_1(io_out_s2_full_pred_2_slot_valids_1),
    .io_out_s2_full_pred_2_targets_0(io_out_s2_full_pred_2_targets_0),
    .io_out_s2_full_pred_2_targets_1(io_out_s2_full_pred_2_targets_1),
    .io_out_s2_full_pred_2_offsets_0(io_out_s2_full_pred_2_offsets_0),
    .io_out_s2_full_pred_2_offsets_1(io_out_s2_full_pred_2_offsets_1),
    .io_out_s2_full_pred_2_fallThroughAddr(io_out_s2_full_pred_2_fallThroughAddr),
    .io_out_s2_full_pred_2_is_br_sharing(io_out_s2_full_pred_2_is_br_sharing),
    .io_out_s2_full_pred_2_hit(io_out_s2_full_pred_2_hit),
    .io_out_s2_full_pred_3_br_taken_mask_0(io_out_s2_full_pred_3_br_taken_mask_0),
    .io_out_s2_full_pred_3_br_taken_mask_1(io_out_s2_full_pred_3_br_taken_mask_1),
    .io_out_s2_full_pred_3_slot_valids_0(io_out_s2_full_pred_3_slot_valids_0),
    .io_out_s2_full_pred_3_slot_valids_1(io_out_s2_full_pred_3_slot_valids_1),
    .io_out_s2_full_pred_3_targets_0(io_out_s2_full_pred_3_targets_0),
    .io_out_s2_full_pred_3_targets_1(io_out_s2_full_pred_3_targets_1),
    .io_out_s2_full_pred_3_offsets_0(io_out_s2_full_pred_3_offsets_0),
    .io_out_s2_full_pred_3_offsets_1(io_out_s2_full_pred_3_offsets_1),
    .io_out_s2_full_pred_3_fallThroughAddr(io_out_s2_full_pred_3_fallThroughAddr),
    .io_out_s2_full_pred_3_fallThroughErr(io_out_s2_full_pred_3_fallThroughErr),
    .io_out_s2_full_pred_3_is_br_sharing(io_out_s2_full_pred_3_is_br_sharing),
    .io_out_s2_full_pred_3_hit(io_out_s2_full_pred_3_hit),
    .io_out_s3_pc_0(io_out_s3_pc_0),
    .io_out_s3_pc_1(io_out_s3_pc_1),
    .io_out_s3_pc_2(io_out_s3_pc_2),
    .io_out_s3_pc_3(io_out_s3_pc_3),
    .io_out_s3_full_pred_0_br_taken_mask_0(io_out_s3_full_pred_0_br_taken_mask_0),
    .io_out_s3_full_pred_0_br_taken_mask_1(io_out_s3_full_pred_0_br_taken_mask_1),
    .io_out_s3_full_pred_0_slot_valids_0(io_out_s3_full_pred_0_slot_valids_0),
    .io_out_s3_full_pred_0_slot_valids_1(io_out_s3_full_pred_0_slot_valids_1),
    .io_out_s3_full_pred_0_targets_0(io_out_s3_full_pred_0_targets_0),
    .io_out_s3_full_pred_0_targets_1(io_out_s3_full_pred_0_targets_1),
    .io_out_s3_full_pred_0_fallThroughAddr(io_out_s3_full_pred_0_fallThroughAddr),
    .io_out_s3_full_pred_0_fallThroughErr(io_out_s3_full_pred_0_fallThroughErr),
    .io_out_s3_full_pred_0_multiHit(io_out_s3_full_pred_0_multiHit),
    .io_out_s3_full_pred_0_is_br_sharing(io_out_s3_full_pred_0_is_br_sharing),
    .io_out_s3_full_pred_0_hit(io_out_s3_full_pred_0_hit),
    .io_out_s3_full_pred_1_br_taken_mask_0(io_out_s3_full_pred_1_br_taken_mask_0),
    .io_out_s3_full_pred_1_br_taken_mask_1(io_out_s3_full_pred_1_br_taken_mask_1),
    .io_out_s3_full_pred_1_slot_valids_0(io_out_s3_full_pred_1_slot_valids_0),
    .io_out_s3_full_pred_1_slot_valids_1(io_out_s3_full_pred_1_slot_valids_1),
    .io_out_s3_full_pred_1_targets_0(io_out_s3_full_pred_1_targets_0),
    .io_out_s3_full_pred_1_targets_1(io_out_s3_full_pred_1_targets_1),
    .io_out_s3_full_pred_1_fallThroughAddr(io_out_s3_full_pred_1_fallThroughAddr),
    .io_out_s3_full_pred_1_fallThroughErr(io_out_s3_full_pred_1_fallThroughErr),
    .io_out_s3_full_pred_1_multiHit(io_out_s3_full_pred_1_multiHit),
    .io_out_s3_full_pred_1_is_br_sharing(io_out_s3_full_pred_1_is_br_sharing),
    .io_out_s3_full_pred_1_hit(io_out_s3_full_pred_1_hit),
    .io_out_s3_full_pred_2_br_taken_mask_0(io_out_s3_full_pred_2_br_taken_mask_0),
    .io_out_s3_full_pred_2_br_taken_mask_1(io_out_s3_full_pred_2_br_taken_mask_1),
    .io_out_s3_full_pred_2_slot_valids_0(io_out_s3_full_pred_2_slot_valids_0),
    .io_out_s3_full_pred_2_slot_valids_1(io_out_s3_full_pred_2_slot_valids_1),
    .io_out_s3_full_pred_2_targets_0(io_out_s3_full_pred_2_targets_0),
    .io_out_s3_full_pred_2_targets_1(io_out_s3_full_pred_2_targets_1),
    .io_out_s3_full_pred_2_fallThroughAddr(io_out_s3_full_pred_2_fallThroughAddr),
    .io_out_s3_full_pred_2_fallThroughErr(io_out_s3_full_pred_2_fallThroughErr),
    .io_out_s3_full_pred_2_multiHit(io_out_s3_full_pred_2_multiHit),
    .io_out_s3_full_pred_2_is_br_sharing(io_out_s3_full_pred_2_is_br_sharing),
    .io_out_s3_full_pred_2_hit(io_out_s3_full_pred_2_hit),
    .io_out_s3_full_pred_3_br_taken_mask_0(io_out_s3_full_pred_3_br_taken_mask_0),
    .io_out_s3_full_pred_3_br_taken_mask_1(io_out_s3_full_pred_3_br_taken_mask_1),
    .io_out_s3_full_pred_3_slot_valids_0(io_out_s3_full_pred_3_slot_valids_0),
    .io_out_s3_full_pred_3_slot_valids_1(io_out_s3_full_pred_3_slot_valids_1),
    .io_out_s3_full_pred_3_targets_0(io_out_s3_full_pred_3_targets_0),
    .io_out_s3_full_pred_3_targets_1(io_out_s3_full_pred_3_targets_1),
    .io_out_s3_full_pred_3_offsets_0(io_out_s3_full_pred_3_offsets_0),
    .io_out_s3_full_pred_3_offsets_1(io_out_s3_full_pred_3_offsets_1),
    .io_out_s3_full_pred_3_fallThroughAddr(io_out_s3_full_pred_3_fallThroughAddr),
    .io_out_s3_full_pred_3_fallThroughErr(io_out_s3_full_pred_3_fallThroughErr),
    .io_out_s3_full_pred_3_multiHit(io_out_s3_full_pred_3_multiHit),
    .io_out_s3_full_pred_3_is_br_sharing(io_out_s3_full_pred_3_is_br_sharing),
    .io_out_s3_full_pred_3_hit(io_out_s3_full_pred_3_hit),
    .io_out_last_stage_meta(io_out_last_stage_meta),
    .io_out_last_stage_spec_info_ssp(io_out_last_stage_spec_info_ssp),
    .io_out_last_stage_spec_info_sctr(io_out_last_stage_spec_info_sctr),
    .io_out_last_stage_spec_info_TOSW_flag(io_out_last_stage_spec_info_TOSW_flag),
    .io_out_last_stage_spec_info_TOSW_value(io_out_last_stage_spec_info_TOSW_value),
    .io_out_last_stage_spec_info_TOSR_flag(io_out_last_stage_spec_info_TOSR_flag),
    .io_out_last_stage_spec_info_TOSR_value(io_out_last_stage_spec_info_TOSR_value),
    .io_out_last_stage_spec_info_NOS_flag(io_out_last_stage_spec_info_NOS_flag),
    .io_out_last_stage_spec_info_NOS_value(io_out_last_stage_spec_info_NOS_value),
    .io_out_last_stage_spec_info_topAddr(io_out_last_stage_spec_info_topAddr),
    .io_out_last_stage_ftb_entry_isCall(io_out_last_stage_ftb_entry_isCall),
    .io_out_last_stage_ftb_entry_isRet(io_out_last_stage_ftb_entry_isRet),
    .io_out_last_stage_ftb_entry_isJalr(io_out_last_stage_ftb_entry_isJalr),
    .io_out_last_stage_ftb_entry_valid(io_out_last_stage_ftb_entry_valid),
    .io_out_last_stage_ftb_entry_brSlots_0_offset(io_out_last_stage_ftb_entry_brSlots_0_offset),
    .io_out_last_stage_ftb_entry_brSlots_0_sharing(io_out_last_stage_ftb_entry_brSlots_0_sharing),
    .io_out_last_stage_ftb_entry_brSlots_0_valid(io_out_last_stage_ftb_entry_brSlots_0_valid),
    .io_out_last_stage_ftb_entry_brSlots_0_lower(io_out_last_stage_ftb_entry_brSlots_0_lower),
    .io_out_last_stage_ftb_entry_brSlots_0_tarStat(io_out_last_stage_ftb_entry_brSlots_0_tarStat),
    .io_out_last_stage_ftb_entry_tailSlot_offset(io_out_last_stage_ftb_entry_tailSlot_offset),
    .io_out_last_stage_ftb_entry_tailSlot_sharing(io_out_last_stage_ftb_entry_tailSlot_sharing),
    .io_out_last_stage_ftb_entry_tailSlot_valid(io_out_last_stage_ftb_entry_tailSlot_valid),
    .io_out_last_stage_ftb_entry_tailSlot_lower(io_out_last_stage_ftb_entry_tailSlot_lower),
    .io_out_last_stage_ftb_entry_tailSlot_tarStat(io_out_last_stage_ftb_entry_tailSlot_tarStat),
    .io_out_last_stage_ftb_entry_pftAddr(io_out_last_stage_ftb_entry_pftAddr),
    .io_out_last_stage_ftb_entry_carry(io_out_last_stage_ftb_entry_carry),
    .io_out_last_stage_ftb_entry_last_may_be_rvi_call(io_out_last_stage_ftb_entry_last_may_be_rvi_call),
    .io_out_last_stage_ftb_entry_always_taken_0(io_out_last_stage_ftb_entry_always_taken_0),
    .io_out_last_stage_ftb_entry_always_taken_1(io_out_last_stage_ftb_entry_always_taken_1),
    .io_ctrl_ras_enable(io_ctrl_ras_enable),
    .io_s0_fire_0(io_s0_fire_0),
    .io_s0_fire_1(io_s0_fire_1),
    .io_s0_fire_2(io_s0_fire_2),
    .io_s0_fire_3(io_s0_fire_3),
    .io_s1_fire_0(io_s1_fire_0),
    .io_s1_fire_1(io_s1_fire_1),
    .io_s1_fire_2(io_s1_fire_2),
    .io_s1_fire_3(io_s1_fire_3),
    .io_s2_fire_0(io_s2_fire_0),
    .io_s2_fire_1(io_s2_fire_1),
    .io_s2_fire_2(io_s2_fire_2),
    .io_s2_fire_3(io_s2_fire_3),
    .io_s3_fire_2(io_s3_fire_2),
    .io_s3_redirect_2(io_s3_redirect_2),
    .io_update_valid(io_update_valid),
    .io_update_bits_ftb_entry_isCall(io_update_bits_ftb_entry_isCall),
    .io_update_bits_ftb_entry_isRet(io_update_bits_ftb_entry_isRet),
    .io_update_bits_ftb_entry_tailSlot_offset(io_update_bits_ftb_entry_tailSlot_offset),
    .io_update_bits_ftb_entry_tailSlot_valid(io_update_bits_ftb_entry_tailSlot_valid),
    .io_update_bits_cfi_idx_valid(io_update_bits_cfi_idx_valid),
    .io_update_bits_cfi_idx_bits(io_update_bits_cfi_idx_bits),
    .io_update_bits_jmp_taken(io_update_bits_jmp_taken),
    .io_update_bits_meta(io_update_bits_meta),
    .io_redirect_valid(io_redirect_valid),
    .io_redirect_bits_level(io_redirect_bits_level),
    .io_redirect_bits_cfiUpdate_pc(io_redirect_bits_cfiUpdate_pc),
    .io_redirect_bits_cfiUpdate_pd_isRVC(io_redirect_bits_cfiUpdate_pd_isRVC),
    .io_redirect_bits_cfiUpdate_pd_isCall(io_redirect_bits_cfiUpdate_pd_isCall),
    .io_redirect_bits_cfiUpdate_pd_isRet(io_redirect_bits_cfiUpdate_pd_isRet),
    .io_redirect_bits_cfiUpdate_ssp(io_redirect_bits_cfiUpdate_ssp),
    .io_redirect_bits_cfiUpdate_sctr(io_redirect_bits_cfiUpdate_sctr),
    .io_redirect_bits_cfiUpdate_TOSW_flag(io_redirect_bits_cfiUpdate_TOSW_flag),
    .io_redirect_bits_cfiUpdate_TOSW_value(io_redirect_bits_cfiUpdate_TOSW_value),
    .io_redirect_bits_cfiUpdate_TOSR_flag(io_redirect_bits_cfiUpdate_TOSR_flag),
    .io_redirect_bits_cfiUpdate_TOSR_value(io_redirect_bits_cfiUpdate_TOSR_value),
    .io_redirect_bits_cfiUpdate_NOS_flag(io_redirect_bits_cfiUpdate_NOS_flag),
    .io_redirect_bits_cfiUpdate_NOS_value(io_redirect_bits_cfiUpdate_NOS_value)
  );
endmodule
