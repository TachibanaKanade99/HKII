module d_ff_r(
	q,
	q_n,
	clk, 
	d,
	r_n);
	
	output q, q_n;
	reg q;
	input clk, d, r_n;
	
always @(negedge r_n or posedge clk)
	begin
		if (!r_n)
			q <= 0;
		else 
			q <= d;
	end
	
	assign q_n = ~q;
	
endmodule 