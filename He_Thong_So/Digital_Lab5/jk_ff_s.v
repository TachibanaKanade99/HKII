module jk_ff_s(
	q,
	q_n,
	clk,
	j, 
	k);
	
	output q, q_n;
	reg q;
	input clk, j, k;
	
	always @ ( posedge clk )
		begin
			if (j)
				if (k)
					q <= ~q;
				else
					q <= 1;
			else
				if (k)
					q <= 0;
		end
		
		assign q_n = ~q;
endmodule 