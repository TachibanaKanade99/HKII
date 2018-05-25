-- Copyright (C) 2016  Intel Corporation. All rights reserved.
-- Your use of Intel Corporation's design tools, logic functions 
-- and other software and tools, and its AMPP partner logic 
-- functions, and any output files from any of the foregoing 
-- (including device programming or simulation files), and any 
-- associated documentation or information are expressly subject 
-- to the terms and conditions of the Intel Program License 
-- Subscription Agreement, the Intel Quartus Prime License Agreement,
-- the Intel MegaCore Function License Agreement, or other 
-- applicable license agreement, including, without limitation, 
-- that your use is for the sole purpose of programming logic 
-- devices manufactured by Intel and sold by Intel or its 
-- authorized distributors.  Please refer to the applicable 
-- agreement for further details.

-- VENDOR "Altera"
-- PROGRAM "Quartus Prime"
-- VERSION "Version 16.1.0 Build 196 10/24/2016 SJ Lite Edition"

-- DATE "03/16/2018 01:15:31"

-- 
-- Device: Altera EP4CGX15BF14C6 Package FBGA169
-- 

-- 
-- This VHDL file should be used for ModelSim-Altera (VHDL) only
-- 

LIBRARY CYCLONEIV;
LIBRARY IEEE;
USE CYCLONEIV.CYCLONEIV_COMPONENTS.ALL;
USE IEEE.STD_LOGIC_1164.ALL;

ENTITY 	hard_block IS
    PORT (
	devoe : IN std_logic;
	devclrn : IN std_logic;
	devpor : IN std_logic
	);
END hard_block;

-- Design Ports Information
-- ~ALTERA_NCEO~	=>  Location: PIN_N5,	 I/O Standard: 2.5 V,	 Current Strength: 16mA
-- ~ALTERA_DATA0~	=>  Location: PIN_A5,	 I/O Standard: 2.5 V,	 Current Strength: Default
-- ~ALTERA_ASDO~	=>  Location: PIN_B5,	 I/O Standard: 2.5 V,	 Current Strength: Default
-- ~ALTERA_NCSO~	=>  Location: PIN_C5,	 I/O Standard: 2.5 V,	 Current Strength: Default
-- ~ALTERA_DCLK~	=>  Location: PIN_A4,	 I/O Standard: 2.5 V,	 Current Strength: Default


ARCHITECTURE structure OF hard_block IS
SIGNAL gnd : std_logic := '0';
SIGNAL vcc : std_logic := '1';
SIGNAL unknown : std_logic := 'X';
SIGNAL ww_devoe : std_logic;
SIGNAL ww_devclrn : std_logic;
SIGNAL ww_devpor : std_logic;
SIGNAL \~ALTERA_DATA0~~padout\ : std_logic;
SIGNAL \~ALTERA_ASDO~~padout\ : std_logic;
SIGNAL \~ALTERA_NCSO~~padout\ : std_logic;
SIGNAL \~ALTERA_DATA0~~ibuf_o\ : std_logic;
SIGNAL \~ALTERA_ASDO~~ibuf_o\ : std_logic;
SIGNAL \~ALTERA_NCSO~~ibuf_o\ : std_logic;

BEGIN

ww_devoe <= devoe;
ww_devclrn <= devclrn;
ww_devpor <= devpor;
END structure;


LIBRARY CYCLONEIV;
LIBRARY IEEE;
USE CYCLONEIV.CYCLONEIV_COMPONENTS.ALL;
USE IEEE.STD_LOGIC_1164.ALL;

ENTITY 	ex3 IS
    PORT (
	f : BUFFER std_logic;
	g : BUFFER std_logic;
	h : BUFFER std_logic;
	x1 : IN std_logic_vector(1 DOWNTO 0);
	x2 : IN std_logic_vector(1 DOWNTO 0);
	x3 : IN std_logic_vector(1 DOWNTO 0);
	x4 : IN std_logic_vector(1 DOWNTO 0)
	);
END ex3;

