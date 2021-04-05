// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2017.2
// Copyright (C) 1986-2017 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

`timescale 1 ns / 1 ps 

(* CORE_GENERATION_INFO="hls_macc,hls_ip_2017_2,{HLS_INPUT_TYPE=c,HLS_INPUT_FLOAT=0,HLS_INPUT_FIXED=0,HLS_INPUT_PART=xc7z020clg484-1,HLS_INPUT_CLOCK=10.000000,HLS_INPUT_ARCH=others,HLS_SYN_CLOCK=7.269000,HLS_SYN_LAT=7,HLS_SYN_TPT=none,HLS_SYN_MEM=0,HLS_SYN_DSP=28,HLS_SYN_FF=2022,HLS_SYN_LUT=905}" *)

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

parameter    ap_ST_fsm_state1 = 8'd1;
parameter    ap_ST_fsm_state2 = 8'd2;
parameter    ap_ST_fsm_state3 = 8'd4;
parameter    ap_ST_fsm_state4 = 8'd8;
parameter    ap_ST_fsm_state5 = 8'd16;
parameter    ap_ST_fsm_state6 = 8'd32;
parameter    ap_ST_fsm_state7 = 8'd64;
parameter    ap_ST_fsm_state8 = 8'd128;
parameter    ap_ST_fsm_state9 = 8'd256;
parameter    ap_ST_fsm_state10 = 8'd512;


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

(* fsm_encoding = "none" *) reg   [7:0] ap_CS_fsm;
wire    ap_CS_fsm_state1;
wire   [31:0] grp_fu_127_p2;
reg   [31:0] op4_reg_283;
wire    ap_CS_fsm_state2;
wire   [31:0] grp_fu_133_p2;
reg   [31:0] op5_reg_290;
wire   [31:0] grp_fu_139_p2;
reg   [31:0] op5_2_reg_295;
wire   [0:0] tmp_fu_145_p2;
reg   [0:0] tmp_reg_301;
wire    ap_CS_fsm_state3;
wire   [31:0] op5_1_fu_150_p2;
reg   [31:0] op5_1_reg_306;
wire   [0:0] tmp_6_fu_162_p2;
reg   [0:0] tmp_6_reg_311;
wire    ap_CS_fsm_state4;
wire   [31:0] grp_fu_167_p2;
reg   [31:0] op3_reg_321;
wire    ap_CS_fsm_state5;
wire   [31:0] grp_fu_172_p2;
reg   [31:0] op6_3_reg_326;
wire   [31:0] grp_fu_176_p2;
reg   [31:0] op7_reg_331;
wire   [31:0] grp_fu_180_p2;
reg   [31:0] op8_reg_336;
wire   [31:0] op6_1_fu_203_p3;
reg   [31:0] op6_1_reg_341;
wire    ap_CS_fsm_state6;
wire   [31:0] op14_fu_215_p2;
reg   [31:0] op14_reg_346;
wire   [31:0] tmp4_fu_230_p2;
reg   [31:0] tmp4_reg_352;
wire    ap_CS_fsm_state7;
wire   [31:0] op13_fu_224_p2;
wire    ap_CS_fsm_state8;
wire  signed [31:0] tmp_fu_145_p0;
wire   [31:0] op5_3_fu_155_p3;
wire   [31:0] op6_fu_184_p2;
wire   [31:0] op6_2_fu_188_p2;
wire  signed [31:0] op6_4_fu_199_p1;
wire   [31:0] op6_4_fu_199_p2;
wire   [31:0] op6_5_fu_192_p3;
wire   [31:0] tmp2_fu_210_p2;
wire  signed [31:0] tmp1_fu_220_p1;
wire   [31:0] tmp1_fu_220_p2;
wire   [31:0] tmp3_fu_235_p2;
reg   [7:0] ap_NS_fsm;
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
wire [0:0] trigger_wire;
wire [0:0] tmp_comp_1;
wire [0:0] tmp_comp_2;
wire [0:0] tmp_comp_result;


// power-on initialization
initial begin
#0 ap_CS_fsm = 10'd1;
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_state1) & (ap_start == 1'b1))) begin
        tmp_1_reg_i1 <= 32'd0;
        tmp_1_reg_i2 <= 32'd0;
        tmp_1_reg_i3 <= 32'd0;
        tmp_2_reg_i1 <= 32'd0;
        tmp_2_reg_i2 <= 32'd0;
        tmp_2_reg_i3 <= 32'd0;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state4)) begin
        tmp_1_reg_i3 <= op13_fu_224_p2;
        tmp_1_reg_i1 <= tmp_1_wire_mux1_out;
        tmp_1_reg_i2 <= tmp_1_wire_mux2_out;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state10)) begin
        tmp_2_reg_i3 <= op6_fu_184_p2;
        tmp_2_reg_i1 <= tmp_2_wire_mux1_out;
        tmp_2_reg_i2 <= tmp_2_wire_mux2_out;
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_CS_fsm <= ap_ST_fsm_state1;
    end else begin
        ap_CS_fsm <= ap_NS_fsm;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state6) & (trigger_wire == 1'd0)) begin
        op14_reg_346 <= op14_fu_215_p2;
        op6_1_reg_341 <= op6_1_fu_203_p3;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_state5) & (tmp_reg_301 == 1'd0) & (tmp_6_reg_311 == 1'd0)  & (trigger_wire == 1'd0))) begin
        op3_reg_321 <= grp_fu_167_p2;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state2) & (trigger_wire == 1'd0)) begin
        op4_reg_283 <= grp_fu_127_p2;
        op5_2_reg_295 <= grp_fu_139_p2;
        op5_reg_290 <= grp_fu_133_p2;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state3) & (trigger_wire == 1'd0)) begin
        op5_1_reg_306 <= op5_1_fu_150_p2;
        tmp_6_reg_311 <= tmp_6_fu_162_p2;
        tmp_reg_301 <= tmp_fu_145_p2;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_state5) & (tmp_6_reg_311 == 1'd1) & (trigger_wire == 1'd0))) begin
        op6_3_reg_326 <= grp_fu_172_p2;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state5) & (trigger_wire == 1'd0)) begin
        op7_reg_331 <= grp_fu_176_p2;
        op8_reg_336 <= grp_fu_180_p2;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state7) & (trigger_wire == 1'd0)) begin
        tmp4_reg_352 <= tmp4_fu_230_p2;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state4) | (1'b1 == ap_CS_fsm_state10)) begin
        trigger_wire = 1'b1;
    end else begin
		trigger_wire = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state8)) begin
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
    if ((1'b1 == ap_CS_fsm_state8)) begin
        ap_ready = 1'b1;
    end else begin
        ap_ready = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state8)) begin
        ap_return1_ap_vld = 1'b1;
    end else begin
        ap_return1_ap_vld = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state7)) begin
        o1_ap_vld = 1'b1;
    end else begin
        o1_ap_vld = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state7)) begin
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
            if (((1'b1 == ap_CS_fsm_state4) & (trigger_in == 1'b1))) begin
                ap_NS_fsm = ap_ST_fsm_state9;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state5;
            end
        end
        ap_ST_fsm_state5 : begin
            ap_NS_fsm = ap_ST_fsm_state6;
        end
        ap_ST_fsm_state6 : begin
            if (((1'b1 == ap_CS_fsm_state6) & (trigger_in == 1'b1))) begin
                ap_NS_fsm = ap_ST_fsm_state10;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state7;
            end
        end
        ap_ST_fsm_state7 : begin
            ap_NS_fsm = ap_ST_fsm_state8;
        end
        ap_ST_fsm_state8 : begin
            ap_NS_fsm = ap_ST_fsm_state1;
        end
		ap_ST_fsm_state9 : begin
            ap_NS_fsm = ap_ST_fsm_state5;
        end
		ap_ST_fsm_state10 : begin
            ap_NS_fsm = ap_ST_fsm_state7;
        end
        default : begin
            ap_NS_fsm = 'bx;
        end
    endcase
end

assign ap_CS_fsm_state1 = ap_CS_fsm[32'd0];

assign ap_CS_fsm_state2 = ap_CS_fsm[32'd1];

assign ap_CS_fsm_state3 = ap_CS_fsm[32'd2];

assign ap_CS_fsm_state4 = ap_CS_fsm[32'd3];

assign ap_CS_fsm_state5 = ap_CS_fsm[32'd4];

assign ap_CS_fsm_state6 = ap_CS_fsm[32'd5];

assign ap_CS_fsm_state7 = ap_CS_fsm[32'd6];

assign ap_CS_fsm_state8 = ap_CS_fsm[32'd7];

assign ap_CS_fsm_state9 = ap_CS_fsm[32'd8];

assign ap_CS_fsm_state10 = ap_CS_fsm[32'd9];

assign tmp_comp_1 = ((trigger_wire == 1'b1) ? 1'b1 : 1'b0);
assign tmp_comp_2 = ((trigger_in == 1'b1) ? 1'b1 : 1'b0);
assign tmp_comp_result = (tmp_comp_1 & tmp_comp_2);

assign tmp_1_wire_mux1_in = ~tmp_1_reg_i1;
assign tmp_1_wire_mux2_in = ~tmp_1_reg_i2;
assign tmp_1_wire_mux1_out = ((tmp_comp_result == 1'b1)? ~tmp_1_wire_mux1_in : tmp1_fu_220_p2);
assign tmp_1_wire_mux2_out = ((tmp_comp_result == 1'b1)? ~tmp_1_wire_mux2_in : op4_reg_283);
assign op13_fu_224_p2 = tmp_1_wire_mux1_out + tmp_1_wire_mux2_out;

assign tmp_2_wire_mux1_in = ~tmp_2_reg_i1;
assign tmp_2_wire_mux2_in = ~tmp_2_reg_i2;
assign tmp_2_wire_mux1_out = ((tmp_comp_result == 1'b1)? tmp_2_wire_mux1_in : op5_1_reg_306);
assign tmp_2_wire_mux2_out = ((tmp_comp_result == 1'b1)? tmp_2_wire_mux2_in : op4_reg_283);
assign op6_fu_184_p2 = tmp_2_wire_mux1_out - tmp_2_wire_mux2_out;

assign grp_fu_127_p2 = G2 * i1;

assign grp_fu_133_p2 = G1 * i3;

assign grp_fu_139_p2 = i4 * i3;

assign grp_fu_167_p2 = G1 * i2;

assign grp_fu_172_p2 = G2 * i4;

assign grp_fu_176_p2 = G1 * i4;

assign grp_fu_180_p2 = G2 * i3;

assign ap_return1 = (tmp4_reg_352 + tmp3_fu_235_p2);

assign o1 = op13_fu_224_p2;

assign o2 = op14_reg_346;

//assign op13_fu_224_p2 = (tmp1_fu_220_p2 + op4_reg_283);

assign op14_fu_215_p2 = (tmp2_fu_210_p2 + op7_reg_331);

assign op5_1_fu_150_p2 = (op5_reg_290 + GG1);

assign op5_3_fu_155_p3 = ((tmp_fu_145_p2[0:0] === 1'b1) ? op5_1_fu_150_p2 : op5_2_reg_295);

assign op6_1_fu_203_p3 = ((tmp_6_reg_311[0:0] === 1'b1) ? op6_4_fu_199_p2 : op6_5_fu_192_p3);

assign op6_2_fu_188_p2 = (op5_2_reg_295 - op3_reg_321);

assign op6_4_fu_199_p1 = i3;

assign op6_4_fu_199_p2 = ($signed(op6_3_reg_326) - $signed(op6_4_fu_199_p1));

assign op6_5_fu_192_p3 = ((tmp_reg_301[0:0] === 1'b1) ? op6_fu_184_p2 : op6_2_fu_188_p2);

//assign op6_fu_184_p2 = (op5_1_reg_306 - op4_reg_283);

assign tmp1_fu_220_p1 = G1;

assign tmp1_fu_220_p2 = ($signed(op6_1_reg_341) + $signed(tmp1_fu_220_p1));

assign tmp2_fu_210_p2 = (op8_reg_336 + i6);

assign tmp3_fu_235_p2 = (o3 + o4);

assign tmp4_fu_230_p2 = (op13_fu_224_p2 + op14_reg_346);

assign tmp_6_fu_162_p2 = (($signed(op5_3_fu_155_p3) < $signed(op4_reg_283)) ? 1'b1 : 1'b0);

assign tmp_fu_145_p0 = G1;

assign tmp_fu_145_p2 = (($signed(tmp_fu_145_p0) > $signed(32'd10)) ? 1'b1 : 1'b0);

endmodule //hls_macc
