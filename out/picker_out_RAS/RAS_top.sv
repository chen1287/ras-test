module RAS_top;

  logic  clock;
  logic  reset;
  logic [35:0] io_reset_vector;
  logic [40:0] io_in_bits_s0_pc_0;
  logic [40:0] io_in_bits_s0_pc_1;
  logic [40:0] io_in_bits_s0_pc_2;
  logic [40:0] io_in_bits_s0_pc_3;
  logic  io_in_bits_resp_in_0_s2_full_pred_0_br_taken_mask_0;
  logic  io_in_bits_resp_in_0_s2_full_pred_0_br_taken_mask_1;
  logic  io_in_bits_resp_in_0_s2_full_pred_0_slot_valids_0;
  logic  io_in_bits_resp_in_0_s2_full_pred_0_slot_valids_1;
  logic [40:0] io_in_bits_resp_in_0_s2_full_pred_0_targets_0;
  logic [40:0] io_in_bits_resp_in_0_s2_full_pred_0_targets_1;
  logic [40:0] io_in_bits_resp_in_0_s2_full_pred_0_jalr_target;
  logic [3:0] io_in_bits_resp_in_0_s2_full_pred_0_offsets_0;
  logic [3:0] io_in_bits_resp_in_0_s2_full_pred_0_offsets_1;
  logic [40:0] io_in_bits_resp_in_0_s2_full_pred_0_fallThroughAddr;
  logic  io_in_bits_resp_in_0_s2_full_pred_0_is_br_sharing;
  logic  io_in_bits_resp_in_0_s2_full_pred_0_hit;
  logic  io_in_bits_resp_in_0_s2_full_pred_1_br_taken_mask_0;
  logic  io_in_bits_resp_in_0_s2_full_pred_1_br_taken_mask_1;
  logic  io_in_bits_resp_in_0_s2_full_pred_1_slot_valids_0;
  logic  io_in_bits_resp_in_0_s2_full_pred_1_slot_valids_1;
  logic [40:0] io_in_bits_resp_in_0_s2_full_pred_1_targets_0;
  logic [40:0] io_in_bits_resp_in_0_s2_full_pred_1_targets_1;
  logic [40:0] io_in_bits_resp_in_0_s2_full_pred_1_jalr_target;
  logic [3:0] io_in_bits_resp_in_0_s2_full_pred_1_offsets_0;
  logic [3:0] io_in_bits_resp_in_0_s2_full_pred_1_offsets_1;
  logic [40:0] io_in_bits_resp_in_0_s2_full_pred_1_fallThroughAddr;
  logic  io_in_bits_resp_in_0_s2_full_pred_1_is_br_sharing;
  logic  io_in_bits_resp_in_0_s2_full_pred_1_hit;
  logic  io_in_bits_resp_in_0_s2_full_pred_2_br_taken_mask_0;
  logic  io_in_bits_resp_in_0_s2_full_pred_2_br_taken_mask_1;
  logic  io_in_bits_resp_in_0_s2_full_pred_2_slot_valids_0;
  logic  io_in_bits_resp_in_0_s2_full_pred_2_slot_valids_1;
  logic [40:0] io_in_bits_resp_in_0_s2_full_pred_2_targets_0;
  logic [40:0] io_in_bits_resp_in_0_s2_full_pred_2_targets_1;
  logic [40:0] io_in_bits_resp_in_0_s2_full_pred_2_jalr_target;
  logic [3:0] io_in_bits_resp_in_0_s2_full_pred_2_offsets_0;
  logic [3:0] io_in_bits_resp_in_0_s2_full_pred_2_offsets_1;
  logic [40:0] io_in_bits_resp_in_0_s2_full_pred_2_fallThroughAddr;
  logic  io_in_bits_resp_in_0_s2_full_pred_2_is_jalr;
  logic  io_in_bits_resp_in_0_s2_full_pred_2_is_call;
  logic  io_in_bits_resp_in_0_s2_full_pred_2_is_ret;
  logic  io_in_bits_resp_in_0_s2_full_pred_2_last_may_be_rvi_call;
  logic  io_in_bits_resp_in_0_s2_full_pred_2_is_br_sharing;
  logic  io_in_bits_resp_in_0_s2_full_pred_2_hit;
  logic  io_in_bits_resp_in_0_s2_full_pred_3_br_taken_mask_0;
  logic  io_in_bits_resp_in_0_s2_full_pred_3_br_taken_mask_1;
  logic  io_in_bits_resp_in_0_s2_full_pred_3_slot_valids_0;
  logic  io_in_bits_resp_in_0_s2_full_pred_3_slot_valids_1;
  logic [40:0] io_in_bits_resp_in_0_s2_full_pred_3_targets_0;
  logic [40:0] io_in_bits_resp_in_0_s2_full_pred_3_targets_1;
  logic [40:0] io_in_bits_resp_in_0_s2_full_pred_3_jalr_target;
  logic [3:0] io_in_bits_resp_in_0_s2_full_pred_3_offsets_0;
  logic [3:0] io_in_bits_resp_in_0_s2_full_pred_3_offsets_1;
  logic [40:0] io_in_bits_resp_in_0_s2_full_pred_3_fallThroughAddr;
  logic  io_in_bits_resp_in_0_s2_full_pred_3_fallThroughErr;
  logic  io_in_bits_resp_in_0_s2_full_pred_3_is_br_sharing;
  logic  io_in_bits_resp_in_0_s2_full_pred_3_hit;
  logic  io_in_bits_resp_in_0_s3_full_pred_0_br_taken_mask_0;
  logic  io_in_bits_resp_in_0_s3_full_pred_0_br_taken_mask_1;
  logic  io_in_bits_resp_in_0_s3_full_pred_0_slot_valids_0;
  logic  io_in_bits_resp_in_0_s3_full_pred_0_slot_valids_1;
  logic [40:0] io_in_bits_resp_in_0_s3_full_pred_0_targets_0;
  logic [40:0] io_in_bits_resp_in_0_s3_full_pred_0_targets_1;
  logic [40:0] io_in_bits_resp_in_0_s3_full_pred_0_jalr_target;
  logic [40:0] io_in_bits_resp_in_0_s3_full_pred_0_fallThroughAddr;
  logic  io_in_bits_resp_in_0_s3_full_pred_0_fallThroughErr;
  logic  io_in_bits_resp_in_0_s3_full_pred_0_multiHit;
  logic  io_in_bits_resp_in_0_s3_full_pred_0_is_br_sharing;
  logic  io_in_bits_resp_in_0_s3_full_pred_0_hit;
  logic  io_in_bits_resp_in_0_s3_full_pred_1_br_taken_mask_0;
  logic  io_in_bits_resp_in_0_s3_full_pred_1_br_taken_mask_1;
  logic  io_in_bits_resp_in_0_s3_full_pred_1_slot_valids_0;
  logic  io_in_bits_resp_in_0_s3_full_pred_1_slot_valids_1;
  logic [40:0] io_in_bits_resp_in_0_s3_full_pred_1_targets_0;
  logic [40:0] io_in_bits_resp_in_0_s3_full_pred_1_targets_1;
  logic [40:0] io_in_bits_resp_in_0_s3_full_pred_1_jalr_target;
  logic [40:0] io_in_bits_resp_in_0_s3_full_pred_1_fallThroughAddr;
  logic  io_in_bits_resp_in_0_s3_full_pred_1_fallThroughErr;
  logic  io_in_bits_resp_in_0_s3_full_pred_1_multiHit;
  logic  io_in_bits_resp_in_0_s3_full_pred_1_is_br_sharing;
  logic  io_in_bits_resp_in_0_s3_full_pred_1_hit;
  logic  io_in_bits_resp_in_0_s3_full_pred_2_br_taken_mask_0;
  logic  io_in_bits_resp_in_0_s3_full_pred_2_br_taken_mask_1;
  logic  io_in_bits_resp_in_0_s3_full_pred_2_slot_valids_0;
  logic  io_in_bits_resp_in_0_s3_full_pred_2_slot_valids_1;
  logic [40:0] io_in_bits_resp_in_0_s3_full_pred_2_targets_0;
  logic [40:0] io_in_bits_resp_in_0_s3_full_pred_2_targets_1;
  logic [40:0] io_in_bits_resp_in_0_s3_full_pred_2_jalr_target;
  logic [40:0] io_in_bits_resp_in_0_s3_full_pred_2_fallThroughAddr;
  logic  io_in_bits_resp_in_0_s3_full_pred_2_fallThroughErr;
  logic  io_in_bits_resp_in_0_s3_full_pred_2_multiHit;
  logic  io_in_bits_resp_in_0_s3_full_pred_2_is_jalr;
  logic  io_in_bits_resp_in_0_s3_full_pred_2_is_call;
  logic  io_in_bits_resp_in_0_s3_full_pred_2_is_ret;
  logic  io_in_bits_resp_in_0_s3_full_pred_2_is_br_sharing;
  logic  io_in_bits_resp_in_0_s3_full_pred_2_hit;
  logic  io_in_bits_resp_in_0_s3_full_pred_3_br_taken_mask_0;
  logic  io_in_bits_resp_in_0_s3_full_pred_3_br_taken_mask_1;
  logic  io_in_bits_resp_in_0_s3_full_pred_3_slot_valids_0;
  logic  io_in_bits_resp_in_0_s3_full_pred_3_slot_valids_1;
  logic [40:0] io_in_bits_resp_in_0_s3_full_pred_3_targets_0;
  logic [40:0] io_in_bits_resp_in_0_s3_full_pred_3_targets_1;
  logic [40:0] io_in_bits_resp_in_0_s3_full_pred_3_jalr_target;
  logic [3:0] io_in_bits_resp_in_0_s3_full_pred_3_offsets_0;
  logic [3:0] io_in_bits_resp_in_0_s3_full_pred_3_offsets_1;
  logic [40:0] io_in_bits_resp_in_0_s3_full_pred_3_fallThroughAddr;
  logic  io_in_bits_resp_in_0_s3_full_pred_3_fallThroughErr;
  logic  io_in_bits_resp_in_0_s3_full_pred_3_multiHit;
  logic  io_in_bits_resp_in_0_s3_full_pred_3_is_br_sharing;
  logic  io_in_bits_resp_in_0_s3_full_pred_3_hit;
  logic  io_in_bits_resp_in_0_last_stage_ftb_entry_isCall;
  logic  io_in_bits_resp_in_0_last_stage_ftb_entry_isRet;
  logic  io_in_bits_resp_in_0_last_stage_ftb_entry_isJalr;
  logic  io_in_bits_resp_in_0_last_stage_ftb_entry_valid;
  logic [3:0] io_in_bits_resp_in_0_last_stage_ftb_entry_brSlots_0_offset;
  logic  io_in_bits_resp_in_0_last_stage_ftb_entry_brSlots_0_sharing;
  logic  io_in_bits_resp_in_0_last_stage_ftb_entry_brSlots_0_valid;
  logic [11:0] io_in_bits_resp_in_0_last_stage_ftb_entry_brSlots_0_lower;
  logic [1:0] io_in_bits_resp_in_0_last_stage_ftb_entry_brSlots_0_tarStat;
  logic [3:0] io_in_bits_resp_in_0_last_stage_ftb_entry_tailSlot_offset;
  logic  io_in_bits_resp_in_0_last_stage_ftb_entry_tailSlot_sharing;
  logic  io_in_bits_resp_in_0_last_stage_ftb_entry_tailSlot_valid;
  logic [19:0] io_in_bits_resp_in_0_last_stage_ftb_entry_tailSlot_lower;
  logic [1:0] io_in_bits_resp_in_0_last_stage_ftb_entry_tailSlot_tarStat;
  logic [3:0] io_in_bits_resp_in_0_last_stage_ftb_entry_pftAddr;
  logic  io_in_bits_resp_in_0_last_stage_ftb_entry_carry;
  logic  io_in_bits_resp_in_0_last_stage_ftb_entry_last_may_be_rvi_call;
  logic  io_in_bits_resp_in_0_last_stage_ftb_entry_always_taken_0;
  logic  io_in_bits_resp_in_0_last_stage_ftb_entry_always_taken_1;
  logic [40:0] io_out_s2_pc_0;
  logic [40:0] io_out_s2_pc_1;
  logic [40:0] io_out_s2_pc_2;
  logic [40:0] io_out_s2_pc_3;
  logic  io_out_s2_full_pred_0_br_taken_mask_0;
  logic  io_out_s2_full_pred_0_br_taken_mask_1;
  logic  io_out_s2_full_pred_0_slot_valids_0;
  logic  io_out_s2_full_pred_0_slot_valids_1;
  logic [40:0] io_out_s2_full_pred_0_targets_0;
  logic [40:0] io_out_s2_full_pred_0_targets_1;
  logic [3:0] io_out_s2_full_pred_0_offsets_0;
  logic [3:0] io_out_s2_full_pred_0_offsets_1;
  logic [40:0] io_out_s2_full_pred_0_fallThroughAddr;
  logic  io_out_s2_full_pred_0_is_br_sharing;
  logic  io_out_s2_full_pred_0_hit;
  logic  io_out_s2_full_pred_1_br_taken_mask_0;
  logic  io_out_s2_full_pred_1_br_taken_mask_1;
  logic  io_out_s2_full_pred_1_slot_valids_0;
  logic  io_out_s2_full_pred_1_slot_valids_1;
  logic [40:0] io_out_s2_full_pred_1_targets_0;
  logic [40:0] io_out_s2_full_pred_1_targets_1;
  logic [3:0] io_out_s2_full_pred_1_offsets_0;
  logic [3:0] io_out_s2_full_pred_1_offsets_1;
  logic [40:0] io_out_s2_full_pred_1_fallThroughAddr;
  logic  io_out_s2_full_pred_1_is_br_sharing;
  logic  io_out_s2_full_pred_1_hit;
  logic  io_out_s2_full_pred_2_br_taken_mask_0;
  logic  io_out_s2_full_pred_2_br_taken_mask_1;
  logic  io_out_s2_full_pred_2_slot_valids_0;
  logic  io_out_s2_full_pred_2_slot_valids_1;
  logic [40:0] io_out_s2_full_pred_2_targets_0;
  logic [40:0] io_out_s2_full_pred_2_targets_1;
  logic [3:0] io_out_s2_full_pred_2_offsets_0;
  logic [3:0] io_out_s2_full_pred_2_offsets_1;
  logic [40:0] io_out_s2_full_pred_2_fallThroughAddr;
  logic  io_out_s2_full_pred_2_is_br_sharing;
  logic  io_out_s2_full_pred_2_hit;
  logic  io_out_s2_full_pred_3_br_taken_mask_0;
  logic  io_out_s2_full_pred_3_br_taken_mask_1;
  logic  io_out_s2_full_pred_3_slot_valids_0;
  logic  io_out_s2_full_pred_3_slot_valids_1;
  logic [40:0] io_out_s2_full_pred_3_targets_0;
  logic [40:0] io_out_s2_full_pred_3_targets_1;
  logic [3:0] io_out_s2_full_pred_3_offsets_0;
  logic [3:0] io_out_s2_full_pred_3_offsets_1;
  logic [40:0] io_out_s2_full_pred_3_fallThroughAddr;
  logic  io_out_s2_full_pred_3_fallThroughErr;
  logic  io_out_s2_full_pred_3_is_br_sharing;
  logic  io_out_s2_full_pred_3_hit;
  logic [40:0] io_out_s3_pc_0;
  logic [40:0] io_out_s3_pc_1;
  logic [40:0] io_out_s3_pc_2;
  logic [40:0] io_out_s3_pc_3;
  logic  io_out_s3_full_pred_0_br_taken_mask_0;
  logic  io_out_s3_full_pred_0_br_taken_mask_1;
  logic  io_out_s3_full_pred_0_slot_valids_0;
  logic  io_out_s3_full_pred_0_slot_valids_1;
  logic [40:0] io_out_s3_full_pred_0_targets_0;
  logic [40:0] io_out_s3_full_pred_0_targets_1;
  logic [40:0] io_out_s3_full_pred_0_fallThroughAddr;
  logic  io_out_s3_full_pred_0_fallThroughErr;
  logic  io_out_s3_full_pred_0_multiHit;
  logic  io_out_s3_full_pred_0_is_br_sharing;
  logic  io_out_s3_full_pred_0_hit;
  logic  io_out_s3_full_pred_1_br_taken_mask_0;
  logic  io_out_s3_full_pred_1_br_taken_mask_1;
  logic  io_out_s3_full_pred_1_slot_valids_0;
  logic  io_out_s3_full_pred_1_slot_valids_1;
  logic [40:0] io_out_s3_full_pred_1_targets_0;
  logic [40:0] io_out_s3_full_pred_1_targets_1;
  logic [40:0] io_out_s3_full_pred_1_fallThroughAddr;
  logic  io_out_s3_full_pred_1_fallThroughErr;
  logic  io_out_s3_full_pred_1_multiHit;
  logic  io_out_s3_full_pred_1_is_br_sharing;
  logic  io_out_s3_full_pred_1_hit;
  logic  io_out_s3_full_pred_2_br_taken_mask_0;
  logic  io_out_s3_full_pred_2_br_taken_mask_1;
  logic  io_out_s3_full_pred_2_slot_valids_0;
  logic  io_out_s3_full_pred_2_slot_valids_1;
  logic [40:0] io_out_s3_full_pred_2_targets_0;
  logic [40:0] io_out_s3_full_pred_2_targets_1;
  logic [40:0] io_out_s3_full_pred_2_fallThroughAddr;
  logic  io_out_s3_full_pred_2_fallThroughErr;
  logic  io_out_s3_full_pred_2_multiHit;
  logic  io_out_s3_full_pred_2_is_br_sharing;
  logic  io_out_s3_full_pred_2_hit;
  logic  io_out_s3_full_pred_3_br_taken_mask_0;
  logic  io_out_s3_full_pred_3_br_taken_mask_1;
  logic  io_out_s3_full_pred_3_slot_valids_0;
  logic  io_out_s3_full_pred_3_slot_valids_1;
  logic [40:0] io_out_s3_full_pred_3_targets_0;
  logic [40:0] io_out_s3_full_pred_3_targets_1;
  logic [3:0] io_out_s3_full_pred_3_offsets_0;
  logic [3:0] io_out_s3_full_pred_3_offsets_1;
  logic [40:0] io_out_s3_full_pred_3_fallThroughAddr;
  logic  io_out_s3_full_pred_3_fallThroughErr;
  logic  io_out_s3_full_pred_3_multiHit;
  logic  io_out_s3_full_pred_3_is_br_sharing;
  logic  io_out_s3_full_pred_3_hit;
  logic [250:0] io_out_last_stage_meta;
  logic [3:0] io_out_last_stage_spec_info_ssp;
  logic [2:0] io_out_last_stage_spec_info_sctr;
  logic  io_out_last_stage_spec_info_TOSW_flag;
  logic [4:0] io_out_last_stage_spec_info_TOSW_value;
  logic  io_out_last_stage_spec_info_TOSR_flag;
  logic [4:0] io_out_last_stage_spec_info_TOSR_value;
  logic  io_out_last_stage_spec_info_NOS_flag;
  logic [4:0] io_out_last_stage_spec_info_NOS_value;
  logic [40:0] io_out_last_stage_spec_info_topAddr;
  logic  io_out_last_stage_ftb_entry_isCall;
  logic  io_out_last_stage_ftb_entry_isRet;
  logic  io_out_last_stage_ftb_entry_isJalr;
  logic  io_out_last_stage_ftb_entry_valid;
  logic [3:0] io_out_last_stage_ftb_entry_brSlots_0_offset;
  logic  io_out_last_stage_ftb_entry_brSlots_0_sharing;
  logic  io_out_last_stage_ftb_entry_brSlots_0_valid;
  logic [11:0] io_out_last_stage_ftb_entry_brSlots_0_lower;
  logic [1:0] io_out_last_stage_ftb_entry_brSlots_0_tarStat;
  logic [3:0] io_out_last_stage_ftb_entry_tailSlot_offset;
  logic  io_out_last_stage_ftb_entry_tailSlot_sharing;
  logic  io_out_last_stage_ftb_entry_tailSlot_valid;
  logic [19:0] io_out_last_stage_ftb_entry_tailSlot_lower;
  logic [1:0] io_out_last_stage_ftb_entry_tailSlot_tarStat;
  logic [3:0] io_out_last_stage_ftb_entry_pftAddr;
  logic  io_out_last_stage_ftb_entry_carry;
  logic  io_out_last_stage_ftb_entry_last_may_be_rvi_call;
  logic  io_out_last_stage_ftb_entry_always_taken_0;
  logic  io_out_last_stage_ftb_entry_always_taken_1;
  logic  io_ctrl_ras_enable;
  logic  io_s0_fire_0;
  logic  io_s0_fire_1;
  logic  io_s0_fire_2;
  logic  io_s0_fire_3;
  logic  io_s1_fire_0;
  logic  io_s1_fire_1;
  logic  io_s1_fire_2;
  logic  io_s1_fire_3;
  logic  io_s2_fire_0;
  logic  io_s2_fire_1;
  logic  io_s2_fire_2;
  logic  io_s2_fire_3;
  logic  io_s3_fire_2;
  logic  io_s3_redirect_2;
  logic  io_update_valid;
  logic  io_update_bits_ftb_entry_isCall;
  logic  io_update_bits_ftb_entry_isRet;
  logic [3:0] io_update_bits_ftb_entry_tailSlot_offset;
  logic  io_update_bits_ftb_entry_tailSlot_valid;
  logic  io_update_bits_cfi_idx_valid;
  logic [3:0] io_update_bits_cfi_idx_bits;
  logic  io_update_bits_jmp_taken;
  logic [250:0] io_update_bits_meta;
  logic  io_redirect_valid;
  logic  io_redirect_bits_level;
  logic [40:0] io_redirect_bits_cfiUpdate_pc;
  logic  io_redirect_bits_cfiUpdate_pd_isRVC;
  logic  io_redirect_bits_cfiUpdate_pd_isCall;
  logic  io_redirect_bits_cfiUpdate_pd_isRet;
  logic [3:0] io_redirect_bits_cfiUpdate_ssp;
  logic [1:0] io_redirect_bits_cfiUpdate_sctr;
  logic  io_redirect_bits_cfiUpdate_TOSW_flag;
  logic [4:0] io_redirect_bits_cfiUpdate_TOSW_value;
  logic  io_redirect_bits_cfiUpdate_TOSR_flag;
  logic [4:0] io_redirect_bits_cfiUpdate_TOSR_value;
  logic  io_redirect_bits_cfiUpdate_NOS_flag;
  logic [4:0] io_redirect_bits_cfiUpdate_NOS_value;


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

  export "DPI-C" function get_clock;
  export "DPI-C" function set_clock;
  export "DPI-C" function get_reset;
  export "DPI-C" function set_reset;
  export "DPI-C" function get_io_reset_vector;
  export "DPI-C" function set_io_reset_vector;
  export "DPI-C" function get_io_in_bits_s0_pc_0;
  export "DPI-C" function set_io_in_bits_s0_pc_0;
  export "DPI-C" function get_io_in_bits_s0_pc_1;
  export "DPI-C" function set_io_in_bits_s0_pc_1;
  export "DPI-C" function get_io_in_bits_s0_pc_2;
  export "DPI-C" function set_io_in_bits_s0_pc_2;
  export "DPI-C" function get_io_in_bits_s0_pc_3;
  export "DPI-C" function set_io_in_bits_s0_pc_3;
  export "DPI-C" function get_io_in_bits_resp_in_0_s2_full_pred_0_br_taken_mask_0;
  export "DPI-C" function set_io_in_bits_resp_in_0_s2_full_pred_0_br_taken_mask_0;
  export "DPI-C" function get_io_in_bits_resp_in_0_s2_full_pred_0_br_taken_mask_1;
  export "DPI-C" function set_io_in_bits_resp_in_0_s2_full_pred_0_br_taken_mask_1;
  export "DPI-C" function get_io_in_bits_resp_in_0_s2_full_pred_0_slot_valids_0;
  export "DPI-C" function set_io_in_bits_resp_in_0_s2_full_pred_0_slot_valids_0;
  export "DPI-C" function get_io_in_bits_resp_in_0_s2_full_pred_0_slot_valids_1;
  export "DPI-C" function set_io_in_bits_resp_in_0_s2_full_pred_0_slot_valids_1;
  export "DPI-C" function get_io_in_bits_resp_in_0_s2_full_pred_0_targets_0;
  export "DPI-C" function set_io_in_bits_resp_in_0_s2_full_pred_0_targets_0;
  export "DPI-C" function get_io_in_bits_resp_in_0_s2_full_pred_0_targets_1;
  export "DPI-C" function set_io_in_bits_resp_in_0_s2_full_pred_0_targets_1;
  export "DPI-C" function get_io_in_bits_resp_in_0_s2_full_pred_0_jalr_target;
  export "DPI-C" function set_io_in_bits_resp_in_0_s2_full_pred_0_jalr_target;
  export "DPI-C" function get_io_in_bits_resp_in_0_s2_full_pred_0_offsets_0;
  export "DPI-C" function set_io_in_bits_resp_in_0_s2_full_pred_0_offsets_0;
  export "DPI-C" function get_io_in_bits_resp_in_0_s2_full_pred_0_offsets_1;
  export "DPI-C" function set_io_in_bits_resp_in_0_s2_full_pred_0_offsets_1;
  export "DPI-C" function get_io_in_bits_resp_in_0_s2_full_pred_0_fallThroughAddr;
  export "DPI-C" function set_io_in_bits_resp_in_0_s2_full_pred_0_fallThroughAddr;
  export "DPI-C" function get_io_in_bits_resp_in_0_s2_full_pred_0_is_br_sharing;
  export "DPI-C" function set_io_in_bits_resp_in_0_s2_full_pred_0_is_br_sharing;
  export "DPI-C" function get_io_in_bits_resp_in_0_s2_full_pred_0_hit;
  export "DPI-C" function set_io_in_bits_resp_in_0_s2_full_pred_0_hit;
  export "DPI-C" function get_io_in_bits_resp_in_0_s2_full_pred_1_br_taken_mask_0;
  export "DPI-C" function set_io_in_bits_resp_in_0_s2_full_pred_1_br_taken_mask_0;
  export "DPI-C" function get_io_in_bits_resp_in_0_s2_full_pred_1_br_taken_mask_1;
  export "DPI-C" function set_io_in_bits_resp_in_0_s2_full_pred_1_br_taken_mask_1;
  export "DPI-C" function get_io_in_bits_resp_in_0_s2_full_pred_1_slot_valids_0;
  export "DPI-C" function set_io_in_bits_resp_in_0_s2_full_pred_1_slot_valids_0;
  export "DPI-C" function get_io_in_bits_resp_in_0_s2_full_pred_1_slot_valids_1;
  export "DPI-C" function set_io_in_bits_resp_in_0_s2_full_pred_1_slot_valids_1;
  export "DPI-C" function get_io_in_bits_resp_in_0_s2_full_pred_1_targets_0;
  export "DPI-C" function set_io_in_bits_resp_in_0_s2_full_pred_1_targets_0;
  export "DPI-C" function get_io_in_bits_resp_in_0_s2_full_pred_1_targets_1;
  export "DPI-C" function set_io_in_bits_resp_in_0_s2_full_pred_1_targets_1;
  export "DPI-C" function get_io_in_bits_resp_in_0_s2_full_pred_1_jalr_target;
  export "DPI-C" function set_io_in_bits_resp_in_0_s2_full_pred_1_jalr_target;
  export "DPI-C" function get_io_in_bits_resp_in_0_s2_full_pred_1_offsets_0;
  export "DPI-C" function set_io_in_bits_resp_in_0_s2_full_pred_1_offsets_0;
  export "DPI-C" function get_io_in_bits_resp_in_0_s2_full_pred_1_offsets_1;
  export "DPI-C" function set_io_in_bits_resp_in_0_s2_full_pred_1_offsets_1;
  export "DPI-C" function get_io_in_bits_resp_in_0_s2_full_pred_1_fallThroughAddr;
  export "DPI-C" function set_io_in_bits_resp_in_0_s2_full_pred_1_fallThroughAddr;
  export "DPI-C" function get_io_in_bits_resp_in_0_s2_full_pred_1_is_br_sharing;
  export "DPI-C" function set_io_in_bits_resp_in_0_s2_full_pred_1_is_br_sharing;
  export "DPI-C" function get_io_in_bits_resp_in_0_s2_full_pred_1_hit;
  export "DPI-C" function set_io_in_bits_resp_in_0_s2_full_pred_1_hit;
  export "DPI-C" function get_io_in_bits_resp_in_0_s2_full_pred_2_br_taken_mask_0;
  export "DPI-C" function set_io_in_bits_resp_in_0_s2_full_pred_2_br_taken_mask_0;
  export "DPI-C" function get_io_in_bits_resp_in_0_s2_full_pred_2_br_taken_mask_1;
  export "DPI-C" function set_io_in_bits_resp_in_0_s2_full_pred_2_br_taken_mask_1;
  export "DPI-C" function get_io_in_bits_resp_in_0_s2_full_pred_2_slot_valids_0;
  export "DPI-C" function set_io_in_bits_resp_in_0_s2_full_pred_2_slot_valids_0;
  export "DPI-C" function get_io_in_bits_resp_in_0_s2_full_pred_2_slot_valids_1;
  export "DPI-C" function set_io_in_bits_resp_in_0_s2_full_pred_2_slot_valids_1;
  export "DPI-C" function get_io_in_bits_resp_in_0_s2_full_pred_2_targets_0;
  export "DPI-C" function set_io_in_bits_resp_in_0_s2_full_pred_2_targets_0;
  export "DPI-C" function get_io_in_bits_resp_in_0_s2_full_pred_2_targets_1;
  export "DPI-C" function set_io_in_bits_resp_in_0_s2_full_pred_2_targets_1;
  export "DPI-C" function get_io_in_bits_resp_in_0_s2_full_pred_2_jalr_target;
  export "DPI-C" function set_io_in_bits_resp_in_0_s2_full_pred_2_jalr_target;
  export "DPI-C" function get_io_in_bits_resp_in_0_s2_full_pred_2_offsets_0;
  export "DPI-C" function set_io_in_bits_resp_in_0_s2_full_pred_2_offsets_0;
  export "DPI-C" function get_io_in_bits_resp_in_0_s2_full_pred_2_offsets_1;
  export "DPI-C" function set_io_in_bits_resp_in_0_s2_full_pred_2_offsets_1;
  export "DPI-C" function get_io_in_bits_resp_in_0_s2_full_pred_2_fallThroughAddr;
  export "DPI-C" function set_io_in_bits_resp_in_0_s2_full_pred_2_fallThroughAddr;
  export "DPI-C" function get_io_in_bits_resp_in_0_s2_full_pred_2_is_jalr;
  export "DPI-C" function set_io_in_bits_resp_in_0_s2_full_pred_2_is_jalr;
  export "DPI-C" function get_io_in_bits_resp_in_0_s2_full_pred_2_is_call;
  export "DPI-C" function set_io_in_bits_resp_in_0_s2_full_pred_2_is_call;
  export "DPI-C" function get_io_in_bits_resp_in_0_s2_full_pred_2_is_ret;
  export "DPI-C" function set_io_in_bits_resp_in_0_s2_full_pred_2_is_ret;
  export "DPI-C" function get_io_in_bits_resp_in_0_s2_full_pred_2_last_may_be_rvi_call;
  export "DPI-C" function set_io_in_bits_resp_in_0_s2_full_pred_2_last_may_be_rvi_call;
  export "DPI-C" function get_io_in_bits_resp_in_0_s2_full_pred_2_is_br_sharing;
  export "DPI-C" function set_io_in_bits_resp_in_0_s2_full_pred_2_is_br_sharing;
  export "DPI-C" function get_io_in_bits_resp_in_0_s2_full_pred_2_hit;
  export "DPI-C" function set_io_in_bits_resp_in_0_s2_full_pred_2_hit;
  export "DPI-C" function get_io_in_bits_resp_in_0_s2_full_pred_3_br_taken_mask_0;
  export "DPI-C" function set_io_in_bits_resp_in_0_s2_full_pred_3_br_taken_mask_0;
  export "DPI-C" function get_io_in_bits_resp_in_0_s2_full_pred_3_br_taken_mask_1;
  export "DPI-C" function set_io_in_bits_resp_in_0_s2_full_pred_3_br_taken_mask_1;
  export "DPI-C" function get_io_in_bits_resp_in_0_s2_full_pred_3_slot_valids_0;
  export "DPI-C" function set_io_in_bits_resp_in_0_s2_full_pred_3_slot_valids_0;
  export "DPI-C" function get_io_in_bits_resp_in_0_s2_full_pred_3_slot_valids_1;
  export "DPI-C" function set_io_in_bits_resp_in_0_s2_full_pred_3_slot_valids_1;
  export "DPI-C" function get_io_in_bits_resp_in_0_s2_full_pred_3_targets_0;
  export "DPI-C" function set_io_in_bits_resp_in_0_s2_full_pred_3_targets_0;
  export "DPI-C" function get_io_in_bits_resp_in_0_s2_full_pred_3_targets_1;
  export "DPI-C" function set_io_in_bits_resp_in_0_s2_full_pred_3_targets_1;
  export "DPI-C" function get_io_in_bits_resp_in_0_s2_full_pred_3_jalr_target;
  export "DPI-C" function set_io_in_bits_resp_in_0_s2_full_pred_3_jalr_target;
  export "DPI-C" function get_io_in_bits_resp_in_0_s2_full_pred_3_offsets_0;
  export "DPI-C" function set_io_in_bits_resp_in_0_s2_full_pred_3_offsets_0;
  export "DPI-C" function get_io_in_bits_resp_in_0_s2_full_pred_3_offsets_1;
  export "DPI-C" function set_io_in_bits_resp_in_0_s2_full_pred_3_offsets_1;
  export "DPI-C" function get_io_in_bits_resp_in_0_s2_full_pred_3_fallThroughAddr;
  export "DPI-C" function set_io_in_bits_resp_in_0_s2_full_pred_3_fallThroughAddr;
  export "DPI-C" function get_io_in_bits_resp_in_0_s2_full_pred_3_fallThroughErr;
  export "DPI-C" function set_io_in_bits_resp_in_0_s2_full_pred_3_fallThroughErr;
  export "DPI-C" function get_io_in_bits_resp_in_0_s2_full_pred_3_is_br_sharing;
  export "DPI-C" function set_io_in_bits_resp_in_0_s2_full_pred_3_is_br_sharing;
  export "DPI-C" function get_io_in_bits_resp_in_0_s2_full_pred_3_hit;
  export "DPI-C" function set_io_in_bits_resp_in_0_s2_full_pred_3_hit;
  export "DPI-C" function get_io_in_bits_resp_in_0_s3_full_pred_0_br_taken_mask_0;
  export "DPI-C" function set_io_in_bits_resp_in_0_s3_full_pred_0_br_taken_mask_0;
  export "DPI-C" function get_io_in_bits_resp_in_0_s3_full_pred_0_br_taken_mask_1;
  export "DPI-C" function set_io_in_bits_resp_in_0_s3_full_pred_0_br_taken_mask_1;
  export "DPI-C" function get_io_in_bits_resp_in_0_s3_full_pred_0_slot_valids_0;
  export "DPI-C" function set_io_in_bits_resp_in_0_s3_full_pred_0_slot_valids_0;
  export "DPI-C" function get_io_in_bits_resp_in_0_s3_full_pred_0_slot_valids_1;
  export "DPI-C" function set_io_in_bits_resp_in_0_s3_full_pred_0_slot_valids_1;
  export "DPI-C" function get_io_in_bits_resp_in_0_s3_full_pred_0_targets_0;
  export "DPI-C" function set_io_in_bits_resp_in_0_s3_full_pred_0_targets_0;
  export "DPI-C" function get_io_in_bits_resp_in_0_s3_full_pred_0_targets_1;
  export "DPI-C" function set_io_in_bits_resp_in_0_s3_full_pred_0_targets_1;
  export "DPI-C" function get_io_in_bits_resp_in_0_s3_full_pred_0_jalr_target;
  export "DPI-C" function set_io_in_bits_resp_in_0_s3_full_pred_0_jalr_target;
  export "DPI-C" function get_io_in_bits_resp_in_0_s3_full_pred_0_fallThroughAddr;
  export "DPI-C" function set_io_in_bits_resp_in_0_s3_full_pred_0_fallThroughAddr;
  export "DPI-C" function get_io_in_bits_resp_in_0_s3_full_pred_0_fallThroughErr;
  export "DPI-C" function set_io_in_bits_resp_in_0_s3_full_pred_0_fallThroughErr;
  export "DPI-C" function get_io_in_bits_resp_in_0_s3_full_pred_0_multiHit;
  export "DPI-C" function set_io_in_bits_resp_in_0_s3_full_pred_0_multiHit;
  export "DPI-C" function get_io_in_bits_resp_in_0_s3_full_pred_0_is_br_sharing;
  export "DPI-C" function set_io_in_bits_resp_in_0_s3_full_pred_0_is_br_sharing;
  export "DPI-C" function get_io_in_bits_resp_in_0_s3_full_pred_0_hit;
  export "DPI-C" function set_io_in_bits_resp_in_0_s3_full_pred_0_hit;
  export "DPI-C" function get_io_in_bits_resp_in_0_s3_full_pred_1_br_taken_mask_0;
  export "DPI-C" function set_io_in_bits_resp_in_0_s3_full_pred_1_br_taken_mask_0;
  export "DPI-C" function get_io_in_bits_resp_in_0_s3_full_pred_1_br_taken_mask_1;
  export "DPI-C" function set_io_in_bits_resp_in_0_s3_full_pred_1_br_taken_mask_1;
  export "DPI-C" function get_io_in_bits_resp_in_0_s3_full_pred_1_slot_valids_0;
  export "DPI-C" function set_io_in_bits_resp_in_0_s3_full_pred_1_slot_valids_0;
  export "DPI-C" function get_io_in_bits_resp_in_0_s3_full_pred_1_slot_valids_1;
  export "DPI-C" function set_io_in_bits_resp_in_0_s3_full_pred_1_slot_valids_1;
  export "DPI-C" function get_io_in_bits_resp_in_0_s3_full_pred_1_targets_0;
  export "DPI-C" function set_io_in_bits_resp_in_0_s3_full_pred_1_targets_0;
  export "DPI-C" function get_io_in_bits_resp_in_0_s3_full_pred_1_targets_1;
  export "DPI-C" function set_io_in_bits_resp_in_0_s3_full_pred_1_targets_1;
  export "DPI-C" function get_io_in_bits_resp_in_0_s3_full_pred_1_jalr_target;
  export "DPI-C" function set_io_in_bits_resp_in_0_s3_full_pred_1_jalr_target;
  export "DPI-C" function get_io_in_bits_resp_in_0_s3_full_pred_1_fallThroughAddr;
  export "DPI-C" function set_io_in_bits_resp_in_0_s3_full_pred_1_fallThroughAddr;
  export "DPI-C" function get_io_in_bits_resp_in_0_s3_full_pred_1_fallThroughErr;
  export "DPI-C" function set_io_in_bits_resp_in_0_s3_full_pred_1_fallThroughErr;
  export "DPI-C" function get_io_in_bits_resp_in_0_s3_full_pred_1_multiHit;
  export "DPI-C" function set_io_in_bits_resp_in_0_s3_full_pred_1_multiHit;
  export "DPI-C" function get_io_in_bits_resp_in_0_s3_full_pred_1_is_br_sharing;
  export "DPI-C" function set_io_in_bits_resp_in_0_s3_full_pred_1_is_br_sharing;
  export "DPI-C" function get_io_in_bits_resp_in_0_s3_full_pred_1_hit;
  export "DPI-C" function set_io_in_bits_resp_in_0_s3_full_pred_1_hit;
  export "DPI-C" function get_io_in_bits_resp_in_0_s3_full_pred_2_br_taken_mask_0;
  export "DPI-C" function set_io_in_bits_resp_in_0_s3_full_pred_2_br_taken_mask_0;
  export "DPI-C" function get_io_in_bits_resp_in_0_s3_full_pred_2_br_taken_mask_1;
  export "DPI-C" function set_io_in_bits_resp_in_0_s3_full_pred_2_br_taken_mask_1;
  export "DPI-C" function get_io_in_bits_resp_in_0_s3_full_pred_2_slot_valids_0;
  export "DPI-C" function set_io_in_bits_resp_in_0_s3_full_pred_2_slot_valids_0;
  export "DPI-C" function get_io_in_bits_resp_in_0_s3_full_pred_2_slot_valids_1;
  export "DPI-C" function set_io_in_bits_resp_in_0_s3_full_pred_2_slot_valids_1;
  export "DPI-C" function get_io_in_bits_resp_in_0_s3_full_pred_2_targets_0;
  export "DPI-C" function set_io_in_bits_resp_in_0_s3_full_pred_2_targets_0;
  export "DPI-C" function get_io_in_bits_resp_in_0_s3_full_pred_2_targets_1;
  export "DPI-C" function set_io_in_bits_resp_in_0_s3_full_pred_2_targets_1;
  export "DPI-C" function get_io_in_bits_resp_in_0_s3_full_pred_2_jalr_target;
  export "DPI-C" function set_io_in_bits_resp_in_0_s3_full_pred_2_jalr_target;
  export "DPI-C" function get_io_in_bits_resp_in_0_s3_full_pred_2_fallThroughAddr;
  export "DPI-C" function set_io_in_bits_resp_in_0_s3_full_pred_2_fallThroughAddr;
  export "DPI-C" function get_io_in_bits_resp_in_0_s3_full_pred_2_fallThroughErr;
  export "DPI-C" function set_io_in_bits_resp_in_0_s3_full_pred_2_fallThroughErr;
  export "DPI-C" function get_io_in_bits_resp_in_0_s3_full_pred_2_multiHit;
  export "DPI-C" function set_io_in_bits_resp_in_0_s3_full_pred_2_multiHit;
  export "DPI-C" function get_io_in_bits_resp_in_0_s3_full_pred_2_is_jalr;
  export "DPI-C" function set_io_in_bits_resp_in_0_s3_full_pred_2_is_jalr;
  export "DPI-C" function get_io_in_bits_resp_in_0_s3_full_pred_2_is_call;
  export "DPI-C" function set_io_in_bits_resp_in_0_s3_full_pred_2_is_call;
  export "DPI-C" function get_io_in_bits_resp_in_0_s3_full_pred_2_is_ret;
  export "DPI-C" function set_io_in_bits_resp_in_0_s3_full_pred_2_is_ret;
  export "DPI-C" function get_io_in_bits_resp_in_0_s3_full_pred_2_is_br_sharing;
  export "DPI-C" function set_io_in_bits_resp_in_0_s3_full_pred_2_is_br_sharing;
  export "DPI-C" function get_io_in_bits_resp_in_0_s3_full_pred_2_hit;
  export "DPI-C" function set_io_in_bits_resp_in_0_s3_full_pred_2_hit;
  export "DPI-C" function get_io_in_bits_resp_in_0_s3_full_pred_3_br_taken_mask_0;
  export "DPI-C" function set_io_in_bits_resp_in_0_s3_full_pred_3_br_taken_mask_0;
  export "DPI-C" function get_io_in_bits_resp_in_0_s3_full_pred_3_br_taken_mask_1;
  export "DPI-C" function set_io_in_bits_resp_in_0_s3_full_pred_3_br_taken_mask_1;
  export "DPI-C" function get_io_in_bits_resp_in_0_s3_full_pred_3_slot_valids_0;
  export "DPI-C" function set_io_in_bits_resp_in_0_s3_full_pred_3_slot_valids_0;
  export "DPI-C" function get_io_in_bits_resp_in_0_s3_full_pred_3_slot_valids_1;
  export "DPI-C" function set_io_in_bits_resp_in_0_s3_full_pred_3_slot_valids_1;
  export "DPI-C" function get_io_in_bits_resp_in_0_s3_full_pred_3_targets_0;
  export "DPI-C" function set_io_in_bits_resp_in_0_s3_full_pred_3_targets_0;
  export "DPI-C" function get_io_in_bits_resp_in_0_s3_full_pred_3_targets_1;
  export "DPI-C" function set_io_in_bits_resp_in_0_s3_full_pred_3_targets_1;
  export "DPI-C" function get_io_in_bits_resp_in_0_s3_full_pred_3_jalr_target;
  export "DPI-C" function set_io_in_bits_resp_in_0_s3_full_pred_3_jalr_target;
  export "DPI-C" function get_io_in_bits_resp_in_0_s3_full_pred_3_offsets_0;
  export "DPI-C" function set_io_in_bits_resp_in_0_s3_full_pred_3_offsets_0;
  export "DPI-C" function get_io_in_bits_resp_in_0_s3_full_pred_3_offsets_1;
  export "DPI-C" function set_io_in_bits_resp_in_0_s3_full_pred_3_offsets_1;
  export "DPI-C" function get_io_in_bits_resp_in_0_s3_full_pred_3_fallThroughAddr;
  export "DPI-C" function set_io_in_bits_resp_in_0_s3_full_pred_3_fallThroughAddr;
  export "DPI-C" function get_io_in_bits_resp_in_0_s3_full_pred_3_fallThroughErr;
  export "DPI-C" function set_io_in_bits_resp_in_0_s3_full_pred_3_fallThroughErr;
  export "DPI-C" function get_io_in_bits_resp_in_0_s3_full_pred_3_multiHit;
  export "DPI-C" function set_io_in_bits_resp_in_0_s3_full_pred_3_multiHit;
  export "DPI-C" function get_io_in_bits_resp_in_0_s3_full_pred_3_is_br_sharing;
  export "DPI-C" function set_io_in_bits_resp_in_0_s3_full_pred_3_is_br_sharing;
  export "DPI-C" function get_io_in_bits_resp_in_0_s3_full_pred_3_hit;
  export "DPI-C" function set_io_in_bits_resp_in_0_s3_full_pred_3_hit;
  export "DPI-C" function get_io_in_bits_resp_in_0_last_stage_ftb_entry_isCall;
  export "DPI-C" function set_io_in_bits_resp_in_0_last_stage_ftb_entry_isCall;
  export "DPI-C" function get_io_in_bits_resp_in_0_last_stage_ftb_entry_isRet;
  export "DPI-C" function set_io_in_bits_resp_in_0_last_stage_ftb_entry_isRet;
  export "DPI-C" function get_io_in_bits_resp_in_0_last_stage_ftb_entry_isJalr;
  export "DPI-C" function set_io_in_bits_resp_in_0_last_stage_ftb_entry_isJalr;
  export "DPI-C" function get_io_in_bits_resp_in_0_last_stage_ftb_entry_valid;
  export "DPI-C" function set_io_in_bits_resp_in_0_last_stage_ftb_entry_valid;
  export "DPI-C" function get_io_in_bits_resp_in_0_last_stage_ftb_entry_brSlots_0_offset;
  export "DPI-C" function set_io_in_bits_resp_in_0_last_stage_ftb_entry_brSlots_0_offset;
  export "DPI-C" function get_io_in_bits_resp_in_0_last_stage_ftb_entry_brSlots_0_sharing;
  export "DPI-C" function set_io_in_bits_resp_in_0_last_stage_ftb_entry_brSlots_0_sharing;
  export "DPI-C" function get_io_in_bits_resp_in_0_last_stage_ftb_entry_brSlots_0_valid;
  export "DPI-C" function set_io_in_bits_resp_in_0_last_stage_ftb_entry_brSlots_0_valid;
  export "DPI-C" function get_io_in_bits_resp_in_0_last_stage_ftb_entry_brSlots_0_lower;
  export "DPI-C" function set_io_in_bits_resp_in_0_last_stage_ftb_entry_brSlots_0_lower;
  export "DPI-C" function get_io_in_bits_resp_in_0_last_stage_ftb_entry_brSlots_0_tarStat;
  export "DPI-C" function set_io_in_bits_resp_in_0_last_stage_ftb_entry_brSlots_0_tarStat;
  export "DPI-C" function get_io_in_bits_resp_in_0_last_stage_ftb_entry_tailSlot_offset;
  export "DPI-C" function set_io_in_bits_resp_in_0_last_stage_ftb_entry_tailSlot_offset;
  export "DPI-C" function get_io_in_bits_resp_in_0_last_stage_ftb_entry_tailSlot_sharing;
  export "DPI-C" function set_io_in_bits_resp_in_0_last_stage_ftb_entry_tailSlot_sharing;
  export "DPI-C" function get_io_in_bits_resp_in_0_last_stage_ftb_entry_tailSlot_valid;
  export "DPI-C" function set_io_in_bits_resp_in_0_last_stage_ftb_entry_tailSlot_valid;
  export "DPI-C" function get_io_in_bits_resp_in_0_last_stage_ftb_entry_tailSlot_lower;
  export "DPI-C" function set_io_in_bits_resp_in_0_last_stage_ftb_entry_tailSlot_lower;
  export "DPI-C" function get_io_in_bits_resp_in_0_last_stage_ftb_entry_tailSlot_tarStat;
  export "DPI-C" function set_io_in_bits_resp_in_0_last_stage_ftb_entry_tailSlot_tarStat;
  export "DPI-C" function get_io_in_bits_resp_in_0_last_stage_ftb_entry_pftAddr;
  export "DPI-C" function set_io_in_bits_resp_in_0_last_stage_ftb_entry_pftAddr;
  export "DPI-C" function get_io_in_bits_resp_in_0_last_stage_ftb_entry_carry;
  export "DPI-C" function set_io_in_bits_resp_in_0_last_stage_ftb_entry_carry;
  export "DPI-C" function get_io_in_bits_resp_in_0_last_stage_ftb_entry_last_may_be_rvi_call;
  export "DPI-C" function set_io_in_bits_resp_in_0_last_stage_ftb_entry_last_may_be_rvi_call;
  export "DPI-C" function get_io_in_bits_resp_in_0_last_stage_ftb_entry_always_taken_0;
  export "DPI-C" function set_io_in_bits_resp_in_0_last_stage_ftb_entry_always_taken_0;
  export "DPI-C" function get_io_in_bits_resp_in_0_last_stage_ftb_entry_always_taken_1;
  export "DPI-C" function set_io_in_bits_resp_in_0_last_stage_ftb_entry_always_taken_1;
  export "DPI-C" function get_io_out_s2_pc_0;
  export "DPI-C" function set_io_out_s2_pc_0;
  export "DPI-C" function get_io_out_s2_pc_1;
  export "DPI-C" function set_io_out_s2_pc_1;
  export "DPI-C" function get_io_out_s2_pc_2;
  export "DPI-C" function set_io_out_s2_pc_2;
  export "DPI-C" function get_io_out_s2_pc_3;
  export "DPI-C" function set_io_out_s2_pc_3;
  export "DPI-C" function get_io_out_s2_full_pred_0_br_taken_mask_0;
  export "DPI-C" function set_io_out_s2_full_pred_0_br_taken_mask_0;
  export "DPI-C" function get_io_out_s2_full_pred_0_br_taken_mask_1;
  export "DPI-C" function set_io_out_s2_full_pred_0_br_taken_mask_1;
  export "DPI-C" function get_io_out_s2_full_pred_0_slot_valids_0;
  export "DPI-C" function set_io_out_s2_full_pred_0_slot_valids_0;
  export "DPI-C" function get_io_out_s2_full_pred_0_slot_valids_1;
  export "DPI-C" function set_io_out_s2_full_pred_0_slot_valids_1;
  export "DPI-C" function get_io_out_s2_full_pred_0_targets_0;
  export "DPI-C" function set_io_out_s2_full_pred_0_targets_0;
  export "DPI-C" function get_io_out_s2_full_pred_0_targets_1;
  export "DPI-C" function set_io_out_s2_full_pred_0_targets_1;
  export "DPI-C" function get_io_out_s2_full_pred_0_offsets_0;
  export "DPI-C" function set_io_out_s2_full_pred_0_offsets_0;
  export "DPI-C" function get_io_out_s2_full_pred_0_offsets_1;
  export "DPI-C" function set_io_out_s2_full_pred_0_offsets_1;
  export "DPI-C" function get_io_out_s2_full_pred_0_fallThroughAddr;
  export "DPI-C" function set_io_out_s2_full_pred_0_fallThroughAddr;
  export "DPI-C" function get_io_out_s2_full_pred_0_is_br_sharing;
  export "DPI-C" function set_io_out_s2_full_pred_0_is_br_sharing;
  export "DPI-C" function get_io_out_s2_full_pred_0_hit;
  export "DPI-C" function set_io_out_s2_full_pred_0_hit;
  export "DPI-C" function get_io_out_s2_full_pred_1_br_taken_mask_0;
  export "DPI-C" function set_io_out_s2_full_pred_1_br_taken_mask_0;
  export "DPI-C" function get_io_out_s2_full_pred_1_br_taken_mask_1;
  export "DPI-C" function set_io_out_s2_full_pred_1_br_taken_mask_1;
  export "DPI-C" function get_io_out_s2_full_pred_1_slot_valids_0;
  export "DPI-C" function set_io_out_s2_full_pred_1_slot_valids_0;
  export "DPI-C" function get_io_out_s2_full_pred_1_slot_valids_1;
  export "DPI-C" function set_io_out_s2_full_pred_1_slot_valids_1;
  export "DPI-C" function get_io_out_s2_full_pred_1_targets_0;
  export "DPI-C" function set_io_out_s2_full_pred_1_targets_0;
  export "DPI-C" function get_io_out_s2_full_pred_1_targets_1;
  export "DPI-C" function set_io_out_s2_full_pred_1_targets_1;
  export "DPI-C" function get_io_out_s2_full_pred_1_offsets_0;
  export "DPI-C" function set_io_out_s2_full_pred_1_offsets_0;
  export "DPI-C" function get_io_out_s2_full_pred_1_offsets_1;
  export "DPI-C" function set_io_out_s2_full_pred_1_offsets_1;
  export "DPI-C" function get_io_out_s2_full_pred_1_fallThroughAddr;
  export "DPI-C" function set_io_out_s2_full_pred_1_fallThroughAddr;
  export "DPI-C" function get_io_out_s2_full_pred_1_is_br_sharing;
  export "DPI-C" function set_io_out_s2_full_pred_1_is_br_sharing;
  export "DPI-C" function get_io_out_s2_full_pred_1_hit;
  export "DPI-C" function set_io_out_s2_full_pred_1_hit;
  export "DPI-C" function get_io_out_s2_full_pred_2_br_taken_mask_0;
  export "DPI-C" function set_io_out_s2_full_pred_2_br_taken_mask_0;
  export "DPI-C" function get_io_out_s2_full_pred_2_br_taken_mask_1;
  export "DPI-C" function set_io_out_s2_full_pred_2_br_taken_mask_1;
  export "DPI-C" function get_io_out_s2_full_pred_2_slot_valids_0;
  export "DPI-C" function set_io_out_s2_full_pred_2_slot_valids_0;
  export "DPI-C" function get_io_out_s2_full_pred_2_slot_valids_1;
  export "DPI-C" function set_io_out_s2_full_pred_2_slot_valids_1;
  export "DPI-C" function get_io_out_s2_full_pred_2_targets_0;
  export "DPI-C" function set_io_out_s2_full_pred_2_targets_0;
  export "DPI-C" function get_io_out_s2_full_pred_2_targets_1;
  export "DPI-C" function set_io_out_s2_full_pred_2_targets_1;
  export "DPI-C" function get_io_out_s2_full_pred_2_offsets_0;
  export "DPI-C" function set_io_out_s2_full_pred_2_offsets_0;
  export "DPI-C" function get_io_out_s2_full_pred_2_offsets_1;
  export "DPI-C" function set_io_out_s2_full_pred_2_offsets_1;
  export "DPI-C" function get_io_out_s2_full_pred_2_fallThroughAddr;
  export "DPI-C" function set_io_out_s2_full_pred_2_fallThroughAddr;
  export "DPI-C" function get_io_out_s2_full_pred_2_is_br_sharing;
  export "DPI-C" function set_io_out_s2_full_pred_2_is_br_sharing;
  export "DPI-C" function get_io_out_s2_full_pred_2_hit;
  export "DPI-C" function set_io_out_s2_full_pred_2_hit;
  export "DPI-C" function get_io_out_s2_full_pred_3_br_taken_mask_0;
  export "DPI-C" function set_io_out_s2_full_pred_3_br_taken_mask_0;
  export "DPI-C" function get_io_out_s2_full_pred_3_br_taken_mask_1;
  export "DPI-C" function set_io_out_s2_full_pred_3_br_taken_mask_1;
  export "DPI-C" function get_io_out_s2_full_pred_3_slot_valids_0;
  export "DPI-C" function set_io_out_s2_full_pred_3_slot_valids_0;
  export "DPI-C" function get_io_out_s2_full_pred_3_slot_valids_1;
  export "DPI-C" function set_io_out_s2_full_pred_3_slot_valids_1;
  export "DPI-C" function get_io_out_s2_full_pred_3_targets_0;
  export "DPI-C" function set_io_out_s2_full_pred_3_targets_0;
  export "DPI-C" function get_io_out_s2_full_pred_3_targets_1;
  export "DPI-C" function set_io_out_s2_full_pred_3_targets_1;
  export "DPI-C" function get_io_out_s2_full_pred_3_offsets_0;
  export "DPI-C" function set_io_out_s2_full_pred_3_offsets_0;
  export "DPI-C" function get_io_out_s2_full_pred_3_offsets_1;
  export "DPI-C" function set_io_out_s2_full_pred_3_offsets_1;
  export "DPI-C" function get_io_out_s2_full_pred_3_fallThroughAddr;
  export "DPI-C" function set_io_out_s2_full_pred_3_fallThroughAddr;
  export "DPI-C" function get_io_out_s2_full_pred_3_fallThroughErr;
  export "DPI-C" function set_io_out_s2_full_pred_3_fallThroughErr;
  export "DPI-C" function get_io_out_s2_full_pred_3_is_br_sharing;
  export "DPI-C" function set_io_out_s2_full_pred_3_is_br_sharing;
  export "DPI-C" function get_io_out_s2_full_pred_3_hit;
  export "DPI-C" function set_io_out_s2_full_pred_3_hit;
  export "DPI-C" function get_io_out_s3_pc_0;
  export "DPI-C" function set_io_out_s3_pc_0;
  export "DPI-C" function get_io_out_s3_pc_1;
  export "DPI-C" function set_io_out_s3_pc_1;
  export "DPI-C" function get_io_out_s3_pc_2;
  export "DPI-C" function set_io_out_s3_pc_2;
  export "DPI-C" function get_io_out_s3_pc_3;
  export "DPI-C" function set_io_out_s3_pc_3;
  export "DPI-C" function get_io_out_s3_full_pred_0_br_taken_mask_0;
  export "DPI-C" function set_io_out_s3_full_pred_0_br_taken_mask_0;
  export "DPI-C" function get_io_out_s3_full_pred_0_br_taken_mask_1;
  export "DPI-C" function set_io_out_s3_full_pred_0_br_taken_mask_1;
  export "DPI-C" function get_io_out_s3_full_pred_0_slot_valids_0;
  export "DPI-C" function set_io_out_s3_full_pred_0_slot_valids_0;
  export "DPI-C" function get_io_out_s3_full_pred_0_slot_valids_1;
  export "DPI-C" function set_io_out_s3_full_pred_0_slot_valids_1;
  export "DPI-C" function get_io_out_s3_full_pred_0_targets_0;
  export "DPI-C" function set_io_out_s3_full_pred_0_targets_0;
  export "DPI-C" function get_io_out_s3_full_pred_0_targets_1;
  export "DPI-C" function set_io_out_s3_full_pred_0_targets_1;
  export "DPI-C" function get_io_out_s3_full_pred_0_fallThroughAddr;
  export "DPI-C" function set_io_out_s3_full_pred_0_fallThroughAddr;
  export "DPI-C" function get_io_out_s3_full_pred_0_fallThroughErr;
  export "DPI-C" function set_io_out_s3_full_pred_0_fallThroughErr;
  export "DPI-C" function get_io_out_s3_full_pred_0_multiHit;
  export "DPI-C" function set_io_out_s3_full_pred_0_multiHit;
  export "DPI-C" function get_io_out_s3_full_pred_0_is_br_sharing;
  export "DPI-C" function set_io_out_s3_full_pred_0_is_br_sharing;
  export "DPI-C" function get_io_out_s3_full_pred_0_hit;
  export "DPI-C" function set_io_out_s3_full_pred_0_hit;
  export "DPI-C" function get_io_out_s3_full_pred_1_br_taken_mask_0;
  export "DPI-C" function set_io_out_s3_full_pred_1_br_taken_mask_0;
  export "DPI-C" function get_io_out_s3_full_pred_1_br_taken_mask_1;
  export "DPI-C" function set_io_out_s3_full_pred_1_br_taken_mask_1;
  export "DPI-C" function get_io_out_s3_full_pred_1_slot_valids_0;
  export "DPI-C" function set_io_out_s3_full_pred_1_slot_valids_0;
  export "DPI-C" function get_io_out_s3_full_pred_1_slot_valids_1;
  export "DPI-C" function set_io_out_s3_full_pred_1_slot_valids_1;
  export "DPI-C" function get_io_out_s3_full_pred_1_targets_0;
  export "DPI-C" function set_io_out_s3_full_pred_1_targets_0;
  export "DPI-C" function get_io_out_s3_full_pred_1_targets_1;
  export "DPI-C" function set_io_out_s3_full_pred_1_targets_1;
  export "DPI-C" function get_io_out_s3_full_pred_1_fallThroughAddr;
  export "DPI-C" function set_io_out_s3_full_pred_1_fallThroughAddr;
  export "DPI-C" function get_io_out_s3_full_pred_1_fallThroughErr;
  export "DPI-C" function set_io_out_s3_full_pred_1_fallThroughErr;
  export "DPI-C" function get_io_out_s3_full_pred_1_multiHit;
  export "DPI-C" function set_io_out_s3_full_pred_1_multiHit;
  export "DPI-C" function get_io_out_s3_full_pred_1_is_br_sharing;
  export "DPI-C" function set_io_out_s3_full_pred_1_is_br_sharing;
  export "DPI-C" function get_io_out_s3_full_pred_1_hit;
  export "DPI-C" function set_io_out_s3_full_pred_1_hit;
  export "DPI-C" function get_io_out_s3_full_pred_2_br_taken_mask_0;
  export "DPI-C" function set_io_out_s3_full_pred_2_br_taken_mask_0;
  export "DPI-C" function get_io_out_s3_full_pred_2_br_taken_mask_1;
  export "DPI-C" function set_io_out_s3_full_pred_2_br_taken_mask_1;
  export "DPI-C" function get_io_out_s3_full_pred_2_slot_valids_0;
  export "DPI-C" function set_io_out_s3_full_pred_2_slot_valids_0;
  export "DPI-C" function get_io_out_s3_full_pred_2_slot_valids_1;
  export "DPI-C" function set_io_out_s3_full_pred_2_slot_valids_1;
  export "DPI-C" function get_io_out_s3_full_pred_2_targets_0;
  export "DPI-C" function set_io_out_s3_full_pred_2_targets_0;
  export "DPI-C" function get_io_out_s3_full_pred_2_targets_1;
  export "DPI-C" function set_io_out_s3_full_pred_2_targets_1;
  export "DPI-C" function get_io_out_s3_full_pred_2_fallThroughAddr;
  export "DPI-C" function set_io_out_s3_full_pred_2_fallThroughAddr;
  export "DPI-C" function get_io_out_s3_full_pred_2_fallThroughErr;
  export "DPI-C" function set_io_out_s3_full_pred_2_fallThroughErr;
  export "DPI-C" function get_io_out_s3_full_pred_2_multiHit;
  export "DPI-C" function set_io_out_s3_full_pred_2_multiHit;
  export "DPI-C" function get_io_out_s3_full_pred_2_is_br_sharing;
  export "DPI-C" function set_io_out_s3_full_pred_2_is_br_sharing;
  export "DPI-C" function get_io_out_s3_full_pred_2_hit;
  export "DPI-C" function set_io_out_s3_full_pred_2_hit;
  export "DPI-C" function get_io_out_s3_full_pred_3_br_taken_mask_0;
  export "DPI-C" function set_io_out_s3_full_pred_3_br_taken_mask_0;
  export "DPI-C" function get_io_out_s3_full_pred_3_br_taken_mask_1;
  export "DPI-C" function set_io_out_s3_full_pred_3_br_taken_mask_1;
  export "DPI-C" function get_io_out_s3_full_pred_3_slot_valids_0;
  export "DPI-C" function set_io_out_s3_full_pred_3_slot_valids_0;
  export "DPI-C" function get_io_out_s3_full_pred_3_slot_valids_1;
  export "DPI-C" function set_io_out_s3_full_pred_3_slot_valids_1;
  export "DPI-C" function get_io_out_s3_full_pred_3_targets_0;
  export "DPI-C" function set_io_out_s3_full_pred_3_targets_0;
  export "DPI-C" function get_io_out_s3_full_pred_3_targets_1;
  export "DPI-C" function set_io_out_s3_full_pred_3_targets_1;
  export "DPI-C" function get_io_out_s3_full_pred_3_offsets_0;
  export "DPI-C" function set_io_out_s3_full_pred_3_offsets_0;
  export "DPI-C" function get_io_out_s3_full_pred_3_offsets_1;
  export "DPI-C" function set_io_out_s3_full_pred_3_offsets_1;
  export "DPI-C" function get_io_out_s3_full_pred_3_fallThroughAddr;
  export "DPI-C" function set_io_out_s3_full_pred_3_fallThroughAddr;
  export "DPI-C" function get_io_out_s3_full_pred_3_fallThroughErr;
  export "DPI-C" function set_io_out_s3_full_pred_3_fallThroughErr;
  export "DPI-C" function get_io_out_s3_full_pred_3_multiHit;
  export "DPI-C" function set_io_out_s3_full_pred_3_multiHit;
  export "DPI-C" function get_io_out_s3_full_pred_3_is_br_sharing;
  export "DPI-C" function set_io_out_s3_full_pred_3_is_br_sharing;
  export "DPI-C" function get_io_out_s3_full_pred_3_hit;
  export "DPI-C" function set_io_out_s3_full_pred_3_hit;
  export "DPI-C" function get_io_out_last_stage_meta;
  export "DPI-C" function set_io_out_last_stage_meta;
  export "DPI-C" function get_io_out_last_stage_spec_info_ssp;
  export "DPI-C" function set_io_out_last_stage_spec_info_ssp;
  export "DPI-C" function get_io_out_last_stage_spec_info_sctr;
  export "DPI-C" function set_io_out_last_stage_spec_info_sctr;
  export "DPI-C" function get_io_out_last_stage_spec_info_TOSW_flag;
  export "DPI-C" function set_io_out_last_stage_spec_info_TOSW_flag;
  export "DPI-C" function get_io_out_last_stage_spec_info_TOSW_value;
  export "DPI-C" function set_io_out_last_stage_spec_info_TOSW_value;
  export "DPI-C" function get_io_out_last_stage_spec_info_TOSR_flag;
  export "DPI-C" function set_io_out_last_stage_spec_info_TOSR_flag;
  export "DPI-C" function get_io_out_last_stage_spec_info_TOSR_value;
  export "DPI-C" function set_io_out_last_stage_spec_info_TOSR_value;
  export "DPI-C" function get_io_out_last_stage_spec_info_NOS_flag;
  export "DPI-C" function set_io_out_last_stage_spec_info_NOS_flag;
  export "DPI-C" function get_io_out_last_stage_spec_info_NOS_value;
  export "DPI-C" function set_io_out_last_stage_spec_info_NOS_value;
  export "DPI-C" function get_io_out_last_stage_spec_info_topAddr;
  export "DPI-C" function set_io_out_last_stage_spec_info_topAddr;
  export "DPI-C" function get_io_out_last_stage_ftb_entry_isCall;
  export "DPI-C" function set_io_out_last_stage_ftb_entry_isCall;
  export "DPI-C" function get_io_out_last_stage_ftb_entry_isRet;
  export "DPI-C" function set_io_out_last_stage_ftb_entry_isRet;
  export "DPI-C" function get_io_out_last_stage_ftb_entry_isJalr;
  export "DPI-C" function set_io_out_last_stage_ftb_entry_isJalr;
  export "DPI-C" function get_io_out_last_stage_ftb_entry_valid;
  export "DPI-C" function set_io_out_last_stage_ftb_entry_valid;
  export "DPI-C" function get_io_out_last_stage_ftb_entry_brSlots_0_offset;
  export "DPI-C" function set_io_out_last_stage_ftb_entry_brSlots_0_offset;
  export "DPI-C" function get_io_out_last_stage_ftb_entry_brSlots_0_sharing;
  export "DPI-C" function set_io_out_last_stage_ftb_entry_brSlots_0_sharing;
  export "DPI-C" function get_io_out_last_stage_ftb_entry_brSlots_0_valid;
  export "DPI-C" function set_io_out_last_stage_ftb_entry_brSlots_0_valid;
  export "DPI-C" function get_io_out_last_stage_ftb_entry_brSlots_0_lower;
  export "DPI-C" function set_io_out_last_stage_ftb_entry_brSlots_0_lower;
  export "DPI-C" function get_io_out_last_stage_ftb_entry_brSlots_0_tarStat;
  export "DPI-C" function set_io_out_last_stage_ftb_entry_brSlots_0_tarStat;
  export "DPI-C" function get_io_out_last_stage_ftb_entry_tailSlot_offset;
  export "DPI-C" function set_io_out_last_stage_ftb_entry_tailSlot_offset;
  export "DPI-C" function get_io_out_last_stage_ftb_entry_tailSlot_sharing;
  export "DPI-C" function set_io_out_last_stage_ftb_entry_tailSlot_sharing;
  export "DPI-C" function get_io_out_last_stage_ftb_entry_tailSlot_valid;
  export "DPI-C" function set_io_out_last_stage_ftb_entry_tailSlot_valid;
  export "DPI-C" function get_io_out_last_stage_ftb_entry_tailSlot_lower;
  export "DPI-C" function set_io_out_last_stage_ftb_entry_tailSlot_lower;
  export "DPI-C" function get_io_out_last_stage_ftb_entry_tailSlot_tarStat;
  export "DPI-C" function set_io_out_last_stage_ftb_entry_tailSlot_tarStat;
  export "DPI-C" function get_io_out_last_stage_ftb_entry_pftAddr;
  export "DPI-C" function set_io_out_last_stage_ftb_entry_pftAddr;
  export "DPI-C" function get_io_out_last_stage_ftb_entry_carry;
  export "DPI-C" function set_io_out_last_stage_ftb_entry_carry;
  export "DPI-C" function get_io_out_last_stage_ftb_entry_last_may_be_rvi_call;
  export "DPI-C" function set_io_out_last_stage_ftb_entry_last_may_be_rvi_call;
  export "DPI-C" function get_io_out_last_stage_ftb_entry_always_taken_0;
  export "DPI-C" function set_io_out_last_stage_ftb_entry_always_taken_0;
  export "DPI-C" function get_io_out_last_stage_ftb_entry_always_taken_1;
  export "DPI-C" function set_io_out_last_stage_ftb_entry_always_taken_1;
  export "DPI-C" function get_io_ctrl_ras_enable;
  export "DPI-C" function set_io_ctrl_ras_enable;
  export "DPI-C" function get_io_s0_fire_0;
  export "DPI-C" function set_io_s0_fire_0;
  export "DPI-C" function get_io_s0_fire_1;
  export "DPI-C" function set_io_s0_fire_1;
  export "DPI-C" function get_io_s0_fire_2;
  export "DPI-C" function set_io_s0_fire_2;
  export "DPI-C" function get_io_s0_fire_3;
  export "DPI-C" function set_io_s0_fire_3;
  export "DPI-C" function get_io_s1_fire_0;
  export "DPI-C" function set_io_s1_fire_0;
  export "DPI-C" function get_io_s1_fire_1;
  export "DPI-C" function set_io_s1_fire_1;
  export "DPI-C" function get_io_s1_fire_2;
  export "DPI-C" function set_io_s1_fire_2;
  export "DPI-C" function get_io_s1_fire_3;
  export "DPI-C" function set_io_s1_fire_3;
  export "DPI-C" function get_io_s2_fire_0;
  export "DPI-C" function set_io_s2_fire_0;
  export "DPI-C" function get_io_s2_fire_1;
  export "DPI-C" function set_io_s2_fire_1;
  export "DPI-C" function get_io_s2_fire_2;
  export "DPI-C" function set_io_s2_fire_2;
  export "DPI-C" function get_io_s2_fire_3;
  export "DPI-C" function set_io_s2_fire_3;
  export "DPI-C" function get_io_s3_fire_2;
  export "DPI-C" function set_io_s3_fire_2;
  export "DPI-C" function get_io_s3_redirect_2;
  export "DPI-C" function set_io_s3_redirect_2;
  export "DPI-C" function get_io_update_valid;
  export "DPI-C" function set_io_update_valid;
  export "DPI-C" function get_io_update_bits_ftb_entry_isCall;
  export "DPI-C" function set_io_update_bits_ftb_entry_isCall;
  export "DPI-C" function get_io_update_bits_ftb_entry_isRet;
  export "DPI-C" function set_io_update_bits_ftb_entry_isRet;
  export "DPI-C" function get_io_update_bits_ftb_entry_tailSlot_offset;
  export "DPI-C" function set_io_update_bits_ftb_entry_tailSlot_offset;
  export "DPI-C" function get_io_update_bits_ftb_entry_tailSlot_valid;
  export "DPI-C" function set_io_update_bits_ftb_entry_tailSlot_valid;
  export "DPI-C" function get_io_update_bits_cfi_idx_valid;
  export "DPI-C" function set_io_update_bits_cfi_idx_valid;
  export "DPI-C" function get_io_update_bits_cfi_idx_bits;
  export "DPI-C" function set_io_update_bits_cfi_idx_bits;
  export "DPI-C" function get_io_update_bits_jmp_taken;
  export "DPI-C" function set_io_update_bits_jmp_taken;
  export "DPI-C" function get_io_update_bits_meta;
  export "DPI-C" function set_io_update_bits_meta;
  export "DPI-C" function get_io_redirect_valid;
  export "DPI-C" function set_io_redirect_valid;
  export "DPI-C" function get_io_redirect_bits_level;
  export "DPI-C" function set_io_redirect_bits_level;
  export "DPI-C" function get_io_redirect_bits_cfiUpdate_pc;
  export "DPI-C" function set_io_redirect_bits_cfiUpdate_pc;
  export "DPI-C" function get_io_redirect_bits_cfiUpdate_pd_isRVC;
  export "DPI-C" function set_io_redirect_bits_cfiUpdate_pd_isRVC;
  export "DPI-C" function get_io_redirect_bits_cfiUpdate_pd_isCall;
  export "DPI-C" function set_io_redirect_bits_cfiUpdate_pd_isCall;
  export "DPI-C" function get_io_redirect_bits_cfiUpdate_pd_isRet;
  export "DPI-C" function set_io_redirect_bits_cfiUpdate_pd_isRet;
  export "DPI-C" function get_io_redirect_bits_cfiUpdate_ssp;
  export "DPI-C" function set_io_redirect_bits_cfiUpdate_ssp;
  export "DPI-C" function get_io_redirect_bits_cfiUpdate_sctr;
  export "DPI-C" function set_io_redirect_bits_cfiUpdate_sctr;
  export "DPI-C" function get_io_redirect_bits_cfiUpdate_TOSW_flag;
  export "DPI-C" function set_io_redirect_bits_cfiUpdate_TOSW_flag;
  export "DPI-C" function get_io_redirect_bits_cfiUpdate_TOSW_value;
  export "DPI-C" function set_io_redirect_bits_cfiUpdate_TOSW_value;
  export "DPI-C" function get_io_redirect_bits_cfiUpdate_TOSR_flag;
  export "DPI-C" function set_io_redirect_bits_cfiUpdate_TOSR_flag;
  export "DPI-C" function get_io_redirect_bits_cfiUpdate_TOSR_value;
  export "DPI-C" function set_io_redirect_bits_cfiUpdate_TOSR_value;
  export "DPI-C" function get_io_redirect_bits_cfiUpdate_NOS_flag;
  export "DPI-C" function set_io_redirect_bits_cfiUpdate_NOS_flag;
  export "DPI-C" function get_io_redirect_bits_cfiUpdate_NOS_value;
  export "DPI-C" function set_io_redirect_bits_cfiUpdate_NOS_value;
  export "DPI-C" function get_RAS_s3_push;
  export "DPI-C" function get_RAS_s3_pop;
  export "DPI-C" function get_RAS_s3_pushed_in_s2;
  export "DPI-C" function get_RAS_s2_spec_push;
  export "DPI-C" function get_RAS_RASStack_realPush;
  export "DPI-C" function get_RAS_RASStack_TOSR_value;
  export "DPI-C" function get_RAS_RASStack_TOSW_value;
  export "DPI-C" function get_RAS_RASStack_BOS_value;
  export "DPI-C" function get_RAS_RASStack_ssp;
  export "DPI-C" function get_RAS_RASStack_nsp;
  export "DPI-C" function get_RAS_RASStack_spec_overflowed;
  export "DPI-C" function get_RAS_RASStack_writeBypassValid;
  export "DPI-C" function get_RAS_RASStack_timingTop_retAddr;
  export "DPI-C" function get_RAS_RASStack_sctr;
  export "DPI-C" function get_RAS_RASStack_spec_queue_0_retAddr;
  export "DPI-C" function get_RAS_RASStack_spec_queue_1_retAddr;
  export "DPI-C" function get_RAS_RASStack_spec_queue_2_retAddr;
  export "DPI-C" function get_RAS_RASStack_spec_queue_3_retAddr;
  export "DPI-C" function get_RAS_RASStack_spec_queue_4_retAddr;
  export "DPI-C" function get_RAS_RASStack_spec_queue_5_retAddr;
  export "DPI-C" function get_RAS_RASStack_spec_queue_6_retAddr;
  export "DPI-C" function get_RAS_RASStack_spec_queue_7_retAddr;
  export "DPI-C" function get_RAS_RASStack_spec_queue_8_retAddr;
  export "DPI-C" function get_RAS_RASStack_spec_queue_9_retAddr;
  export "DPI-C" function get_RAS_RASStack_spec_queue_10_retAddr;
  export "DPI-C" function get_RAS_RASStack_spec_queue_11_retAddr;
  export "DPI-C" function get_RAS_RASStack_spec_queue_12_retAddr;
  export "DPI-C" function get_RAS_RASStack_spec_queue_13_retAddr;
  export "DPI-C" function get_RAS_RASStack_spec_queue_14_retAddr;
  export "DPI-C" function get_RAS_RASStack_spec_queue_15_retAddr;
  export "DPI-C" function get_RAS_RASStack_spec_queue_16_retAddr;
  export "DPI-C" function get_RAS_RASStack_spec_queue_17_retAddr;
  export "DPI-C" function get_RAS_RASStack_spec_queue_18_retAddr;
  export "DPI-C" function get_RAS_RASStack_spec_queue_19_retAddr;
  export "DPI-C" function get_RAS_RASStack_spec_queue_20_retAddr;
  export "DPI-C" function get_RAS_RASStack_spec_queue_21_retAddr;
  export "DPI-C" function get_RAS_RASStack_spec_queue_22_retAddr;
  export "DPI-C" function get_RAS_RASStack_spec_queue_23_retAddr;
  export "DPI-C" function get_RAS_RASStack_spec_queue_24_retAddr;
  export "DPI-C" function get_RAS_RASStack_spec_queue_25_retAddr;
  export "DPI-C" function get_RAS_RASStack_spec_queue_26_retAddr;
  export "DPI-C" function get_RAS_RASStack_spec_queue_27_retAddr;
  export "DPI-C" function get_RAS_RASStack_spec_queue_28_retAddr;
  export "DPI-C" function get_RAS_RASStack_spec_queue_29_retAddr;
  export "DPI-C" function get_RAS_RASStack_spec_queue_30_retAddr;
  export "DPI-C" function get_RAS_RASStack_spec_queue_31_retAddr;
  export "DPI-C" function get_RAS_RASStack_commit_stack_0_retAddr;
  export "DPI-C" function get_RAS_RASStack_commit_stack_1_retAddr;
  export "DPI-C" function get_RAS_RASStack_commit_stack_2_retAddr;
  export "DPI-C" function get_RAS_RASStack_commit_stack_3_retAddr;
  export "DPI-C" function get_RAS_RASStack_commit_stack_4_retAddr;
  export "DPI-C" function get_RAS_RASStack_commit_stack_5_retAddr;
  export "DPI-C" function get_RAS_RASStack_commit_stack_6_retAddr;
  export "DPI-C" function get_RAS_RASStack_commit_stack_7_retAddr;
  export "DPI-C" function get_RAS_RASStack_commit_stack_8_retAddr;
  export "DPI-C" function get_RAS_RASStack_commit_stack_9_retAddr;
  export "DPI-C" function get_RAS_RASStack_commit_stack_10_retAddr;
  export "DPI-C" function get_RAS_RASStack_commit_stack_11_retAddr;
  export "DPI-C" function get_RAS_RASStack_commit_stack_12_retAddr;
  export "DPI-C" function get_RAS_RASStack_commit_stack_13_retAddr;
  export "DPI-C" function get_RAS_RASStack_commit_stack_14_retAddr;
  export "DPI-C" function get_RAS_RASStack_commit_stack_15_retAddr;
  export "DPI-C" function get_RAS_RASStack_commit_stack_0_ctr;
  export "DPI-C" function get_RAS_RASStack_commit_stack_1_ctr;
  export "DPI-C" function get_RAS_RASStack_commit_stack_2_ctr;
  export "DPI-C" function get_RAS_RASStack_commit_stack_3_ctr;
  export "DPI-C" function get_RAS_RASStack_commit_stack_4_ctr;
  export "DPI-C" function get_RAS_RASStack_commit_stack_5_ctr;
  export "DPI-C" function get_RAS_RASStack_commit_stack_6_ctr;
  export "DPI-C" function get_RAS_RASStack_commit_stack_7_ctr;
  export "DPI-C" function get_RAS_RASStack_commit_stack_8_ctr;
  export "DPI-C" function get_RAS_RASStack_commit_stack_9_ctr;
  export "DPI-C" function get_RAS_RASStack_commit_stack_10_ctr;
  export "DPI-C" function get_RAS_RASStack_commit_stack_11_ctr;
  export "DPI-C" function get_RAS_RASStack_commit_stack_12_ctr;
  export "DPI-C" function get_RAS_RASStack_commit_stack_13_ctr;
  export "DPI-C" function get_RAS_RASStack_commit_stack_14_ctr;
  export "DPI-C" function get_RAS_RASStack_commit_stack_15_ctr;
  export "DPI-C" function get_RAS_RASStack_io_spec_push_valid;
  export "DPI-C" function get_RAS_RASStack_io_spec_pop_valid;
  export "DPI-C" function get_RAS_RASStack_io_commit_push_valid;
  export "DPI-C" function get_RAS_RASStack_io_commit_pop_valid;
  export "DPI-C" function get_RAS_RASStack_io_redirect_valid;
  export "DPI-C" function get_RAS_RASStack_io_redirect_isCall;
  export "DPI-C" function get_RAS_RASStack_io_redirect_isRet;
  export "DPI-C" function get_RAS_RASStack_io_s3_cancel;


  function void get_clock;
    output logic  value;
    value=clock;
  endfunction

  function void set_clock;
    input logic  value;
    clock=value;
  endfunction

  function void get_reset;
    output logic  value;
    value=reset;
  endfunction

  function void set_reset;
    input logic  value;
    reset=value;
  endfunction

  function void get_io_reset_vector;
    output logic [35:0] value;
    value=io_reset_vector;
  endfunction

  function void set_io_reset_vector;
    input logic [35:0] value;
    io_reset_vector=value;
  endfunction

  function void get_io_in_bits_s0_pc_0;
    output logic [40:0] value;
    value=io_in_bits_s0_pc_0;
  endfunction

  function void set_io_in_bits_s0_pc_0;
    input logic [40:0] value;
    io_in_bits_s0_pc_0=value;
  endfunction

  function void get_io_in_bits_s0_pc_1;
    output logic [40:0] value;
    value=io_in_bits_s0_pc_1;
  endfunction

  function void set_io_in_bits_s0_pc_1;
    input logic [40:0] value;
    io_in_bits_s0_pc_1=value;
  endfunction

  function void get_io_in_bits_s0_pc_2;
    output logic [40:0] value;
    value=io_in_bits_s0_pc_2;
  endfunction

  function void set_io_in_bits_s0_pc_2;
    input logic [40:0] value;
    io_in_bits_s0_pc_2=value;
  endfunction

  function void get_io_in_bits_s0_pc_3;
    output logic [40:0] value;
    value=io_in_bits_s0_pc_3;
  endfunction

  function void set_io_in_bits_s0_pc_3;
    input logic [40:0] value;
    io_in_bits_s0_pc_3=value;
  endfunction

  function void get_io_in_bits_resp_in_0_s2_full_pred_0_br_taken_mask_0;
    output logic  value;
    value=io_in_bits_resp_in_0_s2_full_pred_0_br_taken_mask_0;
  endfunction

  function void set_io_in_bits_resp_in_0_s2_full_pred_0_br_taken_mask_0;
    input logic  value;
    io_in_bits_resp_in_0_s2_full_pred_0_br_taken_mask_0=value;
  endfunction

  function void get_io_in_bits_resp_in_0_s2_full_pred_0_br_taken_mask_1;
    output logic  value;
    value=io_in_bits_resp_in_0_s2_full_pred_0_br_taken_mask_1;
  endfunction

  function void set_io_in_bits_resp_in_0_s2_full_pred_0_br_taken_mask_1;
    input logic  value;
    io_in_bits_resp_in_0_s2_full_pred_0_br_taken_mask_1=value;
  endfunction

  function void get_io_in_bits_resp_in_0_s2_full_pred_0_slot_valids_0;
    output logic  value;
    value=io_in_bits_resp_in_0_s2_full_pred_0_slot_valids_0;
  endfunction

  function void set_io_in_bits_resp_in_0_s2_full_pred_0_slot_valids_0;
    input logic  value;
    io_in_bits_resp_in_0_s2_full_pred_0_slot_valids_0=value;
  endfunction

  function void get_io_in_bits_resp_in_0_s2_full_pred_0_slot_valids_1;
    output logic  value;
    value=io_in_bits_resp_in_0_s2_full_pred_0_slot_valids_1;
  endfunction

  function void set_io_in_bits_resp_in_0_s2_full_pred_0_slot_valids_1;
    input logic  value;
    io_in_bits_resp_in_0_s2_full_pred_0_slot_valids_1=value;
  endfunction

  function void get_io_in_bits_resp_in_0_s2_full_pred_0_targets_0;
    output logic [40:0] value;
    value=io_in_bits_resp_in_0_s2_full_pred_0_targets_0;
  endfunction

  function void set_io_in_bits_resp_in_0_s2_full_pred_0_targets_0;
    input logic [40:0] value;
    io_in_bits_resp_in_0_s2_full_pred_0_targets_0=value;
  endfunction

  function void get_io_in_bits_resp_in_0_s2_full_pred_0_targets_1;
    output logic [40:0] value;
    value=io_in_bits_resp_in_0_s2_full_pred_0_targets_1;
  endfunction

  function void set_io_in_bits_resp_in_0_s2_full_pred_0_targets_1;
    input logic [40:0] value;
    io_in_bits_resp_in_0_s2_full_pred_0_targets_1=value;
  endfunction

  function void get_io_in_bits_resp_in_0_s2_full_pred_0_jalr_target;
    output logic [40:0] value;
    value=io_in_bits_resp_in_0_s2_full_pred_0_jalr_target;
  endfunction

  function void set_io_in_bits_resp_in_0_s2_full_pred_0_jalr_target;
    input logic [40:0] value;
    io_in_bits_resp_in_0_s2_full_pred_0_jalr_target=value;
  endfunction

  function void get_io_in_bits_resp_in_0_s2_full_pred_0_offsets_0;
    output logic [3:0] value;
    value=io_in_bits_resp_in_0_s2_full_pred_0_offsets_0;
  endfunction

  function void set_io_in_bits_resp_in_0_s2_full_pred_0_offsets_0;
    input logic [3:0] value;
    io_in_bits_resp_in_0_s2_full_pred_0_offsets_0=value;
  endfunction

  function void get_io_in_bits_resp_in_0_s2_full_pred_0_offsets_1;
    output logic [3:0] value;
    value=io_in_bits_resp_in_0_s2_full_pred_0_offsets_1;
  endfunction

  function void set_io_in_bits_resp_in_0_s2_full_pred_0_offsets_1;
    input logic [3:0] value;
    io_in_bits_resp_in_0_s2_full_pred_0_offsets_1=value;
  endfunction

  function void get_io_in_bits_resp_in_0_s2_full_pred_0_fallThroughAddr;
    output logic [40:0] value;
    value=io_in_bits_resp_in_0_s2_full_pred_0_fallThroughAddr;
  endfunction

  function void set_io_in_bits_resp_in_0_s2_full_pred_0_fallThroughAddr;
    input logic [40:0] value;
    io_in_bits_resp_in_0_s2_full_pred_0_fallThroughAddr=value;
  endfunction

  function void get_io_in_bits_resp_in_0_s2_full_pred_0_is_br_sharing;
    output logic  value;
    value=io_in_bits_resp_in_0_s2_full_pred_0_is_br_sharing;
  endfunction

  function void set_io_in_bits_resp_in_0_s2_full_pred_0_is_br_sharing;
    input logic  value;
    io_in_bits_resp_in_0_s2_full_pred_0_is_br_sharing=value;
  endfunction

  function void get_io_in_bits_resp_in_0_s2_full_pred_0_hit;
    output logic  value;
    value=io_in_bits_resp_in_0_s2_full_pred_0_hit;
  endfunction

  function void set_io_in_bits_resp_in_0_s2_full_pred_0_hit;
    input logic  value;
    io_in_bits_resp_in_0_s2_full_pred_0_hit=value;
  endfunction

  function void get_io_in_bits_resp_in_0_s2_full_pred_1_br_taken_mask_0;
    output logic  value;
    value=io_in_bits_resp_in_0_s2_full_pred_1_br_taken_mask_0;
  endfunction

  function void set_io_in_bits_resp_in_0_s2_full_pred_1_br_taken_mask_0;
    input logic  value;
    io_in_bits_resp_in_0_s2_full_pred_1_br_taken_mask_0=value;
  endfunction

  function void get_io_in_bits_resp_in_0_s2_full_pred_1_br_taken_mask_1;
    output logic  value;
    value=io_in_bits_resp_in_0_s2_full_pred_1_br_taken_mask_1;
  endfunction

  function void set_io_in_bits_resp_in_0_s2_full_pred_1_br_taken_mask_1;
    input logic  value;
    io_in_bits_resp_in_0_s2_full_pred_1_br_taken_mask_1=value;
  endfunction

  function void get_io_in_bits_resp_in_0_s2_full_pred_1_slot_valids_0;
    output logic  value;
    value=io_in_bits_resp_in_0_s2_full_pred_1_slot_valids_0;
  endfunction

  function void set_io_in_bits_resp_in_0_s2_full_pred_1_slot_valids_0;
    input logic  value;
    io_in_bits_resp_in_0_s2_full_pred_1_slot_valids_0=value;
  endfunction

  function void get_io_in_bits_resp_in_0_s2_full_pred_1_slot_valids_1;
    output logic  value;
    value=io_in_bits_resp_in_0_s2_full_pred_1_slot_valids_1;
  endfunction

  function void set_io_in_bits_resp_in_0_s2_full_pred_1_slot_valids_1;
    input logic  value;
    io_in_bits_resp_in_0_s2_full_pred_1_slot_valids_1=value;
  endfunction

  function void get_io_in_bits_resp_in_0_s2_full_pred_1_targets_0;
    output logic [40:0] value;
    value=io_in_bits_resp_in_0_s2_full_pred_1_targets_0;
  endfunction

  function void set_io_in_bits_resp_in_0_s2_full_pred_1_targets_0;
    input logic [40:0] value;
    io_in_bits_resp_in_0_s2_full_pred_1_targets_0=value;
  endfunction

  function void get_io_in_bits_resp_in_0_s2_full_pred_1_targets_1;
    output logic [40:0] value;
    value=io_in_bits_resp_in_0_s2_full_pred_1_targets_1;
  endfunction

  function void set_io_in_bits_resp_in_0_s2_full_pred_1_targets_1;
    input logic [40:0] value;
    io_in_bits_resp_in_0_s2_full_pred_1_targets_1=value;
  endfunction

  function void get_io_in_bits_resp_in_0_s2_full_pred_1_jalr_target;
    output logic [40:0] value;
    value=io_in_bits_resp_in_0_s2_full_pred_1_jalr_target;
  endfunction

  function void set_io_in_bits_resp_in_0_s2_full_pred_1_jalr_target;
    input logic [40:0] value;
    io_in_bits_resp_in_0_s2_full_pred_1_jalr_target=value;
  endfunction

  function void get_io_in_bits_resp_in_0_s2_full_pred_1_offsets_0;
    output logic [3:0] value;
    value=io_in_bits_resp_in_0_s2_full_pred_1_offsets_0;
  endfunction

  function void set_io_in_bits_resp_in_0_s2_full_pred_1_offsets_0;
    input logic [3:0] value;
    io_in_bits_resp_in_0_s2_full_pred_1_offsets_0=value;
  endfunction

  function void get_io_in_bits_resp_in_0_s2_full_pred_1_offsets_1;
    output logic [3:0] value;
    value=io_in_bits_resp_in_0_s2_full_pred_1_offsets_1;
  endfunction

  function void set_io_in_bits_resp_in_0_s2_full_pred_1_offsets_1;
    input logic [3:0] value;
    io_in_bits_resp_in_0_s2_full_pred_1_offsets_1=value;
  endfunction

  function void get_io_in_bits_resp_in_0_s2_full_pred_1_fallThroughAddr;
    output logic [40:0] value;
    value=io_in_bits_resp_in_0_s2_full_pred_1_fallThroughAddr;
  endfunction

  function void set_io_in_bits_resp_in_0_s2_full_pred_1_fallThroughAddr;
    input logic [40:0] value;
    io_in_bits_resp_in_0_s2_full_pred_1_fallThroughAddr=value;
  endfunction

  function void get_io_in_bits_resp_in_0_s2_full_pred_1_is_br_sharing;
    output logic  value;
    value=io_in_bits_resp_in_0_s2_full_pred_1_is_br_sharing;
  endfunction

  function void set_io_in_bits_resp_in_0_s2_full_pred_1_is_br_sharing;
    input logic  value;
    io_in_bits_resp_in_0_s2_full_pred_1_is_br_sharing=value;
  endfunction

  function void get_io_in_bits_resp_in_0_s2_full_pred_1_hit;
    output logic  value;
    value=io_in_bits_resp_in_0_s2_full_pred_1_hit;
  endfunction

  function void set_io_in_bits_resp_in_0_s2_full_pred_1_hit;
    input logic  value;
    io_in_bits_resp_in_0_s2_full_pred_1_hit=value;
  endfunction

  function void get_io_in_bits_resp_in_0_s2_full_pred_2_br_taken_mask_0;
    output logic  value;
    value=io_in_bits_resp_in_0_s2_full_pred_2_br_taken_mask_0;
  endfunction

  function void set_io_in_bits_resp_in_0_s2_full_pred_2_br_taken_mask_0;
    input logic  value;
    io_in_bits_resp_in_0_s2_full_pred_2_br_taken_mask_0=value;
  endfunction

  function void get_io_in_bits_resp_in_0_s2_full_pred_2_br_taken_mask_1;
    output logic  value;
    value=io_in_bits_resp_in_0_s2_full_pred_2_br_taken_mask_1;
  endfunction

  function void set_io_in_bits_resp_in_0_s2_full_pred_2_br_taken_mask_1;
    input logic  value;
    io_in_bits_resp_in_0_s2_full_pred_2_br_taken_mask_1=value;
  endfunction

  function void get_io_in_bits_resp_in_0_s2_full_pred_2_slot_valids_0;
    output logic  value;
    value=io_in_bits_resp_in_0_s2_full_pred_2_slot_valids_0;
  endfunction

  function void set_io_in_bits_resp_in_0_s2_full_pred_2_slot_valids_0;
    input logic  value;
    io_in_bits_resp_in_0_s2_full_pred_2_slot_valids_0=value;
  endfunction

  function void get_io_in_bits_resp_in_0_s2_full_pred_2_slot_valids_1;
    output logic  value;
    value=io_in_bits_resp_in_0_s2_full_pred_2_slot_valids_1;
  endfunction

  function void set_io_in_bits_resp_in_0_s2_full_pred_2_slot_valids_1;
    input logic  value;
    io_in_bits_resp_in_0_s2_full_pred_2_slot_valids_1=value;
  endfunction

  function void get_io_in_bits_resp_in_0_s2_full_pred_2_targets_0;
    output logic [40:0] value;
    value=io_in_bits_resp_in_0_s2_full_pred_2_targets_0;
  endfunction

  function void set_io_in_bits_resp_in_0_s2_full_pred_2_targets_0;
    input logic [40:0] value;
    io_in_bits_resp_in_0_s2_full_pred_2_targets_0=value;
  endfunction

  function void get_io_in_bits_resp_in_0_s2_full_pred_2_targets_1;
    output logic [40:0] value;
    value=io_in_bits_resp_in_0_s2_full_pred_2_targets_1;
  endfunction

  function void set_io_in_bits_resp_in_0_s2_full_pred_2_targets_1;
    input logic [40:0] value;
    io_in_bits_resp_in_0_s2_full_pred_2_targets_1=value;
  endfunction

  function void get_io_in_bits_resp_in_0_s2_full_pred_2_jalr_target;
    output logic [40:0] value;
    value=io_in_bits_resp_in_0_s2_full_pred_2_jalr_target;
  endfunction

  function void set_io_in_bits_resp_in_0_s2_full_pred_2_jalr_target;
    input logic [40:0] value;
    io_in_bits_resp_in_0_s2_full_pred_2_jalr_target=value;
  endfunction

  function void get_io_in_bits_resp_in_0_s2_full_pred_2_offsets_0;
    output logic [3:0] value;
    value=io_in_bits_resp_in_0_s2_full_pred_2_offsets_0;
  endfunction

  function void set_io_in_bits_resp_in_0_s2_full_pred_2_offsets_0;
    input logic [3:0] value;
    io_in_bits_resp_in_0_s2_full_pred_2_offsets_0=value;
  endfunction

  function void get_io_in_bits_resp_in_0_s2_full_pred_2_offsets_1;
    output logic [3:0] value;
    value=io_in_bits_resp_in_0_s2_full_pred_2_offsets_1;
  endfunction

  function void set_io_in_bits_resp_in_0_s2_full_pred_2_offsets_1;
    input logic [3:0] value;
    io_in_bits_resp_in_0_s2_full_pred_2_offsets_1=value;
  endfunction

  function void get_io_in_bits_resp_in_0_s2_full_pred_2_fallThroughAddr;
    output logic [40:0] value;
    value=io_in_bits_resp_in_0_s2_full_pred_2_fallThroughAddr;
  endfunction

  function void set_io_in_bits_resp_in_0_s2_full_pred_2_fallThroughAddr;
    input logic [40:0] value;
    io_in_bits_resp_in_0_s2_full_pred_2_fallThroughAddr=value;
  endfunction

  function void get_io_in_bits_resp_in_0_s2_full_pred_2_is_jalr;
    output logic  value;
    value=io_in_bits_resp_in_0_s2_full_pred_2_is_jalr;
  endfunction

  function void set_io_in_bits_resp_in_0_s2_full_pred_2_is_jalr;
    input logic  value;
    io_in_bits_resp_in_0_s2_full_pred_2_is_jalr=value;
  endfunction

  function void get_io_in_bits_resp_in_0_s2_full_pred_2_is_call;
    output logic  value;
    value=io_in_bits_resp_in_0_s2_full_pred_2_is_call;
  endfunction

  function void set_io_in_bits_resp_in_0_s2_full_pred_2_is_call;
    input logic  value;
    io_in_bits_resp_in_0_s2_full_pred_2_is_call=value;
  endfunction

  function void get_io_in_bits_resp_in_0_s2_full_pred_2_is_ret;
    output logic  value;
    value=io_in_bits_resp_in_0_s2_full_pred_2_is_ret;
  endfunction

  function void set_io_in_bits_resp_in_0_s2_full_pred_2_is_ret;
    input logic  value;
    io_in_bits_resp_in_0_s2_full_pred_2_is_ret=value;
  endfunction

  function void get_io_in_bits_resp_in_0_s2_full_pred_2_last_may_be_rvi_call;
    output logic  value;
    value=io_in_bits_resp_in_0_s2_full_pred_2_last_may_be_rvi_call;
  endfunction

  function void set_io_in_bits_resp_in_0_s2_full_pred_2_last_may_be_rvi_call;
    input logic  value;
    io_in_bits_resp_in_0_s2_full_pred_2_last_may_be_rvi_call=value;
  endfunction

  function void get_io_in_bits_resp_in_0_s2_full_pred_2_is_br_sharing;
    output logic  value;
    value=io_in_bits_resp_in_0_s2_full_pred_2_is_br_sharing;
  endfunction

  function void set_io_in_bits_resp_in_0_s2_full_pred_2_is_br_sharing;
    input logic  value;
    io_in_bits_resp_in_0_s2_full_pred_2_is_br_sharing=value;
  endfunction

  function void get_io_in_bits_resp_in_0_s2_full_pred_2_hit;
    output logic  value;
    value=io_in_bits_resp_in_0_s2_full_pred_2_hit;
  endfunction

  function void set_io_in_bits_resp_in_0_s2_full_pred_2_hit;
    input logic  value;
    io_in_bits_resp_in_0_s2_full_pred_2_hit=value;
  endfunction

  function void get_io_in_bits_resp_in_0_s2_full_pred_3_br_taken_mask_0;
    output logic  value;
    value=io_in_bits_resp_in_0_s2_full_pred_3_br_taken_mask_0;
  endfunction

  function void set_io_in_bits_resp_in_0_s2_full_pred_3_br_taken_mask_0;
    input logic  value;
    io_in_bits_resp_in_0_s2_full_pred_3_br_taken_mask_0=value;
  endfunction

  function void get_io_in_bits_resp_in_0_s2_full_pred_3_br_taken_mask_1;
    output logic  value;
    value=io_in_bits_resp_in_0_s2_full_pred_3_br_taken_mask_1;
  endfunction

  function void set_io_in_bits_resp_in_0_s2_full_pred_3_br_taken_mask_1;
    input logic  value;
    io_in_bits_resp_in_0_s2_full_pred_3_br_taken_mask_1=value;
  endfunction

  function void get_io_in_bits_resp_in_0_s2_full_pred_3_slot_valids_0;
    output logic  value;
    value=io_in_bits_resp_in_0_s2_full_pred_3_slot_valids_0;
  endfunction

  function void set_io_in_bits_resp_in_0_s2_full_pred_3_slot_valids_0;
    input logic  value;
    io_in_bits_resp_in_0_s2_full_pred_3_slot_valids_0=value;
  endfunction

  function void get_io_in_bits_resp_in_0_s2_full_pred_3_slot_valids_1;
    output logic  value;
    value=io_in_bits_resp_in_0_s2_full_pred_3_slot_valids_1;
  endfunction

  function void set_io_in_bits_resp_in_0_s2_full_pred_3_slot_valids_1;
    input logic  value;
    io_in_bits_resp_in_0_s2_full_pred_3_slot_valids_1=value;
  endfunction

  function void get_io_in_bits_resp_in_0_s2_full_pred_3_targets_0;
    output logic [40:0] value;
    value=io_in_bits_resp_in_0_s2_full_pred_3_targets_0;
  endfunction

  function void set_io_in_bits_resp_in_0_s2_full_pred_3_targets_0;
    input logic [40:0] value;
    io_in_bits_resp_in_0_s2_full_pred_3_targets_0=value;
  endfunction

  function void get_io_in_bits_resp_in_0_s2_full_pred_3_targets_1;
    output logic [40:0] value;
    value=io_in_bits_resp_in_0_s2_full_pred_3_targets_1;
  endfunction

  function void set_io_in_bits_resp_in_0_s2_full_pred_3_targets_1;
    input logic [40:0] value;
    io_in_bits_resp_in_0_s2_full_pred_3_targets_1=value;
  endfunction

  function void get_io_in_bits_resp_in_0_s2_full_pred_3_jalr_target;
    output logic [40:0] value;
    value=io_in_bits_resp_in_0_s2_full_pred_3_jalr_target;
  endfunction

  function void set_io_in_bits_resp_in_0_s2_full_pred_3_jalr_target;
    input logic [40:0] value;
    io_in_bits_resp_in_0_s2_full_pred_3_jalr_target=value;
  endfunction

  function void get_io_in_bits_resp_in_0_s2_full_pred_3_offsets_0;
    output logic [3:0] value;
    value=io_in_bits_resp_in_0_s2_full_pred_3_offsets_0;
  endfunction

  function void set_io_in_bits_resp_in_0_s2_full_pred_3_offsets_0;
    input logic [3:0] value;
    io_in_bits_resp_in_0_s2_full_pred_3_offsets_0=value;
  endfunction

  function void get_io_in_bits_resp_in_0_s2_full_pred_3_offsets_1;
    output logic [3:0] value;
    value=io_in_bits_resp_in_0_s2_full_pred_3_offsets_1;
  endfunction

  function void set_io_in_bits_resp_in_0_s2_full_pred_3_offsets_1;
    input logic [3:0] value;
    io_in_bits_resp_in_0_s2_full_pred_3_offsets_1=value;
  endfunction

  function void get_io_in_bits_resp_in_0_s2_full_pred_3_fallThroughAddr;
    output logic [40:0] value;
    value=io_in_bits_resp_in_0_s2_full_pred_3_fallThroughAddr;
  endfunction

  function void set_io_in_bits_resp_in_0_s2_full_pred_3_fallThroughAddr;
    input logic [40:0] value;
    io_in_bits_resp_in_0_s2_full_pred_3_fallThroughAddr=value;
  endfunction

  function void get_io_in_bits_resp_in_0_s2_full_pred_3_fallThroughErr;
    output logic  value;
    value=io_in_bits_resp_in_0_s2_full_pred_3_fallThroughErr;
  endfunction

  function void set_io_in_bits_resp_in_0_s2_full_pred_3_fallThroughErr;
    input logic  value;
    io_in_bits_resp_in_0_s2_full_pred_3_fallThroughErr=value;
  endfunction

  function void get_io_in_bits_resp_in_0_s2_full_pred_3_is_br_sharing;
    output logic  value;
    value=io_in_bits_resp_in_0_s2_full_pred_3_is_br_sharing;
  endfunction

  function void set_io_in_bits_resp_in_0_s2_full_pred_3_is_br_sharing;
    input logic  value;
    io_in_bits_resp_in_0_s2_full_pred_3_is_br_sharing=value;
  endfunction

  function void get_io_in_bits_resp_in_0_s2_full_pred_3_hit;
    output logic  value;
    value=io_in_bits_resp_in_0_s2_full_pred_3_hit;
  endfunction

  function void set_io_in_bits_resp_in_0_s2_full_pred_3_hit;
    input logic  value;
    io_in_bits_resp_in_0_s2_full_pred_3_hit=value;
  endfunction

  function void get_io_in_bits_resp_in_0_s3_full_pred_0_br_taken_mask_0;
    output logic  value;
    value=io_in_bits_resp_in_0_s3_full_pred_0_br_taken_mask_0;
  endfunction

  function void set_io_in_bits_resp_in_0_s3_full_pred_0_br_taken_mask_0;
    input logic  value;
    io_in_bits_resp_in_0_s3_full_pred_0_br_taken_mask_0=value;
  endfunction

  function void get_io_in_bits_resp_in_0_s3_full_pred_0_br_taken_mask_1;
    output logic  value;
    value=io_in_bits_resp_in_0_s3_full_pred_0_br_taken_mask_1;
  endfunction

  function void set_io_in_bits_resp_in_0_s3_full_pred_0_br_taken_mask_1;
    input logic  value;
    io_in_bits_resp_in_0_s3_full_pred_0_br_taken_mask_1=value;
  endfunction

  function void get_io_in_bits_resp_in_0_s3_full_pred_0_slot_valids_0;
    output logic  value;
    value=io_in_bits_resp_in_0_s3_full_pred_0_slot_valids_0;
  endfunction

  function void set_io_in_bits_resp_in_0_s3_full_pred_0_slot_valids_0;
    input logic  value;
    io_in_bits_resp_in_0_s3_full_pred_0_slot_valids_0=value;
  endfunction

  function void get_io_in_bits_resp_in_0_s3_full_pred_0_slot_valids_1;
    output logic  value;
    value=io_in_bits_resp_in_0_s3_full_pred_0_slot_valids_1;
  endfunction

  function void set_io_in_bits_resp_in_0_s3_full_pred_0_slot_valids_1;
    input logic  value;
    io_in_bits_resp_in_0_s3_full_pred_0_slot_valids_1=value;
  endfunction

  function void get_io_in_bits_resp_in_0_s3_full_pred_0_targets_0;
    output logic [40:0] value;
    value=io_in_bits_resp_in_0_s3_full_pred_0_targets_0;
  endfunction

  function void set_io_in_bits_resp_in_0_s3_full_pred_0_targets_0;
    input logic [40:0] value;
    io_in_bits_resp_in_0_s3_full_pred_0_targets_0=value;
  endfunction

  function void get_io_in_bits_resp_in_0_s3_full_pred_0_targets_1;
    output logic [40:0] value;
    value=io_in_bits_resp_in_0_s3_full_pred_0_targets_1;
  endfunction

  function void set_io_in_bits_resp_in_0_s3_full_pred_0_targets_1;
    input logic [40:0] value;
    io_in_bits_resp_in_0_s3_full_pred_0_targets_1=value;
  endfunction

  function void get_io_in_bits_resp_in_0_s3_full_pred_0_jalr_target;
    output logic [40:0] value;
    value=io_in_bits_resp_in_0_s3_full_pred_0_jalr_target;
  endfunction

  function void set_io_in_bits_resp_in_0_s3_full_pred_0_jalr_target;
    input logic [40:0] value;
    io_in_bits_resp_in_0_s3_full_pred_0_jalr_target=value;
  endfunction

  function void get_io_in_bits_resp_in_0_s3_full_pred_0_fallThroughAddr;
    output logic [40:0] value;
    value=io_in_bits_resp_in_0_s3_full_pred_0_fallThroughAddr;
  endfunction

  function void set_io_in_bits_resp_in_0_s3_full_pred_0_fallThroughAddr;
    input logic [40:0] value;
    io_in_bits_resp_in_0_s3_full_pred_0_fallThroughAddr=value;
  endfunction

  function void get_io_in_bits_resp_in_0_s3_full_pred_0_fallThroughErr;
    output logic  value;
    value=io_in_bits_resp_in_0_s3_full_pred_0_fallThroughErr;
  endfunction

  function void set_io_in_bits_resp_in_0_s3_full_pred_0_fallThroughErr;
    input logic  value;
    io_in_bits_resp_in_0_s3_full_pred_0_fallThroughErr=value;
  endfunction

  function void get_io_in_bits_resp_in_0_s3_full_pred_0_multiHit;
    output logic  value;
    value=io_in_bits_resp_in_0_s3_full_pred_0_multiHit;
  endfunction

  function void set_io_in_bits_resp_in_0_s3_full_pred_0_multiHit;
    input logic  value;
    io_in_bits_resp_in_0_s3_full_pred_0_multiHit=value;
  endfunction

  function void get_io_in_bits_resp_in_0_s3_full_pred_0_is_br_sharing;
    output logic  value;
    value=io_in_bits_resp_in_0_s3_full_pred_0_is_br_sharing;
  endfunction

  function void set_io_in_bits_resp_in_0_s3_full_pred_0_is_br_sharing;
    input logic  value;
    io_in_bits_resp_in_0_s3_full_pred_0_is_br_sharing=value;
  endfunction

  function void get_io_in_bits_resp_in_0_s3_full_pred_0_hit;
    output logic  value;
    value=io_in_bits_resp_in_0_s3_full_pred_0_hit;
  endfunction

  function void set_io_in_bits_resp_in_0_s3_full_pred_0_hit;
    input logic  value;
    io_in_bits_resp_in_0_s3_full_pred_0_hit=value;
  endfunction

  function void get_io_in_bits_resp_in_0_s3_full_pred_1_br_taken_mask_0;
    output logic  value;
    value=io_in_bits_resp_in_0_s3_full_pred_1_br_taken_mask_0;
  endfunction

  function void set_io_in_bits_resp_in_0_s3_full_pred_1_br_taken_mask_0;
    input logic  value;
    io_in_bits_resp_in_0_s3_full_pred_1_br_taken_mask_0=value;
  endfunction

  function void get_io_in_bits_resp_in_0_s3_full_pred_1_br_taken_mask_1;
    output logic  value;
    value=io_in_bits_resp_in_0_s3_full_pred_1_br_taken_mask_1;
  endfunction

  function void set_io_in_bits_resp_in_0_s3_full_pred_1_br_taken_mask_1;
    input logic  value;
    io_in_bits_resp_in_0_s3_full_pred_1_br_taken_mask_1=value;
  endfunction

  function void get_io_in_bits_resp_in_0_s3_full_pred_1_slot_valids_0;
    output logic  value;
    value=io_in_bits_resp_in_0_s3_full_pred_1_slot_valids_0;
  endfunction

  function void set_io_in_bits_resp_in_0_s3_full_pred_1_slot_valids_0;
    input logic  value;
    io_in_bits_resp_in_0_s3_full_pred_1_slot_valids_0=value;
  endfunction

  function void get_io_in_bits_resp_in_0_s3_full_pred_1_slot_valids_1;
    output logic  value;
    value=io_in_bits_resp_in_0_s3_full_pred_1_slot_valids_1;
  endfunction

  function void set_io_in_bits_resp_in_0_s3_full_pred_1_slot_valids_1;
    input logic  value;
    io_in_bits_resp_in_0_s3_full_pred_1_slot_valids_1=value;
  endfunction

  function void get_io_in_bits_resp_in_0_s3_full_pred_1_targets_0;
    output logic [40:0] value;
    value=io_in_bits_resp_in_0_s3_full_pred_1_targets_0;
  endfunction

  function void set_io_in_bits_resp_in_0_s3_full_pred_1_targets_0;
    input logic [40:0] value;
    io_in_bits_resp_in_0_s3_full_pred_1_targets_0=value;
  endfunction

  function void get_io_in_bits_resp_in_0_s3_full_pred_1_targets_1;
    output logic [40:0] value;
    value=io_in_bits_resp_in_0_s3_full_pred_1_targets_1;
  endfunction

  function void set_io_in_bits_resp_in_0_s3_full_pred_1_targets_1;
    input logic [40:0] value;
    io_in_bits_resp_in_0_s3_full_pred_1_targets_1=value;
  endfunction

  function void get_io_in_bits_resp_in_0_s3_full_pred_1_jalr_target;
    output logic [40:0] value;
    value=io_in_bits_resp_in_0_s3_full_pred_1_jalr_target;
  endfunction

  function void set_io_in_bits_resp_in_0_s3_full_pred_1_jalr_target;
    input logic [40:0] value;
    io_in_bits_resp_in_0_s3_full_pred_1_jalr_target=value;
  endfunction

  function void get_io_in_bits_resp_in_0_s3_full_pred_1_fallThroughAddr;
    output logic [40:0] value;
    value=io_in_bits_resp_in_0_s3_full_pred_1_fallThroughAddr;
  endfunction

  function void set_io_in_bits_resp_in_0_s3_full_pred_1_fallThroughAddr;
    input logic [40:0] value;
    io_in_bits_resp_in_0_s3_full_pred_1_fallThroughAddr=value;
  endfunction

  function void get_io_in_bits_resp_in_0_s3_full_pred_1_fallThroughErr;
    output logic  value;
    value=io_in_bits_resp_in_0_s3_full_pred_1_fallThroughErr;
  endfunction

  function void set_io_in_bits_resp_in_0_s3_full_pred_1_fallThroughErr;
    input logic  value;
    io_in_bits_resp_in_0_s3_full_pred_1_fallThroughErr=value;
  endfunction

  function void get_io_in_bits_resp_in_0_s3_full_pred_1_multiHit;
    output logic  value;
    value=io_in_bits_resp_in_0_s3_full_pred_1_multiHit;
  endfunction

  function void set_io_in_bits_resp_in_0_s3_full_pred_1_multiHit;
    input logic  value;
    io_in_bits_resp_in_0_s3_full_pred_1_multiHit=value;
  endfunction

  function void get_io_in_bits_resp_in_0_s3_full_pred_1_is_br_sharing;
    output logic  value;
    value=io_in_bits_resp_in_0_s3_full_pred_1_is_br_sharing;
  endfunction

  function void set_io_in_bits_resp_in_0_s3_full_pred_1_is_br_sharing;
    input logic  value;
    io_in_bits_resp_in_0_s3_full_pred_1_is_br_sharing=value;
  endfunction

  function void get_io_in_bits_resp_in_0_s3_full_pred_1_hit;
    output logic  value;
    value=io_in_bits_resp_in_0_s3_full_pred_1_hit;
  endfunction

  function void set_io_in_bits_resp_in_0_s3_full_pred_1_hit;
    input logic  value;
    io_in_bits_resp_in_0_s3_full_pred_1_hit=value;
  endfunction

  function void get_io_in_bits_resp_in_0_s3_full_pred_2_br_taken_mask_0;
    output logic  value;
    value=io_in_bits_resp_in_0_s3_full_pred_2_br_taken_mask_0;
  endfunction

  function void set_io_in_bits_resp_in_0_s3_full_pred_2_br_taken_mask_0;
    input logic  value;
    io_in_bits_resp_in_0_s3_full_pred_2_br_taken_mask_0=value;
  endfunction

  function void get_io_in_bits_resp_in_0_s3_full_pred_2_br_taken_mask_1;
    output logic  value;
    value=io_in_bits_resp_in_0_s3_full_pred_2_br_taken_mask_1;
  endfunction

  function void set_io_in_bits_resp_in_0_s3_full_pred_2_br_taken_mask_1;
    input logic  value;
    io_in_bits_resp_in_0_s3_full_pred_2_br_taken_mask_1=value;
  endfunction

  function void get_io_in_bits_resp_in_0_s3_full_pred_2_slot_valids_0;
    output logic  value;
    value=io_in_bits_resp_in_0_s3_full_pred_2_slot_valids_0;
  endfunction

  function void set_io_in_bits_resp_in_0_s3_full_pred_2_slot_valids_0;
    input logic  value;
    io_in_bits_resp_in_0_s3_full_pred_2_slot_valids_0=value;
  endfunction

  function void get_io_in_bits_resp_in_0_s3_full_pred_2_slot_valids_1;
    output logic  value;
    value=io_in_bits_resp_in_0_s3_full_pred_2_slot_valids_1;
  endfunction

  function void set_io_in_bits_resp_in_0_s3_full_pred_2_slot_valids_1;
    input logic  value;
    io_in_bits_resp_in_0_s3_full_pred_2_slot_valids_1=value;
  endfunction

  function void get_io_in_bits_resp_in_0_s3_full_pred_2_targets_0;
    output logic [40:0] value;
    value=io_in_bits_resp_in_0_s3_full_pred_2_targets_0;
  endfunction

  function void set_io_in_bits_resp_in_0_s3_full_pred_2_targets_0;
    input logic [40:0] value;
    io_in_bits_resp_in_0_s3_full_pred_2_targets_0=value;
  endfunction

  function void get_io_in_bits_resp_in_0_s3_full_pred_2_targets_1;
    output logic [40:0] value;
    value=io_in_bits_resp_in_0_s3_full_pred_2_targets_1;
  endfunction

  function void set_io_in_bits_resp_in_0_s3_full_pred_2_targets_1;
    input logic [40:0] value;
    io_in_bits_resp_in_0_s3_full_pred_2_targets_1=value;
  endfunction

  function void get_io_in_bits_resp_in_0_s3_full_pred_2_jalr_target;
    output logic [40:0] value;
    value=io_in_bits_resp_in_0_s3_full_pred_2_jalr_target;
  endfunction

  function void set_io_in_bits_resp_in_0_s3_full_pred_2_jalr_target;
    input logic [40:0] value;
    io_in_bits_resp_in_0_s3_full_pred_2_jalr_target=value;
  endfunction

  function void get_io_in_bits_resp_in_0_s3_full_pred_2_fallThroughAddr;
    output logic [40:0] value;
    value=io_in_bits_resp_in_0_s3_full_pred_2_fallThroughAddr;
  endfunction

  function void set_io_in_bits_resp_in_0_s3_full_pred_2_fallThroughAddr;
    input logic [40:0] value;
    io_in_bits_resp_in_0_s3_full_pred_2_fallThroughAddr=value;
  endfunction

  function void get_io_in_bits_resp_in_0_s3_full_pred_2_fallThroughErr;
    output logic  value;
    value=io_in_bits_resp_in_0_s3_full_pred_2_fallThroughErr;
  endfunction

  function void set_io_in_bits_resp_in_0_s3_full_pred_2_fallThroughErr;
    input logic  value;
    io_in_bits_resp_in_0_s3_full_pred_2_fallThroughErr=value;
  endfunction

  function void get_io_in_bits_resp_in_0_s3_full_pred_2_multiHit;
    output logic  value;
    value=io_in_bits_resp_in_0_s3_full_pred_2_multiHit;
  endfunction

  function void set_io_in_bits_resp_in_0_s3_full_pred_2_multiHit;
    input logic  value;
    io_in_bits_resp_in_0_s3_full_pred_2_multiHit=value;
  endfunction

  function void get_io_in_bits_resp_in_0_s3_full_pred_2_is_jalr;
    output logic  value;
    value=io_in_bits_resp_in_0_s3_full_pred_2_is_jalr;
  endfunction

  function void set_io_in_bits_resp_in_0_s3_full_pred_2_is_jalr;
    input logic  value;
    io_in_bits_resp_in_0_s3_full_pred_2_is_jalr=value;
  endfunction

  function void get_io_in_bits_resp_in_0_s3_full_pred_2_is_call;
    output logic  value;
    value=io_in_bits_resp_in_0_s3_full_pred_2_is_call;
  endfunction

  function void set_io_in_bits_resp_in_0_s3_full_pred_2_is_call;
    input logic  value;
    io_in_bits_resp_in_0_s3_full_pred_2_is_call=value;
  endfunction

  function void get_io_in_bits_resp_in_0_s3_full_pred_2_is_ret;
    output logic  value;
    value=io_in_bits_resp_in_0_s3_full_pred_2_is_ret;
  endfunction

  function void set_io_in_bits_resp_in_0_s3_full_pred_2_is_ret;
    input logic  value;
    io_in_bits_resp_in_0_s3_full_pred_2_is_ret=value;
  endfunction

  function void get_io_in_bits_resp_in_0_s3_full_pred_2_is_br_sharing;
    output logic  value;
    value=io_in_bits_resp_in_0_s3_full_pred_2_is_br_sharing;
  endfunction

  function void set_io_in_bits_resp_in_0_s3_full_pred_2_is_br_sharing;
    input logic  value;
    io_in_bits_resp_in_0_s3_full_pred_2_is_br_sharing=value;
  endfunction

  function void get_io_in_bits_resp_in_0_s3_full_pred_2_hit;
    output logic  value;
    value=io_in_bits_resp_in_0_s3_full_pred_2_hit;
  endfunction

  function void set_io_in_bits_resp_in_0_s3_full_pred_2_hit;
    input logic  value;
    io_in_bits_resp_in_0_s3_full_pred_2_hit=value;
  endfunction

  function void get_io_in_bits_resp_in_0_s3_full_pred_3_br_taken_mask_0;
    output logic  value;
    value=io_in_bits_resp_in_0_s3_full_pred_3_br_taken_mask_0;
  endfunction

  function void set_io_in_bits_resp_in_0_s3_full_pred_3_br_taken_mask_0;
    input logic  value;
    io_in_bits_resp_in_0_s3_full_pred_3_br_taken_mask_0=value;
  endfunction

  function void get_io_in_bits_resp_in_0_s3_full_pred_3_br_taken_mask_1;
    output logic  value;
    value=io_in_bits_resp_in_0_s3_full_pred_3_br_taken_mask_1;
  endfunction

  function void set_io_in_bits_resp_in_0_s3_full_pred_3_br_taken_mask_1;
    input logic  value;
    io_in_bits_resp_in_0_s3_full_pred_3_br_taken_mask_1=value;
  endfunction

  function void get_io_in_bits_resp_in_0_s3_full_pred_3_slot_valids_0;
    output logic  value;
    value=io_in_bits_resp_in_0_s3_full_pred_3_slot_valids_0;
  endfunction

  function void set_io_in_bits_resp_in_0_s3_full_pred_3_slot_valids_0;
    input logic  value;
    io_in_bits_resp_in_0_s3_full_pred_3_slot_valids_0=value;
  endfunction

  function void get_io_in_bits_resp_in_0_s3_full_pred_3_slot_valids_1;
    output logic  value;
    value=io_in_bits_resp_in_0_s3_full_pred_3_slot_valids_1;
  endfunction

  function void set_io_in_bits_resp_in_0_s3_full_pred_3_slot_valids_1;
    input logic  value;
    io_in_bits_resp_in_0_s3_full_pred_3_slot_valids_1=value;
  endfunction

  function void get_io_in_bits_resp_in_0_s3_full_pred_3_targets_0;
    output logic [40:0] value;
    value=io_in_bits_resp_in_0_s3_full_pred_3_targets_0;
  endfunction

  function void set_io_in_bits_resp_in_0_s3_full_pred_3_targets_0;
    input logic [40:0] value;
    io_in_bits_resp_in_0_s3_full_pred_3_targets_0=value;
  endfunction

  function void get_io_in_bits_resp_in_0_s3_full_pred_3_targets_1;
    output logic [40:0] value;
    value=io_in_bits_resp_in_0_s3_full_pred_3_targets_1;
  endfunction

  function void set_io_in_bits_resp_in_0_s3_full_pred_3_targets_1;
    input logic [40:0] value;
    io_in_bits_resp_in_0_s3_full_pred_3_targets_1=value;
  endfunction

  function void get_io_in_bits_resp_in_0_s3_full_pred_3_jalr_target;
    output logic [40:0] value;
    value=io_in_bits_resp_in_0_s3_full_pred_3_jalr_target;
  endfunction

  function void set_io_in_bits_resp_in_0_s3_full_pred_3_jalr_target;
    input logic [40:0] value;
    io_in_bits_resp_in_0_s3_full_pred_3_jalr_target=value;
  endfunction

  function void get_io_in_bits_resp_in_0_s3_full_pred_3_offsets_0;
    output logic [3:0] value;
    value=io_in_bits_resp_in_0_s3_full_pred_3_offsets_0;
  endfunction

  function void set_io_in_bits_resp_in_0_s3_full_pred_3_offsets_0;
    input logic [3:0] value;
    io_in_bits_resp_in_0_s3_full_pred_3_offsets_0=value;
  endfunction

  function void get_io_in_bits_resp_in_0_s3_full_pred_3_offsets_1;
    output logic [3:0] value;
    value=io_in_bits_resp_in_0_s3_full_pred_3_offsets_1;
  endfunction

  function void set_io_in_bits_resp_in_0_s3_full_pred_3_offsets_1;
    input logic [3:0] value;
    io_in_bits_resp_in_0_s3_full_pred_3_offsets_1=value;
  endfunction

  function void get_io_in_bits_resp_in_0_s3_full_pred_3_fallThroughAddr;
    output logic [40:0] value;
    value=io_in_bits_resp_in_0_s3_full_pred_3_fallThroughAddr;
  endfunction

  function void set_io_in_bits_resp_in_0_s3_full_pred_3_fallThroughAddr;
    input logic [40:0] value;
    io_in_bits_resp_in_0_s3_full_pred_3_fallThroughAddr=value;
  endfunction

  function void get_io_in_bits_resp_in_0_s3_full_pred_3_fallThroughErr;
    output logic  value;
    value=io_in_bits_resp_in_0_s3_full_pred_3_fallThroughErr;
  endfunction

  function void set_io_in_bits_resp_in_0_s3_full_pred_3_fallThroughErr;
    input logic  value;
    io_in_bits_resp_in_0_s3_full_pred_3_fallThroughErr=value;
  endfunction

  function void get_io_in_bits_resp_in_0_s3_full_pred_3_multiHit;
    output logic  value;
    value=io_in_bits_resp_in_0_s3_full_pred_3_multiHit;
  endfunction

  function void set_io_in_bits_resp_in_0_s3_full_pred_3_multiHit;
    input logic  value;
    io_in_bits_resp_in_0_s3_full_pred_3_multiHit=value;
  endfunction

  function void get_io_in_bits_resp_in_0_s3_full_pred_3_is_br_sharing;
    output logic  value;
    value=io_in_bits_resp_in_0_s3_full_pred_3_is_br_sharing;
  endfunction

  function void set_io_in_bits_resp_in_0_s3_full_pred_3_is_br_sharing;
    input logic  value;
    io_in_bits_resp_in_0_s3_full_pred_3_is_br_sharing=value;
  endfunction

  function void get_io_in_bits_resp_in_0_s3_full_pred_3_hit;
    output logic  value;
    value=io_in_bits_resp_in_0_s3_full_pred_3_hit;
  endfunction

  function void set_io_in_bits_resp_in_0_s3_full_pred_3_hit;
    input logic  value;
    io_in_bits_resp_in_0_s3_full_pred_3_hit=value;
  endfunction

  function void get_io_in_bits_resp_in_0_last_stage_ftb_entry_isCall;
    output logic  value;
    value=io_in_bits_resp_in_0_last_stage_ftb_entry_isCall;
  endfunction

  function void set_io_in_bits_resp_in_0_last_stage_ftb_entry_isCall;
    input logic  value;
    io_in_bits_resp_in_0_last_stage_ftb_entry_isCall=value;
  endfunction

  function void get_io_in_bits_resp_in_0_last_stage_ftb_entry_isRet;
    output logic  value;
    value=io_in_bits_resp_in_0_last_stage_ftb_entry_isRet;
  endfunction

  function void set_io_in_bits_resp_in_0_last_stage_ftb_entry_isRet;
    input logic  value;
    io_in_bits_resp_in_0_last_stage_ftb_entry_isRet=value;
  endfunction

  function void get_io_in_bits_resp_in_0_last_stage_ftb_entry_isJalr;
    output logic  value;
    value=io_in_bits_resp_in_0_last_stage_ftb_entry_isJalr;
  endfunction

  function void set_io_in_bits_resp_in_0_last_stage_ftb_entry_isJalr;
    input logic  value;
    io_in_bits_resp_in_0_last_stage_ftb_entry_isJalr=value;
  endfunction

  function void get_io_in_bits_resp_in_0_last_stage_ftb_entry_valid;
    output logic  value;
    value=io_in_bits_resp_in_0_last_stage_ftb_entry_valid;
  endfunction

  function void set_io_in_bits_resp_in_0_last_stage_ftb_entry_valid;
    input logic  value;
    io_in_bits_resp_in_0_last_stage_ftb_entry_valid=value;
  endfunction

  function void get_io_in_bits_resp_in_0_last_stage_ftb_entry_brSlots_0_offset;
    output logic [3:0] value;
    value=io_in_bits_resp_in_0_last_stage_ftb_entry_brSlots_0_offset;
  endfunction

  function void set_io_in_bits_resp_in_0_last_stage_ftb_entry_brSlots_0_offset;
    input logic [3:0] value;
    io_in_bits_resp_in_0_last_stage_ftb_entry_brSlots_0_offset=value;
  endfunction

  function void get_io_in_bits_resp_in_0_last_stage_ftb_entry_brSlots_0_sharing;
    output logic  value;
    value=io_in_bits_resp_in_0_last_stage_ftb_entry_brSlots_0_sharing;
  endfunction

  function void set_io_in_bits_resp_in_0_last_stage_ftb_entry_brSlots_0_sharing;
    input logic  value;
    io_in_bits_resp_in_0_last_stage_ftb_entry_brSlots_0_sharing=value;
  endfunction

  function void get_io_in_bits_resp_in_0_last_stage_ftb_entry_brSlots_0_valid;
    output logic  value;
    value=io_in_bits_resp_in_0_last_stage_ftb_entry_brSlots_0_valid;
  endfunction

  function void set_io_in_bits_resp_in_0_last_stage_ftb_entry_brSlots_0_valid;
    input logic  value;
    io_in_bits_resp_in_0_last_stage_ftb_entry_brSlots_0_valid=value;
  endfunction

  function void get_io_in_bits_resp_in_0_last_stage_ftb_entry_brSlots_0_lower;
    output logic [11:0] value;
    value=io_in_bits_resp_in_0_last_stage_ftb_entry_brSlots_0_lower;
  endfunction

  function void set_io_in_bits_resp_in_0_last_stage_ftb_entry_brSlots_0_lower;
    input logic [11:0] value;
    io_in_bits_resp_in_0_last_stage_ftb_entry_brSlots_0_lower=value;
  endfunction

  function void get_io_in_bits_resp_in_0_last_stage_ftb_entry_brSlots_0_tarStat;
    output logic [1:0] value;
    value=io_in_bits_resp_in_0_last_stage_ftb_entry_brSlots_0_tarStat;
  endfunction

  function void set_io_in_bits_resp_in_0_last_stage_ftb_entry_brSlots_0_tarStat;
    input logic [1:0] value;
    io_in_bits_resp_in_0_last_stage_ftb_entry_brSlots_0_tarStat=value;
  endfunction

  function void get_io_in_bits_resp_in_0_last_stage_ftb_entry_tailSlot_offset;
    output logic [3:0] value;
    value=io_in_bits_resp_in_0_last_stage_ftb_entry_tailSlot_offset;
  endfunction

  function void set_io_in_bits_resp_in_0_last_stage_ftb_entry_tailSlot_offset;
    input logic [3:0] value;
    io_in_bits_resp_in_0_last_stage_ftb_entry_tailSlot_offset=value;
  endfunction

  function void get_io_in_bits_resp_in_0_last_stage_ftb_entry_tailSlot_sharing;
    output logic  value;
    value=io_in_bits_resp_in_0_last_stage_ftb_entry_tailSlot_sharing;
  endfunction

  function void set_io_in_bits_resp_in_0_last_stage_ftb_entry_tailSlot_sharing;
    input logic  value;
    io_in_bits_resp_in_0_last_stage_ftb_entry_tailSlot_sharing=value;
  endfunction

  function void get_io_in_bits_resp_in_0_last_stage_ftb_entry_tailSlot_valid;
    output logic  value;
    value=io_in_bits_resp_in_0_last_stage_ftb_entry_tailSlot_valid;
  endfunction

  function void set_io_in_bits_resp_in_0_last_stage_ftb_entry_tailSlot_valid;
    input logic  value;
    io_in_bits_resp_in_0_last_stage_ftb_entry_tailSlot_valid=value;
  endfunction

  function void get_io_in_bits_resp_in_0_last_stage_ftb_entry_tailSlot_lower;
    output logic [19:0] value;
    value=io_in_bits_resp_in_0_last_stage_ftb_entry_tailSlot_lower;
  endfunction

  function void set_io_in_bits_resp_in_0_last_stage_ftb_entry_tailSlot_lower;
    input logic [19:0] value;
    io_in_bits_resp_in_0_last_stage_ftb_entry_tailSlot_lower=value;
  endfunction

  function void get_io_in_bits_resp_in_0_last_stage_ftb_entry_tailSlot_tarStat;
    output logic [1:0] value;
    value=io_in_bits_resp_in_0_last_stage_ftb_entry_tailSlot_tarStat;
  endfunction

  function void set_io_in_bits_resp_in_0_last_stage_ftb_entry_tailSlot_tarStat;
    input logic [1:0] value;
    io_in_bits_resp_in_0_last_stage_ftb_entry_tailSlot_tarStat=value;
  endfunction

  function void get_io_in_bits_resp_in_0_last_stage_ftb_entry_pftAddr;
    output logic [3:0] value;
    value=io_in_bits_resp_in_0_last_stage_ftb_entry_pftAddr;
  endfunction

  function void set_io_in_bits_resp_in_0_last_stage_ftb_entry_pftAddr;
    input logic [3:0] value;
    io_in_bits_resp_in_0_last_stage_ftb_entry_pftAddr=value;
  endfunction

  function void get_io_in_bits_resp_in_0_last_stage_ftb_entry_carry;
    output logic  value;
    value=io_in_bits_resp_in_0_last_stage_ftb_entry_carry;
  endfunction

  function void set_io_in_bits_resp_in_0_last_stage_ftb_entry_carry;
    input logic  value;
    io_in_bits_resp_in_0_last_stage_ftb_entry_carry=value;
  endfunction

  function void get_io_in_bits_resp_in_0_last_stage_ftb_entry_last_may_be_rvi_call;
    output logic  value;
    value=io_in_bits_resp_in_0_last_stage_ftb_entry_last_may_be_rvi_call;
  endfunction

  function void set_io_in_bits_resp_in_0_last_stage_ftb_entry_last_may_be_rvi_call;
    input logic  value;
    io_in_bits_resp_in_0_last_stage_ftb_entry_last_may_be_rvi_call=value;
  endfunction

  function void get_io_in_bits_resp_in_0_last_stage_ftb_entry_always_taken_0;
    output logic  value;
    value=io_in_bits_resp_in_0_last_stage_ftb_entry_always_taken_0;
  endfunction

  function void set_io_in_bits_resp_in_0_last_stage_ftb_entry_always_taken_0;
    input logic  value;
    io_in_bits_resp_in_0_last_stage_ftb_entry_always_taken_0=value;
  endfunction

  function void get_io_in_bits_resp_in_0_last_stage_ftb_entry_always_taken_1;
    output logic  value;
    value=io_in_bits_resp_in_0_last_stage_ftb_entry_always_taken_1;
  endfunction

  function void set_io_in_bits_resp_in_0_last_stage_ftb_entry_always_taken_1;
    input logic  value;
    io_in_bits_resp_in_0_last_stage_ftb_entry_always_taken_1=value;
  endfunction

  function void get_io_out_s2_pc_0;
    output logic [40:0] value;
    value=io_out_s2_pc_0;
  endfunction

  function void set_io_out_s2_pc_0;
    input logic [40:0] value;
    io_out_s2_pc_0=value;
  endfunction

  function void get_io_out_s2_pc_1;
    output logic [40:0] value;
    value=io_out_s2_pc_1;
  endfunction

  function void set_io_out_s2_pc_1;
    input logic [40:0] value;
    io_out_s2_pc_1=value;
  endfunction

  function void get_io_out_s2_pc_2;
    output logic [40:0] value;
    value=io_out_s2_pc_2;
  endfunction

  function void set_io_out_s2_pc_2;
    input logic [40:0] value;
    io_out_s2_pc_2=value;
  endfunction

  function void get_io_out_s2_pc_3;
    output logic [40:0] value;
    value=io_out_s2_pc_3;
  endfunction

  function void set_io_out_s2_pc_3;
    input logic [40:0] value;
    io_out_s2_pc_3=value;
  endfunction

  function void get_io_out_s2_full_pred_0_br_taken_mask_0;
    output logic  value;
    value=io_out_s2_full_pred_0_br_taken_mask_0;
  endfunction

  function void set_io_out_s2_full_pred_0_br_taken_mask_0;
    input logic  value;
    io_out_s2_full_pred_0_br_taken_mask_0=value;
  endfunction

  function void get_io_out_s2_full_pred_0_br_taken_mask_1;
    output logic  value;
    value=io_out_s2_full_pred_0_br_taken_mask_1;
  endfunction

  function void set_io_out_s2_full_pred_0_br_taken_mask_1;
    input logic  value;
    io_out_s2_full_pred_0_br_taken_mask_1=value;
  endfunction

  function void get_io_out_s2_full_pred_0_slot_valids_0;
    output logic  value;
    value=io_out_s2_full_pred_0_slot_valids_0;
  endfunction

  function void set_io_out_s2_full_pred_0_slot_valids_0;
    input logic  value;
    io_out_s2_full_pred_0_slot_valids_0=value;
  endfunction

  function void get_io_out_s2_full_pred_0_slot_valids_1;
    output logic  value;
    value=io_out_s2_full_pred_0_slot_valids_1;
  endfunction

  function void set_io_out_s2_full_pred_0_slot_valids_1;
    input logic  value;
    io_out_s2_full_pred_0_slot_valids_1=value;
  endfunction

  function void get_io_out_s2_full_pred_0_targets_0;
    output logic [40:0] value;
    value=io_out_s2_full_pred_0_targets_0;
  endfunction

  function void set_io_out_s2_full_pred_0_targets_0;
    input logic [40:0] value;
    io_out_s2_full_pred_0_targets_0=value;
  endfunction

  function void get_io_out_s2_full_pred_0_targets_1;
    output logic [40:0] value;
    value=io_out_s2_full_pred_0_targets_1;
  endfunction

  function void set_io_out_s2_full_pred_0_targets_1;
    input logic [40:0] value;
    io_out_s2_full_pred_0_targets_1=value;
  endfunction

  function void get_io_out_s2_full_pred_0_offsets_0;
    output logic [3:0] value;
    value=io_out_s2_full_pred_0_offsets_0;
  endfunction

  function void set_io_out_s2_full_pred_0_offsets_0;
    input logic [3:0] value;
    io_out_s2_full_pred_0_offsets_0=value;
  endfunction

  function void get_io_out_s2_full_pred_0_offsets_1;
    output logic [3:0] value;
    value=io_out_s2_full_pred_0_offsets_1;
  endfunction

  function void set_io_out_s2_full_pred_0_offsets_1;
    input logic [3:0] value;
    io_out_s2_full_pred_0_offsets_1=value;
  endfunction

  function void get_io_out_s2_full_pred_0_fallThroughAddr;
    output logic [40:0] value;
    value=io_out_s2_full_pred_0_fallThroughAddr;
  endfunction

  function void set_io_out_s2_full_pred_0_fallThroughAddr;
    input logic [40:0] value;
    io_out_s2_full_pred_0_fallThroughAddr=value;
  endfunction

  function void get_io_out_s2_full_pred_0_is_br_sharing;
    output logic  value;
    value=io_out_s2_full_pred_0_is_br_sharing;
  endfunction

  function void set_io_out_s2_full_pred_0_is_br_sharing;
    input logic  value;
    io_out_s2_full_pred_0_is_br_sharing=value;
  endfunction

  function void get_io_out_s2_full_pred_0_hit;
    output logic  value;
    value=io_out_s2_full_pred_0_hit;
  endfunction

  function void set_io_out_s2_full_pred_0_hit;
    input logic  value;
    io_out_s2_full_pred_0_hit=value;
  endfunction

  function void get_io_out_s2_full_pred_1_br_taken_mask_0;
    output logic  value;
    value=io_out_s2_full_pred_1_br_taken_mask_0;
  endfunction

  function void set_io_out_s2_full_pred_1_br_taken_mask_0;
    input logic  value;
    io_out_s2_full_pred_1_br_taken_mask_0=value;
  endfunction

  function void get_io_out_s2_full_pred_1_br_taken_mask_1;
    output logic  value;
    value=io_out_s2_full_pred_1_br_taken_mask_1;
  endfunction

  function void set_io_out_s2_full_pred_1_br_taken_mask_1;
    input logic  value;
    io_out_s2_full_pred_1_br_taken_mask_1=value;
  endfunction

  function void get_io_out_s2_full_pred_1_slot_valids_0;
    output logic  value;
    value=io_out_s2_full_pred_1_slot_valids_0;
  endfunction

  function void set_io_out_s2_full_pred_1_slot_valids_0;
    input logic  value;
    io_out_s2_full_pred_1_slot_valids_0=value;
  endfunction

  function void get_io_out_s2_full_pred_1_slot_valids_1;
    output logic  value;
    value=io_out_s2_full_pred_1_slot_valids_1;
  endfunction

  function void set_io_out_s2_full_pred_1_slot_valids_1;
    input logic  value;
    io_out_s2_full_pred_1_slot_valids_1=value;
  endfunction

  function void get_io_out_s2_full_pred_1_targets_0;
    output logic [40:0] value;
    value=io_out_s2_full_pred_1_targets_0;
  endfunction

  function void set_io_out_s2_full_pred_1_targets_0;
    input logic [40:0] value;
    io_out_s2_full_pred_1_targets_0=value;
  endfunction

  function void get_io_out_s2_full_pred_1_targets_1;
    output logic [40:0] value;
    value=io_out_s2_full_pred_1_targets_1;
  endfunction

  function void set_io_out_s2_full_pred_1_targets_1;
    input logic [40:0] value;
    io_out_s2_full_pred_1_targets_1=value;
  endfunction

  function void get_io_out_s2_full_pred_1_offsets_0;
    output logic [3:0] value;
    value=io_out_s2_full_pred_1_offsets_0;
  endfunction

  function void set_io_out_s2_full_pred_1_offsets_0;
    input logic [3:0] value;
    io_out_s2_full_pred_1_offsets_0=value;
  endfunction

  function void get_io_out_s2_full_pred_1_offsets_1;
    output logic [3:0] value;
    value=io_out_s2_full_pred_1_offsets_1;
  endfunction

  function void set_io_out_s2_full_pred_1_offsets_1;
    input logic [3:0] value;
    io_out_s2_full_pred_1_offsets_1=value;
  endfunction

  function void get_io_out_s2_full_pred_1_fallThroughAddr;
    output logic [40:0] value;
    value=io_out_s2_full_pred_1_fallThroughAddr;
  endfunction

  function void set_io_out_s2_full_pred_1_fallThroughAddr;
    input logic [40:0] value;
    io_out_s2_full_pred_1_fallThroughAddr=value;
  endfunction

  function void get_io_out_s2_full_pred_1_is_br_sharing;
    output logic  value;
    value=io_out_s2_full_pred_1_is_br_sharing;
  endfunction

  function void set_io_out_s2_full_pred_1_is_br_sharing;
    input logic  value;
    io_out_s2_full_pred_1_is_br_sharing=value;
  endfunction

  function void get_io_out_s2_full_pred_1_hit;
    output logic  value;
    value=io_out_s2_full_pred_1_hit;
  endfunction

  function void set_io_out_s2_full_pred_1_hit;
    input logic  value;
    io_out_s2_full_pred_1_hit=value;
  endfunction

  function void get_io_out_s2_full_pred_2_br_taken_mask_0;
    output logic  value;
    value=io_out_s2_full_pred_2_br_taken_mask_0;
  endfunction

  function void set_io_out_s2_full_pred_2_br_taken_mask_0;
    input logic  value;
    io_out_s2_full_pred_2_br_taken_mask_0=value;
  endfunction

  function void get_io_out_s2_full_pred_2_br_taken_mask_1;
    output logic  value;
    value=io_out_s2_full_pred_2_br_taken_mask_1;
  endfunction

  function void set_io_out_s2_full_pred_2_br_taken_mask_1;
    input logic  value;
    io_out_s2_full_pred_2_br_taken_mask_1=value;
  endfunction

  function void get_io_out_s2_full_pred_2_slot_valids_0;
    output logic  value;
    value=io_out_s2_full_pred_2_slot_valids_0;
  endfunction

  function void set_io_out_s2_full_pred_2_slot_valids_0;
    input logic  value;
    io_out_s2_full_pred_2_slot_valids_0=value;
  endfunction

  function void get_io_out_s2_full_pred_2_slot_valids_1;
    output logic  value;
    value=io_out_s2_full_pred_2_slot_valids_1;
  endfunction

  function void set_io_out_s2_full_pred_2_slot_valids_1;
    input logic  value;
    io_out_s2_full_pred_2_slot_valids_1=value;
  endfunction

  function void get_io_out_s2_full_pred_2_targets_0;
    output logic [40:0] value;
    value=io_out_s2_full_pred_2_targets_0;
  endfunction

  function void set_io_out_s2_full_pred_2_targets_0;
    input logic [40:0] value;
    io_out_s2_full_pred_2_targets_0=value;
  endfunction

  function void get_io_out_s2_full_pred_2_targets_1;
    output logic [40:0] value;
    value=io_out_s2_full_pred_2_targets_1;
  endfunction

  function void set_io_out_s2_full_pred_2_targets_1;
    input logic [40:0] value;
    io_out_s2_full_pred_2_targets_1=value;
  endfunction

  function void get_io_out_s2_full_pred_2_offsets_0;
    output logic [3:0] value;
    value=io_out_s2_full_pred_2_offsets_0;
  endfunction

  function void set_io_out_s2_full_pred_2_offsets_0;
    input logic [3:0] value;
    io_out_s2_full_pred_2_offsets_0=value;
  endfunction

  function void get_io_out_s2_full_pred_2_offsets_1;
    output logic [3:0] value;
    value=io_out_s2_full_pred_2_offsets_1;
  endfunction

  function void set_io_out_s2_full_pred_2_offsets_1;
    input logic [3:0] value;
    io_out_s2_full_pred_2_offsets_1=value;
  endfunction

  function void get_io_out_s2_full_pred_2_fallThroughAddr;
    output logic [40:0] value;
    value=io_out_s2_full_pred_2_fallThroughAddr;
  endfunction

  function void set_io_out_s2_full_pred_2_fallThroughAddr;
    input logic [40:0] value;
    io_out_s2_full_pred_2_fallThroughAddr=value;
  endfunction

  function void get_io_out_s2_full_pred_2_is_br_sharing;
    output logic  value;
    value=io_out_s2_full_pred_2_is_br_sharing;
  endfunction

  function void set_io_out_s2_full_pred_2_is_br_sharing;
    input logic  value;
    io_out_s2_full_pred_2_is_br_sharing=value;
  endfunction

  function void get_io_out_s2_full_pred_2_hit;
    output logic  value;
    value=io_out_s2_full_pred_2_hit;
  endfunction

  function void set_io_out_s2_full_pred_2_hit;
    input logic  value;
    io_out_s2_full_pred_2_hit=value;
  endfunction

  function void get_io_out_s2_full_pred_3_br_taken_mask_0;
    output logic  value;
    value=io_out_s2_full_pred_3_br_taken_mask_0;
  endfunction

  function void set_io_out_s2_full_pred_3_br_taken_mask_0;
    input logic  value;
    io_out_s2_full_pred_3_br_taken_mask_0=value;
  endfunction

  function void get_io_out_s2_full_pred_3_br_taken_mask_1;
    output logic  value;
    value=io_out_s2_full_pred_3_br_taken_mask_1;
  endfunction

  function void set_io_out_s2_full_pred_3_br_taken_mask_1;
    input logic  value;
    io_out_s2_full_pred_3_br_taken_mask_1=value;
  endfunction

  function void get_io_out_s2_full_pred_3_slot_valids_0;
    output logic  value;
    value=io_out_s2_full_pred_3_slot_valids_0;
  endfunction

  function void set_io_out_s2_full_pred_3_slot_valids_0;
    input logic  value;
    io_out_s2_full_pred_3_slot_valids_0=value;
  endfunction

  function void get_io_out_s2_full_pred_3_slot_valids_1;
    output logic  value;
    value=io_out_s2_full_pred_3_slot_valids_1;
  endfunction

  function void set_io_out_s2_full_pred_3_slot_valids_1;
    input logic  value;
    io_out_s2_full_pred_3_slot_valids_1=value;
  endfunction

  function void get_io_out_s2_full_pred_3_targets_0;
    output logic [40:0] value;
    value=io_out_s2_full_pred_3_targets_0;
  endfunction

  function void set_io_out_s2_full_pred_3_targets_0;
    input logic [40:0] value;
    io_out_s2_full_pred_3_targets_0=value;
  endfunction

  function void get_io_out_s2_full_pred_3_targets_1;
    output logic [40:0] value;
    value=io_out_s2_full_pred_3_targets_1;
  endfunction

  function void set_io_out_s2_full_pred_3_targets_1;
    input logic [40:0] value;
    io_out_s2_full_pred_3_targets_1=value;
  endfunction

  function void get_io_out_s2_full_pred_3_offsets_0;
    output logic [3:0] value;
    value=io_out_s2_full_pred_3_offsets_0;
  endfunction

  function void set_io_out_s2_full_pred_3_offsets_0;
    input logic [3:0] value;
    io_out_s2_full_pred_3_offsets_0=value;
  endfunction

  function void get_io_out_s2_full_pred_3_offsets_1;
    output logic [3:0] value;
    value=io_out_s2_full_pred_3_offsets_1;
  endfunction

  function void set_io_out_s2_full_pred_3_offsets_1;
    input logic [3:0] value;
    io_out_s2_full_pred_3_offsets_1=value;
  endfunction

  function void get_io_out_s2_full_pred_3_fallThroughAddr;
    output logic [40:0] value;
    value=io_out_s2_full_pred_3_fallThroughAddr;
  endfunction

  function void set_io_out_s2_full_pred_3_fallThroughAddr;
    input logic [40:0] value;
    io_out_s2_full_pred_3_fallThroughAddr=value;
  endfunction

  function void get_io_out_s2_full_pred_3_fallThroughErr;
    output logic  value;
    value=io_out_s2_full_pred_3_fallThroughErr;
  endfunction

  function void set_io_out_s2_full_pred_3_fallThroughErr;
    input logic  value;
    io_out_s2_full_pred_3_fallThroughErr=value;
  endfunction

  function void get_io_out_s2_full_pred_3_is_br_sharing;
    output logic  value;
    value=io_out_s2_full_pred_3_is_br_sharing;
  endfunction

  function void set_io_out_s2_full_pred_3_is_br_sharing;
    input logic  value;
    io_out_s2_full_pred_3_is_br_sharing=value;
  endfunction

  function void get_io_out_s2_full_pred_3_hit;
    output logic  value;
    value=io_out_s2_full_pred_3_hit;
  endfunction

  function void set_io_out_s2_full_pred_3_hit;
    input logic  value;
    io_out_s2_full_pred_3_hit=value;
  endfunction

  function void get_io_out_s3_pc_0;
    output logic [40:0] value;
    value=io_out_s3_pc_0;
  endfunction

  function void set_io_out_s3_pc_0;
    input logic [40:0] value;
    io_out_s3_pc_0=value;
  endfunction

  function void get_io_out_s3_pc_1;
    output logic [40:0] value;
    value=io_out_s3_pc_1;
  endfunction

  function void set_io_out_s3_pc_1;
    input logic [40:0] value;
    io_out_s3_pc_1=value;
  endfunction

  function void get_io_out_s3_pc_2;
    output logic [40:0] value;
    value=io_out_s3_pc_2;
  endfunction

  function void set_io_out_s3_pc_2;
    input logic [40:0] value;
    io_out_s3_pc_2=value;
  endfunction

  function void get_io_out_s3_pc_3;
    output logic [40:0] value;
    value=io_out_s3_pc_3;
  endfunction

  function void set_io_out_s3_pc_3;
    input logic [40:0] value;
    io_out_s3_pc_3=value;
  endfunction

  function void get_io_out_s3_full_pred_0_br_taken_mask_0;
    output logic  value;
    value=io_out_s3_full_pred_0_br_taken_mask_0;
  endfunction

  function void set_io_out_s3_full_pred_0_br_taken_mask_0;
    input logic  value;
    io_out_s3_full_pred_0_br_taken_mask_0=value;
  endfunction

  function void get_io_out_s3_full_pred_0_br_taken_mask_1;
    output logic  value;
    value=io_out_s3_full_pred_0_br_taken_mask_1;
  endfunction

  function void set_io_out_s3_full_pred_0_br_taken_mask_1;
    input logic  value;
    io_out_s3_full_pred_0_br_taken_mask_1=value;
  endfunction

  function void get_io_out_s3_full_pred_0_slot_valids_0;
    output logic  value;
    value=io_out_s3_full_pred_0_slot_valids_0;
  endfunction

  function void set_io_out_s3_full_pred_0_slot_valids_0;
    input logic  value;
    io_out_s3_full_pred_0_slot_valids_0=value;
  endfunction

  function void get_io_out_s3_full_pred_0_slot_valids_1;
    output logic  value;
    value=io_out_s3_full_pred_0_slot_valids_1;
  endfunction

  function void set_io_out_s3_full_pred_0_slot_valids_1;
    input logic  value;
    io_out_s3_full_pred_0_slot_valids_1=value;
  endfunction

  function void get_io_out_s3_full_pred_0_targets_0;
    output logic [40:0] value;
    value=io_out_s3_full_pred_0_targets_0;
  endfunction

  function void set_io_out_s3_full_pred_0_targets_0;
    input logic [40:0] value;
    io_out_s3_full_pred_0_targets_0=value;
  endfunction

  function void get_io_out_s3_full_pred_0_targets_1;
    output logic [40:0] value;
    value=io_out_s3_full_pred_0_targets_1;
  endfunction

  function void set_io_out_s3_full_pred_0_targets_1;
    input logic [40:0] value;
    io_out_s3_full_pred_0_targets_1=value;
  endfunction

  function void get_io_out_s3_full_pred_0_fallThroughAddr;
    output logic [40:0] value;
    value=io_out_s3_full_pred_0_fallThroughAddr;
  endfunction

  function void set_io_out_s3_full_pred_0_fallThroughAddr;
    input logic [40:0] value;
    io_out_s3_full_pred_0_fallThroughAddr=value;
  endfunction

  function void get_io_out_s3_full_pred_0_fallThroughErr;
    output logic  value;
    value=io_out_s3_full_pred_0_fallThroughErr;
  endfunction

  function void set_io_out_s3_full_pred_0_fallThroughErr;
    input logic  value;
    io_out_s3_full_pred_0_fallThroughErr=value;
  endfunction

  function void get_io_out_s3_full_pred_0_multiHit;
    output logic  value;
    value=io_out_s3_full_pred_0_multiHit;
  endfunction

  function void set_io_out_s3_full_pred_0_multiHit;
    input logic  value;
    io_out_s3_full_pred_0_multiHit=value;
  endfunction

  function void get_io_out_s3_full_pred_0_is_br_sharing;
    output logic  value;
    value=io_out_s3_full_pred_0_is_br_sharing;
  endfunction

  function void set_io_out_s3_full_pred_0_is_br_sharing;
    input logic  value;
    io_out_s3_full_pred_0_is_br_sharing=value;
  endfunction

  function void get_io_out_s3_full_pred_0_hit;
    output logic  value;
    value=io_out_s3_full_pred_0_hit;
  endfunction

  function void set_io_out_s3_full_pred_0_hit;
    input logic  value;
    io_out_s3_full_pred_0_hit=value;
  endfunction

  function void get_io_out_s3_full_pred_1_br_taken_mask_0;
    output logic  value;
    value=io_out_s3_full_pred_1_br_taken_mask_0;
  endfunction

  function void set_io_out_s3_full_pred_1_br_taken_mask_0;
    input logic  value;
    io_out_s3_full_pred_1_br_taken_mask_0=value;
  endfunction

  function void get_io_out_s3_full_pred_1_br_taken_mask_1;
    output logic  value;
    value=io_out_s3_full_pred_1_br_taken_mask_1;
  endfunction

  function void set_io_out_s3_full_pred_1_br_taken_mask_1;
    input logic  value;
    io_out_s3_full_pred_1_br_taken_mask_1=value;
  endfunction

  function void get_io_out_s3_full_pred_1_slot_valids_0;
    output logic  value;
    value=io_out_s3_full_pred_1_slot_valids_0;
  endfunction

  function void set_io_out_s3_full_pred_1_slot_valids_0;
    input logic  value;
    io_out_s3_full_pred_1_slot_valids_0=value;
  endfunction

  function void get_io_out_s3_full_pred_1_slot_valids_1;
    output logic  value;
    value=io_out_s3_full_pred_1_slot_valids_1;
  endfunction

  function void set_io_out_s3_full_pred_1_slot_valids_1;
    input logic  value;
    io_out_s3_full_pred_1_slot_valids_1=value;
  endfunction

  function void get_io_out_s3_full_pred_1_targets_0;
    output logic [40:0] value;
    value=io_out_s3_full_pred_1_targets_0;
  endfunction

  function void set_io_out_s3_full_pred_1_targets_0;
    input logic [40:0] value;
    io_out_s3_full_pred_1_targets_0=value;
  endfunction

  function void get_io_out_s3_full_pred_1_targets_1;
    output logic [40:0] value;
    value=io_out_s3_full_pred_1_targets_1;
  endfunction

  function void set_io_out_s3_full_pred_1_targets_1;
    input logic [40:0] value;
    io_out_s3_full_pred_1_targets_1=value;
  endfunction

  function void get_io_out_s3_full_pred_1_fallThroughAddr;
    output logic [40:0] value;
    value=io_out_s3_full_pred_1_fallThroughAddr;
  endfunction

  function void set_io_out_s3_full_pred_1_fallThroughAddr;
    input logic [40:0] value;
    io_out_s3_full_pred_1_fallThroughAddr=value;
  endfunction

  function void get_io_out_s3_full_pred_1_fallThroughErr;
    output logic  value;
    value=io_out_s3_full_pred_1_fallThroughErr;
  endfunction

  function void set_io_out_s3_full_pred_1_fallThroughErr;
    input logic  value;
    io_out_s3_full_pred_1_fallThroughErr=value;
  endfunction

  function void get_io_out_s3_full_pred_1_multiHit;
    output logic  value;
    value=io_out_s3_full_pred_1_multiHit;
  endfunction

  function void set_io_out_s3_full_pred_1_multiHit;
    input logic  value;
    io_out_s3_full_pred_1_multiHit=value;
  endfunction

  function void get_io_out_s3_full_pred_1_is_br_sharing;
    output logic  value;
    value=io_out_s3_full_pred_1_is_br_sharing;
  endfunction

  function void set_io_out_s3_full_pred_1_is_br_sharing;
    input logic  value;
    io_out_s3_full_pred_1_is_br_sharing=value;
  endfunction

  function void get_io_out_s3_full_pred_1_hit;
    output logic  value;
    value=io_out_s3_full_pred_1_hit;
  endfunction

  function void set_io_out_s3_full_pred_1_hit;
    input logic  value;
    io_out_s3_full_pred_1_hit=value;
  endfunction

  function void get_io_out_s3_full_pred_2_br_taken_mask_0;
    output logic  value;
    value=io_out_s3_full_pred_2_br_taken_mask_0;
  endfunction

  function void set_io_out_s3_full_pred_2_br_taken_mask_0;
    input logic  value;
    io_out_s3_full_pred_2_br_taken_mask_0=value;
  endfunction

  function void get_io_out_s3_full_pred_2_br_taken_mask_1;
    output logic  value;
    value=io_out_s3_full_pred_2_br_taken_mask_1;
  endfunction

  function void set_io_out_s3_full_pred_2_br_taken_mask_1;
    input logic  value;
    io_out_s3_full_pred_2_br_taken_mask_1=value;
  endfunction

  function void get_io_out_s3_full_pred_2_slot_valids_0;
    output logic  value;
    value=io_out_s3_full_pred_2_slot_valids_0;
  endfunction

  function void set_io_out_s3_full_pred_2_slot_valids_0;
    input logic  value;
    io_out_s3_full_pred_2_slot_valids_0=value;
  endfunction

  function void get_io_out_s3_full_pred_2_slot_valids_1;
    output logic  value;
    value=io_out_s3_full_pred_2_slot_valids_1;
  endfunction

  function void set_io_out_s3_full_pred_2_slot_valids_1;
    input logic  value;
    io_out_s3_full_pred_2_slot_valids_1=value;
  endfunction

  function void get_io_out_s3_full_pred_2_targets_0;
    output logic [40:0] value;
    value=io_out_s3_full_pred_2_targets_0;
  endfunction

  function void set_io_out_s3_full_pred_2_targets_0;
    input logic [40:0] value;
    io_out_s3_full_pred_2_targets_0=value;
  endfunction

  function void get_io_out_s3_full_pred_2_targets_1;
    output logic [40:0] value;
    value=io_out_s3_full_pred_2_targets_1;
  endfunction

  function void set_io_out_s3_full_pred_2_targets_1;
    input logic [40:0] value;
    io_out_s3_full_pred_2_targets_1=value;
  endfunction

  function void get_io_out_s3_full_pred_2_fallThroughAddr;
    output logic [40:0] value;
    value=io_out_s3_full_pred_2_fallThroughAddr;
  endfunction

  function void set_io_out_s3_full_pred_2_fallThroughAddr;
    input logic [40:0] value;
    io_out_s3_full_pred_2_fallThroughAddr=value;
  endfunction

  function void get_io_out_s3_full_pred_2_fallThroughErr;
    output logic  value;
    value=io_out_s3_full_pred_2_fallThroughErr;
  endfunction

  function void set_io_out_s3_full_pred_2_fallThroughErr;
    input logic  value;
    io_out_s3_full_pred_2_fallThroughErr=value;
  endfunction

  function void get_io_out_s3_full_pred_2_multiHit;
    output logic  value;
    value=io_out_s3_full_pred_2_multiHit;
  endfunction

  function void set_io_out_s3_full_pred_2_multiHit;
    input logic  value;
    io_out_s3_full_pred_2_multiHit=value;
  endfunction

  function void get_io_out_s3_full_pred_2_is_br_sharing;
    output logic  value;
    value=io_out_s3_full_pred_2_is_br_sharing;
  endfunction

  function void set_io_out_s3_full_pred_2_is_br_sharing;
    input logic  value;
    io_out_s3_full_pred_2_is_br_sharing=value;
  endfunction

  function void get_io_out_s3_full_pred_2_hit;
    output logic  value;
    value=io_out_s3_full_pred_2_hit;
  endfunction

  function void set_io_out_s3_full_pred_2_hit;
    input logic  value;
    io_out_s3_full_pred_2_hit=value;
  endfunction

  function void get_io_out_s3_full_pred_3_br_taken_mask_0;
    output logic  value;
    value=io_out_s3_full_pred_3_br_taken_mask_0;
  endfunction

  function void set_io_out_s3_full_pred_3_br_taken_mask_0;
    input logic  value;
    io_out_s3_full_pred_3_br_taken_mask_0=value;
  endfunction

  function void get_io_out_s3_full_pred_3_br_taken_mask_1;
    output logic  value;
    value=io_out_s3_full_pred_3_br_taken_mask_1;
  endfunction

  function void set_io_out_s3_full_pred_3_br_taken_mask_1;
    input logic  value;
    io_out_s3_full_pred_3_br_taken_mask_1=value;
  endfunction

  function void get_io_out_s3_full_pred_3_slot_valids_0;
    output logic  value;
    value=io_out_s3_full_pred_3_slot_valids_0;
  endfunction

  function void set_io_out_s3_full_pred_3_slot_valids_0;
    input logic  value;
    io_out_s3_full_pred_3_slot_valids_0=value;
  endfunction

  function void get_io_out_s3_full_pred_3_slot_valids_1;
    output logic  value;
    value=io_out_s3_full_pred_3_slot_valids_1;
  endfunction

  function void set_io_out_s3_full_pred_3_slot_valids_1;
    input logic  value;
    io_out_s3_full_pred_3_slot_valids_1=value;
  endfunction

  function void get_io_out_s3_full_pred_3_targets_0;
    output logic [40:0] value;
    value=io_out_s3_full_pred_3_targets_0;
  endfunction

  function void set_io_out_s3_full_pred_3_targets_0;
    input logic [40:0] value;
    io_out_s3_full_pred_3_targets_0=value;
  endfunction

  function void get_io_out_s3_full_pred_3_targets_1;
    output logic [40:0] value;
    value=io_out_s3_full_pred_3_targets_1;
  endfunction

  function void set_io_out_s3_full_pred_3_targets_1;
    input logic [40:0] value;
    io_out_s3_full_pred_3_targets_1=value;
  endfunction

  function void get_io_out_s3_full_pred_3_offsets_0;
    output logic [3:0] value;
    value=io_out_s3_full_pred_3_offsets_0;
  endfunction

  function void set_io_out_s3_full_pred_3_offsets_0;
    input logic [3:0] value;
    io_out_s3_full_pred_3_offsets_0=value;
  endfunction

  function void get_io_out_s3_full_pred_3_offsets_1;
    output logic [3:0] value;
    value=io_out_s3_full_pred_3_offsets_1;
  endfunction

  function void set_io_out_s3_full_pred_3_offsets_1;
    input logic [3:0] value;
    io_out_s3_full_pred_3_offsets_1=value;
  endfunction

  function void get_io_out_s3_full_pred_3_fallThroughAddr;
    output logic [40:0] value;
    value=io_out_s3_full_pred_3_fallThroughAddr;
  endfunction

  function void set_io_out_s3_full_pred_3_fallThroughAddr;
    input logic [40:0] value;
    io_out_s3_full_pred_3_fallThroughAddr=value;
  endfunction

  function void get_io_out_s3_full_pred_3_fallThroughErr;
    output logic  value;
    value=io_out_s3_full_pred_3_fallThroughErr;
  endfunction

  function void set_io_out_s3_full_pred_3_fallThroughErr;
    input logic  value;
    io_out_s3_full_pred_3_fallThroughErr=value;
  endfunction

  function void get_io_out_s3_full_pred_3_multiHit;
    output logic  value;
    value=io_out_s3_full_pred_3_multiHit;
  endfunction

  function void set_io_out_s3_full_pred_3_multiHit;
    input logic  value;
    io_out_s3_full_pred_3_multiHit=value;
  endfunction

  function void get_io_out_s3_full_pred_3_is_br_sharing;
    output logic  value;
    value=io_out_s3_full_pred_3_is_br_sharing;
  endfunction

  function void set_io_out_s3_full_pred_3_is_br_sharing;
    input logic  value;
    io_out_s3_full_pred_3_is_br_sharing=value;
  endfunction

  function void get_io_out_s3_full_pred_3_hit;
    output logic  value;
    value=io_out_s3_full_pred_3_hit;
  endfunction

  function void set_io_out_s3_full_pred_3_hit;
    input logic  value;
    io_out_s3_full_pred_3_hit=value;
  endfunction

  function void get_io_out_last_stage_meta;
    output logic [250:0] value;
    value=io_out_last_stage_meta;
  endfunction

  function void set_io_out_last_stage_meta;
    input logic [250:0] value;
    io_out_last_stage_meta=value;
  endfunction

  function void get_io_out_last_stage_spec_info_ssp;
    output logic [3:0] value;
    value=io_out_last_stage_spec_info_ssp;
  endfunction

  function void set_io_out_last_stage_spec_info_ssp;
    input logic [3:0] value;
    io_out_last_stage_spec_info_ssp=value;
  endfunction

  function void get_io_out_last_stage_spec_info_sctr;
    output logic [2:0] value;
    value=io_out_last_stage_spec_info_sctr;
  endfunction

  function void set_io_out_last_stage_spec_info_sctr;
    input logic [2:0] value;
    io_out_last_stage_spec_info_sctr=value;
  endfunction

  function void get_io_out_last_stage_spec_info_TOSW_flag;
    output logic  value;
    value=io_out_last_stage_spec_info_TOSW_flag;
  endfunction

  function void set_io_out_last_stage_spec_info_TOSW_flag;
    input logic  value;
    io_out_last_stage_spec_info_TOSW_flag=value;
  endfunction

  function void get_io_out_last_stage_spec_info_TOSW_value;
    output logic [4:0] value;
    value=io_out_last_stage_spec_info_TOSW_value;
  endfunction

  function void set_io_out_last_stage_spec_info_TOSW_value;
    input logic [4:0] value;
    io_out_last_stage_spec_info_TOSW_value=value;
  endfunction

  function void get_io_out_last_stage_spec_info_TOSR_flag;
    output logic  value;
    value=io_out_last_stage_spec_info_TOSR_flag;
  endfunction

  function void set_io_out_last_stage_spec_info_TOSR_flag;
    input logic  value;
    io_out_last_stage_spec_info_TOSR_flag=value;
  endfunction

  function void get_io_out_last_stage_spec_info_TOSR_value;
    output logic [4:0] value;
    value=io_out_last_stage_spec_info_TOSR_value;
  endfunction

  function void set_io_out_last_stage_spec_info_TOSR_value;
    input logic [4:0] value;
    io_out_last_stage_spec_info_TOSR_value=value;
  endfunction

  function void get_io_out_last_stage_spec_info_NOS_flag;
    output logic  value;
    value=io_out_last_stage_spec_info_NOS_flag;
  endfunction

  function void set_io_out_last_stage_spec_info_NOS_flag;
    input logic  value;
    io_out_last_stage_spec_info_NOS_flag=value;
  endfunction

  function void get_io_out_last_stage_spec_info_NOS_value;
    output logic [4:0] value;
    value=io_out_last_stage_spec_info_NOS_value;
  endfunction

  function void set_io_out_last_stage_spec_info_NOS_value;
    input logic [4:0] value;
    io_out_last_stage_spec_info_NOS_value=value;
  endfunction

  function void get_io_out_last_stage_spec_info_topAddr;
    output logic [40:0] value;
    value=io_out_last_stage_spec_info_topAddr;
  endfunction

  function void set_io_out_last_stage_spec_info_topAddr;
    input logic [40:0] value;
    io_out_last_stage_spec_info_topAddr=value;
  endfunction

  function void get_io_out_last_stage_ftb_entry_isCall;
    output logic  value;
    value=io_out_last_stage_ftb_entry_isCall;
  endfunction

  function void set_io_out_last_stage_ftb_entry_isCall;
    input logic  value;
    io_out_last_stage_ftb_entry_isCall=value;
  endfunction

  function void get_io_out_last_stage_ftb_entry_isRet;
    output logic  value;
    value=io_out_last_stage_ftb_entry_isRet;
  endfunction

  function void set_io_out_last_stage_ftb_entry_isRet;
    input logic  value;
    io_out_last_stage_ftb_entry_isRet=value;
  endfunction

  function void get_io_out_last_stage_ftb_entry_isJalr;
    output logic  value;
    value=io_out_last_stage_ftb_entry_isJalr;
  endfunction

  function void set_io_out_last_stage_ftb_entry_isJalr;
    input logic  value;
    io_out_last_stage_ftb_entry_isJalr=value;
  endfunction

  function void get_io_out_last_stage_ftb_entry_valid;
    output logic  value;
    value=io_out_last_stage_ftb_entry_valid;
  endfunction

  function void set_io_out_last_stage_ftb_entry_valid;
    input logic  value;
    io_out_last_stage_ftb_entry_valid=value;
  endfunction

  function void get_io_out_last_stage_ftb_entry_brSlots_0_offset;
    output logic [3:0] value;
    value=io_out_last_stage_ftb_entry_brSlots_0_offset;
  endfunction

  function void set_io_out_last_stage_ftb_entry_brSlots_0_offset;
    input logic [3:0] value;
    io_out_last_stage_ftb_entry_brSlots_0_offset=value;
  endfunction

  function void get_io_out_last_stage_ftb_entry_brSlots_0_sharing;
    output logic  value;
    value=io_out_last_stage_ftb_entry_brSlots_0_sharing;
  endfunction

  function void set_io_out_last_stage_ftb_entry_brSlots_0_sharing;
    input logic  value;
    io_out_last_stage_ftb_entry_brSlots_0_sharing=value;
  endfunction

  function void get_io_out_last_stage_ftb_entry_brSlots_0_valid;
    output logic  value;
    value=io_out_last_stage_ftb_entry_brSlots_0_valid;
  endfunction

  function void set_io_out_last_stage_ftb_entry_brSlots_0_valid;
    input logic  value;
    io_out_last_stage_ftb_entry_brSlots_0_valid=value;
  endfunction

  function void get_io_out_last_stage_ftb_entry_brSlots_0_lower;
    output logic [11:0] value;
    value=io_out_last_stage_ftb_entry_brSlots_0_lower;
  endfunction

  function void set_io_out_last_stage_ftb_entry_brSlots_0_lower;
    input logic [11:0] value;
    io_out_last_stage_ftb_entry_brSlots_0_lower=value;
  endfunction

  function void get_io_out_last_stage_ftb_entry_brSlots_0_tarStat;
    output logic [1:0] value;
    value=io_out_last_stage_ftb_entry_brSlots_0_tarStat;
  endfunction

  function void set_io_out_last_stage_ftb_entry_brSlots_0_tarStat;
    input logic [1:0] value;
    io_out_last_stage_ftb_entry_brSlots_0_tarStat=value;
  endfunction

  function void get_io_out_last_stage_ftb_entry_tailSlot_offset;
    output logic [3:0] value;
    value=io_out_last_stage_ftb_entry_tailSlot_offset;
  endfunction

  function void set_io_out_last_stage_ftb_entry_tailSlot_offset;
    input logic [3:0] value;
    io_out_last_stage_ftb_entry_tailSlot_offset=value;
  endfunction

  function void get_io_out_last_stage_ftb_entry_tailSlot_sharing;
    output logic  value;
    value=io_out_last_stage_ftb_entry_tailSlot_sharing;
  endfunction

  function void set_io_out_last_stage_ftb_entry_tailSlot_sharing;
    input logic  value;
    io_out_last_stage_ftb_entry_tailSlot_sharing=value;
  endfunction

  function void get_io_out_last_stage_ftb_entry_tailSlot_valid;
    output logic  value;
    value=io_out_last_stage_ftb_entry_tailSlot_valid;
  endfunction

  function void set_io_out_last_stage_ftb_entry_tailSlot_valid;
    input logic  value;
    io_out_last_stage_ftb_entry_tailSlot_valid=value;
  endfunction

  function void get_io_out_last_stage_ftb_entry_tailSlot_lower;
    output logic [19:0] value;
    value=io_out_last_stage_ftb_entry_tailSlot_lower;
  endfunction

  function void set_io_out_last_stage_ftb_entry_tailSlot_lower;
    input logic [19:0] value;
    io_out_last_stage_ftb_entry_tailSlot_lower=value;
  endfunction

  function void get_io_out_last_stage_ftb_entry_tailSlot_tarStat;
    output logic [1:0] value;
    value=io_out_last_stage_ftb_entry_tailSlot_tarStat;
  endfunction

  function void set_io_out_last_stage_ftb_entry_tailSlot_tarStat;
    input logic [1:0] value;
    io_out_last_stage_ftb_entry_tailSlot_tarStat=value;
  endfunction

  function void get_io_out_last_stage_ftb_entry_pftAddr;
    output logic [3:0] value;
    value=io_out_last_stage_ftb_entry_pftAddr;
  endfunction

  function void set_io_out_last_stage_ftb_entry_pftAddr;
    input logic [3:0] value;
    io_out_last_stage_ftb_entry_pftAddr=value;
  endfunction

  function void get_io_out_last_stage_ftb_entry_carry;
    output logic  value;
    value=io_out_last_stage_ftb_entry_carry;
  endfunction

  function void set_io_out_last_stage_ftb_entry_carry;
    input logic  value;
    io_out_last_stage_ftb_entry_carry=value;
  endfunction

  function void get_io_out_last_stage_ftb_entry_last_may_be_rvi_call;
    output logic  value;
    value=io_out_last_stage_ftb_entry_last_may_be_rvi_call;
  endfunction

  function void set_io_out_last_stage_ftb_entry_last_may_be_rvi_call;
    input logic  value;
    io_out_last_stage_ftb_entry_last_may_be_rvi_call=value;
  endfunction

  function void get_io_out_last_stage_ftb_entry_always_taken_0;
    output logic  value;
    value=io_out_last_stage_ftb_entry_always_taken_0;
  endfunction

  function void set_io_out_last_stage_ftb_entry_always_taken_0;
    input logic  value;
    io_out_last_stage_ftb_entry_always_taken_0=value;
  endfunction

  function void get_io_out_last_stage_ftb_entry_always_taken_1;
    output logic  value;
    value=io_out_last_stage_ftb_entry_always_taken_1;
  endfunction

  function void set_io_out_last_stage_ftb_entry_always_taken_1;
    input logic  value;
    io_out_last_stage_ftb_entry_always_taken_1=value;
  endfunction

  function void get_io_ctrl_ras_enable;
    output logic  value;
    value=io_ctrl_ras_enable;
  endfunction

  function void set_io_ctrl_ras_enable;
    input logic  value;
    io_ctrl_ras_enable=value;
  endfunction

  function void get_io_s0_fire_0;
    output logic  value;
    value=io_s0_fire_0;
  endfunction

  function void set_io_s0_fire_0;
    input logic  value;
    io_s0_fire_0=value;
  endfunction

  function void get_io_s0_fire_1;
    output logic  value;
    value=io_s0_fire_1;
  endfunction

  function void set_io_s0_fire_1;
    input logic  value;
    io_s0_fire_1=value;
  endfunction

  function void get_io_s0_fire_2;
    output logic  value;
    value=io_s0_fire_2;
  endfunction

  function void set_io_s0_fire_2;
    input logic  value;
    io_s0_fire_2=value;
  endfunction

  function void get_io_s0_fire_3;
    output logic  value;
    value=io_s0_fire_3;
  endfunction

  function void set_io_s0_fire_3;
    input logic  value;
    io_s0_fire_3=value;
  endfunction

  function void get_io_s1_fire_0;
    output logic  value;
    value=io_s1_fire_0;
  endfunction

  function void set_io_s1_fire_0;
    input logic  value;
    io_s1_fire_0=value;
  endfunction

  function void get_io_s1_fire_1;
    output logic  value;
    value=io_s1_fire_1;
  endfunction

  function void set_io_s1_fire_1;
    input logic  value;
    io_s1_fire_1=value;
  endfunction

  function void get_io_s1_fire_2;
    output logic  value;
    value=io_s1_fire_2;
  endfunction

  function void set_io_s1_fire_2;
    input logic  value;
    io_s1_fire_2=value;
  endfunction

  function void get_io_s1_fire_3;
    output logic  value;
    value=io_s1_fire_3;
  endfunction

  function void set_io_s1_fire_3;
    input logic  value;
    io_s1_fire_3=value;
  endfunction

  function void get_io_s2_fire_0;
    output logic  value;
    value=io_s2_fire_0;
  endfunction

  function void set_io_s2_fire_0;
    input logic  value;
    io_s2_fire_0=value;
  endfunction

  function void get_io_s2_fire_1;
    output logic  value;
    value=io_s2_fire_1;
  endfunction

  function void set_io_s2_fire_1;
    input logic  value;
    io_s2_fire_1=value;
  endfunction

  function void get_io_s2_fire_2;
    output logic  value;
    value=io_s2_fire_2;
  endfunction

  function void set_io_s2_fire_2;
    input logic  value;
    io_s2_fire_2=value;
  endfunction

  function void get_io_s2_fire_3;
    output logic  value;
    value=io_s2_fire_3;
  endfunction

  function void set_io_s2_fire_3;
    input logic  value;
    io_s2_fire_3=value;
  endfunction

  function void get_io_s3_fire_2;
    output logic  value;
    value=io_s3_fire_2;
  endfunction

  function void set_io_s3_fire_2;
    input logic  value;
    io_s3_fire_2=value;
  endfunction

  function void get_io_s3_redirect_2;
    output logic  value;
    value=io_s3_redirect_2;
  endfunction

  function void set_io_s3_redirect_2;
    input logic  value;
    io_s3_redirect_2=value;
  endfunction

  function void get_io_update_valid;
    output logic  value;
    value=io_update_valid;
  endfunction

  function void set_io_update_valid;
    input logic  value;
    io_update_valid=value;
  endfunction

  function void get_io_update_bits_ftb_entry_isCall;
    output logic  value;
    value=io_update_bits_ftb_entry_isCall;
  endfunction

  function void set_io_update_bits_ftb_entry_isCall;
    input logic  value;
    io_update_bits_ftb_entry_isCall=value;
  endfunction

  function void get_io_update_bits_ftb_entry_isRet;
    output logic  value;
    value=io_update_bits_ftb_entry_isRet;
  endfunction

  function void set_io_update_bits_ftb_entry_isRet;
    input logic  value;
    io_update_bits_ftb_entry_isRet=value;
  endfunction

  function void get_io_update_bits_ftb_entry_tailSlot_offset;
    output logic [3:0] value;
    value=io_update_bits_ftb_entry_tailSlot_offset;
  endfunction

  function void set_io_update_bits_ftb_entry_tailSlot_offset;
    input logic [3:0] value;
    io_update_bits_ftb_entry_tailSlot_offset=value;
  endfunction

  function void get_io_update_bits_ftb_entry_tailSlot_valid;
    output logic  value;
    value=io_update_bits_ftb_entry_tailSlot_valid;
  endfunction

  function void set_io_update_bits_ftb_entry_tailSlot_valid;
    input logic  value;
    io_update_bits_ftb_entry_tailSlot_valid=value;
  endfunction

  function void get_io_update_bits_cfi_idx_valid;
    output logic  value;
    value=io_update_bits_cfi_idx_valid;
  endfunction

  function void set_io_update_bits_cfi_idx_valid;
    input logic  value;
    io_update_bits_cfi_idx_valid=value;
  endfunction

  function void get_io_update_bits_cfi_idx_bits;
    output logic [3:0] value;
    value=io_update_bits_cfi_idx_bits;
  endfunction

  function void set_io_update_bits_cfi_idx_bits;
    input logic [3:0] value;
    io_update_bits_cfi_idx_bits=value;
  endfunction

  function void get_io_update_bits_jmp_taken;
    output logic  value;
    value=io_update_bits_jmp_taken;
  endfunction

  function void set_io_update_bits_jmp_taken;
    input logic  value;
    io_update_bits_jmp_taken=value;
  endfunction

  function void get_io_update_bits_meta;
    output logic [250:0] value;
    value=io_update_bits_meta;
  endfunction

  function void set_io_update_bits_meta;
    input logic [250:0] value;
    io_update_bits_meta=value;
  endfunction

  function void get_io_redirect_valid;
    output logic  value;
    value=io_redirect_valid;
  endfunction

  function void set_io_redirect_valid;
    input logic  value;
    io_redirect_valid=value;
  endfunction

  function void get_io_redirect_bits_level;
    output logic  value;
    value=io_redirect_bits_level;
  endfunction

  function void set_io_redirect_bits_level;
    input logic  value;
    io_redirect_bits_level=value;
  endfunction

  function void get_io_redirect_bits_cfiUpdate_pc;
    output logic [40:0] value;
    value=io_redirect_bits_cfiUpdate_pc;
  endfunction

  function void set_io_redirect_bits_cfiUpdate_pc;
    input logic [40:0] value;
    io_redirect_bits_cfiUpdate_pc=value;
  endfunction

  function void get_io_redirect_bits_cfiUpdate_pd_isRVC;
    output logic  value;
    value=io_redirect_bits_cfiUpdate_pd_isRVC;
  endfunction

  function void set_io_redirect_bits_cfiUpdate_pd_isRVC;
    input logic  value;
    io_redirect_bits_cfiUpdate_pd_isRVC=value;
  endfunction

  function void get_io_redirect_bits_cfiUpdate_pd_isCall;
    output logic  value;
    value=io_redirect_bits_cfiUpdate_pd_isCall;
  endfunction

  function void set_io_redirect_bits_cfiUpdate_pd_isCall;
    input logic  value;
    io_redirect_bits_cfiUpdate_pd_isCall=value;
  endfunction

  function void get_io_redirect_bits_cfiUpdate_pd_isRet;
    output logic  value;
    value=io_redirect_bits_cfiUpdate_pd_isRet;
  endfunction

  function void set_io_redirect_bits_cfiUpdate_pd_isRet;
    input logic  value;
    io_redirect_bits_cfiUpdate_pd_isRet=value;
  endfunction

  function void get_io_redirect_bits_cfiUpdate_ssp;
    output logic [3:0] value;
    value=io_redirect_bits_cfiUpdate_ssp;
  endfunction

  function void set_io_redirect_bits_cfiUpdate_ssp;
    input logic [3:0] value;
    io_redirect_bits_cfiUpdate_ssp=value;
  endfunction

  function void get_io_redirect_bits_cfiUpdate_sctr;
    output logic [1:0] value;
    value=io_redirect_bits_cfiUpdate_sctr;
  endfunction

  function void set_io_redirect_bits_cfiUpdate_sctr;
    input logic [1:0] value;
    io_redirect_bits_cfiUpdate_sctr=value;
  endfunction

  function void get_io_redirect_bits_cfiUpdate_TOSW_flag;
    output logic  value;
    value=io_redirect_bits_cfiUpdate_TOSW_flag;
  endfunction

  function void set_io_redirect_bits_cfiUpdate_TOSW_flag;
    input logic  value;
    io_redirect_bits_cfiUpdate_TOSW_flag=value;
  endfunction

  function void get_io_redirect_bits_cfiUpdate_TOSW_value;
    output logic [4:0] value;
    value=io_redirect_bits_cfiUpdate_TOSW_value;
  endfunction

  function void set_io_redirect_bits_cfiUpdate_TOSW_value;
    input logic [4:0] value;
    io_redirect_bits_cfiUpdate_TOSW_value=value;
  endfunction

  function void get_io_redirect_bits_cfiUpdate_TOSR_flag;
    output logic  value;
    value=io_redirect_bits_cfiUpdate_TOSR_flag;
  endfunction

  function void set_io_redirect_bits_cfiUpdate_TOSR_flag;
    input logic  value;
    io_redirect_bits_cfiUpdate_TOSR_flag=value;
  endfunction

  function void get_io_redirect_bits_cfiUpdate_TOSR_value;
    output logic [4:0] value;
    value=io_redirect_bits_cfiUpdate_TOSR_value;
  endfunction

  function void set_io_redirect_bits_cfiUpdate_TOSR_value;
    input logic [4:0] value;
    io_redirect_bits_cfiUpdate_TOSR_value=value;
  endfunction

  function void get_io_redirect_bits_cfiUpdate_NOS_flag;
    output logic  value;
    value=io_redirect_bits_cfiUpdate_NOS_flag;
  endfunction

  function void set_io_redirect_bits_cfiUpdate_NOS_flag;
    input logic  value;
    io_redirect_bits_cfiUpdate_NOS_flag=value;
  endfunction

  function void get_io_redirect_bits_cfiUpdate_NOS_value;
    output logic [4:0] value;
    value=io_redirect_bits_cfiUpdate_NOS_value;
  endfunction

  function void set_io_redirect_bits_cfiUpdate_NOS_value;
    input logic [4:0] value;
    io_redirect_bits_cfiUpdate_NOS_value=value;
  endfunction

  function void get_RAS_s3_push;
    output logic  value;
    value=RAS.s3_push;
  endfunction

  function void get_RAS_s3_pop;
    output logic  value;
    value=RAS.s3_pop;
  endfunction

  function void get_RAS_s3_pushed_in_s2;
    output logic  value;
    value=RAS.s3_pushed_in_s2;
  endfunction

  function void get_RAS_s2_spec_push;
    output logic  value;
    value=RAS.s2_spec_push;
  endfunction

  function void get_RAS_RASStack_realPush;
    output logic  value;
    value=RAS.RASStack.realPush;
  endfunction

  function void get_RAS_RASStack_TOSR_value;
    output logic [4:0] value;
    value=RAS.RASStack.TOSR_value;
  endfunction

  function void get_RAS_RASStack_TOSW_value;
    output logic [4:0] value;
    value=RAS.RASStack.TOSW_value;
  endfunction

  function void get_RAS_RASStack_BOS_value;
    output logic [4:0] value;
    value=RAS.RASStack.BOS_value;
  endfunction

  function void get_RAS_RASStack_ssp;
    output logic [3:0] value;
    value=RAS.RASStack.ssp;
  endfunction

  function void get_RAS_RASStack_nsp;
    output logic [3:0] value;
    value=RAS.RASStack.nsp;
  endfunction

  function void get_RAS_RASStack_spec_overflowed;
    output logic  value;
    value=RAS.RASStack.spec_overflowed;
  endfunction

  function void get_RAS_RASStack_writeBypassValid;
    output logic  value;
    value=RAS.RASStack.writeBypassValid;
  endfunction

  function void get_RAS_RASStack_timingTop_retAddr;
    output logic [40:0] value;
    value=RAS.RASStack.timingTop_retAddr;
  endfunction

  function void get_RAS_RASStack_sctr;
    output logic [2:0] value;
    value=RAS.RASStack.sctr;
  endfunction

  function void get_RAS_RASStack_spec_queue_0_retAddr;
    output logic [40:0] value;
    value=RAS.RASStack.spec_queue_0_retAddr;
  endfunction

  function void get_RAS_RASStack_spec_queue_1_retAddr;
    output logic [40:0] value;
    value=RAS.RASStack.spec_queue_1_retAddr;
  endfunction

  function void get_RAS_RASStack_spec_queue_2_retAddr;
    output logic [40:0] value;
    value=RAS.RASStack.spec_queue_2_retAddr;
  endfunction

  function void get_RAS_RASStack_spec_queue_3_retAddr;
    output logic [40:0] value;
    value=RAS.RASStack.spec_queue_3_retAddr;
  endfunction

  function void get_RAS_RASStack_spec_queue_4_retAddr;
    output logic [40:0] value;
    value=RAS.RASStack.spec_queue_4_retAddr;
  endfunction

  function void get_RAS_RASStack_spec_queue_5_retAddr;
    output logic [40:0] value;
    value=RAS.RASStack.spec_queue_5_retAddr;
  endfunction

  function void get_RAS_RASStack_spec_queue_6_retAddr;
    output logic [40:0] value;
    value=RAS.RASStack.spec_queue_6_retAddr;
  endfunction

  function void get_RAS_RASStack_spec_queue_7_retAddr;
    output logic [40:0] value;
    value=RAS.RASStack.spec_queue_7_retAddr;
  endfunction

  function void get_RAS_RASStack_spec_queue_8_retAddr;
    output logic [40:0] value;
    value=RAS.RASStack.spec_queue_8_retAddr;
  endfunction

  function void get_RAS_RASStack_spec_queue_9_retAddr;
    output logic [40:0] value;
    value=RAS.RASStack.spec_queue_9_retAddr;
  endfunction

  function void get_RAS_RASStack_spec_queue_10_retAddr;
    output logic [40:0] value;
    value=RAS.RASStack.spec_queue_10_retAddr;
  endfunction

  function void get_RAS_RASStack_spec_queue_11_retAddr;
    output logic [40:0] value;
    value=RAS.RASStack.spec_queue_11_retAddr;
  endfunction

  function void get_RAS_RASStack_spec_queue_12_retAddr;
    output logic [40:0] value;
    value=RAS.RASStack.spec_queue_12_retAddr;
  endfunction

  function void get_RAS_RASStack_spec_queue_13_retAddr;
    output logic [40:0] value;
    value=RAS.RASStack.spec_queue_13_retAddr;
  endfunction

  function void get_RAS_RASStack_spec_queue_14_retAddr;
    output logic [40:0] value;
    value=RAS.RASStack.spec_queue_14_retAddr;
  endfunction

  function void get_RAS_RASStack_spec_queue_15_retAddr;
    output logic [40:0] value;
    value=RAS.RASStack.spec_queue_15_retAddr;
  endfunction

  function void get_RAS_RASStack_spec_queue_16_retAddr;
    output logic [40:0] value;
    value=RAS.RASStack.spec_queue_16_retAddr;
  endfunction

  function void get_RAS_RASStack_spec_queue_17_retAddr;
    output logic [40:0] value;
    value=RAS.RASStack.spec_queue_17_retAddr;
  endfunction

  function void get_RAS_RASStack_spec_queue_18_retAddr;
    output logic [40:0] value;
    value=RAS.RASStack.spec_queue_18_retAddr;
  endfunction

  function void get_RAS_RASStack_spec_queue_19_retAddr;
    output logic [40:0] value;
    value=RAS.RASStack.spec_queue_19_retAddr;
  endfunction

  function void get_RAS_RASStack_spec_queue_20_retAddr;
    output logic [40:0] value;
    value=RAS.RASStack.spec_queue_20_retAddr;
  endfunction

  function void get_RAS_RASStack_spec_queue_21_retAddr;
    output logic [40:0] value;
    value=RAS.RASStack.spec_queue_21_retAddr;
  endfunction

  function void get_RAS_RASStack_spec_queue_22_retAddr;
    output logic [40:0] value;
    value=RAS.RASStack.spec_queue_22_retAddr;
  endfunction

  function void get_RAS_RASStack_spec_queue_23_retAddr;
    output logic [40:0] value;
    value=RAS.RASStack.spec_queue_23_retAddr;
  endfunction

  function void get_RAS_RASStack_spec_queue_24_retAddr;
    output logic [40:0] value;
    value=RAS.RASStack.spec_queue_24_retAddr;
  endfunction

  function void get_RAS_RASStack_spec_queue_25_retAddr;
    output logic [40:0] value;
    value=RAS.RASStack.spec_queue_25_retAddr;
  endfunction

  function void get_RAS_RASStack_spec_queue_26_retAddr;
    output logic [40:0] value;
    value=RAS.RASStack.spec_queue_26_retAddr;
  endfunction

  function void get_RAS_RASStack_spec_queue_27_retAddr;
    output logic [40:0] value;
    value=RAS.RASStack.spec_queue_27_retAddr;
  endfunction

  function void get_RAS_RASStack_spec_queue_28_retAddr;
    output logic [40:0] value;
    value=RAS.RASStack.spec_queue_28_retAddr;
  endfunction

  function void get_RAS_RASStack_spec_queue_29_retAddr;
    output logic [40:0] value;
    value=RAS.RASStack.spec_queue_29_retAddr;
  endfunction

  function void get_RAS_RASStack_spec_queue_30_retAddr;
    output logic [40:0] value;
    value=RAS.RASStack.spec_queue_30_retAddr;
  endfunction

  function void get_RAS_RASStack_spec_queue_31_retAddr;
    output logic [40:0] value;
    value=RAS.RASStack.spec_queue_31_retAddr;
  endfunction

  function void get_RAS_RASStack_commit_stack_0_retAddr;
    output logic [40:0] value;
    value=RAS.RASStack.commit_stack_0_retAddr;
  endfunction

  function void get_RAS_RASStack_commit_stack_1_retAddr;
    output logic [40:0] value;
    value=RAS.RASStack.commit_stack_1_retAddr;
  endfunction

  function void get_RAS_RASStack_commit_stack_2_retAddr;
    output logic [40:0] value;
    value=RAS.RASStack.commit_stack_2_retAddr;
  endfunction

  function void get_RAS_RASStack_commit_stack_3_retAddr;
    output logic [40:0] value;
    value=RAS.RASStack.commit_stack_3_retAddr;
  endfunction

  function void get_RAS_RASStack_commit_stack_4_retAddr;
    output logic [40:0] value;
    value=RAS.RASStack.commit_stack_4_retAddr;
  endfunction

  function void get_RAS_RASStack_commit_stack_5_retAddr;
    output logic [40:0] value;
    value=RAS.RASStack.commit_stack_5_retAddr;
  endfunction

  function void get_RAS_RASStack_commit_stack_6_retAddr;
    output logic [40:0] value;
    value=RAS.RASStack.commit_stack_6_retAddr;
  endfunction

  function void get_RAS_RASStack_commit_stack_7_retAddr;
    output logic [40:0] value;
    value=RAS.RASStack.commit_stack_7_retAddr;
  endfunction

  function void get_RAS_RASStack_commit_stack_8_retAddr;
    output logic [40:0] value;
    value=RAS.RASStack.commit_stack_8_retAddr;
  endfunction

  function void get_RAS_RASStack_commit_stack_9_retAddr;
    output logic [40:0] value;
    value=RAS.RASStack.commit_stack_9_retAddr;
  endfunction

  function void get_RAS_RASStack_commit_stack_10_retAddr;
    output logic [40:0] value;
    value=RAS.RASStack.commit_stack_10_retAddr;
  endfunction

  function void get_RAS_RASStack_commit_stack_11_retAddr;
    output logic [40:0] value;
    value=RAS.RASStack.commit_stack_11_retAddr;
  endfunction

  function void get_RAS_RASStack_commit_stack_12_retAddr;
    output logic [40:0] value;
    value=RAS.RASStack.commit_stack_12_retAddr;
  endfunction

  function void get_RAS_RASStack_commit_stack_13_retAddr;
    output logic [40:0] value;
    value=RAS.RASStack.commit_stack_13_retAddr;
  endfunction

  function void get_RAS_RASStack_commit_stack_14_retAddr;
    output logic [40:0] value;
    value=RAS.RASStack.commit_stack_14_retAddr;
  endfunction

  function void get_RAS_RASStack_commit_stack_15_retAddr;
    output logic [40:0] value;
    value=RAS.RASStack.commit_stack_15_retAddr;
  endfunction

  function void get_RAS_RASStack_commit_stack_0_ctr;
    output logic [7:0] value;
    value=RAS.RASStack.commit_stack_0_ctr;
  endfunction

  function void get_RAS_RASStack_commit_stack_1_ctr;
    output logic [7:0] value;
    value=RAS.RASStack.commit_stack_1_ctr;
  endfunction

  function void get_RAS_RASStack_commit_stack_2_ctr;
    output logic [7:0] value;
    value=RAS.RASStack.commit_stack_2_ctr;
  endfunction

  function void get_RAS_RASStack_commit_stack_3_ctr;
    output logic [7:0] value;
    value=RAS.RASStack.commit_stack_3_ctr;
  endfunction

  function void get_RAS_RASStack_commit_stack_4_ctr;
    output logic [7:0] value;
    value=RAS.RASStack.commit_stack_4_ctr;
  endfunction

  function void get_RAS_RASStack_commit_stack_5_ctr;
    output logic [7:0] value;
    value=RAS.RASStack.commit_stack_5_ctr;
  endfunction

  function void get_RAS_RASStack_commit_stack_6_ctr;
    output logic [7:0] value;
    value=RAS.RASStack.commit_stack_6_ctr;
  endfunction

  function void get_RAS_RASStack_commit_stack_7_ctr;
    output logic [7:0] value;
    value=RAS.RASStack.commit_stack_7_ctr;
  endfunction

  function void get_RAS_RASStack_commit_stack_8_ctr;
    output logic [7:0] value;
    value=RAS.RASStack.commit_stack_8_ctr;
  endfunction

  function void get_RAS_RASStack_commit_stack_9_ctr;
    output logic [7:0] value;
    value=RAS.RASStack.commit_stack_9_ctr;
  endfunction

  function void get_RAS_RASStack_commit_stack_10_ctr;
    output logic [7:0] value;
    value=RAS.RASStack.commit_stack_10_ctr;
  endfunction

  function void get_RAS_RASStack_commit_stack_11_ctr;
    output logic [7:0] value;
    value=RAS.RASStack.commit_stack_11_ctr;
  endfunction

  function void get_RAS_RASStack_commit_stack_12_ctr;
    output logic [7:0] value;
    value=RAS.RASStack.commit_stack_12_ctr;
  endfunction

  function void get_RAS_RASStack_commit_stack_13_ctr;
    output logic [7:0] value;
    value=RAS.RASStack.commit_stack_13_ctr;
  endfunction

  function void get_RAS_RASStack_commit_stack_14_ctr;
    output logic [7:0] value;
    value=RAS.RASStack.commit_stack_14_ctr;
  endfunction

  function void get_RAS_RASStack_commit_stack_15_ctr;
    output logic [7:0] value;
    value=RAS.RASStack.commit_stack_15_ctr;
  endfunction

  function void get_RAS_RASStack_io_spec_push_valid;
    output logic  value;
    value=RAS.RASStack.io_spec_push_valid;
  endfunction

  function void get_RAS_RASStack_io_spec_pop_valid;
    output logic  value;
    value=RAS.RASStack.io_spec_pop_valid;
  endfunction

  function void get_RAS_RASStack_io_commit_push_valid;
    output logic  value;
    value=RAS.RASStack.io_commit_push_valid;
  endfunction

  function void get_RAS_RASStack_io_commit_pop_valid;
    output logic  value;
    value=RAS.RASStack.io_commit_pop_valid;
  endfunction

  function void get_RAS_RASStack_io_redirect_valid;
    output logic  value;
    value=RAS.RASStack.io_redirect_valid;
  endfunction

  function void get_RAS_RASStack_io_redirect_isCall;
    output logic  value;
    value=RAS.RASStack.io_redirect_isCall;
  endfunction

  function void get_RAS_RASStack_io_redirect_isRet;
    output logic  value;
    value=RAS.RASStack.io_redirect_isRet;
  endfunction

  function void get_RAS_RASStack_io_s3_cancel;
    output logic  value;
    value=RAS.RASStack.io_s3_cancel;
  endfunction



initial begin
    $dumpfile("RAS.fst");
    $dumpvars(0, RAS_top);
 end 

endmodule
