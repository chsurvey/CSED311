module alu(
    input [4:0] alu_op,
    input [31:0] alu_in_1,
    input [31:0] alu_in_2,
    output reg [31:0] alu_result,
    output reg alu_bcond
);
    always @(*) begin
        alu_result = 0;
        alu_bcond = 0;
    
        case(alu_op)
            5'b00000: // ADD
                alu_result = alu_in_1 + alu_in_2;

            5'b00001: // AND
                alu_result = alu_in_1 & alu_in_2;

            5'b00010: // OR
                alu_result = alu_in_1 | alu_in_2;

            5'b00011: // XOR
                alu_result = alu_in_1 ^ alu_in_2;

            5'b00100: // SLL
                alu_result = alu_in_1 << alu_in_2[4:0];

            5'b00101: // SRL
                alu_result = alu_in_1 >> alu_in_2[4:0];

            5'b00110: // SUB
                alu_result = alu_in_1 - alu_in_2;

            5'b00111: // BEQ
                alu_bcond = alu_in_1 == alu_in_2;

            5'b01000: // BNE
                alu_bcond = alu_in_1 != alu_in_2;

            5'b01001: // BLT
                alu_bcond = alu_in_1 < alu_in_2;

            5'b01010: // BGE
                alu_bcond = alu_in_1 >= alu_in_2;

            5'b01011: // ID
                alu_result = alu_in_1;

            5'b01100: // NOT
                alu_result = ~alu_in_1;

            5'b01101: // NAND
                alu_result = ~(alu_in_1 & alu_in_2);

            5'b01110: // NOR
                alu_result = ~(alu_in_1 | alu_in_2);

            5'b01111: // XNOR
                alu_result = ~(alu_in_1 ^ alu_in_2);

            5'b10000: // ALS
                alu_result = alu_in_1 <<< alu_in_2[4:0];

            5'b10001: // ARS
                alu_result = alu_in_1 >>> alu_in_2[4:0];

            5'b10010: // TCP
                alu_result = ~alu_in_1 + 1;

            5'b10011: // ZERO
                alu_result = 0;

            default: begin
            end
        endcase
    end
endmodule
