module immediate_generator(
    input[31:0] part_of_inst,
    output reg[31:0] imm_gen_out
);
    wire [6:0] opcode = part_of_inst[6:0];
    
    wire [11:0] imm_I = part_of_inst[31:20];
    wire [11:0] imm_S = {part_of_inst[31:25], part_of_inst[11:7]};
    wire [20:0] imm_UJ = {part_of_inst[31], part_of_inst[19:12], part_of_inst[20], part_of_inst[30:21], 1'b0};
    wire [12:0] imm_SB = {part_of_inst[31], part_of_inst[7], part_of_inst[30:25], part_of_inst[11:8], 1'b0};

    always @(*) begin
        case(opcode)
            `ARITHMETIC_IMM, `LOAD, `JALR:
                imm_gen_out = {{20{imm_I[11]}}, imm_I};
            `STORE:
                imm_gen_out = {{20{imm_S[11]}}, imm_S};
            `JAL:
                imm_gen_out = {{12{imm_UJ[20]}}, imm_UJ};
            `BRANCH:
                imm_gen_out = {{19{imm_SB[12]}}, imm_SB};
            default:
                imm_gen_out = 32'b0;
        endcase
    end

endmodule
