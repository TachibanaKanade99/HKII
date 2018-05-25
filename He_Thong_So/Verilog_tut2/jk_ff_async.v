module jk_ff_async(q,q_n, j, k, pre_n, clr_n, clk_n);

	output q;
	reg q;
	output q_n;
	input j;
	input k;
	input pre_n;
	input clr_n;
	input clk_n;
  

	always @ (negedge clk_n or negedge pre_n or negedge clr_n)
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