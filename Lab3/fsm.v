`include "states.v"
`include "opcodes.v"

module fsm(
    input [6:0] opcode,
    input [2:0] current_state,
    input bcond,
    output reg [2:0] next_state
);
    always @(*) begin
        case (current_state)
            `IF1: next_state = `IF2;
            `IF2: begin
                if (opcode == `ECALL)
                    next_state = `IF1;
                else if (opcode == `JAL) 
                    next_state = `EX; 
                else
                    next_state = `ID; 
            end
            `ID: next_state = `EX;
            `EX: begin
                if (opcode == `BRANCH && bcond)
                    next_state = `WB;
                else if (opcode == `BRANCH && !bcond)
                    next_state = `IF1;

                else begin
                    if (opcode == `ARITHMETIC || opcode == `ARITHMETIC_IMM || opcode == `JAL || opcode == `JALR)
                        next_state = `WB;
                    else if (opcode == `LOAD)
                        next_state = `MEM;
                    else if (opcode == `STORE)
                        next_state = `WB;
                    else
                        next_state = `IF1;
                end
            end
            
            `MEM: begin
                if (opcode == `LOAD)
                    next_state = `WB;
                else
                    next_state = `IF1;
            end
            `WB: next_state = `IF1;            
            default: next_state = `IF1;
        endcase
    end

endmodule
