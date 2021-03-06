// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2017.3
// Copyright (C) 1986-2017 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#include "translator.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

const sc_logic translator::ap_const_logic_1 = sc_dt::Log_1;
const sc_lv<1> translator::ap_const_lv1_0 = "0";
const sc_lv<32> translator::ap_const_lv32_1 = "1";
const sc_lv<1> translator::ap_const_lv1_1 = "1";
const sc_lv<2> translator::ap_const_lv2_0 = "00";
const sc_logic translator::ap_const_logic_0 = sc_dt::Log_0;
const bool translator::ap_const_boolean_1 = true;

translator::translator(sc_module_name name) : sc_module(name), mVcdFile(0) {
    translator_digits_U = new translator_transleOg("translator_digits_U");
    translator_digits_U->clk(ap_clk);
    translator_digits_U->reset(ap_rst);
    translator_digits_U->address0(grp_translator_transform_fu_48_translator_digits_address0);
    translator_digits_U->ce0(grp_translator_transform_fu_48_translator_digits_ce0);
    translator_digits_U->we0(grp_translator_transform_fu_48_translator_digits_we0);
    translator_digits_U->d0(grp_translator_transform_fu_48_translator_digits_d0);
    translator_digits_U->address1(grp_translator_transform_fu_48_translator_digits_address1);
    translator_digits_U->ce1(grp_translator_transform_fu_48_translator_digits_ce1);
    translator_digits_U->we1(grp_translator_transform_fu_48_translator_digits_we1);
    translator_digits_U->d1(grp_translator_transform_fu_48_translator_digits_d1);
    grp_translator_transform_fu_48 = new translator_transform("grp_translator_transform_fu_48");
    grp_translator_transform_fu_48->ap_clk(ap_clk);
    grp_translator_transform_fu_48->ap_rst(ap_rst);
    grp_translator_transform_fu_48->number(number);
    grp_translator_transform_fu_48->whichDisp(whichDisp);
    grp_translator_transform_fu_48->toDisp(grp_translator_transform_fu_48_toDisp);
    grp_translator_transform_fu_48->toDisp_ap_vld(grp_translator_transform_fu_48_toDisp_ap_vld);
    grp_translator_transform_fu_48->translator_disp(grp_translator_transform_fu_48_translator_disp);
    grp_translator_transform_fu_48->translator_disp_ap_vld(grp_translator_transform_fu_48_translator_disp_ap_vld);
    grp_translator_transform_fu_48->translator_digits_address0(grp_translator_transform_fu_48_translator_digits_address0);
    grp_translator_transform_fu_48->translator_digits_ce0(grp_translator_transform_fu_48_translator_digits_ce0);
    grp_translator_transform_fu_48->translator_digits_we0(grp_translator_transform_fu_48_translator_digits_we0);
    grp_translator_transform_fu_48->translator_digits_d0(grp_translator_transform_fu_48_translator_digits_d0);
    grp_translator_transform_fu_48->translator_digits_address1(grp_translator_transform_fu_48_translator_digits_address1);
    grp_translator_transform_fu_48->translator_digits_ce1(grp_translator_transform_fu_48_translator_digits_ce1);
    grp_translator_transform_fu_48->translator_digits_we1(grp_translator_transform_fu_48_translator_digits_we1);
    grp_translator_transform_fu_48->translator_digits_d1(grp_translator_transform_fu_48_translator_digits_d1);
    grp_translator_transform_fu_48->translator_transformed_i(translator_transformed);
    grp_translator_transform_fu_48->translator_transformed_o(grp_translator_transform_fu_48_translator_transformed_o);
    grp_translator_transform_fu_48->translator_transformed_o_ap_vld(grp_translator_transform_fu_48_translator_transformed_o_ap_vld);

    SC_METHOD(thread_toDisp);
    dont_initialize();
    sensitive << ( ap_clk.pos() );

    SC_METHOD(thread_translator_transformed);
    dont_initialize();
    sensitive << ( ap_clk.pos() );

    SC_METHOD(thread_ap_CS_fsm);

    SC_METHOD(thread_ap_CS_fsm_state2);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_translator_ssdm_t_load_fu_66_p1);

    SC_THREAD(thread_hdltv_gen);
    sensitive << ( ap_sc_inter_clock.posedge_event() );

    static int apTFileNum = 0;
    stringstream apTFilenSS;
    apTFilenSS << "translator_sc_trace_" << apTFileNum ++;
    string apTFn = apTFilenSS.str();
    mVcdFile = sc_create_vcd_trace_file(apTFn.c_str());
    mVcdFile->set_time_unit(1, SC_PS);
    if (1) {
#ifdef __HLS_TRACE_LEVEL_PORT__
    sc_trace(mVcdFile, number, "(port)number");
    sc_trace(mVcdFile, whichDisp, "(port)whichDisp");
    sc_trace(mVcdFile, toDisp, "(port)toDisp");
    sc_trace(mVcdFile, ap_clk, "(port)ap_clk");
    sc_trace(mVcdFile, ap_rst, "(port)ap_rst");
#endif
#ifdef __HLS_TRACE_LEVEL_INT__
    sc_trace(mVcdFile, translator_ssdm_t_load_fu_66_p1, "translator_ssdm_t_load_fu_66_p1");
    sc_trace(mVcdFile, ap_CS_fsm, "ap_CS_fsm");
    sc_trace(mVcdFile, grp_translator_transform_fu_48_toDisp, "grp_translator_transform_fu_48_toDisp");
    sc_trace(mVcdFile, grp_translator_transform_fu_48_toDisp_ap_vld, "grp_translator_transform_fu_48_toDisp_ap_vld");
    sc_trace(mVcdFile, grp_translator_transform_fu_48_translator_disp, "grp_translator_transform_fu_48_translator_disp");
    sc_trace(mVcdFile, grp_translator_transform_fu_48_translator_disp_ap_vld, "grp_translator_transform_fu_48_translator_disp_ap_vld");
    sc_trace(mVcdFile, grp_translator_transform_fu_48_translator_digits_address0, "grp_translator_transform_fu_48_translator_digits_address0");
    sc_trace(mVcdFile, grp_translator_transform_fu_48_translator_digits_ce0, "grp_translator_transform_fu_48_translator_digits_ce0");
    sc_trace(mVcdFile, grp_translator_transform_fu_48_translator_digits_we0, "grp_translator_transform_fu_48_translator_digits_we0");
    sc_trace(mVcdFile, grp_translator_transform_fu_48_translator_digits_d0, "grp_translator_transform_fu_48_translator_digits_d0");
    sc_trace(mVcdFile, grp_translator_transform_fu_48_translator_digits_address1, "grp_translator_transform_fu_48_translator_digits_address1");
    sc_trace(mVcdFile, grp_translator_transform_fu_48_translator_digits_ce1, "grp_translator_transform_fu_48_translator_digits_ce1");
    sc_trace(mVcdFile, grp_translator_transform_fu_48_translator_digits_we1, "grp_translator_transform_fu_48_translator_digits_we1");
    sc_trace(mVcdFile, grp_translator_transform_fu_48_translator_digits_d1, "grp_translator_transform_fu_48_translator_digits_d1");
    sc_trace(mVcdFile, grp_translator_transform_fu_48_translator_transformed_o, "grp_translator_transform_fu_48_translator_transformed_o");
    sc_trace(mVcdFile, grp_translator_transform_fu_48_translator_transformed_o_ap_vld, "grp_translator_transform_fu_48_translator_transformed_o_ap_vld");
    sc_trace(mVcdFile, ap_CS_fsm_state2, "ap_CS_fsm_state2");
    sc_trace(mVcdFile, translator_transformed, "translator_transformed");
#endif

    }
    mHdltvinHandle.open("translator.hdltvin.dat");
    mHdltvoutHandle.open("translator.hdltvout.dat");
}

