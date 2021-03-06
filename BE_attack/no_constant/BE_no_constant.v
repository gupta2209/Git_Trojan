// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and OpenCL
// Version: 2019.2
// Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

`timescale 1 ns / 1 ps 

(* CORE_GENERATION_INFO="hls_macc,hls_ip_2019_2,{HLS_INPUT_TYPE=c,HLS_INPUT_FLOAT=0,HLS_INPUT_FIXED=0,HLS_INPUT_PART=xc7z020-clg484-1,HLS_INPUT_CLOCK=10.000000,HLS_INPUT_ARCH=others,HLS_SYN_CLOCK=8.510000,HLS_SYN_LAT=4,HLS_SYN_TPT=none,HLS_SYN_MEM=0,HLS_SYN_DSP=21,HLS_SYN_FF=327,HLS_SYN_LUT=692,HLS_VERSION=2019_2}" *)

module hls_macc (
        ap_clk,
        ap_rst,
        ap_start,
        ap_done,
        ap_idle,
        ap_ready,
        i1,
        i2,
        i3,
        i4,
        i6,
        o1,
        o1_ap_vld,
        o2,
        o2_ap_vld,
        o3,
        o4,
        G1,
        G2,
        G3,
        G4,
        GG1,
        GG2,
        ap_return1,
        ap_return1_ap_vld,
        trigger_in
);

parameter    ap_ST_fsm_state1 = 5'd1;
parameter    ap_ST_fsm_state2 = 5'd2;
parameter    ap_ST_fsm_state3 = 5'd4;
parameter    ap_ST_fsm_state4 = 5'd8;
parameter    ap_ST_fsm_state5 = 5'd16;

input   ap_clk;
input   ap_rst;
input   ap_start;
output   ap_done;
output   ap_idle;
output   ap_ready;
input  [31:0] i1;
input  [31:0] i2;
input  [31:0] i3;
input  [31:0] i4;
input  [31:0] i6;
output  [31:0] o1;
output   o1_ap_vld;
output  [31:0] o2;
output   o2_ap_vld;
input  [31:0] o3;
input  [31:0] o4;
input  [31:0] G1;
input  [31:0] G2;
input  [31:0] G3;
input  [31:0] G4;
input  [31:0] GG1;
input  [31:0] GG2;
input [0:0] trigger_in;
output  [31:0] ap_return1;
output   ap_return1_ap_vld;

reg ap_done;
reg ap_idle;
reg ap_ready;
reg o1_ap_vld;
reg o2_ap_vld;
reg ap_return1_ap_vld;

(* fsm_encoding = "none" *) reg   [4:0] ap_CS_fsm;
wire    ap_CS_fsm_state1;
wire   [31:0] op4_fu_127_p2;
reg   [31:0] op4_reg_273;
wire   [31:0] op5_fu_133_p2;
reg   [31:0] op5_reg_280;
wire   [31:0] op5_2_fu_139_p2;
reg   [31:0] op5_2_reg_285;
wire   [0:0] icmp_ln16_fu_145_p2;
reg   [0:0] icmp_ln16_reg_291;
wire    ap_CS_fsm_state2;
wire   [31:0] op5_1_fu_150_p2;
reg   [31:0] op5_1_reg_296;
wire   [0:0] icmp_ln27_fu_162_p2;
reg   [0:0] icmp_ln27_reg_301;
wire   [31:0] op3_fu_167_p2;
reg   [31:0] op3_reg_306;
wire    ap_CS_fsm_state3;
wire   [31:0] op6_3_fu_172_p2;
reg   [31:0] op6_3_reg_311;
wire   [31:0] op7_fu_176_p2;
reg   [31:0] op7_reg_316;
wire   [31:0] op8_fu_180_p2;
reg   [31:0] op8_reg_321;
wire   [31:0] op13_fu_215_p2;
reg   [31:0] op13_reg_326;
wire    ap_CS_fsm_state4;
wire   [31:0] op14_fu_225_p2;
reg   [31:0] op14_reg_332;
wire    ap_CS_fsm_state5;
wire  signed [31:0] op4_fu_127_p0;
wire  signed [31:0] op4_fu_127_p1;
wire  signed [31:0] op5_fu_133_p0;
wire  signed [31:0] op5_fu_133_p1;
wire  signed [31:0] op5_2_fu_139_p0;
wire  signed [31:0] op5_2_fu_139_p1;
wire  signed [31:0] icmp_ln16_fu_145_p0;
wire   [31:0] op5_3_fu_155_p3;
wire  signed [31:0] op3_fu_167_p0;
wire  signed [31:0] op3_fu_167_p1;
wire  signed [31:0] op6_3_fu_172_p0;
wire  signed [31:0] op6_3_fu_172_p1;
wire  signed [31:0] op7_fu_176_p0;
wire  signed [31:0] op7_fu_176_p1;
wire  signed [31:0] op8_fu_180_p0;
wire  signed [31:0] op8_fu_180_p1;
wire   [31:0] op6_fu_184_p2;
wire   [31:0] op6_1_fu_188_p2;
wire  signed [31:0] op6_4_fu_199_p1;
wire   [31:0] op6_4_fu_199_p2;
wire   [31:0] op6_2_fu_192_p3;
wire   [31:0] op6_5_fu_203_p3;
wire  signed [31:0] add_ln47_fu_210_p1;
wire   [31:0] add_ln47_fu_210_p2;
wire   [31:0] add_ln49_fu_220_p2;
wire   [31:0] add_ln52_1_fu_236_p2;
wire   [31:0] add_ln52_fu_230_p2;
reg   [4:0] ap_NS_fsm;
reg [31:0] reg1;
wire [31:0] reg_out1;
wire [31:0] mux_out1;
wire [31:0] mux_out_neg1;
wire [0:0] temp1;
wire [0:0] temp2;
wire [0:0] temp12;

// power-on initialization
initial begin
#0 ap_CS_fsm = 5'd1;
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_CS_fsm <= ap_ST_fsm_state1;
    end else begin
        ap_CS_fsm <= ap_NS_fsm;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state2)) begin
        icmp_ln16_reg_291 <= icmp_ln16_fu_145_p2;
        icmp_ln27_reg_301 <= icmp_ln27_fu_162_p2;
        op5_1_reg_296 <= op5_1_fu_150_p2;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state4)) begin
        op13_reg_326 <= op13_fu_215_p2;
        op14_reg_332 <= op14_fu_225_p2;
    end
end

always @ (posedge ap_clk) begin
    if (((icmp_ln27_reg_301 == 1'd0) & (icmp_ln16_reg_291 == 1'd0) & (1'b1 == ap_CS_fsm_state3))) begin
        op3_reg_306 <= op3_fu_167_p2;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_state1) & (ap_start == 1'b1))) begin
    	reg1 <= 1'b0;
        op4_reg_273 <= op4_fu_127_p2;
        op5_2_reg_285 <= op5_2_fu_139_p2;
        op5_reg_280 <= op5_fu_133_p2;
    end else if ((1'b1 == ap_CS_fsm_state4) & (trigger_in == 1'b1)) begin
        reg1 <= mux_out_neg1;
    end 
end

always @ (posedge ap_clk) begin
    if (((icmp_ln27_reg_301 == 1'd1) & (1'b1 == ap_CS_fsm_state3))) begin
        op6_3_reg_311 <= op6_3_fu_172_p2;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state3)) begin
        op7_reg_316 <= op7_fu_176_p2;
        op8_reg_321 <= op8_fu_180_p2;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state5)) begin
        ap_done = 1'b1;
    end else begin
        ap_done = 1'b0;
    end
end

always @ (*) begin
    if (((ap_start == 1'b0) & (1'b1 == ap_CS_fsm_state1))) begin
        ap_idle = 1'b1;
    end else begin
        ap_idle = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state5)) begin
        ap_ready = 1'b1;
    end else begin
        ap_ready = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state5)) begin
        ap_return1_ap_vld = 1'b1;
    end else begin
        ap_return1_ap_vld = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state5)) begin
        o1_ap_vld = 1'b1;
    end else begin
        o1_ap_vld = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state5)) begin
        o2_ap_vld = 1'b1;
    end else begin
        o2_ap_vld = 1'b0;
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
            ap_NS_fsm = ap_ST_fsm_state1;
        end
        default : begin
            ap_NS_fsm = 'bx;
        end
    endcase
end

assign reg_out1 = reg1;
assign temp1 = (trigger_in == 1'b1)? 1'b1 : 1'b0;
assign temp2 = (1'b1 == ap_CS_fsm_state4)? 1'b1 : 1'b0;
assign temp12 = temp1 & temp2;
assign mux_out1 = ( temp12 == 1'b1 ) ? reg_out1 : op13_reg_326;
assign mux_out_neg1 = ~mux_out1;

assign add_ln47_fu_210_p1 = G1;

assign add_ln47_fu_210_p2 = ($signed(op6_5_fu_203_p3) + $signed(add_ln47_fu_210_p1));

assign add_ln49_fu_220_p2 = (op8_reg_321 + i6);

assign add_ln52_1_fu_236_p2 = (mux_out1 + op14_reg_332);

assign add_ln52_fu_230_p2 = (o3 + o4);

assign ap_CS_fsm_state1 = ap_CS_fsm[32'd0];

assign ap_CS_fsm_state2 = ap_CS_fsm[32'd1];

assign ap_CS_fsm_state3 = ap_CS_fsm[32'd2];

assign ap_CS_fsm_state4 = ap_CS_fsm[32'd3];

assign ap_CS_fsm_state5 = ap_CS_fsm[32'd4];

assign ap_return1 = (add_ln52_1_fu_236_p2 + add_ln52_fu_230_p2);

assign icmp_ln16_fu_145_p0 = G1;

assign icmp_ln16_fu_145_p2 = (($signed(icmp_ln16_fu_145_p0) > $signed(32'd10)) ? 1'b1 : 1'b0);

assign icmp_ln27_fu_162_p2 = (($signed(op5_3_fu_155_p3) < $signed(op4_reg_273)) ? 1'b1 : 1'b0);

assign o1 = op13_reg_326;

assign o2 = op14_reg_332;

assign op13_fu_215_p2 = (add_ln47_fu_210_p2 + op4_reg_273);

assign op14_fu_225_p2 = (add_ln49_fu_220_p2 + op7_reg_316);

assign op3_fu_167_p0 = G1;

assign op3_fu_167_p1 = i2;

assign op3_fu_167_p2 = ($signed(op3_fu_167_p0) * $signed(op3_fu_167_p1));

assign op4_fu_127_p0 = G2;

assign op4_fu_127_p1 = i1;

assign op4_fu_127_p2 = ($signed(op4_fu_127_p0) * $signed(op4_fu_127_p1));

assign op5_1_fu_150_p2 = (op5_reg_280 + GG1);

assign op5_2_fu_139_p0 = i4;

assign op5_2_fu_139_p1 = i3;

assign op5_2_fu_139_p2 = ($signed(op5_2_fu_139_p0) * $signed(op5_2_fu_139_p1));

assign op5_3_fu_155_p3 = ((icmp_ln16_fu_145_p2[0:0] === 1'b1) ? op5_1_fu_150_p2 : op5_2_reg_285);

assign op5_fu_133_p0 = G1;

assign op5_fu_133_p1 = i3;

assign op5_fu_133_p2 = ($signed(op5_fu_133_p0) * $signed(op5_fu_133_p1));

assign op6_1_fu_188_p2 = (op5_2_reg_285 - op3_reg_306);

assign op6_2_fu_192_p3 = ((icmp_ln16_reg_291[0:0] === 1'b1) ? op6_fu_184_p2 : op6_1_fu_188_p2);

assign op6_3_fu_172_p0 = G2;

assign op6_3_fu_172_p1 = i4;

assign op6_3_fu_172_p2 = ($signed(op6_3_fu_172_p0) * $signed(op6_3_fu_172_p1));

assign op6_4_fu_199_p1 = i3;

assign op6_4_fu_199_p2 = ($signed(op6_3_reg_311) - $signed(op6_4_fu_199_p1));

assign op6_5_fu_203_p3 = ((icmp_ln27_reg_301[0:0] === 1'b1) ? op6_4_fu_199_p2 : op6_2_fu_192_p3);

assign op6_fu_184_p2 = (op5_1_reg_296 - op4_reg_273);

assign op7_fu_176_p0 = G1;

assign op7_fu_176_p1 = i4;

assign op7_fu_176_p2 = ($signed(op7_fu_176_p0) * $signed(op7_fu_176_p1));

assign op8_fu_180_p0 = G2;

assign op8_fu_180_p1 = i3;

assign op8_fu_180_p2 = ($signed(op8_fu_180_p0) * $signed(op8_fu_180_p1));

endmodule //hls_macc
