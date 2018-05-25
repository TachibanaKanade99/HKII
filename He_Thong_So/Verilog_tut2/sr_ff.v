module sr_ff(q,q_n, s, r, clk_n, pre_n, clr_n);

	output q, q_n;
	reg q;
	input clk_n, pre_n, clr_n;
	input s, r;
	
	always @ (negedge clk_n or negedge pre_n or negedge clr_n)
		begin
		if (!pre_n)
			q <= 1;
		else if (!clr_n)
			q <= 0;
		else
			if (s)
					q <= 1;
			else if (q)
					q <= 0;
		end
		assign q_n = ~q;
endmodule 