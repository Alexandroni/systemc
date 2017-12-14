// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2017.3
// Copyright (C) 1986-2017 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#include "ula_new.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

const sc_lv<1> ula_new::ap_const_lv1_0 = "0";
const sc_lv<1> ula_new::ap_const_lv1_1 = "1";
const sc_logic ula_new::ap_const_logic_1 = sc_dt::Log_1;
const sc_logic ula_new::ap_const_logic_0 = sc_dt::Log_0;
const bool ula_new::ap_const_boolean_1 = true;

ula_new::ula_new(sc_module_name name) : sc_module(name), mVcdFile(0) {
    StgValue_9_ula_new_opUla_fu_42 = new ula_new_opUla("StgValue_9_ula_new_opUla_fu_42");
    StgValue_9_ula_new_opUla_fu_42->A(A);
    StgValue_9_ula_new_opUla_fu_42->B(B);
    StgValue_9_ula_new_opUla_fu_42->op(op);
    StgValue_9_ula_new_opUla_fu_42->C(StgValue_9_ula_new_opUla_fu_42_C);
    StgValue_9_ula_new_opUla_fu_42->C_ap_vld(StgValue_9_ula_new_opUla_fu_42_C_ap_vld);

    SC_METHOD(thread_C);
    sensitive << ( StgValue_9_ula_new_opUla_fu_42_C );
    sensitive << ( StgValue_9_ula_new_opUla_fu_42_C_ap_vld );

    SC_METHOD(thread_ula_new_ssdm_thre_load_fu_54_p1);

    SC_THREAD(thread_hdltv_gen);
    sensitive << ( ap_sc_inter_clock.posedge_event() );

    static int apTFileNum = 0;
    stringstream apTFilenSS;
    apTFilenSS << "ula_new_sc_trace_" << apTFileNum ++;
    string apTFn = apTFilenSS.str();
    mVcdFile = sc_create_vcd_trace_file(apTFn.c_str());
    mVcdFile->set_time_unit(1, SC_PS);
    if (1) {
#ifdef __HLS_TRACE_LEVEL_PORT__
    sc_trace(mVcdFile, A, "(port)A");
    sc_trace(mVcdFile, B, "(port)B");
    sc_trace(mVcdFile, op, "(port)op");
    sc_trace(mVcdFile, C, "(port)C");
#endif
#ifdef __HLS_TRACE_LEVEL_INT__
    sc_trace(mVcdFile, StgValue_9_ula_new_opUla_fu_42_C, "StgValue_9_ula_new_opUla_fu_42_C");
    sc_trace(mVcdFile, StgValue_9_ula_new_opUla_fu_42_C_ap_vld, "StgValue_9_ula_new_opUla_fu_42_C_ap_vld");
    sc_trace(mVcdFile, ula_new_ssdm_thre_load_fu_54_p1, "ula_new_ssdm_thre_load_fu_54_p1");
#endif

    }
    mHdltvinHandle.open("ula_new.hdltvin.dat");
    mHdltvoutHandle.open("ula_new.hdltvout.dat");
}

ula_new::~ula_new() {
    if (mVcdFile) 
        sc_close_vcd_trace_file(mVcdFile);

    mHdltvinHandle << "] " << endl;
    mHdltvoutHandle << "] " << endl;
    mHdltvinHandle.close();
    mHdltvoutHandle.close();
    delete StgValue_9_ula_new_opUla_fu_42;
}

void ula_new::thread_C() {
    C = StgValue_9_ula_new_opUla_fu_42_C.read();
}

void ula_new::thread_ula_new_ssdm_thre_load_fu_54_p1() {
    ula_new_ssdm_thre_load_fu_54_p1 = ap_const_lv1_0;
}

void ula_new::thread_hdltv_gen() {
    const char* dump_tv = std::getenv("AP_WRITE_TV");
    if (!(dump_tv && string(dump_tv) == "on")) return;

    wait();

    mHdltvinHandle << "[ " << endl;
    mHdltvoutHandle << "[ " << endl;
    int ap_cycleNo = 0;
    while (1) {
        wait();
        const char* mComma = ap_cycleNo == 0 ? " " : ", " ;
        mHdltvinHandle << mComma << "{"  <<  " \"A\" :  \"" << A.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"B\" :  \"" << B.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"op\" :  \"" << op.read() << "\" ";
        mHdltvoutHandle << mComma << "{"  <<  " \"C\" :  \"" << C.read() << "\" ";
        mHdltvinHandle << "}" << std::endl;
        mHdltvoutHandle << "}" << std::endl;
        ap_cycleNo++;
    }
}

}
