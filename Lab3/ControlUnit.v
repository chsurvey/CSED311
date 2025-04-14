module ControlUnit(
    input[6:0] part_of_inst,
    output reg IR_write,
    output reg IorD,
    output reg mem_read,
    output reg mem_write,
    output reg mem_to_reg,
    output reg alu_src_a,
    output reg [1:0] alu_src_b,
    output reg reg_write,
    output reg pc_write,
    output reg pc_write_not_cond,
    output reg [4:0] alu_op,
    output reg pc_src,
    output reg is_ecall
);

endmodule
