module RAS(
  input          clock,
  input          reset,
  input  [35:0]  io_reset_vector,
  input  [40:0]  io_in_bits_s0_pc_0,
  input  [40:0]  io_in_bits_s0_pc_1,
  input  [40:0]  io_in_bits_s0_pc_2,
  input  [40:0]  io_in_bits_s0_pc_3,
  input          io_in_bits_resp_in_0_s2_full_pred_0_br_taken_mask_0,
  input          io_in_bits_resp_in_0_s2_full_pred_0_br_taken_mask_1,
  input          io_in_bits_resp_in_0_s2_full_pred_0_slot_valids_0,
  input          io_in_bits_resp_in_0_s2_full_pred_0_slot_valids_1,
  input  [40:0]  io_in_bits_resp_in_0_s2_full_pred_0_targets_0,
  input  [40:0]  io_in_bits_resp_in_0_s2_full_pred_0_targets_1,
  input  [40:0]  io_in_bits_resp_in_0_s2_full_pred_0_jalr_target,
  input  [3:0]   io_in_bits_resp_in_0_s2_full_pred_0_offsets_0,
  input  [3:0]   io_in_bits_resp_in_0_s2_full_pred_0_offsets_1,
  input  [40:0]  io_in_bits_resp_in_0_s2_full_pred_0_fallThroughAddr,
  input          io_in_bits_resp_in_0_s2_full_pred_0_is_br_sharing,
  input          io_in_bits_resp_in_0_s2_full_pred_0_hit,
  input          io_in_bits_resp_in_0_s2_full_pred_1_br_taken_mask_0,
  input          io_in_bits_resp_in_0_s2_full_pred_1_br_taken_mask_1,
  input          io_in_bits_resp_in_0_s2_full_pred_1_slot_valids_0,
  input          io_in_bits_resp_in_0_s2_full_pred_1_slot_valids_1,
  input  [40:0]  io_in_bits_resp_in_0_s2_full_pred_1_targets_0,
  input  [40:0]  io_in_bits_resp_in_0_s2_full_pred_1_targets_1,
  input  [40:0]  io_in_bits_resp_in_0_s2_full_pred_1_jalr_target,
  input  [3:0]   io_in_bits_resp_in_0_s2_full_pred_1_offsets_0,
  input  [3:0]   io_in_bits_resp_in_0_s2_full_pred_1_offsets_1,
  input  [40:0]  io_in_bits_resp_in_0_s2_full_pred_1_fallThroughAddr,
  input          io_in_bits_resp_in_0_s2_full_pred_1_is_br_sharing,
  input          io_in_bits_resp_in_0_s2_full_pred_1_hit,
  input          io_in_bits_resp_in_0_s2_full_pred_2_br_taken_mask_0,
  input          io_in_bits_resp_in_0_s2_full_pred_2_br_taken_mask_1,
  input          io_in_bits_resp_in_0_s2_full_pred_2_slot_valids_0,
  input          io_in_bits_resp_in_0_s2_full_pred_2_slot_valids_1,
  input  [40:0]  io_in_bits_resp_in_0_s2_full_pred_2_targets_0,
  input  [40:0]  io_in_bits_resp_in_0_s2_full_pred_2_targets_1,
  input  [40:0]  io_in_bits_resp_in_0_s2_full_pred_2_jalr_target,
  input  [3:0]   io_in_bits_resp_in_0_s2_full_pred_2_offsets_0,
  input  [3:0]   io_in_bits_resp_in_0_s2_full_pred_2_offsets_1,
  input  [40:0]  io_in_bits_resp_in_0_s2_full_pred_2_fallThroughAddr,
  input          io_in_bits_resp_in_0_s2_full_pred_2_is_jalr,
  input          io_in_bits_resp_in_0_s2_full_pred_2_is_call,
  input          io_in_bits_resp_in_0_s2_full_pred_2_is_ret,
  input          io_in_bits_resp_in_0_s2_full_pred_2_last_may_be_rvi_call,
  input          io_in_bits_resp_in_0_s2_full_pred_2_is_br_sharing,
  input          io_in_bits_resp_in_0_s2_full_pred_2_hit,
  input          io_in_bits_resp_in_0_s2_full_pred_3_br_taken_mask_0,
  input          io_in_bits_resp_in_0_s2_full_pred_3_br_taken_mask_1,
  input          io_in_bits_resp_in_0_s2_full_pred_3_slot_valids_0,
  input          io_in_bits_resp_in_0_s2_full_pred_3_slot_valids_1,
  input  [40:0]  io_in_bits_resp_in_0_s2_full_pred_3_targets_0,
  input  [40:0]  io_in_bits_resp_in_0_s2_full_pred_3_targets_1,
  input  [40:0]  io_in_bits_resp_in_0_s2_full_pred_3_jalr_target,
  input  [3:0]   io_in_bits_resp_in_0_s2_full_pred_3_offsets_0,
  input  [3:0]   io_in_bits_resp_in_0_s2_full_pred_3_offsets_1,
  input  [40:0]  io_in_bits_resp_in_0_s2_full_pred_3_fallThroughAddr,
  input          io_in_bits_resp_in_0_s2_full_pred_3_fallThroughErr,
  input          io_in_bits_resp_in_0_s2_full_pred_3_is_br_sharing,
  input          io_in_bits_resp_in_0_s2_full_pred_3_hit,
  input          io_in_bits_resp_in_0_s3_full_pred_0_br_taken_mask_0,
  input          io_in_bits_resp_in_0_s3_full_pred_0_br_taken_mask_1,
  input          io_in_bits_resp_in_0_s3_full_pred_0_slot_valids_0,
  input          io_in_bits_resp_in_0_s3_full_pred_0_slot_valids_1,
  input  [40:0]  io_in_bits_resp_in_0_s3_full_pred_0_targets_0,
  input  [40:0]  io_in_bits_resp_in_0_s3_full_pred_0_targets_1,
  input  [40:0]  io_in_bits_resp_in_0_s3_full_pred_0_jalr_target,
  input  [40:0]  io_in_bits_resp_in_0_s3_full_pred_0_fallThroughAddr,
  input          io_in_bits_resp_in_0_s3_full_pred_0_fallThroughErr,
  input          io_in_bits_resp_in_0_s3_full_pred_0_multiHit,
  input          io_in_bits_resp_in_0_s3_full_pred_0_is_br_sharing,
  input          io_in_bits_resp_in_0_s3_full_pred_0_hit,
  input          io_in_bits_resp_in_0_s3_full_pred_1_br_taken_mask_0,
  input          io_in_bits_resp_in_0_s3_full_pred_1_br_taken_mask_1,
  input          io_in_bits_resp_in_0_s3_full_pred_1_slot_valids_0,
  input          io_in_bits_resp_in_0_s3_full_pred_1_slot_valids_1,
  input  [40:0]  io_in_bits_resp_in_0_s3_full_pred_1_targets_0,
  input  [40:0]  io_in_bits_resp_in_0_s3_full_pred_1_targets_1,
  input  [40:0]  io_in_bits_resp_in_0_s3_full_pred_1_jalr_target,
  input  [40:0]  io_in_bits_resp_in_0_s3_full_pred_1_fallThroughAddr,
  input          io_in_bits_resp_in_0_s3_full_pred_1_fallThroughErr,
  input          io_in_bits_resp_in_0_s3_full_pred_1_multiHit,
  input          io_in_bits_resp_in_0_s3_full_pred_1_is_br_sharing,
  input          io_in_bits_resp_in_0_s3_full_pred_1_hit,
  input          io_in_bits_resp_in_0_s3_full_pred_2_br_taken_mask_0,
  input          io_in_bits_resp_in_0_s3_full_pred_2_br_taken_mask_1,
  input          io_in_bits_resp_in_0_s3_full_pred_2_slot_valids_0,
  input          io_in_bits_resp_in_0_s3_full_pred_2_slot_valids_1,
  input  [40:0]  io_in_bits_resp_in_0_s3_full_pred_2_targets_0,
  input  [40:0]  io_in_bits_resp_in_0_s3_full_pred_2_targets_1,
  input  [40:0]  io_in_bits_resp_in_0_s3_full_pred_2_jalr_target,
  input  [40:0]  io_in_bits_resp_in_0_s3_full_pred_2_fallThroughAddr,
  input          io_in_bits_resp_in_0_s3_full_pred_2_fallThroughErr,
  input          io_in_bits_resp_in_0_s3_full_pred_2_multiHit,
  input          io_in_bits_resp_in_0_s3_full_pred_2_is_jalr,
  input          io_in_bits_resp_in_0_s3_full_pred_2_is_call,
  input          io_in_bits_resp_in_0_s3_full_pred_2_is_ret,
  input          io_in_bits_resp_in_0_s3_full_pred_2_is_br_sharing,
  input          io_in_bits_resp_in_0_s3_full_pred_2_hit,
  input          io_in_bits_resp_in_0_s3_full_pred_3_br_taken_mask_0,
  input          io_in_bits_resp_in_0_s3_full_pred_3_br_taken_mask_1,
  input          io_in_bits_resp_in_0_s3_full_pred_3_slot_valids_0,
  input          io_in_bits_resp_in_0_s3_full_pred_3_slot_valids_1,
  input  [40:0]  io_in_bits_resp_in_0_s3_full_pred_3_targets_0,
  input  [40:0]  io_in_bits_resp_in_0_s3_full_pred_3_targets_1,
  input  [40:0]  io_in_bits_resp_in_0_s3_full_pred_3_jalr_target,
  input  [3:0]   io_in_bits_resp_in_0_s3_full_pred_3_offsets_0,
  input  [3:0]   io_in_bits_resp_in_0_s3_full_pred_3_offsets_1,
  input  [40:0]  io_in_bits_resp_in_0_s3_full_pred_3_fallThroughAddr,
  input          io_in_bits_resp_in_0_s3_full_pred_3_fallThroughErr,
  input          io_in_bits_resp_in_0_s3_full_pred_3_multiHit,
  input          io_in_bits_resp_in_0_s3_full_pred_3_is_br_sharing,
  input          io_in_bits_resp_in_0_s3_full_pred_3_hit,
  input          io_in_bits_resp_in_0_last_stage_ftb_entry_isCall,
  input          io_in_bits_resp_in_0_last_stage_ftb_entry_isRet,
  input          io_in_bits_resp_in_0_last_stage_ftb_entry_isJalr,
  input          io_in_bits_resp_in_0_last_stage_ftb_entry_valid,
  input  [3:0]   io_in_bits_resp_in_0_last_stage_ftb_entry_brSlots_0_offset,
  input          io_in_bits_resp_in_0_last_stage_ftb_entry_brSlots_0_sharing,
  input          io_in_bits_resp_in_0_last_stage_ftb_entry_brSlots_0_valid,
  input  [11:0]  io_in_bits_resp_in_0_last_stage_ftb_entry_brSlots_0_lower,
  input  [1:0]   io_in_bits_resp_in_0_last_stage_ftb_entry_brSlots_0_tarStat,
  input  [3:0]   io_in_bits_resp_in_0_last_stage_ftb_entry_tailSlot_offset,
  input          io_in_bits_resp_in_0_last_stage_ftb_entry_tailSlot_sharing,
  input          io_in_bits_resp_in_0_last_stage_ftb_entry_tailSlot_valid,
  input  [19:0]  io_in_bits_resp_in_0_last_stage_ftb_entry_tailSlot_lower,
  input  [1:0]   io_in_bits_resp_in_0_last_stage_ftb_entry_tailSlot_tarStat,
  input  [3:0]   io_in_bits_resp_in_0_last_stage_ftb_entry_pftAddr,
  input          io_in_bits_resp_in_0_last_stage_ftb_entry_carry,
  input          io_in_bits_resp_in_0_last_stage_ftb_entry_last_may_be_rvi_call,
  input          io_in_bits_resp_in_0_last_stage_ftb_entry_always_taken_0,
  input          io_in_bits_resp_in_0_last_stage_ftb_entry_always_taken_1,
  output [40:0]  io_out_s2_pc_0,
  output [40:0]  io_out_s2_pc_1,
  output [40:0]  io_out_s2_pc_2,
  output [40:0]  io_out_s2_pc_3,
  output         io_out_s2_full_pred_0_br_taken_mask_0,
  output         io_out_s2_full_pred_0_br_taken_mask_1,
  output         io_out_s2_full_pred_0_slot_valids_0,
  output         io_out_s2_full_pred_0_slot_valids_1,
  output [40:0]  io_out_s2_full_pred_0_targets_0,
  output [40:0]  io_out_s2_full_pred_0_targets_1,
  output [3:0]   io_out_s2_full_pred_0_offsets_0,
  output [3:0]   io_out_s2_full_pred_0_offsets_1,
  output [40:0]  io_out_s2_full_pred_0_fallThroughAddr,
  output         io_out_s2_full_pred_0_is_br_sharing,
  output         io_out_s2_full_pred_0_hit,
  output         io_out_s2_full_pred_1_br_taken_mask_0,
  output         io_out_s2_full_pred_1_br_taken_mask_1,
  output         io_out_s2_full_pred_1_slot_valids_0,
  output         io_out_s2_full_pred_1_slot_valids_1,
  output [40:0]  io_out_s2_full_pred_1_targets_0,
  output [40:0]  io_out_s2_full_pred_1_targets_1,
  output [3:0]   io_out_s2_full_pred_1_offsets_0,
  output [3:0]   io_out_s2_full_pred_1_offsets_1,
  output [40:0]  io_out_s2_full_pred_1_fallThroughAddr,
  output         io_out_s2_full_pred_1_is_br_sharing,
  output         io_out_s2_full_pred_1_hit,
  output         io_out_s2_full_pred_2_br_taken_mask_0,
  output         io_out_s2_full_pred_2_br_taken_mask_1,
  output         io_out_s2_full_pred_2_slot_valids_0,
  output         io_out_s2_full_pred_2_slot_valids_1,
  output [40:0]  io_out_s2_full_pred_2_targets_0,
  output [40:0]  io_out_s2_full_pred_2_targets_1,
  output [3:0]   io_out_s2_full_pred_2_offsets_0,
  output [3:0]   io_out_s2_full_pred_2_offsets_1,
  output [40:0]  io_out_s2_full_pred_2_fallThroughAddr,
  output         io_out_s2_full_pred_2_is_br_sharing,
  output         io_out_s2_full_pred_2_hit,
  output         io_out_s2_full_pred_3_br_taken_mask_0,
  output         io_out_s2_full_pred_3_br_taken_mask_1,
  output         io_out_s2_full_pred_3_slot_valids_0,
  output         io_out_s2_full_pred_3_slot_valids_1,
  output [40:0]  io_out_s2_full_pred_3_targets_0,
  output [40:0]  io_out_s2_full_pred_3_targets_1,
  output [3:0]   io_out_s2_full_pred_3_offsets_0,
  output [3:0]   io_out_s2_full_pred_3_offsets_1,
  output [40:0]  io_out_s2_full_pred_3_fallThroughAddr,
  output         io_out_s2_full_pred_3_fallThroughErr,
  output         io_out_s2_full_pred_3_is_br_sharing,
  output         io_out_s2_full_pred_3_hit,
  output [40:0]  io_out_s3_pc_0,
  output [40:0]  io_out_s3_pc_1,
  output [40:0]  io_out_s3_pc_2,
  output [40:0]  io_out_s3_pc_3,
  output         io_out_s3_full_pred_0_br_taken_mask_0,
  output         io_out_s3_full_pred_0_br_taken_mask_1,
  output         io_out_s3_full_pred_0_slot_valids_0,
  output         io_out_s3_full_pred_0_slot_valids_1,
  output [40:0]  io_out_s3_full_pred_0_targets_0,
  output [40:0]  io_out_s3_full_pred_0_targets_1,
  output [40:0]  io_out_s3_full_pred_0_fallThroughAddr,
  output         io_out_s3_full_pred_0_fallThroughErr,
  output         io_out_s3_full_pred_0_multiHit,
  output         io_out_s3_full_pred_0_is_br_sharing,
  output         io_out_s3_full_pred_0_hit,
  output         io_out_s3_full_pred_1_br_taken_mask_0,
  output         io_out_s3_full_pred_1_br_taken_mask_1,
  output         io_out_s3_full_pred_1_slot_valids_0,
  output         io_out_s3_full_pred_1_slot_valids_1,
  output [40:0]  io_out_s3_full_pred_1_targets_0,
  output [40:0]  io_out_s3_full_pred_1_targets_1,
  output [40:0]  io_out_s3_full_pred_1_fallThroughAddr,
  output         io_out_s3_full_pred_1_fallThroughErr,
  output         io_out_s3_full_pred_1_multiHit,
  output         io_out_s3_full_pred_1_is_br_sharing,
  output         io_out_s3_full_pred_1_hit,
  output         io_out_s3_full_pred_2_br_taken_mask_0,
  output         io_out_s3_full_pred_2_br_taken_mask_1,
  output         io_out_s3_full_pred_2_slot_valids_0,
  output         io_out_s3_full_pred_2_slot_valids_1,
  output [40:0]  io_out_s3_full_pred_2_targets_0,
  output [40:0]  io_out_s3_full_pred_2_targets_1,
  output [40:0]  io_out_s3_full_pred_2_fallThroughAddr,
  output         io_out_s3_full_pred_2_fallThroughErr,
  output         io_out_s3_full_pred_2_multiHit,
  output         io_out_s3_full_pred_2_is_br_sharing,
  output         io_out_s3_full_pred_2_hit,
  output         io_out_s3_full_pred_3_br_taken_mask_0,
  output         io_out_s3_full_pred_3_br_taken_mask_1,
  output         io_out_s3_full_pred_3_slot_valids_0,
  output         io_out_s3_full_pred_3_slot_valids_1,
  output [40:0]  io_out_s3_full_pred_3_targets_0,
  output [40:0]  io_out_s3_full_pred_3_targets_1,
  output [3:0]   io_out_s3_full_pred_3_offsets_0,
  output [3:0]   io_out_s3_full_pred_3_offsets_1,
  output [40:0]  io_out_s3_full_pred_3_fallThroughAddr,
  output         io_out_s3_full_pred_3_fallThroughErr,
  output         io_out_s3_full_pred_3_multiHit,
  output         io_out_s3_full_pred_3_is_br_sharing,
  output         io_out_s3_full_pred_3_hit,
  output [250:0] io_out_last_stage_meta,
  output [3:0]   io_out_last_stage_spec_info_ssp,
  output [2:0]   io_out_last_stage_spec_info_sctr,
  output         io_out_last_stage_spec_info_TOSW_flag,
  output [4:0]   io_out_last_stage_spec_info_TOSW_value,
  output         io_out_last_stage_spec_info_TOSR_flag,
  output [4:0]   io_out_last_stage_spec_info_TOSR_value,
  output         io_out_last_stage_spec_info_NOS_flag,
  output [4:0]   io_out_last_stage_spec_info_NOS_value,
  output [40:0]  io_out_last_stage_spec_info_topAddr,
  output         io_out_last_stage_ftb_entry_isCall,
  output         io_out_last_stage_ftb_entry_isRet,
  output         io_out_last_stage_ftb_entry_isJalr,
  output         io_out_last_stage_ftb_entry_valid,
  output [3:0]   io_out_last_stage_ftb_entry_brSlots_0_offset,
  output         io_out_last_stage_ftb_entry_brSlots_0_sharing,
  output         io_out_last_stage_ftb_entry_brSlots_0_valid,
  output [11:0]  io_out_last_stage_ftb_entry_brSlots_0_lower,
  output [1:0]   io_out_last_stage_ftb_entry_brSlots_0_tarStat,
  output [3:0]   io_out_last_stage_ftb_entry_tailSlot_offset,
  output         io_out_last_stage_ftb_entry_tailSlot_sharing,
  output         io_out_last_stage_ftb_entry_tailSlot_valid,
  output [19:0]  io_out_last_stage_ftb_entry_tailSlot_lower,
  output [1:0]   io_out_last_stage_ftb_entry_tailSlot_tarStat,
  output [3:0]   io_out_last_stage_ftb_entry_pftAddr,
  output         io_out_last_stage_ftb_entry_carry,
  output         io_out_last_stage_ftb_entry_last_may_be_rvi_call,
  output         io_out_last_stage_ftb_entry_always_taken_0,
  output         io_out_last_stage_ftb_entry_always_taken_1,
  input          io_ctrl_ras_enable,
  input          io_s0_fire_0,
  input          io_s0_fire_1,
  input          io_s0_fire_2,
  input          io_s0_fire_3,
  input          io_s1_fire_0,
  input          io_s1_fire_1,
  input          io_s1_fire_2,
  input          io_s1_fire_3,
  input          io_s2_fire_0,
  input          io_s2_fire_1,
  input          io_s2_fire_2,
  input          io_s2_fire_3,
  input          io_s3_fire_2,
  input          io_s3_redirect_2,
  input          io_update_valid,
  input          io_update_bits_ftb_entry_isCall,
  input          io_update_bits_ftb_entry_isRet,
  input  [3:0]   io_update_bits_ftb_entry_tailSlot_offset,
  input          io_update_bits_ftb_entry_tailSlot_valid,
  input          io_update_bits_cfi_idx_valid,
  input  [3:0]   io_update_bits_cfi_idx_bits,
  input          io_update_bits_jmp_taken,
  input  [250:0] io_update_bits_meta,
  input          io_redirect_valid,
  input          io_redirect_bits_level,
  input  [40:0]  io_redirect_bits_cfiUpdate_pc,
  input          io_redirect_bits_cfiUpdate_pd_isRVC,
  input          io_redirect_bits_cfiUpdate_pd_isCall,
  input          io_redirect_bits_cfiUpdate_pd_isRet,
  input  [3:0]   io_redirect_bits_cfiUpdate_ssp,
  input  [1:0]   io_redirect_bits_cfiUpdate_sctr,
  input          io_redirect_bits_cfiUpdate_TOSW_flag,
  input  [4:0]   io_redirect_bits_cfiUpdate_TOSW_value,
  input          io_redirect_bits_cfiUpdate_TOSR_flag,
  input  [4:0]   io_redirect_bits_cfiUpdate_TOSR_value,
  input          io_redirect_bits_cfiUpdate_NOS_flag,
  input  [4:0]   io_redirect_bits_cfiUpdate_NOS_value
);

  wire [40:0] _RASStack_io_spec_pop_addr;
  wire [3:0]  _RASStack_io_ssp;
  wire [2:0]  _RASStack_io_sctr;
  wire        _RASStack_io_TOSR_flag;
  wire [4:0]  _RASStack_io_TOSR_value;
  wire        _RASStack_io_TOSW_flag;
  wire [4:0]  _RASStack_io_TOSW_value;
  wire        _RASStack_io_NOS_flag;
  wire [4:0]  _RASStack_io_NOS_value;
  wire [35:0] _reset_vector_delay_io_out;
  reg  [40:0] s1_pc_dup_0;
  reg  [40:0] s1_pc_dup_1;
  reg  [40:0] s1_pc_dup_2;
  reg  [40:0] s1_pc_dup_3;
  reg  [40:0] s2_pc_dup_0;
  reg  [40:0] s2_pc_dup_1;
  reg  [40:0] s2_pc_dup_2;
  reg  [40:0] s2_pc_dup_3;
  reg  [40:0] s3_pc_dup_0;
  reg  [40:0] s3_pc_dup_1;
  reg  [40:0] s3_pc_dup_2;
  reg  [40:0] s3_pc_dup_3;
  reg         REG;
  reg         REG_1;
  wire [40:0] _s2_spec_new_addr_T_1 =
    41'(io_in_bits_resp_in_0_s2_full_pred_2_fallThroughAddr
        + {39'h0, io_in_bits_resp_in_0_s2_full_pred_2_last_may_be_rvi_call, 1'h0});
  wire        _s2_spec_pop_T_8 =
    io_in_bits_resp_in_0_s2_full_pred_2_slot_valids_0
    & io_in_bits_resp_in_0_s2_full_pred_2_br_taken_mask_0;
  wire        _s2_spec_pop_T_9 =
    io_in_bits_resp_in_0_s2_full_pred_2_is_br_sharing
    & io_in_bits_resp_in_0_s2_full_pred_2_br_taken_mask_1;
  wire        s2_spec_push =
    io_s2_fire_2 & ~(_s2_spec_pop_T_8 & io_in_bits_resp_in_0_s2_full_pred_2_hit)
    & io_in_bits_resp_in_0_s2_full_pred_2_slot_valids_1
    & (_s2_spec_pop_T_9 | ~io_in_bits_resp_in_0_s2_full_pred_2_is_br_sharing)
    & io_in_bits_resp_in_0_s2_full_pred_2_hit
    & ~io_in_bits_resp_in_0_s2_full_pred_2_is_br_sharing
    & io_in_bits_resp_in_0_s2_full_pred_2_is_call & ~io_s3_redirect_2;
  wire        s2_spec_pop =
    io_s2_fire_2 & ~(_s2_spec_pop_T_8 & io_in_bits_resp_in_0_s2_full_pred_2_hit)
    & io_in_bits_resp_in_0_s2_full_pred_2_slot_valids_1
    & (_s2_spec_pop_T_9 | ~io_in_bits_resp_in_0_s2_full_pred_2_is_br_sharing)
    & io_in_bits_resp_in_0_s2_full_pred_2_hit
    & ~io_in_bits_resp_in_0_s2_full_pred_2_is_br_sharing
    & io_in_bits_resp_in_0_s2_full_pred_2_is_ret & ~io_s3_redirect_2;
  wire        _GEN = io_in_bits_resp_in_0_s2_full_pred_2_is_ret & io_ctrl_ras_enable;
  reg  [40:0] s3_top;
  reg  [40:0] s3_spec_new_addr;
  wire        _GEN_0 = io_in_bits_resp_in_0_s3_full_pred_2_is_ret & io_ctrl_ras_enable;
  reg         s3_pushed_in_s2;
  reg         s3_popped_in_s2;
  wire        _s3_pop_T_8 =
    io_in_bits_resp_in_0_s3_full_pred_2_slot_valids_0
    & io_in_bits_resp_in_0_s3_full_pred_2_br_taken_mask_0;
  wire        _s3_pop_T_9 =
    io_in_bits_resp_in_0_s3_full_pred_2_is_br_sharing
    & io_in_bits_resp_in_0_s3_full_pred_2_br_taken_mask_1;
  wire        s3_push =
    ~(_s3_pop_T_8 & io_in_bits_resp_in_0_s3_full_pred_2_hit)
    & io_in_bits_resp_in_0_s3_full_pred_2_slot_valids_1
    & (_s3_pop_T_9 | ~io_in_bits_resp_in_0_s3_full_pred_2_is_br_sharing)
    & io_in_bits_resp_in_0_s3_full_pred_2_hit
    & ~io_in_bits_resp_in_0_s3_full_pred_2_is_br_sharing
    & io_in_bits_resp_in_0_s3_full_pred_2_is_call;
  wire        s3_pop =
    ~(_s3_pop_T_8 & io_in_bits_resp_in_0_s3_full_pred_2_hit)
    & io_in_bits_resp_in_0_s3_full_pred_2_slot_valids_1
    & (_s3_pop_T_9 | ~io_in_bits_resp_in_0_s3_full_pred_2_is_br_sharing)
    & io_in_bits_resp_in_0_s3_full_pred_2_hit
    & ~io_in_bits_resp_in_0_s3_full_pred_2_is_br_sharing
    & io_in_bits_resp_in_0_s3_full_pred_2_is_ret;
  reg  [3:0]  s3_meta_ssp;
  reg  [2:0]  s3_meta_sctr;
  reg         s3_meta_TOSW_flag;
  reg  [4:0]  s3_meta_TOSW_value;
  reg         s3_meta_TOSR_flag;
  reg  [4:0]  s3_meta_TOSR_value;
  reg         s3_meta_NOS_flag;
  reg  [4:0]  s3_meta_NOS_value;
  reg         redirect_next_valid_last_REG;
  reg         redirect_next_bits_rlevel;
  reg  [40:0] redirect_next_bits_rcfiUpdate_pc;
  reg         redirect_next_bits_rcfiUpdate_pd_isRVC;
  reg         redirect_next_bits_rcfiUpdate_pd_isCall;
  reg         redirect_next_bits_rcfiUpdate_pd_isRet;
  reg  [3:0]  redirect_next_bits_rcfiUpdate_ssp;
  reg  [1:0]  redirect_next_bits_rcfiUpdate_sctr;
  reg         redirect_next_bits_rcfiUpdate_TOSW_flag;
  reg  [4:0]  redirect_next_bits_rcfiUpdate_TOSW_value;
  reg         redirect_next_bits_rcfiUpdate_TOSR_flag;
  reg  [4:0]  redirect_next_bits_rcfiUpdate_TOSR_value;
  reg         redirect_next_bits_rcfiUpdate_NOS_flag;
  reg  [4:0]  redirect_next_bits_rcfiUpdate_NOS_value;
  wire        _GEN_1 =
    io_update_bits_cfi_idx_bits == io_update_bits_ftb_entry_tailSlot_offset;
  wire [40:0] _GEN_2 = {5'h0, _reset_vector_delay_io_out};
  always @(posedge clock) begin
    if (REG_1) begin
      s1_pc_dup_0 <= _GEN_2;
      s1_pc_dup_1 <= _GEN_2;
      s1_pc_dup_2 <= _GEN_2;
      s1_pc_dup_3 <= _GEN_2;
    end
    else begin
      if (io_s0_fire_0)
        s1_pc_dup_0 <= io_in_bits_s0_pc_0;
      if (io_s0_fire_1)
        s1_pc_dup_1 <= io_in_bits_s0_pc_1;
      if (io_s0_fire_2)
        s1_pc_dup_2 <= io_in_bits_s0_pc_2;
      if (io_s0_fire_3)
        s1_pc_dup_3 <= io_in_bits_s0_pc_3;
    end
    if (io_s1_fire_0)
      s2_pc_dup_0 <= s1_pc_dup_0;
    if (io_s1_fire_1)
      s2_pc_dup_1 <= s1_pc_dup_1;
    if (io_s1_fire_2)
      s2_pc_dup_2 <= s1_pc_dup_2;
    if (io_s1_fire_3)
      s2_pc_dup_3 <= s1_pc_dup_3;
    if (io_s2_fire_0)
      s3_pc_dup_0 <= s2_pc_dup_0;
    if (io_s2_fire_1)
      s3_pc_dup_1 <= s2_pc_dup_1;
    if (io_s2_fire_2) begin
      s3_pc_dup_2 <= s2_pc_dup_2;
      s3_top <= _RASStack_io_spec_pop_addr;
      s3_spec_new_addr <= _s2_spec_new_addr_T_1;
      s3_pushed_in_s2 <= s2_spec_push;
      s3_popped_in_s2 <= s2_spec_pop;
      s3_meta_ssp <= _RASStack_io_ssp;
      s3_meta_sctr <= _RASStack_io_sctr;
      s3_meta_TOSW_flag <= _RASStack_io_TOSW_flag;
      s3_meta_TOSW_value <= _RASStack_io_TOSW_value;
      s3_meta_TOSR_flag <= _RASStack_io_TOSR_flag;
      s3_meta_TOSR_value <= _RASStack_io_TOSR_value;
      s3_meta_NOS_flag <= _RASStack_io_NOS_flag;
      s3_meta_NOS_value <= _RASStack_io_NOS_value;
    end
    if (io_s2_fire_3)
      s3_pc_dup_3 <= s2_pc_dup_3;
    REG <= reset;
    REG_1 <= REG & ~reset;
    if (io_redirect_valid) begin
      redirect_next_bits_rlevel <= io_redirect_bits_level;
      redirect_next_bits_rcfiUpdate_pc <= io_redirect_bits_cfiUpdate_pc;
      redirect_next_bits_rcfiUpdate_pd_isRVC <= io_redirect_bits_cfiUpdate_pd_isRVC;
      redirect_next_bits_rcfiUpdate_pd_isCall <= io_redirect_bits_cfiUpdate_pd_isCall;
      redirect_next_bits_rcfiUpdate_pd_isRet <= io_redirect_bits_cfiUpdate_pd_isRet;
      redirect_next_bits_rcfiUpdate_ssp <= io_redirect_bits_cfiUpdate_ssp;
      redirect_next_bits_rcfiUpdate_sctr <= io_redirect_bits_cfiUpdate_sctr;
      redirect_next_bits_rcfiUpdate_TOSW_flag <= io_redirect_bits_cfiUpdate_TOSW_flag;
      redirect_next_bits_rcfiUpdate_TOSW_value <= io_redirect_bits_cfiUpdate_TOSW_value;
      redirect_next_bits_rcfiUpdate_TOSR_flag <= io_redirect_bits_cfiUpdate_TOSR_flag;
      redirect_next_bits_rcfiUpdate_TOSR_value <= io_redirect_bits_cfiUpdate_TOSR_value;
      redirect_next_bits_rcfiUpdate_NOS_flag <= io_redirect_bits_cfiUpdate_NOS_flag;
      redirect_next_bits_rcfiUpdate_NOS_value <= io_redirect_bits_cfiUpdate_NOS_value;
    end
  end // always @(posedge)
  always @(posedge clock or posedge reset) begin
    if (reset)
      redirect_next_valid_last_REG <= 1'h0;
    else
      redirect_next_valid_last_REG <= io_redirect_valid;
  end // always @(posedge, posedge)
  `ifdef ENABLE_INITIAL_REG_
    `ifdef FIRRTL_BEFORE_INITIAL
      `FIRRTL_BEFORE_INITIAL
    `endif // FIRRTL_BEFORE_INITIAL
    logic [31:0] _RANDOM[0:21];
    initial begin
      `ifdef INIT_RANDOM_PROLOG_
        `INIT_RANDOM_PROLOG_
      `endif // INIT_RANDOM_PROLOG_
      `ifdef RANDOMIZE_REG_INIT
        for (logic [4:0] i = 5'h0; i < 5'h16; i += 5'h1) begin
          _RANDOM[i] = `RANDOM;
        end
        s1_pc_dup_0 = {_RANDOM[5'h0], _RANDOM[5'h1][8:0]};
        s1_pc_dup_1 = {_RANDOM[5'h1][31:9], _RANDOM[5'h2][17:0]};
        s1_pc_dup_2 = {_RANDOM[5'h2][31:18], _RANDOM[5'h3][26:0]};
        s1_pc_dup_3 = {_RANDOM[5'h3][31:27], _RANDOM[5'h4], _RANDOM[5'h5][3:0]};
        s2_pc_dup_0 = {_RANDOM[5'h5][31:4], _RANDOM[5'h6][12:0]};
        s2_pc_dup_1 = {_RANDOM[5'h6][31:13], _RANDOM[5'h7][21:0]};
        s2_pc_dup_2 = {_RANDOM[5'h7][31:22], _RANDOM[5'h8][30:0]};
        s2_pc_dup_3 = {_RANDOM[5'h8][31], _RANDOM[5'h9], _RANDOM[5'hA][7:0]};
        s3_pc_dup_0 = {_RANDOM[5'hA][31:8], _RANDOM[5'hB][16:0]};
        s3_pc_dup_1 = {_RANDOM[5'hB][31:17], _RANDOM[5'hC][25:0]};
        s3_pc_dup_2 = {_RANDOM[5'hC][31:26], _RANDOM[5'hD], _RANDOM[5'hE][2:0]};
        s3_pc_dup_3 = {_RANDOM[5'hE][31:3], _RANDOM[5'hF][11:0]};
        REG = _RANDOM[5'hF][12];
        REG_1 = _RANDOM[5'hF][13];
        s3_top = {_RANDOM[5'hF][31:14], _RANDOM[5'h10][22:0]};
        s3_spec_new_addr = {_RANDOM[5'h10][31:23], _RANDOM[5'h11]};
        s3_pushed_in_s2 = _RANDOM[5'h12][0];
        s3_popped_in_s2 = _RANDOM[5'h12][1];
        s3_meta_ssp = _RANDOM[5'h12][5:2];
        s3_meta_sctr = _RANDOM[5'h12][8:6];
        s3_meta_TOSW_flag = _RANDOM[5'h12][9];
        s3_meta_TOSW_value = _RANDOM[5'h12][14:10];
        s3_meta_TOSR_flag = _RANDOM[5'h12][15];
        s3_meta_TOSR_value = _RANDOM[5'h12][20:16];
        s3_meta_NOS_flag = _RANDOM[5'h12][21];
        s3_meta_NOS_value = _RANDOM[5'h12][26:22];
        redirect_next_valid_last_REG = _RANDOM[5'h12][27];
        redirect_next_bits_rlevel = _RANDOM[5'h13][17];
        redirect_next_bits_rcfiUpdate_pc = {_RANDOM[5'h13][31:19], _RANDOM[5'h14][27:0]};
        redirect_next_bits_rcfiUpdate_pd_isRVC = _RANDOM[5'h14][29];
        redirect_next_bits_rcfiUpdate_pd_isCall = _RANDOM[5'h15][0];
        redirect_next_bits_rcfiUpdate_pd_isRet = _RANDOM[5'h15][1];
        redirect_next_bits_rcfiUpdate_ssp = _RANDOM[5'h15][5:2];
        redirect_next_bits_rcfiUpdate_sctr = _RANDOM[5'h15][7:6];
        redirect_next_bits_rcfiUpdate_TOSW_flag = _RANDOM[5'h15][8];
        redirect_next_bits_rcfiUpdate_TOSW_value = _RANDOM[5'h15][13:9];
        redirect_next_bits_rcfiUpdate_TOSR_flag = _RANDOM[5'h15][14];
        redirect_next_bits_rcfiUpdate_TOSR_value = _RANDOM[5'h15][19:15];
        redirect_next_bits_rcfiUpdate_NOS_flag = _RANDOM[5'h15][20];
        redirect_next_bits_rcfiUpdate_NOS_value = _RANDOM[5'h15][25:21];
      `endif // RANDOMIZE_REG_INIT
      if (reset)
        redirect_next_valid_last_REG = 1'h0;
    end // initial
    `ifdef FIRRTL_AFTER_INITIAL
      `FIRRTL_AFTER_INITIAL
    `endif // FIRRTL_AFTER_INITIAL
  `endif // ENABLE_INITIAL_REG_
  DelayN_1 reset_vector_delay (
    .clock  (clock),
    .io_in  (io_reset_vector),
    .io_out (_reset_vector_delay_io_out)
  );
  RASStack RASStack (
    .clock                       (clock),
    .reset                       (reset),
    .io_spec_push_valid          (s2_spec_push),
    .io_spec_pop_valid           (s2_spec_pop),
    .io_spec_push_addr           (_s2_spec_new_addr_T_1),
    .io_s2_fire                  (io_s2_fire_2),
    .io_s3_fire                  (io_s3_fire_2),
    .io_s3_cancel
      (io_s3_fire_2 & (s3_pushed_in_s2 != s3_push | s3_popped_in_s2 != s3_pop)),
    .io_s3_meta_ssp              (s3_meta_ssp),
    .io_s3_meta_sctr             (s3_meta_sctr),
    .io_s3_meta_TOSW_flag        (s3_meta_TOSW_flag),
    .io_s3_meta_TOSW_value       (s3_meta_TOSW_value),
    .io_s3_meta_TOSR_flag        (s3_meta_TOSR_flag),
    .io_s3_meta_TOSR_value       (s3_meta_TOSR_value),
    .io_s3_meta_NOS_flag         (s3_meta_NOS_flag),
    .io_s3_meta_NOS_value        (s3_meta_NOS_value),
    .io_s3_missed_pop            (s3_pop & ~s3_popped_in_s2),
    .io_s3_missed_push           (s3_push & ~s3_pushed_in_s2),
    .io_s3_pushAddr              (s3_spec_new_addr),
    .io_spec_pop_addr            (_RASStack_io_spec_pop_addr),
    .io_commit_push_valid
      (io_update_valid & io_update_bits_ftb_entry_tailSlot_valid
       & io_update_bits_ftb_entry_isCall & io_update_bits_jmp_taken
       & io_update_bits_cfi_idx_valid & _GEN_1),
    .io_commit_pop_valid
      (io_update_valid & io_update_bits_ftb_entry_tailSlot_valid
       & io_update_bits_ftb_entry_isRet & io_update_bits_jmp_taken
       & io_update_bits_cfi_idx_valid & _GEN_1),
    .io_commit_meta_TOSW_flag    (io_update_bits_meta[5]),
    .io_commit_meta_TOSW_value   (io_update_bits_meta[4:0]),
    .io_commit_meta_ssp          (io_update_bits_meta[9:6]),
    .io_redirect_valid           (redirect_next_valid_last_REG),
    .io_redirect_isCall
      (redirect_next_valid_last_REG & ~redirect_next_bits_rlevel
       & redirect_next_bits_rcfiUpdate_pd_isCall),
    .io_redirect_isRet
      (redirect_next_valid_last_REG & ~redirect_next_bits_rlevel
       & redirect_next_bits_rcfiUpdate_pd_isRet),
    .io_redirect_meta_ssp        (redirect_next_bits_rcfiUpdate_ssp),
    .io_redirect_meta_sctr       ({1'h0, redirect_next_bits_rcfiUpdate_sctr}),
    .io_redirect_meta_TOSW_flag  (redirect_next_bits_rcfiUpdate_TOSW_flag),
    .io_redirect_meta_TOSW_value (redirect_next_bits_rcfiUpdate_TOSW_value),
    .io_redirect_meta_TOSR_flag  (redirect_next_bits_rcfiUpdate_TOSR_flag),
    .io_redirect_meta_TOSR_value (redirect_next_bits_rcfiUpdate_TOSR_value),
    .io_redirect_meta_NOS_flag   (redirect_next_bits_rcfiUpdate_NOS_flag),
    .io_redirect_meta_NOS_value  (redirect_next_bits_rcfiUpdate_NOS_value),
    .io_redirect_callAddr
      (41'(redirect_next_bits_rcfiUpdate_pc
           + {38'h0, redirect_next_bits_rcfiUpdate_pd_isRVC ? 3'h2 : 3'h4})),
    .io_ssp                      (_RASStack_io_ssp),
    .io_sctr                     (_RASStack_io_sctr),
    .io_TOSR_flag                (_RASStack_io_TOSR_flag),
    .io_TOSR_value               (_RASStack_io_TOSR_value),
    .io_TOSW_flag                (_RASStack_io_TOSW_flag),
    .io_TOSW_value               (_RASStack_io_TOSW_value),
    .io_NOS_flag                 (_RASStack_io_NOS_flag),
    .io_NOS_value                (_RASStack_io_NOS_value)
  );
  assign io_out_s2_pc_0 = s2_pc_dup_0;
  assign io_out_s2_pc_1 = s2_pc_dup_1;
  assign io_out_s2_pc_2 = s2_pc_dup_2;
  assign io_out_s2_pc_3 = s2_pc_dup_3;
  assign io_out_s2_full_pred_0_br_taken_mask_0 =
    io_in_bits_resp_in_0_s2_full_pred_0_br_taken_mask_0;
  assign io_out_s2_full_pred_0_br_taken_mask_1 =
    io_in_bits_resp_in_0_s2_full_pred_0_br_taken_mask_1;
  assign io_out_s2_full_pred_0_slot_valids_0 =
    io_in_bits_resp_in_0_s2_full_pred_0_slot_valids_0;
  assign io_out_s2_full_pred_0_slot_valids_1 =
    io_in_bits_resp_in_0_s2_full_pred_0_slot_valids_1;
  assign io_out_s2_full_pred_0_targets_0 = io_in_bits_resp_in_0_s2_full_pred_0_targets_0;
  assign io_out_s2_full_pred_0_targets_1 =
    io_in_bits_resp_in_0_s2_full_pred_2_is_jalr
      ? (_GEN
           ? _RASStack_io_spec_pop_addr
           : io_in_bits_resp_in_0_s2_full_pred_0_jalr_target)
      : io_in_bits_resp_in_0_s2_full_pred_0_targets_1;
  assign io_out_s2_full_pred_0_offsets_0 = io_in_bits_resp_in_0_s2_full_pred_0_offsets_0;
  assign io_out_s2_full_pred_0_offsets_1 = io_in_bits_resp_in_0_s2_full_pred_0_offsets_1;
  assign io_out_s2_full_pred_0_fallThroughAddr =
    io_in_bits_resp_in_0_s2_full_pred_0_fallThroughAddr;
  assign io_out_s2_full_pred_0_is_br_sharing =
    io_in_bits_resp_in_0_s2_full_pred_0_is_br_sharing;
  assign io_out_s2_full_pred_0_hit = io_in_bits_resp_in_0_s2_full_pred_0_hit;
  assign io_out_s2_full_pred_1_br_taken_mask_0 =
    io_in_bits_resp_in_0_s2_full_pred_1_br_taken_mask_0;
  assign io_out_s2_full_pred_1_br_taken_mask_1 =
    io_in_bits_resp_in_0_s2_full_pred_1_br_taken_mask_1;
  assign io_out_s2_full_pred_1_slot_valids_0 =
    io_in_bits_resp_in_0_s2_full_pred_1_slot_valids_0;
  assign io_out_s2_full_pred_1_slot_valids_1 =
    io_in_bits_resp_in_0_s2_full_pred_1_slot_valids_1;
  assign io_out_s2_full_pred_1_targets_0 = io_in_bits_resp_in_0_s2_full_pred_1_targets_0;
  assign io_out_s2_full_pred_1_targets_1 =
    io_in_bits_resp_in_0_s2_full_pred_2_is_jalr
      ? (_GEN
           ? _RASStack_io_spec_pop_addr
           : io_in_bits_resp_in_0_s2_full_pred_1_jalr_target)
      : io_in_bits_resp_in_0_s2_full_pred_1_targets_1;
  assign io_out_s2_full_pred_1_offsets_0 = io_in_bits_resp_in_0_s2_full_pred_1_offsets_0;
  assign io_out_s2_full_pred_1_offsets_1 = io_in_bits_resp_in_0_s2_full_pred_1_offsets_1;
  assign io_out_s2_full_pred_1_fallThroughAddr =
    io_in_bits_resp_in_0_s2_full_pred_1_fallThroughAddr;
  assign io_out_s2_full_pred_1_is_br_sharing =
    io_in_bits_resp_in_0_s2_full_pred_1_is_br_sharing;
  assign io_out_s2_full_pred_1_hit = io_in_bits_resp_in_0_s2_full_pred_1_hit;
  assign io_out_s2_full_pred_2_br_taken_mask_0 =
    io_in_bits_resp_in_0_s2_full_pred_2_br_taken_mask_0;
  assign io_out_s2_full_pred_2_br_taken_mask_1 =
    io_in_bits_resp_in_0_s2_full_pred_2_br_taken_mask_1;
  assign io_out_s2_full_pred_2_slot_valids_0 =
    io_in_bits_resp_in_0_s2_full_pred_2_slot_valids_0;
  assign io_out_s2_full_pred_2_slot_valids_1 =
    io_in_bits_resp_in_0_s2_full_pred_2_slot_valids_1;
  assign io_out_s2_full_pred_2_targets_0 = io_in_bits_resp_in_0_s2_full_pred_2_targets_0;
  assign io_out_s2_full_pred_2_targets_1 =
    io_in_bits_resp_in_0_s2_full_pred_2_is_jalr
      ? (_GEN
           ? _RASStack_io_spec_pop_addr
           : io_in_bits_resp_in_0_s2_full_pred_2_jalr_target)
      : io_in_bits_resp_in_0_s2_full_pred_2_targets_1;
  assign io_out_s2_full_pred_2_offsets_0 = io_in_bits_resp_in_0_s2_full_pred_2_offsets_0;
  assign io_out_s2_full_pred_2_offsets_1 = io_in_bits_resp_in_0_s2_full_pred_2_offsets_1;
  assign io_out_s2_full_pred_2_fallThroughAddr =
    io_in_bits_resp_in_0_s2_full_pred_2_fallThroughAddr;
  assign io_out_s2_full_pred_2_is_br_sharing =
    io_in_bits_resp_in_0_s2_full_pred_2_is_br_sharing;
  assign io_out_s2_full_pred_2_hit = io_in_bits_resp_in_0_s2_full_pred_2_hit;
  assign io_out_s2_full_pred_3_br_taken_mask_0 =
    io_in_bits_resp_in_0_s2_full_pred_3_br_taken_mask_0;
  assign io_out_s2_full_pred_3_br_taken_mask_1 =
    io_in_bits_resp_in_0_s2_full_pred_3_br_taken_mask_1;
  assign io_out_s2_full_pred_3_slot_valids_0 =
    io_in_bits_resp_in_0_s2_full_pred_3_slot_valids_0;
  assign io_out_s2_full_pred_3_slot_valids_1 =
    io_in_bits_resp_in_0_s2_full_pred_3_slot_valids_1;
  assign io_out_s2_full_pred_3_targets_0 = io_in_bits_resp_in_0_s2_full_pred_3_targets_0;
  assign io_out_s2_full_pred_3_targets_1 =
    io_in_bits_resp_in_0_s2_full_pred_2_is_jalr
      ? (_GEN
           ? _RASStack_io_spec_pop_addr
           : io_in_bits_resp_in_0_s2_full_pred_3_jalr_target)
      : io_in_bits_resp_in_0_s2_full_pred_3_targets_1;
  assign io_out_s2_full_pred_3_offsets_0 = io_in_bits_resp_in_0_s2_full_pred_3_offsets_0;
  assign io_out_s2_full_pred_3_offsets_1 = io_in_bits_resp_in_0_s2_full_pred_3_offsets_1;
  assign io_out_s2_full_pred_3_fallThroughAddr =
    io_in_bits_resp_in_0_s2_full_pred_3_fallThroughAddr;
  assign io_out_s2_full_pred_3_fallThroughErr =
    io_in_bits_resp_in_0_s2_full_pred_3_fallThroughErr;
  assign io_out_s2_full_pred_3_is_br_sharing =
    io_in_bits_resp_in_0_s2_full_pred_3_is_br_sharing;
  assign io_out_s2_full_pred_3_hit = io_in_bits_resp_in_0_s2_full_pred_3_hit;
  assign io_out_s3_pc_0 = s3_pc_dup_0;
  assign io_out_s3_pc_1 = s3_pc_dup_1;
  assign io_out_s3_pc_2 = s3_pc_dup_2;
  assign io_out_s3_pc_3 = s3_pc_dup_3;
  assign io_out_s3_full_pred_0_br_taken_mask_0 =
    io_in_bits_resp_in_0_s3_full_pred_0_br_taken_mask_0;
  assign io_out_s3_full_pred_0_br_taken_mask_1 =
    io_in_bits_resp_in_0_s3_full_pred_0_br_taken_mask_1;
  assign io_out_s3_full_pred_0_slot_valids_0 =
    io_in_bits_resp_in_0_s3_full_pred_0_slot_valids_0;
  assign io_out_s3_full_pred_0_slot_valids_1 =
    io_in_bits_resp_in_0_s3_full_pred_0_slot_valids_1;
  assign io_out_s3_full_pred_0_targets_0 = io_in_bits_resp_in_0_s3_full_pred_0_targets_0;
  assign io_out_s3_full_pred_0_targets_1 =
    io_in_bits_resp_in_0_s3_full_pred_2_is_jalr
      ? (_GEN_0 ? s3_top : io_in_bits_resp_in_0_s3_full_pred_0_jalr_target)
      : io_in_bits_resp_in_0_s3_full_pred_0_targets_1;
  assign io_out_s3_full_pred_0_fallThroughAddr =
    io_in_bits_resp_in_0_s3_full_pred_0_fallThroughAddr;
  assign io_out_s3_full_pred_0_fallThroughErr =
    io_in_bits_resp_in_0_s3_full_pred_0_fallThroughErr;
  assign io_out_s3_full_pred_0_multiHit = io_in_bits_resp_in_0_s3_full_pred_0_multiHit;
  assign io_out_s3_full_pred_0_is_br_sharing =
    io_in_bits_resp_in_0_s3_full_pred_0_is_br_sharing;
  assign io_out_s3_full_pred_0_hit = io_in_bits_resp_in_0_s3_full_pred_0_hit;
  assign io_out_s3_full_pred_1_br_taken_mask_0 =
    io_in_bits_resp_in_0_s3_full_pred_1_br_taken_mask_0;
  assign io_out_s3_full_pred_1_br_taken_mask_1 =
    io_in_bits_resp_in_0_s3_full_pred_1_br_taken_mask_1;
  assign io_out_s3_full_pred_1_slot_valids_0 =
    io_in_bits_resp_in_0_s3_full_pred_1_slot_valids_0;
  assign io_out_s3_full_pred_1_slot_valids_1 =
    io_in_bits_resp_in_0_s3_full_pred_1_slot_valids_1;
  assign io_out_s3_full_pred_1_targets_0 = io_in_bits_resp_in_0_s3_full_pred_1_targets_0;
  assign io_out_s3_full_pred_1_targets_1 =
    io_in_bits_resp_in_0_s3_full_pred_2_is_jalr
      ? (_GEN_0 ? s3_top : io_in_bits_resp_in_0_s3_full_pred_1_jalr_target)
      : io_in_bits_resp_in_0_s3_full_pred_1_targets_1;
  assign io_out_s3_full_pred_1_fallThroughAddr =
    io_in_bits_resp_in_0_s3_full_pred_1_fallThroughAddr;
  assign io_out_s3_full_pred_1_fallThroughErr =
    io_in_bits_resp_in_0_s3_full_pred_1_fallThroughErr;
  assign io_out_s3_full_pred_1_multiHit = io_in_bits_resp_in_0_s3_full_pred_1_multiHit;
  assign io_out_s3_full_pred_1_is_br_sharing =
    io_in_bits_resp_in_0_s3_full_pred_1_is_br_sharing;
  assign io_out_s3_full_pred_1_hit = io_in_bits_resp_in_0_s3_full_pred_1_hit;
  assign io_out_s3_full_pred_2_br_taken_mask_0 =
    io_in_bits_resp_in_0_s3_full_pred_2_br_taken_mask_0;
  assign io_out_s3_full_pred_2_br_taken_mask_1 =
    io_in_bits_resp_in_0_s3_full_pred_2_br_taken_mask_1;
  assign io_out_s3_full_pred_2_slot_valids_0 =
    io_in_bits_resp_in_0_s3_full_pred_2_slot_valids_0;
  assign io_out_s3_full_pred_2_slot_valids_1 =
    io_in_bits_resp_in_0_s3_full_pred_2_slot_valids_1;
  assign io_out_s3_full_pred_2_targets_0 = io_in_bits_resp_in_0_s3_full_pred_2_targets_0;
  assign io_out_s3_full_pred_2_targets_1 =
    io_in_bits_resp_in_0_s3_full_pred_2_is_jalr
      ? (_GEN_0 ? s3_top : io_in_bits_resp_in_0_s3_full_pred_2_jalr_target)
      : io_in_bits_resp_in_0_s3_full_pred_2_targets_1;
  assign io_out_s3_full_pred_2_fallThroughAddr =
    io_in_bits_resp_in_0_s3_full_pred_2_fallThroughAddr;
  assign io_out_s3_full_pred_2_fallThroughErr =
    io_in_bits_resp_in_0_s3_full_pred_2_fallThroughErr;
  assign io_out_s3_full_pred_2_multiHit = io_in_bits_resp_in_0_s3_full_pred_2_multiHit;
  assign io_out_s3_full_pred_2_is_br_sharing =
    io_in_bits_resp_in_0_s3_full_pred_2_is_br_sharing;
  assign io_out_s3_full_pred_2_hit = io_in_bits_resp_in_0_s3_full_pred_2_hit;
  assign io_out_s3_full_pred_3_br_taken_mask_0 =
    io_in_bits_resp_in_0_s3_full_pred_3_br_taken_mask_0;
  assign io_out_s3_full_pred_3_br_taken_mask_1 =
    io_in_bits_resp_in_0_s3_full_pred_3_br_taken_mask_1;
  assign io_out_s3_full_pred_3_slot_valids_0 =
    io_in_bits_resp_in_0_s3_full_pred_3_slot_valids_0;
  assign io_out_s3_full_pred_3_slot_valids_1 =
    io_in_bits_resp_in_0_s3_full_pred_3_slot_valids_1;
  assign io_out_s3_full_pred_3_targets_0 = io_in_bits_resp_in_0_s3_full_pred_3_targets_0;
  assign io_out_s3_full_pred_3_targets_1 =
    io_in_bits_resp_in_0_s3_full_pred_2_is_jalr
      ? (_GEN_0 ? s3_top : io_in_bits_resp_in_0_s3_full_pred_3_jalr_target)
      : io_in_bits_resp_in_0_s3_full_pred_3_targets_1;
  assign io_out_s3_full_pred_3_offsets_0 = io_in_bits_resp_in_0_s3_full_pred_3_offsets_0;
  assign io_out_s3_full_pred_3_offsets_1 = io_in_bits_resp_in_0_s3_full_pred_3_offsets_1;
  assign io_out_s3_full_pred_3_fallThroughAddr =
    io_in_bits_resp_in_0_s3_full_pred_3_fallThroughAddr;
  assign io_out_s3_full_pred_3_fallThroughErr =
    io_in_bits_resp_in_0_s3_full_pred_3_fallThroughErr;
  assign io_out_s3_full_pred_3_multiHit = io_in_bits_resp_in_0_s3_full_pred_3_multiHit;
  assign io_out_s3_full_pred_3_is_br_sharing =
    io_in_bits_resp_in_0_s3_full_pred_3_is_br_sharing;
  assign io_out_s3_full_pred_3_hit = io_in_bits_resp_in_0_s3_full_pred_3_hit;
  assign io_out_last_stage_meta =
    {241'h0, s3_meta_ssp, s3_meta_TOSW_flag, s3_meta_TOSW_value};
  assign io_out_last_stage_spec_info_ssp = s3_meta_ssp;
  assign io_out_last_stage_spec_info_sctr = s3_meta_sctr;
  assign io_out_last_stage_spec_info_TOSW_flag = s3_meta_TOSW_flag;
  assign io_out_last_stage_spec_info_TOSW_value = s3_meta_TOSW_value;
  assign io_out_last_stage_spec_info_TOSR_flag = s3_meta_TOSR_flag;
  assign io_out_last_stage_spec_info_TOSR_value = s3_meta_TOSR_value;
  assign io_out_last_stage_spec_info_NOS_flag = s3_meta_NOS_flag;
  assign io_out_last_stage_spec_info_NOS_value = s3_meta_NOS_value;
  assign io_out_last_stage_spec_info_topAddr = s3_top;
  assign io_out_last_stage_ftb_entry_isCall =
    io_in_bits_resp_in_0_last_stage_ftb_entry_isCall;
  assign io_out_last_stage_ftb_entry_isRet =
    io_in_bits_resp_in_0_last_stage_ftb_entry_isRet;
  assign io_out_last_stage_ftb_entry_isJalr =
    io_in_bits_resp_in_0_last_stage_ftb_entry_isJalr;
  assign io_out_last_stage_ftb_entry_valid =
    io_in_bits_resp_in_0_last_stage_ftb_entry_valid;
  assign io_out_last_stage_ftb_entry_brSlots_0_offset =
    io_in_bits_resp_in_0_last_stage_ftb_entry_brSlots_0_offset;
  assign io_out_last_stage_ftb_entry_brSlots_0_sharing =
    io_in_bits_resp_in_0_last_stage_ftb_entry_brSlots_0_sharing;
  assign io_out_last_stage_ftb_entry_brSlots_0_valid =
    io_in_bits_resp_in_0_last_stage_ftb_entry_brSlots_0_valid;
  assign io_out_last_stage_ftb_entry_brSlots_0_lower =
    io_in_bits_resp_in_0_last_stage_ftb_entry_brSlots_0_lower;
  assign io_out_last_stage_ftb_entry_brSlots_0_tarStat =
    io_in_bits_resp_in_0_last_stage_ftb_entry_brSlots_0_tarStat;
  assign io_out_last_stage_ftb_entry_tailSlot_offset =
    io_in_bits_resp_in_0_last_stage_ftb_entry_tailSlot_offset;
  assign io_out_last_stage_ftb_entry_tailSlot_sharing =
    io_in_bits_resp_in_0_last_stage_ftb_entry_tailSlot_sharing;
  assign io_out_last_stage_ftb_entry_tailSlot_valid =
    io_in_bits_resp_in_0_last_stage_ftb_entry_tailSlot_valid;
  assign io_out_last_stage_ftb_entry_tailSlot_lower =
    io_in_bits_resp_in_0_last_stage_ftb_entry_tailSlot_lower;
  assign io_out_last_stage_ftb_entry_tailSlot_tarStat =
    io_in_bits_resp_in_0_last_stage_ftb_entry_tailSlot_tarStat;
  assign io_out_last_stage_ftb_entry_pftAddr =
    io_in_bits_resp_in_0_last_stage_ftb_entry_pftAddr;
  assign io_out_last_stage_ftb_entry_carry =
    io_in_bits_resp_in_0_last_stage_ftb_entry_carry;
  assign io_out_last_stage_ftb_entry_last_may_be_rvi_call =
    io_in_bits_resp_in_0_last_stage_ftb_entry_last_may_be_rvi_call;
  assign io_out_last_stage_ftb_entry_always_taken_0 =
    io_in_bits_resp_in_0_last_stage_ftb_entry_always_taken_0;
  assign io_out_last_stage_ftb_entry_always_taken_1 =
    io_in_bits_resp_in_0_last_stage_ftb_entry_always_taken_1;
endmodule

