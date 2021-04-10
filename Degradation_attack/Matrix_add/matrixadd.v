
module matrixmul
(
  ap_clk,
  ap_rst,
  ap_start,
  ap_done,
  ap_idle,
  ap_ready,
  a_address0,
  a_ce0,
  a_q0,
  b_address0,
  b_ce0,
  b_q0,
  res_address0,
  res_ce0,
  res_we0,
  res_d0
);

  parameter ap_ST_fsm_state1 = 13'd1;
  parameter ap_ST_fsm_state2 = 13'd2;
  parameter ap_ST_fsm_state3 = 13'd4;
  parameter ap_ST_fsm_state4 = 13'd8;
  parameter ap_ST_fsm_state5 = 13'd16;
  parameter ap_ST_fsm_state6 = 13'd32;
  parameter ap_ST_fsm_state7 = 13'd64;
  parameter ap_ST_fsm_state8 = 13'd128;
  parameter ap_ST_fsm_state9 = 13'd256;
  parameter ap_ST_fsm_state10 = 13'd512;
  parameter ap_ST_fsm_state11 = 13'd1024;
  parameter ap_ST_fsm_state12 = 13'd2048;
  parameter ap_ST_fsm_state13 = 13'd4096;
  input ap_clk;
  input ap_rst;
  input ap_start;
  output ap_done;
  output ap_idle;
  output ap_ready;
  output [3:0] a_address0;
  output a_ce0;
  input [31:0] a_q0;
  output [3:0] b_address0;
  output b_ce0;
  input [31:0] b_q0;
  output [3:0] res_address0;
  output res_ce0;
  output res_we0;
  output [31:0] res_d0;
  reg ap_done;
  reg ap_idle;
  reg ap_ready;
  reg a_ce0;
  reg b_ce0;
  reg res_ce0;
  reg res_we0;
  reg [12:0] ap_CS_fsm;
  wire ap_CS_fsm_state1;
  wire [4:0] tmp_2_fu_233_p2;
  reg [4:0] tmp_2_reg_469;
  wire ap_CS_fsm_state2;
  wire [1:0] i_4_fu_245_p2;
  reg [1:0] i_4_reg_477;
  wire ap_CS_fsm_state3;
  reg [3:0] a1_addr_reg_487;
  wire [1:0] j_4_fu_272_p2;
  reg [1:0] j_4_reg_495;
  wire [4:0] tmp_4_fu_294_p2;
  reg [4:0] tmp_4_reg_500;
  wire ap_CS_fsm_state5;
  wire [1:0] i_5_fu_306_p2;
  reg [1:0] i_5_reg_508;
  wire ap_CS_fsm_state6;
  reg [3:0] b1_addr_reg_518;
  wire [1:0] j_5_fu_333_p2;
  reg [1:0] j_5_reg_526;
  wire [4:0] tmp_7_fu_355_p2;
  reg [4:0] tmp_7_reg_531;
  wire ap_CS_fsm_state8;
  wire [1:0] i_6_fu_367_p2;
  reg [1:0] i_6_reg_539;
  wire ap_CS_fsm_state9;
  reg [3:0] res1_addr_reg_549;
  wire [1:0] j_6_fu_395_p2;
  reg [1:0] j_6_reg_562;
  wire [4:0] tmp_s_fu_424_p2;
  reg [4:0] tmp_s_reg_567;
  wire ap_CS_fsm_state11;
  wire [1:0] i_7_fu_436_p2;
  reg [1:0] i_7_reg_575;
  reg [3:0] res_addr_reg_580;
  wire ap_CS_fsm_state12;
  wire [1:0] j_7_fu_463_p2;
  reg [1:0] j_7_reg_593;
  reg [3:0] a1_address0;
  reg a1_ce0;
  reg a1_we0;
  wire [31:0] a1_q0;
  reg [3:0] b1_address0;
  reg b1_ce0;
  reg b1_we0;
  wire [31:0] b1_q0;
  reg [3:0] res1_address0;
  reg res1_ce0;
  reg res1_we0;
  wire [31:0] res1_d0;
  wire [31:0] res1_q0;
  reg [1:0] i_reg_129;
  wire [0:0] exitcond6_fu_266_p2;
  reg [1:0] j_reg_140;
  wire ap_CS_fsm_state4;
  wire [0:0] exitcond7_fu_239_p2;
  reg [1:0] i_1_reg_151;
  wire [0:0] exitcond4_fu_327_p2;
  reg [1:0] j_1_reg_162;
  wire ap_CS_fsm_state7;
  wire [0:0] exitcond5_fu_300_p2;
  reg [1:0] i_2_reg_173;
  wire [0:0] exitcond2_fu_389_p2;
  reg [1:0] j_2_reg_184;
  wire ap_CS_fsm_state10;
  wire [0:0] exitcond3_fu_361_p2;
  reg [1:0] i_3_reg_195;
  wire [0:0] exitcond_fu_457_p2;
  reg [1:0] j_3_reg_206;
  wire ap_CS_fsm_state13;
  wire [0:0] exitcond1_fu_430_p2;
  wire signed [31:0] tmp_5_cast_fu_260_p1;
  wire signed [31:0] tmp_8_cast_fu_321_p1;
  wire signed [31:0] tmp_11_cast_fu_382_p1;
  wire signed [31:0] tmp_12_cast_fu_451_p1;
  wire [3:0] tmp_1_fu_221_p3;
  wire [4:0] p_shl_cast_fu_229_p1;
  wire [4:0] i_cast8_cast_fu_217_p1;
  wire [4:0] j_cast7_cast_fu_251_p1;
  wire [4:0] tmp_5_fu_255_p2;
  wire [3:0] tmp_3_fu_282_p3;
  wire [4:0] p_shl1_cast_fu_290_p1;
  wire [4:0] i_1_cast6_cast_fu_278_p1;
  wire [4:0] j_1_cast5_cast_fu_312_p1;
  wire [4:0] tmp_8_fu_316_p2;
  wire [3:0] tmp_6_fu_343_p3;
  wire [4:0] p_shl2_cast_fu_351_p1;
  wire [4:0] i_2_cast4_cast_fu_339_p1;
  wire [4:0] j_2_cast3_cast_fu_373_p1;
  wire [4:0] tmp_10_fu_377_p2;
  wire [3:0] tmp_9_fu_412_p3;
  wire [4:0] p_shl3_cast_fu_420_p1;
  wire [4:0] i_3_cast2_cast_fu_408_p1;
  wire [4:0] j_3_cast1_cast_fu_442_p1;
  wire [4:0] tmp_11_fu_446_p2;
  reg [12:0] ap_NS_fsm;

  initial begin
    #0 ap_CS_fsm = 13'd1;
  end


  matrixmul_a1
  #(
    .DataWidth(32),
    .AddressRange(9),
    .AddressWidth(4)
  )
  a1_U
  (
    .clk(ap_clk),
    .reset(ap_rst),
    .address0(a1_address0),
    .ce0(a1_ce0),
    .we0(a1_we0),
    .d0(a_q0),
    .q0(a1_q0)
  );


  matrixmul_a1
  #(
    .DataWidth(32),
    .AddressRange(9),
    .AddressWidth(4)
  )
  b1_U
  (
    .clk(ap_clk),
    .reset(ap_rst),
    .address0(b1_address0),
    .ce0(b1_ce0),
    .we0(b1_we0),
    .d0(b_q0),
    .q0(b1_q0)
  );


  matrixmul_a1
  #(
    .DataWidth(32),
    .AddressRange(9),
    .AddressWidth(4)
  )
  res1_U
  (
    .clk(ap_clk),
    .reset(ap_rst),
    .address0(res1_address0),
    .ce0(res1_ce0),
    .we0(res1_we0),
    .d0(res1_d0),
    .q0(res1_q0)
  );


  always @(posedge ap_clk) begin
    if(ap_rst == 1'b1) begin
      ap_CS_fsm <= ap_ST_fsm_state1;
    end else begin
      ap_CS_fsm <= ap_NS_fsm;
    end
  end


  always @(posedge ap_clk) begin
    if((1'b1 == ap_CS_fsm_state2) & (1'd1 == exitcond7_fu_239_p2)) begin
      i_1_reg_151 <= 2'd0;
    end else if((1'b1 == ap_CS_fsm_state6) & (1'd1 == exitcond4_fu_327_p2)) begin
      i_1_reg_151 <= i_5_reg_508;
    end 
  end


  always @(posedge ap_clk) begin
    if((1'b1 == ap_CS_fsm_state5) & (1'd1 == exitcond5_fu_300_p2)) begin
      i_2_reg_173 <= 2'd0;
    end else if((1'b1 == ap_CS_fsm_state9) & (1'd1 == exitcond2_fu_389_p2)) begin
      i_2_reg_173 <= i_6_reg_539;
    end 
  end


  always @(posedge ap_clk) begin
    if((1'b1 == ap_CS_fsm_state8) & (1'd1 == exitcond3_fu_361_p2)) begin
      i_3_reg_195 <= 2'd0;
    end else if((1'b1 == ap_CS_fsm_state12) & (1'd1 == exitcond_fu_457_p2)) begin
      i_3_reg_195 <= i_7_reg_575;
    end 
  end


  always @(posedge ap_clk) begin
    if((1'b1 == ap_CS_fsm_state3) & (exitcond6_fu_266_p2 == 1'd1)) begin
      i_reg_129 <= i_4_reg_477;
    end else if((1'b1 == ap_CS_fsm_state1) & (ap_start == 1'b1)) begin
      i_reg_129 <= 2'd0;
    end 
  end


  always @(posedge ap_clk) begin
    if((1'b1 == ap_CS_fsm_state5) & (1'd0 == exitcond5_fu_300_p2)) begin
      j_1_reg_162 <= 2'd0;
    end else if(1'b1 == ap_CS_fsm_state7) begin
      j_1_reg_162 <= j_5_reg_526;
    end 
  end


  always @(posedge ap_clk) begin
    if((1'b1 == ap_CS_fsm_state8) & (1'd0 == exitcond3_fu_361_p2)) begin
      j_2_reg_184 <= 2'd0;
    end else if(1'b1 == ap_CS_fsm_state10) begin
      j_2_reg_184 <= j_6_reg_562;
    end 
  end


  always @(posedge ap_clk) begin
    if((1'b1 == ap_CS_fsm_state11) & (1'd0 == exitcond1_fu_430_p2)) begin
      j_3_reg_206 <= 2'd0;
    end else if(1'b1 == ap_CS_fsm_state13) begin
      j_3_reg_206 <= j_7_reg_593;
    end 
  end


  always @(posedge ap_clk) begin
    if((1'b1 == ap_CS_fsm_state2) & (exitcond7_fu_239_p2 == 1'd0)) begin
      j_reg_140 <= 2'd0;
    end else if(1'b1 == ap_CS_fsm_state4) begin
      j_reg_140 <= j_4_reg_495;
    end 
  end


  always @(posedge ap_clk) begin
    if(1'b1 == ap_CS_fsm_state3) begin
      a1_addr_reg_487 <= tmp_5_cast_fu_260_p1;
      j_4_reg_495 <= j_4_fu_272_p2;
    end 
  end


  always @(posedge ap_clk) begin
    if(1'b1 == ap_CS_fsm_state6) begin
      b1_addr_reg_518 <= tmp_8_cast_fu_321_p1;
      j_5_reg_526 <= j_5_fu_333_p2;
    end 
  end


  always @(posedge ap_clk) begin
    if(1'b1 == ap_CS_fsm_state2) begin
      i_4_reg_477 <= i_4_fu_245_p2;
      tmp_2_reg_469 <= tmp_2_fu_233_p2;
    end 
  end


  always @(posedge ap_clk) begin
    if(1'b1 == ap_CS_fsm_state5) begin
      i_5_reg_508 <= i_5_fu_306_p2;
      tmp_4_reg_500 <= tmp_4_fu_294_p2;
    end 
  end


  always @(posedge ap_clk) begin
    if(1'b1 == ap_CS_fsm_state8) begin
      i_6_reg_539 <= i_6_fu_367_p2;
      tmp_7_reg_531 <= tmp_7_fu_355_p2;
    end 
  end


  always @(posedge ap_clk) begin
    if(1'b1 == ap_CS_fsm_state11) begin
      i_7_reg_575 <= i_7_fu_436_p2;
      tmp_s_reg_567 <= tmp_s_fu_424_p2;
    end 
  end


  always @(posedge ap_clk) begin
    if(1'b1 == ap_CS_fsm_state9) begin
      j_6_reg_562 <= j_6_fu_395_p2;
      res1_addr_reg_549 <= tmp_11_cast_fu_382_p1;
    end 
  end


  always @(posedge ap_clk) begin
    if(1'b1 == ap_CS_fsm_state12) begin
      j_7_reg_593 <= j_7_fu_463_p2;
      res_addr_reg_580 <= tmp_12_cast_fu_451_p1;
    end 
  end


  always @(*) begin
    if(1'b1 == ap_CS_fsm_state9) begin
      a1_address0 = tmp_11_cast_fu_382_p1;
    end else if(1'b1 == ap_CS_fsm_state4) begin
      a1_address0 = a1_addr_reg_487;
    end else begin
      a1_address0 = 'bx;
    end
  end


  always @(*) begin
    if((1'b1 == ap_CS_fsm_state9) | (1'b1 == ap_CS_fsm_state4)) begin
      a1_ce0 = 1'b1;
    end else begin
      a1_ce0 = 1'b0;
    end
  end


  always @(*) begin
    if(1'b1 == ap_CS_fsm_state4) begin
      a1_we0 = 1'b1;
    end else begin
      a1_we0 = 1'b0;
    end
  end


  always @(*) begin
    if(1'b1 == ap_CS_fsm_state3) begin
      a_ce0 = 1'b1;
    end else begin
      a_ce0 = 1'b0;
    end
  end


  always @(*) begin
    if((1'b1 == ap_CS_fsm_state11) & (1'd1 == exitcond1_fu_430_p2)) begin
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
    if((1'b1 == ap_CS_fsm_state11) & (1'd1 == exitcond1_fu_430_p2)) begin
      ap_ready = 1'b1;
    end else begin
      ap_ready = 1'b0;
    end
  end


  always @(*) begin
    if(1'b1 == ap_CS_fsm_state9) begin
      b1_address0 = tmp_11_cast_fu_382_p1;
    end else if(1'b1 == ap_CS_fsm_state7) begin
      b1_address0 = b1_addr_reg_518;
    end else begin
      b1_address0 = 'bx;
    end
  end


  always @(*) begin
    if((1'b1 == ap_CS_fsm_state9) | (1'b1 == ap_CS_fsm_state7)) begin
      b1_ce0 = 1'b1;
    end else begin
      b1_ce0 = 1'b0;
    end
  end


  always @(*) begin
    if(1'b1 == ap_CS_fsm_state7) begin
      b1_we0 = 1'b1;
    end else begin
      b1_we0 = 1'b0;
    end
  end


  always @(*) begin
    if(1'b1 == ap_CS_fsm_state6) begin
      b_ce0 = 1'b1;
    end else begin
      b_ce0 = 1'b0;
    end
  end


  always @(*) begin
    if(1'b1 == ap_CS_fsm_state12) begin
      res1_address0 = tmp_12_cast_fu_451_p1;
    end else if(1'b1 == ap_CS_fsm_state10) begin
      res1_address0 = res1_addr_reg_549;
    end else begin
      res1_address0 = 'bx;
    end
  end


  always @(*) begin
    if((1'b1 == ap_CS_fsm_state12) | (1'b1 == ap_CS_fsm_state10)) begin
      res1_ce0 = 1'b1;
    end else begin
      res1_ce0 = 1'b0;
    end
  end


  always @(*) begin
    if(1'b1 == ap_CS_fsm_state10) begin
      res1_we0 = 1'b1;
    end else begin
      res1_we0 = 1'b0;
    end
  end


  always @(*) begin
    if(1'b1 == ap_CS_fsm_state13) begin
      res_ce0 = 1'b1;
    end else begin
      res_ce0 = 1'b0;
    end
  end


  always @(*) begin
    if(1'b1 == ap_CS_fsm_state13) begin
      res_we0 = 1'b1;
    end else begin
      res_we0 = 1'b0;
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
        if((1'b1 == ap_CS_fsm_state2) & (1'd1 == exitcond7_fu_239_p2)) begin
          ap_NS_fsm = ap_ST_fsm_state5;
        end else begin
          ap_NS_fsm = ap_ST_fsm_state3;
        end
      end
      ap_ST_fsm_state3: begin
        if((1'b1 == ap_CS_fsm_state3) & (exitcond6_fu_266_p2 == 1'd1)) begin
          ap_NS_fsm = ap_ST_fsm_state2;
        end else begin
          ap_NS_fsm = ap_ST_fsm_state4;
        end
      end
      ap_ST_fsm_state4: begin
        ap_NS_fsm = ap_ST_fsm_state3;
      end
      ap_ST_fsm_state5: begin
        if((1'b1 == ap_CS_fsm_state5) & (1'd1 == exitcond5_fu_300_p2)) begin
          ap_NS_fsm = ap_ST_fsm_state8;
        end else begin
          ap_NS_fsm = ap_ST_fsm_state6;
        end
      end
      ap_ST_fsm_state6: begin
        if((1'b1 == ap_CS_fsm_state6) & (1'd1 == exitcond4_fu_327_p2)) begin
          ap_NS_fsm = ap_ST_fsm_state5;
        end else begin
          ap_NS_fsm = ap_ST_fsm_state7;
        end
      end
      ap_ST_fsm_state7: begin
        ap_NS_fsm = ap_ST_fsm_state6;
      end
      ap_ST_fsm_state8: begin
        if((1'b1 == ap_CS_fsm_state8) & (1'd1 == exitcond3_fu_361_p2)) begin
          ap_NS_fsm = ap_ST_fsm_state11;
        end else begin
          ap_NS_fsm = ap_ST_fsm_state9;
        end
      end
      ap_ST_fsm_state9: begin
        if((1'b1 == ap_CS_fsm_state9) & (1'd1 == exitcond2_fu_389_p2)) begin
          ap_NS_fsm = ap_ST_fsm_state8;
        end else begin
          ap_NS_fsm = ap_ST_fsm_state10;
        end
      end
      ap_ST_fsm_state10: begin
        ap_NS_fsm = ap_ST_fsm_state9;
      end
      ap_ST_fsm_state11: begin
        if((1'b1 == ap_CS_fsm_state11) & (1'd1 == exitcond1_fu_430_p2)) begin
          ap_NS_fsm = ap_ST_fsm_state1;
        end else begin
          ap_NS_fsm = ap_ST_fsm_state12;
        end
      end
      ap_ST_fsm_state12: begin
        if((1'b1 == ap_CS_fsm_state12) & (1'd1 == exitcond_fu_457_p2)) begin
          ap_NS_fsm = ap_ST_fsm_state11;
        end else begin
          ap_NS_fsm = ap_ST_fsm_state13;
        end
      end
      ap_ST_fsm_state13: begin
        ap_NS_fsm = ap_ST_fsm_state12;
      end
      default: begin
        ap_NS_fsm = 'bx;
      end
    endcase
  end

  assign a_address0 = tmp_5_cast_fu_260_p1;
  assign ap_CS_fsm_state1 = ap_CS_fsm[32'd0];
  assign ap_CS_fsm_state10 = ap_CS_fsm[32'd9];
  assign ap_CS_fsm_state11 = ap_CS_fsm[32'd10];
  assign ap_CS_fsm_state12 = ap_CS_fsm[32'd11];
  assign ap_CS_fsm_state13 = ap_CS_fsm[32'd12];
  assign ap_CS_fsm_state2 = ap_CS_fsm[32'd1];
  assign ap_CS_fsm_state3 = ap_CS_fsm[32'd2];
  assign ap_CS_fsm_state4 = ap_CS_fsm[32'd3];
  assign ap_CS_fsm_state5 = ap_CS_fsm[32'd4];
  assign ap_CS_fsm_state6 = ap_CS_fsm[32'd5];
  assign ap_CS_fsm_state7 = ap_CS_fsm[32'd6];
  assign ap_CS_fsm_state8 = ap_CS_fsm[32'd7];
  assign ap_CS_fsm_state9 = ap_CS_fsm[32'd8];
  assign b_address0 = tmp_8_cast_fu_321_p1;
  assign exitcond1_fu_430_p2 = (i_3_reg_195 == 2'd3)? 1'b1 : 1'b0;
  assign exitcond2_fu_389_p2 = (j_2_reg_184 == 2'd3)? 1'b1 : 1'b0;
  assign exitcond3_fu_361_p2 = (i_2_reg_173 == 2'd3)? 1'b1 : 1'b0;
  assign exitcond4_fu_327_p2 = (j_1_reg_162 == 2'd3)? 1'b1 : 1'b0;
  assign exitcond5_fu_300_p2 = (i_1_reg_151 == 2'd3)? 1'b1 : 1'b0;
  assign exitcond6_fu_266_p2 = (j_reg_140 == 2'd3)? 1'b1 : 1'b0;
  assign exitcond7_fu_239_p2 = (i_reg_129 == 2'd3)? 1'b1 : 1'b0;
  assign exitcond_fu_457_p2 = (j_3_reg_206 == 2'd3)? 1'b1 : 1'b0;
  assign i_1_cast6_cast_fu_278_p1 = i_1_reg_151;
  assign i_2_cast4_cast_fu_339_p1 = i_2_reg_173;
  assign i_3_cast2_cast_fu_408_p1 = i_3_reg_195;
  assign i_4_fu_245_p2 = i_reg_129 + 2'd1;
  assign i_5_fu_306_p2 = i_1_reg_151 + 2'd1;
  assign i_6_fu_367_p2 = i_2_reg_173 + 2'd1;
  assign i_7_fu_436_p2 = i_3_reg_195 + 2'd1;
  assign i_cast8_cast_fu_217_p1 = i_reg_129;
  assign j_1_cast5_cast_fu_312_p1 = j_1_reg_162;
  assign j_2_cast3_cast_fu_373_p1 = j_2_reg_184;
  assign j_3_cast1_cast_fu_442_p1 = j_3_reg_206;
  assign j_4_fu_272_p2 = j_reg_140 + 2'd1;
  assign j_5_fu_333_p2 = j_1_reg_162 + 2'd1;
  assign j_6_fu_395_p2 = j_2_reg_184 + 2'd1;
  assign j_7_fu_463_p2 = j_3_reg_206 + 2'd1;
  assign j_cast7_cast_fu_251_p1 = j_reg_140;
  assign p_shl1_cast_fu_290_p1 = tmp_3_fu_282_p3;
  assign p_shl2_cast_fu_351_p1 = tmp_6_fu_343_p3;
  assign p_shl3_cast_fu_420_p1 = tmp_9_fu_412_p3;
  assign p_shl_cast_fu_229_p1 = tmp_1_fu_221_p3;
  assign res1_d0 = b1_q0 + a1_q0;
  assign res_address0 = res_addr_reg_580;
  assign res_d0 = res1_q0;
  assign tmp_10_fu_377_p2 = tmp_7_reg_531 + j_2_cast3_cast_fu_373_p1;
  assign tmp_11_cast_fu_382_p1 = $signed(tmp_10_fu_377_p2);
  assign tmp_11_fu_446_p2 = tmp_s_reg_567 + j_3_cast1_cast_fu_442_p1;
  assign tmp_12_cast_fu_451_p1 = $signed(tmp_11_fu_446_p2);
  assign i_reg_129_temp_0 = i_reg_129 << 1'd2;
  assign tmp_1_fu_221_p3 = i_reg_129_temp_0;
  assign tmp_2_fu_233_p2 = p_shl_cast_fu_229_p1 - i_cast8_cast_fu_217_p1;
  assign i_1_reg_151_temp_1 = i_1_reg_151 << 1'd2;
  assign tmp_3_fu_282_p3 = i_1_reg_151_temp_1;
  assign tmp_4_fu_294_p2 = p_shl1_cast_fu_290_p1 - i_1_cast6_cast_fu_278_p1;
  assign tmp_5_cast_fu_260_p1 = $signed(tmp_5_fu_255_p2);
  assign tmp_5_fu_255_p2 = tmp_2_reg_469 + j_cast7_cast_fu_251_p1;
  assign i_2_reg_173_temp_2 = i_2_reg_173 << 1'd2;
  assign tmp_6_fu_343_p3 = i_2_reg_173_temp_2;
  assign tmp_7_fu_355_p2 = p_shl2_cast_fu_351_p1 - i_2_cast4_cast_fu_339_p1;
  assign tmp_8_cast_fu_321_p1 = $signed(tmp_8_fu_316_p2);
  assign tmp_8_fu_316_p2 = tmp_4_reg_500 + j_1_cast5_cast_fu_312_p1;
  assign i_3_reg_195_temp_3 = i_3_reg_195 << 1'd2;
  assign tmp_9_fu_412_p3 = i_3_reg_195_temp_3;
  assign tmp_s_fu_424_p2 = p_shl3_cast_fu_420_p1 - i_3_cast2_cast_fu_408_p1;

endmodule

