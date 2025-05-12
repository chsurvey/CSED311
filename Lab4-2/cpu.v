// Submit this file with other files you created.
// Do not touch port declarations of the module 'CPU'.

// Guidelines
// 1. It is highly recommened to `define opcodes and something useful.
// 2. You can modify modules (except InstMemory, DataMemory, and RegisterFile)
// (e.g., port declarations, remove modules, define new modules, ...)
// 3. You might need to describe combinational logics to drive them into the module (e.g., mux, and, or, ...)
// 4. `include files if required

module cpu(input reset,       // positive reset signal
           input clk,         // clock signal
           output is_halted, // Whehther to finish simulation
           output [31:0]print_reg[0:31]); // Whehther to finish simulation
  /***** Wire declarations *****/
  wire [31:0] current_pc;
  wire [31:0] next_pc, pred_pc;
  wire [31:0] inst;
  wire [31:0] rs1_dout;
  wire [31:0] rs2_dout;
  wire [31:0] rd_din;
  wire is_jal;
  wire is_jalr;
  wire branch;
  wire mem_read;
  wire mem_to_reg;
  wire mem_write;
  wire alu_src;
  wire write_enable;
  wire pc_to_reg;
  wire is_ecall;
  wire [31:0] imm_gen_out;
  wire [4:0] alu_op;
  wire [31:0] alu_in_1;
  wire [31:0] alu_in_2;
  wire [31:0] alu_result;
  wire alu_bcond;
  wire pc_src;
  wire [31:0] mem_dout;
  wire store_is_halted;
  wire is_stall;
  wire [1:0] forwardA;
  wire [1:0] forwardB;
  wire [31:0] ori_alu_in_2;
  wire tag_hit;


  reg ID_EX_is_jal;
  reg ID_EX_is_jalr;
  reg ID_EX_branch;
  reg ID_EX_is_branch;
  reg EX_MEM_is_jump;
  reg EX_MEM_bcond;
  reg [31:0] EX_MEM_rs2_data;
  reg [31:0] EX_MEM_pc_imm_add;
  reg [31:0] MEM_WB_alu_out;
  reg [4:0] rs1;
  reg [4:0] rs2;
  reg [31:0] IF_ID_pc;

  /***** Register declarations *****/
  // You need to modify the width of registers
  // In addition, 
  // 1. You might need other pipeline registers that are not described below
  // 2. You might not need registers described below
  /***** IF/ID pipeline registers *****/
  reg [31:0]IF_ID_inst;           // will be used in ID stage
  reg IF_ID_pred_taken;
  /***** ID/EX pipeline registers *****/
  // From the control unit
  reg ID_EX_alu_op;         // will be used in EX stage
  reg ID_EX_alu_src;        // will be used in EX stage
  reg ID_EX_mem_write;      // will be used in MEM stage
  reg ID_EX_mem_read;       // will be used in MEM stage
  reg ID_EX_mem_to_reg;     // will be used in WB stage
  reg ID_EX_reg_write;      // will be used in WB stage
  reg ID_EX_pred_taken;
  // From others
  reg [31:0] ID_EX_rs1_data;
  reg [31:0] ID_EX_rs2_data;
  reg [31:0] ID_EX_imm;
  reg [16:0] ID_EX_ALU_ctrl_unit_input;
  reg [4:0] ID_EX_rd;
  reg ID_EX_is_halted;
  reg [4:0] ID_EX_rs1;
  reg [4:0] ID_EX_rs2;
  reg ID_EX_pc_to_reg;
  reg [31:0] ID_EX_pc;

  /***** EX/MEM pipeline registers *****/
  // From the control unit
  reg EX_MEM_mem_write;     // will be used in MEM stage
  reg EX_MEM_mem_read;      // will be used in MEM stage
  reg EX_MEM_branch;     // will be used in MEM stage
  reg EX_MEM_mem_to_reg;    // will be used in WB stage
  reg EX_MEM_reg_write;     // will be used in WB stage
  // From others
  reg [31:0] EX_MEM_alu_out;
  reg [31:0] EX_MEM_dmem_data;
  reg [4:0] EX_MEM_rd;
  reg EX_MEM_is_halted;
  reg EX_MEM_is_jal;
  reg EX_MEM_is_jalr;
  reg [31:0] EX_MEM_pc;
  reg EX_MEM_pc_to_reg;

  /***** MEM/WB pipeline registers *****/
  // From the control unit
  reg MEM_WB_mem_to_reg;    // will be used in WB stage
  reg MEM_WB_reg_write;     // will be used in WB stage
  reg [31:0] MEM_WB_mem_dout;
  reg [4:0] MEM_WB_rd;
  reg MEM_WB_is_halted;
  reg [31:0] MEM_WB_pc;
  reg MEM_WB_pc_to_reg;

  // ---------- Update program counter ----------
  // PC must be updated on the rising edge (positive edge) of the clock.

  wire pred_taken;
  pc_predictor PcPred(
    .reset(reset),
    .clk(clk),
    .write_enable(is_taken),
    .current_pc(current_pc),
    .acc_pc(ID_EX_pc),
    .acc_taken(is_taken),
    .acc_branch_attempt(ID_EX_is_jal | ID_EX_is_jalr | ID_EX_branch),
    .pred_pc(pred_pc),
    .pred_taken(pred_taken)
  );
  
  assign next_pc = is_flush ? correct_pc : pred_pc;

  PC pc(
    .reset(reset),       // input (Use reset to initialize PC. Initial value must be 0)
    .clk(clk),         // input
    .next_pc(next_pc),     // input
    .is_stall(is_stall),
    .current_pc(current_pc)   // output
  );
  
  // ---------- Instruction Memory ----------
  InstMemory imem(
    .reset(reset),   // input
    .clk(clk),     // input
    .addr(current_pc),    // input
    .dout(inst)     // output
  );

  // Update IF/ID pipeline registers here
  reg IF_ID_is_flush;
  always @(posedge clk) begin
    if (reset) begin
      IF_ID_inst <= 32'b0;
      IF_ID_pc <= 0;
      IF_ID_is_flush <= 0;
      IF_ID_pred_taken <= 0;
    end
    // else if (is_flush) begin
    //   IF_ID_inst <= 32'b0;
    //   IF_ID_pc <= 0;
    //   IF_ID_is_flush <= is_flush;
    // end
    else if (!is_stall) begin
      IF_ID_inst <= inst;
      IF_ID_pc <= current_pc;
      IF_ID_is_flush <= is_flush;
      IF_ID_pred_taken <= pred_taken;
    end
  end

  // ---------- Register File ----------
  always @(*) begin
    if (is_ecall)
        rs1 = 5'b10001;  
    else
        rs1 = IF_ID_inst[19:15]; 
  end
  assign rs2 = IF_ID_inst[24:20];
  
  RegisterFile reg_file (
    .reset (reset),        // input
    .clk (clk),          // input
    .rs1 (rs1),          // input
    .rs2 (rs2),          // input
    .rd (MEM_WB_rd),           // input
    .rd_din (pc_rd_din),       // input
    .write_enable (MEM_WB_reg_write),    // input
    .rs1_dout (rs1_dout),     // output
    .rs2_dout (rs2_dout),      // output
    .print_reg(print_reg)
  );

  // ---------- Control Unit ----------
  control_unit ctrl_unit (
    .part_of_inst(IF_ID_inst[6:0]),  // input
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

  assign store_is_halted = is_ecall & (true_rs1_dout==10);

  // ---------- Immediate Generator ----------
  immediate_generator imm_gen(
    .part_of_inst(IF_ID_inst),  // input
    .imm_gen_out(imm_gen_out)    // output
  );

  // Update ID/EX pipeline registers here
  always @(posedge clk) begin
    if (reset | is_stall | is_flush | IF_ID_is_flush) begin
      ID_EX_is_jal <= 0;
      ID_EX_is_jalr <= 0;
      ID_EX_branch <= 0;
      ID_EX_alu_src <= 0;
      ID_EX_mem_write <= 0;
      ID_EX_mem_read <= 0;
      ID_EX_mem_to_reg <= 0;
      ID_EX_reg_write <= 0;
      ID_EX_rs1_data <= 0;
      ID_EX_rs2_data <= 0;
      ID_EX_imm <= 0;
      ID_EX_ALU_ctrl_unit_input <= 0;
      ID_EX_rd <= 0;
      ID_EX_is_halted <= 0;
      ID_EX_rs1 <= 0;
      ID_EX_rs2 <= 0;
      ID_EX_pc <= 0;
      ID_EX_pred_taken <= 0;
    end
    else begin
      ID_EX_is_jal <= is_jal;
      ID_EX_is_jalr <= is_jalr;
      ID_EX_branch <= branch;
      ID_EX_alu_src <= alu_src;
      ID_EX_mem_write <= mem_write;
      ID_EX_mem_read <= mem_read;
      ID_EX_mem_to_reg <= mem_to_reg;
      ID_EX_reg_write <= write_enable;
      ID_EX_rs1_data <= true_rs1_dout;
      ID_EX_rs2_data <= rs2_dout; 
      ID_EX_imm <= imm_gen_out;
      ID_EX_ALU_ctrl_unit_input <= {IF_ID_inst[31:25], IF_ID_inst[14:12], IF_ID_inst[6:0]};
      ID_EX_rd <= IF_ID_inst[11:7];
      ID_EX_is_halted <= store_is_halted;
      ID_EX_rs1 <= rs1;
      ID_EX_rs2 <= rs2;
      ID_EX_pc_to_reg <= pc_to_reg;
      ID_EX_pc <= IF_ID_pc;
      ID_EX_pred_taken <= IF_ID_pred_taken;
    end
  end

  // ---------- ALU Control Unit ----------
  alu_control_unit alu_ctrl_unit (
    .part_of_inst(ID_EX_ALU_ctrl_unit_input),  // input
    .alu_op(alu_op)         // output
  );

  // ---------- ALU ----------
  forward_unit forward(
    .rs1(ID_EX_rs1),
    .rs2(ID_EX_rs2),
    .EX_MEM_rd(EX_MEM_rd),
    .MEM_WB_rd(MEM_WB_rd),
    .EX_MEM_reg_write(EX_MEM_reg_write),
    .MEM_WB_reg_write(MEM_WB_reg_write),
    .forwardA(forwardA),
    .forwardB(forwardB)
  );
  
  wire [31:0] true_rs1_dout, pc_rd_din, pc_alu_out;
  assign true_rs1_dout = EX_MEM_rd == 17 && is_ecall ? pc_alu_out : rs1_dout;
  assign pc_alu_out = EX_MEM_pc_to_reg ? EX_MEM_pc + 4 : EX_MEM_alu_out;
  assign pc_rd_din = MEM_WB_pc_to_reg ? MEM_WB_pc + 4 : rd_din;
  // assign pc_alu_out = EX_MEM_alu_out;
  // assign pc_rd_din = rd_din;
  mux4 forwardA_mux(
    .in0 (ID_EX_rs1_data),
    .in1 (pc_alu_out),
    .in2 (pc_rd_din),
    .in3 (0),
    .sel (forwardA),
    .out (alu_in_1)
  );
  
  mux4 forwardB_mux(
    .in0 (ID_EX_rs2_data),
    .in1 (pc_alu_out),
    .in2 (pc_rd_din),
    .in3 (0),
    .sel (forwardB),
    .out (ori_alu_in_2)
  );

  mux2 alu_mux(
    .in0 (ori_alu_in_2),
    .in1 (ID_EX_imm),
    .sel (ID_EX_alu_src),
    .out (alu_in_2)
  );
  
  alu alu(
    .alu_op(alu_op),      // input
    .alu_in_1(alu_in_1),    // input  
    .alu_in_2(alu_in_2),    // input
    .alu_result(alu_result),  // output
    .alu_bcond(alu_bcond)     // output
  );

  wire is_flush, is_taken, is_correct;
  assign is_taken = ID_EX_is_jal | ID_EX_is_jalr | (ID_EX_branch & alu_bcond);
  assign is_correct = (correct_pc == IF_ID_pc) | ID_EX_pc == 0;
  assign is_flush = !is_correct;

  wire [31:0] temp_next;
  assign pc_src = ID_EX_is_jal | (ID_EX_branch & alu_bcond);

  wire [31:0] correct_pc;
  mux2 pc_mux(
    .in0 (ID_EX_pc + 32'd4),
    .in1 (ID_EX_pc + ID_EX_imm),
    .sel (pc_src),
    .out (temp_next)
  );
  mux2 pc_mux2(
    .in0 (temp_next),
    .in1 (alu_result),
    .sel (ID_EX_is_jalr),
    .out (correct_pc)
  );

  // Update EX/MEM pipeline registers here
  always @(posedge clk) begin
    if (reset) begin
      EX_MEM_is_jump <= 0;
      EX_MEM_mem_write <= 0;
      EX_MEM_mem_read <= 0;
      EX_MEM_bcond <= 0;
      EX_MEM_branch <= 0;
      EX_MEM_mem_to_reg <= 0;
      EX_MEM_reg_write <= 0;
      EX_MEM_alu_out <= 0;
      EX_MEM_dmem_data <= 0;
      EX_MEM_rd <= 0;
      EX_MEM_rs2_data <= 0;
      EX_MEM_pc_imm_add <= 0;
      EX_MEM_is_halted <= 0;
      EX_MEM_pc_to_reg <= 0;
      EX_MEM_pc <= 0;
    end
    else begin
      EX_MEM_is_jal <= ID_EX_is_jal;
      EX_MEM_is_jalr <= ID_EX_is_jalr;
      EX_MEM_branch <= ID_EX_branch;
      EX_MEM_mem_write <= ID_EX_mem_write;
      EX_MEM_mem_read <= ID_EX_mem_read;
      EX_MEM_bcond <= alu_bcond;
      EX_MEM_mem_to_reg <= ID_EX_mem_to_reg;
      EX_MEM_reg_write <= ID_EX_reg_write;
      EX_MEM_alu_out <= alu_result; 
      EX_MEM_dmem_data <= rs2_dout; 
      EX_MEM_rd <= ID_EX_rd;
      EX_MEM_rs2_data <= ori_alu_in_2;
      EX_MEM_pc_imm_add <= ID_EX_pc + ID_EX_imm;
      EX_MEM_is_halted <= ID_EX_is_halted;
      EX_MEM_pc_to_reg <= ID_EX_pc_to_reg;
      EX_MEM_pc <= ID_EX_pc;
    end
  end
  
  // ---------- Data Memory ----------
  DataMemory dmem(
    .reset (reset),      // input
    .clk (clk),        // input
    .addr (EX_MEM_alu_out),       // input
    .din (EX_MEM_rs2_data),        // input
    .mem_read (EX_MEM_mem_read),   // input
    .mem_write (EX_MEM_mem_write),  // input
    .dout (mem_dout)        // output
  );

  // Update MEM/WB pipeline registers here
  always @(posedge clk) begin
    if (reset) begin
      MEM_WB_mem_to_reg <= 0;
      MEM_WB_reg_write <= 0;
      MEM_WB_alu_out <= 0;
      MEM_WB_mem_dout <= 0;
      MEM_WB_rd <= 0;
      MEM_WB_is_halted <= 0;
      MEM_WB_pc_to_reg <= 0;
      MEM_WB_pc <= 0;
    end
    else begin
      MEM_WB_mem_to_reg <= EX_MEM_mem_to_reg;
      MEM_WB_reg_write <= EX_MEM_reg_write;
      MEM_WB_alu_out <= EX_MEM_alu_out; 
      MEM_WB_mem_dout <= mem_dout;
      MEM_WB_rd <= EX_MEM_rd;
      MEM_WB_is_halted <= EX_MEM_is_halted;
      MEM_WB_pc_to_reg <= EX_MEM_pc_to_reg;
      MEM_WB_pc <= EX_MEM_pc;
    end
  end

  assign is_halted = MEM_WB_is_halted;

  mux2 final_mux(
    .in0(MEM_WB_alu_out),
    .in1(MEM_WB_mem_dout),
    .sel(MEM_WB_mem_to_reg),
    .out(rd_din)
  );
  
  hazard_detection_unit hazard(
    .rs1(rs1),
    .rs2(rs2),
    .ID_EX_rd(ID_EX_rd),
    .EX_MEM_rd(EX_MEM_rd),
    .ID_EX_mem_read(ID_EX_mem_read),
    .EX_MEM_mem_read(EX_MEM_mem_read),
    .is_ecall(is_ecall),
    .is_stall(is_stall)
  );
endmodule
