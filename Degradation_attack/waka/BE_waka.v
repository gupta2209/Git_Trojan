
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
  trigger
);

  parameter ap_ST_fsm_state1 = 3'd1;
  parameter ap_ST_fsm_state2 = 3'd2;
  parameter ap_ST_fsm_state3 = 3'd4;
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
  output [31:0] out13;
  output out13_ap_vld;
  input [31:0] out30_i;
  input [0:0] trigger;
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
  reg [2:0] ap_CS_fsm;
  wire ap_CS_fsm_state1;
  wire [31:0] sub_ln11_fu_222_p2;
  reg [31:0] sub_ln11_reg_351;
  wire [0:0] icmp_ln13_fu_241_p2;
  reg [0:0] icmp_ln13_reg_356;
  wire [0:0] icmp_ln18_fu_247_p2;
  reg [0:0] icmp_ln18_reg_360;
  wire [31:0] t23_fu_259_p2;
  reg [31:0] t23_reg_365;
  wire [31:0] t26_1_fu_271_p2;
  reg [31:0] t26_1_reg_370;
  wire [31:0] t16_fu_277_p2;
  wire [31:0] t16_1_fu_298_p2;
  reg [31:0] t16_1_reg_380;
  wire ap_CS_fsm_state2;
  reg [31:0] ap_phi_mux_t16_0_phi_fu_210_p4;
  reg [31:0] t16_0_reg_207;
  wire ap_CS_fsm_state3;
  wire [31:0] add_ln28_fu_303_p2;
  wire [31:0] add_ln30_fu_309_p2;
  wire [31:0] add_ln12_fu_229_p2;
  wire [31:0] t5_fu_216_p2;
  wire [31:0] add_ln21_fu_253_p2;
  wire [31:0] t11_fu_235_p2;
  wire [31:0] add_ln26_fu_265_p2;
  wire [31:0] t25_fu_283_p2;
  wire [31:0] t26_fu_287_p2;
  wire [31:0] t26_2_fu_292_p3;
  wire [31:0] add_ln31_fu_315_p2;
  reg [2:0] ap_NS_fsm;

  initial begin
    #0 ap_CS_fsm = 4'd1;
  end


  always @(posedge ap_clk) begin
    if(ap_rst == 1'b1) begin
      ap_CS_fsm <= ap_ST_fsm_state1;
    end else begin
      ap_CS_fsm <= ap_NS_fsm;
    end
  end


  always @(posedge ap_clk) begin
    if((icmp_ln13_reg_356 == 1'd0) & (1'b1 == ap_CS_fsm_state3)) begin
      t16_0_reg_207 <= t16_1_reg_380;
    end else if((ap_start == 1'b1) & (icmp_ln13_fu_241_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state1)) begin
      t16_0_reg_207 <= t16_fu_277_p2;
    end 
  end


  always @(posedge ap_clk) begin
    if((ap_start == 1'b1) & (1'b1 == ap_CS_fsm_state1)) begin
      icmp_ln13_reg_356 <= icmp_ln13_fu_241_p2;
      sub_ln11_reg_351 <= sub_ln11_fu_222_p2;
    end 
  end


  always @(posedge ap_clk) begin
    if((ap_start == 1'b1) & (icmp_ln13_fu_241_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state1)) begin
      icmp_ln18_reg_360 <= icmp_ln18_fu_247_p2;
      t23_reg_365 <= t23_fu_259_p2;
      t26_1_reg_370 <= t26_1_fu_271_p2;
    end 
  end


  always @(posedge ap_clk) begin
    if(1'b1 == ap_CS_fsm_state2) begin
      t16_1_reg_380 <= t16_1_fu_298_p2;
    end 
  end


  always @(*) begin
    if(1'b1 == ap_CS_fsm_state3) begin
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
    if((icmp_ln13_reg_356 == 1'd0) & (1'b1 == ap_CS_fsm_state3)) begin
      ap_phi_mux_t16_0_phi_fu_210_p4 = t16_1_reg_380;
    end else begin
      ap_phi_mux_t16_0_phi_fu_210_p4 = t16_0_reg_207;
    end
  end


  always @(*) begin
    if(1'b1 == ap_CS_fsm_state3) begin
      ap_ready = 1'b1;
    end else begin
      ap_ready = 1'b0;
    end
  end


  always @(*) begin
    if((ap_start == 1'b1) & (1'b1 == ap_CS_fsm_state1)) begin
      out13_ap_vld = 1'b1;
    end else begin
      out13_ap_vld = 1'b0;
    end
  end


  always @(*) begin
    if(1'b1 == ap_CS_fsm_state2) begin
      out30_o = add_ln28_fu_303_p2;
    end else begin
      out30_o = out30_i;
    end
  end


  always @(*) begin
    if(1'b1 == ap_CS_fsm_state2) begin
      out30_o_ap_vld = 1'b1;
    end else begin
      out30_o_ap_vld = 1'b0;
    end
  end


  always @(*) begin
    if(1'b1 == ap_CS_fsm_state3) begin
      out31_ap_vld = 1'b1;
    end else begin
      out31_ap_vld = 1'b0;
    end
  end


  always @(*) begin
    case(ap_CS_fsm)
      ap_ST_fsm_state1: begin
        if((ap_start == 1'b1) & (icmp_ln13_fu_241_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state1)) begin
          ap_NS_fsm = ap_ST_fsm_state3;
        end else if((ap_start == 1'b1) & (icmp_ln13_fu_241_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state1)) begin
          ap_NS_fsm = ap_ST_fsm_state2;
        end else begin
          ap_NS_fsm = ap_ST_fsm_state1;
        end
      end
      ap_ST_fsm_state2: begin
        if (((1'b1 == ap_CS_fsm_state2) & (trigger == 1'b1))) begin
          ap_NS_fsm = ap_ST_fsm_state4;
        end else begin
          ap_NS_fsm = ap_ST_fsm_state3;
        end
      end
      ap_ST_fsm_state3: begin
        ap_NS_fsm = ap_ST_fsm_state1;
      end
      ap_ST_fsm_state4: begin
        ap_NS_fsm = ap_ST_fsm_state3;
      end
      default: begin
        ap_NS_fsm = 'bx;
      end
    endcase
  end

  assign add_ln12_fu_229_p2 = in7 + in12;
  assign add_ln21_fu_253_p2 = t5_fu_216_p2 + in22;
  assign add_ln26_fu_265_p2 = in19 + in20;
  assign add_ln28_fu_303_p2 = t26_2_fu_292_p3 + in29;
  assign add_ln30_fu_309_p2 = ap_phi_mux_t16_0_phi_fu_210_p4 + in32;
  assign add_ln31_fu_315_p2 = sub_ln11_reg_351 + add_ln30_fu_309_p2;
  assign ap_CS_fsm_state1 = ap_CS_fsm[32'd0];
  assign ap_CS_fsm_state2 = ap_CS_fsm[32'd1];
  assign ap_CS_fsm_state3 = ap_CS_fsm[32'd2];
  assign ap_CS_fsm_state4 = ap_CS_fsm[32'd3];
  assign ap_return = add_ln31_fu_315_p2 + out30_i;
  assign icmp_ln13_fu_241_p2 = (in2 == in1)? 1'b1 : 1'b0;
  assign icmp_ln18_fu_247_p2 = ($signed(in9) < $signed(in10))? 1'b1 : 1'b0;
  assign out13 = in14 - in15;
  assign out31 = add_ln30_fu_309_p2;
  assign sub_ln11_fu_222_p2 = in14 - in15;
  assign t11_fu_235_p2 = add_ln12_fu_229_p2 + in8;
  assign t16_1_fu_298_p2 = t26_2_fu_292_p3 - in28;
  assign t16_fu_277_p2 = t11_fu_235_p2 - in17;
  assign t23_fu_259_p2 = add_ln21_fu_253_p2 + t11_fu_235_p2;
  assign t25_fu_283_p2 = t23_reg_365 - in24;
  assign t26_1_fu_271_p2 = add_ln26_fu_265_p2 + t5_fu_216_p2;
  assign icmp_ln18_reg_360_temp_0 = icmp_ln18_reg_360 & 31'd1;
  assign t26_2_fu_292_p3 = (icmp_ln18_reg_360_temp_0 === 1'b1)? t26_fu_287_p2 : t26_1_reg_370;
  assign t26_fu_287_p2 = t25_fu_283_p2 + in27;
  assign t5_fu_216_p2 = in3 - in4;

endmodule

