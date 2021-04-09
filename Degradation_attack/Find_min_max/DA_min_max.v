// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2017.2
// Copyright (C) 1986-2017 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

`timescale 1 ns / 1 ps 

(* CORE_GENERATION_INFO="min_max,hls_ip_2017_2,{HLS_INPUT_TYPE=c,HLS_INPUT_FLOAT=0,HLS_INPUT_FIXED=0,HLS_INPUT_PART=xc7z020clg484-1,HLS_INPUT_CLOCK=10.000000,HLS_INPUT_ARCH=others,HLS_SYN_CLOCK=8.588000,HLS_SYN_LAT=401,HLS_SYN_TPT=none,HLS_SYN_MEM=2,HLS_SYN_DSP=0,HLS_SYN_FF=160,HLS_SYN_LUT=309}" *)

module min_max (
        ap_clk,
        ap_rst,
        ap_start,
        ap_done,
        ap_idle,
        ap_ready,
        p0,
        arr_address0,
        arr_ce0,
        arr_q0,
        arr_address1,
        arr_ce1,
        arr_q1,
        out1,
        out1_ap_vld,
        out2,
        out2_ap_vld,
        trigger
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
input  [31:0] p0;
output  [6:0] arr_address0;
output   arr_ce0;
input  [31:0] arr_q0;
output  [6:0] arr_address1;
output   arr_ce1;
input  [31:0] arr_q1;
input [0:0] trigger;
output  [31:0] out1;
output   out1_ap_vld;
output  [31:0] out2;
output   out2_ap_vld;

reg ap_done;
reg ap_idle;
reg ap_ready;
reg[6:0] arr_address0;
reg arr_ce0;
reg arr_ce1;
reg out1_ap_vld;
reg out2_ap_vld;

(* fsm_encoding = "none" *) reg   [7:0] ap_CS_fsm;
wire    ap_CS_fsm_state1;
wire   [31:0] i_cast3_fu_164_p1;
reg   [31:0] i_cast3_reg_257;
wire    ap_CS_fsm_state2;
wire   [6:0] i_2_fu_175_p2;
reg   [6:0] i_2_reg_265;
wire   [0:0] exitcond1_fu_169_p2;
wire   [0:0] tmp_fu_181_p2;
reg   [0:0] tmp_reg_280;
wire    ap_CS_fsm_state4;
wire    ap_CS_fsm_state5;
wire   [31:0] empty_q0;
wire    ap_CS_fsm_state6;
wire   [31:0] empty_q1;
wire    ap_CS_fsm_state7;
wire   [0:0] exitcond_fu_204_p2;
wire   [6:0] i_3_fu_210_p2;
reg   [6:0] i_3_reg_314;
wire   [31:0] minmaxmin_3_fu_236_p3;
wire    ap_CS_fsm_state8;
wire   [31:0] minmaxmax_2_fu_244_p3;
reg   [6:0] empty_address0;
reg    empty_ce0;
reg    empty_we0;
reg   [6:0] empty_address1;
reg    empty_ce1;
reg   [6:0] i_reg_120;
wire    ap_CS_fsm_state3;
reg   [6:0] i_1_reg_131;
reg   [31:0] minmaxmin_1_reg_142;
reg   [31:0] minmaxmax_1_reg_153;
wire   [31:0] minmaxmin_1_ph_fu_187_p1;
wire   [31:0] minmaxmax_1_ph_cast_fu_191_p3;
wire   [31:0] i_1_cast2_fu_199_p1;
wire   [0:0] tmp_3_fu_222_p2;
wire   [0:0] tmp_2_fu_216_p2;
wire   [31:0] minmaxmax_5_minmaxmi_fu_228_p3;
reg   [7:0] ap_NS_fsm;

// power-on initialization
initial begin
#0 ap_CS_fsm = 10'd1;
end

min_max_empty #(
    .DataWidth( 32 ),
    .AddressRange( 100 ),
    .AddressWidth( 7 ))
empty_U(
    .clk(ap_clk),
    .reset(ap_rst),
    .address0(empty_address0),
    .ce0(empty_ce0),
    .we0(empty_we0),
    .d0(arr_q0),
    .q0(empty_q0),
    .address1(empty_address1),
    .ce1(empty_ce1),
    .q1(empty_q1)
);

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_CS_fsm <= ap_ST_fsm_state1;
    end else begin
        ap_CS_fsm <= ap_NS_fsm;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state6)) begin
        i_1_reg_131 <= 7'd2;
    end else if ((1'b1 == ap_CS_fsm_state8)) begin
        i_1_reg_131 <= i_3_reg_314;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state3)) begin
        i_reg_120 <= i_2_reg_265;
    end else if (((1'b1 == ap_CS_fsm_state1) & (ap_start == 1'b1))) begin
        i_reg_120 <= 7'd0;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state6)) begin
        minmaxmax_1_reg_153 <= empty_q1;
    end else if ((1'b1 == ap_CS_fsm_state8)) begin
        minmaxmax_1_reg_153 <= minmaxmax_2_fu_244_p3;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state6)) begin
        minmaxmin_1_reg_142 <= empty_q0;
    end else if ((1'b1 == ap_CS_fsm_state8)) begin
        minmaxmin_1_reg_142 <= minmaxmin_3_fu_236_p3;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state2)) begin
        i_2_reg_265 <= i_2_fu_175_p2;
        i_cast3_reg_257[6 : 0] <= i_cast3_fu_164_p1[6 : 0];
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_state7) & (1'd0 == exitcond_fu_204_p2))) begin
        i_3_reg_314 <= i_3_fu_210_p2;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state4)) begin
        tmp_reg_280 <= tmp_fu_181_p2;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state7) & (1'd1 == exitcond_fu_204_p2))) begin
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
    if (((1'b1 == ap_CS_fsm_state7) & (1'd1 == exitcond_fu_204_p2))) begin
        ap_ready = 1'b1;
    end else begin
        ap_ready = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state2) & (exitcond1_fu_169_p2 == 1'd1)) begin
        arr_address0 = 32'd0;
    end else if ((1'b1 == ap_CS_fsm_state2) & (exitcond1_fu_169_p2 == 1'd0)) begin
        arr_address0 = i_cast3_fu_164_p1;
    end else begin
        arr_address0 = 'bx;
    end
end

always @ (*) begin
    if ((((1'b1 == ap_CS_fsm_state2) & (exitcond1_fu_169_p2 == 1'd0)) | ((1'b1 == ap_CS_fsm_state2) & (exitcond1_fu_169_p2 == 1'd1)))) begin
        arr_ce0 = 1'b1;
    end else begin
        arr_ce0 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state2)) begin
        arr_ce1 = 1'b1;
    end else begin
        arr_ce1 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state5)) begin
        empty_address0 = minmaxmin_1_ph_fu_187_p1;
    end else if ((1'b1 == ap_CS_fsm_state3)) begin
        empty_address0 = i_cast3_reg_257;
    end else begin
        empty_address0 = 'bx;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state7)) begin
        empty_address1 = i_1_cast2_fu_199_p1;
    end else if ((1'b1 == ap_CS_fsm_state5)) begin
        empty_address1 = minmaxmax_1_ph_cast_fu_191_p3;
    end else begin
        empty_address1 = 'bx;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state5) | (1'b1 == ap_CS_fsm_state3))) begin
        empty_ce0 = 1'b1;
    end else begin
        empty_ce0 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state5) | (1'b1 == ap_CS_fsm_state7))) begin
        empty_ce1 = 1'b1;
    end else begin
        empty_ce1 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state3)) begin
        empty_we0 = 1'b1;
    end else begin
        empty_we0 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state7) & (1'd1 == exitcond_fu_204_p2))) begin
        out1_ap_vld = 1'b1;
    end else begin
        out1_ap_vld = 1'b0;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state7) & (1'd1 == exitcond_fu_204_p2))) begin
        out2_ap_vld = 1'b1;
    end else begin
        out2_ap_vld = 1'b0;
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
            if (((1'b1 == ap_CS_fsm_state2) & (exitcond1_fu_169_p2 == 1'd1))) begin
                ap_NS_fsm = ap_ST_fsm_state4;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state3;
            end
        end
        ap_ST_fsm_state3 : begin
            if (((1'b1 == ap_CS_fsm_state3) & (trigger == 1'b1))) begin
          		ap_NS_fsm = ap_ST_fsm_state9;
        	end else begin
          		ap_NS_fsm = ap_ST_fsm_state2;
        	end
        end
        ap_ST_fsm_state4 : begin
            ap_NS_fsm = ap_ST_fsm_state5;
        end
        ap_ST_fsm_state5 : begin
            if (((1'b1 == ap_CS_fsm_state5) & (trigger == 1'b1))) begin
          		ap_NS_fsm = ap_ST_fsm_state10;
        	end else begin
          		ap_NS_fsm = ap_ST_fsm_state6;
        	end
        end
        ap_ST_fsm_state6 : begin
            ap_NS_fsm = ap_ST_fsm_state7;
        end
        ap_ST_fsm_state7 : begin
            if (((1'b1 == ap_CS_fsm_state7) & (1'd1 == exitcond_fu_204_p2))) begin
                ap_NS_fsm = ap_ST_fsm_state1;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state8;
            end
        end
        ap_ST_fsm_state8 : begin
            ap_NS_fsm = ap_ST_fsm_state7;
        end
        ap_ST_fsm_state9 : begin
            ap_NS_fsm = ap_ST_fsm_state2;
        end
        ap_ST_fsm_state10 : begin
            ap_NS_fsm = ap_ST_fsm_state6;
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

assign arr_address1 = 32'd1;

assign exitcond1_fu_169_p2 = ((i_reg_120 == 7'd100) ? 1'b1 : 1'b0);

assign exitcond_fu_204_p2 = ((i_1_reg_131 == 7'd100) ? 1'b1 : 1'b0);

assign i_1_cast2_fu_199_p1 = i_1_reg_131;

assign i_2_fu_175_p2 = (i_reg_120 + 7'd1);

assign i_3_fu_210_p2 = (i_1_reg_131 + 7'd1);

assign i_cast3_fu_164_p1 = i_reg_120;

assign minmaxmax_1_ph_cast_fu_191_p3 = ((tmp_reg_280[0:0] === 1'b1) ? 32'd0 : 32'd1);

assign minmaxmax_2_fu_244_p3 = ((tmp_2_fu_216_p2[0:0] === 1'b1) ? empty_q1 : minmaxmax_1_reg_153);

assign minmaxmax_5_minmaxmi_fu_228_p3 = ((tmp_3_fu_222_p2[0:0] === 1'b1) ? empty_q1 : minmaxmin_1_reg_142);

assign minmaxmin_1_ph_fu_187_p1 = tmp_reg_280;

assign minmaxmin_3_fu_236_p3 = ((tmp_2_fu_216_p2[0:0] === 1'b1) ? minmaxmin_1_reg_142 : minmaxmax_5_minmaxmi_fu_228_p3);

assign out1 = minmaxmax_1_reg_153;

assign out2 = minmaxmin_1_reg_142;

assign tmp_2_fu_216_p2 = (($signed(empty_q1) > $signed(minmaxmax_1_reg_153)) ? 1'b1 : 1'b0);

assign tmp_3_fu_222_p2 = (($signed(empty_q1) < $signed(minmaxmin_1_reg_142)) ? 1'b1 : 1'b0);

assign tmp_fu_181_p2 = (($signed(arr_q0) > $signed(arr_q1)) ? 1'b1 : 1'b0);

always @ (posedge ap_clk) begin
    i_cast3_reg_257[31:7] <= 25'b0000000000000000000000000;
end

endmodule //min_max
