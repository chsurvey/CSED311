`include "opcodes.v"

module alu_control_unit (
    input[16:0] part_of_inst,
    output reg[4:0] alu_op
  );
    wire [6:0] funct7;
    wire [2:0] funct3;
    wire [6:0] opcode;

    assign funct7 = part_of_inst[16:10];
    assign funct3 = part_of_inst[9:7];
    assign opcode = part_of_inst[6:0];

    always @(*) begin        
        alu_op = 5'b00000;
        case(opcode)
            `ARITHMETIC: begin
                if (funct7 == `FUNCT7_OTHERS) begin
                    case (funct3)
                        `FUNCT3_ADD: alu_op = // alu op code
                        `FUNCT3_AND: alu_op
                        `FUNCT3_OR: alu_op
                        `FUNCT3_XOR: alu_op
                        `FUNCT3_SLL: alu_op
                        `FUNCT3_SRL: alu_op
                        default: begin
                        end
                    endcase
                end

                if (funct7 == `FUNCT7_SUB) begin
                    case (funct3)
                        `FUNCT3_SUB: alu_op = 5'b00100;
                        default: begin
                        end
                    endcase
                end
            end
            `ARITHMETIC_IMM:
            `LOAD:
            `JALR:
            `STORE:
            `BRANCH:
            `JAL:
        endcase
    end
endmodule