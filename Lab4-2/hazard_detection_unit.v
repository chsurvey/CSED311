module hazard_detection_unit(
    input [4:0] rs1,
    input [4:0] rs2,
    input [4:0] ID_EX_rd,
    input [4:0] EX_MEM_rd,
    input ID_EX_mem_read,
    input EX_MEM_mem_read,
    input is_ecall,
    output reg is_stall
);
    reg is_load;
    reg is_ecall_hazard;
    always @(*) begin
        is_load = (rs1 == ID_EX_rd | rs2 == ID_EX_rd) & ID_EX_mem_read;
        is_ecall_hazard = is_ecall & (ID_EX_rd == 17 | (EX_MEM_rd == 17 & EX_MEM_mem_read));
        is_stall = is_load | is_ecall_hazard;
    end
endmodule
