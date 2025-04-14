`include "states.v"

module ControlUnit(
    input reset,
    input clk,
    input bcond,
    input[6:0] part_of_inst,
    output reg IR_write,
    output reg IorD,
    output reg mem_read,
    output reg mem_write,
    output reg mem_to_reg,
    output reg alu_src_a,
    output reg[1:0] alu_src_b,
    output reg reg_write,
    output reg pc_write,
    output reg pc_write_not_cond,
    output reg alu_op,
    output reg pc_src,
    output reg is_ecall
);

    // Current and next state in the FSM
    reg  [2:0] current_state;
    wire [2:0] next_state;

    // Instantiate your next-state logic
    fsm fsm (
        .opcode(part_of_inst),
        .current_state(current_state),
        .bcond(bcond),
        .next_state(next_state)
    );

    // State register
    always @(posedge clk) begin
        if (reset)
            current_state <= `IF1;  // start in IF1
        else
            current_state <= next_state;
    end

    // Combinational control-signal outputs
    always @(*) begin
        // Default values
        pc_src = 0;
        pc_write = 0;
        pc_write_not_cond = 0;
        alu_op = 0;
        alu_src_a = 0;
        alu_src_b = 2'b01;
        reg_write = 0;
        mem_write = 0;
        mem_to_reg = 0;
        is_ecall = 0;
        
        case (current_state)
            `IF1 : begin
                mem_read = 1;
                IorD = 0;
                IR_write = 1;
            end

            `IF2 : begin
                if (part_of_inst == `ECALL)
                    is_ecall = 1;

                else begin
                    mem_read = 1;
                    IorD = 0;
                    IR_write = 1;
                end
            end

            `ID : begin
                alu_src_a = 0;
                alu_src_b = 2'b01;
                alu_op = 0;
            end

            `EX1 : begin
                if (part_of_inst == `ARITHMETIC) begin
                    alu_src_a = 1;
                    alu_src_b = 2'b00; 
                    alu_op = 1;
                end

                else if (part_of_inst == `ARITHMETIC_IMM) begin
                    alu_src_a = 1;
                    alu_src_b = 2'b10;
                    alu_op = 1;
                end

                else if (part_of_inst == `LOAD || part_of_inst == `STORE) begin
                    alu_src_a = 1;
                    alu_src_b = 2'b10;
                    alu_op = 0;
                end

                else if (part_of_inst == `BRANCH) begin
                    alu_src_a = 1;
                    alu_src_b = 2'b00;
                    alu_op = 1;
                    pc_write_not_cond = 1;
                    pc_src = 1;
                end
            end

            `EX2 : begin 
                alu_src_a = 0;
                alu_src_b = 2'b10; 
                alu_op = 0;
                pc_write = 1; 
                pc_src = 0;
            end

            `MEM : begin
                if (part_of_inst == `LOAD) begin
                    mem_read = 1;
                    IorD = 1;
                end

                else if (part_of_inst == `STORE) begin
                    mem_write = 1;
                    IorD = 1;
                    alu_src_a = 0;
                    alu_src_b = 2'b01;
                    alu_op = 0;
                    pc_write = 1; 
                    pc_src = 0; 
                end
            end

            `WB : begin
                if (part_of_inst == `ARITHMETIC || part_of_inst == `ARITHMETIC_IMM) begin
                    reg_write = 1;
                    mem_to_reg = 0;
                    IorD = 0;
                    alu_src_a = 0;
                    alu_src_b = 2'b01;
                    alu_op = 0;
                    pc_write = 1;
                    pc_src = 0;
                end

                else if (part_of_inst == `LOAD) begin
                    reg_write = 1;
                    mem_to_reg = 1;
                    alu_src_a = 0;
                    alu_src_b = 2'b01; 
                    alu_op = 0; 
                    pc_write = 1; 
                    pc_src = 0; 
                end

                else if (part_of_inst == `JAL) begin
                    reg_write = 1;
                    mem_to_reg = 0;
                    alu_src_a = 0; 
                    alu_src_b = 2'b10;
                    alu_op = 0; 
                    pc_write = 1;
                    pc_src = 0;
                end

                else if (part_of_inst == `JALR) begin                    
                    reg_write = 1;
                    mem_to_reg = 0;
                    alu_src_a = 1;
                    alu_src_b = 2'b10; 
                    alu_op = 0; 
                    pc_write = 1; 
                    pc_src = 0; 
                end
            end
            default: begin
                IorD = 0;
                IR_write = 0;
                pc_src = 0;
                pc_write = 0;
                pc_write_not_cond = 0;
                alu_op = 0;
                alu_src_a = 0; // Default: PC <- PC + 4
                alu_src_b = 2'b01; // Default: PC <- PC + 4
                reg_write = 0;
                mem_read = 0;
                mem_write = 0;
                mem_to_reg = 0;
                is_ecall = 1; 
            end
        endcase
    end

endmodule
