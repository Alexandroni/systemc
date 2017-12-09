#include "hls_design_meta.h"
const Port_Property HLS_Design_Meta::port_props[]={
	Port_Property("A", 1, hls_in, 0, "ap_none", "in_data", 1),
	Port_Property("B", 1, hls_in, 1, "ap_none", "in_data", 1),
	Port_Property("carryIn", 1, hls_in, 2, "ap_none", "in_data", 1),
	Port_Property("op", 2, hls_in, 3, "ap_none", "in_data", 1),
	Port_Property("C", 1, hls_out, 4, "ap_vld", "out_data", 1),
	Port_Property("carryOut", 1, hls_out, 5, "ap_vld", "out_data", 1),
};
const char* HLS_Design_Meta::dut_name = "ula_new::ula_new";
