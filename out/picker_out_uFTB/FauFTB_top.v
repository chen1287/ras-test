module FauFTB_top;

  wire  clock;
  wire  reset;
  wire [35:0] io_reset_vector;
  wire [40:0] io_in_bits_s0_pc_0;
  wire [40:0] io_in_bits_s0_pc_1;
  wire [40:0] io_in_bits_s0_pc_2;
  wire [40:0] io_in_bits_s0_pc_3;
  wire [40:0] io_out_s1_pc_0;
  wire [40:0] io_out_s1_pc_1;
  wire [40:0] io_out_s1_pc_2;
  wire [40:0] io_out_s1_pc_3;
  wire  io_out_s1_full_pred_0_br_taken_mask_0;
  wire  io_out_s1_full_pred_0_br_taken_mask_1;
  wire  io_out_s1_full_pred_0_slot_valids_0;
  wire  io_out_s1_full_pred_0_slot_valids_1;
  wire [40:0] io_out_s1_full_pred_0_targets_0;
  wire [40:0] io_out_s1_full_pred_0_targets_1;
  wire [3:0] io_out_s1_full_pred_0_offsets_0;
  wire [3:0] io_out_s1_full_pred_0_offsets_1;
  wire [40:0] io_out_s1_full_pred_0_fallThroughAddr;
  wire  io_out_s1_full_pred_0_is_br_sharing;
  wire  io_out_s1_full_pred_0_hit;
  wire  io_out_s1_full_pred_1_br_taken_mask_0;
  wire  io_out_s1_full_pred_1_br_taken_mask_1;
  wire  io_out_s1_full_pred_1_slot_valids_0;
  wire  io_out_s1_full_pred_1_slot_valids_1;
  wire [40:0] io_out_s1_full_pred_1_targets_0;
  wire [40:0] io_out_s1_full_pred_1_targets_1;
  wire [3:0] io_out_s1_full_pred_1_offsets_0;
  wire [3:0] io_out_s1_full_pred_1_offsets_1;
  wire [40:0] io_out_s1_full_pred_1_fallThroughAddr;
  wire  io_out_s1_full_pred_1_is_br_sharing;
  wire  io_out_s1_full_pred_1_hit;
  wire  io_out_s1_full_pred_2_br_taken_mask_0;
  wire  io_out_s1_full_pred_2_br_taken_mask_1;
  wire  io_out_s1_full_pred_2_slot_valids_0;
  wire  io_out_s1_full_pred_2_slot_valids_1;
  wire [40:0] io_out_s1_full_pred_2_targets_0;
  wire [40:0] io_out_s1_full_pred_2_targets_1;
  wire [3:0] io_out_s1_full_pred_2_offsets_0;
  wire [3:0] io_out_s1_full_pred_2_offsets_1;
  wire [40:0] io_out_s1_full_pred_2_fallThroughAddr;
  wire  io_out_s1_full_pred_2_is_br_sharing;
  wire  io_out_s1_full_pred_2_hit;
  wire  io_out_s1_full_pred_3_br_taken_mask_0;
  wire  io_out_s1_full_pred_3_br_taken_mask_1;
  wire  io_out_s1_full_pred_3_slot_valids_0;
  wire  io_out_s1_full_pred_3_slot_valids_1;
  wire [40:0] io_out_s1_full_pred_3_targets_0;
  wire [40:0] io_out_s1_full_pred_3_targets_1;
  wire [3:0] io_out_s1_full_pred_3_offsets_0;
  wire [3:0] io_out_s1_full_pred_3_offsets_1;
  wire [40:0] io_out_s1_full_pred_3_fallThroughAddr;
  wire  io_out_s1_full_pred_3_fallThroughErr;
  wire  io_out_s1_full_pred_3_is_br_sharing;
  wire  io_out_s1_full_pred_3_hit;
  wire [222:0] io_out_last_stage_meta;
  wire  io_ctrl_ubtb_enable;
  wire  io_s0_fire_0;
  wire  io_s0_fire_1;
  wire  io_s0_fire_2;
  wire  io_s0_fire_3;
  wire  io_s1_fire_0;
  wire  io_s2_fire_0;
  wire  io_update_valid;
  wire [40:0] io_update_bits_pc;
  wire [3:0] io_update_bits_ftb_entry_brSlots_0_offset;
  wire [11:0] io_update_bits_ftb_entry_brSlots_0_lower;
  wire [1:0] io_update_bits_ftb_entry_brSlots_0_tarStat;
  wire  io_update_bits_ftb_entry_brSlots_0_valid;
  wire [3:0] io_update_bits_ftb_entry_tailSlot_offset;
  wire [19:0] io_update_bits_ftb_entry_tailSlot_lower;
  wire [1:0] io_update_bits_ftb_entry_tailSlot_tarStat;
  wire  io_update_bits_ftb_entry_tailSlot_sharing;
  wire  io_update_bits_ftb_entry_tailSlot_valid;
  wire [3:0] io_update_bits_ftb_entry_pftAddr;
  wire  io_update_bits_ftb_entry_carry;
  wire  io_update_bits_ftb_entry_always_taken_0;
  wire  io_update_bits_ftb_entry_always_taken_1;
  wire  io_update_bits_br_taken_mask_0;
  wire  io_update_bits_br_taken_mask_1;
  wire [222:0] io_update_bits_meta;
  wire [5:0] io_perf_0_value;
  wire [5:0] io_perf_1_value;


