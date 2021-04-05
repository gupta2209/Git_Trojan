module hls_macc
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
  in7,
  in8,
  in9,
  in10,
  in14,
  in12,
  in15,
  in17,
  in19,
  in20,
  in22,
  in24,
  in27,
  in28,
  in29,
  in32,
  out13,
  out13_ap_vld,
  out30_i,
  out30_o,
  out30_o_ap_vld,
  out31,
  out31_ap_vld,
  ap_return,
  trigger_in
);

  parameter ap_ST_fsm_state1 = 5'd1;
  parameter ap_ST_fsm_state2 = 5'd2;
  parameter ap_ST_fsm_state3 = 5'd4;
  parameter ap_ST_fsm_state4 = 5'd8;
  parameter ap_ST_fsm_state5 = 5'd16;
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
  input [31:0] in7;
  input [31:0] in8;
  input [31:0] in9;
  input [31:0] in10;
  input [31:0] in14;
  input [31:0] in12;
  input [31:0] in15;
  input [31:0] in17;
  input [31:0] in19;
  input [31:0] in20;
  input [31:0] in22;
  input [31:0] in24;
  input [31:0] in27;
  input [31:0] in28;
  input [31:0] in29;
  input [31:0] in32;
  input [0:0] trigger_in;
  output [31:0] out13;
  output out13_ap_vld;
  input [31:0] out30_i;
  output [31:0] out30_o;
  output out30_o_ap_vld;
  output [31:0] out31;
  output out31_ap_vld;
  output [31:0] ap_return;
  reg ap_done;
  reg ap_idle;
  reg ap_ready;
  reg out13_ap_vld;
  reg [31:0] out30_o;
  reg out30_o_ap_vld;
  reg out31_ap_vld;
  reg [4:0] ap_CS_fsm;
  wire ap_CS_fsm_state1;
  wire [31:0] out13_assign_fu_222_p2;
  reg [31:0] out13_assign_reg_349;
  wire [0:0] tmp_2_fu_247_p2;
  reg [0:0] tmp_2_reg_357;
  wire [0:0] tmp_fu_241_p2;
  wire [31:0] t23_fu_259_p2;
  reg [31:0] t23_reg_362;
  wire [31:0] t26_1_fu_271_p2;
  reg [31:0] t26_1_reg_367;
  wire [31:0] t16_fu_277_p2;
  reg [31:0] t16_reg_372;
  wire [31:0] t26_2_fu_292_p3;
  reg [31:0] t26_2_reg_377;
  wire ap_CS_fsm_state2;
  wire [31:0] t16_1_fu_298_p2;
  wire ap_CS_fsm_state3;
  reg [31:0] t8_reg_207;
  wire ap_CS_fsm_state4;
  wire [31:0] tmp_6_fu_302_p2;
  wire [31:0] tmp_7_fu_307_p2;
  wire ap_CS_fsm_state5;
  wire [31:0] tmp1_fu_229_p2;
  wire [31:0] t5_fu_216_p2;
  wire [31:0] tmp2_fu_253_p2;
  wire [31:0] t11_fu_235_p2;
  wire [31:0] tmp3_fu_265_p2;
  wire [31:0] t25_fu_283_p2;
  wire [31:0] t26_fu_287_p2;
  wire [31:0] tmp4_fu_313_p2;
  reg [4:0] ap_NS_fsm;
  reg [31:0] reg1;
  wire [31:0] reg_out1;
  wire [31:0] mux_out1;
  wire [31:0] mux_out_neg1;
  wire [0:0] temp1;
  wire [0:0] temp2;
  wire [0:0] temp12;

  initial begin
    #0 ap_CS_fsm = 5'd1;
  end


  always @(posedge ap_clk) begin
    if(ap_rst == 1'b1) begin
      ap_CS_fsm <= ap_ST_fsm_state1;
    end else begin
      ap_CS_fsm <= ap_NS_fsm;
    end
  end


  always @(posedge ap_clk) begin
    if(1'b1 == ap_CS_fsm_state3) begin
      t8_reg_207 <= t16_1_fu_298_p2;
    end else if(1'b1 == ap_CS_fsm_state4) begin
      t8_reg_207 <= t16_reg_372;
    end 
  end


  always @(posedge ap_clk) begin
    if((1'b1 == ap_CS_fsm_state1) & (ap_start == 1'b1)) begin
      reg1 <= 1'b0;
      out13_assign_reg_349 <= out13_assign_fu_222_p2;
    end else if((1'b1 == ap_CS_fsm_state4) & (trigger_in == 1'b1)) begin
      reg1 <= mux_out_neg1;
    end 
  end


  always @(posedge ap_clk) begin
    if((1'b1 == ap_CS_fsm_state1) & (ap_start == 1'b1) & (tmp_fu_241_p2 == 1'd1)) begin
      t16_reg_372 <= t16_fu_277_p2;
    end 
  end


  always @(posedge ap_clk) begin
    if((1'b1 == ap_CS_fsm_state1) & (ap_start == 1'b1) & (tmp_fu_241_p2 == 1'd0)) begin
      t23_reg_362 <= t23_fu_259_p2;
      t26_1_reg_367 <= t26_1_fu_271_p2;
      tmp_2_reg_357 <= tmp_2_fu_247_p2;
    end 
  end


  always @(posedge ap_clk) begin
    if(1'b1 == ap_CS_fsm_state2) begin
      t26_2_reg_377 <= t26_2_fu_292_p3;
    end 
  end


  always @(*) begin
    if(1'b1 == ap_CS_fsm_state5) begin
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
    if(1'b1 == ap_CS_fsm_state5) begin
      ap_ready = 1'b1;
    end else begin
      ap_ready = 1'b0;
    end
  end


  always @(*) begin
    if((1'b1 == ap_CS_fsm_state1) & (ap_start == 1'b1)) begin
      out13_ap_vld = 1'b1;
    end else begin
      out13_ap_vld = 1'b0;
    end
  end


  always @(*) begin
    if(1'b1 == ap_CS_fsm_state3) begin
      out30_o = tmp_6_fu_302_p2;
    end else begin
      out30_o = out30_i;
    end
  end


  always @(*) begin
    if(1'b1 == ap_CS_fsm_state3) begin
      out30_o_ap_vld = 1'b1;
    end else begin
      out30_o_ap_vld = 1'b0;
    end
  end


  always @(*) begin
    if(1'b1 == ap_CS_fsm_state5) begin
      out31_ap_vld = 1'b1;
    end else begin
      out31_ap_vld = 1'b0;
    end
  end


  always @(*) begin
    case(ap_CS_fsm)
      ap_ST_fsm_state1: begin
        if((1'b1 == ap_CS_fsm_state1) & (ap_start == 1'b1) & (tmp_fu_241_p2 == 1'd1)) begin
          ap_NS_fsm = ap_ST_fsm_state4;
        end else if((1'b1 == ap_CS_fsm_state1) & (ap_start == 1'b1) & (tmp_fu_241_p2 == 1'd0)) begin
          ap_NS_fsm = ap_ST_fsm_state2;
        end else begin
          ap_NS_fsm = ap_ST_fsm_state1;
        end
      end
      ap_ST_fsm_state2: begin
        ap_NS_fsm = ap_ST_fsm_state3;
      end
      ap_ST_fsm_state3: begin
        ap_NS_fsm = ap_ST_fsm_state5;
      end
      ap_ST_fsm_state4: begin
        ap_NS_fsm = ap_ST_fsm_state5;
      end
      ap_ST_fsm_state5: begin
        ap_NS_fsm = ap_ST_fsm_state1;
      end
      default: begin
        ap_NS_fsm = 'bx;
      end
    endcase
  end

  assign ap_CS_fsm_state1 = ap_CS_fsm[32'd0];
  assign ap_CS_fsm_state2 = ap_CS_fsm[32'd1];
  assign ap_CS_fsm_state3 = ap_CS_fsm[32'd2];
  assign ap_CS_fsm_state4 = ap_CS_fsm[32'd3];
  assign ap_CS_fsm_state5 = ap_CS_fsm[32'd4];
  assign reg_out1 = reg1;
  assign temp1 = (trigger_in == 1'b1)? 1'b1 : 1'b0;
  assign temp2 = (1'b1 == ap_CS_fsm_state4)? 1'b1 : 1'b0;
  assign temp12 = temp1 & temp2;
  assign mux_out1 = ( temp12 == 1'b1 ) ? reg_out1 : in14;
  assign mux_out_neg1 = ~mux_out1;
  assign ap_return = tmp4_fu_313_p2 + out30_i;
  assign out13 = in14 - in15;
  assign out13_assign_fu_222_p2 = mux_out1 - in15;
  assign out31 = tmp_7_fu_307_p2;
  assign t11_fu_235_p2 = tmp1_fu_229_p2 + in8;
  assign t16_1_fu_298_p2 = t26_2_reg_377 - in28;
  assign t16_fu_277_p2 = t11_fu_235_p2 - in17;
  assign t23_fu_259_p2 = tmp2_fu_253_p2 + t11_fu_235_p2;
  assign t25_fu_283_p2 = t23_reg_362 - in24;
  assign t26_1_fu_271_p2 = tmp3_fu_265_p2 + t5_fu_216_p2;
  assign tmp_2_reg_357_temp_0 = tmp_2_reg_357 & 31'd1;
  assign t26_2_fu_292_p3 = (tmp_2_reg_357_temp_0 === 1'b1)? t26_fu_287_p2 : t26_1_reg_367;
  assign t26_fu_287_p2 = t25_fu_283_p2 + in27;
  assign t5_fu_216_p2 = in3 - in4;
  assign tmp1_fu_229_p2 = in7 + in12;
  assign tmp2_fu_253_p2 = t5_fu_216_p2 + in22;
  assign tmp3_fu_265_p2 = in19 + in20;
  assign tmp4_fu_313_p2 = out13_assign_reg_349 + tmp_7_fu_307_p2;
  assign tmp_2_fu_247_p2 = ($signed(in9) < $signed(in10))? 1'b1 : 1'b0;
  assign tmp_6_fu_302_p2 = t26_2_reg_377 + in29;
  assign tmp_7_fu_307_p2 = t8_reg_207 + in32;
  assign tmp_fu_241_p2 = (in2 == in1)? 1'b1 : 1'b0;

endmodule

