module Tage_SC_top;

  logic  clock;
  logic  reset;
  logic [35:0] io_reset_vector;
  logic [40:0] io_in_bits_s0_pc_0;
  logic [40:0] io_in_bits_s0_pc_1;
  logic [40:0] io_in_bits_s0_pc_3;
  logic [10:0] io_in_bits_folded_hist_1_hist_17_folded_hist;
  logic [10:0] io_in_bits_folded_hist_1_hist_16_folded_hist;
  logic [6:0] io_in_bits_folded_hist_1_hist_15_folded_hist;
  logic [7:0] io_in_bits_folded_hist_1_hist_14_folded_hist;
  logic [6:0] io_in_bits_folded_hist_1_hist_9_folded_hist;
  logic [7:0] io_in_bits_folded_hist_1_hist_8_folded_hist;
  logic [6:0] io_in_bits_folded_hist_1_hist_7_folded_hist;
  logic [6:0] io_in_bits_folded_hist_1_hist_5_folded_hist;
  logic [7:0] io_in_bits_folded_hist_1_hist_4_folded_hist;
  logic [7:0] io_in_bits_folded_hist_1_hist_3_folded_hist;
  logic [10:0] io_in_bits_folded_hist_1_hist_1_folded_hist;
  logic [3:0] io_in_bits_folded_hist_3_hist_12_folded_hist;
  logic [7:0] io_in_bits_folded_hist_3_hist_11_folded_hist;
  logic [7:0] io_in_bits_folded_hist_3_hist_2_folded_hist;
  logic  io_out_s2_full_pred_0_br_taken_mask_0;
  logic  io_out_s2_full_pred_0_br_taken_mask_1;
  logic  io_out_s2_full_pred_1_br_taken_mask_0;
  logic  io_out_s2_full_pred_1_br_taken_mask_1;
  logic  io_out_s2_full_pred_2_br_taken_mask_0;
  logic  io_out_s2_full_pred_2_br_taken_mask_1;
  logic  io_out_s2_full_pred_3_br_taken_mask_0;
  logic  io_out_s2_full_pred_3_br_taken_mask_1;
  logic  io_out_s3_full_pred_0_br_taken_mask_0;
  logic  io_out_s3_full_pred_0_br_taken_mask_1;
  logic  io_out_s3_full_pred_1_br_taken_mask_0;
  logic  io_out_s3_full_pred_1_br_taken_mask_1;
  logic  io_out_s3_full_pred_2_br_taken_mask_0;
  logic  io_out_s3_full_pred_2_br_taken_mask_1;
  logic  io_out_s3_full_pred_3_br_taken_mask_0;
  logic  io_out_s3_full_pred_3_br_taken_mask_1;
  logic [222:0] io_out_last_stage_meta;
  logic  io_ctrl_tage_enable;
  logic  io_ctrl_sc_enable;
  logic  io_s0_fire_0;
  logic  io_s0_fire_1;
  logic  io_s0_fire_3;
  logic  io_s1_fire_0;
  logic  io_s1_fire_1;
  logic  io_s1_fire_2;
  logic  io_s1_fire_3;
  logic  io_s2_fire_0;
  logic  io_s2_fire_1;
  logic  io_s2_fire_2;
  logic  io_s2_fire_3;
  logic  io_s1_ready;
  logic  io_update_valid;
  logic [40:0] io_update_bits_pc;
  logic [10:0] io_update_bits_spec_info_folded_hist_hist_17_folded_hist;
  logic [10:0] io_update_bits_spec_info_folded_hist_hist_16_folded_hist;
  logic [6:0] io_update_bits_spec_info_folded_hist_hist_15_folded_hist;
  logic [7:0] io_update_bits_spec_info_folded_hist_hist_14_folded_hist;
  logic [3:0] io_update_bits_spec_info_folded_hist_hist_12_folded_hist;
  logic [7:0] io_update_bits_spec_info_folded_hist_hist_11_folded_hist;
  logic [6:0] io_update_bits_spec_info_folded_hist_hist_9_folded_hist;
  logic [7:0] io_update_bits_spec_info_folded_hist_hist_8_folded_hist;
  logic [6:0] io_update_bits_spec_info_folded_hist_hist_7_folded_hist;
  logic [6:0] io_update_bits_spec_info_folded_hist_hist_5_folded_hist;
  logic [7:0] io_update_bits_spec_info_folded_hist_hist_4_folded_hist;
  logic [7:0] io_update_bits_spec_info_folded_hist_hist_3_folded_hist;
  logic [7:0] io_update_bits_spec_info_folded_hist_hist_2_folded_hist;
  logic [10:0] io_update_bits_spec_info_folded_hist_hist_1_folded_hist;
  logic  io_update_bits_ftb_entry_brSlots_0_valid;
  logic  io_update_bits_ftb_entry_tailSlot_sharing;
  logic  io_update_bits_ftb_entry_tailSlot_valid;
  logic  io_update_bits_ftb_entry_always_taken_0;
  logic  io_update_bits_ftb_entry_always_taken_1;
  logic  io_update_bits_br_taken_mask_0;
  logic  io_update_bits_br_taken_mask_1;
  logic  io_update_bits_mispred_mask_0;
  logic  io_update_bits_mispred_mask_1;
  logic [222:0] io_update_bits_meta;
  logic [5:0] io_perf_0_value;
  logic [5:0] io_perf_1_value;
  logic [5:0] io_perf_2_value;


  Tage_SC Tage_SC (
    .clock(clock),
    .reset(reset),
    .io_reset_vector(io_reset_vector),
    .io_in_bits_s0_pc_0(io_in_bits_s0_pc_0),
    .io_in_bits_s0_pc_1(io_in_bits_s0_pc_1),
    .io_in_bits_s0_pc_3(io_in_bits_s0_pc_3),
    .io_in_bits_folded_hist_1_hist_17_folded_hist(io_in_bits_folded_hist_1_hist_17_folded_hist),
    .io_in_bits_folded_hist_1_hist_16_folded_hist(io_in_bits_folded_hist_1_hist_16_folded_hist),
    .io_in_bits_folded_hist_1_hist_15_folded_hist(io_in_bits_folded_hist_1_hist_15_folded_hist),
    .io_in_bits_folded_hist_1_hist_14_folded_hist(io_in_bits_folded_hist_1_hist_14_folded_hist),
    .io_in_bits_folded_hist_1_hist_9_folded_hist(io_in_bits_folded_hist_1_hist_9_folded_hist),
    .io_in_bits_folded_hist_1_hist_8_folded_hist(io_in_bits_folded_hist_1_hist_8_folded_hist),
    .io_in_bits_folded_hist_1_hist_7_folded_hist(io_in_bits_folded_hist_1_hist_7_folded_hist),
    .io_in_bits_folded_hist_1_hist_5_folded_hist(io_in_bits_folded_hist_1_hist_5_folded_hist),
    .io_in_bits_folded_hist_1_hist_4_folded_hist(io_in_bits_folded_hist_1_hist_4_folded_hist),
    .io_in_bits_folded_hist_1_hist_3_folded_hist(io_in_bits_folded_hist_1_hist_3_folded_hist),
    .io_in_bits_folded_hist_1_hist_1_folded_hist(io_in_bits_folded_hist_1_hist_1_folded_hist),
    .io_in_bits_folded_hist_3_hist_12_folded_hist(io_in_bits_folded_hist_3_hist_12_folded_hist),
    .io_in_bits_folded_hist_3_hist_11_folded_hist(io_in_bits_folded_hist_3_hist_11_folded_hist),
    .io_in_bits_folded_hist_3_hist_2_folded_hist(io_in_bits_folded_hist_3_hist_2_folded_hist),
    .io_out_s2_full_pred_0_br_taken_mask_0(io_out_s2_full_pred_0_br_taken_mask_0),
    .io_out_s2_full_pred_0_br_taken_mask_1(io_out_s2_full_pred_0_br_taken_mask_1),
    .io_out_s2_full_pred_1_br_taken_mask_0(io_out_s2_full_pred_1_br_taken_mask_0),
    .io_out_s2_full_pred_1_br_taken_mask_1(io_out_s2_full_pred_1_br_taken_mask_1),
    .io_out_s2_full_pred_2_br_taken_mask_0(io_out_s2_full_pred_2_br_taken_mask_0),
    .io_out_s2_full_pred_2_br_taken_mask_1(io_out_s2_full_pred_2_br_taken_mask_1),
    .io_out_s2_full_pred_3_br_taken_mask_0(io_out_s2_full_pred_3_br_taken_mask_0),
    .io_out_s2_full_pred_3_br_taken_mask_1(io_out_s2_full_pred_3_br_taken_mask_1),
    .io_out_s3_full_pred_0_br_taken_mask_0(io_out_s3_full_pred_0_br_taken_mask_0),
    .io_out_s3_full_pred_0_br_taken_mask_1(io_out_s3_full_pred_0_br_taken_mask_1),
    .io_out_s3_full_pred_1_br_taken_mask_0(io_out_s3_full_pred_1_br_taken_mask_0),
    .io_out_s3_full_pred_1_br_taken_mask_1(io_out_s3_full_pred_1_br_taken_mask_1),
    .io_out_s3_full_pred_2_br_taken_mask_0(io_out_s3_full_pred_2_br_taken_mask_0),
    .io_out_s3_full_pred_2_br_taken_mask_1(io_out_s3_full_pred_2_br_taken_mask_1),
    .io_out_s3_full_pred_3_br_taken_mask_0(io_out_s3_full_pred_3_br_taken_mask_0),
    .io_out_s3_full_pred_3_br_taken_mask_1(io_out_s3_full_pred_3_br_taken_mask_1),
    .io_out_last_stage_meta(io_out_last_stage_meta),
    .io_ctrl_tage_enable(io_ctrl_tage_enable),
    .io_ctrl_sc_enable(io_ctrl_sc_enable),
    .io_s0_fire_0(io_s0_fire_0),
    .io_s0_fire_1(io_s0_fire_1),
    .io_s0_fire_3(io_s0_fire_3),
    .io_s1_fire_0(io_s1_fire_0),
    .io_s1_fire_1(io_s1_fire_1),
    .io_s1_fire_2(io_s1_fire_2),
    .io_s1_fire_3(io_s1_fire_3),
    .io_s2_fire_0(io_s2_fire_0),
    .io_s2_fire_1(io_s2_fire_1),
    .io_s2_fire_2(io_s2_fire_2),
    .io_s2_fire_3(io_s2_fire_3),
    .io_s1_ready(io_s1_ready),
    .io_update_valid(io_update_valid),
    .io_update_bits_pc(io_update_bits_pc),
    .io_update_bits_spec_info_folded_hist_hist_17_folded_hist(io_update_bits_spec_info_folded_hist_hist_17_folded_hist),
    .io_update_bits_spec_info_folded_hist_hist_16_folded_hist(io_update_bits_spec_info_folded_hist_hist_16_folded_hist),
    .io_update_bits_spec_info_folded_hist_hist_15_folded_hist(io_update_bits_spec_info_folded_hist_hist_15_folded_hist),
    .io_update_bits_spec_info_folded_hist_hist_14_folded_hist(io_update_bits_spec_info_folded_hist_hist_14_folded_hist),
    .io_update_bits_spec_info_folded_hist_hist_12_folded_hist(io_update_bits_spec_info_folded_hist_hist_12_folded_hist),
    .io_update_bits_spec_info_folded_hist_hist_11_folded_hist(io_update_bits_spec_info_folded_hist_hist_11_folded_hist),
    .io_update_bits_spec_info_folded_hist_hist_9_folded_hist(io_update_bits_spec_info_folded_hist_hist_9_folded_hist),
    .io_update_bits_spec_info_folded_hist_hist_8_folded_hist(io_update_bits_spec_info_folded_hist_hist_8_folded_hist),
    .io_update_bits_spec_info_folded_hist_hist_7_folded_hist(io_update_bits_spec_info_folded_hist_hist_7_folded_hist),
    .io_update_bits_spec_info_folded_hist_hist_5_folded_hist(io_update_bits_spec_info_folded_hist_hist_5_folded_hist),
    .io_update_bits_spec_info_folded_hist_hist_4_folded_hist(io_update_bits_spec_info_folded_hist_hist_4_folded_hist),
    .io_update_bits_spec_info_folded_hist_hist_3_folded_hist(io_update_bits_spec_info_folded_hist_hist_3_folded_hist),
    .io_update_bits_spec_info_folded_hist_hist_2_folded_hist(io_update_bits_spec_info_folded_hist_hist_2_folded_hist),
    .io_update_bits_spec_info_folded_hist_hist_1_folded_hist(io_update_bits_spec_info_folded_hist_hist_1_folded_hist),
    .io_update_bits_ftb_entry_brSlots_0_valid(io_update_bits_ftb_entry_brSlots_0_valid),
    .io_update_bits_ftb_entry_tailSlot_sharing(io_update_bits_ftb_entry_tailSlot_sharing),
    .io_update_bits_ftb_entry_tailSlot_valid(io_update_bits_ftb_entry_tailSlot_valid),
    .io_update_bits_ftb_entry_always_taken_0(io_update_bits_ftb_entry_always_taken_0),
    .io_update_bits_ftb_entry_always_taken_1(io_update_bits_ftb_entry_always_taken_1),
    .io_update_bits_br_taken_mask_0(io_update_bits_br_taken_mask_0),
    .io_update_bits_br_taken_mask_1(io_update_bits_br_taken_mask_1),
    .io_update_bits_mispred_mask_0(io_update_bits_mispred_mask_0),
    .io_update_bits_mispred_mask_1(io_update_bits_mispred_mask_1),
    .io_update_bits_meta(io_update_bits_meta),
    .io_perf_0_value(io_perf_0_value),
    .io_perf_1_value(io_perf_1_value),
    .io_perf_2_value(io_perf_2_value)
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
  export "DPI-C" function get_io_in_bits_s0_pc_3;
  export "DPI-C" function set_io_in_bits_s0_pc_3;
  export "DPI-C" function get_io_in_bits_folded_hist_1_hist_17_folded_hist;
  export "DPI-C" function set_io_in_bits_folded_hist_1_hist_17_folded_hist;
  export "DPI-C" function get_io_in_bits_folded_hist_1_hist_16_folded_hist;
  export "DPI-C" function set_io_in_bits_folded_hist_1_hist_16_folded_hist;
  export "DPI-C" function get_io_in_bits_folded_hist_1_hist_15_folded_hist;
  export "DPI-C" function set_io_in_bits_folded_hist_1_hist_15_folded_hist;
  export "DPI-C" function get_io_in_bits_folded_hist_1_hist_14_folded_hist;
  export "DPI-C" function set_io_in_bits_folded_hist_1_hist_14_folded_hist;
  export "DPI-C" function get_io_in_bits_folded_hist_1_hist_9_folded_hist;
  export "DPI-C" function set_io_in_bits_folded_hist_1_hist_9_folded_hist;
  export "DPI-C" function get_io_in_bits_folded_hist_1_hist_8_folded_hist;
  export "DPI-C" function set_io_in_bits_folded_hist_1_hist_8_folded_hist;
  export "DPI-C" function get_io_in_bits_folded_hist_1_hist_7_folded_hist;
  export "DPI-C" function set_io_in_bits_folded_hist_1_hist_7_folded_hist;
  export "DPI-C" function get_io_in_bits_folded_hist_1_hist_5_folded_hist;
  export "DPI-C" function set_io_in_bits_folded_hist_1_hist_5_folded_hist;
  export "DPI-C" function get_io_in_bits_folded_hist_1_hist_4_folded_hist;
  export "DPI-C" function set_io_in_bits_folded_hist_1_hist_4_folded_hist;
  export "DPI-C" function get_io_in_bits_folded_hist_1_hist_3_folded_hist;
  export "DPI-C" function set_io_in_bits_folded_hist_1_hist_3_folded_hist;
  export "DPI-C" function get_io_in_bits_folded_hist_1_hist_1_folded_hist;
  export "DPI-C" function set_io_in_bits_folded_hist_1_hist_1_folded_hist;
  export "DPI-C" function get_io_in_bits_folded_hist_3_hist_12_folded_hist;
  export "DPI-C" function set_io_in_bits_folded_hist_3_hist_12_folded_hist;
  export "DPI-C" function get_io_in_bits_folded_hist_3_hist_11_folded_hist;
  export "DPI-C" function set_io_in_bits_folded_hist_3_hist_11_folded_hist;
  export "DPI-C" function get_io_in_bits_folded_hist_3_hist_2_folded_hist;
  export "DPI-C" function set_io_in_bits_folded_hist_3_hist_2_folded_hist;
  export "DPI-C" function get_io_out_s2_full_pred_0_br_taken_mask_0;
  export "DPI-C" function set_io_out_s2_full_pred_0_br_taken_mask_0;
  export "DPI-C" function get_io_out_s2_full_pred_0_br_taken_mask_1;
  export "DPI-C" function set_io_out_s2_full_pred_0_br_taken_mask_1;
  export "DPI-C" function get_io_out_s2_full_pred_1_br_taken_mask_0;
  export "DPI-C" function set_io_out_s2_full_pred_1_br_taken_mask_0;
  export "DPI-C" function get_io_out_s2_full_pred_1_br_taken_mask_1;
  export "DPI-C" function set_io_out_s2_full_pred_1_br_taken_mask_1;
  export "DPI-C" function get_io_out_s2_full_pred_2_br_taken_mask_0;
  export "DPI-C" function set_io_out_s2_full_pred_2_br_taken_mask_0;
  export "DPI-C" function get_io_out_s2_full_pred_2_br_taken_mask_1;
  export "DPI-C" function set_io_out_s2_full_pred_2_br_taken_mask_1;
  export "DPI-C" function get_io_out_s2_full_pred_3_br_taken_mask_0;
  export "DPI-C" function set_io_out_s2_full_pred_3_br_taken_mask_0;
  export "DPI-C" function get_io_out_s2_full_pred_3_br_taken_mask_1;
  export "DPI-C" function set_io_out_s2_full_pred_3_br_taken_mask_1;
  export "DPI-C" function get_io_out_s3_full_pred_0_br_taken_mask_0;
  export "DPI-C" function set_io_out_s3_full_pred_0_br_taken_mask_0;
  export "DPI-C" function get_io_out_s3_full_pred_0_br_taken_mask_1;
  export "DPI-C" function set_io_out_s3_full_pred_0_br_taken_mask_1;
  export "DPI-C" function get_io_out_s3_full_pred_1_br_taken_mask_0;
  export "DPI-C" function set_io_out_s3_full_pred_1_br_taken_mask_0;
  export "DPI-C" function get_io_out_s3_full_pred_1_br_taken_mask_1;
  export "DPI-C" function set_io_out_s3_full_pred_1_br_taken_mask_1;
  export "DPI-C" function get_io_out_s3_full_pred_2_br_taken_mask_0;
  export "DPI-C" function set_io_out_s3_full_pred_2_br_taken_mask_0;
  export "DPI-C" function get_io_out_s3_full_pred_2_br_taken_mask_1;
  export "DPI-C" function set_io_out_s3_full_pred_2_br_taken_mask_1;
  export "DPI-C" function get_io_out_s3_full_pred_3_br_taken_mask_0;
  export "DPI-C" function set_io_out_s3_full_pred_3_br_taken_mask_0;
  export "DPI-C" function get_io_out_s3_full_pred_3_br_taken_mask_1;
  export "DPI-C" function set_io_out_s3_full_pred_3_br_taken_mask_1;
  export "DPI-C" function get_io_out_last_stage_meta;
  export "DPI-C" function set_io_out_last_stage_meta;
  export "DPI-C" function get_io_ctrl_tage_enable;
  export "DPI-C" function set_io_ctrl_tage_enable;
  export "DPI-C" function get_io_ctrl_sc_enable;
  export "DPI-C" function set_io_ctrl_sc_enable;
  export "DPI-C" function get_io_s0_fire_0;
  export "DPI-C" function set_io_s0_fire_0;
  export "DPI-C" function get_io_s0_fire_1;
  export "DPI-C" function set_io_s0_fire_1;
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
  export "DPI-C" function get_io_s1_ready;
  export "DPI-C" function set_io_s1_ready;
  export "DPI-C" function get_io_update_valid;
  export "DPI-C" function set_io_update_valid;
  export "DPI-C" function get_io_update_bits_pc;
  export "DPI-C" function set_io_update_bits_pc;
  export "DPI-C" function get_io_update_bits_spec_info_folded_hist_hist_17_folded_hist;
  export "DPI-C" function set_io_update_bits_spec_info_folded_hist_hist_17_folded_hist;
  export "DPI-C" function get_io_update_bits_spec_info_folded_hist_hist_16_folded_hist;
  export "DPI-C" function set_io_update_bits_spec_info_folded_hist_hist_16_folded_hist;
  export "DPI-C" function get_io_update_bits_spec_info_folded_hist_hist_15_folded_hist;
  export "DPI-C" function set_io_update_bits_spec_info_folded_hist_hist_15_folded_hist;
  export "DPI-C" function get_io_update_bits_spec_info_folded_hist_hist_14_folded_hist;
  export "DPI-C" function set_io_update_bits_spec_info_folded_hist_hist_14_folded_hist;
  export "DPI-C" function get_io_update_bits_spec_info_folded_hist_hist_12_folded_hist;
  export "DPI-C" function set_io_update_bits_spec_info_folded_hist_hist_12_folded_hist;
  export "DPI-C" function get_io_update_bits_spec_info_folded_hist_hist_11_folded_hist;
  export "DPI-C" function set_io_update_bits_spec_info_folded_hist_hist_11_folded_hist;
  export "DPI-C" function get_io_update_bits_spec_info_folded_hist_hist_9_folded_hist;
  export "DPI-C" function set_io_update_bits_spec_info_folded_hist_hist_9_folded_hist;
  export "DPI-C" function get_io_update_bits_spec_info_folded_hist_hist_8_folded_hist;
  export "DPI-C" function set_io_update_bits_spec_info_folded_hist_hist_8_folded_hist;
  export "DPI-C" function get_io_update_bits_spec_info_folded_hist_hist_7_folded_hist;
  export "DPI-C" function set_io_update_bits_spec_info_folded_hist_hist_7_folded_hist;
  export "DPI-C" function get_io_update_bits_spec_info_folded_hist_hist_5_folded_hist;
  export "DPI-C" function set_io_update_bits_spec_info_folded_hist_hist_5_folded_hist;
  export "DPI-C" function get_io_update_bits_spec_info_folded_hist_hist_4_folded_hist;
  export "DPI-C" function set_io_update_bits_spec_info_folded_hist_hist_4_folded_hist;
  export "DPI-C" function get_io_update_bits_spec_info_folded_hist_hist_3_folded_hist;
  export "DPI-C" function set_io_update_bits_spec_info_folded_hist_hist_3_folded_hist;
  export "DPI-C" function get_io_update_bits_spec_info_folded_hist_hist_2_folded_hist;
  export "DPI-C" function set_io_update_bits_spec_info_folded_hist_hist_2_folded_hist;
  export "DPI-C" function get_io_update_bits_spec_info_folded_hist_hist_1_folded_hist;
  export "DPI-C" function set_io_update_bits_spec_info_folded_hist_hist_1_folded_hist;
  export "DPI-C" function get_io_update_bits_ftb_entry_brSlots_0_valid;
  export "DPI-C" function set_io_update_bits_ftb_entry_brSlots_0_valid;
  export "DPI-C" function get_io_update_bits_ftb_entry_tailSlot_sharing;
  export "DPI-C" function set_io_update_bits_ftb_entry_tailSlot_sharing;
  export "DPI-C" function get_io_update_bits_ftb_entry_tailSlot_valid;
  export "DPI-C" function set_io_update_bits_ftb_entry_tailSlot_valid;
  export "DPI-C" function get_io_update_bits_ftb_entry_always_taken_0;
  export "DPI-C" function set_io_update_bits_ftb_entry_always_taken_0;
  export "DPI-C" function get_io_update_bits_ftb_entry_always_taken_1;
  export "DPI-C" function set_io_update_bits_ftb_entry_always_taken_1;
  export "DPI-C" function get_io_update_bits_br_taken_mask_0;
  export "DPI-C" function set_io_update_bits_br_taken_mask_0;
  export "DPI-C" function get_io_update_bits_br_taken_mask_1;
  export "DPI-C" function set_io_update_bits_br_taken_mask_1;
  export "DPI-C" function get_io_update_bits_mispred_mask_0;
  export "DPI-C" function set_io_update_bits_mispred_mask_0;
  export "DPI-C" function get_io_update_bits_mispred_mask_1;
  export "DPI-C" function set_io_update_bits_mispred_mask_1;
  export "DPI-C" function get_io_update_bits_meta;
  export "DPI-C" function set_io_update_bits_meta;
  export "DPI-C" function get_io_perf_0_value;
  export "DPI-C" function set_io_perf_0_value;
  export "DPI-C" function get_io_perf_1_value;
  export "DPI-C" function set_io_perf_1_value;
  export "DPI-C" function get_io_perf_2_value;
  export "DPI-C" function set_io_perf_2_value;


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

  function void get_io_in_bits_s0_pc_3;
    output logic [40:0] value;
    value=io_in_bits_s0_pc_3;
  endfunction

  function void set_io_in_bits_s0_pc_3;
    input logic [40:0] value;
    io_in_bits_s0_pc_3=value;
  endfunction

  function void get_io_in_bits_folded_hist_1_hist_17_folded_hist;
    output logic [10:0] value;
    value=io_in_bits_folded_hist_1_hist_17_folded_hist;
  endfunction

  function void set_io_in_bits_folded_hist_1_hist_17_folded_hist;
    input logic [10:0] value;
    io_in_bits_folded_hist_1_hist_17_folded_hist=value;
  endfunction

  function void get_io_in_bits_folded_hist_1_hist_16_folded_hist;
    output logic [10:0] value;
    value=io_in_bits_folded_hist_1_hist_16_folded_hist;
  endfunction

  function void set_io_in_bits_folded_hist_1_hist_16_folded_hist;
    input logic [10:0] value;
    io_in_bits_folded_hist_1_hist_16_folded_hist=value;
  endfunction

  function void get_io_in_bits_folded_hist_1_hist_15_folded_hist;
    output logic [6:0] value;
    value=io_in_bits_folded_hist_1_hist_15_folded_hist;
  endfunction

  function void set_io_in_bits_folded_hist_1_hist_15_folded_hist;
    input logic [6:0] value;
    io_in_bits_folded_hist_1_hist_15_folded_hist=value;
  endfunction

  function void get_io_in_bits_folded_hist_1_hist_14_folded_hist;
    output logic [7:0] value;
    value=io_in_bits_folded_hist_1_hist_14_folded_hist;
  endfunction

  function void set_io_in_bits_folded_hist_1_hist_14_folded_hist;
    input logic [7:0] value;
    io_in_bits_folded_hist_1_hist_14_folded_hist=value;
  endfunction

  function void get_io_in_bits_folded_hist_1_hist_9_folded_hist;
    output logic [6:0] value;
    value=io_in_bits_folded_hist_1_hist_9_folded_hist;
  endfunction

  function void set_io_in_bits_folded_hist_1_hist_9_folded_hist;
    input logic [6:0] value;
    io_in_bits_folded_hist_1_hist_9_folded_hist=value;
  endfunction

  function void get_io_in_bits_folded_hist_1_hist_8_folded_hist;
    output logic [7:0] value;
    value=io_in_bits_folded_hist_1_hist_8_folded_hist;
  endfunction

  function void set_io_in_bits_folded_hist_1_hist_8_folded_hist;
    input logic [7:0] value;
    io_in_bits_folded_hist_1_hist_8_folded_hist=value;
  endfunction

  function void get_io_in_bits_folded_hist_1_hist_7_folded_hist;
    output logic [6:0] value;
    value=io_in_bits_folded_hist_1_hist_7_folded_hist;
  endfunction

  function void set_io_in_bits_folded_hist_1_hist_7_folded_hist;
    input logic [6:0] value;
    io_in_bits_folded_hist_1_hist_7_folded_hist=value;
  endfunction

  function void get_io_in_bits_folded_hist_1_hist_5_folded_hist;
    output logic [6:0] value;
    value=io_in_bits_folded_hist_1_hist_5_folded_hist;
  endfunction

  function void set_io_in_bits_folded_hist_1_hist_5_folded_hist;
    input logic [6:0] value;
    io_in_bits_folded_hist_1_hist_5_folded_hist=value;
  endfunction

  function void get_io_in_bits_folded_hist_1_hist_4_folded_hist;
    output logic [7:0] value;
    value=io_in_bits_folded_hist_1_hist_4_folded_hist;
  endfunction

  function void set_io_in_bits_folded_hist_1_hist_4_folded_hist;
    input logic [7:0] value;
    io_in_bits_folded_hist_1_hist_4_folded_hist=value;
  endfunction

  function void get_io_in_bits_folded_hist_1_hist_3_folded_hist;
    output logic [7:0] value;
    value=io_in_bits_folded_hist_1_hist_3_folded_hist;
  endfunction

  function void set_io_in_bits_folded_hist_1_hist_3_folded_hist;
    input logic [7:0] value;
    io_in_bits_folded_hist_1_hist_3_folded_hist=value;
  endfunction

  function void get_io_in_bits_folded_hist_1_hist_1_folded_hist;
    output logic [10:0] value;
    value=io_in_bits_folded_hist_1_hist_1_folded_hist;
  endfunction

  function void set_io_in_bits_folded_hist_1_hist_1_folded_hist;
    input logic [10:0] value;
    io_in_bits_folded_hist_1_hist_1_folded_hist=value;
  endfunction

  function void get_io_in_bits_folded_hist_3_hist_12_folded_hist;
    output logic [3:0] value;
    value=io_in_bits_folded_hist_3_hist_12_folded_hist;
  endfunction

  function void set_io_in_bits_folded_hist_3_hist_12_folded_hist;
    input logic [3:0] value;
    io_in_bits_folded_hist_3_hist_12_folded_hist=value;
  endfunction

  function void get_io_in_bits_folded_hist_3_hist_11_folded_hist;
    output logic [7:0] value;
    value=io_in_bits_folded_hist_3_hist_11_folded_hist;
  endfunction

  function void set_io_in_bits_folded_hist_3_hist_11_folded_hist;
    input logic [7:0] value;
    io_in_bits_folded_hist_3_hist_11_folded_hist=value;
  endfunction

  function void get_io_in_bits_folded_hist_3_hist_2_folded_hist;
    output logic [7:0] value;
    value=io_in_bits_folded_hist_3_hist_2_folded_hist;
  endfunction

  function void set_io_in_bits_folded_hist_3_hist_2_folded_hist;
    input logic [7:0] value;
    io_in_bits_folded_hist_3_hist_2_folded_hist=value;
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

  function void get_io_out_last_stage_meta;
    output logic [222:0] value;
    value=io_out_last_stage_meta;
  endfunction

  function void set_io_out_last_stage_meta;
    input logic [222:0] value;
    io_out_last_stage_meta=value;
  endfunction

  function void get_io_ctrl_tage_enable;
    output logic  value;
    value=io_ctrl_tage_enable;
  endfunction

  function void set_io_ctrl_tage_enable;
    input logic  value;
    io_ctrl_tage_enable=value;
  endfunction

  function void get_io_ctrl_sc_enable;
    output logic  value;
    value=io_ctrl_sc_enable;
  endfunction

  function void set_io_ctrl_sc_enable;
    input logic  value;
    io_ctrl_sc_enable=value;
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

  function void get_io_s1_ready;
    output logic  value;
    value=io_s1_ready;
  endfunction

  function void set_io_s1_ready;
    input logic  value;
    io_s1_ready=value;
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

  function void get_io_update_bits_spec_info_folded_hist_hist_17_folded_hist;
    output logic [10:0] value;
    value=io_update_bits_spec_info_folded_hist_hist_17_folded_hist;
  endfunction

  function void set_io_update_bits_spec_info_folded_hist_hist_17_folded_hist;
    input logic [10:0] value;
    io_update_bits_spec_info_folded_hist_hist_17_folded_hist=value;
  endfunction

  function void get_io_update_bits_spec_info_folded_hist_hist_16_folded_hist;
    output logic [10:0] value;
    value=io_update_bits_spec_info_folded_hist_hist_16_folded_hist;
  endfunction

  function void set_io_update_bits_spec_info_folded_hist_hist_16_folded_hist;
    input logic [10:0] value;
    io_update_bits_spec_info_folded_hist_hist_16_folded_hist=value;
  endfunction

  function void get_io_update_bits_spec_info_folded_hist_hist_15_folded_hist;
    output logic [6:0] value;
    value=io_update_bits_spec_info_folded_hist_hist_15_folded_hist;
  endfunction

  function void set_io_update_bits_spec_info_folded_hist_hist_15_folded_hist;
    input logic [6:0] value;
    io_update_bits_spec_info_folded_hist_hist_15_folded_hist=value;
  endfunction

  function void get_io_update_bits_spec_info_folded_hist_hist_14_folded_hist;
    output logic [7:0] value;
    value=io_update_bits_spec_info_folded_hist_hist_14_folded_hist;
  endfunction

  function void set_io_update_bits_spec_info_folded_hist_hist_14_folded_hist;
    input logic [7:0] value;
    io_update_bits_spec_info_folded_hist_hist_14_folded_hist=value;
  endfunction

  function void get_io_update_bits_spec_info_folded_hist_hist_12_folded_hist;
    output logic [3:0] value;
    value=io_update_bits_spec_info_folded_hist_hist_12_folded_hist;
  endfunction

  function void set_io_update_bits_spec_info_folded_hist_hist_12_folded_hist;
    input logic [3:0] value;
    io_update_bits_spec_info_folded_hist_hist_12_folded_hist=value;
  endfunction

  function void get_io_update_bits_spec_info_folded_hist_hist_11_folded_hist;
    output logic [7:0] value;
    value=io_update_bits_spec_info_folded_hist_hist_11_folded_hist;
  endfunction

  function void set_io_update_bits_spec_info_folded_hist_hist_11_folded_hist;
    input logic [7:0] value;
    io_update_bits_spec_info_folded_hist_hist_11_folded_hist=value;
  endfunction

  function void get_io_update_bits_spec_info_folded_hist_hist_9_folded_hist;
    output logic [6:0] value;
    value=io_update_bits_spec_info_folded_hist_hist_9_folded_hist;
  endfunction

  function void set_io_update_bits_spec_info_folded_hist_hist_9_folded_hist;
    input logic [6:0] value;
    io_update_bits_spec_info_folded_hist_hist_9_folded_hist=value;
  endfunction

  function void get_io_update_bits_spec_info_folded_hist_hist_8_folded_hist;
    output logic [7:0] value;
    value=io_update_bits_spec_info_folded_hist_hist_8_folded_hist;
  endfunction

  function void set_io_update_bits_spec_info_folded_hist_hist_8_folded_hist;
    input logic [7:0] value;
    io_update_bits_spec_info_folded_hist_hist_8_folded_hist=value;
  endfunction

  function void get_io_update_bits_spec_info_folded_hist_hist_7_folded_hist;
    output logic [6:0] value;
    value=io_update_bits_spec_info_folded_hist_hist_7_folded_hist;
  endfunction

  function void set_io_update_bits_spec_info_folded_hist_hist_7_folded_hist;
    input logic [6:0] value;
    io_update_bits_spec_info_folded_hist_hist_7_folded_hist=value;
  endfunction

  function void get_io_update_bits_spec_info_folded_hist_hist_5_folded_hist;
    output logic [6:0] value;
    value=io_update_bits_spec_info_folded_hist_hist_5_folded_hist;
  endfunction

  function void set_io_update_bits_spec_info_folded_hist_hist_5_folded_hist;
    input logic [6:0] value;
    io_update_bits_spec_info_folded_hist_hist_5_folded_hist=value;
  endfunction

  function void get_io_update_bits_spec_info_folded_hist_hist_4_folded_hist;
    output logic [7:0] value;
    value=io_update_bits_spec_info_folded_hist_hist_4_folded_hist;
  endfunction

  function void set_io_update_bits_spec_info_folded_hist_hist_4_folded_hist;
    input logic [7:0] value;
    io_update_bits_spec_info_folded_hist_hist_4_folded_hist=value;
  endfunction

  function void get_io_update_bits_spec_info_folded_hist_hist_3_folded_hist;
    output logic [7:0] value;
    value=io_update_bits_spec_info_folded_hist_hist_3_folded_hist;
  endfunction

  function void set_io_update_bits_spec_info_folded_hist_hist_3_folded_hist;
    input logic [7:0] value;
    io_update_bits_spec_info_folded_hist_hist_3_folded_hist=value;
  endfunction

  function void get_io_update_bits_spec_info_folded_hist_hist_2_folded_hist;
    output logic [7:0] value;
    value=io_update_bits_spec_info_folded_hist_hist_2_folded_hist;
  endfunction

  function void set_io_update_bits_spec_info_folded_hist_hist_2_folded_hist;
    input logic [7:0] value;
    io_update_bits_spec_info_folded_hist_hist_2_folded_hist=value;
  endfunction

  function void get_io_update_bits_spec_info_folded_hist_hist_1_folded_hist;
    output logic [10:0] value;
    value=io_update_bits_spec_info_folded_hist_hist_1_folded_hist;
  endfunction

  function void set_io_update_bits_spec_info_folded_hist_hist_1_folded_hist;
    input logic [10:0] value;
    io_update_bits_spec_info_folded_hist_hist_1_folded_hist=value;
  endfunction

  function void get_io_update_bits_ftb_entry_brSlots_0_valid;
    output logic  value;
    value=io_update_bits_ftb_entry_brSlots_0_valid;
  endfunction

  function void set_io_update_bits_ftb_entry_brSlots_0_valid;
    input logic  value;
    io_update_bits_ftb_entry_brSlots_0_valid=value;
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

  function void get_io_update_bits_mispred_mask_0;
    output logic  value;
    value=io_update_bits_mispred_mask_0;
  endfunction

  function void set_io_update_bits_mispred_mask_0;
    input logic  value;
    io_update_bits_mispred_mask_0=value;
  endfunction

  function void get_io_update_bits_mispred_mask_1;
    output logic  value;
    value=io_update_bits_mispred_mask_1;
  endfunction

  function void set_io_update_bits_mispred_mask_1;
    input logic  value;
    io_update_bits_mispred_mask_1=value;
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

  function void get_io_perf_2_value;
    output logic [5:0] value;
    value=io_perf_2_value;
  endfunction

  function void set_io_perf_2_value;
    input logic [5:0] value;
    io_perf_2_value=value;
  endfunction



initial begin
    $dumpfile("TageSC.fst");
    $dumpvars(0, Tage_SC_top);
 end 

endmodule
