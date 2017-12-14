// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2017.3
// Copyright (C) 1986-2017 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#include "simple_counter_counting.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

const sc_logic simple_counter_counting::ap_const_logic_1 = sc_dt::Log_1;
const sc_logic simple_counter_counting::ap_const_logic_0 = sc_dt::Log_0;
const sc_lv<4> simple_counter_counting::ap_ST_fsm_state1 = "1";
const sc_lv<4> simple_counter_counting::ap_ST_fsm_state2 = "10";
const sc_lv<4> simple_counter_counting::ap_ST_fsm_state3 = "100";
const sc_lv<4> simple_counter_counting::ap_ST_fsm_state4 = "1000";
const sc_lv<32> simple_counter_counting::ap_const_lv32_2 = "10";
const sc_lv<1> simple_counter_counting::ap_const_lv1_1 = "1";
const sc_lv<1> simple_counter_counting::ap_const_lv1_0 = "0";
const sc_lv<32> simple_counter_counting::ap_const_lv32_1 = "1";
const sc_lv<32> simple_counter_counting::ap_const_lv32_3 = "11";
const sc_lv<32> simple_counter_counting::ap_const_lv32_0 = "00000000000000000000000000000000";
const bool simple_counter_counting::ap_const_boolean_1 = true;

simple_counter_counting::simple_counter_counting(sc_module_name name) : sc_module(name), mVcdFile(0) {

    SC_METHOD(thread_ap_clk_no_reset_);
    dont_initialize();
    sensitive << ( ap_clk.pos() );

    SC_METHOD(thread_ap_CS_fsm_state2);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state3);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state4);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_count_out);
    sensitive << ( tmp_reg_183 );
    sensitive << ( tmp_3_reg_187 );
    sensitive << ( v_fu_156_p2 );
    sensitive << ( ap_CS_fsm_state4 );

    SC_METHOD(thread_count_out_ap_vld);
    sensitive << ( tmp_reg_183 );
    sensitive << ( tmp_3_reg_187 );
    sensitive << ( ap_CS_fsm_state4 );

    SC_METHOD(thread_simple_counter_aux_V);
    sensitive << ( tmp_read_fu_106_p2 );
    sensitive << ( tmp_reg_183 );
    sensitive << ( ap_CS_fsm_state3 );
    sensitive << ( tmp_3_reg_187 );
    sensitive << ( ap_CS_fsm_state4 );
    sensitive << ( tmp_1_fu_131_p2 );

    SC_METHOD(thread_simple_counter_aux_V_ap_vld);
    sensitive << ( tmp_read_fu_106_p2 );
    sensitive << ( tmp_reg_183 );
    sensitive << ( ap_CS_fsm_state3 );
    sensitive << ( tmp_3_reg_187 );
    sensitive << ( ap_CS_fsm_state4 );

    SC_METHOD(thread_simple_counter_saida);
    sensitive << ( tmp_reg_183 );
    sensitive << ( tmp_3_reg_187 );
    sensitive << ( v_fu_156_p2 );
    sensitive << ( ap_CS_fsm_state4 );

    SC_METHOD(thread_simple_counter_saida_ap_vld);
    sensitive << ( tmp_reg_183 );
    sensitive << ( tmp_3_reg_187 );
    sensitive << ( ap_CS_fsm_state4 );

    SC_METHOD(thread_tmp_1_fu_131_p2);
    sensitive << ( simple_counter_aux_V_1_fu_78 );

    SC_METHOD(thread_tmp_2_fu_138_p1);
    sensitive << ( final );

    SC_METHOD(thread_tmp_3_fu_142_p2);
    sensitive << ( tmp_read_fu_106_p2 );
    sensitive << ( ap_CS_fsm_state3 );
    sensitive << ( tmp_1_fu_131_p2 );
    sensitive << ( tmp_2_fu_138_p1 );

    SC_METHOD(thread_tmp_read_fu_106_p2);
    sensitive << ( start );
    sensitive << ( ap_CS_fsm_state3 );

    SC_METHOD(thread_v_fu_156_p2);
    sensitive << ( v_1_fu_74 );

    SC_METHOD(thread_ap_NS_fsm);
    sensitive << ( ap_CS_fsm );

    ap_CS_fsm = "0001";
    static int apTFileNum = 0;
    stringstream apTFilenSS;
    apTFilenSS << "simple_counter_counting_sc_trace_" << apTFileNum ++;
    string apTFn = apTFilenSS.str();
    mVcdFile = sc_create_vcd_trace_file(apTFn.c_str());
    mVcdFile->set_time_unit(1, SC_PS);
    if (1) {
#ifdef __HLS_TRACE_LEVEL_PORT_HIER__
    sc_trace(mVcdFile, ap_clk, "(port)ap_clk");
    sc_trace(mVcdFile, ap_rst, "(port)ap_rst");
    sc_trace(mVcdFile, start, "(port)start");
    sc_trace(mVcdFile, final, "(port)final");
    sc_trace(mVcdFile, count_out, "(port)count_out");
    sc_trace(mVcdFile, count_out_ap_vld, "(port)count_out_ap_vld");
    sc_trace(mVcdFile, simple_counter_aux_V, "(port)simple_counter_aux_V");
    sc_trace(mVcdFile, simple_counter_aux_V_ap_vld, "(port)simple_counter_aux_V_ap_vld");
    sc_trace(mVcdFile, simple_counter_saida, "(port)simple_counter_saida");
    sc_trace(mVcdFile, simple_counter_saida_ap_vld, "(port)simple_counter_saida_ap_vld");
#endif
#ifdef __HLS_TRACE_LEVEL_INT__
    sc_trace(mVcdFile, tmp_read_fu_106_p2, "tmp_read_fu_106_p2");
    sc_trace(mVcdFile, tmp_reg_183, "tmp_reg_183");
    sc_trace(mVcdFile, ap_CS_fsm, "ap_CS_fsm");
    sc_trace(mVcdFile, ap_CS_fsm_state3, "ap_CS_fsm_state3");
    sc_trace(mVcdFile, tmp_3_fu_142_p2, "tmp_3_fu_142_p2");
    sc_trace(mVcdFile, tmp_3_reg_187, "tmp_3_reg_187");
    sc_trace(mVcdFile, v_1_fu_74, "v_1_fu_74");
    sc_trace(mVcdFile, ap_CS_fsm_state2, "ap_CS_fsm_state2");
    sc_trace(mVcdFile, v_fu_156_p2, "v_fu_156_p2");
    sc_trace(mVcdFile, ap_CS_fsm_state4, "ap_CS_fsm_state4");
    sc_trace(mVcdFile, simple_counter_aux_V_1_fu_78, "simple_counter_aux_V_1_fu_78");
    sc_trace(mVcdFile, tmp_1_fu_131_p2, "tmp_1_fu_131_p2");
    sc_trace(mVcdFile, tmp_2_fu_138_p1, "tmp_2_fu_138_p1");
    sc_trace(mVcdFile, ap_NS_fsm, "ap_NS_fsm");
#endif

    }
}