translator::~translator() {
    if (mVcdFile) 
        sc_close_vcd_trace_file(mVcdFile);

    mHdltvinHandle << "] " << endl;
    mHdltvoutHandle << "] " << endl;
    mHdltvinHandle.close();
    mHdltvoutHandle.close();
    delete translator_digits_U;
    delete grp_translator_transform_fu_48;
}

void translator::thread_toDisp() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, grp_translator_transform_fu_48_toDisp_ap_vld.read())) {
        toDisp = grp_translator_transform_fu_48_toDisp.read();
    }
}

void translator::thread_translator_transformed() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, grp_translator_transform_fu_48_translator_transformed_o_ap_vld.read())) {
        translator_transformed = grp_translator_transform_fu_48_translator_transformed_o.read();
    }
}

void translator::thread_ap_CS_fsm() {
    ap_CS_fsm = ap_const_lv2_0;
}

void translator::thread_ap_CS_fsm_state2() {
    ap_CS_fsm_state2 = ap_CS_fsm.read()[1];
}

void translator::thread_translator_ssdm_t_load_fu_66_p1() {
    translator_ssdm_t_load_fu_66_p1 = ap_const_lv1_0;
}

void translator::thread_hdltv_gen() {
    const char* dump_tv = std::getenv("AP_WRITE_TV");
    if (!(dump_tv && string(dump_tv) == "on")) return;

    wait();

    mHdltvinHandle << "[ " << endl;
    mHdltvoutHandle << "[ " << endl;
    int ap_cycleNo = 0;
    while (1) {
        wait();
        const char* mComma = ap_cycleNo == 0 ? " " : ", " ;
        mHdltvinHandle << mComma << "{"  <<  " \"number\" :  \"" << number.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"whichDisp\" :  \"" << whichDisp.read() << "\" ";
        mHdltvoutHandle << mComma << "{"  <<  " \"toDisp\" :  \"" << toDisp.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"ap_rst\" :  \"" << ap_rst.read() << "\" ";
        mHdltvinHandle << "}" << std::endl;
        mHdltvoutHandle << "}" << std::endl;
        ap_cycleNo++;
    }
}

}

