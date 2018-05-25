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

-- *****************************************************************************
-- This file contains a Vhdl test bench with test vectors .The test vectors     
-- are exported from a vector file in the Quartus Waveform Editor and apply to  
-- the top level entity of the current Quartus project .The user can use this   
-- testbench to simulate his design using a third-party simulation tool .       
-- *****************************************************************************
-- Generated on "03/16/2018 00:32:53"
                                                             
-- Vhdl Test Bench(with test vectors) for design  :          ex3
-- 
-- Simulation tool : 3rd Party
-- 

LIBRARY ieee;                                               
USE ieee.std_logic_1164.all;                                

ENTITY ex3_vhd_vec_tst IS
END ex3_vhd_vec_tst;
ARCHITECTURE ex3_arch OF ex3_vhd_vec_tst IS
-- constants                                                 
-- signals                                                   
SIGNAL f : STD_LOGIC;
SIGNAL g : STD_LOGIC;
SIGNAL h : STD_LOGIC;
SIGNAL x1 : STD_LOGIC_VECTOR(1 DOWNTO 0);
SIGNAL x2 : STD_LOGIC_VECTOR(1 DOWNTO 0);
SIGNAL x3 : STD_LOGIC_VECTOR(1 DOWNTO 0);
SIGNAL x4 : STD_LOGIC_VECTOR(1 DOWNTO 0);
COMPONENT ex3
	PORT (
	f : OUT STD_LOGIC;
	g : OUT STD_LOGIC;
	h : OUT STD_LOGIC;
	x1 : IN STD_LOGIC_VECTOR(1 DOWNTO 0);
	x2 : IN STD_LOGIC_VECTOR(1 DOWNTO 0);
	x3 : IN STD_LOGIC_VECTOR(1 DOWNTO 0);
	x4 : IN STD_LOGIC_VECTOR(1 DOWNTO 0)
	);
END COMPONENT;
BEGIN
	i1 : ex3
	PORT MAP (
-- list connections between master ports and signals
	f => f,
	g => g,
	h => h,
	x1 => x1,
	x2 => x2,
	x3 => x3,
	x4 => x4
	);
-- x1[1]
t_prcs_x1_1: PROCESS
BEGIN
LOOP
	x1(1) <= '0';
	WAIT FOR 1000000 ps;
	x1(1) <= '1';
	WAIT FOR 1000000 ps;
	IF (NOW >= 16000000 ps) THEN WAIT; END IF;
END LOOP;
END PROCESS t_prcs_x1_1;
-- x1[0]
t_prcs_x1_0: PROCESS
BEGIN
LOOP
	x1(0) <= '0';
	WAIT FOR 1000000 ps;
	x1(0) <= '1';
	WAIT FOR 1000000 ps;
	IF (NOW >= 16000000 ps) THEN WAIT; END IF;
END LOOP;
END PROCESS t_prcs_x1_0;
-- x2[1]
t_prcs_x2_1: PROCESS
BEGIN
LOOP
	x2(1) <= '0';
	WAIT FOR 2000000 ps;
	x2(1) <= '1';
	WAIT FOR 2000000 ps;
	IF (NOW >= 16000000 ps) THEN WAIT; END IF;
END LOOP;
END PROCESS t_prcs_x2_1;
-- x2[0]
t_prcs_x2_0: PROCESS
BEGIN
LOOP
	x2(0) <= '0';
	WAIT FOR 2000000 ps;
	x2(0) <= '1';
	WAIT FOR 2000000 ps;
	IF (NOW >= 16000000 ps) THEN WAIT; END IF;
END LOOP;
END PROCESS t_prcs_x2_0;
-- x3[1]
t_prcs_x3_1: PROCESS
BEGIN
LOOP
	x3(1) <= '0';
	WAIT FOR 4000000 ps;
	x3(1) <= '1';
	WAIT FOR 4000000 ps;
	IF (NOW >= 16000000 ps) THEN WAIT; END IF;
END LOOP;
END PROCESS t_prcs_x3_1;
-- x3[0]
t_prcs_x3_0: PROCESS
BEGIN
LOOP
	x3(0) <= '0';
	WAIT FOR 4000000 ps;
	x3(0) <= '1';
	WAIT FOR 4000000 ps;
	IF (NOW >= 16000000 ps) THEN WAIT; END IF;
END LOOP;
END PROCESS t_prcs_x3_0;
-- x4[1]
t_prcs_x4_1: PROCESS
BEGIN
LOOP
	x4(1) <= '0';
	WAIT FOR 8000000 ps;
	x4(1) <= '1';
	WAIT FOR 8000000 ps;
	IF (NOW >= 16000000 ps) THEN WAIT; END IF;
END LOOP;
END PROCESS t_prcs_x4_1;
-- x4[0]
t_prcs_x4_0: PROCESS
BEGIN
LOOP
	x4(0) <= '0';
	WAIT FOR 8000000 ps;
	x4(0) <= '1';
	WAIT FOR 8000000 ps;
	IF (NOW >= 16000000 ps) THEN WAIT; END IF;
END LOOP;
END PROCESS t_prcs_x4_0;
END ex3_arch;
