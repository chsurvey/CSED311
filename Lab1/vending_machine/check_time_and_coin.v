`include "vending_machine_def.v"

	

module check_time_and_coin(i_input_coin,i_select_item,i_trigger_return,clk,current_total,coin_value,reset_n,wait_time,o_return_coin);
	input clk;
	input [`kTotalBits-1:0] current_total;
	input [31:0] coin_value [`kNumCoins-1:0];	
	input reset_n;
	input [`kNumCoins-1:0] i_input_coin;
	input [`kNumItems-1:0]	i_select_item;
	input i_trigger_return;
	output reg  [`kNumCoins-1:0] o_return_coin;
	output reg [31:0] wait_time;
	reg is_reset;

	// initiate values
	initial begin
        wait_time = `kWaitTime;
        o_return_coin = 3'b000;
		is_reset = 0;
	end
	
	// update coin return time
	always @(i_input_coin, i_select_item) begin
		is_reset = 0;
		if(i_input_coin != 0)
			is_reset = 1;
	end

	always @(*) begin
		o_return_coin = 3'b000;
		if (wait_time == 0 || i_trigger_return  == 1) begin
			if (current_total >= (coin_value[2] + coin_value[1] + coin_value[0])) 
				o_return_coin = 3'b111;
			else if (current_total >= (coin_value[2] + coin_value[1])) 
				o_return_coin = 3'b110;
			else if (current_total >= (coin_value[2] + coin_value[0])) 
				o_return_coin = 3'b101;			
			else if (current_total >= coin_value[2]) 
				o_return_coin = 3'b100;			
			else if (current_total >= (coin_value[1] + coin_value[0])) 
				o_return_coin = 3'b011;			
			else if (current_total >= (coin_value[1])) 
				o_return_coin = 3'b010;			
			else if (current_total >= (coin_value[0])) 
				o_return_coin = 3'b001;
			else
				o_return_coin = 3'b000;
		end
	end
	
	always @(posedge clk) begin
		if (!reset_n || is_reset == 1) begin
		// TODO: reset all states.
			wait_time = `kWaitTime;
		end
		else begin
		// TODO: update all states.
			wait_time = wait_time - 1;
		end
	end
endmodule 