// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2017.3
// Copyright (C) 1986-2017 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

`timescale 1 ns / 1 ps 

(* CORE_GENERATION_INFO="ula_new,hls_ip_2017_3,{HLS_INPUT_TYPE=sc,HLS_INPUT_FLOAT=0,HLS_INPUT_FIXED=0,HLS_INPUT_PART=xc7a200tfbg676-2,HLS_INPUT_CLOCK=10.000000,HLS_INPUT_ARCH=others,HLS_SYN_CLOCK=7.903500,HLS_SYN_LAT=0,HLS_SYN_TPT=none,HLS_SYN_MEM=0,HLS_SYN_DSP=1,HLS_SYN_FF=0,HLS_SYN_LUT=73}" *)

module ula_new (
        A,
        B,
        op,
        C
);


input  [15:0] A;
input  [15:0] B;
input  [1:0] op;
output  [15:0] C;

wire   [15:0] StgValue_9_ula_new_opUla_fu_42_C;
wire    StgValue_9_ula_new_opUla_fu_42_C_ap_vld;
wire   [0:0] ula_new_ssdm_thre_load_fu_54_p1;

ula_new_opUla StgValue_9_ula_new_opUla_fu_42(
    .A(A),
    .B(B),
    .op(op),
    .C(StgValue_9_ula_new_opUla_fu_42_C),
    .C_ap_vld(StgValue_9_ula_new_opUla_fu_42_C_ap_vld)
);

assign C = StgValue_9_ula_new_opUla_fu_42_C;

assign ula_new_ssdm_thre_load_fu_54_p1 = 1'd0;

endmodule //ula_new