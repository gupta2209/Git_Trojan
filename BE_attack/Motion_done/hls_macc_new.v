
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
  in5,
  in6,
  in7,
  in8,
  in9,
  in10,
  out1,
  out1_ap_vld,
  out2,
  out2_ap_vld,
  out3,
  out3_ap_vld,
  ap_return
);

  parameter ap_ST_fsm_state1 = 7'd1;
  parameter ap_ST_fsm_state2 = 7'd2;
  parameter ap_ST_fsm_state3 = 7'd4;
  parameter ap_ST_fsm_state4 = 7'd8;
  parameter ap_ST_fsm_state5 = 7'd16;
  parameter ap_ST_fsm_state6 = 7'd32;
  parameter ap_ST_fsm_state7 = 7'd64;
  parameter ap_ST_fsm_state8 = 7'd128;
  parameter ap_ST_fsm_state9 = 7'd256;
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
  input [31:0] in7;
  input [31:0] in8;
  input [31:0] in9;
  input [31:0] in10;
  output [31:0] out1;
  output out1_ap_vld;
  output [31:0] out2;
  output out2_ap_vld;
  output [31:0] out3;
  output out3_ap_vld;
  output [31:0] ap_return;
  reg ap_done;
  reg ap_idle;
  reg ap_ready;
  reg out1_ap_vld;
  reg out2_ap_vld;
  reg out3_ap_vld;
  reg [6:0] ap_CS_fsm;
  wire ap_CS_fsm_state1;
  wire ap_CS_fsm_state2;
  wire [31:0] grp_fu_125_p2;
  reg [31:0] add3_reg_321;
  wire [31:0] grp_fu_131_p2;
  reg [31:0] add5_reg_326;
  wire ap_CS_fsm_state3;
  wire [31:0] grp_fu_137_p2;
  reg [31:0] mult2_reg_343;
  wire [31:0] grp_fu_143_p2;
  reg [31:0] mult10_reg_348;
  wire signed [31:0] tmp_fu_154_p2;
  reg signed [31:0] tmp_reg_353;
  wire signed [31:0] tmp6_fu_159_p2;
  reg signed [31:0] tmp6_reg_358;
  wire ap_CS_fsm_state4;
  wire signed [31:0] grp_fu_149_p2;
  reg signed [31:0] tmp1_reg_369;
  wire signed [31:0] add1_s_fu_177_p2;
  reg signed [31:0] add1_s_reg_374;
  wire signed [31:0] tmp4_fu_185_p2;
  reg signed [31:0] tmp4_reg_379;
  wire signed [31:0] add4_s_fu_189_p2;
  reg signed [31:0] add4_s_reg_384;
  wire [31:0] grp_fu_163_p2;
  reg [31:0] mult7_reg_389;
  wire ap_CS_fsm_state5;
  wire [31:0] grp_fu_167_p2;
  reg [31:0] mult11_reg_394;
  wire [31:0] grp_fu_172_p2;
  reg [31:0] mult13_reg_399;
  wire [31:0] grp_fu_181_p2;
  reg [31:0] tmp3_reg_404;
  wire [31:0] grp_fu_194_p2;
  reg [31:0] tmp7_reg_409;
  wire [31:0] grp_fu_198_p2;
  reg [31:0] add2_reg_414;
  wire ap_CS_fsm_state6;
  wire [31:0] grp_fu_202_p2;
  reg [31:0] add6_reg_419;
  wire [31:0] add9_fu_214_p2;
  reg [31:0] add9_reg_425;
  wire [31:0] grp_fu_206_p2;
  reg [31:0] tmp5_reg_430;
  wire [31:0] grp_fu_210_p2;
  reg [31:0] add13_reg_435;
  reg [28:0] tmp_6_reg_440;
  wire ap_CS_fsm_state7;
  wire [31:0] tmp_1_fu_242_p2;
  wire [31:0] tmp_2_fu_256_p2;
  wire signed [31:0] tmp6_fu_159_p0;
  wire signed [31:0] tmp4_fu_185_p0;
  wire signed [31:0] add4_s_fu_189_p0;
  wire [31:0] add14_fu_218_p2;
  wire [31:0] shf1_fu_232_p2;
  wire [31:0] tmp2_fu_237_p2;
  wire signed [31:0] shf2_fu_248_p1;
  wire [31:0] tmp8_fu_251_p2;
  wire [31:0] tmp9_fu_262_p2;
  reg [6:0] ap_NS_fsm;
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
    #0 ap_CS_fsm = 7'd1;
  end


  hls_macc_mul_32s_bkb
  #(
    .ID(1),
    .NUM_STAGE(2),
    .din0_WIDTH(32),
    .din1_WIDTH(32),
    .dout_WIDTH(32)
  )
  hls_macc_mul_32s_bkb_U0
  (
    .clk(ap_clk),
    .reset(ap_rst),
    .din0(in7),
    .din1(in4),
    .ce(1'b1),
    .dout(grp_fu_125_p2)
  );


  hls_macc_mul_32s_bkb
  #(
    .ID(1),
    .NUM_STAGE(2),
    .din0_WIDTH(32),
    .din1_WIDTH(32),
    .dout_WIDTH(32)
  )
  hls_macc_mul_32s_bkb_U1
  (
    .clk(ap_clk),
    .reset(ap_rst),
    .din0(in10),
    .din1(in10),
    .ce(1'b1),
    .dout(grp_fu_131_p2)
  );


  hls_macc_mul_32s_bkb
  #(
    .ID(1),
    .NUM_STAGE(2),
    .din0_WIDTH(32),
    .din1_WIDTH(32),
    .dout_WIDTH(32)
  )
  hls_macc_mul_32s_bkb_U2
  (
    .clk(ap_clk),
    .reset(ap_rst),
    .din0(in3),
    .din1(in1),
    .ce(1'b1),
    .dout(grp_fu_137_p2)
  );


  hls_macc_mul_32s_bkb
  #(
    .ID(1),
    .NUM_STAGE(2),
    .din0_WIDTH(32),
    .din1_WIDTH(32),
    .dout_WIDTH(32)
  )
  hls_macc_mul_32s_bkb_U3
  (
    .clk(ap_clk),
    .reset(ap_rst),
    .din0(in9),
    .din1(in6),
    .ce(1'b1),
    .dout(grp_fu_143_p2)
  );


  hls_macc_mul_32s_bkb
  #(
    .ID(1),
    .NUM_STAGE(2),
    .din0_WIDTH(32),
    .din1_WIDTH(32),
    .dout_WIDTH(32)
  )
  hls_macc_mul_32s_bkb_U4
  (
    .clk(ap_clk),
    .reset(ap_rst),
    .din0(in5),
    .din1(in4),
    .ce(1'b1),
    .dout(grp_fu_149_p2)
  );


  hls_macc_mul_32s_bkb
  #(
    .ID(1),
    .NUM_STAGE(2),
    .din0_WIDTH(32),
    .din1_WIDTH(32),
    .dout_WIDTH(32)
  )
  hls_macc_mul_32s_bkb_U5
  (
    .clk(ap_clk),
    .reset(ap_rst),
    .din0(in6),
    .din1(in3),
    .ce(1'b1),
    .dout(grp_fu_163_p2)
  );


  hls_macc_mul_32s_bkb
  #(
    .ID(1),
    .NUM_STAGE(2),
    .din0_WIDTH(32),
    .din1_WIDTH(32),
    .dout_WIDTH(32)
  )
  hls_macc_mul_32s_bkb_U6
  (
    .clk(ap_clk),
    .reset(ap_rst),
    .din0(in8),
    .din1(in6),
    .ce(1'b1),
    .dout(grp_fu_167_p2)
  );


  hls_macc_mul_32s_bkb
  #(
    .ID(1),
    .NUM_STAGE(2),
    .din0_WIDTH(32),
    .din1_WIDTH(32),
    .dout_WIDTH(32)
  )
  hls_macc_mul_32s_bkb_U7
  (
    .clk(ap_clk),
    .reset(ap_rst),
    .din0(in8),
    .din1(in7),
    .ce(1'b1),
    .dout(grp_fu_172_p2)
  );


  hls_macc_mul_32s_bkb
  #(
    .ID(1),
    .NUM_STAGE(2),
    .din0_WIDTH(32),
    .din1_WIDTH(32),
    .dout_WIDTH(32)
  )
  hls_macc_mul_32s_bkb_U8
  (
    .clk(ap_clk),
    .reset(ap_rst),
    .din0(in5),
    .din1(tmp_reg_353),
    .ce(1'b1),
    .dout(grp_fu_181_p2)
  );


  hls_macc_mul_32s_bkb
  #(
    .ID(1),
    .NUM_STAGE(2),
    .din0_WIDTH(32),
    .din1_WIDTH(32),
    .dout_WIDTH(32)
  )
  hls_macc_mul_32s_bkb_U9
  (
    .clk(ap_clk),
    .reset(ap_rst),
    .din0(in9),
    .din1(tmp6_reg_358),
    .ce(1'b1),
    .dout(grp_fu_194_p2)
  );


  hls_macc_mul_32s_bkb
  #(
    .ID(1),
    .NUM_STAGE(2),
    .din0_WIDTH(32),
    .din1_WIDTH(32),
    .dout_WIDTH(32)
  )
  hls_macc_mul_32s_bkb_U10
  (
    .clk(ap_clk),
    .reset(ap_rst),
    .din0(in4),
    .din1(tmp1_reg_369),
    .ce(1'b1),
    .dout(grp_fu_198_p2)
  );


  hls_macc_mul_32s_bkb
  #(
    .ID(1),
    .NUM_STAGE(2),
    .din0_WIDTH(32),
    .din1_WIDTH(32),
    .dout_WIDTH(32)
  )
  hls_macc_mul_32s_bkb_U11
  (
    .clk(ap_clk),
    .reset(ap_rst),
    .din0(in1),
    .din1(add1_s_reg_374),
    .ce(1'b1),
    .dout(grp_fu_202_p2)
  );


  hls_macc_mul_32s_bkb
  #(
    .ID(1),
    .NUM_STAGE(2),
    .din0_WIDTH(32),
    .din1_WIDTH(32),
    .dout_WIDTH(32)
  )
  hls_macc_mul_32s_bkb_U12
  (
    .clk(ap_clk),
    .reset(ap_rst),
    .din0(in3),
    .din1(tmp4_reg_379),
    .ce(1'b1),
    .dout(grp_fu_206_p2)
  );


  hls_macc_mul_32s_bkb
  #(
    .ID(1),
    .NUM_STAGE(2),
    .din0_WIDTH(32),
    .din1_WIDTH(32),
    .dout_WIDTH(32)
  )
  hls_macc_mul_32s_bkb_U13
  (
    .clk(ap_clk),
    .reset(ap_rst),
    .din0(in4),
    .din1(add4_s_reg_384),
    .ce(1'b1),
    .dout(grp_fu_210_p2)
  );


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
    end 
  end


  always @(posedge ap_clk) begin
    if(1'b1 == ap_CS_fsm_state8) begin
      tmp_1_reg_i3 <= add14_fu_218_p2;
      tmp_1_reg_i1 <= tmp_1_wire_mux1_out;
      tmp_1_reg_i2 <= tmp_1_wire_mux2_out;
    end 
  end


  always @(posedge ap_clk) begin
    if(1'b1 == ap_CS_fsm_state9) begin
      tmp_2_reg_i3 <= add1_s_fu_177_p2;
      tmp_2_reg_i1 <= tmp_2_wire_mux1_out;
      tmp_2_reg_i2 <= tmp_2_wire_mux2_out;
    end 
  end

  assign add14_fu_218_p2_temp_0 = add14_fu_218_p2 >> 1'd3;
  assign add14_fu_218_p2_temp_1 = add14_fu_218_p2_temp_0 & 29'd536870911;

  always @(posedge ap_clk) begin
    if(1'b1 == ap_CS_fsm_state6) begin
      add13_reg_435 <= grp_fu_210_p2;
      add2_reg_414 <= grp_fu_198_p2;
      add6_reg_419 <= grp_fu_202_p2;
      add9_reg_425 <= add9_fu_214_p2;
      tmp5_reg_430 <= grp_fu_206_p2;
      tmp_6_reg_440 <= add14_fu_218_p2_temp_1;
    end 
  end


  always @(posedge ap_clk) begin
    if(1'b1 == ap_CS_fsm_state4) begin
      add1_s_reg_374 <= add1_s_fu_177_p2;
      add4_s_reg_384 <= add4_s_fu_189_p2;
      tmp1_reg_369 <= grp_fu_149_p2;
      tmp4_reg_379 <= tmp4_fu_185_p2;
    end 
  end


  always @(posedge ap_clk) begin
    if(1'b1 == ap_CS_fsm_state2) begin
      add3_reg_321 <= grp_fu_125_p2;
      add5_reg_326 <= grp_fu_131_p2;
    end 
  end


  always @(posedge ap_clk) begin
    if(1'b1 == ap_CS_fsm_state3) begin
      mult10_reg_348 <= grp_fu_143_p2;
      mult2_reg_343 <= grp_fu_137_p2;
      tmp6_reg_358 <= tmp6_fu_159_p2;
      tmp_reg_353 <= tmp_fu_154_p2;
    end 
  end


  always @(posedge ap_clk) begin
    if(1'b1 == ap_CS_fsm_state5) begin
      mult11_reg_394 <= grp_fu_167_p2;
      mult13_reg_399 <= grp_fu_172_p2;
      mult7_reg_389 <= grp_fu_163_p2;
      tmp3_reg_404 <= grp_fu_181_p2;
      tmp7_reg_409 <= grp_fu_194_p2;
    end 
  end


  always @(*) begin
    if((1'b1 == ap_CS_fsm_state8) | (1'b1 == ap_CS_fsm_state9)) begin
      trigger = 1'b1;
    end else begin
      trigger = 1'b0;
    end
  end


  always @(*) begin
    if(1'b1 == ap_CS_fsm_state7) begin
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
    if(1'b1 == ap_CS_fsm_state7) begin
      ap_ready = 1'b1;
    end else begin
      ap_ready = 1'b0;
    end
  end


  always @(*) begin
    if(1'b1 == ap_CS_fsm_state7) begin
      out1_ap_vld = 1'b1;
    end else begin
      out1_ap_vld = 1'b0;
    end
  end


  always @(*) begin
    if(1'b1 == ap_CS_fsm_state7) begin
      out2_ap_vld = 1'b1;
    end else begin
      out2_ap_vld = 1'b0;
    end
  end


  always @(*) begin
    if(1'b1 == ap_CS_fsm_state7) begin
      out3_ap_vld = 1'b1;
    end else begin
      out3_ap_vld = 1'b0;
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
        ap_NS_fsm = ap_ST_fsm_state3;
      end
      ap_ST_fsm_state3: begin
        ap_NS_fsm = ap_ST_fsm_state8;
      end
      ap_ST_fsm_state4: begin
        ap_NS_fsm = ap_ST_fsm_state5;
      end
      ap_ST_fsm_state5: begin
        ap_NS_fsm = ap_ST_fsm_state6;
      end
      ap_ST_fsm_state6: begin
        ap_NS_fsm = ap_ST_fsm_state7;
      end
      ap_ST_fsm_state7: begin
        ap_NS_fsm = ap_ST_fsm_state1;
      end
      ap_ST_fsm_state8: begin
        ap_NS_fsm = ap_ST_fsm_state9;
      end
      ap_ST_fsm_state9: begin
        ap_NS_fsm = ap_ST_fsm_state4;
      end
      default: begin
        ap_NS_fsm = 'bx;
      end
    endcase
  end

  assign tmp_1_wire_mux1_in = tmp_1_reg_i1;
  assign tmp_1_wire_mux2_in = tmp_1_reg_i2;
  assign tmp_1_wire_mux1_out = (trigger == 1'b1)? ~tmp_1_wire_mux1_in : tmp7_reg_409;
  assign tmp_1_wire_mux2_out = (trigger == 1'b1)? ~tmp_1_wire_mux2_in : mult13_reg_399;
  assign add14_fu_218_p2 = tmp_1_wire_mux1_out + tmp_1_wire_mux2_out;
  assign tmp_2_wire_mux1_in = tmp_2_reg_i1;
  assign tmp_2_wire_mux2_in = tmp_2_reg_i2;
  assign tmp_2_wire_mux1_out = (trigger == 1'b1)? ~tmp_2_wire_mux1_in : in2;
  assign tmp_2_wire_mux2_out = (trigger == 1'b1)? ~tmp_2_wire_mux2_in : mult2_reg_343;
  assign add1_s_fu_177_p2 = tmp_2_wire_mux1_out + tmp_2_wire_mux2_out;
  assign add4_s_fu_189_p0 = in8;
  assign add4_s_fu_189_p2 = $signed(add4_s_fu_189_p0) + $signed(mult10_reg_348);
  assign add9_fu_214_p2 = tmp3_reg_404 + mult7_reg_389;
  assign ap_CS_fsm_state1 = ap_CS_fsm[32'd0];
  assign ap_CS_fsm_state2 = ap_CS_fsm[32'd1];
  assign ap_CS_fsm_state3 = ap_CS_fsm[32'd2];
  assign ap_CS_fsm_state4 = ap_CS_fsm[32'd3];
  assign ap_CS_fsm_state5 = ap_CS_fsm[32'd4];
  assign ap_CS_fsm_state6 = ap_CS_fsm[32'd5];
  assign ap_CS_fsm_state7 = ap_CS_fsm[32'd6];
  assign ap_return = tmp_2_fu_256_p2 + tmp9_fu_262_p2;
  assign out1 = add6_reg_419;
  assign out2 = tmp_1_fu_242_p2;
  assign out3 = tmp_2_fu_256_p2;
  assign shf1_fu_232_p2 = add9_reg_425 << 32'd3;
  assign shf2_fu_248_p1 = $signed(tmp_6_reg_440);
  assign tmp2_fu_237_p2 = shf1_fu_232_p2 + tmp5_reg_430;
  assign tmp4_fu_185_p0 = in7;
  assign tmp4_fu_185_p2 = $signed(tmp4_fu_185_p0) + $signed(in2);
  assign tmp6_fu_159_p0 = in7;
  assign tmp6_fu_159_p2 = $signed(tmp6_fu_159_p0) + $signed(add5_reg_326);
  assign tmp8_fu_251_p2 = $signed(shf2_fu_248_p1) + $signed(add13_reg_435);
  assign tmp9_fu_262_p2 = tmp_1_fu_242_p2 + add6_reg_419;
  assign tmp_1_fu_242_p2 = add2_reg_414 + tmp2_fu_237_p2;
  assign tmp_2_fu_256_p2 = mult11_reg_394 + tmp8_fu_251_p2;
  assign tmp_fu_154_p2 = in2 + add3_reg_321;

endmodule

