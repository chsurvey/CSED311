module pc_predictor (
    input reset,
    input clk,
    input write_enable,
    input [31:0] current_pc,
    input [31:0] acc_pc,
    input acc_taken,
    input acc_branch_attempt,
    output reg [31:0] pred_pc,
    output pred_taken
);

    reg [24:0] tag_mem [31:0];
    reg [31:0] btb_mem [31:0];
    wire [4:0] btb_idx = current_pc[6:2];
    wire [24:0] tag = current_pc[31:7];
    wire [4:0] acc_btb_idx = acc_pc[6:2];
    wire [24:0] acc_tag = acc_pc[31:7];
    reg [24:0] tag_el;
    reg [31:0] btb_el;

    reg  [1:0] pht;

    always @(*) begin
        tag_el = tag_mem[btb_idx];
        btb_el = btb_mem[btb_idx];
    end

    wire hit;
    wire [31:0] target;
    assign hit = (tag_el == tag);
    always @(*) begin
        pred_taken = hit & btb_el!=0 & pht[1];
        pred_pc = pred_taken ? btb_el : (current_pc + 32'd4);
    end

    integer i;
    always @(posedge clk) begin
        if (reset) begin
            pht <= 1;
            for (i = 0; i < 32; i = i + 1) begin
                tag_mem[i] <= 0;
                btb_mem[i] <= 0;
            end
        end
        else if (write_enable) begin      // write_enable
            tag_mem[acc_btb_idx] <= acc_tag;
            btb_mem[acc_btb_idx] <= acc_pc;
        end

        if (acc_branch_attempt) begin
            case ({acc_taken, pht})
                3'b000: pht <= 2'b00;
                3'b001: pht <= 2'b00;
                3'b010: pht <= 2'b01;
                3'b011: pht <= 2'b10;
                3'b100: pht <= 2'b01;
                3'b101: pht <= 2'b10;
                3'b110: pht <= 2'b11;
                3'b111: pht <= 2'b11;
            endcase
        end
    end
    
endmodule