-- Design Ports Information
-- f	=>  Location: PIN_K9,	 I/O Standard: 2.5 V,	 Current Strength: Default
-- g	=>  Location: PIN_M6,	 I/O Standard: 2.5 V,	 Current Strength: Default
-- h	=>  Location: PIN_N8,	 I/O Standard: 2.5 V,	 Current Strength: Default
-- x1[0]	=>  Location: PIN_K8,	 I/O Standard: 2.5 V,	 Current Strength: Default
-- x2[0]	=>  Location: PIN_N9,	 I/O Standard: 2.5 V,	 Current Strength: Default
-- x4[0]	=>  Location: PIN_M9,	 I/O Standard: 2.5 V,	 Current Strength: Default
-- x3[0]	=>  Location: PIN_N4,	 I/O Standard: 2.5 V,	 Current Strength: Default
-- x1[1]	=>  Location: PIN_L7,	 I/O Standard: 2.5 V,	 Current Strength: Default
-- x4[1]	=>  Location: PIN_N6,	 I/O Standard: 2.5 V,	 Current Strength: Default
-- x2[1]	=>  Location: PIN_N11,	 I/O Standard: 2.5 V,	 Current Strength: Default
-- x3[1]	=>  Location: PIN_L9,	 I/O Standard: 2.5 V,	 Current Strength: Default


ARCHITECTURE structure OF ex3 IS
SIGNAL gnd : std_logic := '0';
SIGNAL vcc : std_logic := '1';
SIGNAL unknown : std_logic := 'X';
SIGNAL devoe : std_logic := '1';
SIGNAL devclrn : std_logic := '1';
SIGNAL devpor : std_logic := '1';
SIGNAL ww_devoe : std_logic;
SIGNAL ww_devclrn : std_logic;
SIGNAL ww_devpor : std_logic;
SIGNAL ww_f : std_logic;
SIGNAL ww_g : std_logic;
SIGNAL ww_h : std_logic;
SIGNAL ww_x1 : std_logic_vector(1 DOWNTO 0);
SIGNAL ww_x2 : std_logic_vector(1 DOWNTO 0);
SIGNAL ww_x3 : std_logic_vector(1 DOWNTO 0);
SIGNAL ww_x4 : std_logic_vector(1 DOWNTO 0);
SIGNAL \f~output_o\ : std_logic;
SIGNAL \g~output_o\ : std_logic;
SIGNAL \h~output_o\ : std_logic;
SIGNAL \x3[0]~input_o\ : std_logic;
SIGNAL \x2[0]~input_o\ : std_logic;
SIGNAL \x4[0]~input_o\ : std_logic;
SIGNAL \x1[0]~input_o\ : std_logic;
SIGNAL \g_1~combout\ : std_logic;
SIGNAL \x1[1]~input_o\ : std_logic;
SIGNAL \x4[1]~input_o\ : std_logic;
SIGNAL \x3[1]~input_o\ : std_logic;
SIGNAL \x2[1]~input_o\ : std_logic;
SIGNAL \h_1~0_combout\ : std_logic;
SIGNAL \f_1~combout\ : std_logic;

COMPONENT hard_block
    PORT (
	devoe : IN std_logic;
	devclrn : IN std_logic;
	devpor : IN std_logic);
END COMPONENT;

BEGIN

f <= ww_f;
g <= ww_g;
h <= ww_h;
ww_x1 <= x1;
ww_x2 <= x2;
ww_x3 <= x3;
ww_x4 <= x4;
ww_devoe <= devoe;
ww_devclrn <= devclrn;
ww_devpor <= devpor;
auto_generated_inst : hard_block
PORT MAP (
	devoe => ww_devoe,
	devclrn => ww_devclrn,
	devpor => ww_devpor);

-- Location: IOOBUF_X22_Y0_N2
\f~output\ : cycloneiv_io_obuf
-- pragma translate_off
GENERIC MAP (
	bus_hold => "false",
	open_drain_output => "false")
-- pragma translate_on
PORT MAP (
	i => \f_1~combout\,
	devoe => ww_devoe,
	o => \f~output_o\);

-- Location: IOOBUF_X12_Y0_N9
\g~output\ : cycloneiv_io_obuf
-- pragma translate_off
GENERIC MAP (
	bus_hold => "false",
	open_drain_output => "false")
-- pragma translate_on
PORT MAP (
	i => \g_1~combout\,
	devoe => ww_devoe,
	o => \g~output_o\);

-- Location: IOOBUF_X20_Y0_N9
\h~output\ : cycloneiv_io_obuf
-- pragma translate_off
GENERIC MAP (
	bus_hold => "false",
	open_drain_output => "false")
-- pragma translate_on
PORT MAP (
	i => \h_1~0_combout\,
	devoe => ww_devoe,
	o => \h~output_o\);

-- Location: IOIBUF_X10_Y0_N8
\x3[0]~input\ : cycloneiv_io_ibuf
-- pragma translate_off
GENERIC MAP (
	bus_hold => "false",
	simulate_z_as => "z")
-- pragma translate_on
PORT MAP (
	i => ww_x3(0),
	o => \x3[0]~input_o\);

