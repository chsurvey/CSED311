// Submit this file with other files you created.
// Do not touch port declarations of the module 'cpu'.

// Guidelines
// 1. It is highly recommened to `define opcodes and something useful.
// 2. You can modify the module.
// (e.g., port declarations, remove modules, define new modules, ...)
// 3. You might need to describe combinational logics to drive them into the module (e.g., mux, and, or, ...)
// 4. `include files if required

`include "opcodes.v"

module cpu(input reset,                     // positive reset signal
           input clk,                       // clock signal
           output is_halted,                // Whehther to finish simulation
           output [31:0] print_reg [0:31]); // TO PRINT REGISTER VALUES IN TESTBENCH (YOU SHOULD NOT USE THIS)

  /***** Wire declarations *****/
  wire[31:0] curr_pc, added_pc;
  wire[31:0] next_pc;
  wire PcSrc1, PcSrc2;
  wire[31:0] inst;
  wire[31:0] rd_din;
  wire[31:0] rs1_dout, rs2_dout;
  wire is_jal, is_jalr, branch, mem_read, mem_to_reg, mem_write, alu_src, write_enable, pc_to_reg, is_ecall;
  wire[31:0] imm_gen_out;
  wire[4:0] alu_op;
  wire[31:0] alu_in_2;
  wire alu_bcond;
  wire[31:0] dout;
  wire[31:0] src1_in, sr2c_in, final_out;


  /***** Register declarations *****/
  wire [31:0] x17;
  reg _is_halted;
  reg [31:0] alu_result;

  // ---------- Update program counter ----------
  // PC must be updated on the rising edge (positive edge) of the clock.
  assign PcSrc1 = is_jal || (branch && alu_bcond);
  assign PcSrc2 = is_jalr;

  mux mux_src1(
    .in0(added_pc),
    .in1(src1_in),
    .sel(PcSrc1),
    .out(sr2c_in)
  );

  mux mux_src2(
    .in0(sr2c_in),
    .in1(alu_result),
    .sel(PcSrc2),
    .out(next_pc)
  );

  pc pc(
    .reset(reset),       // input (Use reset to initialize PC. Initial value must be 0)
    .clk(clk),         // input
    .next_pc(next_pc),     // input
    .current_pc(curr_pc)   // output
  );

  add pc_add(
    .in0(curr_pc),
    .in1(4),
    .out(added_pc)
  );
  
  // ---------- Instruction Memory ----------
  instruction_memory imem(
    .reset(reset),   // input
    .clk(clk),     // input
    .addr(curr_pc),    // input
    .dout(inst)     // output
  );

  // ---------- Register File ----------
  register_file reg_file (
    .reset (reset),        // input
    .clk (clk),          // input
    .rs1 (inst[19:15]),          // input
    .rs2 (inst[24:20]),          // input
    .rd (inst[11:7]),           // input
    .rd_din (rd_din),       // input
    .write_enable (write_enable), // input
    .rs1_dout (rs1_dout),     // output
    .rs2_dout (rs2_dout),     // output
    .x17(x17),
    .print_reg (print_reg)  //DO NOT TOUCH THIS
  );

  mux reg_mux(
    .in0 (final_out),
    .in1 (added_pc),
    .sel (pc_to_reg),
    .out (rd_din)
  );


  // ---------- Control Unit ----------
  control_unit ctrl_unit (
    .part_of_inst(inst[6:0]),  // input
    .is_jal(is_jal),        // output
    .is_jalr(is_jalr),       // output
    .branch(branch),        // output
    .mem_read(mem_read),      // output
    .mem_to_reg(mem_to_reg),    // output
    .mem_write(mem_write),     // output
    .alu_src(alu_src),       // output
    .write_enable(write_enable),  // output
    .pc_to_reg(pc_to_reg),     // output
    .is_ecall(is_ecall)       // output (ecall inst)
  );

  // ---------- Immediate Generator ----------
  immediate_generator imm_gen(
    .part_of_inst(inst),  // input
    .imm_gen_out(imm_gen_out)    // output
  );

  add pc_imm_add(
    .in0(curr_pc),
    .in1(imm_gen_out),
    .out(src1_in)
  );

  // ---------- ALU Control Unit ----------
  alu_control_unit alu_ctrl_unit (
    .part_of_inst({inst[31:25], inst[14:12], inst[6:0]}),  // input
    .alu_op(alu_op)         // output
  );

  // ---------- ALU ----------
  alu alu (
    .alu_op(alu_op),      // input
    .alu_in_1(rs1_dout),    // input  
    .alu_in_2(alu_in_2),    // input
    .alu_result(alu_result),  // output
    .alu_bcond(alu_bcond)    // output
  );

  mux alu_mux(
    .in0 (rs2_dout),
    .in1 (imm_gen_out),
    .sel (alu_src),
    .out (alu_in_2)
    );

  // ---------- Data Memory ----------
  data_memory dmem(
    .reset (reset),      // input
    .clk (clk),        // input
    .addr (alu_result),       // input
    .din (rs2_dout),        // input
    .mem_read (mem_read),   // input
    .mem_write (mem_write),  // input
    .dout (dout)        // output
  );

  mux final_mux(
    .in0(alu_result),
    .in1(dout),
    .sel(mem_to_reg),
    .out(final_out)
  );

  assign is_halted = _is_halted;

  always @(*) begin
    if (is_ecall && x17 == 10) begin
      _is_halted = 1;
    end
    else begin
      _is_halted = 0;
    end
  end
endmodule
