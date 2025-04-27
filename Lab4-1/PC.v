module PC(
    input reset,
    input clk,
    input [31:0] next_pc,
    input is_stall,
    output reg [31:0] current_pc
);
    always @(posedge clk) begin
        if (reset)
            current_pc <= 32'b0;
        else if (!is_stall)
            current_pc <= next_pc;
    end
endmodule
