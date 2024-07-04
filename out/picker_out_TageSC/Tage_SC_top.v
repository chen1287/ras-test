module Tage_SC_top;

  wire  clock;
  wire  reset;
  wire [35:0] io_reset_vector;
  wire [40:0] io_in_bits_s0_pc_0;
  wire [40:0] io_in_bits_s0_pc_1;
  wire [40:0] io_in_bits_s0_pc_3;
  wire [10:0] io_in_bits_folded_hist_1_hist_17_folded_hist;
  wire [10:0] io_in_bits_folded_hist_1_hist_16_folded_hist;
  wire [6:0] io_in_bits_folded_hist_1_hist_15_folded_hist;
  wire [7:0] io_in_bits_folded_hist_1_hist_14_folded_hist;
  wire [6:0] io_in_bits_folded_hist_1_hist_9_folded_hist;
  wire [7:0] io_in_bits_folded_hist_1_hist_8_folded_hist;
  wire [6:0] io_in_bits_folded_hist_1_hist_7_folded_hist;
  wire [6:0] io_in_bits_folded_hist_1_hist_5_folded_hist;
  wire [7:0] io_in_bits_folded_hist_1_hist_4_folded_hist;
  wire [7:0] io_in_bits_folded_hist_1_hist_3_folded_hist;
  wire [10:0] io_in_bits_folded_hist_1_hist_1_folded_hist;
  wire [3:0] io_in_bits_folded_hist_3_hist_12_folded_hist;
  wire [7:0] io_in_bits_folded_hist_3_hist_11_folded_hist;
  wire [7:0] io_in_bits_folded_hist_3_hist_2_folded_hist;
  wire  io_out_s2_full_pred_0_br_taken_mask_0;
  wire  io_out_s2_full_pred_0_br_taken_mask_1;
  wire  io_out_s2_full_pred_1_br_taken_mask_0;
  wire  io_out_s2_full_pred_1_br_taken_mask_1;
  wire  io_out_s2_full_pred_2_br_taken_mask_0;
  wire  io_out_s2_full_pred_2_br_taken_mask_1;
  wire  io_out_s2_full_pred_3_br_taken_mask_0;
  wire  io_out_s2_full_pred_3_br_taken_mask_1;
  wire  io_out_s3_full_pred_0_br_taken_mask_0;
  wire  io_out_s3_full_pred_0_br_taken_mask_1;
  wire  io_out_s3_full_pred_1_br_taken_mask_0;
  wire  io_out_s3_full_pred_1_br_taken_mask_1;
  wire  io_out_s3_full_pred_2_br_taken_mask_0;
  wire  io_out_s3_full_pred_2_br_taken_mask_1;
  wire  io_out_s3_full_pred_3_br_taken_mask_0;
  wire  io_out_s3_full_pred_3_br_taken_mask_1;
  wire [222:0] io_out_last_stage_meta;
  wire  io_ctrl_tage_enable;
  wire  io_ctrl_sc_enable;
  wire  io_s0_fire_0;
  wire  io_s0_fire_1;
  wire  io_s0_fire_3;
  wire  io_s1_fire_0;
  wire  io_s1_fire_1;
  wire  io_s1_fire_2;
  wire  io_s1_fire_3;
  wire  io_s2_fire_0;
  wire  io_s2_fire_1;
  wire  io_s2_fire_2;
  wire  io_s2_fire_3;
  wire  io_s1_ready;
  wire  io_update_valid;
  wire [40:0] io_update_bits_pc;
  wire [10:0] io_update_bits_spec_info_folded_hist_hist_17_folded_hist;
  wire [10:0] io_update_bits_spec_info_folded_hist_hist_16_folded_hist;
  wire [6:0] io_update_bits_spec_info_folded_hist_hist_15_folded_hist;
  wire [7:0] io_update_bits_spec_info_folded_hist_hist_14_folded_hist;
  wire [3:0] io_update_bits_spec_info_folded_hist_hist_12_folded_hist;
  wire [7:0] io_update_bits_spec_info_folded_hist_hist_11_folded_hist;
  wire [6:0] io_update_bits_spec_info_folded_hist_hist_9_folded_hist;
  wire [7:0] io_update_bits_spec_info_folded_hist_hist_8_folded_hist;
  wire [6:0] io_update_bits_spec_info_folded_hist_hist_7_folded_hist;
  wire [6:0] io_update_bits_spec_info_folded_hist_hist_5_folded_hist;
  wire [7:0] io_update_bits_spec_info_folded_hist_hist_4_folded_hist;
  wire [7:0] io_update_bits_spec_info_folded_hist_hist_3_folded_hist;
  wire [7:0] io_update_bits_spec_info_folded_hist_hist_2_folded_hist;
  wire [10:0] io_update_bits_spec_info_folded_hist_hist_1_folded_hist;
  wire  io_update_bits_ftb_entry_brSlots_0_valid;
  wire  io_update_bits_ftb_entry_tailSlot_sharing;
  wire  io_update_bits_ftb_entry_tailSlot_valid;
  wire  io_update_bits_ftb_entry_always_taken_0;
  wire  io_update_bits_ftb_entry_always_taken_1;
  wire  io_update_bits_br_taken_mask_0;
  wire  io_update_bits_br_taken_mask_1;
  wire  io_update_bits_mispred_mask_0;
  wire  io_update_bits_mispred_mask_1;
  wire [222:0] io_update_bits_meta;
  wire [5:0] io_perf_0_value;
  wire [5:0] io_perf_1_value;
  wire [5:0] io_perf_2_value;


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
endmodule
