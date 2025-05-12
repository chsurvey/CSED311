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
        alu_op = 5'b00000; // default operation (alu return 0)
        case(opcode)
            `ARITHMETIC: begin
                case(funct7)
                    `FUNCT7_OTHERS: begin
                        case (funct3)
                            `FUNCT3_ADD: alu_op = 5'b00000; // alu op code
                            `FUNCT3_AND: alu_op = 5'b00001;
                            `FUNCT3_OR: alu_op = 5'b00010;
                            `FUNCT3_XOR: alu_op = 5'b00011;
                            `FUNCT3_SLL: alu_op = 5'b00100;
                            `FUNCT3_SRL: alu_op = 5'b00101;
                            default: begin
                            end
                        endcase
                    end

                    `FUNCT7_SUB: begin
                        case (funct3)
                            `FUNCT3_SUB: alu_op = 5'b00110;
                            default: begin
                            end
                        endcase
                    end
                    default: begin
                    end
                endcase
            end
            `ARITHMETIC_IMM: begin
                case(funct3)
                    `FUNCT3_ADD: alu_op = 5'b00000; // alu op code
                    `FUNCT3_AND: alu_op = 5'b00001;
                    `FUNCT3_OR: alu_op = 5'b00010;
                    `FUNCT3_XOR: alu_op = 5'b00011;
                    `FUNCT3_SLL: alu_op = 5'b00100;
                    `FUNCT3_SRL: alu_op = 5'b00101;
                    default: begin
                    end
                endcase
            end
            `LOAD: begin
                case(funct3)
                    `FUNCT3_LW: alu_op = 5'b00000; // alu op for addition
                    default: begin
                    end
                endcase
            end
            `JALR: begin
                alu_op = 5'b00000; // alu op for addition
            end
            `STORE: begin
                case(funct3)
                    `FUNCT3_SW: alu_op = 5'b00000; // alu op for addition
                    default: begin
                    end
                endcase
            end
            `BRANCH: begin
                
            case(funct3)
                `FUNCT3_BEQ: alu_op = 5'b00111;
                `FUNCT3_BNE: alu_op = 5'b01000;
                `FUNCT3_BLT: alu_op = 5'b01001;
                `FUNCT3_BGE: alu_op = 5'b01010;
                default: begin
                end
            endcase
            end
            `JAL: begin
                alu_op = 5'b00000; // alu op for addition
            end
            default: begin
            end
        endcase
    end
endmodule
