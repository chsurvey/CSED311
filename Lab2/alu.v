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
            
        endcase
    end
endmodule
