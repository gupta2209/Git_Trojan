// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2017.2
// Copyright (C) 1986-2017 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

`timescale 1 ns / 1 ps 

(* CORE_GENERATION_INFO="findmin,hls_ip_2017_2,{HLS_INPUT_TYPE=c,HLS_INPUT_FLOAT=0,HLS_INPUT_FIXED=0,HLS_INPUT_PART=xc7z020clg484-1,HLS_INPUT_CLOCK=10.000000,HLS_INPUT_ARCH=others,HLS_SYN_CLOCK=8.598000,HLS_SYN_LAT=1,HLS_SYN_TPT=none,HLS_SYN_MEM=0,HLS_SYN_DSP=0,HLS_SYN_FF=132,HLS_SYN_LUT=351}" *)

module findmin (
        ap_clk,
        ap_rst,
        ap_start,
        ap_done,
        ap_idle,
        ap_ready,
        a1,
        a2,
        a3,
        a4,
        a5,
        a6,
        a7,
        a8,
        ap_return,
        trigger
);

parameter    ap_ST_fsm_state1 = 2'd1;
parameter    ap_ST_fsm_state2 = 2'd2;
parameter    ap_ST_fsm_state3 = 2'd4;

input   ap_clk;
input   ap_rst;
input   ap_start;
output   ap_done;
output   ap_idle;
output   ap_ready;
input  [31:0] a1;
input  [31:0] a2;
input  [31:0] a3;
input  [31:0] a4;
input  [31:0] a5;
input  [31:0] a6;
input  [31:0] a7;
input  [31:0] a8;
input [0:0] trigger;
output  [31:0] ap_return;

reg ap_done;
reg ap_idle;
reg ap_ready;

(* fsm_encoding = "none" *) reg   [1:0] ap_CS_fsm;
wire    ap_CS_fsm_state1;
wire   [31:0] a14_fu_80_p3;
reg   [31:0] a14_reg_166;
wire   [31:0] a14_1_fu_94_p3;
reg   [31:0] a14_1_reg_171;
wire   [31:0] a58_1_fu_108_p3;
reg   [31:0] a58_1_reg_176;
wire   [31:0] a58_2_fu_122_p3;
reg   [31:0] a58_2_reg_181;
wire   [0:0] tmp_4_fu_130_p2;
reg   [0:0] tmp_4_reg_186;
wire   [0:0] tmp_5_fu_136_p2;
reg   [0:0] tmp_5_reg_191;
wire   [0:0] tmp_fu_74_p2;
wire   [0:0] tmp_1_fu_88_p2;
wire   [0:0] tmp_2_fu_102_p2;
wire   [0:0] tmp_3_fu_116_p2;
wire    ap_CS_fsm_state2;
wire   [31:0] a18_2_fu_142_p3;
wire   [31:0] a58_fu_147_p3;
wire   [0:0] tmp_6_fu_152_p2;
reg   [1:0] ap_NS_fsm;

// power-on initialization
initial begin
#0 ap_CS_fsm = 3'd1;
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_CS_fsm <= ap_ST_fsm_state1;
    end else begin
        ap_CS_fsm <= ap_NS_fsm;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_state1) & (ap_start == 1'b1))) begin
        a14_1_reg_171 <= a14_1_fu_94_p3;
        a14_reg_166 <= a14_fu_80_p3;
        a58_1_reg_176 <= a58_1_fu_108_p3;
        a58_2_reg_181 <= a58_2_fu_122_p3;
        tmp_4_reg_186 <= tmp_4_fu_130_p2;
        tmp_5_reg_191 <= tmp_5_fu_136_p2;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state2)) begin
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
    if ((1'b1 == ap_CS_fsm_state2)) begin
        ap_ready = 1'b1;
    end else begin
        ap_ready = 1'b0;
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
            if (((1'b1 == ap_CS_fsm_state2) & (trigger == 1'b1))) begin
          		ap_NS_fsm = ap_ST_fsm_state3;
        	end else begin
          		ap_NS_fsm = ap_ST_fsm_state1;
        	end
        end
        ap_ST_fsm_state3: begin
        	ap_NS_fsm = ap_ST_fsm_state1;
      	end
        default : begin
            ap_NS_fsm = 'bx;
        end
    endcase
end

assign a14_1_fu_94_p3 = ((tmp_1_fu_88_p2[0:0] === 1'b1) ? a3 : a4);

assign a14_fu_80_p3 = ((tmp_fu_74_p2[0:0] === 1'b1) ? a1 : a2);

assign a18_2_fu_142_p3 = ((tmp_4_reg_186[0:0] === 1'b1) ? a14_reg_166 : a14_1_reg_171);

assign a58_1_fu_108_p3 = ((tmp_2_fu_102_p2[0:0] === 1'b1) ? a5 : a6);

assign a58_2_fu_122_p3 = ((tmp_3_fu_116_p2[0:0] === 1'b1) ? a7 : a8);

assign a58_fu_147_p3 = ((tmp_5_reg_191[0:0] === 1'b1) ? a58_1_reg_176 : a58_2_reg_181);

assign ap_CS_fsm_state1 = ap_CS_fsm[32'd0];

assign ap_CS_fsm_state2 = ap_CS_fsm[32'd1];

assign ap_CS_fsm_state3 = ap_CS_fsm[32'd2];

assign ap_return = ((tmp_6_fu_152_p2[0:0] === 1'b1) ? a18_2_fu_142_p3 : a58_fu_147_p3);

assign tmp_1_fu_88_p2 = (($signed(a3) < $signed(a4)) ? 1'b1 : 1'b0);

assign tmp_2_fu_102_p2 = (($signed(a5) < $signed(a6)) ? 1'b1 : 1'b0);

assign tmp_3_fu_116_p2 = (($signed(a7) < $signed(a8)) ? 1'b1 : 1'b0);

assign tmp_4_fu_130_p2 = (($signed(a14_fu_80_p3) < $signed(a14_1_fu_94_p3)) ? 1'b1 : 1'b0);

assign tmp_5_fu_136_p2 = (($signed(a58_1_fu_108_p3) < $signed(a58_2_fu_122_p3)) ? 1'b1 : 1'b0);

assign tmp_6_fu_152_p2 = (($signed(a18_2_fu_142_p3) < $signed(a58_fu_147_p3)) ? 1'b1 : 1'b0);

assign tmp_fu_74_p2 = (($signed(a1) < $signed(a2)) ? 1'b1 : 1'b0);

endmodule //findmin
