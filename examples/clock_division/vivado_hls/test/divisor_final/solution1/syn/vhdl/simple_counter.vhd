-- ==============================================================
-- RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
-- Version: 2017.3
-- Copyright (C) 1986-2017 Xilinx, Inc. All Rights Reserved.
-- 
-- ===========================================================

library IEEE;
use IEEE.std_logic_1164.all;
use IEEE.numeric_std.all;

entity simple_counter is
port (
    start : IN STD_LOGIC;
    clk : IN STD_LOGIC;
    reset : IN STD_LOGIC;
    final : IN STD_LOGIC_VECTOR (9 downto 0);
    count_out : OUT STD_LOGIC := '0' );
end;


architecture behav of simple_counter is 
    attribute CORE_GENERATION_INFO : STRING;
    attribute CORE_GENERATION_INFO of behav : architecture is
    "simple_counter,hls_ip_2017_3,{HLS_INPUT_TYPE=sc,HLS_INPUT_FLOAT=0,HLS_INPUT_FIXED=0,HLS_INPUT_PART=xc7a200tfbg676-2,HLS_INPUT_CLOCK=10.000000,HLS_INPUT_ARCH=others,HLS_SYN_CLOCK=4.291000,HLS_SYN_LAT=3,HLS_SYN_TPT=none,HLS_SYN_MEM=0,HLS_SYN_DSP=0,HLS_SYN_FF=40,HLS_SYN_LUT=125}";
    constant ap_const_logic_1 : STD_LOGIC := '1';
    constant ap_const_lv1_0 : STD_LOGIC_VECTOR (0 downto 0) := "0";
    constant ap_const_lv32_1 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000001";
    constant ap_const_lv2_0 : STD_LOGIC_VECTOR (1 downto 0) := "00";
    constant ap_const_logic_0 : STD_LOGIC := '0';
    constant ap_const_boolean_1 : BOOLEAN := true;

    signal grp_simple_counter_counting_fu_54_count_out : STD_LOGIC;
    signal grp_simple_counter_counting_fu_54_count_out_ap_vld : STD_LOGIC;
    signal grp_simple_counter_counting_fu_54_simple_counter_aux_V : STD_LOGIC_VECTOR (31 downto 0);
    signal grp_simple_counter_counting_fu_54_simple_counter_aux_V_ap_vld : STD_LOGIC;
    signal grp_simple_counter_counting_fu_54_simple_counter_saida : STD_LOGIC;
    signal grp_simple_counter_counting_fu_54_simple_counter_saida_ap_vld : STD_LOGIC;
    signal ap_CS_fsm : STD_LOGIC_VECTOR (1 downto 0);
    attribute fsm_encoding : string;
    attribute fsm_encoding of ap_CS_fsm : signal is "none";
    signal ap_CS_fsm_state2 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state2 : signal is "none";

    component simple_counter_counting IS
    port (
        ap_clk : IN STD_LOGIC;
        ap_rst : IN STD_LOGIC;
        start : IN STD_LOGIC;
        final : IN STD_LOGIC_VECTOR (9 downto 0);
        count_out : OUT STD_LOGIC;
        count_out_ap_vld : OUT STD_LOGIC;
        simple_counter_aux_V : OUT STD_LOGIC_VECTOR (31 downto 0);
        simple_counter_aux_V_ap_vld : OUT STD_LOGIC;
        simple_counter_saida : OUT STD_LOGIC;
        simple_counter_saida_ap_vld : OUT STD_LOGIC );
    end component;



begin
    grp_simple_counter_counting_fu_54 : component simple_counter_counting
    port map (
        ap_clk => clk,
        ap_rst => reset,
        start => start,
        final => final,
        count_out => grp_simple_counter_counting_fu_54_count_out,
        count_out_ap_vld => grp_simple_counter_counting_fu_54_count_out_ap_vld,
        simple_counter_aux_V => grp_simple_counter_counting_fu_54_simple_counter_aux_V,
        simple_counter_aux_V_ap_vld => grp_simple_counter_counting_fu_54_simple_counter_aux_V_ap_vld,
        simple_counter_saida => grp_simple_counter_counting_fu_54_simple_counter_saida,
        simple_counter_saida_ap_vld => grp_simple_counter_counting_fu_54_simple_counter_saida_ap_vld);





    count_out_assign_proc : process(clk)
    begin
        if (clk'event and clk =  '1') then
            if (reset = '1') then
                count_out <= ap_const_logic_0;
            else
                if ((ap_const_logic_1 = grp_simple_counter_counting_fu_54_count_out_ap_vld)) then 
                    count_out <= grp_simple_counter_counting_fu_54_count_out;
                end if; 
            end if;
        end if;
    end process;

    ap_CS_fsm <= ap_const_lv2_0;
    ap_CS_fsm_state2 <= ap_CS_fsm(1);
end behav;
