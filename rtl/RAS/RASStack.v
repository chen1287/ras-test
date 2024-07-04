module RASStack(
  input         clock,
  input         reset,
  input         io_spec_push_valid,
  input         io_spec_pop_valid,
  input  [40:0] io_spec_push_addr,
  input         io_s2_fire,
  input         io_s3_fire,
  input         io_s3_cancel,
  input  [3:0]  io_s3_meta_ssp,
  input  [2:0]  io_s3_meta_sctr,
  input         io_s3_meta_TOSW_flag,
  input  [4:0]  io_s3_meta_TOSW_value,
  input         io_s3_meta_TOSR_flag,
  input  [4:0]  io_s3_meta_TOSR_value,
  input         io_s3_meta_NOS_flag,
  input  [4:0]  io_s3_meta_NOS_value,
  input         io_s3_missed_pop,
  input         io_s3_missed_push,
  input  [40:0] io_s3_pushAddr,
  output [40:0] io_spec_pop_addr,
  input         io_commit_push_valid,
  input         io_commit_pop_valid,
  input         io_commit_meta_TOSW_flag,
  input  [4:0]  io_commit_meta_TOSW_value,
  input  [3:0]  io_commit_meta_ssp,
  input         io_redirect_valid,
  input         io_redirect_isCall,
  input         io_redirect_isRet,
  input  [3:0]  io_redirect_meta_ssp,
  input  [2:0]  io_redirect_meta_sctr,
  input         io_redirect_meta_TOSW_flag,
  input  [4:0]  io_redirect_meta_TOSW_value,
  input         io_redirect_meta_TOSR_flag,
  input  [4:0]  io_redirect_meta_TOSR_value,
  input         io_redirect_meta_NOS_flag,
  input  [4:0]  io_redirect_meta_NOS_value,
  input  [40:0] io_redirect_callAddr,
  output [3:0]  io_ssp,
  output [2:0]  io_sctr,
  output        io_TOSR_flag,
  output [4:0]  io_TOSR_value,
  output        io_TOSW_flag,
  output [4:0]  io_TOSW_value,
  output        io_NOS_flag,
  output [4:0]  io_NOS_value
);

  reg  [40:0]       commit_stack_0_retAddr;
  reg  [7:0]        commit_stack_0_ctr;
  reg  [40:0]       commit_stack_1_retAddr;
  reg  [7:0]        commit_stack_1_ctr;
  reg  [40:0]       commit_stack_2_retAddr;
  reg  [7:0]        commit_stack_2_ctr;
  reg  [40:0]       commit_stack_3_retAddr;
  reg  [7:0]        commit_stack_3_ctr;
  reg  [40:0]       commit_stack_4_retAddr;
  reg  [7:0]        commit_stack_4_ctr;
  reg  [40:0]       commit_stack_5_retAddr;
  reg  [7:0]        commit_stack_5_ctr;
  reg  [40:0]       commit_stack_6_retAddr;
  reg  [7:0]        commit_stack_6_ctr;
  reg  [40:0]       commit_stack_7_retAddr;
  reg  [7:0]        commit_stack_7_ctr;
  reg  [40:0]       commit_stack_8_retAddr;
  reg  [7:0]        commit_stack_8_ctr;
  reg  [40:0]       commit_stack_9_retAddr;
  reg  [7:0]        commit_stack_9_ctr;
  reg  [40:0]       commit_stack_10_retAddr;
  reg  [7:0]        commit_stack_10_ctr;
  reg  [40:0]       commit_stack_11_retAddr;
  reg  [7:0]        commit_stack_11_ctr;
  reg  [40:0]       commit_stack_12_retAddr;
  reg  [7:0]        commit_stack_12_ctr;
  reg  [40:0]       commit_stack_13_retAddr;
  reg  [7:0]        commit_stack_13_ctr;
  reg  [40:0]       commit_stack_14_retAddr;
  reg  [7:0]        commit_stack_14_ctr;
  reg  [40:0]       commit_stack_15_retAddr;
  reg  [7:0]        commit_stack_15_ctr;
  reg  [40:0]       spec_queue_0_retAddr;
  reg  [7:0]        spec_queue_0_ctr;
  reg  [40:0]       spec_queue_1_retAddr;
  reg  [7:0]        spec_queue_1_ctr;
  reg  [40:0]       spec_queue_2_retAddr;
  reg  [7:0]        spec_queue_2_ctr;
  reg  [40:0]       spec_queue_3_retAddr;
  reg  [7:0]        spec_queue_3_ctr;
  reg  [40:0]       spec_queue_4_retAddr;
  reg  [7:0]        spec_queue_4_ctr;
  reg  [40:0]       spec_queue_5_retAddr;
  reg  [7:0]        spec_queue_5_ctr;
  reg  [40:0]       spec_queue_6_retAddr;
  reg  [7:0]        spec_queue_6_ctr;
  reg  [40:0]       spec_queue_7_retAddr;
  reg  [7:0]        spec_queue_7_ctr;
  reg  [40:0]       spec_queue_8_retAddr;
  reg  [7:0]        spec_queue_8_ctr;
  reg  [40:0]       spec_queue_9_retAddr;
  reg  [7:0]        spec_queue_9_ctr;
  reg  [40:0]       spec_queue_10_retAddr;
  reg  [7:0]        spec_queue_10_ctr;
  reg  [40:0]       spec_queue_11_retAddr;
  reg  [7:0]        spec_queue_11_ctr;
  reg  [40:0]       spec_queue_12_retAddr;
  reg  [7:0]        spec_queue_12_ctr;
  reg  [40:0]       spec_queue_13_retAddr;
  reg  [7:0]        spec_queue_13_ctr;
  reg  [40:0]       spec_queue_14_retAddr;
  reg  [7:0]        spec_queue_14_ctr;
  reg  [40:0]       spec_queue_15_retAddr;
  reg  [7:0]        spec_queue_15_ctr;
  reg  [40:0]       spec_queue_16_retAddr;
  reg  [7:0]        spec_queue_16_ctr;
  reg  [40:0]       spec_queue_17_retAddr;
  reg  [7:0]        spec_queue_17_ctr;
  reg  [40:0]       spec_queue_18_retAddr;
  reg  [7:0]        spec_queue_18_ctr;
  reg  [40:0]       spec_queue_19_retAddr;
  reg  [7:0]        spec_queue_19_ctr;
  reg  [40:0]       spec_queue_20_retAddr;
  reg  [7:0]        spec_queue_20_ctr;
  reg  [40:0]       spec_queue_21_retAddr;
  reg  [7:0]        spec_queue_21_ctr;
  reg  [40:0]       spec_queue_22_retAddr;
  reg  [7:0]        spec_queue_22_ctr;
  reg  [40:0]       spec_queue_23_retAddr;
  reg  [7:0]        spec_queue_23_ctr;
  reg  [40:0]       spec_queue_24_retAddr;
  reg  [7:0]        spec_queue_24_ctr;
  reg  [40:0]       spec_queue_25_retAddr;
  reg  [7:0]        spec_queue_25_ctr;
  reg  [40:0]       spec_queue_26_retAddr;
  reg  [7:0]        spec_queue_26_ctr;
  reg  [40:0]       spec_queue_27_retAddr;
  reg  [7:0]        spec_queue_27_ctr;
  reg  [40:0]       spec_queue_28_retAddr;
  reg  [7:0]        spec_queue_28_ctr;
  reg  [40:0]       spec_queue_29_retAddr;
  reg  [7:0]        spec_queue_29_ctr;
  reg  [40:0]       spec_queue_30_retAddr;
  reg  [7:0]        spec_queue_30_ctr;
  reg  [40:0]       spec_queue_31_retAddr;
  reg  [7:0]        spec_queue_31_ctr;
  reg               spec_nos_0_flag;
  reg  [4:0]        spec_nos_0_value;
  reg               spec_nos_1_flag;
  reg  [4:0]        spec_nos_1_value;
  reg               spec_nos_2_flag;
  reg  [4:0]        spec_nos_2_value;
  reg               spec_nos_3_flag;
  reg  [4:0]        spec_nos_3_value;
  reg               spec_nos_4_flag;
  reg  [4:0]        spec_nos_4_value;
  reg               spec_nos_5_flag;
  reg  [4:0]        spec_nos_5_value;
  reg               spec_nos_6_flag;
  reg  [4:0]        spec_nos_6_value;
  reg               spec_nos_7_flag;
  reg  [4:0]        spec_nos_7_value;
  reg               spec_nos_8_flag;
  reg  [4:0]        spec_nos_8_value;
  reg               spec_nos_9_flag;
  reg  [4:0]        spec_nos_9_value;
  reg               spec_nos_10_flag;
  reg  [4:0]        spec_nos_10_value;
  reg               spec_nos_11_flag;
  reg  [4:0]        spec_nos_11_value;
  reg               spec_nos_12_flag;
  reg  [4:0]        spec_nos_12_value;
  reg               spec_nos_13_flag;
  reg  [4:0]        spec_nos_13_value;
  reg               spec_nos_14_flag;
  reg  [4:0]        spec_nos_14_value;
  reg               spec_nos_15_flag;
  reg  [4:0]        spec_nos_15_value;
  reg               spec_nos_16_flag;
  reg  [4:0]        spec_nos_16_value;
  reg               spec_nos_17_flag;
  reg  [4:0]        spec_nos_17_value;
  reg               spec_nos_18_flag;
  reg  [4:0]        spec_nos_18_value;
  reg               spec_nos_19_flag;
  reg  [4:0]        spec_nos_19_value;
  reg               spec_nos_20_flag;
  reg  [4:0]        spec_nos_20_value;
  reg               spec_nos_21_flag;
  reg  [4:0]        spec_nos_21_value;
  reg               spec_nos_22_flag;
  reg  [4:0]        spec_nos_22_value;
  reg               spec_nos_23_flag;
  reg  [4:0]        spec_nos_23_value;
  reg               spec_nos_24_flag;
  reg  [4:0]        spec_nos_24_value;
  reg               spec_nos_25_flag;
  reg  [4:0]        spec_nos_25_value;
  reg               spec_nos_26_flag;
  reg  [4:0]        spec_nos_26_value;
  reg               spec_nos_27_flag;
  reg  [4:0]        spec_nos_27_value;
  reg               spec_nos_28_flag;
  reg  [4:0]        spec_nos_28_value;
  reg               spec_nos_29_flag;
  reg  [4:0]        spec_nos_29_value;
  reg               spec_nos_30_flag;
  reg  [4:0]        spec_nos_30_value;
  reg               spec_nos_31_flag;
  reg  [4:0]        spec_nos_31_value;
  reg  [3:0]        nsp;
  reg  [3:0]        ssp;
  reg  [2:0]        sctr;
  reg               TOSR_flag;
  reg  [4:0]        TOSR_value;
  reg               TOSW_flag;
  reg  [4:0]        TOSW_value;
  reg               BOS_flag;
  reg  [4:0]        BOS_value;
  reg               spec_overflowed;
  reg  [40:0]       writeBypassEntry_retAddr;
  reg  [7:0]        writeBypassEntry_ctr;
  reg               writeBypassNos_flag;
  reg  [4:0]        writeBypassNos_value;
  reg               writeBypassValid;
  wire              _realPush_T_4 = io_redirect_valid & io_redirect_isCall;
  wire              _GEN = TOSR_value >= BOS_value;
  wire              topEntry_inflightValid =
    (TOSR_flag ^ BOS_flag ^ _GEN) & (TOSR_flag ^ TOSW_flag ^ TOSR_value < TOSW_value);
  wire [31:0][40:0] _GEN_0 =
    {{spec_queue_31_retAddr},
     {spec_queue_30_retAddr},
     {spec_queue_29_retAddr},
     {spec_queue_28_retAddr},
     {spec_queue_27_retAddr},
     {spec_queue_26_retAddr},
     {spec_queue_25_retAddr},
     {spec_queue_24_retAddr},
     {spec_queue_23_retAddr},
     {spec_queue_22_retAddr},
     {spec_queue_21_retAddr},
     {spec_queue_20_retAddr},
     {spec_queue_19_retAddr},
     {spec_queue_18_retAddr},
     {spec_queue_17_retAddr},
     {spec_queue_16_retAddr},
     {spec_queue_15_retAddr},
     {spec_queue_14_retAddr},
     {spec_queue_13_retAddr},
     {spec_queue_12_retAddr},
     {spec_queue_11_retAddr},
     {spec_queue_10_retAddr},
     {spec_queue_9_retAddr},
     {spec_queue_8_retAddr},
     {spec_queue_7_retAddr},
     {spec_queue_6_retAddr},
     {spec_queue_5_retAddr},
     {spec_queue_4_retAddr},
     {spec_queue_3_retAddr},
     {spec_queue_2_retAddr},
     {spec_queue_1_retAddr},
     {spec_queue_0_retAddr}};
  wire [40:0]       _GEN_1 = _GEN_0[TOSR_value];
  wire [31:0][7:0]  _GEN_2 =
    {{spec_queue_31_ctr},
     {spec_queue_30_ctr},
     {spec_queue_29_ctr},
     {spec_queue_28_ctr},
     {spec_queue_27_ctr},
     {spec_queue_26_ctr},
     {spec_queue_25_ctr},
     {spec_queue_24_ctr},
     {spec_queue_23_ctr},
     {spec_queue_22_ctr},
     {spec_queue_21_ctr},
     {spec_queue_20_ctr},
     {spec_queue_19_ctr},
     {spec_queue_18_ctr},
     {spec_queue_17_ctr},
     {spec_queue_16_ctr},
     {spec_queue_15_ctr},
     {spec_queue_14_ctr},
     {spec_queue_13_ctr},
     {spec_queue_12_ctr},
     {spec_queue_11_ctr},
     {spec_queue_10_ctr},
     {spec_queue_9_ctr},
     {spec_queue_8_ctr},
     {spec_queue_7_ctr},
     {spec_queue_6_ctr},
     {spec_queue_5_ctr},
     {spec_queue_4_ctr},
     {spec_queue_3_ctr},
     {spec_queue_2_ctr},
     {spec_queue_1_ctr},
     {spec_queue_0_ctr}};
  wire [15:0][40:0] _GEN_3 =
    {{commit_stack_15_retAddr},
     {commit_stack_14_retAddr},
     {commit_stack_13_retAddr},
     {commit_stack_12_retAddr},
     {commit_stack_11_retAddr},
     {commit_stack_10_retAddr},
     {commit_stack_9_retAddr},
     {commit_stack_8_retAddr},
     {commit_stack_7_retAddr},
     {commit_stack_6_retAddr},
     {commit_stack_5_retAddr},
     {commit_stack_4_retAddr},
     {commit_stack_3_retAddr},
     {commit_stack_2_retAddr},
     {commit_stack_1_retAddr},
     {commit_stack_0_retAddr}};
  wire [40:0]       _GEN_4 = _GEN_3[ssp];
  wire [15:0][7:0]  _GEN_5 =
    {{commit_stack_15_ctr},
     {commit_stack_14_ctr},
     {commit_stack_13_ctr},
     {commit_stack_12_ctr},
     {commit_stack_11_ctr},
     {commit_stack_10_ctr},
     {commit_stack_9_ctr},
     {commit_stack_8_ctr},
     {commit_stack_7_ctr},
     {commit_stack_6_ctr},
     {commit_stack_5_ctr},
     {commit_stack_4_ctr},
     {commit_stack_3_ctr},
     {commit_stack_2_ctr},
     {commit_stack_1_ctr},
     {commit_stack_0_ctr}};
  wire [31:0]       _GEN_6 =
    {{spec_nos_31_flag},
     {spec_nos_30_flag},
     {spec_nos_29_flag},
     {spec_nos_28_flag},
     {spec_nos_27_flag},
     {spec_nos_26_flag},
     {spec_nos_25_flag},
     {spec_nos_24_flag},
     {spec_nos_23_flag},
     {spec_nos_22_flag},
     {spec_nos_21_flag},
     {spec_nos_20_flag},
     {spec_nos_19_flag},
     {spec_nos_18_flag},
     {spec_nos_17_flag},
     {spec_nos_16_flag},
     {spec_nos_15_flag},
     {spec_nos_14_flag},
     {spec_nos_13_flag},
     {spec_nos_12_flag},
     {spec_nos_11_flag},
     {spec_nos_10_flag},
     {spec_nos_9_flag},
     {spec_nos_8_flag},
     {spec_nos_7_flag},
     {spec_nos_6_flag},
     {spec_nos_5_flag},
     {spec_nos_4_flag},
     {spec_nos_3_flag},
     {spec_nos_2_flag},
     {spec_nos_1_flag},
     {spec_nos_0_flag}};
  wire [31:0][4:0]  _GEN_7 =
    {{spec_nos_31_value},
     {spec_nos_30_value},
     {spec_nos_29_value},
     {spec_nos_28_value},
     {spec_nos_27_value},
     {spec_nos_26_value},
     {spec_nos_25_value},
     {spec_nos_24_value},
     {spec_nos_23_value},
     {spec_nos_22_value},
     {spec_nos_21_value},
     {spec_nos_20_value},
     {spec_nos_19_value},
     {spec_nos_18_value},
     {spec_nos_17_value},
     {spec_nos_16_value},
     {spec_nos_15_value},
     {spec_nos_14_value},
     {spec_nos_13_value},
     {spec_nos_12_value},
     {spec_nos_11_value},
     {spec_nos_10_value},
     {spec_nos_9_value},
     {spec_nos_8_value},
     {spec_nos_7_value},
     {spec_nos_6_value},
     {spec_nos_5_value},
     {spec_nos_4_value},
     {spec_nos_3_value},
     {spec_nos_2_value},
     {spec_nos_1_value},
     {spec_nos_0_value}};
  wire [4:0]        _GEN_8 = _GEN_7[TOSR_value];
  wire              topNos_flag =
    writeBypassValid ? writeBypassNos_flag : _GEN_6[TOSR_value];
  wire [4:0]        topNos_value = writeBypassValid ? writeBypassNos_value : _GEN_8;
  wire              differentFlag_15 = io_redirect_meta_TOSR_flag ^ BOS_flag;
  wire              compare_15 = io_redirect_meta_TOSR_value < BOS_value;
  wire              differentFlag_16 =
    io_redirect_meta_TOSR_flag ^ io_redirect_meta_TOSW_flag;
  wire              compare_16 =
    io_redirect_meta_TOSR_value < io_redirect_meta_TOSW_value;
  wire              redirectTopEntry_inflightValid =
    (differentFlag_15 ^ ~compare_15) & (differentFlag_16 ^ compare_16);
  wire [40:0]       writeEntry_retAddr =
    _realPush_T_4 ? io_redirect_callAddr : io_spec_push_addr;
  wire              _writeEntry_ctr_T_1 =
    (redirectTopEntry_inflightValid
       ? _GEN_0[io_redirect_meta_TOSR_value]
       : _GEN_3[io_redirect_meta_ssp]) == io_redirect_callAddr;
  wire [2:0]        _sctr_T_12 = 3'(io_redirect_meta_sctr + 3'h1);
  wire              _writeEntry_ctr_T_7 =
    (writeBypassValid
       ? writeBypassEntry_retAddr
       : topEntry_inflightValid ? _GEN_1 : _GEN_4) == io_spec_push_addr;
  wire [2:0]        _sctr_T = 3'(sctr + 3'h1);
  reg  [40:0]       timingTop_retAddr;
  reg  [40:0]       realWriteEntry_next_retAddr;
  reg  [7:0]        realWriteEntry_next_ctr;
  wire              _GEN_9 = io_redirect_isCall | ~io_s3_missed_push;
  wire [40:0]       realWriteEntry_retAddr =
    _GEN_9 ? realWriteEntry_next_retAddr : io_s3_pushAddr;
  reg  [4:0]        realWriteAddr_next_value;
  reg               realNos_next_flag;
  reg  [4:0]        realNos_next_value;
  reg               realPush_r;
  reg               realPush_REG;
  wire              realPush =
    io_s3_fire & (~io_s3_cancel & realPush_r | io_s3_missed_push) | realPush_REG;
  wire              _GEN_10 = _writeEntry_ctr_T_1 & io_redirect_meta_sctr != 3'h7;
  wire              _GEN_11 =
    io_redirect_isRet & (differentFlag_15 ^ ~compare_15)
    & (differentFlag_16 ^ compare_16);
  wire [3:0]        _sctr_T_16 = 4'(io_redirect_meta_ssp - 4'h1);
  wire [3:0]        _sctr_T_8 = 4'(io_s3_meta_ssp - 4'h1);
  wire              _GEN_12 = _writeEntry_ctr_T_7 & sctr != 3'h7;
  wire [3:0]        _sctr_T_4 = 4'(ssp - 4'h1);
  wire              writeBypassValidWire =
    _realPush_T_4 | ~io_redirect_valid
    & (io_s2_fire ? io_spec_push_valid : ~io_s3_fire & writeBypassValid);
  wire              differentFlag_10 = io_s3_meta_TOSR_flag ^ BOS_flag;
  wire              compare_10 = io_s3_meta_TOSR_value < BOS_value;
  wire              differentFlag_11 = io_s3_meta_TOSR_flag ^ io_s3_meta_TOSW_flag;
  wire              compare_11 = io_s3_meta_TOSR_value < io_s3_meta_TOSW_value;
  wire              s3TopEntry_inflightValid =
    (differentFlag_10 ^ ~compare_10) & (differentFlag_11 ^ compare_11);
  wire              _GEN_13 = io_redirect_meta_NOS_value >= BOS_value;
  wire              _GEN_14 = io_redirect_meta_NOS_flag ^ BOS_flag ^ _GEN_13;
  wire              _GEN_15 = topNos_value >= BOS_value;
  wire              _GEN_16 = topNos_flag ^ BOS_flag ^ _GEN_15;
  wire              _GEN_17 = io_s3_meta_NOS_value >= BOS_value;
  wire              _GEN_18 = io_s3_meta_NOS_flag ^ BOS_flag ^ _GEN_17;
  wire              _s3_missPushEntry_ctr_T =
    (s3TopEntry_inflightValid
       ? _GEN_0[io_s3_meta_TOSR_value]
       : _GEN_3[io_s3_meta_ssp]) == io_s3_pushAddr;
  wire [2:0]        _sctr_T_10 = 3'(io_s3_meta_sctr + 3'h1);
  wire [7:0]        s3_missPushEntry_ctr =
    {5'h0,
     _s3_missPushEntry_ctr_T
     & (s3TopEntry_inflightValid
          ? _GEN_2[io_s3_meta_TOSR_value]
          : _GEN_5[io_s3_meta_ssp]) < 8'h7
       ? _sctr_T_10
       : 3'h0};
  wire [4:0]        realWriteAddr_value =
    _GEN_9 ? realWriteAddr_next_value : io_s3_meta_TOSW_value;
  wire              realNos_flag = _GEN_9 ? realNos_next_flag : io_s3_meta_TOSR_flag;
  wire [4:0]        realNos_value = _GEN_9 ? realNos_next_value : io_s3_meta_TOSR_value;
  wire [5:0]        _GEN_19 = {TOSW_flag, TOSW_value};
  wire [5:0]        _GEN_20 = {BOS_flag, BOS_value};
  wire              _GEN_21 =
    io_spec_push_valid & 6'(_GEN_19 + 6'h1) == {BOS_flag, BOS_value};
  wire [5:0]        _GEN_22 = {io_s3_meta_TOSW_flag, io_s3_meta_TOSW_value};
  wire              _GEN_23 = 6'(_GEN_22 + 6'h1) == {BOS_flag, BOS_value};
  wire [7:0]        _GEN_24 = _GEN_5[nsp];
  wire [7:0]        _commit_stack_ctr_T = 8'(_GEN_24 - 8'h1);
  wire              _GEN_25 = io_commit_meta_ssp == 4'h0;
  wire              _GEN_26 = io_commit_pop_valid & (|_GEN_24) & _GEN_25;
  wire              _GEN_27 = io_commit_meta_ssp == 4'h1;
  wire              _GEN_28 = io_commit_pop_valid & (|_GEN_24) & _GEN_27;
  wire              _GEN_29 = io_commit_meta_ssp == 4'h2;
  wire              _GEN_30 = io_commit_pop_valid & (|_GEN_24) & _GEN_29;
  wire              _GEN_31 = io_commit_meta_ssp == 4'h3;
  wire              _GEN_32 = io_commit_pop_valid & (|_GEN_24) & _GEN_31;
  wire              _GEN_33 = io_commit_meta_ssp == 4'h4;
  wire              _GEN_34 = io_commit_pop_valid & (|_GEN_24) & _GEN_33;
  wire              _GEN_35 = io_commit_meta_ssp == 4'h5;
  wire              _GEN_36 = io_commit_pop_valid & (|_GEN_24) & _GEN_35;
  wire              _GEN_37 = io_commit_meta_ssp == 4'h6;
  wire              _GEN_38 = io_commit_pop_valid & (|_GEN_24) & _GEN_37;
  wire              _GEN_39 = io_commit_meta_ssp == 4'h7;
  wire              _GEN_40 = io_commit_pop_valid & (|_GEN_24) & _GEN_39;
  wire              _GEN_41 = io_commit_meta_ssp == 4'h8;
  wire              _GEN_42 = io_commit_pop_valid & (|_GEN_24) & _GEN_41;
  wire              _GEN_43 = io_commit_meta_ssp == 4'h9;
  wire              _GEN_44 = io_commit_pop_valid & (|_GEN_24) & _GEN_43;
  wire              _GEN_45 = io_commit_meta_ssp == 4'hA;
  wire              _GEN_46 = io_commit_pop_valid & (|_GEN_24) & _GEN_45;
  wire              _GEN_47 = io_commit_meta_ssp == 4'hB;
  wire              _GEN_48 = io_commit_pop_valid & (|_GEN_24) & _GEN_47;
  wire              _GEN_49 = io_commit_meta_ssp == 4'hC;
  wire              _GEN_50 = io_commit_pop_valid & (|_GEN_24) & _GEN_49;
  wire              _GEN_51 = io_commit_meta_ssp == 4'hD;
  wire              _GEN_52 = io_commit_pop_valid & (|_GEN_24) & _GEN_51;
  wire              _GEN_53 = io_commit_meta_ssp == 4'hE;
  wire              _GEN_54 = io_commit_pop_valid & (|_GEN_24) & _GEN_53;
  wire              _GEN_55 = io_commit_pop_valid & (|_GEN_24) & (&io_commit_meta_ssp);
  wire              _GEN_56 =
    _GEN_24 < 8'h7 & _GEN_3[nsp] == _GEN_0[io_commit_meta_TOSW_value];
  wire [3:0]        _nsp_T_2 = 4'(io_commit_meta_ssp + 4'h1);
  wire              _GEN_57 = _nsp_T_2 == 4'h0;
  wire              _GEN_58 = _nsp_T_2 == 4'h1;
  wire              _GEN_59 = _nsp_T_2 == 4'h2;
  wire              _GEN_60 = _nsp_T_2 == 4'h3;
  wire              _GEN_61 = _nsp_T_2 == 4'h4;
  wire              _GEN_62 = _nsp_T_2 == 4'h5;
  wire              _GEN_63 = _nsp_T_2 == 4'h6;
  wire              _GEN_64 = _nsp_T_2 == 4'h7;
  wire              _GEN_65 = _nsp_T_2 == 4'h8;
  wire              _GEN_66 = _nsp_T_2 == 4'h9;
  wire              _GEN_67 = _nsp_T_2 == 4'hA;
  wire              _GEN_68 = _nsp_T_2 == 4'hB;
  wire              _GEN_69 = _nsp_T_2 == 4'hC;
  wire              _GEN_70 = _nsp_T_2 == 4'hD;
  wire              _GEN_71 = _nsp_T_2 == 4'hE;
  wire [5:0]        _GEN_72 = {io_commit_meta_TOSW_flag, io_commit_meta_TOSW_value};
  wire [5:0]        _new_ptr_T_11 = 6'(_GEN_72 + 6'h1);
  wire              _GEN_73 =
    io_commit_push_valid
    & (~spec_overflowed | _new_ptr_T_11[5] ^ BOS_flag ^ _new_ptr_T_11[4:0] > BOS_value);
  wire [5:0]        _GEN_74 = {io_redirect_meta_TOSW_flag, io_redirect_meta_TOSW_value};
  wire              _GEN_75 =
    io_redirect_valid & io_redirect_isCall & 6'(_GEN_74 + 6'h1) == {BOS_flag, BOS_value};
  wire [7:0]        _commit_stack_ctr_T_2 = 8'(_GEN_24 + 8'h1);
  wire [5:0]        _GEN_76 = 6'(_GEN_74 + 6'h1);
  wire              inflightValid_8 =
    _GEN_14
    & (io_redirect_meta_NOS_flag ^ io_redirect_meta_TOSW_flag
       ^ io_redirect_meta_NOS_value < io_redirect_meta_TOSW_value);
  wire              _GEN_77 =
    io_s3_missed_pop & (differentFlag_10 ^ ~compare_10) & (differentFlag_11 ^ compare_11);
  wire              inflightValid_6 =
    _GEN_18
    & (io_s3_meta_NOS_flag ^ io_s3_meta_TOSW_flag
       ^ io_s3_meta_NOS_value < io_s3_meta_TOSW_value);
  wire [5:0]        _GEN_78 = 6'(_GEN_22 + 6'h1);
  wire              _GEN_79 = _s3_missPushEntry_ctr_T & io_s3_meta_sctr != 3'h7;
  wire              inflightValid_4 =
    _GEN_16 & (topNos_flag ^ TOSW_flag ^ topNos_value < TOSW_value);
  wire [5:0]        _GEN_80 = 6'(_GEN_19 + 6'h1);
  wire [5:0]        _BOS_new_ptr_T_16 = 6'(_GEN_20 + 6'h1);
  wire [5:0]        _BOS_new_ptr_T_11 = 6'(_GEN_72 + 6'h1);
  wire [5:0]        _BOS_new_ptr_T_6 = 6'(_GEN_20 + 6'h1);
  wire [5:0]        _BOS_new_ptr_T_1 = 6'(_GEN_20 + 6'h1);
  always @(posedge clock or posedge reset) begin
    if (reset) begin
      commit_stack_0_retAddr <= 41'h0;
      commit_stack_0_ctr <= 8'h0;
      commit_stack_1_retAddr <= 41'h0;
      commit_stack_1_ctr <= 8'h0;
      commit_stack_2_retAddr <= 41'h0;
      commit_stack_2_ctr <= 8'h0;
      commit_stack_3_retAddr <= 41'h0;
      commit_stack_3_ctr <= 8'h0;
      commit_stack_4_retAddr <= 41'h0;
      commit_stack_4_ctr <= 8'h0;
      commit_stack_5_retAddr <= 41'h0;
      commit_stack_5_ctr <= 8'h0;
      commit_stack_6_retAddr <= 41'h0;
      commit_stack_6_ctr <= 8'h0;
      commit_stack_7_retAddr <= 41'h0;
      commit_stack_7_ctr <= 8'h0;
      commit_stack_8_retAddr <= 41'h0;
      commit_stack_8_ctr <= 8'h0;
      commit_stack_9_retAddr <= 41'h0;
      commit_stack_9_ctr <= 8'h0;
      commit_stack_10_retAddr <= 41'h0;
      commit_stack_10_ctr <= 8'h0;
      commit_stack_11_retAddr <= 41'h0;
      commit_stack_11_ctr <= 8'h0;
      commit_stack_12_retAddr <= 41'h0;
      commit_stack_12_ctr <= 8'h0;
      commit_stack_13_retAddr <= 41'h0;
      commit_stack_13_ctr <= 8'h0;
      commit_stack_14_retAddr <= 41'h0;
      commit_stack_14_ctr <= 8'h0;
      commit_stack_15_retAddr <= 41'h0;
      commit_stack_15_ctr <= 8'h0;
      spec_queue_0_retAddr <= 41'h0;
      spec_queue_0_ctr <= 8'h0;
      spec_queue_1_retAddr <= 41'h0;
      spec_queue_1_ctr <= 8'h0;
      spec_queue_2_retAddr <= 41'h0;
      spec_queue_2_ctr <= 8'h0;
      spec_queue_3_retAddr <= 41'h0;
      spec_queue_3_ctr <= 8'h0;
      spec_queue_4_retAddr <= 41'h0;
      spec_queue_4_ctr <= 8'h0;
      spec_queue_5_retAddr <= 41'h0;
      spec_queue_5_ctr <= 8'h0;
      spec_queue_6_retAddr <= 41'h0;
      spec_queue_6_ctr <= 8'h0;
      spec_queue_7_retAddr <= 41'h0;
      spec_queue_7_ctr <= 8'h0;
      spec_queue_8_retAddr <= 41'h0;
      spec_queue_8_ctr <= 8'h0;
      spec_queue_9_retAddr <= 41'h0;
      spec_queue_9_ctr <= 8'h0;
      spec_queue_10_retAddr <= 41'h0;
      spec_queue_10_ctr <= 8'h0;
      spec_queue_11_retAddr <= 41'h0;
      spec_queue_11_ctr <= 8'h0;
      spec_queue_12_retAddr <= 41'h0;
      spec_queue_12_ctr <= 8'h0;
      spec_queue_13_retAddr <= 41'h0;
      spec_queue_13_ctr <= 8'h0;
      spec_queue_14_retAddr <= 41'h0;
      spec_queue_14_ctr <= 8'h0;
      spec_queue_15_retAddr <= 41'h0;
      spec_queue_15_ctr <= 8'h0;
      spec_queue_16_retAddr <= 41'h0;
      spec_queue_16_ctr <= 8'h0;
      spec_queue_17_retAddr <= 41'h0;
      spec_queue_17_ctr <= 8'h0;
      spec_queue_18_retAddr <= 41'h0;
      spec_queue_18_ctr <= 8'h0;
      spec_queue_19_retAddr <= 41'h0;
      spec_queue_19_ctr <= 8'h0;
      spec_queue_20_retAddr <= 41'h0;
      spec_queue_20_ctr <= 8'h0;
      spec_queue_21_retAddr <= 41'h0;
      spec_queue_21_ctr <= 8'h0;
      spec_queue_22_retAddr <= 41'h0;
      spec_queue_22_ctr <= 8'h0;
      spec_queue_23_retAddr <= 41'h0;
      spec_queue_23_ctr <= 8'h0;
      spec_queue_24_retAddr <= 41'h0;
      spec_queue_24_ctr <= 8'h0;
      spec_queue_25_retAddr <= 41'h0;
      spec_queue_25_ctr <= 8'h0;
      spec_queue_26_retAddr <= 41'h0;
      spec_queue_26_ctr <= 8'h0;
      spec_queue_27_retAddr <= 41'h0;
      spec_queue_27_ctr <= 8'h0;
      spec_queue_28_retAddr <= 41'h0;
      spec_queue_28_ctr <= 8'h0;
      spec_queue_29_retAddr <= 41'h0;
      spec_queue_29_ctr <= 8'h0;
      spec_queue_30_retAddr <= 41'h0;
      spec_queue_30_ctr <= 8'h0;
      spec_queue_31_retAddr <= 41'h0;
      spec_queue_31_ctr <= 8'h0;
      spec_nos_0_flag <= 1'h0;
      spec_nos_0_value <= 5'h0;
      spec_nos_1_flag <= 1'h0;
      spec_nos_1_value <= 5'h0;
      spec_nos_2_flag <= 1'h0;
      spec_nos_2_value <= 5'h0;
      spec_nos_3_flag <= 1'h0;
      spec_nos_3_value <= 5'h0;
      spec_nos_4_flag <= 1'h0;
      spec_nos_4_value <= 5'h0;
      spec_nos_5_flag <= 1'h0;
      spec_nos_5_value <= 5'h0;
      spec_nos_6_flag <= 1'h0;
      spec_nos_6_value <= 5'h0;
      spec_nos_7_flag <= 1'h0;
      spec_nos_7_value <= 5'h0;
      spec_nos_8_flag <= 1'h0;
      spec_nos_8_value <= 5'h0;
      spec_nos_9_flag <= 1'h0;
      spec_nos_9_value <= 5'h0;
      spec_nos_10_flag <= 1'h0;
      spec_nos_10_value <= 5'h0;
      spec_nos_11_flag <= 1'h0;
      spec_nos_11_value <= 5'h0;
      spec_nos_12_flag <= 1'h0;
      spec_nos_12_value <= 5'h0;
      spec_nos_13_flag <= 1'h0;
      spec_nos_13_value <= 5'h0;
      spec_nos_14_flag <= 1'h0;
      spec_nos_14_value <= 5'h0;
      spec_nos_15_flag <= 1'h0;
      spec_nos_15_value <= 5'h0;
      spec_nos_16_flag <= 1'h0;
      spec_nos_16_value <= 5'h0;
      spec_nos_17_flag <= 1'h0;
      spec_nos_17_value <= 5'h0;
      spec_nos_18_flag <= 1'h0;
      spec_nos_18_value <= 5'h0;
      spec_nos_19_flag <= 1'h0;
      spec_nos_19_value <= 5'h0;
      spec_nos_20_flag <= 1'h0;
      spec_nos_20_value <= 5'h0;
      spec_nos_21_flag <= 1'h0;
      spec_nos_21_value <= 5'h0;
      spec_nos_22_flag <= 1'h0;
      spec_nos_22_value <= 5'h0;
      spec_nos_23_flag <= 1'h0;
      spec_nos_23_value <= 5'h0;
      spec_nos_24_flag <= 1'h0;
      spec_nos_24_value <= 5'h0;
      spec_nos_25_flag <= 1'h0;
      spec_nos_25_value <= 5'h0;
      spec_nos_26_flag <= 1'h0;
      spec_nos_26_value <= 5'h0;
      spec_nos_27_flag <= 1'h0;
      spec_nos_27_value <= 5'h0;
      spec_nos_28_flag <= 1'h0;
      spec_nos_28_value <= 5'h0;
      spec_nos_29_flag <= 1'h0;
      spec_nos_29_value <= 5'h0;
      spec_nos_30_flag <= 1'h0;
      spec_nos_30_value <= 5'h0;
      spec_nos_31_flag <= 1'h0;
      spec_nos_31_value <= 5'h0;
      nsp <= 4'h0;
      ssp <= 4'h0;
      sctr <= 3'h0;
      TOSR_flag <= 1'h1;
      TOSR_value <= 5'h1F;
      TOSW_flag <= 1'h0;
      TOSW_value <= 5'h0;
      BOS_flag <= 1'h0;
      BOS_value <= 5'h0;
      spec_overflowed <= 1'h0;
      writeBypassValid <= 1'h0;
      timingTop_retAddr <= 41'h0;
    end
    else begin
      if (~io_commit_push_valid | _GEN_56 | ~_GEN_57) begin
      end
      else
        commit_stack_0_retAddr <= _GEN_0[io_commit_meta_TOSW_value];
      if (io_commit_push_valid) begin
        if (_GEN_56) begin
          if (_GEN_25)
            commit_stack_0_ctr <= _commit_stack_ctr_T_2;
          else if (_GEN_26)
            commit_stack_0_ctr <= _commit_stack_ctr_T;
          if (_GEN_27)
            commit_stack_1_ctr <= _commit_stack_ctr_T_2;
          else if (_GEN_28)
            commit_stack_1_ctr <= _commit_stack_ctr_T;
          if (_GEN_29)
            commit_stack_2_ctr <= _commit_stack_ctr_T_2;
          else if (_GEN_30)
            commit_stack_2_ctr <= _commit_stack_ctr_T;
          if (_GEN_31)
            commit_stack_3_ctr <= _commit_stack_ctr_T_2;
          else if (_GEN_32)
            commit_stack_3_ctr <= _commit_stack_ctr_T;
          if (_GEN_33)
            commit_stack_4_ctr <= _commit_stack_ctr_T_2;
          else if (_GEN_34)
            commit_stack_4_ctr <= _commit_stack_ctr_T;
          if (_GEN_35)
            commit_stack_5_ctr <= _commit_stack_ctr_T_2;
          else if (_GEN_36)
            commit_stack_5_ctr <= _commit_stack_ctr_T;
          if (_GEN_37)
            commit_stack_6_ctr <= _commit_stack_ctr_T_2;
          else if (_GEN_38)
            commit_stack_6_ctr <= _commit_stack_ctr_T;
          if (_GEN_39)
            commit_stack_7_ctr <= _commit_stack_ctr_T_2;
          else if (_GEN_40)
            commit_stack_7_ctr <= _commit_stack_ctr_T;
          if (_GEN_41)
            commit_stack_8_ctr <= _commit_stack_ctr_T_2;
          else if (_GEN_42)
            commit_stack_8_ctr <= _commit_stack_ctr_T;
          if (_GEN_43)
            commit_stack_9_ctr <= _commit_stack_ctr_T_2;
          else if (_GEN_44)
            commit_stack_9_ctr <= _commit_stack_ctr_T;
          if (_GEN_45)
            commit_stack_10_ctr <= _commit_stack_ctr_T_2;
          else if (_GEN_46)
            commit_stack_10_ctr <= _commit_stack_ctr_T;
          if (_GEN_47)
            commit_stack_11_ctr <= _commit_stack_ctr_T_2;
          else if (_GEN_48)
            commit_stack_11_ctr <= _commit_stack_ctr_T;
          if (_GEN_49)
            commit_stack_12_ctr <= _commit_stack_ctr_T_2;
          else if (_GEN_50)
            commit_stack_12_ctr <= _commit_stack_ctr_T;
          if (_GEN_51)
            commit_stack_13_ctr <= _commit_stack_ctr_T_2;
          else if (_GEN_52)
            commit_stack_13_ctr <= _commit_stack_ctr_T;
          if (_GEN_53)
            commit_stack_14_ctr <= _commit_stack_ctr_T_2;
          else if (_GEN_54)
            commit_stack_14_ctr <= _commit_stack_ctr_T;
          if (&io_commit_meta_ssp)
            commit_stack_15_ctr <= _commit_stack_ctr_T_2;
          else if (_GEN_55)
            commit_stack_15_ctr <= _commit_stack_ctr_T;
          nsp <= io_commit_meta_ssp;
        end
        else begin
          if (_GEN_57)
            commit_stack_0_ctr <= 8'h0;
          else if (_GEN_26)
            commit_stack_0_ctr <= _commit_stack_ctr_T;
          if (_GEN_58)
            commit_stack_1_ctr <= 8'h0;
          else if (_GEN_28)
            commit_stack_1_ctr <= _commit_stack_ctr_T;
          if (_GEN_59)
            commit_stack_2_ctr <= 8'h0;
          else if (_GEN_30)
            commit_stack_2_ctr <= _commit_stack_ctr_T;
          if (_GEN_60)
            commit_stack_3_ctr <= 8'h0;
          else if (_GEN_32)
            commit_stack_3_ctr <= _commit_stack_ctr_T;
          if (_GEN_61)
            commit_stack_4_ctr <= 8'h0;
          else if (_GEN_34)
            commit_stack_4_ctr <= _commit_stack_ctr_T;
          if (_GEN_62)
            commit_stack_5_ctr <= 8'h0;
          else if (_GEN_36)
            commit_stack_5_ctr <= _commit_stack_ctr_T;
          if (_GEN_63)
            commit_stack_6_ctr <= 8'h0;
          else if (_GEN_38)
            commit_stack_6_ctr <= _commit_stack_ctr_T;
          if (_GEN_64)
            commit_stack_7_ctr <= 8'h0;
          else if (_GEN_40)
            commit_stack_7_ctr <= _commit_stack_ctr_T;
          if (_GEN_65)
            commit_stack_8_ctr <= 8'h0;
          else if (_GEN_42)
            commit_stack_8_ctr <= _commit_stack_ctr_T;
          if (_GEN_66)
            commit_stack_9_ctr <= 8'h0;
          else if (_GEN_44)
            commit_stack_9_ctr <= _commit_stack_ctr_T;
          if (_GEN_67)
            commit_stack_10_ctr <= 8'h0;
          else if (_GEN_46)
            commit_stack_10_ctr <= _commit_stack_ctr_T;
          if (_GEN_68)
            commit_stack_11_ctr <= 8'h0;
          else if (_GEN_48)
            commit_stack_11_ctr <= _commit_stack_ctr_T;
          if (_GEN_69)
            commit_stack_12_ctr <= 8'h0;
          else if (_GEN_50)
            commit_stack_12_ctr <= _commit_stack_ctr_T;
          if (_GEN_70)
            commit_stack_13_ctr <= 8'h0;
          else if (_GEN_52)
            commit_stack_13_ctr <= _commit_stack_ctr_T;
          if (_GEN_71)
            commit_stack_14_ctr <= 8'h0;
          else if (_GEN_54)
            commit_stack_14_ctr <= _commit_stack_ctr_T;
          if (&_nsp_T_2)
            commit_stack_15_ctr <= 8'h0;
          else if (_GEN_55)
            commit_stack_15_ctr <= _commit_stack_ctr_T;
          nsp <= _nsp_T_2;
        end
      end
      else begin
        if (_GEN_26)
          commit_stack_0_ctr <= _commit_stack_ctr_T;
        if (_GEN_28)
          commit_stack_1_ctr <= _commit_stack_ctr_T;
        if (_GEN_30)
          commit_stack_2_ctr <= _commit_stack_ctr_T;
        if (_GEN_32)
          commit_stack_3_ctr <= _commit_stack_ctr_T;
        if (_GEN_34)
          commit_stack_4_ctr <= _commit_stack_ctr_T;
        if (_GEN_36)
          commit_stack_5_ctr <= _commit_stack_ctr_T;
        if (_GEN_38)
          commit_stack_6_ctr <= _commit_stack_ctr_T;
        if (_GEN_40)
          commit_stack_7_ctr <= _commit_stack_ctr_T;
        if (_GEN_42)
          commit_stack_8_ctr <= _commit_stack_ctr_T;
        if (_GEN_44)
          commit_stack_9_ctr <= _commit_stack_ctr_T;
        if (_GEN_46)
          commit_stack_10_ctr <= _commit_stack_ctr_T;
        if (_GEN_48)
          commit_stack_11_ctr <= _commit_stack_ctr_T;
        if (_GEN_50)
          commit_stack_12_ctr <= _commit_stack_ctr_T;
        if (_GEN_52)
          commit_stack_13_ctr <= _commit_stack_ctr_T;
        if (_GEN_54)
          commit_stack_14_ctr <= _commit_stack_ctr_T;
        if (_GEN_55)
          commit_stack_15_ctr <= _commit_stack_ctr_T;
        if (io_commit_pop_valid) begin
          if (|_GEN_24)
            nsp <= io_commit_meta_ssp;
          else
            nsp <= 4'(io_commit_meta_ssp - 4'h1);
        end
      end
      if (~io_commit_push_valid | _GEN_56 | ~_GEN_58) begin
      end
      else
        commit_stack_1_retAddr <= _GEN_0[io_commit_meta_TOSW_value];
      if (~io_commit_push_valid | _GEN_56 | ~_GEN_59) begin
      end
      else
        commit_stack_2_retAddr <= _GEN_0[io_commit_meta_TOSW_value];
      if (~io_commit_push_valid | _GEN_56 | ~_GEN_60) begin
      end
      else
        commit_stack_3_retAddr <= _GEN_0[io_commit_meta_TOSW_value];
      if (~io_commit_push_valid | _GEN_56 | ~_GEN_61) begin
      end
      else
        commit_stack_4_retAddr <= _GEN_0[io_commit_meta_TOSW_value];
      if (~io_commit_push_valid | _GEN_56 | ~_GEN_62) begin
      end
      else
        commit_stack_5_retAddr <= _GEN_0[io_commit_meta_TOSW_value];
      if (~io_commit_push_valid | _GEN_56 | ~_GEN_63) begin
      end
      else
        commit_stack_6_retAddr <= _GEN_0[io_commit_meta_TOSW_value];
      if (~io_commit_push_valid | _GEN_56 | ~_GEN_64) begin
      end
      else
        commit_stack_7_retAddr <= _GEN_0[io_commit_meta_TOSW_value];
      if (~io_commit_push_valid | _GEN_56 | ~_GEN_65) begin
      end
      else
        commit_stack_8_retAddr <= _GEN_0[io_commit_meta_TOSW_value];
      if (~io_commit_push_valid | _GEN_56 | ~_GEN_66) begin
      end
      else
        commit_stack_9_retAddr <= _GEN_0[io_commit_meta_TOSW_value];
      if (~io_commit_push_valid | _GEN_56 | ~_GEN_67) begin
      end
      else
        commit_stack_10_retAddr <= _GEN_0[io_commit_meta_TOSW_value];
      if (~io_commit_push_valid | _GEN_56 | ~_GEN_68) begin
      end
      else
        commit_stack_11_retAddr <= _GEN_0[io_commit_meta_TOSW_value];
      if (~io_commit_push_valid | _GEN_56 | ~_GEN_69) begin
      end
      else
        commit_stack_12_retAddr <= _GEN_0[io_commit_meta_TOSW_value];
      if (~io_commit_push_valid | _GEN_56 | ~_GEN_70) begin
      end
      else
        commit_stack_13_retAddr <= _GEN_0[io_commit_meta_TOSW_value];
      if (~io_commit_push_valid | _GEN_56 | ~_GEN_71) begin
      end
      else
        commit_stack_14_retAddr <= _GEN_0[io_commit_meta_TOSW_value];
      if (~io_commit_push_valid | _GEN_56 | ~(&_nsp_T_2)) begin
      end
      else
        commit_stack_15_retAddr <= _GEN_0[io_commit_meta_TOSW_value];
      if (realPush & realWriteAddr_value == 5'h0) begin
        spec_queue_0_retAddr <= realWriteEntry_retAddr;
        if (_GEN_9)
          spec_queue_0_ctr <= realWriteEntry_next_ctr;
        else
          spec_queue_0_ctr <= s3_missPushEntry_ctr;
        spec_nos_0_flag <= realNos_flag;
        spec_nos_0_value <= realNos_value;
      end
      if (realPush & realWriteAddr_value == 5'h1) begin
        spec_queue_1_retAddr <= realWriteEntry_retAddr;
        if (_GEN_9)
          spec_queue_1_ctr <= realWriteEntry_next_ctr;
        else
          spec_queue_1_ctr <= s3_missPushEntry_ctr;
        spec_nos_1_flag <= realNos_flag;
        spec_nos_1_value <= realNos_value;
      end
      if (realPush & realWriteAddr_value == 5'h2) begin
        spec_queue_2_retAddr <= realWriteEntry_retAddr;
        if (_GEN_9)
          spec_queue_2_ctr <= realWriteEntry_next_ctr;
        else
          spec_queue_2_ctr <= s3_missPushEntry_ctr;
        spec_nos_2_flag <= realNos_flag;
        spec_nos_2_value <= realNos_value;
      end
      if (realPush & realWriteAddr_value == 5'h3) begin
        spec_queue_3_retAddr <= realWriteEntry_retAddr;
        if (_GEN_9)
          spec_queue_3_ctr <= realWriteEntry_next_ctr;
        else
          spec_queue_3_ctr <= s3_missPushEntry_ctr;
        spec_nos_3_flag <= realNos_flag;
        spec_nos_3_value <= realNos_value;
      end
      if (realPush & realWriteAddr_value == 5'h4) begin
        spec_queue_4_retAddr <= realWriteEntry_retAddr;
        if (_GEN_9)
          spec_queue_4_ctr <= realWriteEntry_next_ctr;
        else
          spec_queue_4_ctr <= s3_missPushEntry_ctr;
        spec_nos_4_flag <= realNos_flag;
        spec_nos_4_value <= realNos_value;
      end
      if (realPush & realWriteAddr_value == 5'h5) begin
        spec_queue_5_retAddr <= realWriteEntry_retAddr;
        if (_GEN_9)
          spec_queue_5_ctr <= realWriteEntry_next_ctr;
        else
          spec_queue_5_ctr <= s3_missPushEntry_ctr;
        spec_nos_5_flag <= realNos_flag;
        spec_nos_5_value <= realNos_value;
      end
      if (realPush & realWriteAddr_value == 5'h6) begin
        spec_queue_6_retAddr <= realWriteEntry_retAddr;
        if (_GEN_9)
          spec_queue_6_ctr <= realWriteEntry_next_ctr;
        else
          spec_queue_6_ctr <= s3_missPushEntry_ctr;
        spec_nos_6_flag <= realNos_flag;
        spec_nos_6_value <= realNos_value;
      end
      if (realPush & realWriteAddr_value == 5'h7) begin
        spec_queue_7_retAddr <= realWriteEntry_retAddr;
        if (_GEN_9)
          spec_queue_7_ctr <= realWriteEntry_next_ctr;
        else
          spec_queue_7_ctr <= s3_missPushEntry_ctr;
        spec_nos_7_flag <= realNos_flag;
        spec_nos_7_value <= realNos_value;
      end
      if (realPush & realWriteAddr_value == 5'h8) begin
        spec_queue_8_retAddr <= realWriteEntry_retAddr;
        if (_GEN_9)
          spec_queue_8_ctr <= realWriteEntry_next_ctr;
        else
          spec_queue_8_ctr <= s3_missPushEntry_ctr;
        spec_nos_8_flag <= realNos_flag;
        spec_nos_8_value <= realNos_value;
      end
      if (realPush & realWriteAddr_value == 5'h9) begin
        spec_queue_9_retAddr <= realWriteEntry_retAddr;
        if (_GEN_9)
          spec_queue_9_ctr <= realWriteEntry_next_ctr;
        else
          spec_queue_9_ctr <= s3_missPushEntry_ctr;
        spec_nos_9_flag <= realNos_flag;
        spec_nos_9_value <= realNos_value;
      end
      if (realPush & realWriteAddr_value == 5'hA) begin
        spec_queue_10_retAddr <= realWriteEntry_retAddr;
        if (_GEN_9)
          spec_queue_10_ctr <= realWriteEntry_next_ctr;
        else
          spec_queue_10_ctr <= s3_missPushEntry_ctr;
        spec_nos_10_flag <= realNos_flag;
        spec_nos_10_value <= realNos_value;
      end
      if (realPush & realWriteAddr_value == 5'hB) begin
        spec_queue_11_retAddr <= realWriteEntry_retAddr;
        if (_GEN_9)
          spec_queue_11_ctr <= realWriteEntry_next_ctr;
        else
          spec_queue_11_ctr <= s3_missPushEntry_ctr;
        spec_nos_11_flag <= realNos_flag;
        spec_nos_11_value <= realNos_value;
      end
      if (realPush & realWriteAddr_value == 5'hC) begin
        spec_queue_12_retAddr <= realWriteEntry_retAddr;
        if (_GEN_9)
          spec_queue_12_ctr <= realWriteEntry_next_ctr;
        else
          spec_queue_12_ctr <= s3_missPushEntry_ctr;
        spec_nos_12_flag <= realNos_flag;
        spec_nos_12_value <= realNos_value;
      end
      if (realPush & realWriteAddr_value == 5'hD) begin
        spec_queue_13_retAddr <= realWriteEntry_retAddr;
        if (_GEN_9)
          spec_queue_13_ctr <= realWriteEntry_next_ctr;
        else
          spec_queue_13_ctr <= s3_missPushEntry_ctr;
        spec_nos_13_flag <= realNos_flag;
        spec_nos_13_value <= realNos_value;
      end
      if (realPush & realWriteAddr_value == 5'hE) begin
        spec_queue_14_retAddr <= realWriteEntry_retAddr;
        if (_GEN_9)
          spec_queue_14_ctr <= realWriteEntry_next_ctr;
        else
          spec_queue_14_ctr <= s3_missPushEntry_ctr;
        spec_nos_14_flag <= realNos_flag;
        spec_nos_14_value <= realNos_value;
      end
      if (realPush & realWriteAddr_value == 5'hF) begin
        spec_queue_15_retAddr <= realWriteEntry_retAddr;
        if (_GEN_9)
          spec_queue_15_ctr <= realWriteEntry_next_ctr;
        else
          spec_queue_15_ctr <= s3_missPushEntry_ctr;
        spec_nos_15_flag <= realNos_flag;
        spec_nos_15_value <= realNos_value;
      end
      if (realPush & realWriteAddr_value == 5'h10) begin
        spec_queue_16_retAddr <= realWriteEntry_retAddr;
        if (_GEN_9)
          spec_queue_16_ctr <= realWriteEntry_next_ctr;
        else
          spec_queue_16_ctr <= s3_missPushEntry_ctr;
        spec_nos_16_flag <= realNos_flag;
        spec_nos_16_value <= realNos_value;
      end
      if (realPush & realWriteAddr_value == 5'h11) begin
        spec_queue_17_retAddr <= realWriteEntry_retAddr;
        if (_GEN_9)
          spec_queue_17_ctr <= realWriteEntry_next_ctr;
        else
          spec_queue_17_ctr <= s3_missPushEntry_ctr;
        spec_nos_17_flag <= realNos_flag;
        spec_nos_17_value <= realNos_value;
      end
      if (realPush & realWriteAddr_value == 5'h12) begin
        spec_queue_18_retAddr <= realWriteEntry_retAddr;
        if (_GEN_9)
          spec_queue_18_ctr <= realWriteEntry_next_ctr;
        else
          spec_queue_18_ctr <= s3_missPushEntry_ctr;
        spec_nos_18_flag <= realNos_flag;
        spec_nos_18_value <= realNos_value;
      end
      if (realPush & realWriteAddr_value == 5'h13) begin
        spec_queue_19_retAddr <= realWriteEntry_retAddr;
        if (_GEN_9)
          spec_queue_19_ctr <= realWriteEntry_next_ctr;
        else
          spec_queue_19_ctr <= s3_missPushEntry_ctr;
        spec_nos_19_flag <= realNos_flag;
        spec_nos_19_value <= realNos_value;
      end
      if (realPush & realWriteAddr_value == 5'h14) begin
        spec_queue_20_retAddr <= realWriteEntry_retAddr;
        if (_GEN_9)
          spec_queue_20_ctr <= realWriteEntry_next_ctr;
        else
          spec_queue_20_ctr <= s3_missPushEntry_ctr;
        spec_nos_20_flag <= realNos_flag;
        spec_nos_20_value <= realNos_value;
      end
      if (realPush & realWriteAddr_value == 5'h15) begin
        spec_queue_21_retAddr <= realWriteEntry_retAddr;
        if (_GEN_9)
          spec_queue_21_ctr <= realWriteEntry_next_ctr;
        else
          spec_queue_21_ctr <= s3_missPushEntry_ctr;
        spec_nos_21_flag <= realNos_flag;
        spec_nos_21_value <= realNos_value;
      end
      if (realPush & realWriteAddr_value == 5'h16) begin
        spec_queue_22_retAddr <= realWriteEntry_retAddr;
        if (_GEN_9)
          spec_queue_22_ctr <= realWriteEntry_next_ctr;
        else
          spec_queue_22_ctr <= s3_missPushEntry_ctr;
        spec_nos_22_flag <= realNos_flag;
        spec_nos_22_value <= realNos_value;
      end
      if (realPush & realWriteAddr_value == 5'h17) begin
        spec_queue_23_retAddr <= realWriteEntry_retAddr;
        if (_GEN_9)
          spec_queue_23_ctr <= realWriteEntry_next_ctr;
        else
          spec_queue_23_ctr <= s3_missPushEntry_ctr;
        spec_nos_23_flag <= realNos_flag;
        spec_nos_23_value <= realNos_value;
      end
      if (realPush & realWriteAddr_value == 5'h18) begin
        spec_queue_24_retAddr <= realWriteEntry_retAddr;
        if (_GEN_9)
          spec_queue_24_ctr <= realWriteEntry_next_ctr;
        else
          spec_queue_24_ctr <= s3_missPushEntry_ctr;
        spec_nos_24_flag <= realNos_flag;
        spec_nos_24_value <= realNos_value;
      end
      if (realPush & realWriteAddr_value == 5'h19) begin
        spec_queue_25_retAddr <= realWriteEntry_retAddr;
        if (_GEN_9)
          spec_queue_25_ctr <= realWriteEntry_next_ctr;
        else
          spec_queue_25_ctr <= s3_missPushEntry_ctr;
        spec_nos_25_flag <= realNos_flag;
        spec_nos_25_value <= realNos_value;
      end
      if (realPush & realWriteAddr_value == 5'h1A) begin
        spec_queue_26_retAddr <= realWriteEntry_retAddr;
        if (_GEN_9)
          spec_queue_26_ctr <= realWriteEntry_next_ctr;
        else
          spec_queue_26_ctr <= s3_missPushEntry_ctr;
        spec_nos_26_flag <= realNos_flag;
        spec_nos_26_value <= realNos_value;
      end
      if (realPush & realWriteAddr_value == 5'h1B) begin
        spec_queue_27_retAddr <= realWriteEntry_retAddr;
        if (_GEN_9)
          spec_queue_27_ctr <= realWriteEntry_next_ctr;
        else
          spec_queue_27_ctr <= s3_missPushEntry_ctr;
        spec_nos_27_flag <= realNos_flag;
        spec_nos_27_value <= realNos_value;
      end
      if (realPush & realWriteAddr_value == 5'h1C) begin
        spec_queue_28_retAddr <= realWriteEntry_retAddr;
        if (_GEN_9)
          spec_queue_28_ctr <= realWriteEntry_next_ctr;
        else
          spec_queue_28_ctr <= s3_missPushEntry_ctr;
        spec_nos_28_flag <= realNos_flag;
        spec_nos_28_value <= realNos_value;
      end
      if (realPush & realWriteAddr_value == 5'h1D) begin
        spec_queue_29_retAddr <= realWriteEntry_retAddr;
        if (_GEN_9)
          spec_queue_29_ctr <= realWriteEntry_next_ctr;
        else
          spec_queue_29_ctr <= s3_missPushEntry_ctr;
        spec_nos_29_flag <= realNos_flag;
        spec_nos_29_value <= realNos_value;
      end
      if (realPush & realWriteAddr_value == 5'h1E) begin
        spec_queue_30_retAddr <= realWriteEntry_retAddr;
        if (_GEN_9)
          spec_queue_30_ctr <= realWriteEntry_next_ctr;
        else
          spec_queue_30_ctr <= s3_missPushEntry_ctr;
        spec_nos_30_flag <= realNos_flag;
        spec_nos_30_value <= realNos_value;
      end
      if (realPush & (&realWriteAddr_value)) begin
        spec_queue_31_retAddr <= realWriteEntry_retAddr;
        if (_GEN_9)
          spec_queue_31_ctr <= realWriteEntry_next_ctr;
        else
          spec_queue_31_ctr <= s3_missPushEntry_ctr;
        spec_nos_31_flag <= realNos_flag;
        spec_nos_31_value <= realNos_value;
      end
      if (io_redirect_valid) begin
        ssp <=
          ~io_redirect_isRet | (|io_redirect_meta_sctr)
            ? (~io_redirect_isCall | _GEN_10
                 ? io_redirect_meta_ssp
                 : 4'(io_redirect_meta_ssp + 4'h1))
            : inflightValid_8 ? 4'(io_redirect_meta_ssp - 4'h1) : _sctr_T_16;
        sctr <=
          io_redirect_isRet
            ? ((|io_redirect_meta_sctr)
                 ? 3'(io_redirect_meta_sctr - 3'h1)
                 : inflightValid_8
                     ? _GEN_2[io_redirect_meta_NOS_value][2:0]
                     : _GEN_5[_sctr_T_16][2:0])
            : io_redirect_isCall ? (_GEN_10 ? _sctr_T_12 : 3'h0) : io_redirect_meta_sctr;
        TOSR_flag <=
          _GEN_11
            ? io_redirect_meta_NOS_flag
            : io_redirect_isCall
                ? io_redirect_meta_TOSW_flag
                : io_redirect_meta_TOSR_flag;
        TOSR_value <=
          _GEN_11
            ? io_redirect_meta_NOS_value
            : io_redirect_isCall
                ? io_redirect_meta_TOSW_value
                : io_redirect_meta_TOSR_value;
        TOSW_flag <= io_redirect_isCall ? _GEN_76[5] : io_redirect_meta_TOSW_flag;
        TOSW_value <= io_redirect_isCall ? _GEN_76[4:0] : io_redirect_meta_TOSW_value;
      end
      else if (io_s3_cancel) begin
        ssp <=
          ~io_s3_missed_push | _GEN_79
            ? (~io_s3_missed_pop | (|io_s3_meta_sctr)
                 ? io_s3_meta_ssp
                 : inflightValid_6 ? 4'(io_s3_meta_ssp - 4'h1) : _sctr_T_8)
            : 4'(io_s3_meta_ssp + 4'h1);
        sctr <=
          io_s3_missed_push
            ? (_GEN_79 ? _sctr_T_10 : 3'h0)
            : io_s3_missed_pop
                ? ((|io_s3_meta_sctr)
                     ? 3'(io_s3_meta_sctr - 3'h1)
                     : inflightValid_6
                         ? _GEN_2[io_s3_meta_NOS_value][2:0]
                         : _GEN_5[_sctr_T_8][2:0])
                : io_s3_meta_sctr;
        TOSR_flag <=
          io_s3_missed_push
            ? io_s3_meta_TOSW_flag
            : _GEN_77 ? io_s3_meta_NOS_flag : io_s3_meta_TOSR_flag;
        TOSR_value <=
          io_s3_missed_push
            ? io_s3_meta_TOSW_value
            : _GEN_77 ? io_s3_meta_NOS_value : io_s3_meta_TOSR_value;
        TOSW_flag <= io_s3_missed_push ? _GEN_78[5] : io_s3_meta_TOSW_flag;
        TOSW_value <= io_s3_missed_push ? _GEN_78[4:0] : io_s3_meta_TOSW_value;
      end
      else begin
        if (~io_spec_pop_valid | (|sctr)) begin
          if (~io_spec_push_valid | _GEN_12) begin
          end
          else
            ssp <= 4'(ssp + 4'h1);
        end
        else if (inflightValid_4)
          ssp <= 4'(ssp - 4'h1);
        else
          ssp <= _sctr_T_4;
        if (io_spec_pop_valid) begin
          if (|sctr)
            sctr <= 3'(sctr - 3'h1);
          else
            sctr <= inflightValid_4 ? _GEN_2[topNos_value][2:0] : _GEN_5[_sctr_T_4][2:0];
        end
        else if (io_spec_push_valid) begin
          if (_GEN_12)
            sctr <= _sctr_T;
          else
            sctr <= 3'h0;
        end
        if (io_spec_pop_valid & (TOSR_flag ^ BOS_flag ^ _GEN)
            & (TOSR_flag ^ TOSW_flag ^ TOSR_value < TOSW_value)) begin
          TOSR_flag <= topNos_flag;
          if (writeBypassValid)
            TOSR_value <= writeBypassNos_value;
          else
            TOSR_value <= _GEN_8;
        end
        else if (io_spec_push_valid) begin
          TOSR_flag <= TOSW_flag;
          TOSR_value <= TOSW_value;
        end
        if (io_spec_push_valid) begin
          TOSW_flag <= _GEN_80[5];
          TOSW_value <= _GEN_80[4:0];
        end
      end
      if (_GEN_75) begin
        BOS_flag <= _BOS_new_ptr_T_16[5];
        BOS_value <= _BOS_new_ptr_T_16[4:0];
      end
      else if (_GEN_73) begin
        BOS_flag <= _BOS_new_ptr_T_11[5];
        BOS_value <= _BOS_new_ptr_T_11[4:0];
      end
      else if (io_s3_cancel & io_s3_missed_push & _GEN_23) begin
        BOS_flag <= _BOS_new_ptr_T_6[5];
        BOS_value <= _BOS_new_ptr_T_6[4:0];
      end
      else if (_GEN_21) begin
        BOS_flag <= _BOS_new_ptr_T_1[5];
        BOS_value <= _BOS_new_ptr_T_1[4:0];
      end
      spec_overflowed <=
        _GEN_75 | ~_GEN_73
        & (io_s3_cancel & io_s3_missed_push
             ? _GEN_23 | _GEN_21 | spec_overflowed
             : _GEN_21 | spec_overflowed);
      writeBypassValid <= writeBypassValidWire;
      timingTop_retAddr <=
        writeBypassValidWire
          ? (_realPush_T_4 | io_spec_push_valid
               ? writeEntry_retAddr
               : writeBypassEntry_retAddr)
          : io_redirect_valid & io_redirect_isRet
              ? ((io_redirect_meta_NOS_flag ^ BOS_flag ^ _GEN_13)
                 & (io_redirect_meta_NOS_flag ^ io_redirect_meta_TOSW_flag
                    ^ io_redirect_meta_NOS_value < io_redirect_meta_TOSW_value)
                   ? _GEN_0[io_redirect_meta_NOS_value]
                   : _GEN_3[(|io_redirect_meta_sctr)
                              ? io_redirect_meta_ssp
                              : _GEN_14
                                & (io_redirect_meta_NOS_flag ^ TOSW_flag
                                   ^ io_redirect_meta_NOS_value < TOSW_value)
                                  ? 4'(io_redirect_meta_ssp - 4'h1)
                                  : 4'(io_redirect_meta_ssp - 4'h1)])
              : io_redirect_valid
                  ? ((differentFlag_15 ^ ~compare_15) & (differentFlag_16 ^ compare_16)
                       ? _GEN_0[io_redirect_meta_TOSR_value]
                       : _GEN_3[io_redirect_meta_ssp])
                  : io_spec_pop_valid
                      ? ((topNos_flag ^ BOS_flag ^ _GEN_15)
                         & (topNos_flag ^ TOSW_flag ^ topNos_value < TOSW_value)
                           ? _GEN_0[topNos_value]
                           : _GEN_3[(|sctr)
                                      ? ssp
                                      : _GEN_16
                                        & (topNos_flag ^ TOSW_flag
                                           ^ topNos_value < TOSW_value)
                                          ? 4'(ssp - 4'h1)
                                          : 4'(ssp - 4'h1)])
                      : realPush
                          ? realWriteEntry_retAddr
                          : io_s3_cancel
                              ? (io_s3_missed_push
                                   ? io_s3_pushAddr
                                   : io_s3_missed_pop
                                       ? ((io_s3_meta_NOS_flag ^ BOS_flag ^ _GEN_17)
                                          & (io_s3_meta_NOS_flag ^ io_s3_meta_TOSW_flag
                                             ^ io_s3_meta_NOS_value < io_s3_meta_TOSW_value)
                                            ? _GEN_0[io_s3_meta_NOS_value]
                                            : _GEN_3[(|io_s3_meta_sctr)
                                                       ? io_s3_meta_ssp
                                                       : _GEN_18
                                                         & (io_s3_meta_NOS_flag
                                                            ^ io_s3_meta_TOSW_flag
                                                            ^ io_s3_meta_NOS_value < io_s3_meta_TOSW_value)
                                                           ? 4'(io_s3_meta_ssp - 4'h1)
                                                           : 4'(io_s3_meta_ssp - 4'h1)])
                                       : (differentFlag_10 ^ ~compare_10)
                                         & (differentFlag_11 ^ compare_11)
                                           ? _GEN_0[io_s3_meta_TOSR_value]
                                           : _GEN_3[io_s3_meta_ssp])
                              : (TOSR_flag ^ BOS_flag ^ _GEN)
                                & (TOSR_flag ^ TOSW_flag ^ TOSR_value < TOSW_value)
                                  ? _GEN_1
                                  : _GEN_4;
    end
  end // always @(posedge, posedge)
  wire [7:0]        writeEntry_ctr =
    {5'h0,
     _realPush_T_4
       ? (_writeEntry_ctr_T_1
          & (redirectTopEntry_inflightValid
               ? _GEN_2[io_redirect_meta_TOSR_value]
               : _GEN_5[io_redirect_meta_ssp]) < 8'h7
            ? _sctr_T_12
            : 3'h0)
       : _writeEntry_ctr_T_7
         & (writeBypassValid
              ? writeBypassEntry_ctr
              : topEntry_inflightValid ? _GEN_2[TOSR_value] : _GEN_5[ssp]) < 8'h7
           ? _sctr_T
           : 3'h0};
  always @(posedge clock) begin
    if (io_spec_push_valid | _realPush_T_4) begin
      writeBypassEntry_retAddr <= writeEntry_retAddr;
      writeBypassEntry_ctr <= writeEntry_ctr;
      writeBypassNos_flag <= _realPush_T_4 ? io_redirect_meta_NOS_flag : TOSR_flag;
      writeBypassNos_value <= _realPush_T_4 ? io_redirect_meta_NOS_value : TOSR_value;
    end
    if (io_s2_fire | io_redirect_isCall) begin
      realWriteEntry_next_retAddr <= writeEntry_retAddr;
      realWriteEntry_next_ctr <= writeEntry_ctr;
    end
    if (io_s2_fire | _realPush_T_4)
      realWriteAddr_next_value <=
        _realPush_T_4 ? io_redirect_meta_TOSW_value : TOSW_value;
    if (io_s2_fire | _realPush_T_4) begin
      realNos_next_flag <= _realPush_T_4 ? io_redirect_meta_TOSR_flag : TOSR_flag;
      realNos_next_value <= _realPush_T_4 ? io_redirect_meta_TOSR_value : TOSR_value;
    end
    if (io_s2_fire)
      realPush_r <= io_spec_push_valid;
    realPush_REG <= _realPush_T_4;
  end // always @(posedge)
  `ifdef ENABLE_INITIAL_REG_
    `ifdef FIRRTL_BEFORE_INITIAL
      `FIRRTL_BEFORE_INITIAL
    `endif // FIRRTL_BEFORE_INITIAL
    logic [31:0] _RANDOM[0:85];
    initial begin
      `ifdef INIT_RANDOM_PROLOG_
        `INIT_RANDOM_PROLOG_
      `endif // INIT_RANDOM_PROLOG_
      `ifdef RANDOMIZE_REG_INIT
        for (logic [6:0] i = 7'h0; i < 7'h56; i += 7'h1) begin
          _RANDOM[i] = `RANDOM;
        end
        commit_stack_0_retAddr = {_RANDOM[7'h0], _RANDOM[7'h1][8:0]};
        commit_stack_0_ctr = _RANDOM[7'h1][16:9];
        commit_stack_1_retAddr = {_RANDOM[7'h1][31:17], _RANDOM[7'h2][25:0]};
        commit_stack_1_ctr = {_RANDOM[7'h2][31:26], _RANDOM[7'h3][1:0]};
        commit_stack_2_retAddr = {_RANDOM[7'h3][31:2], _RANDOM[7'h4][10:0]};
        commit_stack_2_ctr = _RANDOM[7'h4][18:11];
        commit_stack_3_retAddr = {_RANDOM[7'h4][31:19], _RANDOM[7'h5][27:0]};
        commit_stack_3_ctr = {_RANDOM[7'h5][31:28], _RANDOM[7'h6][3:0]};
        commit_stack_4_retAddr = {_RANDOM[7'h6][31:4], _RANDOM[7'h7][12:0]};
        commit_stack_4_ctr = _RANDOM[7'h7][20:13];
        commit_stack_5_retAddr = {_RANDOM[7'h7][31:21], _RANDOM[7'h8][29:0]};
        commit_stack_5_ctr = {_RANDOM[7'h8][31:30], _RANDOM[7'h9][5:0]};
        commit_stack_6_retAddr = {_RANDOM[7'h9][31:6], _RANDOM[7'hA][14:0]};
        commit_stack_6_ctr = _RANDOM[7'hA][22:15];
        commit_stack_7_retAddr = {_RANDOM[7'hA][31:23], _RANDOM[7'hB]};
        commit_stack_7_ctr = _RANDOM[7'hC][7:0];
        commit_stack_8_retAddr = {_RANDOM[7'hC][31:8], _RANDOM[7'hD][16:0]};
        commit_stack_8_ctr = _RANDOM[7'hD][24:17];
        commit_stack_9_retAddr =
          {_RANDOM[7'hD][31:25], _RANDOM[7'hE], _RANDOM[7'hF][1:0]};
        commit_stack_9_ctr = _RANDOM[7'hF][9:2];
        commit_stack_10_retAddr = {_RANDOM[7'hF][31:10], _RANDOM[7'h10][18:0]};
        commit_stack_10_ctr = _RANDOM[7'h10][26:19];
        commit_stack_11_retAddr =
          {_RANDOM[7'h10][31:27], _RANDOM[7'h11], _RANDOM[7'h12][3:0]};
        commit_stack_11_ctr = _RANDOM[7'h12][11:4];
        commit_stack_12_retAddr = {_RANDOM[7'h12][31:12], _RANDOM[7'h13][20:0]};
        commit_stack_12_ctr = _RANDOM[7'h13][28:21];
        commit_stack_13_retAddr =
          {_RANDOM[7'h13][31:29], _RANDOM[7'h14], _RANDOM[7'h15][5:0]};
        commit_stack_13_ctr = _RANDOM[7'h15][13:6];
        commit_stack_14_retAddr = {_RANDOM[7'h15][31:14], _RANDOM[7'h16][22:0]};
        commit_stack_14_ctr = _RANDOM[7'h16][30:23];
        commit_stack_15_retAddr =
          {_RANDOM[7'h16][31], _RANDOM[7'h17], _RANDOM[7'h18][7:0]};
        commit_stack_15_ctr = _RANDOM[7'h18][15:8];
        spec_queue_0_retAddr = {_RANDOM[7'h18][31:16], _RANDOM[7'h19][24:0]};
        spec_queue_0_ctr = {_RANDOM[7'h19][31:25], _RANDOM[7'h1A][0]};
        spec_queue_1_retAddr = {_RANDOM[7'h1A][31:1], _RANDOM[7'h1B][9:0]};
        spec_queue_1_ctr = _RANDOM[7'h1B][17:10];
        spec_queue_2_retAddr = {_RANDOM[7'h1B][31:18], _RANDOM[7'h1C][26:0]};
        spec_queue_2_ctr = {_RANDOM[7'h1C][31:27], _RANDOM[7'h1D][2:0]};
        spec_queue_3_retAddr = {_RANDOM[7'h1D][31:3], _RANDOM[7'h1E][11:0]};
        spec_queue_3_ctr = _RANDOM[7'h1E][19:12];
        spec_queue_4_retAddr = {_RANDOM[7'h1E][31:20], _RANDOM[7'h1F][28:0]};
        spec_queue_4_ctr = {_RANDOM[7'h1F][31:29], _RANDOM[7'h20][4:0]};
        spec_queue_5_retAddr = {_RANDOM[7'h20][31:5], _RANDOM[7'h21][13:0]};
        spec_queue_5_ctr = _RANDOM[7'h21][21:14];
        spec_queue_6_retAddr = {_RANDOM[7'h21][31:22], _RANDOM[7'h22][30:0]};
        spec_queue_6_ctr = {_RANDOM[7'h22][31], _RANDOM[7'h23][6:0]};
        spec_queue_7_retAddr = {_RANDOM[7'h23][31:7], _RANDOM[7'h24][15:0]};
        spec_queue_7_ctr = _RANDOM[7'h24][23:16];
        spec_queue_8_retAddr = {_RANDOM[7'h24][31:24], _RANDOM[7'h25], _RANDOM[7'h26][0]};
        spec_queue_8_ctr = _RANDOM[7'h26][8:1];
        spec_queue_9_retAddr = {_RANDOM[7'h26][31:9], _RANDOM[7'h27][17:0]};
        spec_queue_9_ctr = _RANDOM[7'h27][25:18];
        spec_queue_10_retAddr =
          {_RANDOM[7'h27][31:26], _RANDOM[7'h28], _RANDOM[7'h29][2:0]};
        spec_queue_10_ctr = _RANDOM[7'h29][10:3];
        spec_queue_11_retAddr = {_RANDOM[7'h29][31:11], _RANDOM[7'h2A][19:0]};
        spec_queue_11_ctr = _RANDOM[7'h2A][27:20];
        spec_queue_12_retAddr =
          {_RANDOM[7'h2A][31:28], _RANDOM[7'h2B], _RANDOM[7'h2C][4:0]};
        spec_queue_12_ctr = _RANDOM[7'h2C][12:5];
        spec_queue_13_retAddr = {_RANDOM[7'h2C][31:13], _RANDOM[7'h2D][21:0]};
        spec_queue_13_ctr = _RANDOM[7'h2D][29:22];
        spec_queue_14_retAddr =
          {_RANDOM[7'h2D][31:30], _RANDOM[7'h2E], _RANDOM[7'h2F][6:0]};
        spec_queue_14_ctr = _RANDOM[7'h2F][14:7];
        spec_queue_15_retAddr = {_RANDOM[7'h2F][31:15], _RANDOM[7'h30][23:0]};
        spec_queue_15_ctr = _RANDOM[7'h30][31:24];
        spec_queue_16_retAddr = {_RANDOM[7'h31], _RANDOM[7'h32][8:0]};
        spec_queue_16_ctr = _RANDOM[7'h32][16:9];
        spec_queue_17_retAddr = {_RANDOM[7'h32][31:17], _RANDOM[7'h33][25:0]};
        spec_queue_17_ctr = {_RANDOM[7'h33][31:26], _RANDOM[7'h34][1:0]};
        spec_queue_18_retAddr = {_RANDOM[7'h34][31:2], _RANDOM[7'h35][10:0]};
        spec_queue_18_ctr = _RANDOM[7'h35][18:11];
        spec_queue_19_retAddr = {_RANDOM[7'h35][31:19], _RANDOM[7'h36][27:0]};
        spec_queue_19_ctr = {_RANDOM[7'h36][31:28], _RANDOM[7'h37][3:0]};
        spec_queue_20_retAddr = {_RANDOM[7'h37][31:4], _RANDOM[7'h38][12:0]};
        spec_queue_20_ctr = _RANDOM[7'h38][20:13];
        spec_queue_21_retAddr = {_RANDOM[7'h38][31:21], _RANDOM[7'h39][29:0]};
        spec_queue_21_ctr = {_RANDOM[7'h39][31:30], _RANDOM[7'h3A][5:0]};
        spec_queue_22_retAddr = {_RANDOM[7'h3A][31:6], _RANDOM[7'h3B][14:0]};
        spec_queue_22_ctr = _RANDOM[7'h3B][22:15];
        spec_queue_23_retAddr = {_RANDOM[7'h3B][31:23], _RANDOM[7'h3C]};
        spec_queue_23_ctr = _RANDOM[7'h3D][7:0];
        spec_queue_24_retAddr = {_RANDOM[7'h3D][31:8], _RANDOM[7'h3E][16:0]};
        spec_queue_24_ctr = _RANDOM[7'h3E][24:17];
        spec_queue_25_retAddr =
          {_RANDOM[7'h3E][31:25], _RANDOM[7'h3F], _RANDOM[7'h40][1:0]};
        spec_queue_25_ctr = _RANDOM[7'h40][9:2];
        spec_queue_26_retAddr = {_RANDOM[7'h40][31:10], _RANDOM[7'h41][18:0]};
        spec_queue_26_ctr = _RANDOM[7'h41][26:19];
        spec_queue_27_retAddr =
          {_RANDOM[7'h41][31:27], _RANDOM[7'h42], _RANDOM[7'h43][3:0]};
        spec_queue_27_ctr = _RANDOM[7'h43][11:4];
        spec_queue_28_retAddr = {_RANDOM[7'h43][31:12], _RANDOM[7'h44][20:0]};
        spec_queue_28_ctr = _RANDOM[7'h44][28:21];
        spec_queue_29_retAddr =
          {_RANDOM[7'h44][31:29], _RANDOM[7'h45], _RANDOM[7'h46][5:0]};
        spec_queue_29_ctr = _RANDOM[7'h46][13:6];
        spec_queue_30_retAddr = {_RANDOM[7'h46][31:14], _RANDOM[7'h47][22:0]};
        spec_queue_30_ctr = _RANDOM[7'h47][30:23];
        spec_queue_31_retAddr = {_RANDOM[7'h47][31], _RANDOM[7'h48], _RANDOM[7'h49][7:0]};
        spec_queue_31_ctr = _RANDOM[7'h49][15:8];
        spec_nos_0_flag = _RANDOM[7'h49][16];
        spec_nos_0_value = _RANDOM[7'h49][21:17];
        spec_nos_1_flag = _RANDOM[7'h49][22];
        spec_nos_1_value = _RANDOM[7'h49][27:23];
        spec_nos_2_flag = _RANDOM[7'h49][28];
        spec_nos_2_value = {_RANDOM[7'h49][31:29], _RANDOM[7'h4A][1:0]};
        spec_nos_3_flag = _RANDOM[7'h4A][2];
        spec_nos_3_value = _RANDOM[7'h4A][7:3];
        spec_nos_4_flag = _RANDOM[7'h4A][8];
        spec_nos_4_value = _RANDOM[7'h4A][13:9];
        spec_nos_5_flag = _RANDOM[7'h4A][14];
        spec_nos_5_value = _RANDOM[7'h4A][19:15];
        spec_nos_6_flag = _RANDOM[7'h4A][20];
        spec_nos_6_value = _RANDOM[7'h4A][25:21];
        spec_nos_7_flag = _RANDOM[7'h4A][26];
        spec_nos_7_value = _RANDOM[7'h4A][31:27];
        spec_nos_8_flag = _RANDOM[7'h4B][0];
        spec_nos_8_value = _RANDOM[7'h4B][5:1];
        spec_nos_9_flag = _RANDOM[7'h4B][6];
        spec_nos_9_value = _RANDOM[7'h4B][11:7];
        spec_nos_10_flag = _RANDOM[7'h4B][12];
        spec_nos_10_value = _RANDOM[7'h4B][17:13];
        spec_nos_11_flag = _RANDOM[7'h4B][18];
        spec_nos_11_value = _RANDOM[7'h4B][23:19];
        spec_nos_12_flag = _RANDOM[7'h4B][24];
        spec_nos_12_value = _RANDOM[7'h4B][29:25];
        spec_nos_13_flag = _RANDOM[7'h4B][30];
        spec_nos_13_value = {_RANDOM[7'h4B][31], _RANDOM[7'h4C][3:0]};
        spec_nos_14_flag = _RANDOM[7'h4C][4];
        spec_nos_14_value = _RANDOM[7'h4C][9:5];
        spec_nos_15_flag = _RANDOM[7'h4C][10];
        spec_nos_15_value = _RANDOM[7'h4C][15:11];
        spec_nos_16_flag = _RANDOM[7'h4C][16];
        spec_nos_16_value = _RANDOM[7'h4C][21:17];
        spec_nos_17_flag = _RANDOM[7'h4C][22];
        spec_nos_17_value = _RANDOM[7'h4C][27:23];
        spec_nos_18_flag = _RANDOM[7'h4C][28];
        spec_nos_18_value = {_RANDOM[7'h4C][31:29], _RANDOM[7'h4D][1:0]};
        spec_nos_19_flag = _RANDOM[7'h4D][2];
        spec_nos_19_value = _RANDOM[7'h4D][7:3];
        spec_nos_20_flag = _RANDOM[7'h4D][8];
        spec_nos_20_value = _RANDOM[7'h4D][13:9];
        spec_nos_21_flag = _RANDOM[7'h4D][14];
        spec_nos_21_value = _RANDOM[7'h4D][19:15];
        spec_nos_22_flag = _RANDOM[7'h4D][20];
        spec_nos_22_value = _RANDOM[7'h4D][25:21];
        spec_nos_23_flag = _RANDOM[7'h4D][26];
        spec_nos_23_value = _RANDOM[7'h4D][31:27];
        spec_nos_24_flag = _RANDOM[7'h4E][0];
        spec_nos_24_value = _RANDOM[7'h4E][5:1];
        spec_nos_25_flag = _RANDOM[7'h4E][6];
        spec_nos_25_value = _RANDOM[7'h4E][11:7];
        spec_nos_26_flag = _RANDOM[7'h4E][12];
        spec_nos_26_value = _RANDOM[7'h4E][17:13];
        spec_nos_27_flag = _RANDOM[7'h4E][18];
        spec_nos_27_value = _RANDOM[7'h4E][23:19];
        spec_nos_28_flag = _RANDOM[7'h4E][24];
        spec_nos_28_value = _RANDOM[7'h4E][29:25];
        spec_nos_29_flag = _RANDOM[7'h4E][30];
        spec_nos_29_value = {_RANDOM[7'h4E][31], _RANDOM[7'h4F][3:0]};
        spec_nos_30_flag = _RANDOM[7'h4F][4];
        spec_nos_30_value = _RANDOM[7'h4F][9:5];
        spec_nos_31_flag = _RANDOM[7'h4F][10];
        spec_nos_31_value = _RANDOM[7'h4F][15:11];
        nsp = _RANDOM[7'h4F][19:16];
        ssp = _RANDOM[7'h4F][23:20];
        sctr = _RANDOM[7'h4F][26:24];
        TOSR_flag = _RANDOM[7'h4F][27];
        TOSR_value = {_RANDOM[7'h4F][31:28], _RANDOM[7'h50][0]};
        TOSW_flag = _RANDOM[7'h50][1];
        TOSW_value = _RANDOM[7'h50][6:2];
        BOS_flag = _RANDOM[7'h50][7];
        BOS_value = _RANDOM[7'h50][12:8];
        spec_overflowed = _RANDOM[7'h50][13];
        writeBypassEntry_retAddr = {_RANDOM[7'h50][31:14], _RANDOM[7'h51][22:0]};
        writeBypassEntry_ctr = _RANDOM[7'h51][30:23];
        writeBypassNos_flag = _RANDOM[7'h51][31];
        writeBypassNos_value = _RANDOM[7'h52][4:0];
        writeBypassValid = _RANDOM[7'h52][5];
        timingTop_retAddr = {_RANDOM[7'h52][31:6], _RANDOM[7'h53][14:0]};
        realWriteEntry_next_retAddr =
          {_RANDOM[7'h53][31:29], _RANDOM[7'h54], _RANDOM[7'h55][5:0]};
        realWriteEntry_next_ctr = _RANDOM[7'h55][13:6];
        realWriteAddr_next_value = _RANDOM[7'h55][19:15];
        realNos_next_flag = _RANDOM[7'h55][20];
        realNos_next_value = _RANDOM[7'h55][25:21];
        realPush_r = _RANDOM[7'h55][26];
        realPush_REG = _RANDOM[7'h55][27];
      `endif // RANDOMIZE_REG_INIT
      if (reset) begin
        commit_stack_0_retAddr = 41'h0;
        commit_stack_0_ctr = 8'h0;
        commit_stack_1_retAddr = 41'h0;
        commit_stack_1_ctr = 8'h0;
        commit_stack_2_retAddr = 41'h0;
        commit_stack_2_ctr = 8'h0;
        commit_stack_3_retAddr = 41'h0;
        commit_stack_3_ctr = 8'h0;
        commit_stack_4_retAddr = 41'h0;
        commit_stack_4_ctr = 8'h0;
        commit_stack_5_retAddr = 41'h0;
        commit_stack_5_ctr = 8'h0;
        commit_stack_6_retAddr = 41'h0;
        commit_stack_6_ctr = 8'h0;
        commit_stack_7_retAddr = 41'h0;
        commit_stack_7_ctr = 8'h0;
        commit_stack_8_retAddr = 41'h0;
        commit_stack_8_ctr = 8'h0;
        commit_stack_9_retAddr = 41'h0;
        commit_stack_9_ctr = 8'h0;
        commit_stack_10_retAddr = 41'h0;
        commit_stack_10_ctr = 8'h0;
        commit_stack_11_retAddr = 41'h0;
        commit_stack_11_ctr = 8'h0;
        commit_stack_12_retAddr = 41'h0;
        commit_stack_12_ctr = 8'h0;
        commit_stack_13_retAddr = 41'h0;
        commit_stack_13_ctr = 8'h0;
        commit_stack_14_retAddr = 41'h0;
        commit_stack_14_ctr = 8'h0;
        commit_stack_15_retAddr = 41'h0;
        commit_stack_15_ctr = 8'h0;
        spec_queue_0_retAddr = 41'h0;
        spec_queue_0_ctr = 8'h0;
        spec_queue_1_retAddr = 41'h0;
        spec_queue_1_ctr = 8'h0;
        spec_queue_2_retAddr = 41'h0;
        spec_queue_2_ctr = 8'h0;
        spec_queue_3_retAddr = 41'h0;
        spec_queue_3_ctr = 8'h0;
        spec_queue_4_retAddr = 41'h0;
        spec_queue_4_ctr = 8'h0;
        spec_queue_5_retAddr = 41'h0;
        spec_queue_5_ctr = 8'h0;
        spec_queue_6_retAddr = 41'h0;
        spec_queue_6_ctr = 8'h0;
        spec_queue_7_retAddr = 41'h0;
        spec_queue_7_ctr = 8'h0;
        spec_queue_8_retAddr = 41'h0;
        spec_queue_8_ctr = 8'h0;
        spec_queue_9_retAddr = 41'h0;
        spec_queue_9_ctr = 8'h0;
        spec_queue_10_retAddr = 41'h0;
        spec_queue_10_ctr = 8'h0;
        spec_queue_11_retAddr = 41'h0;
        spec_queue_11_ctr = 8'h0;
        spec_queue_12_retAddr = 41'h0;
        spec_queue_12_ctr = 8'h0;
        spec_queue_13_retAddr = 41'h0;
        spec_queue_13_ctr = 8'h0;
        spec_queue_14_retAddr = 41'h0;
        spec_queue_14_ctr = 8'h0;
        spec_queue_15_retAddr = 41'h0;
        spec_queue_15_ctr = 8'h0;
        spec_queue_16_retAddr = 41'h0;
        spec_queue_16_ctr = 8'h0;
        spec_queue_17_retAddr = 41'h0;
        spec_queue_17_ctr = 8'h0;
        spec_queue_18_retAddr = 41'h0;
        spec_queue_18_ctr = 8'h0;
        spec_queue_19_retAddr = 41'h0;
        spec_queue_19_ctr = 8'h0;
        spec_queue_20_retAddr = 41'h0;
        spec_queue_20_ctr = 8'h0;
        spec_queue_21_retAddr = 41'h0;
        spec_queue_21_ctr = 8'h0;
        spec_queue_22_retAddr = 41'h0;
        spec_queue_22_ctr = 8'h0;
        spec_queue_23_retAddr = 41'h0;
        spec_queue_23_ctr = 8'h0;
        spec_queue_24_retAddr = 41'h0;
        spec_queue_24_ctr = 8'h0;
        spec_queue_25_retAddr = 41'h0;
        spec_queue_25_ctr = 8'h0;
        spec_queue_26_retAddr = 41'h0;
        spec_queue_26_ctr = 8'h0;
        spec_queue_27_retAddr = 41'h0;
        spec_queue_27_ctr = 8'h0;
        spec_queue_28_retAddr = 41'h0;
        spec_queue_28_ctr = 8'h0;
        spec_queue_29_retAddr = 41'h0;
        spec_queue_29_ctr = 8'h0;
        spec_queue_30_retAddr = 41'h0;
        spec_queue_30_ctr = 8'h0;
        spec_queue_31_retAddr = 41'h0;
        spec_queue_31_ctr = 8'h0;
        spec_nos_0_flag = 1'h0;
        spec_nos_0_value = 5'h0;
        spec_nos_1_flag = 1'h0;
        spec_nos_1_value = 5'h0;
        spec_nos_2_flag = 1'h0;
        spec_nos_2_value = 5'h0;
        spec_nos_3_flag = 1'h0;
        spec_nos_3_value = 5'h0;
        spec_nos_4_flag = 1'h0;
        spec_nos_4_value = 5'h0;
        spec_nos_5_flag = 1'h0;
        spec_nos_5_value = 5'h0;
        spec_nos_6_flag = 1'h0;
        spec_nos_6_value = 5'h0;
        spec_nos_7_flag = 1'h0;
        spec_nos_7_value = 5'h0;
        spec_nos_8_flag = 1'h0;
        spec_nos_8_value = 5'h0;
        spec_nos_9_flag = 1'h0;
        spec_nos_9_value = 5'h0;
        spec_nos_10_flag = 1'h0;
        spec_nos_10_value = 5'h0;
        spec_nos_11_flag = 1'h0;
        spec_nos_11_value = 5'h0;
        spec_nos_12_flag = 1'h0;
        spec_nos_12_value = 5'h0;
        spec_nos_13_flag = 1'h0;
        spec_nos_13_value = 5'h0;
        spec_nos_14_flag = 1'h0;
        spec_nos_14_value = 5'h0;
        spec_nos_15_flag = 1'h0;
        spec_nos_15_value = 5'h0;
        spec_nos_16_flag = 1'h0;
        spec_nos_16_value = 5'h0;
        spec_nos_17_flag = 1'h0;
        spec_nos_17_value = 5'h0;
        spec_nos_18_flag = 1'h0;
        spec_nos_18_value = 5'h0;
        spec_nos_19_flag = 1'h0;
        spec_nos_19_value = 5'h0;
        spec_nos_20_flag = 1'h0;
        spec_nos_20_value = 5'h0;
        spec_nos_21_flag = 1'h0;
        spec_nos_21_value = 5'h0;
        spec_nos_22_flag = 1'h0;
        spec_nos_22_value = 5'h0;
        spec_nos_23_flag = 1'h0;
        spec_nos_23_value = 5'h0;
        spec_nos_24_flag = 1'h0;
        spec_nos_24_value = 5'h0;
        spec_nos_25_flag = 1'h0;
        spec_nos_25_value = 5'h0;
        spec_nos_26_flag = 1'h0;
        spec_nos_26_value = 5'h0;
        spec_nos_27_flag = 1'h0;
        spec_nos_27_value = 5'h0;
        spec_nos_28_flag = 1'h0;
        spec_nos_28_value = 5'h0;
        spec_nos_29_flag = 1'h0;
        spec_nos_29_value = 5'h0;
        spec_nos_30_flag = 1'h0;
        spec_nos_30_value = 5'h0;
        spec_nos_31_flag = 1'h0;
        spec_nos_31_value = 5'h0;
        nsp = 4'h0;
        ssp = 4'h0;
        sctr = 3'h0;
        TOSR_flag = 1'h1;
        TOSR_value = 5'h1F;
        TOSW_flag = 1'h0;
        TOSW_value = 5'h0;
        BOS_flag = 1'h0;
        BOS_value = 5'h0;
        spec_overflowed = 1'h0;
        writeBypassValid = 1'h0;
        timingTop_retAddr = 41'h0;
      end
    end // initial
    `ifdef FIRRTL_AFTER_INITIAL
      `FIRRTL_AFTER_INITIAL
    `endif // FIRRTL_AFTER_INITIAL
  `endif // ENABLE_INITIAL_REG_
  assign io_spec_pop_addr = timingTop_retAddr;
  assign io_ssp = ssp;
  assign io_sctr = sctr;
  assign io_TOSR_flag = TOSR_flag;
  assign io_TOSR_value = TOSR_value;
  assign io_TOSW_flag = TOSW_flag;
  assign io_TOSW_value = TOSW_value;
  assign io_NOS_flag = topNos_flag;
  assign io_NOS_value = topNos_value;
endmodule

