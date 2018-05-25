module jk_ff_asy(
						q,
						q_n,
						clk,
						pre_n,
						clr_n,
						j,
						k);
						
	output q, q_n;
	reg q;
	input clk, j, k;
	input pre_n, clr_n;
	
always @ (negedge clk or negedge pre_n or negedge clr_n)
	begin
		if (!pre_n)
			q <= 1;
		else if (!clr_n)
			q <= 0;
		else
			begin
				if (j)
					if (k)
						q = ~q;
					else 
						q <= 1;
				else 
					if (k)
						q <= 0;
			end
	end
		assign q_n = ~q;
		
endmodule 