
module fir
(
  ap_clk,
  ap_rst,
  ap_start,
  ap_done,
  ap_idle,
  ap_ready,
  c_address0,
  c_ce0,
  c_q0,
  x,
  ap_return,
  trigger
);

  parameter ap_ST_fsm_state1 = 6'd1;
  parameter ap_ST_fsm_state2 = 6'd2;
  parameter ap_ST_fsm_state3 = 6'd4;
  parameter ap_ST_fsm_state4 = 6'd8;
  parameter ap_ST_fsm_state5 = 6'd16;
  parameter ap_ST_fsm_state6 = 6'd32;
  parameter ap_ST_fsm_state7 = 6'd64;
  parameter ap_ST_fsm_state8 = 6'd128;
  input ap_clk;
  input ap_rst;
  input ap_start;
  output ap_done;
  output ap_idle;
  output ap_ready;
  output [3:0] c_address0;
  output c_ce0;
  input [31:0] c_q0;
  input [31:0] x;
  input [0:0] trigger;
  output [31:0] ap_return;
  reg ap_done;
  reg ap_idle;
  reg ap_ready;
  reg c_ce0;
  reg [5:0] ap_CS_fsm;
  wire ap_CS_fsm_state1;
  reg [3:0] shift_reg_address0;
  reg shift_reg_ce0;
  reg shift_reg_we0;
  reg [31:0] shift_reg_d0;
  wire [31:0] shift_reg_q0;
  wire signed [31:0] sext_ln15_fu_121_p1;
  reg signed [31:0] sext_ln15_reg_168;
  wire ap_CS_fsm_state2;
  wire [0:0] icmp_ln16_fu_133_p2;
  reg [0:0] icmp_ln16_reg_177;
  wire [0:0] tmp_fu_125_p3;
  wire ap_CS_fsm_state3;
  wire [4:0] grp_fu_114_p2;
  reg [4:0] i_reg_196;
  reg signed [31:0] c_load_reg_201;
  wire ap_CS_fsm_state4;
  wire [31:0] mul_ln23_fu_152_p2;
  reg [31:0] mul_ln23_reg_206;
  wire ap_CS_fsm_state5;
  wire [31:0] acc_fu_157_p2;
  wire ap_CS_fsm_state6;
  reg [31:0] acc_0_reg_80;
  wire signed [4:0] ap_phi_mux_i_0_phi_fu_96_p4;
  reg signed [4:0] i_0_reg_92;
  reg signed [31:0] data_0_reg_104;
  wire [63:0] zext_ln20_fu_139_p1;
  wire [63:0] zext_ln20_1_fu_144_p1;
  wire [63:0] zext_ln23_fu_148_p1;
  reg signed [4:0] grp_fu_114_p0;
  reg [5:0] ap_NS_fsm;

  initial begin
    #0 ap_CS_fsm = 8'd1;
  end


  fir_shift_reg
  #(
    .DataWidth(32),
    .AddressRange(11),
    .AddressWidth(4)
  )
  shift_reg_U
  (
    .clk(ap_clk),
    .reset(ap_rst),
    .address0(shift_reg_address0),
    .ce0(shift_reg_ce0),
    .we0(shift_reg_we0),
    .d0(shift_reg_d0),
    .q0(shift_reg_q0)
  );


  always @(posedge ap_clk) begin
    if(ap_rst == 1'b1) begin
      ap_CS_fsm <= ap_ST_fsm_state1;
    end else begin
      ap_CS_fsm <= ap_NS_fsm;
    end
  end


  always @(posedge ap_clk) begin
    if(1'b1 == ap_CS_fsm_state6) begin
      acc_0_reg_80 <= acc_fu_157_p2;
    end else if((1'b1 == ap_CS_fsm_state1) & (ap_start == 1'b1)) begin
      acc_0_reg_80 <= 32'd0;
    end 
  end


  always @(posedge ap_clk) begin
    if((icmp_ln16_reg_177 == 1'd0) & (1'b1 == ap_CS_fsm_state3)) begin
      data_0_reg_104 <= shift_reg_q0;
    end else if((tmp_fu_125_p3 == 1'd0) & (icmp_ln16_fu_133_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state2)) begin
      data_0_reg_104 <= x;
    end 
  end


  always @(posedge ap_clk) begin
    if(1'b1 == ap_CS_fsm_state6) begin
      i_0_reg_92 <= i_reg_196;
    end else if((1'b1 == ap_CS_fsm_state1) & (ap_start == 1'b1)) begin
      i_0_reg_92 <= 5'd10;
    end 
  end


  always @(posedge ap_clk) begin
    if(1'b1 == ap_CS_fsm_state4) begin
      c_load_reg_201 <= c_q0;
    end 
  end


  always @(posedge ap_clk) begin
    if(1'b1 == ap_CS_fsm_state3) begin
      i_reg_196 <= grp_fu_114_p2;
    end 
  end


  always @(posedge ap_clk) begin
    if((tmp_fu_125_p3 == 1'd0) & (1'b1 == ap_CS_fsm_state2)) begin
      icmp_ln16_reg_177 <= icmp_ln16_fu_133_p2;
    end 
  end


  always @(posedge ap_clk) begin
    if(1'b1 == ap_CS_fsm_state5) begin
      mul_ln23_reg_206 <= mul_ln23_fu_152_p2;
    end 
  end


  always @(posedge ap_clk) begin
    if(1'b1 == ap_CS_fsm_state2) begin
      sext_ln15_reg_168 <= sext_ln15_fu_121_p1;
    end 
  end


  always @(*) begin
    if((tmp_fu_125_p3 == 1'd1) & (1'b1 == ap_CS_fsm_state2)) begin
      ap_done = 1'b1;
    end else begin
      ap_done = 1'b0;
    end
  end


  always @(*) begin
    if((ap_start == 1'b0) & (1'b1 == ap_CS_fsm_state1)) begin
      ap_idle = 1'b1;
    end else begin
      ap_idle = 1'b0;
    end
  end


  always @(*) begin
    if((tmp_fu_125_p3 == 1'd1) & (1'b1 == ap_CS_fsm_state2)) begin
      ap_ready = 1'b1;
    end else begin
      ap_ready = 1'b0;
    end
  end


  always @(*) begin
    if(1'b1 == ap_CS_fsm_state3) begin
      c_ce0 = 1'b1;
    end else begin
      c_ce0 = 1'b0;
    end
  end


  always @(*) begin
    if(1'b1 == ap_CS_fsm_state3) begin
      grp_fu_114_p0 = i_0_reg_92;
    end else if(1'b1 == ap_CS_fsm_state2) begin
      grp_fu_114_p0 = ap_phi_mux_i_0_phi_fu_96_p4;
    end else begin
      grp_fu_114_p0 = 'bx;
    end
  end


  always @(*) begin
    if(1'b1 == ap_CS_fsm_state3) begin
      shift_reg_address0 = zext_ln20_1_fu_144_p1;
    end else if((tmp_fu_125_p3 == 1'd0) & (icmp_ln16_fu_133_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state2)) begin
      shift_reg_address0 = 4'd0;
    end else if((tmp_fu_125_p3 == 1'd0) & (icmp_ln16_fu_133_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state2)) begin
      shift_reg_address0 = zext_ln20_fu_139_p1;
    end else begin
      shift_reg_address0 = 'bx;
    end
  end


  always @(*) begin
    if((1'b1 == ap_CS_fsm_state3) | (tmp_fu_125_p3 == 1'd0) & (icmp_ln16_fu_133_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state2) | (tmp_fu_125_p3 == 1'd0) & (icmp_ln16_fu_133_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state2)) begin
      shift_reg_ce0 = 1'b1;
    end else begin
      shift_reg_ce0 = 1'b0;
    end
  end


  always @(*) begin
    if(1'b1 == ap_CS_fsm_state3) begin
      shift_reg_d0 = shift_reg_q0;
    end else if((tmp_fu_125_p3 == 1'd0) & (icmp_ln16_fu_133_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state2)) begin
      shift_reg_d0 = x;
    end else begin
      shift_reg_d0 = 'bx;
    end
  end


  always @(*) begin
    if((icmp_ln16_reg_177 == 1'd0) & (1'b1 == ap_CS_fsm_state3) | (tmp_fu_125_p3 == 1'd0) & (icmp_ln16_fu_133_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state2)) begin
      shift_reg_we0 = 1'b1;
    end else begin
      shift_reg_we0 = 1'b0;
    end
  end


  always @(*) begin
    case(ap_CS_fsm)
      ap_ST_fsm_state1: begin
        if((1'b1 == ap_CS_fsm_state1) & (ap_start == 1'b1)) begin
          ap_NS_fsm = ap_ST_fsm_state2;
        end else begin
          ap_NS_fsm = ap_ST_fsm_state1;
        end
      end
      ap_ST_fsm_state2: begin
        if((tmp_fu_125_p3 == 1'd1) & (1'b1 == ap_CS_fsm_state2)) begin
          ap_NS_fsm = ap_ST_fsm_state1;
        end else begin
          ap_NS_fsm = ap_ST_fsm_state3;
        end
      end
      ap_ST_fsm_state3: begin
        if (((1'b1 == ap_CS_fsm_state3) & (trigger == 1'b1))) begin
          ap_NS_fsm = ap_ST_fsm_state7;
        end else begin
          ap_NS_fsm = ap_ST_fsm_state4;
        end
      end
      ap_ST_fsm_state4: begin
        if (((1'b1 == ap_CS_fsm_state4) & (trigger == 1'b1))) begin
          ap_NS_fsm = ap_ST_fsm_state8;
        end else begin
          ap_NS_fsm = ap_ST_fsm_state5;
        end
      end
      ap_ST_fsm_state5: begin
        ap_NS_fsm = ap_ST_fsm_state6;
      end
      ap_ST_fsm_state6: begin
        ap_NS_fsm = ap_ST_fsm_state2;
      end
      ap_ST_fsm_state7: begin
        ap_NS_fsm = ap_ST_fsm_state4;
      end
      ap_ST_fsm_state8: begin
        ap_NS_fsm = ap_ST_fsm_state5;
      end
      default: begin
        ap_NS_fsm = 'bx;
      end
    endcase
  end

  assign acc_fu_157_p2 = mul_ln23_reg_206 + acc_0_reg_80;
  assign ap_CS_fsm_state1 = ap_CS_fsm[32'd0];
  assign ap_CS_fsm_state2 = ap_CS_fsm[32'd1];
  assign ap_CS_fsm_state3 = ap_CS_fsm[32'd2];
  assign ap_CS_fsm_state4 = ap_CS_fsm[32'd3];
  assign ap_CS_fsm_state5 = ap_CS_fsm[32'd4];
  assign ap_CS_fsm_state6 = ap_CS_fsm[32'd5];
  assign ap_CS_fsm_state7 = ap_CS_fsm[32'd6];
  assign ap_CS_fsm_state8 = ap_CS_fsm[32'd7];
  assign ap_phi_mux_i_0_phi_fu_96_p4 = i_0_reg_92;
  assign ap_return = acc_0_reg_80;
  assign c_address0 = zext_ln23_fu_148_p1;
  assign grp_fu_114_p2 = $signed(grp_fu_114_p0) + $signed(5'd31);
  assign icmp_ln16_fu_133_p2 = (i_0_reg_92 == 5'd0)? 1'b1 : 1'b0;
  assign mul_ln23_fu_152_p2 = $signed(c_load_reg_201) * $signed(data_0_reg_104);
  assign sext_ln15_fu_121_p1 = i_0_reg_92;
  assign i_0_reg_92_temp_0 = i_0_reg_92 >> 32'd4;
  assign tmp_fu_125_p3 = i_0_reg_92_temp_0 & 1'd1;
  assign zext_ln20_1_fu_144_p1 = $unsigned(sext_ln15_reg_168);
  assign zext_ln20_fu_139_p1 = grp_fu_114_p2;
  assign zext_ln23_fu_148_p1 = $unsigned(sext_ln15_reg_168);

endmodule

