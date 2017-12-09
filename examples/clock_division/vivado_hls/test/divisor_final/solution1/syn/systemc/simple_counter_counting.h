// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2017.3
// Copyright (C) 1986-2017 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _simple_counter_counting_HH_
#define _simple_counter_counting_HH_

#include "systemc.h"
#include "AESL_pkg.h"


namespace ap_rtl {

struct simple_counter_counting : public sc_module {
    // Port declarations 10
    sc_in_clk ap_clk;
    sc_in< sc_logic > ap_rst;
    sc_in< sc_logic > start;
    sc_in< sc_lv<10> > final;
    sc_out< sc_logic > count_out;
    sc_out< sc_logic > count_out_ap_vld;
    sc_out< sc_lv<32> > simple_counter_aux_V;
    sc_out< sc_logic > simple_counter_aux_V_ap_vld;
    sc_out< sc_logic > simple_counter_saida;
    sc_out< sc_logic > simple_counter_saida_ap_vld;


    // Module declarations
    simple_counter_counting(sc_module_name name);
    SC_HAS_PROCESS(simple_counter_counting);

    ~simple_counter_counting();

    sc_trace_file* mVcdFile;

    sc_signal< sc_lv<1> > tmp_read_fu_106_p2;
    sc_signal< sc_lv<1> > tmp_reg_183;
    sc_signal< sc_lv<4> > ap_CS_fsm;
    sc_signal< sc_logic > ap_CS_fsm_state3;
    sc_signal< sc_lv<1> > tmp_3_fu_142_p2;
    sc_signal< sc_lv<1> > tmp_3_reg_187;
    sc_signal< sc_lv<1> > v_1_fu_74;
    sc_signal< sc_logic > ap_CS_fsm_state2;
    sc_signal< sc_lv<1> > v_fu_156_p2;
    sc_signal< sc_logic > ap_CS_fsm_state4;
    sc_signal< sc_lv<32> > simple_counter_aux_V_1_fu_78;
    sc_signal< sc_lv<32> > tmp_1_fu_131_p2;
    sc_signal< sc_lv<32> > tmp_2_fu_138_p1;
    sc_signal< sc_lv<4> > ap_NS_fsm;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<4> ap_ST_fsm_state1;
    static const sc_lv<4> ap_ST_fsm_state2;
    static const sc_lv<4> ap_ST_fsm_state3;
    static const sc_lv<4> ap_ST_fsm_state4;
    static const sc_lv<32> ap_const_lv32_2;
    static const sc_lv<1> ap_const_lv1_1;
    static const sc_lv<1> ap_const_lv1_0;
    static const sc_lv<32> ap_const_lv32_1;
    static const sc_lv<32> ap_const_lv32_3;
    static const sc_lv<32> ap_const_lv32_0;
    static const bool ap_const_boolean_1;
    // Thread declarations
    void thread_ap_clk_no_reset_();
    void thread_ap_CS_fsm_state2();
    void thread_ap_CS_fsm_state3();
    void thread_ap_CS_fsm_state4();
    void thread_count_out();
    void thread_count_out_ap_vld();
    void thread_simple_counter_aux_V();
    void thread_simple_counter_aux_V_ap_vld();
    void thread_simple_counter_saida();
    void thread_simple_counter_saida_ap_vld();
    void thread_tmp_1_fu_131_p2();
    void thread_tmp_2_fu_138_p1();
    void thread_tmp_3_fu_142_p2();
    void thread_tmp_read_fu_106_p2();
    void thread_v_fu_156_p2();
    void thread_ap_NS_fsm();
};

}

using namespace ap_rtl;

#endif
