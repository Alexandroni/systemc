// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2017.3
// Copyright (C) 1986-2017 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

`timescale 1 ns / 1 ps 

(* CORE_GENERATION_INFO="simple_counter,hls_ip_2017_3,{HLS_INPUT_TYPE=sc,HLS_INPUT_FLOAT=0,HLS_INPUT_FIXED=0,HLS_INPUT_PART=xc7a200tfbg676-2,HLS_INPUT_CLOCK=10.000000,HLS_INPUT_ARCH=others,HLS_SYN_CLOCK=4.291000,HLS_SYN_LAT=3,HLS_SYN_TPT=none,HLS_SYN_MEM=0,HLS_SYN_DSP=0,HLS_SYN_FF=40,HLS_SYN_LUT=125}" *)

module simple_counter (
        start,
        clk,
        reset,
        final,
        count_out
);


input   start;
input   clk;
input   reset;
input  [9:0] final;
output   count_out;

reg count_out = 1'd0;

wire    grp_simple_counter_counting_fu_54_count_out;
wire    grp_simple_counter_counting_fu_54_count_out_ap_vld;
wire   [31:0] grp_simple_counter_counting_fu_54_simple_counter_aux_V;
wire    grp_simple_counter_counting_fu_54_simple_counter_aux_V_ap_vld;
wire    grp_simple_counter_counting_fu_54_simple_counter_saida;
wire    grp_simple_counter_counting_fu_54_simple_counter_saida_ap_vld;
wire   [1:0] ap_CS_fsm;
wire    ap_CS_fsm_state2;

simple_counter_counting grp_simple_counter_counting_fu_54(
    .ap_clk(clk),
    .ap_rst(reset),
    .start(start),
    .final(final),
    .count_out(grp_simple_counter_counting_fu_54_count_out),
    .count_out_ap_vld(grp_simple_counter_counting_fu_54_count_out_ap_vld),
    .simple_counter_aux_V(grp_simple_counter_counting_fu_54_simple_counter_aux_V),
    .simple_counter_aux_V_ap_vld(grp_simple_counter_counting_fu_54_simple_counter_aux_V_ap_vld),
    .simple_counter_saida(grp_simple_counter_counting_fu_54_simple_counter_saida),
    .simple_counter_saida_ap_vld(grp_simple_counter_counting_fu_54_simple_counter_saida_ap_vld)
);

always @ (posedge clk) begin
    if (reset == 1'b1) begin
        count_out <= 1'd0;
    end else begin
        if ((1'b1 == grp_simple_counter_counting_fu_54_count_out_ap_vld)) begin
            count_out <= grp_simple_counter_counting_fu_54_count_out;
        end
    end
end

assign ap_CS_fsm = 2'd0;

assign ap_CS_fsm_state2 = ap_CS_fsm[32'd1];

endmodule //simple_counter
