// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2017.2
// Copyright (C) 1986-2017 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

`timescale 1 ns / 1 ps 

(* CORE_GENERATION_INFO="hls_macc,hls_ip_2017_2,{HLS_INPUT_TYPE=c,HLS_INPUT_FLOAT=0,HLS_INPUT_FIXED=0,HLS_INPUT_PART=xc7z020clg484-1,HLS_INPUT_CLOCK=10.000000,HLS_INPUT_ARCH=others,HLS_SYN_CLOCK=8.742000,HLS_SYN_LAT=6,HLS_SYN_TPT=none,HLS_SYN_MEM=0,HLS_SYN_DSP=56,HLS_SYN_FF=3693,HLS_SYN_LUT=1196}" *)

module hls_macc (
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
        ap_return,
        trigger_in
);

parameter    ap_ST_fsm_state1 = 7'd1;
parameter    ap_ST_fsm_state2 = 7'd2;
parameter    ap_ST_fsm_state3 = 7'd4;
parameter    ap_ST_fsm_state4 = 7'd8;
parameter    ap_ST_fsm_state5 = 7'd16;
parameter    ap_ST_fsm_state6 = 7'd32;
parameter    ap_ST_fsm_state7 = 7'd64;

input   ap_clk;
input   ap_rst;
input   ap_start;
output   ap_done;
output   ap_idle;
output   ap_ready;
input  [31:0] in1;
input  [31:0] in2;
input  [31:0] in3;
input  [31:0] in4;
input  [31:0] in5;
input  [31:0] in6;
input  [31:0] in7;
input  [31:0] in8;
input  [31:0] in9;
input  [31:0] in10;
input [0:0] trigger_in;
output  [31:0] out1;
output   out1_ap_vld;
output  [31:0] out2;
output   out2_ap_vld;
output  [31:0] out3;
output   out3_ap_vld;
output  [31:0] ap_return;

reg ap_done;
reg ap_idle;
reg ap_ready;
reg out1_ap_vld;
reg out2_ap_vld;
reg out3_ap_vld;

(* fsm_encoding = "none" *) reg   [6:0] ap_CS_fsm;
wire    ap_CS_fsm_state1;
wire    ap_CS_fsm_state2;
wire   [31:0] grp_fu_125_p2;
reg   [31:0] add3_reg_321;
wire   [31:0] grp_fu_131_p2;
reg   [31:0] add5_reg_326;
wire    ap_CS_fsm_state3;
wire   [31:0] grp_fu_137_p2;
reg   [31:0] mult2_reg_343;
wire   [31:0] grp_fu_143_p2;
reg   [31:0] mult10_reg_348;
wire  signed [31:0] tmp_fu_154_p2;
reg  signed [31:0] tmp_reg_353;
wire  signed [31:0] tmp6_fu_159_p2;
reg  signed [31:0] tmp6_reg_358;
wire    ap_CS_fsm_state4;
wire  signed [31:0] grp_fu_149_p2;
reg  signed [31:0] tmp1_reg_369;
wire  signed [31:0] add1_s_fu_177_p2;
reg  signed [31:0] add1_s_reg_374;
wire  signed [31:0] tmp4_fu_185_p2;
reg  signed [31:0] tmp4_reg_379;
wire  signed [31:0] add4_s_fu_189_p2;
reg  signed [31:0] add4_s_reg_384;
wire   [31:0] grp_fu_163_p2;
reg   [31:0] mult7_reg_389;
wire    ap_CS_fsm_state5;
wire   [31:0] grp_fu_167_p2;
reg   [31:0] mult11_reg_394;
wire   [31:0] grp_fu_172_p2;
reg   [31:0] mult13_reg_399;
wire   [31:0] grp_fu_181_p2;
reg   [31:0] tmp3_reg_404;
wire   [31:0] grp_fu_194_p2;
reg   [31:0] tmp7_reg_409;
wire   [31:0] grp_fu_198_p2;
reg   [31:0] add2_reg_414;
wire    ap_CS_fsm_state6;
wire   [31:0] grp_fu_202_p2;
reg   [31:0] add6_reg_419;
wire   [31:0] add9_fu_214_p2;
reg   [31:0] add9_reg_425;
wire   [31:0] grp_fu_206_p2;
reg   [31:0] tmp5_reg_430;
wire   [31:0] grp_fu_210_p2;
reg   [31:0] add13_reg_435;
reg   [28:0] tmp_6_reg_440;
wire    ap_CS_fsm_state7;
wire   [31:0] tmp_1_fu_242_p2;
wire   [31:0] tmp_2_fu_256_p2;
wire  signed [31:0] tmp6_fu_159_p0;
wire  signed [31:0] tmp4_fu_185_p0;
wire  signed [31:0] add4_s_fu_189_p0;
wire   [31:0] add14_fu_218_p2;
wire   [31:0] shf1_fu_232_p2;
wire   [31:0] tmp2_fu_237_p2;
wire  signed [31:0] shf2_fu_248_p1;
wire   [31:0] tmp8_fu_251_p2;
wire   [31:0] tmp9_fu_262_p2;
reg   [6:0] ap_NS_fsm;
reg [31:0] reg1;
wire [31:0] reg_out1;
wire [31:0] mux_out1;
wire [31:0] mux_out_neg1;
reg [31:0] reg2;
wire [31:0] reg_out2;
wire [31:0] mux_out2;
wire [31:0] mux_out_neg2;
wire [0:0] temp1;
wire [0:0] temp2;
wire [0:0] temp12;

// power-on initialization
initial begin
#0 ap_CS_fsm = 7'd1;
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_CS_fsm <= ap_ST_fsm_state1;
    end else begin
        ap_CS_fsm <= ap_NS_fsm;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state6)) begin
        add13_reg_435 <= grp_fu_210_p2;
        add2_reg_414 <= grp_fu_198_p2;
        add6_reg_419 <= grp_fu_202_p2;
        add9_reg_425 <= add9_fu_214_p2;
        tmp5_reg_430 <= grp_fu_206_p2;
        tmp_6_reg_440 <= {{add14_fu_218_p2[31:3]}};
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state4)) begin
        add1_s_reg_374 <= add1_s_fu_177_p2;
        add4_s_reg_384 <= add4_s_fu_189_p2;
        tmp1_reg_369 <= grp_fu_149_p2;
        tmp4_reg_379 <= tmp4_fu_185_p2;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state2)) begin
        add3_reg_321 <= grp_fu_125_p2;
        add5_reg_326 <= grp_fu_131_p2;
    end else if ((1'b1 == ap_CS_fsm_state7) & (trigger_in == 1'b1)) begin
    	reg1 <= mux_out_neg1;
    	reg2 <= mux_out_neg2;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state3)) begin
        mult10_reg_348 <= grp_fu_143_p2;
        mult2_reg_343 <= grp_fu_137_p2;
        tmp6_reg_358 <= tmp6_fu_159_p2;
        tmp_reg_353 <= tmp_fu_154_p2;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state5)) begin
        mult11_reg_394 <= grp_fu_167_p2;
        mult13_reg_399 <= grp_fu_172_p2;
        mult7_reg_389 <= grp_fu_163_p2;
        tmp3_reg_404 <= grp_fu_181_p2;
        tmp7_reg_409 <= grp_fu_194_p2;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state7)) begin
        ap_done = 1'b1;
    end else begin
        ap_done = 1'b0;
    end
end

always @ (*) begin
    if (((1'b0 == ap_start) & (1'b1 == ap_CS_fsm_state1))) begin
        ap_idle = 1'b1;
    end else begin
        ap_idle = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state7)) begin
        ap_ready = 1'b1;
    end else begin
        ap_ready = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state7)) begin
        out1_ap_vld = 1'b1;
    end else begin
        out1_ap_vld = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state7)) begin
        out2_ap_vld = 1'b1;
    end else begin
        out2_ap_vld = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state7)) begin
        out3_ap_vld = 1'b1;
    end else begin
        out3_ap_vld = 1'b0;
    end
end

always @ (*) begin
    case (ap_CS_fsm)
        ap_ST_fsm_state1 : begin
            if (((1'b1 == ap_CS_fsm_state1) & (ap_start == 1'b1))) begin
                ap_NS_fsm = ap_ST_fsm_state2;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state1;
            end
        end
        ap_ST_fsm_state2 : begin
            ap_NS_fsm = ap_ST_fsm_state3;
        end
        ap_ST_fsm_state3 : begin
            ap_NS_fsm = ap_ST_fsm_state4;
        end
        ap_ST_fsm_state4 : begin
            ap_NS_fsm = ap_ST_fsm_state5;
        end
        ap_ST_fsm_state5 : begin
            ap_NS_fsm = ap_ST_fsm_state6;
        end
        ap_ST_fsm_state6 : begin
            ap_NS_fsm = ap_ST_fsm_state7;
        end
        ap_ST_fsm_state7 : begin
            ap_NS_fsm = ap_ST_fsm_state1;
        end
        default : begin
            ap_NS_fsm = 'bx;
        end
    endcase
end

assign reg_out1 = reg1;

assign reg_out2 = reg2;

assign temp1 = (trigger_in == 1'b1)? 1'b1 : 1'b0;
assign temp2 = (1'b1 == ap_CS_fsm_state7)? 1'b1 : 1'b0;
assign temp12 = temp1 & temp2;

assign mux_out1 = (temp12 == 1'b1) ? reg_out1 : in7; //state 7

assign mux_out2 = (temp12 == 1'b1) ? reg_out2 : in10; //state 7

assign mux_out_neg1 = ~mux_out1;

assign mux_out_neg2 = ~mux_out2;

assign grp_fu_125_p2 = mux_out1 * in4;

assign grp_fu_131_p2 = mux_out2 * in10;

assign grp_fu_137_p2 = in3 * in1;

assign grp_fu_143_p2 = in9 * in6;

assign grp_fu_149_p2 = in5 * in4;

assign grp_fu_163_p2 = in6 * in3;

assign grp_fu_167_p2 = in8 * in6;

assign grp_fu_172_p2 = in8 * in7;

assign grp_fu_181_p2 = in5 * tmp_reg_353;

assign grp_fu_194_p2 = in9 * tmp6_reg_358;

assign grp_fu_198_p2 = in4 * tmp1_reg_369;

assign grp_fu_202_p2 = in1 * add1_s_reg_374;

assign grp_fu_206_p2 = in3 * tmp4_reg_379;

assign grp_fu_210_p2 = in4 * add4_s_reg_384;

assign add14_fu_218_p2 = (tmp7_reg_409 + mult13_reg_399);

assign add1_s_fu_177_p2 = (in2 + mult2_reg_343);

assign add4_s_fu_189_p0 = in8;

assign add4_s_fu_189_p2 = ($signed(add4_s_fu_189_p0) + $signed(mult10_reg_348));

assign add9_fu_214_p2 = (tmp3_reg_404 + mult7_reg_389);

assign ap_CS_fsm_state1 = ap_CS_fsm[32'd0];

assign ap_CS_fsm_state2 = ap_CS_fsm[32'd1];

assign ap_CS_fsm_state3 = ap_CS_fsm[32'd2];

assign ap_CS_fsm_state4 = ap_CS_fsm[32'd3];

assign ap_CS_fsm_state5 = ap_CS_fsm[32'd4];

assign ap_CS_fsm_state6 = ap_CS_fsm[32'd5];

assign ap_CS_fsm_state7 = ap_CS_fsm[32'd6];

assign ap_return = (tmp_2_fu_256_p2 + tmp9_fu_262_p2);

assign out1 = add6_reg_419;

assign out2 = tmp_1_fu_242_p2;

assign out3 = tmp_2_fu_256_p2;

assign shf1_fu_232_p2 = add9_reg_425 << 32'd3;

assign shf2_fu_248_p1 = $signed(tmp_6_reg_440);

assign tmp2_fu_237_p2 = (shf1_fu_232_p2 + tmp5_reg_430);

assign tmp4_fu_185_p0 = in7;

assign tmp4_fu_185_p2 = ($signed(tmp4_fu_185_p0) + $signed(in2));

assign tmp6_fu_159_p0 = in7;

assign tmp6_fu_159_p2 = ($signed(tmp6_fu_159_p0) + $signed(add5_reg_326));

assign tmp8_fu_251_p2 = ($signed(shf2_fu_248_p1) + $signed(add13_reg_435));

assign tmp9_fu_262_p2 = (tmp_1_fu_242_p2 + add6_reg_419);

assign tmp_1_fu_242_p2 = (add2_reg_414 + tmp2_fu_237_p2);

assign tmp_2_fu_256_p2 = (mult11_reg_394 + tmp8_fu_251_p2);

assign tmp_fu_154_p2 = (in2 + add3_reg_321);

endmodule //hls_macc
