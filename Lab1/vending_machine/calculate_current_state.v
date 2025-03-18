
`include "vending_machine_def.v"
	

module calculate_current_state(i_input_coin,i_select_item,item_price,coin_value,current_total,
input_total,current_total_nxt,o_available_item,o_output_item);


	
	input [`kNumCoins-1:0] i_input_coin;
	input [`kNumItems-1:0]	i_select_item;			
	input [31:0] item_price [`kNumItems-1:0];
	input [31:0] coin_value [`kNumCoins-1:0];	
	input [`kTotalBits-1:0] current_total;
	output reg [`kNumItems-1:0] o_available_item,o_output_item;
	output reg  [`kTotalBits-1:0] input_total, current_total_nxt;
	integer i;
	
	// Combinational logic for the next states
	always @(*) begin
		// TODO: current_total_nxt
        input_total = 0;
        for (i = 0; i < `kNumCoins; i = i + 1) begin
            if (i_input_coin[i])
                input_total = input_total + coin_value[i];
        end
		current_total_nxt = current_total + input_total;
		
        for (i = 0; i < `kNumItems; i = i + 1) begin
			if(o_output_item[i] == 1)
				current_total_nxt  = current_total_nxt - item_price[i];
        end
    end
	
	
	// Combinational logic for the outputs
	always @(*) begin
		// TODO: o_available_item
		// TODO: o_output_item
		o_available_item = 4'b0000;
		o_output_item = 4'b0000;
        for (i = 0; i < `kNumItems; i = i + 1) begin
            if (item_price[i] <= current_total)
				o_available_item[i] = 1;
				if(i_select_item[i] == 1)
					o_output_item[i] = 1;
        end
	end
endmodule