simple_counter_counting::~simple_counter_counting() {
    if (mVcdFile) 
        sc_close_vcd_trace_file(mVcdFile);

}

void simple_counter_counting::thread_ap_clk_no_reset_() {
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_CS_fsm = ap_ST_fsm_state1;
    } else {
        ap_CS_fsm = ap_NS_fsm.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_read_fu_106_p2.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(tmp_3_fu_142_p2.read(), ap_const_lv1_0))) {
        simple_counter_aux_V_1_fu_78 = tmp_1_fu_131_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(tmp_reg_183.read(), ap_const_lv1_1) && 
                 esl_seteq<1,1,1>(tmp_3_reg_187.read(), ap_const_lv1_1)))) {
        simple_counter_aux_V_1_fu_78 = ap_const_lv32_0;
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(tmp_reg_183.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(tmp_3_reg_187.read(), ap_const_lv1_1))) {
        v_1_fu_74 = v_fu_156_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        v_1_fu_74 = ap_const_lv1_0;
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && esl_seteq<1,1,1>(tmp_read_fu_106_p2.read(), ap_const_lv1_1))) {
        tmp_3_reg_187 = tmp_3_fu_142_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        tmp_reg_183 =  (sc_lv<1>) (start.read());
    }
}

void simple_counter_counting::thread_ap_CS_fsm_state2() {
    ap_CS_fsm_state2 = ap_CS_fsm.read()[1];
}

