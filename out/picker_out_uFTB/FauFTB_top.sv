module FauFTB_top;

  logic  clock;
  logic  reset;
  logic [35:0] io_reset_vector;
  logic [40:0] io_in_bits_s0_pc_0;
  logic [40:0] io_in_bits_s0_pc_1;
  logic [40:0] io_in_bits_s0_pc_2;
  logic [40:0] io_in_bits_s0_pc_3;
  logic [40:0] io_out_s1_pc_0;
  logic [40:0] io_out_s1_pc_1;
  logic [40:0] io_out_s1_pc_2;
  logic [40:0] io_out_s1_pc_3;
  logic  io_out_s1_full_pred_0_br_taken_mask_0;
  logic  io_out_s1_full_pred_0_br_taken_mask_1;
  logic  io_out_s1_full_pred_0_slot_valids_0;
  logic  io_out_s1_full_pred_0_slot_valids_1;
  logic [40:0] io_out_s1_full_pred_0_targets_0;
  logic [40:0] io_out_s1_full_pred_0_targets_1;
  logic [3:0] io_out_s1_full_pred_0_offsets_0;
  logic [3:0] io_out_s1_full_pred_0_offsets_1;
  logic [40:0] io_out_s1_full_pred_0_fallThroughAddr;
  logic  io_out_s1_full_pred_0_is_br_sharing;
  logic  io_out_s1_full_pred_0_hit;
  logic  io_out_s1_full_pred_1_br_taken_mask_0;
  logic  io_out_s1_full_pred_1_br_taken_mask_1;
  logic  io_out_s1_full_pred_1_slot_valids_0;
  logic  io_out_s1_full_pred_1_slot_valids_1;
  logic [40:0] io_out_s1_full_pred_1_targets_0;
  logic [40:0] io_out_s1_full_pred_1_targets_1;
  logic [3:0] io_out_s1_full_pred_1_offsets_0;
  logic [3:0] io_out_s1_full_pred_1_offsets_1;
  logic [40:0] io_out_s1_full_pred_1_fallThroughAddr;
  logic  io_out_s1_full_pred_1_is_br_sharing;
  logic  io_out_s1_full_pred_1_hit;
  logic  io_out_s1_full_pred_2_br_taken_mask_0;
  logic  io_out_s1_full_pred_2_br_taken_mask_1;
  logic  io_out_s1_full_pred_2_slot_valids_0;
  logic  io_out_s1_full_pred_2_slot_valids_1;
  logic [40:0] io_out_s1_full_pred_2_targets_0;
  logic [40:0] io_out_s1_full_pred_2_targets_1;
  logic [3:0] io_out_s1_full_pred_2_offsets_0;
  logic [3:0] io_out_s1_full_pred_2_offsets_1;
  logic [40:0] io_out_s1_full_pred_2_fallThroughAddr;
  logic  io_out_s1_full_pred_2_is_br_sharing;
  logic  io_out_s1_full_pred_2_hit;
  logic  io_out_s1_full_pred_3_br_taken_mask_0;
  logic  io_out_s1_full_pred_3_br_taken_mask_1;
  logic  io_out_s1_full_pred_3_slot_valids_0;
  logic  io_out_s1_full_pred_3_slot_valids_1;
  logic [40:0] io_out_s1_full_pred_3_targets_0;
  logic [40:0] io_out_s1_full_pred_3_targets_1;
  logic [3:0] io_out_s1_full_pred_3_offsets_0;
  logic [3:0] io_out_s1_full_pred_3_offsets_1;
  logic [40:0] io_out_s1_full_pred_3_fallThroughAddr;
  logic  io_out_s1_full_pred_3_fallThroughErr;
  logic  io_out_s1_full_pred_3_is_br_sharing;
  logic  io_out_s1_full_pred_3_hit;
  logic [222:0] io_out_last_stage_meta;
  logic  io_ctrl_ubtb_enable;
  logic  io_s0_fire_0;
  logic  io_s0_fire_1;
  logic  io_s0_fire_2;
  logic  io_s0_fire_3;
  logic  io_s1_fire_0;
  logic  io_s2_fire_0;
  logic  io_update_valid;
  logic [40:0] io_update_bits_pc;
  logic [3:0] io_update_bits_ftb_entry_brSlots_0_offset;
  logic [11:0] io_update_bits_ftb_entry_brSlots_0_lower;
  logic [1:0] io_update_bits_ftb_entry_brSlots_0_tarStat;
  logic  io_update_bits_ftb_entry_brSlots_0_valid;
  logic [3:0] io_update_bits_ftb_entry_tailSlot_offset;
  logic [19:0] io_update_bits_ftb_entry_tailSlot_lower;
  logic [1:0] io_update_bits_ftb_entry_tailSlot_tarStat;
  logic  io_update_bits_ftb_entry_tailSlot_sharing;
  logic  io_update_bits_ftb_entry_tailSlot_valid;
  logic [3:0] io_update_bits_ftb_entry_pftAddr;
  logic  io_update_bits_ftb_entry_carry;
  logic  io_update_bits_ftb_entry_always_taken_0;
  logic  io_update_bits_ftb_entry_always_taken_1;
  logic  io_update_bits_br_taken_mask_0;
  logic  io_update_bits_br_taken_mask_1;
  logic [222:0] io_update_bits_meta;
  logic [5:0] io_perf_0_value;
  logic [5:0] io_perf_1_value;


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
  export "DPI-C" function get_io_out_s1_pc_0;
  export "DPI-C" function set_io_out_s1_pc_0;
  export "DPI-C" function get_io_out_s1_pc_1;
  export "DPI-C" function set_io_out_s1_pc_1;
  export "DPI-C" function get_io_out_s1_pc_2;
  export "DPI-C" function set_io_out_s1_pc_2;
  export "DPI-C" function get_io_out_s1_pc_3;
  export "DPI-C" function set_io_out_s1_pc_3;
  export "DPI-C" function get_io_out_s1_full_pred_0_br_taken_mask_0;
  export "DPI-C" function set_io_out_s1_full_pred_0_br_taken_mask_0;
  export "DPI-C" function get_io_out_s1_full_pred_0_br_taken_mask_1;
  export "DPI-C" function set_io_out_s1_full_pred_0_br_taken_mask_1;
  export "DPI-C" function get_io_out_s1_full_pred_0_slot_valids_0;
  export "DPI-C" function set_io_out_s1_full_pred_0_slot_valids_0;
  export "DPI-C" function get_io_out_s1_full_pred_0_slot_valids_1;
  export "DPI-C" function set_io_out_s1_full_pred_0_slot_valids_1;
  export "DPI-C" function get_io_out_s1_full_pred_0_targets_0;
  export "DPI-C" function set_io_out_s1_full_pred_0_targets_0;
  export "DPI-C" function get_io_out_s1_full_pred_0_targets_1;
  export "DPI-C" function set_io_out_s1_full_pred_0_targets_1;
  export "DPI-C" function get_io_out_s1_full_pred_0_offsets_0;
  export "DPI-C" function set_io_out_s1_full_pred_0_offsets_0;
  export "DPI-C" function get_io_out_s1_full_pred_0_offsets_1;
  export "DPI-C" function set_io_out_s1_full_pred_0_offsets_1;
  export "DPI-C" function get_io_out_s1_full_pred_0_fallThroughAddr;
  export "DPI-C" function set_io_out_s1_full_pred_0_fallThroughAddr;
  export "DPI-C" function get_io_out_s1_full_pred_0_is_br_sharing;
  export "DPI-C" function set_io_out_s1_full_pred_0_is_br_sharing;
  export "DPI-C" function get_io_out_s1_full_pred_0_hit;
  export "DPI-C" function set_io_out_s1_full_pred_0_hit;
  export "DPI-C" function get_io_out_s1_full_pred_1_br_taken_mask_0;
  export "DPI-C" function set_io_out_s1_full_pred_1_br_taken_mask_0;
  export "DPI-C" function get_io_out_s1_full_pred_1_br_taken_mask_1;
  export "DPI-C" function set_io_out_s1_full_pred_1_br_taken_mask_1;
  export "DPI-C" function get_io_out_s1_full_pred_1_slot_valids_0;
  export "DPI-C" function set_io_out_s1_full_pred_1_slot_valids_0;
  export "DPI-C" function get_io_out_s1_full_pred_1_slot_valids_1;
  export "DPI-C" function set_io_out_s1_full_pred_1_slot_valids_1;
  export "DPI-C" function get_io_out_s1_full_pred_1_targets_0;
  export "DPI-C" function set_io_out_s1_full_pred_1_targets_0;
  export "DPI-C" function get_io_out_s1_full_pred_1_targets_1;
  export "DPI-C" function set_io_out_s1_full_pred_1_targets_1;
  export "DPI-C" function get_io_out_s1_full_pred_1_offsets_0;
  export "DPI-C" function set_io_out_s1_full_pred_1_offsets_0;
  export "DPI-C" function get_io_out_s1_full_pred_1_offsets_1;
  export "DPI-C" function set_io_out_s1_full_pred_1_offsets_1;
  export "DPI-C" function get_io_out_s1_full_pred_1_fallThroughAddr;
  export "DPI-C" function set_io_out_s1_full_pred_1_fallThroughAddr;
  export "DPI-C" function get_io_out_s1_full_pred_1_is_br_sharing;
  export "DPI-C" function set_io_out_s1_full_pred_1_is_br_sharing;
  export "DPI-C" function get_io_out_s1_full_pred_1_hit;
  export "DPI-C" function set_io_out_s1_full_pred_1_hit;
  export "DPI-C" function get_io_out_s1_full_pred_2_br_taken_mask_0;
  export "DPI-C" function set_io_out_s1_full_pred_2_br_taken_mask_0;
  export "DPI-C" function get_io_out_s1_full_pred_2_br_taken_mask_1;
  export "DPI-C" function set_io_out_s1_full_pred_2_br_taken_mask_1;
  export "DPI-C" function get_io_out_s1_full_pred_2_slot_valids_0;
  export "DPI-C" function set_io_out_s1_full_pred_2_slot_valids_0;
  export "DPI-C" function get_io_out_s1_full_pred_2_slot_valids_1;
  export "DPI-C" function set_io_out_s1_full_pred_2_slot_valids_1;
  export "DPI-C" function get_io_out_s1_full_pred_2_targets_0;
  export "DPI-C" function set_io_out_s1_full_pred_2_targets_0;
  export "DPI-C" function get_io_out_s1_full_pred_2_targets_1;
  export "DPI-C" function set_io_out_s1_full_pred_2_targets_1;
  export "DPI-C" function get_io_out_s1_full_pred_2_offsets_0;
  export "DPI-C" function set_io_out_s1_full_pred_2_offsets_0;
  export "DPI-C" function get_io_out_s1_full_pred_2_offsets_1;
  export "DPI-C" function set_io_out_s1_full_pred_2_offsets_1;
  export "DPI-C" function get_io_out_s1_full_pred_2_fallThroughAddr;
  export "DPI-C" function set_io_out_s1_full_pred_2_fallThroughAddr;
  export "DPI-C" function get_io_out_s1_full_pred_2_is_br_sharing;
  export "DPI-C" function set_io_out_s1_full_pred_2_is_br_sharing;
  export "DPI-C" function get_io_out_s1_full_pred_2_hit;
  export "DPI-C" function set_io_out_s1_full_pred_2_hit;
  export "DPI-C" function get_io_out_s1_full_pred_3_br_taken_mask_0;
  export "DPI-C" function set_io_out_s1_full_pred_3_br_taken_mask_0;
  export "DPI-C" function get_io_out_s1_full_pred_3_br_taken_mask_1;
  export "DPI-C" function set_io_out_s1_full_pred_3_br_taken_mask_1;
  export "DPI-C" function get_io_out_s1_full_pred_3_slot_valids_0;
  export "DPI-C" function set_io_out_s1_full_pred_3_slot_valids_0;
  export "DPI-C" function get_io_out_s1_full_pred_3_slot_valids_1;
  export "DPI-C" function set_io_out_s1_full_pred_3_slot_valids_1;
  export "DPI-C" function get_io_out_s1_full_pred_3_targets_0;
  export "DPI-C" function set_io_out_s1_full_pred_3_targets_0;
  export "DPI-C" function get_io_out_s1_full_pred_3_targets_1;
  export "DPI-C" function set_io_out_s1_full_pred_3_targets_1;
  export "DPI-C" function get_io_out_s1_full_pred_3_offsets_0;
  export "DPI-C" function set_io_out_s1_full_pred_3_offsets_0;
  export "DPI-C" function get_io_out_s1_full_pred_3_offsets_1;
  export "DPI-C" function set_io_out_s1_full_pred_3_offsets_1;
  export "DPI-C" function get_io_out_s1_full_pred_3_fallThroughAddr;
  export "DPI-C" function set_io_out_s1_full_pred_3_fallThroughAddr;
  export "DPI-C" function get_io_out_s1_full_pred_3_fallThroughErr;
  export "DPI-C" function set_io_out_s1_full_pred_3_fallThroughErr;
  export "DPI-C" function get_io_out_s1_full_pred_3_is_br_sharing;
  export "DPI-C" function set_io_out_s1_full_pred_3_is_br_sharing;
  export "DPI-C" function get_io_out_s1_full_pred_3_hit;
  export "DPI-C" function set_io_out_s1_full_pred_3_hit;
  export "DPI-C" function get_io_out_last_stage_meta;
  export "DPI-C" function set_io_out_last_stage_meta;
  export "DPI-C" function get_io_ctrl_ubtb_enable;
  export "DPI-C" function set_io_ctrl_ubtb_enable;
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
  export "DPI-C" function get_io_s2_fire_0;
  export "DPI-C" function set_io_s2_fire_0;
  export "DPI-C" function get_io_update_valid;
  export "DPI-C" function set_io_update_valid;
  export "DPI-C" function get_io_update_bits_pc;
  export "DPI-C" function set_io_update_bits_pc;
  export "DPI-C" function get_io_update_bits_ftb_entry_brSlots_0_offset;
  export "DPI-C" function set_io_update_bits_ftb_entry_brSlots_0_offset;
  export "DPI-C" function get_io_update_bits_ftb_entry_brSlots_0_lower;
  export "DPI-C" function set_io_update_bits_ftb_entry_brSlots_0_lower;
  export "DPI-C" function get_io_update_bits_ftb_entry_brSlots_0_tarStat;
  export "DPI-C" function set_io_update_bits_ftb_entry_brSlots_0_tarStat;
  export "DPI-C" function get_io_update_bits_ftb_entry_brSlots_0_valid;
  export "DPI-C" function set_io_update_bits_ftb_entry_brSlots_0_valid;
  export "DPI-C" function get_io_update_bits_ftb_entry_tailSlot_offset;
  export "DPI-C" function set_io_update_bits_ftb_entry_tailSlot_offset;
  export "DPI-C" function get_io_update_bits_ftb_entry_tailSlot_lower;
  export "DPI-C" function set_io_update_bits_ftb_entry_tailSlot_lower;
  export "DPI-C" function get_io_update_bits_ftb_entry_tailSlot_tarStat;
  export "DPI-C" function set_io_update_bits_ftb_entry_tailSlot_tarStat;
  export "DPI-C" function get_io_update_bits_ftb_entry_tailSlot_sharing;
  export "DPI-C" function set_io_update_bits_ftb_entry_tailSlot_sharing;
  export "DPI-C" function get_io_update_bits_ftb_entry_tailSlot_valid;
  export "DPI-C" function set_io_update_bits_ftb_entry_tailSlot_valid;
  export "DPI-C" function get_io_update_bits_ftb_entry_pftAddr;
  export "DPI-C" function set_io_update_bits_ftb_entry_pftAddr;
  export "DPI-C" function get_io_update_bits_ftb_entry_carry;
  export "DPI-C" function set_io_update_bits_ftb_entry_carry;
  export "DPI-C" function get_io_update_bits_ftb_entry_always_taken_0;
  export "DPI-C" function set_io_update_bits_ftb_entry_always_taken_0;
  export "DPI-C" function get_io_update_bits_ftb_entry_always_taken_1;
  export "DPI-C" function set_io_update_bits_ftb_entry_always_taken_1;
  export "DPI-C" function get_io_update_bits_br_taken_mask_0;
  export "DPI-C" function set_io_update_bits_br_taken_mask_0;
  export "DPI-C" function get_io_update_bits_br_taken_mask_1;
  export "DPI-C" function set_io_update_bits_br_taken_mask_1;
  export "DPI-C" function get_io_update_bits_meta;
  export "DPI-C" function set_io_update_bits_meta;
  export "DPI-C" function get_io_perf_0_value;
  export "DPI-C" function set_io_perf_0_value;
  export "DPI-C" function get_io_perf_1_value;
  export "DPI-C" function set_io_perf_1_value;


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

  function void get_io_out_s1_pc_0;
    output logic [40:0] value;
    value=io_out_s1_pc_0;
  endfunction

  function void set_io_out_s1_pc_0;
    input logic [40:0] value;
    io_out_s1_pc_0=value;
  endfunction

  function void get_io_out_s1_pc_1;
    output logic [40:0] value;
    value=io_out_s1_pc_1;
  endfunction

  function void set_io_out_s1_pc_1;
    input logic [40:0] value;
    io_out_s1_pc_1=value;
  endfunction

  function void get_io_out_s1_pc_2;
    output logic [40:0] value;
    value=io_out_s1_pc_2;
  endfunction

  function void set_io_out_s1_pc_2;
    input logic [40:0] value;
    io_out_s1_pc_2=value;
  endfunction

  function void get_io_out_s1_pc_3;
    output logic [40:0] value;
    value=io_out_s1_pc_3;
  endfunction

  function void set_io_out_s1_pc_3;
    input logic [40:0] value;
    io_out_s1_pc_3=value;
  endfunction

  function void get_io_out_s1_full_pred_0_br_taken_mask_0;
    output logic  value;
    value=io_out_s1_full_pred_0_br_taken_mask_0;
  endfunction

  function void set_io_out_s1_full_pred_0_br_taken_mask_0;
    input logic  value;
    io_out_s1_full_pred_0_br_taken_mask_0=value;
  endfunction

  function void get_io_out_s1_full_pred_0_br_taken_mask_1;
    output logic  value;
    value=io_out_s1_full_pred_0_br_taken_mask_1;
  endfunction

  function void set_io_out_s1_full_pred_0_br_taken_mask_1;
    input logic  value;
    io_out_s1_full_pred_0_br_taken_mask_1=value;
  endfunction

  function void get_io_out_s1_full_pred_0_slot_valids_0;
    output logic  value;
    value=io_out_s1_full_pred_0_slot_valids_0;
  endfunction

  function void set_io_out_s1_full_pred_0_slot_valids_0;
    input logic  value;
    io_out_s1_full_pred_0_slot_valids_0=value;
  endfunction

  function void get_io_out_s1_full_pred_0_slot_valids_1;
    output logic  value;
    value=io_out_s1_full_pred_0_slot_valids_1;
  endfunction

  function void set_io_out_s1_full_pred_0_slot_valids_1;
    input logic  value;
    io_out_s1_full_pred_0_slot_valids_1=value;
  endfunction

  function void get_io_out_s1_full_pred_0_targets_0;
    output logic [40:0] value;
    value=io_out_s1_full_pred_0_targets_0;
  endfunction

  function void set_io_out_s1_full_pred_0_targets_0;
    input logic [40:0] value;
    io_out_s1_full_pred_0_targets_0=value;
  endfunction

  function void get_io_out_s1_full_pred_0_targets_1;
    output logic [40:0] value;
    value=io_out_s1_full_pred_0_targets_1;
  endfunction

  function void set_io_out_s1_full_pred_0_targets_1;
    input logic [40:0] value;
    io_out_s1_full_pred_0_targets_1=value;
  endfunction

  function void get_io_out_s1_full_pred_0_offsets_0;
    output logic [3:0] value;
    value=io_out_s1_full_pred_0_offsets_0;
  endfunction

  function void set_io_out_s1_full_pred_0_offsets_0;
    input logic [3:0] value;
    io_out_s1_full_pred_0_offsets_0=value;
  endfunction

  function void get_io_out_s1_full_pred_0_offsets_1;
    output logic [3:0] value;
    value=io_out_s1_full_pred_0_offsets_1;
  endfunction

  function void set_io_out_s1_full_pred_0_offsets_1;
    input logic [3:0] value;
    io_out_s1_full_pred_0_offsets_1=value;
  endfunction

  function void get_io_out_s1_full_pred_0_fallThroughAddr;
    output logic [40:0] value;
    value=io_out_s1_full_pred_0_fallThroughAddr;
  endfunction

  function void set_io_out_s1_full_pred_0_fallThroughAddr;
    input logic [40:0] value;
    io_out_s1_full_pred_0_fallThroughAddr=value;
  endfunction

  function void get_io_out_s1_full_pred_0_is_br_sharing;
    output logic  value;
    value=io_out_s1_full_pred_0_is_br_sharing;
  endfunction

  function void set_io_out_s1_full_pred_0_is_br_sharing;
    input logic  value;
    io_out_s1_full_pred_0_is_br_sharing=value;
  endfunction

  function void get_io_out_s1_full_pred_0_hit;
    output logic  value;
    value=io_out_s1_full_pred_0_hit;
  endfunction

  function void set_io_out_s1_full_pred_0_hit;
    input logic  value;
    io_out_s1_full_pred_0_hit=value;
  endfunction

  function void get_io_out_s1_full_pred_1_br_taken_mask_0;
    output logic  value;
    value=io_out_s1_full_pred_1_br_taken_mask_0;
  endfunction

  function void set_io_out_s1_full_pred_1_br_taken_mask_0;
    input logic  value;
    io_out_s1_full_pred_1_br_taken_mask_0=value;
  endfunction

  function void get_io_out_s1_full_pred_1_br_taken_mask_1;
    output logic  value;
    value=io_out_s1_full_pred_1_br_taken_mask_1;
  endfunction

  function void set_io_out_s1_full_pred_1_br_taken_mask_1;
    input logic  value;
    io_out_s1_full_pred_1_br_taken_mask_1=value;
  endfunction

  function void get_io_out_s1_full_pred_1_slot_valids_0;
    output logic  value;
    value=io_out_s1_full_pred_1_slot_valids_0;
  endfunction

  function void set_io_out_s1_full_pred_1_slot_valids_0;
    input logic  value;
    io_out_s1_full_pred_1_slot_valids_0=value;
  endfunction

  function void get_io_out_s1_full_pred_1_slot_valids_1;
    output logic  value;
    value=io_out_s1_full_pred_1_slot_valids_1;
  endfunction

  function void set_io_out_s1_full_pred_1_slot_valids_1;
    input logic  value;
    io_out_s1_full_pred_1_slot_valids_1=value;
  endfunction

  function void get_io_out_s1_full_pred_1_targets_0;
    output logic [40:0] value;
    value=io_out_s1_full_pred_1_targets_0;
  endfunction

  function void set_io_out_s1_full_pred_1_targets_0;
    input logic [40:0] value;
    io_out_s1_full_pred_1_targets_0=value;
  endfunction

  function void get_io_out_s1_full_pred_1_targets_1;
    output logic [40:0] value;
    value=io_out_s1_full_pred_1_targets_1;
  endfunction

  function void set_io_out_s1_full_pred_1_targets_1;
    input logic [40:0] value;
    io_out_s1_full_pred_1_targets_1=value;
  endfunction

  function void get_io_out_s1_full_pred_1_offsets_0;
    output logic [3:0] value;
    value=io_out_s1_full_pred_1_offsets_0;
  endfunction

  function void set_io_out_s1_full_pred_1_offsets_0;
    input logic [3:0] value;
    io_out_s1_full_pred_1_offsets_0=value;
  endfunction

  function void get_io_out_s1_full_pred_1_offsets_1;
    output logic [3:0] value;
    value=io_out_s1_full_pred_1_offsets_1;
  endfunction

  function void set_io_out_s1_full_pred_1_offsets_1;
    input logic [3:0] value;
    io_out_s1_full_pred_1_offsets_1=value;
  endfunction

  function void get_io_out_s1_full_pred_1_fallThroughAddr;
    output logic [40:0] value;
    value=io_out_s1_full_pred_1_fallThroughAddr;
  endfunction

  function void set_io_out_s1_full_pred_1_fallThroughAddr;
    input logic [40:0] value;
    io_out_s1_full_pred_1_fallThroughAddr=value;
  endfunction

  function void get_io_out_s1_full_pred_1_is_br_sharing;
    output logic  value;
    value=io_out_s1_full_pred_1_is_br_sharing;
  endfunction

  function void set_io_out_s1_full_pred_1_is_br_sharing;
    input logic  value;
    io_out_s1_full_pred_1_is_br_sharing=value;
  endfunction

  function void get_io_out_s1_full_pred_1_hit;
    output logic  value;
    value=io_out_s1_full_pred_1_hit;
  endfunction

  function void set_io_out_s1_full_pred_1_hit;
    input logic  value;
    io_out_s1_full_pred_1_hit=value;
  endfunction

  function void get_io_out_s1_full_pred_2_br_taken_mask_0;
    output logic  value;
    value=io_out_s1_full_pred_2_br_taken_mask_0;
  endfunction

  function void set_io_out_s1_full_pred_2_br_taken_mask_0;
    input logic  value;
    io_out_s1_full_pred_2_br_taken_mask_0=value;
  endfunction

  function void get_io_out_s1_full_pred_2_br_taken_mask_1;
    output logic  value;
    value=io_out_s1_full_pred_2_br_taken_mask_1;
  endfunction

  function void set_io_out_s1_full_pred_2_br_taken_mask_1;
    input logic  value;
    io_out_s1_full_pred_2_br_taken_mask_1=value;
  endfunction

  function void get_io_out_s1_full_pred_2_slot_valids_0;
    output logic  value;
    value=io_out_s1_full_pred_2_slot_valids_0;
  endfunction

  function void set_io_out_s1_full_pred_2_slot_valids_0;
    input logic  value;
    io_out_s1_full_pred_2_slot_valids_0=value;
  endfunction

  function void get_io_out_s1_full_pred_2_slot_valids_1;
    output logic  value;
    value=io_out_s1_full_pred_2_slot_valids_1;
  endfunction

  function void set_io_out_s1_full_pred_2_slot_valids_1;
    input logic  value;
    io_out_s1_full_pred_2_slot_valids_1=value;
  endfunction

  function void get_io_out_s1_full_pred_2_targets_0;
    output logic [40:0] value;
    value=io_out_s1_full_pred_2_targets_0;
  endfunction

  function void set_io_out_s1_full_pred_2_targets_0;
    input logic [40:0] value;
    io_out_s1_full_pred_2_targets_0=value;
  endfunction

  function void get_io_out_s1_full_pred_2_targets_1;
    output logic [40:0] value;
    value=io_out_s1_full_pred_2_targets_1;
  endfunction

  function void set_io_out_s1_full_pred_2_targets_1;
    input logic [40:0] value;
    io_out_s1_full_pred_2_targets_1=value;
  endfunction

  function void get_io_out_s1_full_pred_2_offsets_0;
    output logic [3:0] value;
    value=io_out_s1_full_pred_2_offsets_0;
  endfunction

  function void set_io_out_s1_full_pred_2_offsets_0;
    input logic [3:0] value;
    io_out_s1_full_pred_2_offsets_0=value;
  endfunction

  function void get_io_out_s1_full_pred_2_offsets_1;
    output logic [3:0] value;
    value=io_out_s1_full_pred_2_offsets_1;
  endfunction

  function void set_io_out_s1_full_pred_2_offsets_1;
    input logic [3:0] value;
    io_out_s1_full_pred_2_offsets_1=value;
  endfunction

  function void get_io_out_s1_full_pred_2_fallThroughAddr;
    output logic [40:0] value;
    value=io_out_s1_full_pred_2_fallThroughAddr;
  endfunction

  function void set_io_out_s1_full_pred_2_fallThroughAddr;
    input logic [40:0] value;
    io_out_s1_full_pred_2_fallThroughAddr=value;
  endfunction

  function void get_io_out_s1_full_pred_2_is_br_sharing;
    output logic  value;
    value=io_out_s1_full_pred_2_is_br_sharing;
  endfunction

  function void set_io_out_s1_full_pred_2_is_br_sharing;
    input logic  value;
    io_out_s1_full_pred_2_is_br_sharing=value;
  endfunction

  function void get_io_out_s1_full_pred_2_hit;
    output logic  value;
    value=io_out_s1_full_pred_2_hit;
  endfunction

  function void set_io_out_s1_full_pred_2_hit;
    input logic  value;
    io_out_s1_full_pred_2_hit=value;
  endfunction

  function void get_io_out_s1_full_pred_3_br_taken_mask_0;
    output logic  value;
    value=io_out_s1_full_pred_3_br_taken_mask_0;
  endfunction

  function void set_io_out_s1_full_pred_3_br_taken_mask_0;
    input logic  value;
    io_out_s1_full_pred_3_br_taken_mask_0=value;
  endfunction

  function void get_io_out_s1_full_pred_3_br_taken_mask_1;
    output logic  value;
    value=io_out_s1_full_pred_3_br_taken_mask_1;
  endfunction

  function void set_io_out_s1_full_pred_3_br_taken_mask_1;
    input logic  value;
    io_out_s1_full_pred_3_br_taken_mask_1=value;
  endfunction

  function void get_io_out_s1_full_pred_3_slot_valids_0;
    output logic  value;
    value=io_out_s1_full_pred_3_slot_valids_0;
  endfunction

  function void set_io_out_s1_full_pred_3_slot_valids_0;
    input logic  value;
    io_out_s1_full_pred_3_slot_valids_0=value;
  endfunction

  function void get_io_out_s1_full_pred_3_slot_valids_1;
    output logic  value;
    value=io_out_s1_full_pred_3_slot_valids_1;
  endfunction

  function void set_io_out_s1_full_pred_3_slot_valids_1;
    input logic  value;
    io_out_s1_full_pred_3_slot_valids_1=value;
  endfunction

  function void get_io_out_s1_full_pred_3_targets_0;
    output logic [40:0] value;
    value=io_out_s1_full_pred_3_targets_0;
  endfunction

  function void set_io_out_s1_full_pred_3_targets_0;
    input logic [40:0] value;
    io_out_s1_full_pred_3_targets_0=value;
  endfunction

  function void get_io_out_s1_full_pred_3_targets_1;
    output logic [40:0] value;
    value=io_out_s1_full_pred_3_targets_1;
  endfunction

  function void set_io_out_s1_full_pred_3_targets_1;
    input logic [40:0] value;
    io_out_s1_full_pred_3_targets_1=value;
  endfunction

  function void get_io_out_s1_full_pred_3_offsets_0;
    output logic [3:0] value;
    value=io_out_s1_full_pred_3_offsets_0;
  endfunction

  function void set_io_out_s1_full_pred_3_offsets_0;
    input logic [3:0] value;
    io_out_s1_full_pred_3_offsets_0=value;
  endfunction

  function void get_io_out_s1_full_pred_3_offsets_1;
    output logic [3:0] value;
    value=io_out_s1_full_pred_3_offsets_1;
  endfunction

  function void set_io_out_s1_full_pred_3_offsets_1;
    input logic [3:0] value;
    io_out_s1_full_pred_3_offsets_1=value;
  endfunction

  function void get_io_out_s1_full_pred_3_fallThroughAddr;
    output logic [40:0] value;
    value=io_out_s1_full_pred_3_fallThroughAddr;
  endfunction

  function void set_io_out_s1_full_pred_3_fallThroughAddr;
    input logic [40:0] value;
    io_out_s1_full_pred_3_fallThroughAddr=value;
  endfunction

  function void get_io_out_s1_full_pred_3_fallThroughErr;
    output logic  value;
    value=io_out_s1_full_pred_3_fallThroughErr;
  endfunction

  function void set_io_out_s1_full_pred_3_fallThroughErr;
    input logic  value;
    io_out_s1_full_pred_3_fallThroughErr=value;
  endfunction

  function void get_io_out_s1_full_pred_3_is_br_sharing;
    output logic  value;
    value=io_out_s1_full_pred_3_is_br_sharing;
  endfunction

  function void set_io_out_s1_full_pred_3_is_br_sharing;
    input logic  value;
    io_out_s1_full_pred_3_is_br_sharing=value;
  endfunction

  function void get_io_out_s1_full_pred_3_hit;
    output logic  value;
    value=io_out_s1_full_pred_3_hit;
  endfunction

  function void set_io_out_s1_full_pred_3_hit;
    input logic  value;
    io_out_s1_full_pred_3_hit=value;
  endfunction

  function void get_io_out_last_stage_meta;
    output logic [222:0] value;
    value=io_out_last_stage_meta;
  endfunction

  function void set_io_out_last_stage_meta;
    input logic [222:0] value;
    io_out_last_stage_meta=value;
  endfunction

  function void get_io_ctrl_ubtb_enable;
    output logic  value;
    value=io_ctrl_ubtb_enable;
  endfunction

  function void set_io_ctrl_ubtb_enable;
    input logic  value;
    io_ctrl_ubtb_enable=value;
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

  function void get_io_s2_fire_0;
    output logic  value;
    value=io_s2_fire_0;
  endfunction

  function void set_io_s2_fire_0;
    input logic  value;
    io_s2_fire_0=value;
  endfunction

  function void get_io_update_valid;
    output logic  value;
    value=io_update_valid;
  endfunction

  function void set_io_update_valid;
    input logic  value;
    io_update_valid=value;
  endfunction

  function void get_io_update_bits_pc;
    output logic [40:0] value;
    value=io_update_bits_pc;
  endfunction

  function void set_io_update_bits_pc;
    input logic [40:0] value;
    io_update_bits_pc=value;
  endfunction

  function void get_io_update_bits_ftb_entry_brSlots_0_offset;
    output logic [3:0] value;
    value=io_update_bits_ftb_entry_brSlots_0_offset;
  endfunction

  function void set_io_update_bits_ftb_entry_brSlots_0_offset;
    input logic [3:0] value;
    io_update_bits_ftb_entry_brSlots_0_offset=value;
  endfunction

  function void get_io_update_bits_ftb_entry_brSlots_0_lower;
    output logic [11:0] value;
    value=io_update_bits_ftb_entry_brSlots_0_lower;
  endfunction

  function void set_io_update_bits_ftb_entry_brSlots_0_lower;
    input logic [11:0] value;
    io_update_bits_ftb_entry_brSlots_0_lower=value;
  endfunction

  function void get_io_update_bits_ftb_entry_brSlots_0_tarStat;
    output logic [1:0] value;
    value=io_update_bits_ftb_entry_brSlots_0_tarStat;
  endfunction

  function void set_io_update_bits_ftb_entry_brSlots_0_tarStat;
    input logic [1:0] value;
    io_update_bits_ftb_entry_brSlots_0_tarStat=value;
  endfunction

  function void get_io_update_bits_ftb_entry_brSlots_0_valid;
    output logic  value;
    value=io_update_bits_ftb_entry_brSlots_0_valid;
  endfunction

  function void set_io_update_bits_ftb_entry_brSlots_0_valid;
    input logic  value;
    io_update_bits_ftb_entry_brSlots_0_valid=value;
  endfunction

  function void get_io_update_bits_ftb_entry_tailSlot_offset;
    output logic [3:0] value;
    value=io_update_bits_ftb_entry_tailSlot_offset;
  endfunction

  function void set_io_update_bits_ftb_entry_tailSlot_offset;
    input logic [3:0] value;
    io_update_bits_ftb_entry_tailSlot_offset=value;
  endfunction

  function void get_io_update_bits_ftb_entry_tailSlot_lower;
    output logic [19:0] value;
    value=io_update_bits_ftb_entry_tailSlot_lower;
  endfunction

  function void set_io_update_bits_ftb_entry_tailSlot_lower;
    input logic [19:0] value;
    io_update_bits_ftb_entry_tailSlot_lower=value;
  endfunction

  function void get_io_update_bits_ftb_entry_tailSlot_tarStat;
    output logic [1:0] value;
    value=io_update_bits_ftb_entry_tailSlot_tarStat;
  endfunction

  function void set_io_update_bits_ftb_entry_tailSlot_tarStat;
    input logic [1:0] value;
    io_update_bits_ftb_entry_tailSlot_tarStat=value;
  endfunction

  function void get_io_update_bits_ftb_entry_tailSlot_sharing;
    output logic  value;
    value=io_update_bits_ftb_entry_tailSlot_sharing;
  endfunction

  function void set_io_update_bits_ftb_entry_tailSlot_sharing;
    input logic  value;
    io_update_bits_ftb_entry_tailSlot_sharing=value;
  endfunction

  function void get_io_update_bits_ftb_entry_tailSlot_valid;
    output logic  value;
    value=io_update_bits_ftb_entry_tailSlot_valid;
  endfunction

  function void set_io_update_bits_ftb_entry_tailSlot_valid;
    input logic  value;
    io_update_bits_ftb_entry_tailSlot_valid=value;
  endfunction

  function void get_io_update_bits_ftb_entry_pftAddr;
    output logic [3:0] value;
    value=io_update_bits_ftb_entry_pftAddr;
  endfunction

  function void set_io_update_bits_ftb_entry_pftAddr;
    input logic [3:0] value;
    io_update_bits_ftb_entry_pftAddr=value;
  endfunction

  function void get_io_update_bits_ftb_entry_carry;
    output logic  value;
    value=io_update_bits_ftb_entry_carry;
  endfunction

  function void set_io_update_bits_ftb_entry_carry;
    input logic  value;
    io_update_bits_ftb_entry_carry=value;
  endfunction

  function void get_io_update_bits_ftb_entry_always_taken_0;
    output logic  value;
    value=io_update_bits_ftb_entry_always_taken_0;
  endfunction

  function void set_io_update_bits_ftb_entry_always_taken_0;
    input logic  value;
    io_update_bits_ftb_entry_always_taken_0=value;
  endfunction

  function void get_io_update_bits_ftb_entry_always_taken_1;
    output logic  value;
    value=io_update_bits_ftb_entry_always_taken_1;
  endfunction

  function void set_io_update_bits_ftb_entry_always_taken_1;
    input logic  value;
    io_update_bits_ftb_entry_always_taken_1=value;
  endfunction

  function void get_io_update_bits_br_taken_mask_0;
    output logic  value;
    value=io_update_bits_br_taken_mask_0;
  endfunction

  function void set_io_update_bits_br_taken_mask_0;
    input logic  value;
    io_update_bits_br_taken_mask_0=value;
  endfunction

  function void get_io_update_bits_br_taken_mask_1;
    output logic  value;
    value=io_update_bits_br_taken_mask_1;
  endfunction

  function void set_io_update_bits_br_taken_mask_1;
    input logic  value;
    io_update_bits_br_taken_mask_1=value;
  endfunction

  function void get_io_update_bits_meta;
    output logic [222:0] value;
    value=io_update_bits_meta;
  endfunction

  function void set_io_update_bits_meta;
    input logic [222:0] value;
    io_update_bits_meta=value;
  endfunction

  function void get_io_perf_0_value;
    output logic [5:0] value;
    value=io_perf_0_value;
  endfunction

  function void set_io_perf_0_value;
    input logic [5:0] value;
    io_perf_0_value=value;
  endfunction

  function void get_io_perf_1_value;
    output logic [5:0] value;
    value=io_perf_1_value;
  endfunction

  function void set_io_perf_1_value;
    input logic [5:0] value;
    io_perf_1_value=value;
  endfunction



initial begin
    $dumpfile("uFTB.fst");
    $dumpvars(0, FauFTB_top);
 end 

endmodule
