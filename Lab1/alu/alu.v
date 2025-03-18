module ALU #(parameter data_width = 16) (
	input [data_width - 1 : 0] A, 
	input [data_width - 1 : 0] B, 
	input [3 : 0] FuncCode,
       	output reg [data_width - 1: 0] C,
       	output reg OverflowFlag);
        
initial begin
	C = 0;
	OverflowFlag = 0;
end


always @(*) begin
    OverflowFlag = 0;
    case(FuncCode)
        4'b0000: begin // ADD
            C = A + B;
            if ((~A[data_width-1] & ~B[data_width-1] & C[data_width-1]) ||
                ( A[data_width-1] &  B[data_width-1] & ~C[data_width-1]))
                OverflowFlag = 1;
        end
        
        4'b0001: begin // SUB
            C = A - B;
            if (( A[data_width-1] & ~B[data_width-1] & ~C[data_width-1]) ||
                (~A[data_width-1] &  B[data_width-1] & C[data_width-1]))
                OverflowFlag = 1;
        end
        
        4'b0010: begin // ID
            C = A;
        end
        
        4'b0011: begin // NOT
            C = ~A;
        end
        
        4'b0100: begin // AND
            C = A & B;
        end
        
        4'b0101: begin // OR
            C = A | B;
        end
        
        4'b0110: begin // NAND
            C = ~(A & B);
        end
        
        4'b0111: begin // NOR
            C = ~(A | B);
        end
        
        4'b1000: begin // XOR
			C = A ^ B;
        end
        
        4'b1001: begin // XNOR
			C = ~(A ^ B);
        end
        
        4'b1010: begin // LLS
			C = A << 1;
        end
		
        4'b1011: begin // LRS
			C = A >> 1;
        end
		
        4'b1100: begin // ALS
			C = A <<< 1;
        end
		
        4'b1101: begin // ARS
			C = A >>> 1;
        end
		
        4'b1110: begin // TCP = two's complement
			C = ~A+1;
        end
		
        4'b1111: begin // ZERO
			C = 0;
        end
		
    endcase
end

endmodule