void simple_counter_counting::thread_ap_CS_fsm_state3() {
    ap_CS_fsm_state3 = ap_CS_fsm.read()[2];
}

void simple_counter_counting::thread_ap_CS_fsm_state4() {
    ap_CS_fsm_state4 = ap_CS_fsm.read()[3];
}

void simple_counter_counting::thread_count_out() {
    count_out =  (sc_logic) (v_fu_156_p2.read()[0]);
}

void simple_counter_counting::thread_count_out_ap_vld() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(tmp_reg_183.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(tmp_3_reg_187.read(), ap_const_lv1_1))) {
        count_out_ap_vld = ap_const_logic_1;
    } else {
        count_out_ap_vld = ap_const_logic_0;
    }
}

void simple_counter_counting::thread_simple_counter_aux_V() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(tmp_reg_183.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(tmp_3_reg_187.read(), ap_const_lv1_1))) {
        simple_counter_aux_V = ap_const_lv32_0;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                esl_seteq<1,1,1>(tmp_read_fu_106_p2.read(), ap_const_lv1_1))) {
        simple_counter_aux_V = tmp_1_fu_131_p2.read();
    } else {
        simple_counter_aux_V = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void simple_counter_counting::thread_simple_counter_aux_V_ap_vld() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_read_fu_106_p2.read(), ap_const_lv1_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(tmp_reg_183.read(), ap_const_lv1_1) && 
          esl_seteq<1,1,1>(tmp_3_reg_187.read(), ap_const_lv1_1)))) {
        simple_counter_aux_V_ap_vld = ap_const_logic_1;
    } else {
        simple_counter_aux_V_ap_vld = ap_const_logic_0;
    }
}

void simple_counter_counting::thread_simple_counter_saida() {
    simple_counter_saida =  (sc_logic) (v_fu_156_p2.read()[0]);
}

void simple_counter_counting::thread_simple_counter_saida_ap_vld() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(tmp_reg_183.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(tmp_3_reg_187.read(), ap_const_lv1_1))) {
        simple_counter_saida_ap_vld = ap_const_logic_1;
    } else {
        simple_counter_saida_ap_vld = ap_const_logic_0;
    }
}

void simple_counter_counting::thread_tmp_1_fu_131_p2() {
    tmp_1_fu_131_p2 = (!simple_counter_aux_V_1_fu_78.read().is_01() || !ap_const_lv32_1.is_01())? sc_lv<32>(): (sc_biguint<32>(simple_counter_aux_V_1_fu_78.read()) + sc_biguint<32>(ap_const_lv32_1));
}

void simple_counter_counting::thread_tmp_2_fu_138_p1() {
    tmp_2_fu_138_p1 = esl_zext<32,10>(final.read());
}

void simple_counter_counting::thread_tmp_3_fu_142_p2() {
    tmp_3_fu_142_p2 = (!tmp_1_fu_131_p2.read().is_01() || !tmp_2_fu_138_p1.read().is_01())? sc_lv<1>(): sc_lv<1>(tmp_1_fu_131_p2.read() == tmp_2_fu_138_p1.read());
}

void simple_counter_counting::thread_tmp_read_fu_106_p2() {
    tmp_read_fu_106_p2 =  (sc_lv<1>) (start.read());
}

void simple_counter_counting::thread_v_fu_156_p2() {
    v_fu_156_p2 = (v_1_fu_74.read() ^ ap_const_lv1_1);
}

void simple_counter_counting::thread_ap_NS_fsm() {
    switch (ap_CS_fsm.read().to_uint64()) {
        case 1 : 
            ap_NS_fsm = ap_ST_fsm_state2;
            break;
        case 2 : 
            ap_NS_fsm = ap_ST_fsm_state3;
            break;
        case 4 : 
            ap_NS_fsm = ap_ST_fsm_state4;
            break;
        case 8 : 
            ap_NS_fsm = ap_ST_fsm_state3;
            break;
        default : 
            ap_NS_fsm =  (sc_lv<4>) ("XXXX");
            break;
    }
}

}
