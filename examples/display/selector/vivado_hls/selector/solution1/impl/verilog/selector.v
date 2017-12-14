// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2017.3
// Copyright (C) 1986-2017 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

`timescale 1 ns / 1 ps 

(* CORE_GENERATION_INFO="selector,hls_ip_2017_3,{HLS_INPUT_TYPE=sc,HLS_INPUT_FLOAT=0,HLS_INPUT_FIXED=0,HLS_INPUT_PART=xc7a200tfbg676-2,HLS_INPUT_CLOCK=10.000000,HLS_INPUT_ARCH=others,HLS_SYN_CLOCK=4.274250,HLS_SYN_LAT=3,HLS_SYN_TPT=none,HLS_SYN_MEM=0,HLS_SYN_DSP=0,HLS_SYN_FF=42,HLS_SYN_LUT=149}" *)

module selector (
        clk,
        reset,
        start,
        selected
);


input   clk;
input   reset;
input   start;
output  [3:0] selected;

reg[3:0] selected = 4'd15;

wire   [3:0] grp_selector_select_fu_48_selected;
wire    grp_selector_select_fu_48_selected_ap_vld;
wire   [31:0] grp_selector_select_fu_48_selector_counter;
wire    grp_selector_select_fu_48_selector_counter_ap_vld;
wire   [1:0] ap_CS_fsm;
wire    ap_CS_fsm_state2;

selector_select grp_selector_select_fu_48(
    .ap_clk(clk),
    .ap_rst(reset),
    .start(start),
    .selected(grp_selector_select_fu_48_selected),
    .selected_ap_vld(grp_selector_select_fu_48_selected_ap_vld),
    .selector_counter(grp_selector_select_fu_48_selector_counter),
    .selector_counter_ap_vld(grp_selector_select_fu_48_selector_counter_ap_vld)
);

always @ (posedge clk) begin
    if (reset == 1'b1) begin
        selected <= 4'd15;
    end else begin
        if ((1'b1 == grp_selector_select_fu_48_selected_ap_vld)) begin
            selected <= grp_selector_select_fu_48_selected;
        end
    end
end

assign ap_CS_fsm = 2'd0;

assign ap_CS_fsm_state2 = ap_CS_fsm[32'd1];

endmodule //selector