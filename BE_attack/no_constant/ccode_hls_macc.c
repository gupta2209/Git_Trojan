#include<stdio.h>

void hls_macc(long long int *ap_clk__1,long long int *ap_done__1,long long int *ap_idle__1,long long int *ap_ready__1,long long int *ap_return__1,long long int *ap_rst__1,long long int *ap_start__1,long long int *i1__1,long long int *i2__1,long long int *i3__1,long long int *i4__1,long long int *i6__1,long long int *o1__1,long long int *o1_ap_vld__1,long long int *o2__1,long long int *o2_ap_vld__1,long long int *o3__1,long long int *o4__1,long long int *G1__1,long long int *G2__1,long long int *G3__1,long long int *G4__1,long long int *GG1__1,long long int *GG2__1,int dummy){
long long int G1=*G1__1;
long long int G2=*G2__1;
long long int G3=*G3__1;
long long int G4=*G4__1;
long long int GG1=*GG1__1;
long long int GG2=*GG2__1;
long long int ap_clk=*ap_clk__1;
long long int ap_done=*ap_done__1;
long long int ap_idle=*ap_idle__1;
long long int ap_ready=*ap_ready__1;
long long int ap_return=*ap_return__1;
long long int ap_rst=*ap_rst__1;
long long int ap_start=*ap_start__1;
long long int i1=*i1__1;
long long int i2=*i2__1;
long long int i3=*i3__1;
long long int i4=*i4__1;
long long int i6=*i6__1;
long long int o1=*o1__1;
long long int o1_ap_vld=*o1_ap_vld__1;
long long int o2=*o2__1;
long long int o2_ap_vld=*o2_ap_vld__1;
long long int o3=*o3__1;
long long int o4=*o4__1;
   long long int ap_CS_fsm_state1=0;
   long long int ap_CS_fsm_state2=0;
   long long int ap_CS_fsm_state3=0;
   long long int ap_CS_fsm_state4=0;
   long long int ap_CS_fsm_state5=0;
   long long int op3_fu_146_p0=0;
   long long int op3_fu_146_p0__temp=0;
   long long int op3_fu_146_p1=0;
   long long int op3_fu_146_p1__temp=0;
   long long int op4_fu_106_p0=0;
   long long int op4_fu_106_p0__temp=0;
   long long int op4_fu_106_p1=0;
   long long int op4_fu_106_p1__temp=0;
   long long int op5_2_fu_118_p0=0;
   long long int op5_2_fu_118_p0__temp=0;
   long long int op5_2_fu_118_p1=0;
   long long int op5_2_fu_118_p1__temp=0;
   long long int op5_fu_112_p0=0;
   long long int op5_fu_112_p0__temp=0;
   long long int op5_fu_112_p1=0;
   long long int op5_fu_112_p1__temp=0;
   long long int op6_3_fu_151_p0=0;
   long long int op6_3_fu_151_p0__temp=0;
   long long int op6_3_fu_151_p1=0;
   long long int op6_3_fu_151_p1__temp=0;
   long long int op6_4_fu_178_p1=0;
   long long int op6_4_fu_178_p1__temp=0;
   long long int op7_fu_155_p0=0;
   long long int op7_fu_155_p0__temp=0;
   long long int op7_fu_155_p1=0;
   long long int op7_fu_155_p1__temp=0;
   long long int op8_fu_159_p0=0;
   long long int op8_fu_159_p0__temp=0;
   long long int op8_fu_159_p1=0;
   long long int op8_fu_159_p1__temp=0;
   long long int tmp1_fu_189_p1=0;
   long long int tmp1_fu_189_p1__temp=0;
   long long int tmp_fu_124_p0=0;
   long long int tmp_fu_124_p0__temp=0;
   long long int G1__temp=0;
   long long int G2__temp=0;
   long long int G3__temp=0;
   long long int G4__temp=0;
   long long int GG1__temp=0;
   long long int GG2__temp=0;
   long long int ap_CS_fsm=0;
   long long int ap_CS_fsm__temp=0;
   long long int ap_NS_fsm=0;
   long long int ap_NS_fsm__temp=0;
   long long int ap_clk__temp=0;
   long long int ap_done__temp=0;
   long long int ap_idle__temp=0;
   long long int ap_ready__temp=0;
   long long int ap_return__temp=0;
   long long int ap_rst__temp=0;
   long long int ap_start__temp=0;
   long long int i1__temp=0;
   long long int i2__temp=0;
   long long int i3__temp=0;
   long long int i4__temp=0;
   long long int i6__temp=0;
   long long int o1__temp=0;
   long long int o1_ap_vld__temp=0;
   long long int o2__temp=0;
   long long int o2_ap_vld__temp=0;
   long long int o3__temp=0;
   long long int o4__temp=0;
   long long int op13_fu_194_p2=0;
   long long int op13_fu_194_p2__temp=0;
   long long int op13_reg_292=0;
   long long int op13_reg_292__temp=0;
   long long int op14_fu_204_p2=0;
   long long int op14_fu_204_p2__temp=0;
   long long int op14_reg_298=0;
   long long int op14_reg_298__temp=0;
   long long int op3_fu_146_p2=0;
   long long int op3_fu_146_p2__temp=0;
   long long int op3_reg_272=0;
   long long int op3_reg_272__temp=0;
   long long int op4_fu_106_p2=0;
   long long int op4_fu_106_p2__temp=0;
   long long int op4_reg_239=0;
   long long int op4_reg_239__temp=0;
   long long int op5_1_fu_129_p2=0;
   long long int op5_1_fu_129_p2__temp=0;
   long long int op5_1_reg_262=0;
   long long int op5_1_reg_262__temp=0;
   long long int op5_2_fu_118_p2=0;
   long long int op5_2_fu_118_p2__temp=0;
   long long int op5_2_reg_251=0;
   long long int op5_2_reg_251__temp=0;
   long long int op5_3_fu_134_p3=0;
   long long int op5_3_fu_134_p3__temp=0;
   long long int op5_fu_112_p2=0;
   long long int op5_fu_112_p2__temp=0;
   long long int op5_reg_246=0;
   long long int op5_reg_246__temp=0;
   long long int op6_1_fu_182_p3=0;
   long long int op6_1_fu_182_p3__temp=0;
   long long int op6_2_fu_167_p2=0;
   long long int op6_2_fu_167_p2__temp=0;
   long long int op6_3_fu_151_p2=0;
   long long int op6_3_fu_151_p2__temp=0;
   long long int op6_3_reg_277=0;
   long long int op6_3_reg_277__temp=0;
   long long int op6_4_fu_178_p2=0;
   long long int op6_4_fu_178_p2__temp=0;
   long long int op6_5_fu_171_p3=0;
   long long int op6_5_fu_171_p3__temp=0;
   long long int op6_fu_163_p2=0;
   long long int op6_fu_163_p2__temp=0;
   long long int op7_fu_155_p2=0;
   long long int op7_fu_155_p2__temp=0;
   long long int op7_reg_282=0;
   long long int op7_reg_282__temp=0;
   long long int op8_fu_159_p2=0;
   long long int op8_fu_159_p2__temp=0;
   long long int op8_reg_287=0;
   long long int op8_reg_287__temp=0;
   long long int tmp1_fu_189_p2=0;
   long long int tmp1_fu_189_p2__temp=0;
   long long int tmp2_fu_199_p2=0;
   long long int tmp2_fu_199_p2__temp=0;
   long long int tmp_6_fu_141_p2=0;
   long long int tmp_6_fu_141_p2__temp=0;
   long long int tmp_6_reg_267=0;
   long long int tmp_6_reg_267__temp=0;
   long long int tmp_6_reg_267_temp=0;
   long long int tmp_6_reg_267_temp__temp=0;
   long long int tmp_fu_124_p2=0;
   long long int tmp_fu_124_p2__temp=0;
   long long int tmp_fu_124_p2_temp=0;
   long long int tmp_fu_124_p2_temp__temp=0;
   long long int tmp_reg_257=0;
   long long int tmp_reg_257__temp=0;
   long long int tmp_reg_257_temp=0;
   long long int tmp_reg_257_temp__temp=0;
	ap_done=0;
	ap_start=1;

   ap_ST_fsm_state1:

	ap_CS_fsm_state1 = 1;
	ap_CS_fsm_state2 = 0;
	ap_CS_fsm_state3 = 0;
	ap_CS_fsm_state4 = 0;
	ap_CS_fsm_state5 = 0;
   op5_fu_112_p0__temp = op5_fu_112_p0 ;
   op5_2_fu_118_p1__temp = op5_2_fu_118_p1 ;
   op3_fu_146_p1__temp = op3_fu_146_p1 ;
   op6_3_fu_151_p0__temp = op6_3_fu_151_p0 ;
   tmp1_fu_189_p1__temp = tmp1_fu_189_p1 ;
   op6_3_fu_151_p1__temp = op6_3_fu_151_p1 ;
   op5_fu_112_p1__temp = op5_fu_112_p1 ;
   op4_fu_106_p0__temp = op4_fu_106_p0 ;
   op5_2_fu_118_p0__temp = op5_2_fu_118_p0 ;
   op4_fu_106_p1__temp = op4_fu_106_p1 ;
   tmp_fu_124_p0__temp = tmp_fu_124_p0 ;
   op7_fu_155_p1__temp = op7_fu_155_p1 ;
   op6_4_fu_178_p1__temp = op6_4_fu_178_p1 ;
   op3_fu_146_p0__temp = op3_fu_146_p0 ;
   op7_fu_155_p0__temp = op7_fu_155_p0 ;
   op8_fu_159_p0__temp = op8_fu_159_p0 ;
   op8_fu_159_p1__temp = op8_fu_159_p1 ;
   op6_1_fu_182_p3__temp = op6_1_fu_182_p3 ;
   op5_2_reg_251__temp = op5_2_reg_251 ;
   tmp_reg_257_temp__temp = tmp_reg_257_temp ;
   GG1__temp = GG1 ;
   op5_reg_246__temp = op5_reg_246 ;
   i1__temp = i1 ;
   op6_3_reg_277__temp = op6_3_reg_277 ;
   op13_reg_292__temp = op13_reg_292 ;
   ap_rst__temp = ap_rst ;
   op8_fu_159_p2__temp = op8_fu_159_p2 ;
   op8_reg_287__temp = op8_reg_287 ;
   op14_fu_204_p2__temp = op14_fu_204_p2 ;
   ap_done__temp = ap_done ;
   ap_ready__temp = ap_ready ;
   op7_fu_155_p2__temp = op7_fu_155_p2 ;
   op5_1_reg_262__temp = op5_1_reg_262 ;
   o1_ap_vld__temp = o1_ap_vld ;
   op4_reg_239__temp = op4_reg_239 ;
   op6_fu_163_p2__temp = op6_fu_163_p2 ;
   tmp1_fu_189_p2__temp = tmp1_fu_189_p2 ;
   ap_idle__temp = ap_idle ;
   op6_5_fu_171_p3__temp = op6_5_fu_171_p3 ;
   G1__temp = G1 ;
   tmp_6_reg_267_temp__temp = tmp_6_reg_267_temp ;
   ap_return__temp = ap_return ;
   op13_fu_194_p2__temp = op13_fu_194_p2 ;
   o1__temp = o1 ;
   op3_fu_146_p2__temp = op3_fu_146_p2 ;
   ap_CS_fsm__temp = ap_CS_fsm ;
   ap_clk__temp = ap_clk ;
   op5_1_fu_129_p2__temp = op5_1_fu_129_p2 ;
   op3_reg_272__temp = op3_reg_272 ;
   G4__temp = G4 ;
   op6_3_fu_151_p2__temp = op6_3_fu_151_p2 ;
   op6_4_fu_178_p2__temp = op6_4_fu_178_p2 ;
   tmp_fu_124_p2_temp__temp = tmp_fu_124_p2_temp ;
   i4__temp = i4 ;
   tmp_6_fu_141_p2__temp = tmp_6_fu_141_p2 ;
   i6__temp = i6 ;
   tmp2_fu_199_p2__temp = tmp2_fu_199_p2 ;
   op7_reg_282__temp = op7_reg_282 ;
   op14_reg_298__temp = op14_reg_298 ;
   op5_fu_112_p2__temp = op5_fu_112_p2 ;
   op5_3_fu_134_p3__temp = op5_3_fu_134_p3 ;
   o4__temp = o4 ;
   op4_fu_106_p2__temp = op4_fu_106_p2 ;
   i3__temp = i3 ;
   ap_start__temp = ap_start ;
   tmp_reg_257__temp = tmp_reg_257 ;
   i2__temp = i2 ;
   GG2__temp = GG2 ;
   G2__temp = G2 ;
   tmp_6_reg_267__temp = tmp_6_reg_267 ;
   tmp_fu_124_p2__temp = tmp_fu_124_p2 ;
   op5_2_fu_118_p2__temp = op5_2_fu_118_p2 ;
   G3__temp = G3 ;
   ap_NS_fsm__temp = ap_NS_fsm ;
   o3__temp = o3 ;
   o2_ap_vld__temp = o2_ap_vld ;
   op6_2_fu_167_p2__temp = op6_2_fu_167_p2 ;
   o2__temp = o2 ;

       if((ap_start == 0) && (1 == ap_CS_fsm_state1))
       {
           ap_idle =  1;
       }
   if(((1 == ap_CS_fsm_state1) && (ap_start == 1)) == 1){
       if((1 == ap_CS_fsm_state1) && (ap_start == 1))
       {
           op5_reg_246 =   G1 * i3 ;
           op5_2_reg_251 = i4  * i3 ;
           op4_reg_239 =   G2  * i1 ;
       }
       goto ap_ST_fsm_state2;
   }
   if(((1 == ap_CS_fsm_state1) && (ap_start == 1)) == 0){
       if((1 == ap_CS_fsm_state1) && (ap_start == 1))
       {
               op5_reg_246 =   G1  * i3 ;
               op5_2_reg_251 =   i4  * i3 ;
               op4_reg_239 =   G2  * i1;
       }
       goto ap_ST_fsm_state1;
   }

   ap_ST_fsm_state2:

	ap_CS_fsm_state1 = 0;
	ap_CS_fsm_state2 = 1;
	ap_CS_fsm_state3 = 0;
	ap_CS_fsm_state4 = 0;
	ap_CS_fsm_state5 = 0;
   op5_fu_112_p0__temp = op5_fu_112_p0 ;
   op5_2_fu_118_p1__temp = op5_2_fu_118_p1 ;
   op3_fu_146_p1__temp = op3_fu_146_p1 ;
   op6_3_fu_151_p0__temp = op6_3_fu_151_p0 ;
   tmp1_fu_189_p1__temp = tmp1_fu_189_p1 ;
   op6_3_fu_151_p1__temp = op6_3_fu_151_p1 ;
   op5_fu_112_p1__temp = op5_fu_112_p1 ;
   op4_fu_106_p0__temp = op4_fu_106_p0 ;
   op5_2_fu_118_p0__temp = op5_2_fu_118_p0 ;
   op4_fu_106_p1__temp = op4_fu_106_p1 ;
   tmp_fu_124_p0__temp = tmp_fu_124_p0 ;
   op7_fu_155_p1__temp = op7_fu_155_p1 ;
   op6_4_fu_178_p1__temp = op6_4_fu_178_p1 ;
   op3_fu_146_p0__temp = op3_fu_146_p0 ;
   op7_fu_155_p0__temp = op7_fu_155_p0 ;
   op8_fu_159_p0__temp = op8_fu_159_p0 ;
   op8_fu_159_p1__temp = op8_fu_159_p1 ;
   op6_1_fu_182_p3__temp = op6_1_fu_182_p3 ;
   op5_2_reg_251__temp = op5_2_reg_251 ;
   tmp_reg_257_temp__temp = tmp_reg_257_temp ;
   GG1__temp = GG1 ;
   op5_reg_246__temp = op5_reg_246 ;
   i1__temp = i1 ;
   op6_3_reg_277__temp = op6_3_reg_277 ;
   op13_reg_292__temp = op13_reg_292 ;
   ap_rst__temp = ap_rst ;
   op8_fu_159_p2__temp = op8_fu_159_p2 ;
   op8_reg_287__temp = op8_reg_287 ;
   op14_fu_204_p2__temp = op14_fu_204_p2 ;
   ap_done__temp = ap_done ;
   ap_ready__temp = ap_ready ;
   op7_fu_155_p2__temp = op7_fu_155_p2 ;
   op5_1_reg_262__temp = op5_1_reg_262 ;
   o1_ap_vld__temp = o1_ap_vld ;
   op4_reg_239__temp = op4_reg_239 ;
   op6_fu_163_p2__temp = op6_fu_163_p2 ;
   tmp1_fu_189_p2__temp = tmp1_fu_189_p2 ;
   ap_idle__temp = ap_idle ;
   op6_5_fu_171_p3__temp = op6_5_fu_171_p3 ;
   G1__temp = G1 ;
   tmp_6_reg_267_temp__temp = tmp_6_reg_267_temp ;
   ap_return__temp = ap_return ;
   op13_fu_194_p2__temp = op13_fu_194_p2 ;
   o1__temp = o1 ;
   op3_fu_146_p2__temp = op3_fu_146_p2 ;
   ap_CS_fsm__temp = ap_CS_fsm ;
   ap_clk__temp = ap_clk ;
   op5_1_fu_129_p2__temp = op5_1_fu_129_p2 ;
   op3_reg_272__temp = op3_reg_272 ;
   G4__temp = G4 ;
   op6_3_fu_151_p2__temp = op6_3_fu_151_p2 ;
   op6_4_fu_178_p2__temp = op6_4_fu_178_p2 ;
   tmp_fu_124_p2_temp__temp = tmp_fu_124_p2_temp ;
   i4__temp = i4 ;
   tmp_6_fu_141_p2__temp = tmp_6_fu_141_p2 ;
   i6__temp = i6 ;
   tmp2_fu_199_p2__temp = tmp2_fu_199_p2 ;
   op7_reg_282__temp = op7_reg_282 ;
   op14_reg_298__temp = op14_reg_298 ;
   op5_fu_112_p2__temp = op5_fu_112_p2 ;
   op5_3_fu_134_p3__temp = op5_3_fu_134_p3 ;
   o4__temp = o4 ;
   op4_fu_106_p2__temp = op4_fu_106_p2 ;
   i3__temp = i3 ;
   ap_start__temp = ap_start ;
   tmp_reg_257__temp = tmp_reg_257 ;
   i2__temp = i2 ;
   GG2__temp = GG2 ;
   G2__temp = G2 ;
   tmp_6_reg_267__temp = tmp_6_reg_267 ;
   tmp_fu_124_p2__temp = tmp_fu_124_p2 ;
   op5_2_fu_118_p2__temp = op5_2_fu_118_p2 ;
   G3__temp = G3 ;
   ap_NS_fsm__temp = ap_NS_fsm ;
   o3__temp = o3 ;
   o2_ap_vld__temp = o2_ap_vld ;
   op6_2_fu_167_p2__temp = op6_2_fu_167_p2 ;
   o2__temp = o2 ;

       if(1 == ap_CS_fsm_state2)
       {
           tmp_reg_257 =   ( G1  > 10 ? 1 :  0 ) ;
           tmp_6_reg_267 =   (  (  ( G1  > 10 ? 1 :  0 )  == 1 ?  ( op5_reg_246__temp  + GG1__temp )  :  op5_2_reg_251__temp  )  < op4_reg_239__temp  ? 1 : 0 ) ;
           op5_1_reg_262 =   op5_reg_246__temp  + GG1__temp ;
       }
       goto ap_ST_fsm_state3;

   ap_ST_fsm_state3:

	ap_CS_fsm_state1 = 0;
	ap_CS_fsm_state2 = 0;
	ap_CS_fsm_state3 = 1;
	ap_CS_fsm_state4 = 0;
	ap_CS_fsm_state5 = 0;
   op5_fu_112_p0__temp = op5_fu_112_p0 ;
   op5_2_fu_118_p1__temp = op5_2_fu_118_p1 ;
   op3_fu_146_p1__temp = op3_fu_146_p1 ;
   op6_3_fu_151_p0__temp = op6_3_fu_151_p0 ;
   tmp1_fu_189_p1__temp = tmp1_fu_189_p1 ;
   op6_3_fu_151_p1__temp = op6_3_fu_151_p1 ;
   op5_fu_112_p1__temp = op5_fu_112_p1 ;
   op4_fu_106_p0__temp = op4_fu_106_p0 ;
   op5_2_fu_118_p0__temp = op5_2_fu_118_p0 ;
   op4_fu_106_p1__temp = op4_fu_106_p1 ;
   tmp_fu_124_p0__temp = tmp_fu_124_p0 ;
   op7_fu_155_p1__temp = op7_fu_155_p1 ;
   op6_4_fu_178_p1__temp = op6_4_fu_178_p1 ;
   op3_fu_146_p0__temp = op3_fu_146_p0 ;
   op7_fu_155_p0__temp = op7_fu_155_p0 ;
   op8_fu_159_p0__temp = op8_fu_159_p0 ;
   op8_fu_159_p1__temp = op8_fu_159_p1 ;
   op6_1_fu_182_p3__temp = op6_1_fu_182_p3 ;
   op5_2_reg_251__temp = op5_2_reg_251 ;
   tmp_reg_257_temp__temp = tmp_reg_257_temp ;
   GG1__temp = GG1 ;
   op5_reg_246__temp = op5_reg_246 ;
   i1__temp = i1 ;
   op6_3_reg_277__temp = op6_3_reg_277 ;
   op13_reg_292__temp = op13_reg_292 ;
   ap_rst__temp = ap_rst ;
   op8_fu_159_p2__temp = op8_fu_159_p2 ;
   op8_reg_287__temp = op8_reg_287 ;
   op14_fu_204_p2__temp = op14_fu_204_p2 ;
   ap_done__temp = ap_done ;
   ap_ready__temp = ap_ready ;
   op7_fu_155_p2__temp = op7_fu_155_p2 ;
   op5_1_reg_262__temp = op5_1_reg_262 ;
   o1_ap_vld__temp = o1_ap_vld ;
   op4_reg_239__temp = op4_reg_239 ;
   op6_fu_163_p2__temp = op6_fu_163_p2 ;
   tmp1_fu_189_p2__temp = tmp1_fu_189_p2 ;
   ap_idle__temp = ap_idle ;
   op6_5_fu_171_p3__temp = op6_5_fu_171_p3 ;
   G1__temp = G1 ;
   tmp_6_reg_267_temp__temp = tmp_6_reg_267_temp ;
   ap_return__temp = ap_return ;
   op13_fu_194_p2__temp = op13_fu_194_p2 ;
   o1__temp = o1 ;
   op3_fu_146_p2__temp = op3_fu_146_p2 ;
   ap_CS_fsm__temp = ap_CS_fsm ;
   ap_clk__temp = ap_clk ;
   op5_1_fu_129_p2__temp = op5_1_fu_129_p2 ;
   op3_reg_272__temp = op3_reg_272 ;
   G4__temp = G4 ;
   op6_3_fu_151_p2__temp = op6_3_fu_151_p2 ;
   op6_4_fu_178_p2__temp = op6_4_fu_178_p2 ;
   tmp_fu_124_p2_temp__temp = tmp_fu_124_p2_temp ;
   i4__temp = i4 ;
   tmp_6_fu_141_p2__temp = tmp_6_fu_141_p2 ;
   i6__temp = i6 ;
   tmp2_fu_199_p2__temp = tmp2_fu_199_p2 ;
   op7_reg_282__temp = op7_reg_282 ;
   op14_reg_298__temp = op14_reg_298 ;
   op5_fu_112_p2__temp = op5_fu_112_p2 ;
   op5_3_fu_134_p3__temp = op5_3_fu_134_p3 ;
   o4__temp = o4 ;
   op4_fu_106_p2__temp = op4_fu_106_p2 ;
   i3__temp = i3 ;
   ap_start__temp = ap_start ;
   tmp_reg_257__temp = tmp_reg_257 ;
   i2__temp = i2 ;
   GG2__temp = GG2 ;
   G2__temp = G2 ;
   tmp_6_reg_267__temp = tmp_6_reg_267 ;
   tmp_fu_124_p2__temp = tmp_fu_124_p2 ;
   op5_2_fu_118_p2__temp = op5_2_fu_118_p2 ;
   G3__temp = G3 ;
   ap_NS_fsm__temp = ap_NS_fsm ;
   o3__temp = o3 ;
   o2_ap_vld__temp = o2_ap_vld ;
   op6_2_fu_167_p2__temp = op6_2_fu_167_p2 ;
   o2__temp = o2 ;

               tmp_reg_257 =  tmp_reg_257__temp ;
               tmp_6_reg_267 =  tmp_6_reg_267__temp ;
       if(((tmp_6_reg_267 == 0) && (tmp_reg_257 == 0)) && (1 == ap_CS_fsm_state3))
       {
           op3_reg_272 =   G1  * i2 ;
       }
       if((tmp_6_reg_267 == 1) && (1 == ap_CS_fsm_state3))
       {
           op6_3_reg_277 =   G2  * i4 ;
       }
       if(1 == ap_CS_fsm_state3)
       {
           op8_reg_287 =   G2  * i3 ;
           op7_reg_282 =   G1  * i4 ;
       }
       goto ap_ST_fsm_state4;

   ap_ST_fsm_state4:

	ap_CS_fsm_state1 = 0;
	ap_CS_fsm_state2 = 0;
	ap_CS_fsm_state3 = 0;
	ap_CS_fsm_state4 = 1;
	ap_CS_fsm_state5 = 0;
   op5_fu_112_p0__temp = op5_fu_112_p0 ;
   op5_2_fu_118_p1__temp = op5_2_fu_118_p1 ;
   op3_fu_146_p1__temp = op3_fu_146_p1 ;
   op6_3_fu_151_p0__temp = op6_3_fu_151_p0 ;
   tmp1_fu_189_p1__temp = tmp1_fu_189_p1 ;
   op6_3_fu_151_p1__temp = op6_3_fu_151_p1 ;
   op5_fu_112_p1__temp = op5_fu_112_p1 ;
   op4_fu_106_p0__temp = op4_fu_106_p0 ;
   op5_2_fu_118_p0__temp = op5_2_fu_118_p0 ;
   op4_fu_106_p1__temp = op4_fu_106_p1 ;
   tmp_fu_124_p0__temp = tmp_fu_124_p0 ;
   op7_fu_155_p1__temp = op7_fu_155_p1 ;
   op6_4_fu_178_p1__temp = op6_4_fu_178_p1 ;
   op3_fu_146_p0__temp = op3_fu_146_p0 ;
   op7_fu_155_p0__temp = op7_fu_155_p0 ;
   op8_fu_159_p0__temp = op8_fu_159_p0 ;
   op8_fu_159_p1__temp = op8_fu_159_p1 ;
   op6_1_fu_182_p3__temp = op6_1_fu_182_p3 ;
   op5_2_reg_251__temp = op5_2_reg_251 ;
   tmp_reg_257_temp__temp = tmp_reg_257_temp ;
   GG1__temp = GG1 ;
   op5_reg_246__temp = op5_reg_246 ;
   i1__temp = i1 ;
   op6_3_reg_277__temp = op6_3_reg_277 ;
   op13_reg_292__temp = op13_reg_292 ;
   ap_rst__temp = ap_rst ;
   op8_fu_159_p2__temp = op8_fu_159_p2 ;
   op8_reg_287__temp = op8_reg_287 ;
   op14_fu_204_p2__temp = op14_fu_204_p2 ;
   ap_done__temp = ap_done ;
   ap_ready__temp = ap_ready ;
   op7_fu_155_p2__temp = op7_fu_155_p2 ;
   op5_1_reg_262__temp = op5_1_reg_262 ;
   o1_ap_vld__temp = o1_ap_vld ;
   op4_reg_239__temp = op4_reg_239 ;
   op6_fu_163_p2__temp = op6_fu_163_p2 ;
   tmp1_fu_189_p2__temp = tmp1_fu_189_p2 ;
   ap_idle__temp = ap_idle ;
   op6_5_fu_171_p3__temp = op6_5_fu_171_p3 ;
   G1__temp = G1 ;
   tmp_6_reg_267_temp__temp = tmp_6_reg_267_temp ;
   ap_return__temp = ap_return ;
   op13_fu_194_p2__temp = op13_fu_194_p2 ;
   o1__temp = o1 ;
   op3_fu_146_p2__temp = op3_fu_146_p2 ;
   ap_CS_fsm__temp = ap_CS_fsm ;
   ap_clk__temp = ap_clk ;
   op5_1_fu_129_p2__temp = op5_1_fu_129_p2 ;
   op3_reg_272__temp = op3_reg_272 ;
   G4__temp = G4 ;
   op6_3_fu_151_p2__temp = op6_3_fu_151_p2 ;
   op6_4_fu_178_p2__temp = op6_4_fu_178_p2 ;
   tmp_fu_124_p2_temp__temp = tmp_fu_124_p2_temp ;
   i4__temp = i4 ;
   tmp_6_fu_141_p2__temp = tmp_6_fu_141_p2 ;
   i6__temp = i6 ;
   tmp2_fu_199_p2__temp = tmp2_fu_199_p2 ;
   op7_reg_282__temp = op7_reg_282 ;
   op14_reg_298__temp = op14_reg_298 ;
   op5_fu_112_p2__temp = op5_fu_112_p2 ;
   op5_3_fu_134_p3__temp = op5_3_fu_134_p3 ;
   o4__temp = o4 ;
   op4_fu_106_p2__temp = op4_fu_106_p2 ;
   i3__temp = i3 ;
   ap_start__temp = ap_start ;
   tmp_reg_257__temp = tmp_reg_257 ;
   i2__temp = i2 ;
   GG2__temp = GG2 ;
   G2__temp = G2 ;
   tmp_6_reg_267__temp = tmp_6_reg_267 ;
   tmp_fu_124_p2__temp = tmp_fu_124_p2 ;
   op5_2_fu_118_p2__temp = op5_2_fu_118_p2 ;
   G3__temp = G3 ;
   ap_NS_fsm__temp = ap_NS_fsm ;
   o3__temp = o3 ;
   o2_ap_vld__temp = o2_ap_vld ;
   op6_2_fu_167_p2__temp = op6_2_fu_167_p2 ;
   o2__temp = o2 ;

       if(1 == ap_CS_fsm_state4)
       {
           op14_reg_298 =   op8_reg_287__temp  + i6__temp  + op7_reg_282__temp ;
           op13_reg_292 =   ((tmp_6_reg_267__temp  == 1) ?  (op6_3_reg_277__temp - i3)  :   ((tmp_reg_257__temp  == 1) ?  (op5_1_reg_262__temp  - op4_reg_239__temp)  :   ( op5_2_reg_251__temp  - op3_reg_272__temp))) + G1  + op4_reg_239__temp;
       }
       goto ap_ST_fsm_state5;

   ap_ST_fsm_state5:

	ap_CS_fsm_state1 = 0;
	ap_CS_fsm_state2 = 0;
	ap_CS_fsm_state3 = 0;
	ap_CS_fsm_state4 = 0;
	ap_CS_fsm_state5 = 1;
   op5_fu_112_p0__temp = op5_fu_112_p0 ;
   op5_2_fu_118_p1__temp = op5_2_fu_118_p1 ;
   op3_fu_146_p1__temp = op3_fu_146_p1 ;
   op6_3_fu_151_p0__temp = op6_3_fu_151_p0 ;
   tmp1_fu_189_p1__temp = tmp1_fu_189_p1 ;
   op6_3_fu_151_p1__temp = op6_3_fu_151_p1 ;
   op5_fu_112_p1__temp = op5_fu_112_p1 ;
   op4_fu_106_p0__temp = op4_fu_106_p0 ;
   op5_2_fu_118_p0__temp = op5_2_fu_118_p0 ;
   op4_fu_106_p1__temp = op4_fu_106_p1 ;
   tmp_fu_124_p0__temp = tmp_fu_124_p0 ;
   op7_fu_155_p1__temp = op7_fu_155_p1 ;
   op6_4_fu_178_p1__temp = op6_4_fu_178_p1 ;
   op3_fu_146_p0__temp = op3_fu_146_p0 ;
   op7_fu_155_p0__temp = op7_fu_155_p0 ;
   op8_fu_159_p0__temp = op8_fu_159_p0 ;
   op8_fu_159_p1__temp = op8_fu_159_p1 ;
   op6_1_fu_182_p3__temp = op6_1_fu_182_p3 ;
   op5_2_reg_251__temp = op5_2_reg_251 ;
   tmp_reg_257_temp__temp = tmp_reg_257_temp ;
   GG1__temp = GG1 ;
   op5_reg_246__temp = op5_reg_246 ;
   i1__temp = i1 ;
   op6_3_reg_277__temp = op6_3_reg_277 ;
   op13_reg_292__temp = op13_reg_292 ;
   ap_rst__temp = ap_rst ;
   op8_fu_159_p2__temp = op8_fu_159_p2 ;
   op8_reg_287__temp = op8_reg_287 ;
   op14_fu_204_p2__temp = op14_fu_204_p2 ;
   ap_done__temp = ap_done ;
   ap_ready__temp = ap_ready ;
   op7_fu_155_p2__temp = op7_fu_155_p2 ;
   op5_1_reg_262__temp = op5_1_reg_262 ;
   o1_ap_vld__temp = o1_ap_vld ;
   op4_reg_239__temp = op4_reg_239 ;
   op6_fu_163_p2__temp = op6_fu_163_p2 ;
   tmp1_fu_189_p2__temp = tmp1_fu_189_p2 ;
   ap_idle__temp = ap_idle ;
   op6_5_fu_171_p3__temp = op6_5_fu_171_p3 ;
   G1__temp = G1 ;
   tmp_6_reg_267_temp__temp = tmp_6_reg_267_temp ;
   ap_return__temp = ap_return ;
   op13_fu_194_p2__temp = op13_fu_194_p2 ;
   o1__temp = o1 ;
   op3_fu_146_p2__temp = op3_fu_146_p2 ;
   ap_CS_fsm__temp = ap_CS_fsm ;
   ap_clk__temp = ap_clk ;
   op5_1_fu_129_p2__temp = op5_1_fu_129_p2 ;
   op3_reg_272__temp = op3_reg_272 ;
   G4__temp = G4 ;
   op6_3_fu_151_p2__temp = op6_3_fu_151_p2 ;
   op6_4_fu_178_p2__temp = op6_4_fu_178_p2 ;
   tmp_fu_124_p2_temp__temp = tmp_fu_124_p2_temp ;
   i4__temp = i4 ;
   tmp_6_fu_141_p2__temp = tmp_6_fu_141_p2 ;
   i6__temp = i6 ;
   tmp2_fu_199_p2__temp = tmp2_fu_199_p2 ;
   op7_reg_282__temp = op7_reg_282 ;
   op14_reg_298__temp = op14_reg_298 ;
   op5_fu_112_p2__temp = op5_fu_112_p2 ;
   op5_3_fu_134_p3__temp = op5_3_fu_134_p3 ;
   o4__temp = o4 ;
   op4_fu_106_p2__temp = op4_fu_106_p2 ;
   i3__temp = i3 ;
   ap_start__temp = ap_start ;
   tmp_reg_257__temp = tmp_reg_257 ;
   i2__temp = i2 ;
   GG2__temp = GG2 ;
   G2__temp = G2 ;
   tmp_6_reg_267__temp = tmp_6_reg_267 ;
   tmp_fu_124_p2__temp = tmp_fu_124_p2 ;
   op5_2_fu_118_p2__temp = op5_2_fu_118_p2 ;
   G3__temp = G3 ;
   ap_NS_fsm__temp = ap_NS_fsm ;
   o3__temp = o3 ;
   o2_ap_vld__temp = o2_ap_vld ;
   op6_2_fu_167_p2__temp = op6_2_fu_167_p2 ;
   o2__temp = o2 ;

       if(1 == ap_CS_fsm_state5)
       {
           ap_done =  1;
			if(ap_done==1){
          ap_return =  op13_reg_292 + op14_reg_298 ;
			}
       }
       if(1 == ap_CS_fsm_state5)
       {
           ap_ready =  1;
       }
       if(1 == ap_CS_fsm_state5)
       {
           o1_ap_vld =  1;
               o1 =   ( op13_reg_292__temp  & 4294967295 ) ;
               o2 =   ( op14_reg_298__temp  & 4294967295 ) ;
       }
       if(1 == ap_CS_fsm_state5)
       {
           o2_ap_vld =  1;
               o1 =   ( op13_reg_292__temp  & 4294967295 ) ;
               o2 =   ( op14_reg_298__temp  & 4294967295 ) ;
       }
       if(ap_done==1){
       	goto end;
       }
       goto ap_ST_fsm_state1;
   end:
	printf("%lld\n",ap_return);
	*G1__1=G1;
	*G2__1=G2;
	*G3__1=G3;
	*G4__1=G4;
	*GG1__1=GG1;
	*GG2__1=GG2;
	*ap_clk__1=ap_clk;
	*ap_done__1=ap_done;
	*ap_idle__1=ap_idle;
	*ap_ready__1=ap_ready;
	*ap_return__1=ap_return;
	*ap_rst__1=ap_rst;
	*ap_start__1=ap_start;
	*i1__1=i1;
	*i2__1=i2;
	*i3__1=i3;
	*i4__1=i4;
	*i6__1=i6;
	*o1__1=o1;
	*o1_ap_vld__1=o1_ap_vld;
	*o2__1=o2;
	*o2_ap_vld__1=o2_ap_vld;
	*o3__1=o3;
	*o4__1=o4;
       return;
}

