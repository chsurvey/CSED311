`include "states.v"

module ControlUnit(
    input reset,
    input clk,
    input[6:0] part_of_inst,
    output reg IR_write,
    output reg IorD,
    output reg mem_read,
    output reg mem_write,
    output reg mem_to_reg,
    output reg alu_src_a,
    output reg [1:0] alu_src_b,
    output reg reg_write,
    output reg pc_write,
    output reg pc_write_not_cond,
    output reg [4:0] alu_op,
    output reg pc_src,
    output reg is_ecall
);
    reg [2:0] current_state;
    wire [2:0] next_state;

    fsm fsm(
        .opcode(part_of_inst),
        .current_state(current_state),
        .next_state(next_state)
    );

    always @(posedge clk) begin
        if (reset)
            current_state <= `IF1;
        else
            current_state <= next_state;
    end

    
endmodule
