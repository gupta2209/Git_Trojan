
module parker
(
  ap_clk,
  ap_rst,
  ap_start,
  ap_done,
  ap_idle,
  ap_ready,
  in1,
  in2,
  in3,
  in4,
  in5,
  in6,
  ap_return
);

  parameter ap_ST_fsm_state1 = 2'd1;
  parameter ap_ST_fsm_state2 = 2'd2;
  parameter ap_ST_fsm_state3 = 2'd4;
  input ap_clk;
  input ap_rst;
  input ap_start;
  output ap_done;
  output ap_idle;
  output ap_ready;
  input [31:0] in1;
  input [31:0] in2;
  input [31:0] in3;
  input [31:0] in4;
  input [31:0] in5;
  input [31:0] in6;
  output [31:0] ap_return;
  reg ap_done;
  reg ap_idle;
  reg ap_ready;
  reg [1:0] ap_CS_fsm;
  wire ap_CS_fsm_state1;
  wire [0:0] tmp_4_fu_72_p2;
  reg [0:0] tmp_4_reg_227;
  wire [31:0] t4_fu_104_p2;
  reg [31:0] t4_reg_232;
  wire [0:0] tmp_9_fu_110_p2;
  reg [0:0] tmp_9_reg_237;
  wire [31:0] t4_2_fu_116_p2;
  reg [31:0] t4_2_reg_242;
  wire [31:0] t4_3_fu_122_p2;
  reg [31:0] t4_3_reg_247;
  wire ap_CS_fsm_state2;
  wire [31:0] t2_fu_66_p2;
  wire [0:0] tmp_5_fu_78_p2;
  wire [31:0] t6_5_fu_90_p2;
  wire [31:0] t6_4_fu_84_p2;
  wire [31:0] t6_6_fu_96_p3;
  wire [0:0] tmp_1_fu_133_p2;
  wire [31:0] t6_3_fu_144_p2;
  wire [31:0] t6_fu_139_p2;
  wire [31:0] t4_4_fu_157_p3;
  wire [31:0] t4_1_fu_162_p3;
  wire [0:0] tmp_fu_128_p2;
  wire [31:0] t6_1_fu_149_p3;
  wire [31:0] t6_7_fu_168_p2;
  wire [31:0] t6_2_fu_173_p3;
  wire [0:0] tmp_s_fu_181_p2;
  wire [31:0] out1_1_fu_192_p2;
  wire [31:0] out1_fu_187_p2;
  reg [1:0] ap_NS_fsm;
  reg [31:0] tmp_1_reg_i1;
  reg [31:0] tmp_1_reg_i2;
  reg [31:0] tmp_1_reg_i3;
  wire [31:0] tmp_1_wire_mux1_in;
  wire [31:0] tmp_1_wire_mux2_in;
  wire [31:0] tmp_1_wire_mux1_out;
  wire [31:0] tmp_1_wire_mux2_out;
  reg [31:0] tmp_2_reg_i1;
  reg [31:0] tmp_2_reg_i2;
  reg [31:0] tmp_2_reg_i3;
  wire [31:0] tmp_2_wire_mux1_in;
  wire [31:0] tmp_2_wire_mux2_in;
  wire [31:0] tmp_2_wire_mux1_out;
  wire [31:0] tmp_2_wire_mux2_out;
  wire [0:0] trigger;

  initial begin
    #0 ap_CS_fsm = 2'd1;
  end


  always @(posedge ap_clk) begin
    if(ap_rst == 1'b1) begin
      ap_CS_fsm <= ap_ST_fsm_state1;
    end else begin
      ap_CS_fsm <= ap_NS_fsm;
    end
  end


  always @(posedge ap_clk) begin
    if((1'b1 == ap_CS_fsm_state1) & (ap_start == 1'b1)) begin
      tmp_1_reg_i1 <= 32'd0;
      tmp_1_reg_i2 <= 32'd0;
      tmp_1_reg_i3 <= 32'd0;
      tmp_2_reg_i1 <= 32'd0;
      tmp_2_reg_i2 <= 32'd0;
      tmp_2_reg_i3 <= 32'd0;
      t4_2_reg_242 <= t4_2_fu_116_p2;
      t4_3_reg_247 <= t4_3_fu_122_p2;
      t4_reg_232 <= t4_fu_104_p2;
      tmp_4_reg_227 <= tmp_4_fu_72_p2;
      tmp_9_reg_237 <= tmp_9_fu_110_p2;
    end 
  end


  always @(posedge ap_clk) begin
    if(1'b1 == ap_CS_fsm_state3) begin
      tmp_1_reg_i3 <= t4_2_fu_116_p2;
      tmp_1_reg_i1 <= tmp_1_wire_mux1_out;
      tmp_1_reg_i2 <= tmp_1_wire_mux2_out;
      tmp_2_reg_i3 <= tmp_4_fu_72_p2;
      tmp_2_reg_i1 <= tmp_2_wire_mux1_out;
      tmp_2_reg_i2 <= tmp_2_wire_mux2_out;
    end 
  end


  always @(*) begin
    if(1'b1 == ap_CS_fsm_state2) begin
      ap_done = 1'b1;
    end else begin
      ap_done = 1'b0;
    end
  end


  always @(*) begin
    if((1'b0 == ap_start) & (1'b1 == ap_CS_fsm_state1)) begin
      ap_idle = 1'b1;
    end else begin
      ap_idle = 1'b0;
    end
  end


  always @(*) begin
    if(1'b1 == ap_CS_fsm_state2) begin
      ap_ready = 1'b1;
    end else begin
      ap_ready = 1'b0;
    end
  end


  always @(*) begin
    if(1'b1 == ap_CS_fsm_state1) begin
      trigger = 1'b1;
    end else begin
      trigger = 1'b0;
    end
  end


  always @(*) begin
    case(ap_CS_fsm)
      ap_ST_fsm_state1: begin
        if((1'b1 == ap_CS_fsm_state1) & (ap_start == 1'b1)) begin
          ap_NS_fsm = ap_ST_fsm_state3;
        end else begin
          ap_NS_fsm = ap_ST_fsm_state1;
        end
      end
      ap_ST_fsm_state2: begin
        ap_NS_fsm = ap_ST_fsm_state1;
      end
      ap_ST_fsm_state3: begin
        ap_NS_fsm = ap_ST_fsm_state2;
      end
      default: begin
        ap_NS_fsm = 'bx;
      end
    endcase
  end

  assign ap_CS_fsm_state1 = ap_CS_fsm[32'd0];
  assign ap_CS_fsm_state2 = ap_CS_fsm[32'd1];
  assign ap_CS_fsm_state3 = ap_CS_fsm[32'd2];
  assign tmp_s_fu_181_p2_temp_0 = tmp_s_fu_181_p2 & 31'd1;
  assign ap_return = (tmp_s_fu_181_p2_temp_0 === 1'b1)? out1_1_fu_192_p2 : out1_fu_187_p2;
  assign tmp_1_wire_mux1_in = tmp_1_reg_i1;
  assign tmp_1_wire_mux2_in = tmp_1_reg_i2;
  assign tmp_1_wire_mux2_out = (trigger == 1'b1)? ~tmp_1_wire_mux2_in : 32'd4;
  assign tmp_1_wire_mux1_out = (trigger == 1'b1)? ~tmp_1_wire_mux1_in : in2;
  assign t4_2_fu_116_p2 = tmp_1_wire_mux1_out + tmp_1_wire_mux2_out;
  assign tmp_2_wire_mux1_in = tmp_2_reg_i1;
  assign tmp_2_wire_mux2_in = tmp_2_reg_i2;
  assign tmp_2_wire_mux2_out = (trigger == 1'b1)? ~tmp_2_wire_mux2_in : in3;
  assign tmp_2_wire_mux1_out = (trigger == 1'b1)? ~tmp_2_wire_mux1_in : 32'd0;
  assign t2_fu_66_p2 = tmp_2_wire_mux1_out - tmp_2_wire_mux2_out;
  assign out1_1_fu_192_p2 = in5 + 32'd8;
  assign out1_fu_187_p2 = $signed(in1) + $signed(32'd4294967291);
  assign tmp_4_reg_227_temp_1 = tmp_4_reg_227 & 31'd1;
  assign t4_1_fu_162_p3 = (tmp_4_reg_227_temp_1 === 1'b1)? t4_reg_232 : t4_4_fu_157_p3;
  assign t4_3_fu_122_p2 = in3 - in5;
  assign tmp_9_reg_237_temp_2 = tmp_9_reg_237 & 31'd1;
  assign t4_4_fu_157_p3 = (tmp_9_reg_237_temp_2 === 1'b1)? t4_3_reg_247 : t4_2_reg_242;
  assign t4_fu_104_p2 = t6_6_fu_96_p3 - in4;
  assign tmp_1_fu_133_p2_temp_3 = tmp_1_fu_133_p2 & 31'd1;
  assign t6_1_fu_149_p3 = (tmp_1_fu_133_p2_temp_3 === 1'b1)? t6_3_fu_144_p2 : t6_fu_139_p2;
  assign tmp_fu_128_p2_temp_4 = tmp_fu_128_p2 & 31'd1;
  assign t6_2_fu_173_p3 = (tmp_fu_128_p2_temp_4 === 1'b1)? t6_1_fu_149_p3 : t6_7_fu_168_p2;
  assign t6_3_fu_144_p2 = 32'd8 - in4;
  assign t6_4_fu_84_p2 = in2 + in1;
  assign t6_5_fu_90_p2 = 32'd0 - in2;
  assign tmp_5_fu_78_p2_temp_5 = tmp_5_fu_78_p2 & 31'd1;
  assign t6_6_fu_96_p3 = (tmp_5_fu_78_p2_temp_5 === 1'b1)? t6_5_fu_90_p2 : t6_4_fu_84_p2;
  assign t6_7_fu_168_p2 = t4_1_fu_162_p3 + in4;
  assign t6_fu_139_p2 = in2 + 32'd5;
  assign tmp_1_fu_133_p2 = (in6 == 32'd0)? 1'b1 : 1'b0;
  assign tmp_4_fu_72_p2 = (in2 == t2_fu_66_p2)? 1'b1 : 1'b0;
  assign tmp_5_fu_78_p2 = (in4 == 32'd0)? 1'b1 : 1'b0;
  assign tmp_9_fu_110_p2 = (in1 == 32'd4)? 1'b1 : 1'b0;
  assign tmp_fu_128_p2 = (in5 == 32'd0)? 1'b1 : 1'b0;
  assign tmp_s_fu_181_p2 = (t6_2_fu_173_p3 == 32'd0)? 1'b1 : 1'b0;

endmodule