int main(){
	for(int i=0; i<100; i++){
		long long int ap_clk__1 = 1;
		long long int ap_done__1 = 0;
		long long int ap_idle__1 = 0;
		long long int ap_ready__1 = 1;
		long long int ap_return__1 = 0;
		//long long int ap_return1_ap_vld__1 = 0;
		long long int ap_rst__1 = 0;
		long long int ap_start__1 = 1;
		long long int i1__1; 
		long long int i2__1;
		long long int i3__1;
		long long int i4__1;
		long long int i6__1;
		long long int o1__1;
		long long int o1_ap_vld__1;
		long long int o2__1;
		long long int o2_ap_vld__1;
		long long int o3__1;
		long long int o4__1;
		long long int G1__1;
		long long int G2__1;
		long long int G3__1; 
		long long int G4__1; 
		long long int GG1__1; 
		long long int GG2__1; 

		scanf("%llu %llu %llu %llu %llu %llu %llu %llu %llu %llu %llu %llu %llu %llu %llu",&i1__1,&i2__1,&i3__1,&i4__1,&i6__1,&o1__1,&o2__1,&o3__1,&o4__1,&G1__1,&G2__1,&G3__1,&G4__1,&GG1__1,&GG2__1);	
		int dummy = 1;
	hls_macc(&ap_clk__1,&ap_done__1,&ap_idle__1,&ap_ready__1,&ap_return__1,&ap_rst__1,&ap_start__1,&i1__1,&i2__1,&i3__1,&i4__1,&i6__1,&o1__1,&o1_ap_vld__1,&o2__1,&o2_ap_vld__1,&o3__1,&o4__1,&G1__1,&G2__1,&G3__1,&G4__1,&GG1__1,&GG2__1,dummy);
}
return 0;

}
//16 9 5 16 15 11 7 4 -2 -10 4 3 -16 13 6