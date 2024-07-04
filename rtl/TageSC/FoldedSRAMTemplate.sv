// Generated by CIRCT firtool-1.62.0
// Standard header to adapt well known macros for register randomization.
`ifndef RANDOMIZE
  `ifdef RANDOMIZE_MEM_INIT
    `define RANDOMIZE
  `endif // RANDOMIZE_MEM_INIT
`endif // not def RANDOMIZE
`ifndef RANDOMIZE
  `ifdef RANDOMIZE_REG_INIT
    `define RANDOMIZE
  `endif // RANDOMIZE_REG_INIT
`endif // not def RANDOMIZE

// RANDOM may be set to an expression that produces a 32-bit random unsigned value.
`ifndef RANDOM
  `define RANDOM $random
`endif // not def RANDOM

// Users can define INIT_RANDOM as general code that gets injected into the
// initializer block for modules with registers.
`ifndef INIT_RANDOM
  `define INIT_RANDOM
`endif // not def INIT_RANDOM

// If using random initialization, you can also define RANDOMIZE_DELAY to
// customize the delay used, otherwise 0.002 is used.
`ifndef RANDOMIZE_DELAY
  `define RANDOMIZE_DELAY 0.002
`endif // not def RANDOMIZE_DELAY

// Define INIT_RANDOM_PROLOG_ for use in our modules below.
`ifndef INIT_RANDOM_PROLOG_
  `ifdef RANDOMIZE
    `ifdef VERILATOR
      `define INIT_RANDOM_PROLOG_ `INIT_RANDOM
    `else  // VERILATOR
      `define INIT_RANDOM_PROLOG_ `INIT_RANDOM #`RANDOMIZE_DELAY begin end
    `endif // VERILATOR
  `else  // RANDOMIZE
    `define INIT_RANDOM_PROLOG_
  `endif // RANDOMIZE
`endif // not def INIT_RANDOM_PROLOG_

// Include register initializers in init blocks unless synthesis is set
`ifndef SYNTHESIS
  `ifndef ENABLE_INITIAL_REG_
    `define ENABLE_INITIAL_REG_
  `endif // not def ENABLE_INITIAL_REG_
`endif // not def SYNTHESIS

// Include rmemory initializers in init blocks unless synthesis is set
`ifndef SYNTHESIS
  `ifndef ENABLE_INITIAL_MEM_
    `define ENABLE_INITIAL_MEM_
  `endif // not def ENABLE_INITIAL_MEM_
