module DelayN_1(
  input         clock,
  input  [35:0] io_in,
  output [35:0] io_out
);

  reg [35:0] REG;
  reg [35:0] REG_1;
  reg [35:0] REG_2;
  reg [35:0] REG_3;
  reg [35:0] REG_4;
  always @(posedge clock) begin
    REG <= io_in;
    REG_1 <= REG;
    REG_2 <= REG_1;
    REG_3 <= REG_2;
    REG_4 <= REG_3;
  end // always @(posedge)
  `ifdef ENABLE_INITIAL_REG_
    `ifdef FIRRTL_BEFORE_INITIAL
      `FIRRTL_BEFORE_INITIAL
    `endif // FIRRTL_BEFORE_INITIAL
    logic [31:0] _RANDOM[0:5];
    initial begin
      `ifdef INIT_RANDOM_PROLOG_
        `INIT_RANDOM_PROLOG_
      `endif // INIT_RANDOM_PROLOG_
      `ifdef RANDOMIZE_REG_INIT
        for (logic [2:0] i = 3'h0; i < 3'h6; i += 3'h1) begin
          _RANDOM[i] = `RANDOM;
        end
        REG = {_RANDOM[3'h0], _RANDOM[3'h1][3:0]};
        REG_1 = {_RANDOM[3'h1][31:4], _RANDOM[3'h2][7:0]};
        REG_2 = {_RANDOM[3'h2][31:8], _RANDOM[3'h3][11:0]};
        REG_3 = {_RANDOM[3'h3][31:12], _RANDOM[3'h4][15:0]};
        REG_4 = {_RANDOM[3'h4][31:16], _RANDOM[3'h5][19:0]};
      `endif // RANDOMIZE_REG_INIT
    end // initial
    `ifdef FIRRTL_AFTER_INITIAL
      `FIRRTL_AFTER_INITIAL
    `endif // FIRRTL_AFTER_INITIAL
  `endif // ENABLE_INITIAL_REG_
  assign io_out = REG_4;
endmodule

