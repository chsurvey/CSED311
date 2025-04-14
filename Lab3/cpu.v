// Submit this file with other files you created.
// Do not touch port declarations of the module 'CPU'.

// Guidelines
// 1. It is highly recommened to `define opcodes and something useful.
// 2. You can modify the module.
// (e.g., port declarations, remove modules, define new modules, ...)
// 3. You might need to describe combinational logics to drive them into the module (e.g., mux, and, or, ...)
// 4. `include files if required

module cpu(input reset,       // positive reset signal
           input clk,         // clock signal
           output is_halted,
           output [31:0]print_reg[0:31]
           ); // Whehther to finish simulation
  /***** Wire declarations *****/

  /***** Register declarations *****/
  reg [31:0] IR; // instruction register
  reg [31:0] MDR; // memory data register
  reg [31:0] A; // Read 1 data register
  reg [31:0] B; // Read 2 data register
  reg [31:0] ALUOut; // ALU output register
  // Do not modify and use registers declared above.

  wire[31:0] curr_pc;
  wire[31:0] next_pc;
  wire[31:0] addr;
  wire[31:0] dout, din, alu_out;
  wire[31:0] rs1_dout, rs2_dout;
  wire[31:0] imm_gen_out;
  wire[31:0] alu_in_1, alu_in_2;
  wire[31:0] rd_din;
  wire[31:0] alu_result;
  wire[31:0] alu_bcond;
  wire IorD, mem_read, mem_write, mem_to_reg, alu_src_a, reg_write, IR_write, pc_write, pc_write_not_cond, final_pc_write, pc_src;
  wire[1:0] alu_src_b;
  wire[4:0] alu_op;
  wire is_ecall, is_halted;

  assign is_halted = (is_ecall && rs1_dout == 10)? 1:0;

  always @(posedge clk) begin
    if (reset) begin
      IR <= 0;
      MDR <= 0;
      A <= 0;
      B <= 0;
      ALUOut <= 0;
    end else begin
      if (!i_or_d && ir_write) IR <= dout;
      if (i_or_d) MDR <= dout;
      A <= rs1_dout;
      B <= rs2_dout;
      ALUOut <= alu_result;
    end
  end

  assign pc_write = (pc_write_not_cond & !alu_bcond) | pc_write ? 1 : 0;

  // ---------- Update program counter ----------
  // PC must be updated on the rising edge (positive edge) of the clock.
  pc pc(
    .reset(reset),       // input (Use reset to initialize PC. Initial value must be 0)
    .clk(clk),         // input
    .pc_write(pc_write), // input (PC write enable signal)
    .next_pc(next_pc),     // input
    .current_pc(curr_pc)   // output
  );

  // ---------- Register File ----------
  mux2 reg_file_mux(
    .in0(ALUOut),
    .in1(MDR),
    .sel(mem_to_reg),
    .out(rd_din)
  );

  RegisterFile reg_file(
    .reset(reset),        // input
    .clk(clk),          // input
    .rs1(IR[19:15]),          // input
    .rs2(IR[24:20]),          // input
    .rd(IR[11:7]),           // input
    .rd_din(rd_din),       // input
    .write_enable(reg_write),    // input
    .rs1_dout(rs1_dout),     // output
    .rs2_dout(rs2_dout),      // output
    .print_reg(print_reg)     // output (TO PRINT REGISTER VALUES IN TESTBENCH)
  );
 

  // ---------- Memory ----------
  mux2 addr_mux(
    .in0(curr_pc),
    .in1(ALUOut),
    .sel(IorD),
    .out(addr)
  );

  Memory memory(
    .reset(reset),        // input
    .clk(clk),          // input
    .addr(addr),         // input
    .din(din),          // input
    .mem_read(mem_read),     // input
    .mem_write(mem_write),    // input
    .dout(dout)          // output
  );
  
  // ---------- Control Unit ----------
  ControlUnit ctrl_unit(
    .part_of_inst(IR[6:0]),  // input
    .IR_write(IR_write),    // output
    .IorD(IorD),          // output
    .mem_read(mem_read),      // output
    .mem_write(mem_write),    // output
    .mem_to_reg(mem_to_reg),  // output
    .alu_src_a(alu_src_a),    // output
    .alu_src_b(alu_src_b),    // output
    .reg_write(reg_write),    // output
    .pc_write(pc_write),      // output
    .pc_write_not_cond(pc_write_not_cond), // output
    .alu_op(alu_op),        // output
    .pc_src(pc_src),      // output
    .is_ecall(is_ecall)       // output (ecall inst)
  );

  // ---------- Immediate Generator ----------
  ImmediateGenerator imm_gen(
    .part_of_inst(IR),  // input
    .imm_gen_out(imm_gen_out)    // output
  );

  // ---------- ALU Control Unit ----------
  ALUControlUnit alu_ctrl_unit(
    .part_of_inst({inst[31:25], inst[14:12], inst[6:0]}),  // input
    .alu_op(alu_op)         // output
  );

  // ---------- ALU ----------
  mux2 alu_mux(
    .in0 (curr_pc),
    .in1 (A),
    .sel (alu_src_a),
    .out (alu_in_1)
  );

  mux4 alu_mux2(
    .in0 (B),
    .in1 (4),
    .in2 (imm_gen_out),
    .in3 (0),
    .sel (alu_src_b),
    .out (alu_in_2)
  );

  alu alu (
    .alu_op(alu_op),      // input
    .alu_in_1(alu_in_1),    // input  
    .alu_in_2(alu_in_2),    // input
    .alu_result(alu_result),  // output
    .alu_bcond(alu_bcond)    // output
  );


endmodule
