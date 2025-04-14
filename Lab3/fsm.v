`include "states.v"
`include "opcodes.v"

module fsm(
    input [6:0] opcode,
    input [2:0] current_state,
    output reg [2:0] next_state
);
    always @(*) begin
        case (current_state)
            `IF1: next_state = `IF2;
            `IF2: next_state = `IF3;
            `IF3: next_state = `IF4;
            `IF4: next_state = (opcode == `JAL) ? `EX1 : `ID;
            `ID: next_state = `EX1;
            `EX1: next_state = `EX2;
            `EX2: begin
                case(opcode)
                    `ARITHMETIC, `ARITHMETIC_IMM, `JAL, `JALR: next_state = `WB;
                    `LOAD: next_state = `MEM1;
                    `STORE: next_state = `MEM1;
                    `BRANCH: next_state = `IF1;
                endcase
            end
            `MEM1: next_state = `MEM2;
            `MEM2: next_state = `MEM3;
            `MEM3: next_state = `MEM4;
            `MEM4: next_state = (opcode == `LOAD) ? `WB : `IF1;
            `WB: next_state = `IF1;            
            default: next_state = current_state; // Stay in the same state for any other case
        endcase
    end

endmodule
