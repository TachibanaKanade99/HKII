module mux_2_to_1(out, select, a, b);
	//output
	output [3:0]out;
	//input
	input select;
	input [3:0]a;
	input [3:0]b;
	
	//wire
	wire [7:0]and_wire;
	wire [3:0]not_wire;
	
	and and_0(and_wire[0], select, a[0]);
	and and_1(and_wire[1], select, b[0]);
	and and_2(and_wire[2], select, a[1]);
	and and_3(and_wire[3], select, b[1]);
	and and_4(and_wire[4], select, a[2]);
	and and_5(and_wire[5], select, b[2]);
	and and_6(and_wire[6], select, a[3]);
	and and_7(and_wire[7], select, b[3]);
	or or1(out[0], and_wire[0], and_wire[1]);
	or or2(out[1], and_wire[2], and_wire[3]);
	or or3(out[2], and_wire[4], and_wire[5]);
	or or4(out[3], and_wire[6], and_wire[7]);

	endmodule 