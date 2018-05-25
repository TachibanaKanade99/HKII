module ex3(f, g, h, x1, x2, x3, x4);
	//output
	output f;
	output g;
	output h;
	//input
	//input g;
	//input h;
	input [1:0]x1;
	input	[1:0]x2;
	input	[1:0]x3;
	input	[1:0]x4;
	//wire
	wire [1:0]not_wire;
	wire [1:0]and_wire;
	wire [1:0]or_wire;
	//gate
	not not_0(not_wire[0],x3[1]);
	not not_1(not_wire[1], x2[1]);
	and and_0(and_wire[0], x1[0], x3[0]);
	and and_1(and_wire[1], x2[0], x4[0]);
	or or_0(or_wire[0], x1[1], not_wire[0]);
	or or_1(or_wire[1], not_wire[1], x4[1]);
	or g_1(g, and_wire[0], and_wire[1]);
	and h_1(h, or_wire[0], or_wire[1]);
	or f_1(f, g, h);
endmodule
	