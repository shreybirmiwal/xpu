module hello_world (
    input clk
);

    initial begin
        $display("Hello world");
    end

    always @(posedge clk) begin
        $display("clock hit a rising edge");
    end
endmodule


module half_adder(
    input a,
    input b,
    output sum,
    output carry
);

    assign sum = a ^ b;
    assign carry = a & b;
    
endmodule