FauFTB FauFTB (
    .clock(clock),
    .reset(reset),
    .io_reset_vector(io_reset_vector),
    .io_in_bits_s0_pc_0(io_in_bits_s0_pc_0),
    .io_in_bits_s0_pc_1(io_in_bits_s0_pc_1),
    .io_in_bits_s0_pc_2(io_in_bits_s0_pc_2),
    .io_in_bits_s0_pc_3(io_in_bits_s0_pc_3),
    .io_out_s1_pc_0(io_out_s1_pc_0),
    .io_out_s1_pc_1(io_out_s1_pc_1),
    .io_out_s1_pc_2(io_out_s1_pc_2),
    .io_out_s1_pc_3(io_out_s1_pc_3),
    .io_out_s1_full_pred_0_br_taken_mask_0(io_out_s1_full_pred_0_br_taken_mask_0),
    .io_out_s1_full_pred_0_br_taken_mask_1(io_out_s1_full_pred_0_br_taken_mask_1),
    .io_out_s1_full_pred_0_slot_valids_0(io_out_s1_full_pred_0_slot_valids_0),
    .io_out_s1_full_pred_0_slot_valids_1(io_out_s1_full_pred_0_slot_valids_1),
    .io_out_s1_full_pred_0_targets_0(io_out_s1_full_pred_0_targets_0),
    .io_out_s1_full_pred_0_targets_1(io_out_s1_full_pred_0_targets_1),
    .io_out_s1_full_pred_0_offsets_0(io_out_s1_full_pred_0_offsets_0),
    .io_out_s1_full_pred_0_offsets_1(io_out_s1_full_pred_0_offsets_1),
    .io_out_s1_full_pred_0_fallThroughAddr(io_out_s1_full_pred_0_fallThroughAddr),
    .io_out_s1_full_pred_0_is_br_sharing(io_out_s1_full_pred_0_is_br_sharing),
    .io_out_s1_full_pred_0_hit(io_out_s1_full_pred_0_hit),
    .io_out_s1_full_pred_1_br_taken_mask_0(io_out_s1_full_pred_1_br_taken_mask_0),
    .io_out_s1_full_pred_1_br_taken_mask_1(io_out_s1_full_pred_1_br_taken_mask_1),
    .io_out_s1_full_pred_1_slot_valids_0(io_out_s1_full_pred_1_slot_valids_0),
    .io_out_s1_full_pred_1_slot_valids_1(io_out_s1_full_pred_1_slot_valids_1),
    .io_out_s1_full_pred_1_targets_0(io_out_s1_full_pred_1_targets_0),
    .io_out_s1_full_pred_1_targets_1(io_out_s1_full_pred_1_targets_1),
    .io_out_s1_full_pred_1_offsets_0(io_out_s1_full_pred_1_offsets_0),
    .io_out_s1_full_pred_1_offsets_1(io_out_s1_full_pred_1_offsets_1),
    .io_out_s1_full_pred_1_fallThroughAddr(io_out_s1_full_pred_1_fallThroughAddr),
    .io_out_s1_full_pred_1_is_br_sharing(io_out_s1_full_pred_1_is_br_sharing),
    .io_out_s1_full_pred_1_hit(io_out_s1_full_pred_1_hit),
    .io_out_s1_full_pred_2_br_taken_mask_0(io_out_s1_full_pred_2_br_taken_mask_0),
    .io_out_s1_full_pred_2_br_taken_mask_1(io_out_s1_full_pred_2_br_taken_mask_1),
    .io_out_s1_full_pred_2_slot_valids_0(io_out_s1_full_pred_2_slot_valids_0),
    .io_out_s1_full_pred_2_slot_valids_1(io_out_s1_full_pred_2_slot_valids_1),
    .io_out_s1_full_pred_2_targets_0(io_out_s1_full_pred_2_targets_0),
    .io_out_s1_full_pred_2_targets_1(io_out_s1_full_pred_2_targets_1),
    .io_out_s1_full_pred_2_offsets_0(io_out_s1_full_pred_2_offsets_0),
    .io_out_s1_full_pred_2_offsets_1(io_out_s1_full_pred_2_offsets_1),
    .io_out_s1_full_pred_2_fallThroughAddr(io_out_s1_full_pred_2_fallThroughAddr),
    .io_out_s1_full_pred_2_is_br_sharing(io_out_s1_full_pred_2_is_br_sharing),
    .io_out_s1_full_pred_2_hit(io_out_s1_full_pred_2_hit),
    .io_out_s1_full_pred_3_br_taken_mask_0(io_out_s1_full_pred_3_br_taken_mask_0),
    .io_out_s1_full_pred_3_br_taken_mask_1(io_out_s1_full_pred_3_br_taken_mask_1),
    .io_out_s1_full_pred_3_slot_valids_0(io_out_s1_full_pred_3_slot_valids_0),
    .io_out_s1_full_pred_3_slot_valids_1(io_out_s1_full_pred_3_slot_valids_1),
    .io_out_s1_full_pred_3_targets_0(io_out_s1_full_pred_3_targets_0),
    .io_out_s1_full_pred_3_targets_1(io_out_s1_full_pred_3_targets_1),
    .io_out_s1_full_pred_3_offsets_0(io_out_s1_full_pred_3_offsets_0),
    .io_out_s1_full_pred_3_offsets_1(io_out_s1_full_pred_3_offsets_1),
    .io_out_s1_full_pred_3_fallThroughAddr(io_out_s1_full_pred_3_fallThroughAddr),
    .io_out_s1_full_pred_3_fallThroughErr(io_out_s1_full_pred_3_fallThroughErr),
    .io_out_s1_full_pred_3_is_br_sharing(io_out_s1_full_pred_3_is_br_sharing),
    .io_out_s1_full_pred_3_hit(io_out_s1_full_pred_3_hit),
    .io_out_last_stage_meta(io_out_last_stage_meta),
    .io_ctrl_ubtb_enable(io_ctrl_ubtb_enable),
    .io_s0_fire_0(io_s0_fire_0),
    .io_s0_fire_1(io_s0_fire_1),
    .io_s0_fire_2(io_s0_fire_2),
    .io_s0_fire_3(io_s0_fire_3),
    .io_s1_fire_0(io_s1_fire_0),
    .io_s2_fire_0(io_s2_fire_0),
    .io_update_valid(io_update_valid),
    .io_update_bits_pc(io_update_bits_pc),
    .io_update_bits_ftb_entry_brSlots_0_offset(io_update_bits_ftb_entry_brSlots_0_offset),
    .io_update_bits_ftb_entry_brSlots_0_lower(io_update_bits_ftb_entry_brSlots_0_lower),
    .io_update_bits_ftb_entry_brSlots_0_tarStat(io_update_bits_ftb_entry_brSlots_0_tarStat),
    .io_update_bits_ftb_entry_brSlots_0_valid(io_update_bits_ftb_entry_brSlots_0_valid),
    .io_update_bits_ftb_entry_tailSlot_offset(io_update_bits_ftb_entry_tailSlot_offset),
    .io_update_bits_ftb_entry_tailSlot_lower(io_update_bits_ftb_entry_tailSlot_lower),
    .io_update_bits_ftb_entry_tailSlot_tarStat(io_update_bits_ftb_entry_tailSlot_tarStat),
    .io_update_bits_ftb_entry_tailSlot_sharing(io_update_bits_ftb_entry_tailSlot_sharing),
    .io_update_bits_ftb_entry_tailSlot_valid(io_update_bits_ftb_entry_tailSlot_valid),
    .io_update_bits_ftb_entry_pftAddr(io_update_bits_ftb_entry_pftAddr),
    .io_update_bits_ftb_entry_carry(io_update_bits_ftb_entry_carry),
    .io_update_bits_ftb_entry_always_taken_0(io_update_bits_ftb_entry_always_taken_0),
    .io_update_bits_ftb_entry_always_taken_1(io_update_bits_ftb_entry_always_taken_1),
    .io_update_bits_br_taken_mask_0(io_update_bits_br_taken_mask_0),
    .io_update_bits_br_taken_mask_1(io_update_bits_br_taken_mask_1),
    .io_update_bits_meta(io_update_bits_meta),
    .io_perf_0_value(io_perf_0_value),
    .io_perf_1_value(io_perf_1_value)
  );
endmodule