`endif // not def SYNTHESIS

module FoldedSRAMTemplate(	// @[utility/src/main/scala/utility/SRAMTemplate.scala:227:7]
  input         clock,	// @[utility/src/main/scala/utility/SRAMTemplate.scala:227:7]
  input         reset,	// @[utility/src/main/scala/utility/SRAMTemplate.scala:227:7]
  output        io_r_req_ready,	// @[utility/src/main/scala/utility/SRAMTemplate.scala:233:14]
  input         io_r_req_valid,	// @[utility/src/main/scala/utility/SRAMTemplate.scala:233:14]
  input  [10:0] io_r_req_bits_setIdx,	// @[utility/src/main/scala/utility/SRAMTemplate.scala:233:14]
  output        io_r_resp_data_0,	// @[utility/src/main/scala/utility/SRAMTemplate.scala:233:14]
  output        io_r_resp_data_1,	// @[utility/src/main/scala/utility/SRAMTemplate.scala:233:14]
  input         io_w_req_valid,	// @[utility/src/main/scala/utility/SRAMTemplate.scala:233:14]
  input  [10:0] io_w_req_bits_setIdx,	// @[utility/src/main/scala/utility/SRAMTemplate.scala:233:14]
  input         io_w_req_bits_data_0,	// @[utility/src/main/scala/utility/SRAMTemplate.scala:233:14]
  input         io_w_req_bits_data_1,	// @[utility/src/main/scala/utility/SRAMTemplate.scala:233:14]
  input  [1:0]  io_w_req_bits_waymask,	// @[utility/src/main/scala/utility/SRAMTemplate.scala:233:14]
  input         extra_reset	// @[utility/src/main/scala/utility/SRAMTemplate.scala:237:44]
);

  wire       _array_io_r_resp_data_0;	// @[utility/src/main/scala/utility/SRAMTemplate.scala:247:21]
  wire       _array_io_r_resp_data_1;	// @[utility/src/main/scala/utility/SRAMTemplate.scala:247:21]
  wire       _array_io_r_resp_data_2;	// @[utility/src/main/scala/utility/SRAMTemplate.scala:247:21]
  wire       _array_io_r_resp_data_3;	// @[utility/src/main/scala/utility/SRAMTemplate.scala:247:21]
  wire       _array_io_r_resp_data_4;	// @[utility/src/main/scala/utility/SRAMTemplate.scala:247:21]
  wire       _array_io_r_resp_data_5;	// @[utility/src/main/scala/utility/SRAMTemplate.scala:247:21]
  wire       _array_io_r_resp_data_6;	// @[utility/src/main/scala/utility/SRAMTemplate.scala:247:21]
  wire       _array_io_r_resp_data_7;	// @[utility/src/main/scala/utility/SRAMTemplate.scala:247:21]
  wire       _array_io_r_resp_data_8;	// @[utility/src/main/scala/utility/SRAMTemplate.scala:247:21]
  wire       _array_io_r_resp_data_9;	// @[utility/src/main/scala/utility/SRAMTemplate.scala:247:21]
  wire       _array_io_r_resp_data_10;	// @[utility/src/main/scala/utility/SRAMTemplate.scala:247:21]
  wire       _array_io_r_resp_data_11;	// @[utility/src/main/scala/utility/SRAMTemplate.scala:247:21]
  wire       _array_io_r_resp_data_12;	// @[utility/src/main/scala/utility/SRAMTemplate.scala:247:21]
  wire       _array_io_r_resp_data_13;	// @[utility/src/main/scala/utility/SRAMTemplate.scala:247:21]
  wire       _array_io_r_resp_data_14;	// @[utility/src/main/scala/utility/SRAMTemplate.scala:247:21]
  wire       _array_io_r_resp_data_15;	// @[utility/src/main/scala/utility/SRAMTemplate.scala:247:21]
  reg  [2:0] ridx;	// @[utility/src/main/scala/utility/SRAMTemplate.scala:258:23]
  reg        holdRidx_last_r;	// @[utility/src/main/scala/utility/ClockGatedReg.scala:25:22]
  reg  [2:0] holdRidx_hold_data;	// @[utility/src/main/scala/utility/Hold.scala:24:82]
  wire [2:0] holdRidx = holdRidx_last_r ? ridx : holdRidx_hold_data;	// @[utility/src/main/scala/utility/ClockGatedReg.scala:25:22, utility/src/main/scala/utility/Hold.scala:24:82, :25:8, utility/src/main/scala/utility/SRAMTemplate.scala:258:23]
  reg        holdRidx_last_r_1;	// @[utility/src/main/scala/utility/ClockGatedReg.scala:25:22]
  reg  [2:0] holdRidx_hold_data_1;	// @[utility/src/main/scala/utility/Hold.scala:24:82]
  wire [2:0] holdRidx_1 = holdRidx_last_r_1 ? ridx : holdRidx_hold_data_1;	// @[utility/src/main/scala/utility/ClockGatedReg.scala:25:22, utility/src/main/scala/utility/Hold.scala:24:82, :25:8, utility/src/main/scala/utility/SRAMTemplate.scala:258:23]
  wire       _wmask_T_3 = io_w_req_bits_setIdx[2:0] == 3'h0;	// @[utility/src/main/scala/utility/SRAMTemplate.scala:275:54, :279:69]
  wire       _wmask_T_9 = io_w_req_bits_setIdx[2:0] == 3'h1;	// @[utility/src/main/scala/utility/SRAMTemplate.scala:275:54, :279:69]
  wire       _wmask_T_15 = io_w_req_bits_setIdx[2:0] == 3'h2;	// @[utility/src/main/scala/utility/SRAMTemplate.scala:275:54, :279:69]
  wire       _wmask_T_21 = io_w_req_bits_setIdx[2:0] == 3'h3;	// @[utility/src/main/scala/utility/SRAMTemplate.scala:275:54, :279:69]
  wire       _wmask_T_27 = io_w_req_bits_setIdx[2:0] == 3'h4;	// @[utility/src/main/scala/utility/SRAMTemplate.scala:275:54, :279:69]
  wire       _wmask_T_33 = io_w_req_bits_setIdx[2:0] == 3'h5;	// @[utility/src/main/scala/utility/SRAMTemplate.scala:275:54, :279:69]
  wire       _wmask_T_39 = io_w_req_bits_setIdx[2:0] == 3'h6;	// @[utility/src/main/scala/utility/SRAMTemplate.scala:275:54, :279:69]
  always @(posedge clock) begin	// @[utility/src/main/scala/utility/SRAMTemplate.scala:227:7]
    if (io_r_req_valid)	// @[utility/src/main/scala/utility/SRAMTemplate.scala:233:14]
      ridx <= io_r_req_bits_setIdx[2:0];	// @[utility/src/main/scala/utility/SRAMTemplate.scala:258:{23,60}]
    if (holdRidx_last_r)	// @[utility/src/main/scala/utility/ClockGatedReg.scala:25:22]
      holdRidx_hold_data <= ridx;	// @[utility/src/main/scala/utility/Hold.scala:24:82, utility/src/main/scala/utility/SRAMTemplate.scala:258:23]
    if (holdRidx_last_r_1)	// @[utility/src/main/scala/utility/ClockGatedReg.scala:25:22]
      holdRidx_hold_data_1 <= ridx;	// @[utility/src/main/scala/utility/Hold.scala:24:82, utility/src/main/scala/utility/SRAMTemplate.scala:258:23]
  end // always @(posedge)
  always @(posedge clock or posedge reset) begin	// @[utility/src/main/scala/utility/SRAMTemplate.scala:227:7]
    if (reset) begin	// @[utility/src/main/scala/utility/SRAMTemplate.scala:227:7]
      holdRidx_last_r <= 1'h0;	// @[utility/src/main/scala/utility/ClockGatedReg.scala:25:22, utility/src/main/scala/utility/SRAMTemplate.scala:227:7]
      holdRidx_last_r_1 <= 1'h0;	// @[utility/src/main/scala/utility/ClockGatedReg.scala:25:22, utility/src/main/scala/utility/SRAMTemplate.scala:227:7]
    end
    else begin	// @[utility/src/main/scala/utility/SRAMTemplate.scala:227:7]
      if (io_r_req_valid | holdRidx_last_r)	// @[utility/src/main/scala/utility/ClockGatedReg.scala:25:{22,40}]
        holdRidx_last_r <= io_r_req_valid;	// @[utility/src/main/scala/utility/ClockGatedReg.scala:25:22]
      if (io_r_req_valid | holdRidx_last_r_1)	// @[utility/src/main/scala/utility/ClockGatedReg.scala:25:{22,40}]
        holdRidx_last_r_1 <= io_r_req_valid;	// @[utility/src/main/scala/utility/ClockGatedReg.scala:25:22]
    end
  end // always @(posedge, posedge)
  `ifdef ENABLE_INITIAL_REG_	// @[utility/src/main/scala/utility/SRAMTemplate.scala:227:7]
    `ifdef FIRRTL_BEFORE_INITIAL	// @[utility/src/main/scala/utility/SRAMTemplate.scala:227:7]
      `FIRRTL_BEFORE_INITIAL	// @[utility/src/main/scala/utility/SRAMTemplate.scala:227:7]
    `endif // FIRRTL_BEFORE_INITIAL
    logic [31:0] _RANDOM[0:0];	// @[utility/src/main/scala/utility/SRAMTemplate.scala:227:7]
    initial begin	// @[utility/src/main/scala/utility/SRAMTemplate.scala:227:7]
      `ifdef INIT_RANDOM_PROLOG_	// @[utility/src/main/scala/utility/SRAMTemplate.scala:227:7]
        `INIT_RANDOM_PROLOG_	// @[utility/src/main/scala/utility/SRAMTemplate.scala:227:7]
      `endif // INIT_RANDOM_PROLOG_
      `ifdef RANDOMIZE_REG_INIT	// @[utility/src/main/scala/utility/SRAMTemplate.scala:227:7]
        _RANDOM[/*Zero width*/ 1'b0] = `RANDOM;	// @[utility/src/main/scala/utility/SRAMTemplate.scala:227:7]
        ridx = _RANDOM[/*Zero width*/ 1'b0][2:0];	// @[utility/src/main/scala/utility/SRAMTemplate.scala:227:7, :258:23]
        holdRidx_last_r = _RANDOM[/*Zero width*/ 1'b0][3];	// @[utility/src/main/scala/utility/ClockGatedReg.scala:25:22, utility/src/main/scala/utility/SRAMTemplate.scala:227:7, :258:23]
        holdRidx_hold_data = _RANDOM[/*Zero width*/ 1'b0][6:4];	// @[utility/src/main/scala/utility/Hold.scala:24:82, utility/src/main/scala/utility/SRAMTemplate.scala:227:7, :258:23]
        holdRidx_last_r_1 = _RANDOM[/*Zero width*/ 1'b0][7];	// @[utility/src/main/scala/utility/ClockGatedReg.scala:25:22, utility/src/main/scala/utility/SRAMTemplate.scala:227:7, :258:23]
        holdRidx_hold_data_1 = _RANDOM[/*Zero width*/ 1'b0][10:8];	// @[utility/src/main/scala/utility/Hold.scala:24:82, utility/src/main/scala/utility/SRAMTemplate.scala:227:7, :258:23]
      `endif // RANDOMIZE_REG_INIT
      if (reset) begin	// @[utility/src/main/scala/utility/SRAMTemplate.scala:227:7]
        holdRidx_last_r = 1'h0;	// @[utility/src/main/scala/utility/ClockGatedReg.scala:25:22, utility/src/main/scala/utility/SRAMTemplate.scala:227:7]
        holdRidx_last_r_1 = 1'h0;	// @[utility/src/main/scala/utility/ClockGatedReg.scala:25:22, utility/src/main/scala/utility/SRAMTemplate.scala:227:7]
      end
    end // initial
    `ifdef FIRRTL_AFTER_INITIAL	// @[utility/src/main/scala/utility/SRAMTemplate.scala:227:7]
      `FIRRTL_AFTER_INITIAL	// @[utility/src/main/scala/utility/SRAMTemplate.scala:227:7]
    `endif // FIRRTL_AFTER_INITIAL
  `endif // ENABLE_INITIAL_REG_
  SRAMTemplate_14 array (	// @[utility/src/main/scala/utility/SRAMTemplate.scala:247:21]
    .clock                 (clock),
    .reset                 (reset),
    .io_r_req_ready        (io_r_req_ready),
    .io_r_req_valid        (io_r_req_valid),
    .io_r_req_bits_setIdx  (io_r_req_bits_setIdx[10:3]),	// @[utility/src/main/scala/utility/SRAMTemplate.scala:257:36]
    .io_r_resp_data_0      (_array_io_r_resp_data_0),
    .io_r_resp_data_1      (_array_io_r_resp_data_1),
    .io_r_resp_data_2      (_array_io_r_resp_data_2),
    .io_r_resp_data_3      (_array_io_r_resp_data_3),
    .io_r_resp_data_4      (_array_io_r_resp_data_4),
    .io_r_resp_data_5      (_array_io_r_resp_data_5),
    .io_r_resp_data_6      (_array_io_r_resp_data_6),
    .io_r_resp_data_7      (_array_io_r_resp_data_7),
    .io_r_resp_data_8      (_array_io_r_resp_data_8),
    .io_r_resp_data_9      (_array_io_r_resp_data_9),
    .io_r_resp_data_10     (_array_io_r_resp_data_10),
    .io_r_resp_data_11     (_array_io_r_resp_data_11),
    .io_r_resp_data_12     (_array_io_r_resp_data_12),
    .io_r_resp_data_13     (_array_io_r_resp_data_13),
    .io_r_resp_data_14     (_array_io_r_resp_data_14),
    .io_r_resp_data_15     (_array_io_r_resp_data_15),
    .io_w_req_valid        (io_w_req_valid),
    .io_w_req_bits_setIdx  (io_w_req_bits_setIdx[10:3]),	// @[utility/src/main/scala/utility/SRAMTemplate.scala:274:36]
    .io_w_req_bits_data_0  (io_w_req_bits_data_0),
    .io_w_req_bits_data_1  (io_w_req_bits_data_1),
    .io_w_req_bits_data_2  (io_w_req_bits_data_0),
    .io_w_req_bits_data_3  (io_w_req_bits_data_1),
    .io_w_req_bits_data_4  (io_w_req_bits_data_0),
    .io_w_req_bits_data_5  (io_w_req_bits_data_1),
    .io_w_req_bits_data_6  (io_w_req_bits_data_0),
    .io_w_req_bits_data_7  (io_w_req_bits_data_1),
    .io_w_req_bits_data_8  (io_w_req_bits_data_0),
    .io_w_req_bits_data_9  (io_w_req_bits_data_1),
    .io_w_req_bits_data_10 (io_w_req_bits_data_0),
    .io_w_req_bits_data_11 (io_w_req_bits_data_1),
    .io_w_req_bits_data_12 (io_w_req_bits_data_0),
    .io_w_req_bits_data_13 (io_w_req_bits_data_1),
    .io_w_req_bits_data_14 (io_w_req_bits_data_0),
    .io_w_req_bits_data_15 (io_w_req_bits_data_1),
    .io_w_req_bits_waymask
      ({(&(io_w_req_bits_setIdx[2:0])) & io_w_req_bits_waymask[1],
        (&(io_w_req_bits_setIdx[2:0])) & io_w_req_bits_waymask[0],
        _wmask_T_39 & io_w_req_bits_waymask[1],
        _wmask_T_39 & io_w_req_bits_waymask[0],
        _wmask_T_33 & io_w_req_bits_waymask[1],
        _wmask_T_33 & io_w_req_bits_waymask[0],
        _wmask_T_27 & io_w_req_bits_waymask[1],
        _wmask_T_27 & io_w_req_bits_waymask[0],
        _wmask_T_21 & io_w_req_bits_waymask[1],
        _wmask_T_21 & io_w_req_bits_waymask[0],
        _wmask_T_15 & io_w_req_bits_waymask[1],
        _wmask_T_15 & io_w_req_bits_waymask[0],
        _wmask_T_9 & io_w_req_bits_waymask[1],
        _wmask_T_9 & io_w_req_bits_waymask[0],
        _wmask_T_3 & io_w_req_bits_waymask[1],
        _wmask_T_3 & io_w_req_bits_waymask[0]}),	// @[utility/src/main/scala/utility/SRAMTemplate.scala:275:54, :279:{69,82,110,122}]
    .extra_reset           (extra_reset)
  );
  assign io_r_resp_data_0 =
    holdRidx == 3'h0 & _array_io_r_resp_data_0 | holdRidx == 3'h1
    & _array_io_r_resp_data_2 | holdRidx == 3'h2 & _array_io_r_resp_data_4
    | holdRidx == 3'h3 & _array_io_r_resp_data_6 | holdRidx == 3'h4
    & _array_io_r_resp_data_8 | holdRidx == 3'h5 & _array_io_r_resp_data_10
    | holdRidx == 3'h6 & _array_io_r_resp_data_12 | (&holdRidx)
    & _array_io_r_resp_data_14;	// @[src/main/scala/chisel3/util/Mux.scala:30:73, :32:36, utility/src/main/scala/utility/Hold.scala:25:8, utility/src/main/scala/utility/SRAMTemplate.scala:227:7, :247:21, :279:69]
  assign io_r_resp_data_1 =
    holdRidx_1 == 3'h0 & _array_io_r_resp_data_1 | holdRidx_1 == 3'h1
    & _array_io_r_resp_data_3 | holdRidx_1 == 3'h2 & _array_io_r_resp_data_5
    | holdRidx_1 == 3'h3 & _array_io_r_resp_data_7 | holdRidx_1 == 3'h4
    & _array_io_r_resp_data_9 | holdRidx_1 == 3'h5 & _array_io_r_resp_data_11
    | holdRidx_1 == 3'h6 & _array_io_r_resp_data_13 | (&holdRidx_1)
    & _array_io_r_resp_data_15;	// @[src/main/scala/chisel3/util/Mux.scala:30:73, :32:36, utility/src/main/scala/utility/Hold.scala:25:8, utility/src/main/scala/utility/SRAMTemplate.scala:227:7, :247:21, :279:69]
endmodule

