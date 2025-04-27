module forward_unit(
    input [4:0] rs1,
    input [4:0] rs2,
    input [4:0] EX_MEM_rd,
    input [4:0] MEM_WB_rd,
    input EX_MEM_reg_write,
    input MEM_WB_reg_write,
    output reg [1:0] forwardA,
    output reg [1:0] forwardB
);
    always @(*) begin
        // Forwarding for rs1
        if (rs1 == EX_MEM_rd && rs1 != 0 && EX_MEM_reg_write) begin
            forwardA = 2'b01; // Forward from MEM stage
        end else if (rs1 == MEM_WB_rd && rs1 != 0 && MEM_WB_reg_write) begin
            forwardA = 2'b10; // Forward from WB stage
        end else begin
            forwardA = 2'b00; // No forwarding
        end

        // Forwarding for rs2
        if (rs2 == EX_MEM_rd && rs2 != 0 && EX_MEM_reg_write) begin
            forwardB = 2'b01; // Forward from MEM stage
        end else if (rs2 == MEM_WB_rd && rs2 != 0 && MEM_WB_reg_write) begin
            forwardB = 2'b10; // Forward from WB stage
        end else begin
            forwardB = 2'b00; // No forwarding
        end
    end
endmodule