-- Location: IOIBUF_X20_Y0_N1
\x2[0]~input\ : cycloneiv_io_ibuf
-- pragma translate_off
GENERIC MAP (
	bus_hold => "false",
	simulate_z_as => "z")
-- pragma translate_on
PORT MAP (
	i => ww_x2(0),
	o => \x2[0]~input_o\);

-- Location: IOIBUF_X24_Y0_N1
\x4[0]~input\ : cycloneiv_io_ibuf
-- pragma translate_off
GENERIC MAP (
	bus_hold => "false",
	simulate_z_as => "z")
-- pragma translate_on
PORT MAP (
	i => ww_x4(0),
	o => \x4[0]~input_o\);

-- Location: IOIBUF_X22_Y0_N8
\x1[0]~input\ : cycloneiv_io_ibuf
-- pragma translate_off
GENERIC MAP (
	bus_hold => "false",
	simulate_z_as => "z")
-- pragma translate_on
PORT MAP (
	i => ww_x1(0),
	o => \x1[0]~input_o\);

-- Location: LCCOMB_X20_Y1_N8
g_1 : cycloneiv_lcell_comb
-- Equation(s):
-- \g_1~combout\ = (\x3[0]~input_o\ & ((\x1[0]~input_o\) # ((\x2[0]~input_o\ & \x4[0]~input_o\)))) # (!\x3[0]~input_o\ & (\x2[0]~input_o\ & (\x4[0]~input_o\)))

-- pragma translate_off
GENERIC MAP (
	lut_mask => "1110101011000000",
	sum_lutc_input => "datac")
-- pragma translate_on
PORT MAP (
	dataa => \x3[0]~input_o\,
	datab => \x2[0]~input_o\,
	datac => \x4[0]~input_o\,
	datad => \x1[0]~input_o\,
	combout => \g_1~combout\);

-- Location: IOIBUF_X14_Y0_N1
\x1[1]~input\ : cycloneiv_io_ibuf
-- pragma translate_off
GENERIC MAP (
	bus_hold => "false",
	simulate_z_as => "z")
-- pragma translate_on
PORT MAP (
	i => ww_x1(1),
	o => \x1[1]~input_o\);

-- Location: IOIBUF_X12_Y0_N1
\x4[1]~input\ : cycloneiv_io_ibuf
-- pragma translate_off
GENERIC MAP (
	bus_hold => "false",
	simulate_z_as => "z")
-- pragma translate_on
PORT MAP (
	i => ww_x4(1),
	o => \x4[1]~input_o\);

-- Location: IOIBUF_X24_Y0_N8
\x3[1]~input\ : cycloneiv_io_ibuf
-- pragma translate_off
GENERIC MAP (
	bus_hold => "false",
	simulate_z_as => "z")
-- pragma translate_on
PORT MAP (
	i => ww_x3(1),
	o => \x3[1]~input_o\);

-- Location: IOIBUF_X26_Y0_N1
\x2[1]~input\ : cycloneiv_io_ibuf
-- pragma translate_off
GENERIC MAP (
	bus_hold => "false",
	simulate_z_as => "z")
-- pragma translate_on
PORT MAP (
	i => ww_x2(1),
	o => \x2[1]~input_o\);

-- Location: LCCOMB_X20_Y1_N10
\h_1~0\ : cycloneiv_lcell_comb
-- Equation(s):
-- \h_1~0_combout\ = (\x1[1]~input_o\ & ((\x4[1]~input_o\) # ((!\x2[1]~input_o\)))) # (!\x1[1]~input_o\ & (!\x3[1]~input_o\ & ((\x4[1]~input_o\) # (!\x2[1]~input_o\))))

-- pragma translate_off
GENERIC MAP (
	lut_mask => "1000110010101111",
	sum_lutc_input => "datac")
-- pragma translate_on
PORT MAP (
	dataa => \x1[1]~input_o\,
	datab => \x4[1]~input_o\,
	datac => \x3[1]~input_o\,
	datad => \x2[1]~input_o\,
	combout => \h_1~0_combout\);

-- Location: LCCOMB_X20_Y1_N20
f_1 : cycloneiv_lcell_comb
-- Equation(s):
-- \f_1~combout\ = (\g_1~combout\) # (\h_1~0_combout\)

-- pragma translate_off
GENERIC MAP (
	lut_mask => "1111111111110000",
	sum_lutc_input => "datac")
-- pragma translate_on
PORT MAP (
	datac => \g_1~combout\,
	datad => \h_1~0_combout\,
	combout => \f_1~combout\);

ww_f <= \f~output_o\;

ww_g <= \g~output_o\;

ww_h <= \h~output_o\;
END structure;


