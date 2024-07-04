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

module FoldedSRAMTemplate_25(	// @[utility/src/main/scala/utility/SRAMTemplate.scala:227:7]
  input         clock,	// @[utility/src/main/scala/utility/SRAMTemplate.scala:227:7]
  input         reset,	// @[utility/src/main/scala/utility/SRAMTemplate.scala:227:7]
  input         io_r_req_valid,	// @[utility/src/main/scala/utility/SRAMTemplate.scala:233:14]
  input  [7:0]  io_r_req_bits_setIdx,	// @[utility/src/main/scala/utility/SRAMTemplate.scala:233:14]
  output        io_r_resp_data_0_valid,	// @[utility/src/main/scala/utility/SRAMTemplate.scala:233:14]
  output [8:0]  io_r_resp_data_0_tag,	// @[utility/src/main/scala/utility/SRAMTemplate.scala:233:14]
  output [1:0]  io_r_resp_data_0_ctr,	// @[utility/src/main/scala/utility/SRAMTemplate.scala:233:14]
  output [40:0] io_r_resp_data_0_target,	// @[utility/src/main/scala/utility/SRAMTemplate.scala:233:14]
  input         io_w_req_valid,	// @[utility/src/main/scala/utility/SRAMTemplate.scala:233:14]
  input  [7:0]  io_w_req_bits_setIdx,	// @[utility/src/main/scala/utility/SRAMTemplate.scala:233:14]
  input  [8:0]  io_w_req_bits_data_0_tag,	// @[utility/src/main/scala/utility/SRAMTemplate.scala:233:14]
  input  [1:0]  io_w_req_bits_data_0_ctr,	// @[utility/src/main/scala/utility/SRAMTemplate.scala:233:14]
  input  [40:0] io_w_req_bits_data_0_target	// @[utility/src/main/scala/utility/SRAMTemplate.scala:233:14]
);

  wire        _array_io_r_resp_data_0_valid;	// @[utility/src/main/scala/utility/SRAMTemplate.scala:247:21]
  wire [8:0]  _array_io_r_resp_data_0_tag;	// @[utility/src/main/scala/utility/SRAMTemplate.scala:247:21]
  wire [1:0]  _array_io_r_resp_data_0_ctr;	// @[utility/src/main/scala/utility/SRAMTemplate.scala:247:21]
  wire [40:0] _array_io_r_resp_data_0_target;	// @[utility/src/main/scala/utility/SRAMTemplate.scala:247:21]
  wire        _array_io_r_resp_data_1_valid;	// @[utility/src/main/scala/utility/SRAMTemplate.scala:247:21]
  wire [8:0]  _array_io_r_resp_data_1_tag;	// @[utility/src/main/scala/utility/SRAMTemplate.scala:247:21]
  wire [1:0]  _array_io_r_resp_data_1_ctr;	// @[utility/src/main/scala/utility/SRAMTemplate.scala:247:21]
  wire [40:0] _array_io_r_resp_data_1_target;	// @[utility/src/main/scala/utility/SRAMTemplate.scala:247:21]
  reg         ridx;	// @[utility/src/main/scala/utility/SRAMTemplate.scala:258:23]
  reg         holdRidx_last_r;	// @[utility/src/main/scala/utility/ClockGatedReg.scala:25:22]
  reg         holdRidx_hold_data;	// @[utility/src/main/scala/utility/Hold.scala:24:82]
  wire        holdRidx = holdRidx_last_r ? ridx : holdRidx_hold_data;	// @[utility/src/main/scala/utility/ClockGatedReg.scala:25:22, utility/src/main/scala/utility/Hold.scala:24:82, :25:8, utility/src/main/scala/utility/SRAMTemplate.scala:258:23]
  always @(posedge clock) begin	// @[utility/src/main/scala/utility/SRAMTemplate.scala:227:7]
    if (io_r_req_valid)	// @[utility/src/main/scala/utility/SRAMTemplate.scala:233:14]
      ridx <= io_r_req_bits_setIdx[0];	// @[utility/src/main/scala/utility/SRAMTemplate.scala:258:{23,60}]
    if (holdRidx_last_r)	// @[utility/src/main/scala/utility/ClockGatedReg.scala:25:22]
      holdRidx_hold_data <= ridx;	// @[utility/src/main/scala/utility/Hold.scala:24:82, utility/src/main/scala/utility/SRAMTemplate.scala:258:23]
  end // always @(posedge)
  always @(posedge clock or posedge reset) begin	// @[utility/src/main/scala/utility/SRAMTemplate.scala:227:7]
    if (reset)	// @[utility/src/main/scala/utility/SRAMTemplate.scala:227:7]
      holdRidx_last_r <= 1'h0;	// @[utility/src/main/scala/utility/ClockGatedReg.scala:25:22, utility/src/main/scala/utility/SRAMTemplate.scala:227:7]
    else if (io_r_req_valid | holdRidx_last_r)	// @[utility/src/main/scala/utility/ClockGatedReg.scala:25:{22,40}]
      holdRidx_last_r <= io_r_req_valid;	// @[utility/src/main/scala/utility/ClockGatedReg.scala:25:22]
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
        ridx = _RANDOM[/*Zero width*/ 1'b0][0];	// @[utility/src/main/scala/utility/SRAMTemplate.scala:227:7, :258:23]
        holdRidx_last_r = _RANDOM[/*Zero width*/ 1'b0][1];	// @[utility/src/main/scala/utility/ClockGatedReg.scala:25:22, utility/src/main/scala/utility/SRAMTemplate.scala:227:7, :258:23]
        holdRidx_hold_data = _RANDOM[/*Zero width*/ 1'b0][2];	// @[utility/src/main/scala/utility/Hold.scala:24:82, utility/src/main/scala/utility/SRAMTemplate.scala:227:7, :258:23]
      `endif // RANDOMIZE_REG_INIT
      if (reset)	// @[utility/src/main/scala/utility/SRAMTemplate.scala:227:7]
        holdRidx_last_r = 1'h0;	// @[utility/src/main/scala/utility/ClockGatedReg.scala:25:22, utility/src/main/scala/utility/SRAMTemplate.scala:227:7]
    end // initial
    `ifdef FIRRTL_AFTER_INITIAL	// @[utility/src/main/scala/utility/SRAMTemplate.scala:227:7]
      `FIRRTL_AFTER_INITIAL	// @[utility/src/main/scala/utility/SRAMTemplate.scala:227:7]
    `endif // FIRRTL_AFTER_INITIAL
  `endif // ENABLE_INITIAL_REG_
  SRAMTemplate_43 array (	// @[utility/src/main/scala/utility/SRAMTemplate.scala:247:21]
    .clock                       (clock),
    .reset                       (reset),
    .io_r_req_valid              (io_r_req_valid),
    .io_r_req_bits_setIdx        (io_r_req_bits_setIdx[7:1]),	// @[utility/src/main/scala/utility/SRAMTemplate.scala:257:36]
    .io_r_resp_data_0_valid      (_array_io_r_resp_data_0_valid),
    .io_r_resp_data_0_tag        (_array_io_r_resp_data_0_tag),
    .io_r_resp_data_0_ctr        (_array_io_r_resp_data_0_ctr),
    .io_r_resp_data_0_target     (_array_io_r_resp_data_0_target),
    .io_r_resp_data_1_valid      (_array_io_r_resp_data_1_valid),
    .io_r_resp_data_1_tag        (_array_io_r_resp_data_1_tag),
    .io_r_resp_data_1_ctr        (_array_io_r_resp_data_1_ctr),
    .io_r_resp_data_1_target     (_array_io_r_resp_data_1_target),
    .io_w_req_valid              (io_w_req_valid),
    .io_w_req_bits_setIdx        (io_w_req_bits_setIdx[7:1]),	// @[utility/src/main/scala/utility/SRAMTemplate.scala:274:36]
    .io_w_req_bits_data_0_tag    (io_w_req_bits_data_0_tag),
    .io_w_req_bits_data_0_ctr    (io_w_req_bits_data_0_ctr),
    .io_w_req_bits_data_0_target (io_w_req_bits_data_0_target),
    .io_w_req_bits_data_1_tag    (io_w_req_bits_data_0_tag),
    .io_w_req_bits_data_1_ctr    (io_w_req_bits_data_0_ctr),
    .io_w_req_bits_data_1_target (io_w_req_bits_data_0_target),
    .io_w_req_bits_waymask       (2'h1 << io_w_req_bits_setIdx[0])	// @[src/main/scala/chisel3/util/OneHot.scala:58:35, :65:12, utility/src/main/scala/utility/SRAMTemplate.scala:275:54]
  );
  assign io_r_resp_data_0_valid =
    ~holdRidx & _array_io_r_resp_data_0_valid | holdRidx & _array_io_r_resp_data_1_valid;	// @[src/main/scala/chisel3/util/Mux.scala:30:73, :32:36, utility/src/main/scala/utility/Hold.scala:25:8, utility/src/main/scala/utility/SRAMTemplate.scala:227:7, :247:21]
  assign io_r_resp_data_0_tag =
    (holdRidx ? 9'h0 : _array_io_r_resp_data_0_tag)
    | (holdRidx ? _array_io_r_resp_data_1_tag : 9'h0);	// @[src/main/scala/chisel3/util/Mux.scala:30:73, utility/src/main/scala/utility/Hold.scala:25:8, utility/src/main/scala/utility/SRAMTemplate.scala:227:7, :247:21]
  assign io_r_resp_data_0_ctr =
    (holdRidx ? 2'h0 : _array_io_r_resp_data_0_ctr)
    | (holdRidx ? _array_io_r_resp_data_1_ctr : 2'h0);	// @[src/main/scala/chisel3/util/Mux.scala:30:73, utility/src/main/scala/utility/Hold.scala:25:8, utility/src/main/scala/utility/SRAMTemplate.scala:227:7, :247:21]
  assign io_r_resp_data_0_target =
    (holdRidx ? 41'h0 : _array_io_r_resp_data_0_target)
    | (holdRidx ? _array_io_r_resp_data_1_target : 41'h0);	// @[src/main/scala/chisel3/util/Mux.scala:30:73, utility/src/main/scala/utility/Hold.scala:25:8, utility/src/main/scala/utility/SRAMTemplate.scala:227:7, :247:21]
endmodule
