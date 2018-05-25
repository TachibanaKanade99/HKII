module d_ff_s(q, q_n, clk, d);
	output q;
	reg q;
	output q_n;
	input clk, d;
	
always @(posedge clk)
	begin
		q <= d;
	end
	assign q_n = ~q; 

endmodule 