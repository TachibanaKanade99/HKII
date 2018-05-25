module Ex2(out, clk0_n, clk1_n, mr1, mr2, ms1, ms2);
	output [0:3]out;
	input clk0_n;
	input [0:1]clk1_n;
	input mr1, mr2;
	input ms1, ms2;
	
	wire [0:3]pre_n;
	wire [0:3]clr_n;
	
	assign pre_n = (ms1 & ms2) ? (4'b0110) : (4'b1111); 
	assign clr_n = (mr1 & mr2) & (ms1 | ms2) ? (0) : (1); 
	
	jk_ff_async jk_ff0(
							.q(out[0]),
							.q_n(),
							.clk_n(clk0_n),
							.pre_n(pre_n[0]),
							.clr_n(clr_n[0]),
							.j(1),
							.k(1)
							);
	jk_ff_async jk_ff1(
							.q(out[1]),
							.q_n(),
							.clk_n(clk1_n[0]),
							.pre_n(pre_n[1]),
							.clr_n(clr_n[1]),
							.j(~out[3]),
							.k(1)
							);
	jk_ff_async jk_ff2(
							.q(out[2]),
							.q_n(),
							.clk_n(out[1]),
							.pre_n(pre_n[2]),
							.clr_n(clr_n[2]),
							.j(1),
							.k(1)
							);
							
	assign and1 = out[1] & out[2];
			sr_ff sr_ff0(
							.q(out[3]),
							.q_n(),
							.clk_n(clk1_n[1]),
							.pre_n(pre_n[3]),
							.clr_n(clr_n[3]),
							.s(and1),
							.r(out[3])
							);
							
endmodule 
							