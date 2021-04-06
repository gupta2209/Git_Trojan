#include<stdio.h>

void hls_macc(long long int *ap_clk__1,long long int *ap_done__1,long long int *ap_idle__1,long long int *ap_ready__1,long long int *ap_return1__1,long long int *ap_rst__1,long long int *ap_start__1,long long int *i1__1,long long int *i2__1,long long int *i3__1,long long int *i4__1,long long int *i6__1,long long int *o1__1,long long int *o1_ap_vld__1,long long int *o2__1,long long int *o2_ap_vld__1,long long int *o3__1,long long int *o4__1,long long int *G1__1,long long int *G2__1,long long int *G3__1,long long int *G4__1,long long int *GG1__1,long long int *GG2__1,long long int *trigger__1,int dummy){
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
long long int ap_return1=*ap_return1__1;
//long long int ap_return1_ap_vld=*ap_return1_ap_vld;
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
long long int trigger=*trigger__1;
   long long int add_ln47_fu_210_p1=0;
   long long int add_ln47_fu_210_p1__temp=0;
   long long int ap_CS_fsm_state1=0;
   long long int ap_CS_fsm_state2=0;
   long long int ap_CS_fsm_state3=0;
   long long int ap_CS_fsm_state4=0;
   long long int ap_CS_fsm_state5=0;
   long long int ap_CS_fsm_state6=0;
   long long int ap_CS_fsm_state7=0;
   long long int icmp_ln16_fu_145_p0=0;
   long long int icmp_ln16_fu_145_p0__temp=0;
   long long int op3_fu_167_p0=0;
   long long int op3_fu_167_p0__temp=0;
   long long int op3_fu_167_p1=0;
   long long int op3_fu_167_p1__temp=0;
   long long int op4_fu_127_p0=0;
   long long int op4_fu_127_p0__temp=0;
   long long int op4_fu_127_p1=0;
   long long int op4_fu_127_p1__temp=0;
   long long int op5_2_fu_139_p0=0;
   long long int op5_2_fu_139_p0__temp=0;
   long long int op5_2_fu_139_p1=0;
   long long int op5_2_fu_139_p1__temp=0;
   long long int op5_fu_133_p0=0;
   long long int op5_fu_133_p0__temp=0;
   long long int op5_fu_133_p1=0;
   long long int op5_fu_133_p1__temp=0;
   long long int op6_3_fu_172_p0=0;
   long long int op6_3_fu_172_p0__temp=0;
   long long int op6_3_fu_172_p1=0;
   long long int op6_3_fu_172_p1__temp=0;
   long long int op6_4_fu_199_p1=0;
   long long int op6_4_fu_199_p1__temp=0;
   long long int op7_fu_176_p0=0;
   long long int op7_fu_176_p0__temp=0;
   long long int op7_fu_176_p1=0;
   long long int op7_fu_176_p1__temp=0;
   long long int op8_fu_180_p0=0;
   long long int op8_fu_180_p0__temp=0;
   long long int op8_fu_180_p1=0;
   long long int op8_fu_180_p1__temp=0;
   long long int G1__temp=0;
   long long int G2__temp=0;
   long long int G3__temp=0;
   long long int G4__temp=0;
   long long int GG1__temp=0;
   long long int GG2__temp=0;
   long long int add_ln47_fu_210_p2=0;
   long long int add_ln47_fu_210_p2__temp=0;
   long long int add_ln49_fu_220_p2=0;
   long long int add_ln49_fu_220_p2__temp=0;
   long long int add_ln52_1_fu_236_p2=0;
   long long int add_ln52_1_fu_236_p2__temp=0;
   long long int add_ln52_fu_230_p2=0;
   long long int add_ln52_fu_230_p2__temp=0;
   long long int ap_CS_fsm=0;
   long long int ap_CS_fsm__temp=0;
   long long int ap_NS_fsm=0;
   long long int ap_NS_fsm__temp=0;
   long long int ap_clk__temp=0;
   long long int ap_done__temp=0;
   long long int ap_idle__temp=0;
   long long int ap_ready__temp=0;
   long long int ap_return1__temp=0;
   //long long int ap_return1_ap_vld__temp=0;
   long long int ap_rst__temp=0;
   long long int ap_start__temp=0;
   long long int i1__temp=0;
   long long int i2__temp=0;
   long long int i3__temp=0;
   long long int i4__temp=0;
   long long int i6__temp=0;
   long long int icmp_ln16_fu_145_p2=0;
   long long int icmp_ln16_fu_145_p2__temp=0;
   long long int icmp_ln16_fu_145_p2_temp_0=0;
   long long int icmp_ln16_fu_145_p2_temp_0__temp=0;
   long long int icmp_ln16_reg_291=0;
   long long int icmp_ln16_reg_291__temp=0;
   long long int icmp_ln16_reg_291_temp_1=0;
   long long int icmp_ln16_reg_291_temp_1__temp=0;
   long long int icmp_ln27_fu_162_p2=0;
   long long int icmp_ln27_fu_162_p2__temp=0;
   long long int icmp_ln27_reg_301=0;
   long long int icmp_ln27_reg_301__temp=0;
   long long int icmp_ln27_reg_301_temp_2=0;
   long long int icmp_ln27_reg_301_temp_2__temp=0;
   long long int o1__temp=0;
   long long int o1_ap_vld__temp=0;
   long long int o2__temp=0;
   long long int o2_ap_vld__temp=0;
   long long int o3__temp=0;
   long long int o4__temp=0;
   long long int op13_fu_215_p2=0;
   long long int op13_fu_215_p2__temp=0;
   long long int op13_reg_326=0;
   long long int op13_reg_326__temp=0;
   long long int op14_fu_225_p2=0;
   long long int op14_fu_225_p2__temp=0;
   long long int op14_reg_332=0;
   long long int op14_reg_332__temp=0;
   long long int op3_fu_167_p2=0;
   long long int op3_fu_167_p2__temp=0;
   long long int op3_reg_306=0;
   long long int op3_reg_306__temp=0;
   long long int op4_fu_127_p2=0;
   long long int op4_fu_127_p2__temp=0;
   long long int op4_reg_273=0;
   long long int op4_reg_273__temp=0;
   long long int op5_1_fu_150_p2=0;
   long long int op5_1_fu_150_p2__temp=0;
   long long int op5_1_reg_296=0;
   long long int op5_1_reg_296__temp=0;
   long long int op5_2_fu_139_p2=0;
   long long int op5_2_fu_139_p2__temp=0;
   long long int op5_2_reg_285=0;
   long long int op5_2_reg_285__temp=0;
   long long int op5_3_fu_155_p3=0;
   long long int op5_3_fu_155_p3__temp=0;
   long long int op5_fu_133_p2=0;
   long long int op5_fu_133_p2__temp=0;
   long long int op5_reg_280=0;
   long long int op5_reg_280__temp=0;
   long long int op6_1_fu_188_p2=0;
   long long int op6_1_fu_188_p2__temp=0;
   long long int op6_2_fu_192_p3=0;
   long long int op6_2_fu_192_p3__temp=0;
   long long int op6_3_fu_172_p2=0;
   long long int op6_3_fu_172_p2__temp=0;
   long long int op6_3_reg_311=0;
   long long int op6_3_reg_311__temp=0;
   long long int op6_4_fu_199_p2=0;
   long long int op6_4_fu_199_p2__temp=0;
   long long int op6_5_fu_203_p3=0;
   long long int op6_5_fu_203_p3__temp=0;
   long long int op6_fu_184_p2=0;
   long long int op6_fu_184_p2__temp=0;
   long long int op7_fu_176_p2=0;
   long long int op7_fu_176_p2__temp=0;
   long long int op7_reg_316=0;
   long long int op7_reg_316__temp=0;
   long long int op8_fu_180_p2=0;
   long long int op8_fu_180_p2__temp=0;
   long long int op8_reg_321=0;
   long long int op8_reg_321__temp=0;
   long long int trigger__temp=0;
    ap_done=0;
    ap_start=1;

   ap_ST_fsm_state1:

    ap_CS_fsm_state1 = 1;
    ap_CS_fsm_state2 = 0;
    ap_CS_fsm_state3 = 0;
    ap_CS_fsm_state4 = 0;
    ap_CS_fsm_state5 = 0;
    ap_CS_fsm_state6 = 0;
    ap_CS_fsm_state7 = 0;
   op8_fu_180_p0__temp = op8_fu_180_p0 ;
   icmp_ln16_fu_145_p0__temp = icmp_ln16_fu_145_p0 ;
   op4_fu_127_p0__temp = op4_fu_127_p0 ;
   op5_2_fu_139_p0__temp = op5_2_fu_139_p0 ;
   op8_fu_180_p1__temp = op8_fu_180_p1 ;
   op6_3_fu_172_p0__temp = op6_3_fu_172_p0 ;
   op6_4_fu_199_p1__temp = op6_4_fu_199_p1 ;
   op5_2_fu_139_p1__temp = op5_2_fu_139_p1 ;
   add_ln47_fu_210_p1__temp = add_ln47_fu_210_p1 ;
   op7_fu_176_p1__temp = op7_fu_176_p1 ;
   op6_3_fu_172_p1__temp = op6_3_fu_172_p1 ;
   op4_fu_127_p1__temp = op4_fu_127_p1 ;
   op3_fu_167_p0__temp = op3_fu_167_p0 ;
   op3_fu_167_p1__temp = op3_fu_167_p1 ;
   op5_fu_133_p1__temp = op5_fu_133_p1 ;
   op7_fu_176_p0__temp = op7_fu_176_p0 ;
   op5_fu_133_p0__temp = op5_fu_133_p0 ;
   o2__temp = o2 ;
   i3__temp = i3 ;
   op6_2_fu_192_p3__temp = op6_2_fu_192_p3 ;
   ap_clk__temp = ap_clk ;
   op6_3_fu_172_p2__temp = op6_3_fu_172_p2 ;
   i2__temp = i2 ;
   o2_ap_vld__temp = o2_ap_vld ;
   add_ln52_1_fu_236_p2__temp = add_ln52_1_fu_236_p2 ;
   add_ln52_fu_230_p2__temp = add_ln52_fu_230_p2 ;
   add_ln49_fu_220_p2__temp = add_ln49_fu_220_p2 ;
   i4__temp = i4 ;
   op4_reg_273__temp = op4_reg_273 ;
   o1__temp = o1 ;
   op6_5_fu_203_p3__temp = op6_5_fu_203_p3 ;
   op5_1_reg_296__temp = op5_1_reg_296 ;
   op5_fu_133_p2__temp = op5_fu_133_p2 ;
   icmp_ln16_reg_291_temp_1__temp = icmp_ln16_reg_291_temp_1 ;
   G1__temp = G1 ;
   o3__temp = o3 ;
   op13_reg_326__temp = op13_reg_326 ;
   ap_done__temp = ap_done ;
   icmp_ln27_fu_162_p2__temp = icmp_ln27_fu_162_p2 ;
   ap_rst__temp = ap_rst ;
   op6_fu_184_p2__temp = op6_fu_184_p2 ;
   icmp_ln27_reg_301_temp_2__temp = icmp_ln27_reg_301_temp_2 ;
   op13_fu_215_p2__temp = op13_fu_215_p2 ;
   op5_2_reg_285__temp = op5_2_reg_285 ;
   ap_idle__temp = ap_idle ;
   ap_return1__temp = ap_return1 ;
   op5_1_fu_150_p2__temp = op5_1_fu_150_p2 ;
   G2__temp = G2 ;
   op4_fu_127_p2__temp = op4_fu_127_p2 ;
   op14_fu_225_p2__temp = op14_fu_225_p2 ;
   icmp_ln16_reg_291__temp = icmp_ln16_reg_291 ;
   ap_start__temp = ap_start ;
   i6__temp = i6 ;
   op6_1_fu_188_p2__temp = op6_1_fu_188_p2 ;
   //ap_return1_ap_vld__temp = ap_return1_ap_vld ;
   icmp_ln16_fu_145_p2__temp = icmp_ln16_fu_145_p2 ;
   GG2__temp = GG2 ;
   GG1__temp = GG1 ;
   ap_NS_fsm__temp = ap_NS_fsm ;
   o4__temp = o4 ;
   ap_CS_fsm__temp = ap_CS_fsm ;
   op6_3_reg_311__temp = op6_3_reg_311 ;
   icmp_ln16_fu_145_p2_temp_0__temp = icmp_ln16_fu_145_p2_temp_0 ;
   i1__temp = i1 ;
   op3_reg_306__temp = op3_reg_306 ;
   o1_ap_vld__temp = o1_ap_vld ;
   op3_fu_167_p2__temp = op3_fu_167_p2 ;
   G4__temp = G4 ;
   op14_reg_332__temp = op14_reg_332 ;
   op8_reg_321__temp = op8_reg_321 ;
   op5_3_fu_155_p3__temp = op5_3_fu_155_p3 ;
   G3__temp = G3 ;
   op5_reg_280__temp = op5_reg_280 ;
   op5_2_fu_139_p2__temp = op5_2_fu_139_p2 ;
   op7_reg_316__temp = op7_reg_316 ;
   trigger__temp = trigger ;
   op8_fu_180_p2__temp = op8_fu_180_p2 ;
   icmp_ln27_reg_301__temp = icmp_ln27_reg_301 ;
   op7_fu_176_p2__temp = op7_fu_176_p2 ;
   add_ln47_fu_210_p2__temp = add_ln47_fu_210_p2 ;
   op6_4_fu_199_p2__temp = op6_4_fu_199_p2 ;
   ap_ready__temp = ap_ready ;

       if((ap_start == 0) && (1 == ap_CS_fsm_state1))
       {
           ap_idle =  1;
       }
   if(((1 == ap_CS_fsm_state1) && (ap_start == 1)) == 1){
       if((1 == ap_CS_fsm_state1) && (ap_start == 1))
       {
           op5_reg_280 =   G1  * i3 ;
           op5_2_reg_285 =   i4  * i3 ;
           op4_reg_273 =   G2  * i1 ;
       }
       goto ap_ST_fsm_state2;
   }
   if(((1 == ap_CS_fsm_state1) && (ap_start == 1)) == 0){
       if((1 == ap_CS_fsm_state1) && (ap_start == 1))
       {
               op5_reg_280 =   G1  * i3 ;
           op5_2_reg_285 =   i4  * i3 ;
           op4_reg_273 =   G2  * i1 ;
       }
       goto ap_ST_fsm_state1;
   }

   ap_ST_fsm_state2:

    ap_CS_fsm_state1 = 0;
    ap_CS_fsm_state2 = 1;
    ap_CS_fsm_state3 = 0;
    ap_CS_fsm_state4 = 0;
    ap_CS_fsm_state5 = 0;
    ap_CS_fsm_state6 = 0;
    ap_CS_fsm_state7 = 0;
   op8_fu_180_p0__temp = op8_fu_180_p0 ;
   icmp_ln16_fu_145_p0__temp = icmp_ln16_fu_145_p0 ;
   op4_fu_127_p0__temp = op4_fu_127_p0 ;
   op5_2_fu_139_p0__temp = op5_2_fu_139_p0 ;
   op8_fu_180_p1__temp = op8_fu_180_p1 ;
   op6_3_fu_172_p0__temp = op6_3_fu_172_p0 ;
   op6_4_fu_199_p1__temp = op6_4_fu_199_p1 ;
   op5_2_fu_139_p1__temp = op5_2_fu_139_p1 ;
   add_ln47_fu_210_p1__temp = add_ln47_fu_210_p1 ;
   op7_fu_176_p1__temp = op7_fu_176_p1 ;
   op6_3_fu_172_p1__temp = op6_3_fu_172_p1 ;
   op4_fu_127_p1__temp = op4_fu_127_p1 ;
   op3_fu_167_p0__temp = op3_fu_167_p0 ;
   op3_fu_167_p1__temp = op3_fu_167_p1 ;
   op5_fu_133_p1__temp = op5_fu_133_p1 ;
   op7_fu_176_p0__temp = op7_fu_176_p0 ;
   op5_fu_133_p0__temp = op5_fu_133_p0 ;
   o2__temp = o2 ;
   i3__temp = i3 ;
   op6_2_fu_192_p3__temp = op6_2_fu_192_p3 ;
   ap_clk__temp = ap_clk ;
   op6_3_fu_172_p2__temp = op6_3_fu_172_p2 ;
   i2__temp = i2 ;
   o2_ap_vld__temp = o2_ap_vld ;
   add_ln52_1_fu_236_p2__temp = add_ln52_1_fu_236_p2 ;
   add_ln52_fu_230_p2__temp = add_ln52_fu_230_p2 ;
   add_ln49_fu_220_p2__temp = add_ln49_fu_220_p2 ;
   i4__temp = i4 ;
   op4_reg_273__temp = op4_reg_273 ;
   o1__temp = o1 ;
   op6_5_fu_203_p3__temp = op6_5_fu_203_p3 ;
   op5_1_reg_296__temp = op5_1_reg_296 ;
   op5_fu_133_p2__temp = op5_fu_133_p2 ;
   icmp_ln16_reg_291_temp_1__temp = icmp_ln16_reg_291_temp_1 ;
   G1__temp = G1 ;
   o3__temp = o3 ;
   op13_reg_326__temp = op13_reg_326 ;
   ap_done__temp = ap_done ;
   icmp_ln27_fu_162_p2__temp = icmp_ln27_fu_162_p2 ;
   ap_rst__temp = ap_rst ;
   op6_fu_184_p2__temp = op6_fu_184_p2 ;
   icmp_ln27_reg_301_temp_2__temp = icmp_ln27_reg_301_temp_2 ;
   op13_fu_215_p2__temp = op13_fu_215_p2 ;
   op5_2_reg_285__temp = op5_2_reg_285 ;
   ap_idle__temp = ap_idle ;
   ap_return1__temp = ap_return1 ;
   op5_1_fu_150_p2__temp = op5_1_fu_150_p2 ;
   G2__temp = G2 ;
   op4_fu_127_p2__temp = op4_fu_127_p2 ;
   op14_fu_225_p2__temp = op14_fu_225_p2 ;
   icmp_ln16_reg_291__temp = icmp_ln16_reg_291 ;
   ap_start__temp = ap_start ;
   i6__temp = i6 ;
   op6_1_fu_188_p2__temp = op6_1_fu_188_p2 ;
   //ap_return1_ap_vld__temp = ap_return1_ap_vld ;
   icmp_ln16_fu_145_p2__temp = icmp_ln16_fu_145_p2 ;
   GG2__temp = GG2 ;
   GG1__temp = GG1 ;
   ap_NS_fsm__temp = ap_NS_fsm ;
   o4__temp = o4 ;
   ap_CS_fsm__temp = ap_CS_fsm ;
   op6_3_reg_311__temp = op6_3_reg_311 ;
   icmp_ln16_fu_145_p2_temp_0__temp = icmp_ln16_fu_145_p2_temp_0 ;
   i1__temp = i1 ;
   op3_reg_306__temp = op3_reg_306 ;
   o1_ap_vld__temp = o1_ap_vld ;
   op3_fu_167_p2__temp = op3_fu_167_p2 ;
   G4__temp = G4 ;
   op14_reg_332__temp = op14_reg_332 ;
   op8_reg_321__temp = op8_reg_321 ;
   op5_3_fu_155_p3__temp = op5_3_fu_155_p3 ;
   G3__temp = G3 ;
   op5_reg_280__temp = op5_reg_280 ;
   op5_2_fu_139_p2__temp = op5_2_fu_139_p2 ;
   op7_reg_316__temp = op7_reg_316 ;
   trigger__temp = trigger ;
   op8_fu_180_p2__temp = op8_fu_180_p2 ;
   icmp_ln27_reg_301__temp = icmp_ln27_reg_301 ;
   op7_fu_176_p2__temp = op7_fu_176_p2 ;
   add_ln47_fu_210_p2__temp = add_ln47_fu_210_p2 ;
   op6_4_fu_199_p2__temp = op6_4_fu_199_p2 ;
   ap_ready__temp = ap_ready ;

       if(1 == ap_CS_fsm_state2)
       {
           op5_1_reg_296 =   op5_reg_280__temp  + GG1__temp ;
           icmp_ln27_reg_301 =   (((G1  > 10  ? 1 :  0)  == 1 ?  ( op5_reg_280__temp  +  GG1__temp)  :  op5_2_reg_285__temp )  < op4_reg_273__temp  ? 1 : 0);
           icmp_ln16_reg_291 =   G1  > 10  ? 1 :  0 ;
       }
       goto ap_ST_fsm_state3;

   ap_ST_fsm_state3:

    ap_CS_fsm_state1 = 0;
    ap_CS_fsm_state2 = 0;
    ap_CS_fsm_state3 = 1;
    ap_CS_fsm_state4 = 0;
    ap_CS_fsm_state5 = 0;
    ap_CS_fsm_state6 = 0;
    ap_CS_fsm_state7 = 0;
   op8_fu_180_p0__temp = op8_fu_180_p0 ;
   icmp_ln16_fu_145_p0__temp = icmp_ln16_fu_145_p0 ;
   op4_fu_127_p0__temp = op4_fu_127_p0 ;
   op5_2_fu_139_p0__temp = op5_2_fu_139_p0 ;
   op8_fu_180_p1__temp = op8_fu_180_p1 ;
   op6_3_fu_172_p0__temp = op6_3_fu_172_p0 ;
   op6_4_fu_199_p1__temp = op6_4_fu_199_p1 ;
   op5_2_fu_139_p1__temp = op5_2_fu_139_p1 ;
   add_ln47_fu_210_p1__temp = add_ln47_fu_210_p1 ;
   op7_fu_176_p1__temp = op7_fu_176_p1 ;
   op6_3_fu_172_p1__temp = op6_3_fu_172_p1 ;
   op4_fu_127_p1__temp = op4_fu_127_p1 ;
   op3_fu_167_p0__temp = op3_fu_167_p0 ;
   op3_fu_167_p1__temp = op3_fu_167_p1 ;
   op5_fu_133_p1__temp = op5_fu_133_p1 ;
   op7_fu_176_p0__temp = op7_fu_176_p0 ;
   op5_fu_133_p0__temp = op5_fu_133_p0 ;
   o2__temp = o2 ;
   i3__temp = i3 ;
   op6_2_fu_192_p3__temp = op6_2_fu_192_p3 ;
   ap_clk__temp = ap_clk ;
   op6_3_fu_172_p2__temp = op6_3_fu_172_p2 ;
   i2__temp = i2 ;
   o2_ap_vld__temp = o2_ap_vld ;
   add_ln52_1_fu_236_p2__temp = add_ln52_1_fu_236_p2 ;
   add_ln52_fu_230_p2__temp = add_ln52_fu_230_p2 ;
   add_ln49_fu_220_p2__temp = add_ln49_fu_220_p2 ;
   i4__temp = i4 ;
   op4_reg_273__temp = op4_reg_273 ;
   o1__temp = o1 ;
   op6_5_fu_203_p3__temp = op6_5_fu_203_p3 ;
   op5_1_reg_296__temp = op5_1_reg_296 ;
   op5_fu_133_p2__temp = op5_fu_133_p2 ;
   icmp_ln16_reg_291_temp_1__temp = icmp_ln16_reg_291_temp_1 ;
   G1__temp = G1 ;
   o3__temp = o3 ;
   op13_reg_326__temp = op13_reg_326 ;
   ap_done__temp = ap_done ;
   icmp_ln27_fu_162_p2__temp = icmp_ln27_fu_162_p2 ;
   ap_rst__temp = ap_rst ;
   op6_fu_184_p2__temp = op6_fu_184_p2 ;
   icmp_ln27_reg_301_temp_2__temp = icmp_ln27_reg_301_temp_2 ;
   op13_fu_215_p2__temp = op13_fu_215_p2 ;
   op5_2_reg_285__temp = op5_2_reg_285 ;
   ap_idle__temp = ap_idle ;
   ap_return1__temp = ap_return1 ;
   op5_1_fu_150_p2__temp = op5_1_fu_150_p2 ;
   G2__temp = G2 ;
   op4_fu_127_p2__temp = op4_fu_127_p2 ;
   op14_fu_225_p2__temp = op14_fu_225_p2 ;
   icmp_ln16_reg_291__temp = icmp_ln16_reg_291 ;
   ap_start__temp = ap_start ;
   i6__temp = i6 ;
   op6_1_fu_188_p2__temp = op6_1_fu_188_p2 ;
   //ap_return1_ap_vld__temp = ap_return1_ap_vld ;
   icmp_ln16_fu_145_p2__temp = icmp_ln16_fu_145_p2 ;
   GG2__temp = GG2 ;
   GG1__temp = GG1 ;
   ap_NS_fsm__temp = ap_NS_fsm ;
   o4__temp = o4 ;
   ap_CS_fsm__temp = ap_CS_fsm ;
   op6_3_reg_311__temp = op6_3_reg_311 ;
   icmp_ln16_fu_145_p2_temp_0__temp = icmp_ln16_fu_145_p2_temp_0 ;
   i1__temp = i1 ;
   op3_reg_306__temp = op3_reg_306 ;
   o1_ap_vld__temp = o1_ap_vld ;
   op3_fu_167_p2__temp = op3_fu_167_p2 ;
   G4__temp = G4 ;
   op14_reg_332__temp = op14_reg_332 ;
   op8_reg_321__temp = op8_reg_321 ;
   op5_3_fu_155_p3__temp = op5_3_fu_155_p3 ;
   G3__temp = G3 ;
   op5_reg_280__temp = op5_reg_280 ;
   op5_2_fu_139_p2__temp = op5_2_fu_139_p2 ;
   op7_reg_316__temp = op7_reg_316 ;
   trigger__temp = trigger ;
   op8_fu_180_p2__temp = op8_fu_180_p2 ;
   icmp_ln27_reg_301__temp = icmp_ln27_reg_301 ;
   op7_fu_176_p2__temp = op7_fu_176_p2 ;
   add_ln47_fu_210_p2__temp = add_ln47_fu_210_p2 ;
   op6_4_fu_199_p2__temp = op6_4_fu_199_p2 ;
   ap_ready__temp = ap_ready ;

               icmp_ln27_reg_301 =  icmp_ln27_reg_301__temp ;
               icmp_ln16_reg_291 =  icmp_ln16_reg_291__temp ;
               trigger =  ( trigger & 1 ) ;
               icmp_ln27_reg_301 =  icmp_ln27_reg_301__temp ;
               icmp_ln16_reg_291 =  icmp_ln16_reg_291__temp ;
               trigger =  ( trigger & 1 ) ;
   if(((1 == ap_CS_fsm_state3) && (trigger == 1)) == 1){
       if(((icmp_ln27_reg_301 == 0) && (icmp_ln16_reg_291 == 0)) && (1 == ap_CS_fsm_state3))
       {
           op3_reg_306 =   G1  * i2 ;
       }
       if((icmp_ln27_reg_301 == 1) && (1 == ap_CS_fsm_state3))
       {
           op6_3_reg_311 =   G2  * i4 ;
       }
       if(1 == ap_CS_fsm_state3)
       {
           op8_reg_321 =   G2  * i3 ;
           op7_reg_316 =   G1  * i4 ;
       }
       goto ap_ST_fsm_state6;
   }
   if(((1 == ap_CS_fsm_state3) && (trigger == 1)) == 0){
       if(((icmp_ln27_reg_301 == 0) && (icmp_ln16_reg_291 == 0)) && (1 == ap_CS_fsm_state3))
       {
           op3_reg_306 =   G1  * i2 ;
       }
       if((icmp_ln27_reg_301 == 1) && (1 == ap_CS_fsm_state3))
       {
           op6_3_reg_311 =   G2  * i4 ;
       }
       if(1 == ap_CS_fsm_state3)
       {
           op8_reg_321 =   G2  * i3 ;
           op7_reg_316 =   G1  * i4 ;
       }
       goto ap_ST_fsm_state4;
   }

   ap_ST_fsm_state4:

    ap_CS_fsm_state1 = 0;
    ap_CS_fsm_state2 = 0;
    ap_CS_fsm_state3 = 0;
    ap_CS_fsm_state4 = 1;
    ap_CS_fsm_state5 = 0;
    ap_CS_fsm_state6 = 0;
    ap_CS_fsm_state7 = 0;
   op8_fu_180_p0__temp = op8_fu_180_p0 ;
   icmp_ln16_fu_145_p0__temp = icmp_ln16_fu_145_p0 ;
   op4_fu_127_p0__temp = op4_fu_127_p0 ;
   op5_2_fu_139_p0__temp = op5_2_fu_139_p0 ;
   op8_fu_180_p1__temp = op8_fu_180_p1 ;
   op6_3_fu_172_p0__temp = op6_3_fu_172_p0 ;
   op6_4_fu_199_p1__temp = op6_4_fu_199_p1 ;
   op5_2_fu_139_p1__temp = op5_2_fu_139_p1 ;
   add_ln47_fu_210_p1__temp = add_ln47_fu_210_p1 ;
   op7_fu_176_p1__temp = op7_fu_176_p1 ;
   op6_3_fu_172_p1__temp = op6_3_fu_172_p1 ;
   op4_fu_127_p1__temp = op4_fu_127_p1 ;
   op3_fu_167_p0__temp = op3_fu_167_p0 ;
   op3_fu_167_p1__temp = op3_fu_167_p1 ;
   op5_fu_133_p1__temp = op5_fu_133_p1 ;
   op7_fu_176_p0__temp = op7_fu_176_p0 ;
   op5_fu_133_p0__temp = op5_fu_133_p0 ;
   o2__temp = o2 ;
   i3__temp = i3 ;
   op6_2_fu_192_p3__temp = op6_2_fu_192_p3 ;
   ap_clk__temp = ap_clk ;
   op6_3_fu_172_p2__temp = op6_3_fu_172_p2 ;
   i2__temp = i2 ;
   o2_ap_vld__temp = o2_ap_vld ;
   add_ln52_1_fu_236_p2__temp = add_ln52_1_fu_236_p2 ;
   add_ln52_fu_230_p2__temp = add_ln52_fu_230_p2 ;
   add_ln49_fu_220_p2__temp = add_ln49_fu_220_p2 ;
   i4__temp = i4 ;
   op4_reg_273__temp = op4_reg_273 ;
   o1__temp = o1 ;
   op6_5_fu_203_p3__temp = op6_5_fu_203_p3 ;
   op5_1_reg_296__temp = op5_1_reg_296 ;
   op5_fu_133_p2__temp = op5_fu_133_p2 ;
   icmp_ln16_reg_291_temp_1__temp = icmp_ln16_reg_291_temp_1 ;
   G1__temp = G1 ;
   o3__temp = o3 ;
   op13_reg_326__temp = op13_reg_326 ;
   ap_done__temp = ap_done ;
   icmp_ln27_fu_162_p2__temp = icmp_ln27_fu_162_p2 ;
   ap_rst__temp = ap_rst ;
   op6_fu_184_p2__temp = op6_fu_184_p2 ;
   icmp_ln27_reg_301_temp_2__temp = icmp_ln27_reg_301_temp_2 ;
   op13_fu_215_p2__temp = op13_fu_215_p2 ;
   op5_2_reg_285__temp = op5_2_reg_285 ;
   ap_idle__temp = ap_idle ;
   ap_return1__temp = ap_return1 ;
   op5_1_fu_150_p2__temp = op5_1_fu_150_p2 ;
   G2__temp = G2 ;
   op4_fu_127_p2__temp = op4_fu_127_p2 ;
   op14_fu_225_p2__temp = op14_fu_225_p2 ;
   icmp_ln16_reg_291__temp = icmp_ln16_reg_291 ;
   ap_start__temp = ap_start ;
   i6__temp = i6 ;
   op6_1_fu_188_p2__temp = op6_1_fu_188_p2 ;
   //ap_return1_ap_vld__temp = ap_return1_ap_vld ;
   icmp_ln16_fu_145_p2__temp = icmp_ln16_fu_145_p2 ;
   GG2__temp = GG2 ;
   GG1__temp = GG1 ;
   ap_NS_fsm__temp = ap_NS_fsm ;
   o4__temp = o4 ;
   ap_CS_fsm__temp = ap_CS_fsm ;
   op6_3_reg_311__temp = op6_3_reg_311 ;
   icmp_ln16_fu_145_p2_temp_0__temp = icmp_ln16_fu_145_p2_temp_0 ;
   i1__temp = i1 ;
   op3_reg_306__temp = op3_reg_306 ;
   o1_ap_vld__temp = o1_ap_vld ;
   op3_fu_167_p2__temp = op3_fu_167_p2 ;
   G4__temp = G4 ;
   op14_reg_332__temp = op14_reg_332 ;
   op8_reg_321__temp = op8_reg_321 ;
   op5_3_fu_155_p3__temp = op5_3_fu_155_p3 ;
   G3__temp = G3 ;
   op5_reg_280__temp = op5_reg_280 ;
   op5_2_fu_139_p2__temp = op5_2_fu_139_p2 ;
   op7_reg_316__temp = op7_reg_316 ;
   trigger__temp = trigger ;
   op8_fu_180_p2__temp = op8_fu_180_p2 ;
   icmp_ln27_reg_301__temp = icmp_ln27_reg_301 ;
   op7_fu_176_p2__temp = op7_fu_176_p2 ;
   add_ln47_fu_210_p2__temp = add_ln47_fu_210_p2 ;
   op6_4_fu_199_p2__temp = op6_4_fu_199_p2 ;
   ap_ready__temp = ap_ready ;

               trigger =  ( trigger & 1 ) ;
   if(((1 == ap_CS_fsm_state4) && (trigger == 1)) == 1){
       if(1 == ap_CS_fsm_state4)
       {
           op14_reg_332 =   op8_reg_321__temp  + i6__temp  + op7_reg_316__temp;
           op13_reg_326 =  ( icmp_ln27_reg_301__temp == 1 ? op6_3_reg_311__temp  - i3  :   ( icmp_ln16_reg_291__temp  == 1 ?  ( op5_1_reg_296__temp  - op4_reg_273__temp  )  :   ( op5_2_reg_285__temp  - op3_reg_306__temp  ) ))  +  G1 + op4_reg_273__temp;
       }
       goto ap_ST_fsm_state7;
   }
   if(((1 == ap_CS_fsm_state4) && (trigger == 1)) == 0){
       if(1 == ap_CS_fsm_state4)
       {
               op14_reg_332 =   op8_reg_321__temp  + i6__temp  + op7_reg_316__temp;
           op13_reg_326 =  ( icmp_ln27_reg_301__temp == 1 ? op6_3_reg_311__temp  - i3  :   ( icmp_ln16_reg_291__temp  == 1 ?  ( op5_1_reg_296__temp  - op4_reg_273__temp  )  :   ( op5_2_reg_285__temp  - op3_reg_306__temp  ) ))  +  G1 + op4_reg_273__temp;
       }
       goto ap_ST_fsm_state5;
   }

   ap_ST_fsm_state5:

    ap_CS_fsm_state1 = 0;
    ap_CS_fsm_state2 = 0;
    ap_CS_fsm_state3 = 0;
    ap_CS_fsm_state4 = 0;
    ap_CS_fsm_state5 = 1;
    ap_CS_fsm_state6 = 0;
    ap_CS_fsm_state7 = 0;
   op8_fu_180_p0__temp = op8_fu_180_p0 ;
   icmp_ln16_fu_145_p0__temp = icmp_ln16_fu_145_p0 ;
   op4_fu_127_p0__temp = op4_fu_127_p0 ;
   op5_2_fu_139_p0__temp = op5_2_fu_139_p0 ;
   op8_fu_180_p1__temp = op8_fu_180_p1 ;
   op6_3_fu_172_p0__temp = op6_3_fu_172_p0 ;
   op6_4_fu_199_p1__temp = op6_4_fu_199_p1 ;
   op5_2_fu_139_p1__temp = op5_2_fu_139_p1 ;
   add_ln47_fu_210_p1__temp = add_ln47_fu_210_p1 ;
   op7_fu_176_p1__temp = op7_fu_176_p1 ;
   op6_3_fu_172_p1__temp = op6_3_fu_172_p1 ;
   op4_fu_127_p1__temp = op4_fu_127_p1 ;
   op3_fu_167_p0__temp = op3_fu_167_p0 ;
   op3_fu_167_p1__temp = op3_fu_167_p1 ;
   op5_fu_133_p1__temp = op5_fu_133_p1 ;
   op7_fu_176_p0__temp = op7_fu_176_p0 ;
   op5_fu_133_p0__temp = op5_fu_133_p0 ;
   o2__temp = o2 ;
   i3__temp = i3 ;
   op6_2_fu_192_p3__temp = op6_2_fu_192_p3 ;
   ap_clk__temp = ap_clk ;
   op6_3_fu_172_p2__temp = op6_3_fu_172_p2 ;
   i2__temp = i2 ;
   o2_ap_vld__temp = o2_ap_vld ;
   add_ln52_1_fu_236_p2__temp = add_ln52_1_fu_236_p2 ;
   add_ln52_fu_230_p2__temp = add_ln52_fu_230_p2 ;
   add_ln49_fu_220_p2__temp = add_ln49_fu_220_p2 ;
   i4__temp = i4 ;
   op4_reg_273__temp = op4_reg_273 ;
   o1__temp = o1 ;
   op6_5_fu_203_p3__temp = op6_5_fu_203_p3 ;
   op5_1_reg_296__temp = op5_1_reg_296 ;
   op5_fu_133_p2__temp = op5_fu_133_p2 ;
   icmp_ln16_reg_291_temp_1__temp = icmp_ln16_reg_291_temp_1 ;
   G1__temp = G1 ;
   o3__temp = o3 ;
   op13_reg_326__temp = op13_reg_326 ;
   ap_done__temp = ap_done ;
   icmp_ln27_fu_162_p2__temp = icmp_ln27_fu_162_p2 ;
   ap_rst__temp = ap_rst ;
   op6_fu_184_p2__temp = op6_fu_184_p2 ;
   icmp_ln27_reg_301_temp_2__temp = icmp_ln27_reg_301_temp_2 ;
   op13_fu_215_p2__temp = op13_fu_215_p2 ;
   op5_2_reg_285__temp = op5_2_reg_285 ;
   ap_idle__temp = ap_idle ;
   ap_return1__temp = ap_return1 ;
   op5_1_fu_150_p2__temp = op5_1_fu_150_p2 ;
   G2__temp = G2 ;
   op4_fu_127_p2__temp = op4_fu_127_p2 ;
   op14_fu_225_p2__temp = op14_fu_225_p2 ;
   icmp_ln16_reg_291__temp = icmp_ln16_reg_291 ;
   ap_start__temp = ap_start ;
   i6__temp = i6 ;
   op6_1_fu_188_p2__temp = op6_1_fu_188_p2 ;
   //ap_return1_ap_vld__temp = ap_return1_ap_vld ;
   icmp_ln16_fu_145_p2__temp = icmp_ln16_fu_145_p2 ;
   GG2__temp = GG2 ;
   GG1__temp = GG1 ;
   ap_NS_fsm__temp = ap_NS_fsm ;
   o4__temp = o4 ;
   ap_CS_fsm__temp = ap_CS_fsm ;
   op6_3_reg_311__temp = op6_3_reg_311 ;
   icmp_ln16_fu_145_p2_temp_0__temp = icmp_ln16_fu_145_p2_temp_0 ;
   i1__temp = i1 ;
   op3_reg_306__temp = op3_reg_306 ;
   o1_ap_vld__temp = o1_ap_vld ;
   op3_fu_167_p2__temp = op3_fu_167_p2 ;
   G4__temp = G4 ;
   op14_reg_332__temp = op14_reg_332 ;
   op8_reg_321__temp = op8_reg_321 ;
   op5_3_fu_155_p3__temp = op5_3_fu_155_p3 ;
   G3__temp = G3 ;
   op5_reg_280__temp = op5_reg_280 ;
   op5_2_fu_139_p2__temp = op5_2_fu_139_p2 ;
   op7_reg_316__temp = op7_reg_316 ;
   trigger__temp = trigger ;
   op8_fu_180_p2__temp = op8_fu_180_p2 ;
   icmp_ln27_reg_301__temp = icmp_ln27_reg_301 ;
   op7_fu_176_p2__temp = op7_fu_176_p2 ;
   add_ln47_fu_210_p2__temp = add_ln47_fu_210_p2 ;
   op6_4_fu_199_p2__temp = op6_4_fu_199_p2 ;
   ap_ready__temp = ap_ready ;

       if(1 == ap_CS_fsm_state5)
       {
           ap_done =  1;
            if(ap_done==1){
            }
       }
       if(1 == ap_CS_fsm_state5)
       {
           ap_ready =  1;
       }
       if(1 == ap_CS_fsm_state5)
       {
           //ap_return1_ap_vld = 1;
               ap_return1 =  op13_reg_326 + op14_reg_332;
               o1 =   ( op13_reg_326__temp  & 4294967295 ) ;
               o2 =   ( op14_reg_332__temp  & 4294967295 ) ;
       }
       if(1 == ap_CS_fsm_state5)
       {
           o1_ap_vld =  1;
               ap_return1 =  op13_reg_326 + op14_reg_332;
               o1 =   ( op13_reg_326__temp  & 4294967295 ) ;
               o2 =   ( op14_reg_332__temp  & 4294967295 ) ;
       }
       if(1 == ap_CS_fsm_state5)
       {
           o2_ap_vld =  1;
               ap_return1 =  op13_reg_326 + op14_reg_332;
               o1 =   ( op13_reg_326__temp  & 4294967295 ) ;
               o2 =   ( op14_reg_332__temp  & 4294967295 ) ;
       }
       if(ap_done==1){
           goto end;
       }
       goto ap_ST_fsm_state1;

   ap_ST_fsm_state6:

    ap_CS_fsm_state1 = 0;
    ap_CS_fsm_state2 = 0;
    ap_CS_fsm_state3 = 0;
    ap_CS_fsm_state4 = 0;
    ap_CS_fsm_state5 = 0;
    ap_CS_fsm_state6 = 1;
    ap_CS_fsm_state7 = 0;
   op8_fu_180_p0__temp = op8_fu_180_p0 ;
   icmp_ln16_fu_145_p0__temp = icmp_ln16_fu_145_p0 ;
   op4_fu_127_p0__temp = op4_fu_127_p0 ;
   op5_2_fu_139_p0__temp = op5_2_fu_139_p0 ;
   op8_fu_180_p1__temp = op8_fu_180_p1 ;
   op6_3_fu_172_p0__temp = op6_3_fu_172_p0 ;
   op6_4_fu_199_p1__temp = op6_4_fu_199_p1 ;
   op5_2_fu_139_p1__temp = op5_2_fu_139_p1 ;
   add_ln47_fu_210_p1__temp = add_ln47_fu_210_p1 ;
   op7_fu_176_p1__temp = op7_fu_176_p1 ;
   op6_3_fu_172_p1__temp = op6_3_fu_172_p1 ;
   op4_fu_127_p1__temp = op4_fu_127_p1 ;
   op3_fu_167_p0__temp = op3_fu_167_p0 ;
   op3_fu_167_p1__temp = op3_fu_167_p1 ;
   op5_fu_133_p1__temp = op5_fu_133_p1 ;
   op7_fu_176_p0__temp = op7_fu_176_p0 ;
   op5_fu_133_p0__temp = op5_fu_133_p0 ;
   o2__temp = o2 ;
   i3__temp = i3 ;
   op6_2_fu_192_p3__temp = op6_2_fu_192_p3 ;
   ap_clk__temp = ap_clk ;
   op6_3_fu_172_p2__temp = op6_3_fu_172_p2 ;
   i2__temp = i2 ;
   o2_ap_vld__temp = o2_ap_vld ;
   add_ln52_1_fu_236_p2__temp = add_ln52_1_fu_236_p2 ;
   add_ln52_fu_230_p2__temp = add_ln52_fu_230_p2 ;
   add_ln49_fu_220_p2__temp = add_ln49_fu_220_p2 ;
   i4__temp = i4 ;
   op4_reg_273__temp = op4_reg_273 ;
   o1__temp = o1 ;
   op6_5_fu_203_p3__temp = op6_5_fu_203_p3 ;
   op5_1_reg_296__temp = op5_1_reg_296 ;
   op5_fu_133_p2__temp = op5_fu_133_p2 ;
   icmp_ln16_reg_291_temp_1__temp = icmp_ln16_reg_291_temp_1 ;
   G1__temp = G1 ;
   o3__temp = o3 ;
   op13_reg_326__temp = op13_reg_326 ;
   ap_done__temp = ap_done ;
   icmp_ln27_fu_162_p2__temp = icmp_ln27_fu_162_p2 ;
   ap_rst__temp = ap_rst ;
   op6_fu_184_p2__temp = op6_fu_184_p2 ;
   icmp_ln27_reg_301_temp_2__temp = icmp_ln27_reg_301_temp_2 ;
   op13_fu_215_p2__temp = op13_fu_215_p2 ;
   op5_2_reg_285__temp = op5_2_reg_285 ;
   ap_idle__temp = ap_idle ;
   ap_return1__temp = ap_return1 ;
   op5_1_fu_150_p2__temp = op5_1_fu_150_p2 ;
   G2__temp = G2 ;
   op4_fu_127_p2__temp = op4_fu_127_p2 ;
   op14_fu_225_p2__temp = op14_fu_225_p2 ;
   icmp_ln16_reg_291__temp = icmp_ln16_reg_291 ;
   ap_start__temp = ap_start ;
   i6__temp = i6 ;
   op6_1_fu_188_p2__temp = op6_1_fu_188_p2 ;
   //ap_return1_ap_vld__temp = ap_return1_ap_vld ;
   icmp_ln16_fu_145_p2__temp = icmp_ln16_fu_145_p2 ;
   GG2__temp = GG2 ;
   GG1__temp = GG1 ;
   ap_NS_fsm__temp = ap_NS_fsm ;
   o4__temp = o4 ;
   ap_CS_fsm__temp = ap_CS_fsm ;
   op6_3_reg_311__temp = op6_3_reg_311 ;
   icmp_ln16_fu_145_p2_temp_0__temp = icmp_ln16_fu_145_p2_temp_0 ;
   i1__temp = i1 ;
   op3_reg_306__temp = op3_reg_306 ;
   o1_ap_vld__temp = o1_ap_vld ;
   op3_fu_167_p2__temp = op3_fu_167_p2 ;
   G4__temp = G4 ;
   op14_reg_332__temp = op14_reg_332 ;
   op8_reg_321__temp = op8_reg_321 ;
   op5_3_fu_155_p3__temp = op5_3_fu_155_p3 ;
   G3__temp = G3 ;
   op5_reg_280__temp = op5_reg_280 ;
   op5_2_fu_139_p2__temp = op5_2_fu_139_p2 ;
   op7_reg_316__temp = op7_reg_316 ;
   trigger__temp = trigger ;
   op8_fu_180_p2__temp = op8_fu_180_p2 ;
   icmp_ln27_reg_301__temp = icmp_ln27_reg_301 ;
   op7_fu_176_p2__temp = op7_fu_176_p2 ;
   add_ln47_fu_210_p2__temp = add_ln47_fu_210_p2 ;
   op6_4_fu_199_p2__temp = op6_4_fu_199_p2 ;
   ap_ready__temp = ap_ready ;

       goto ap_ST_fsm_state4;

   ap_ST_fsm_state7:

    ap_CS_fsm_state1 = 0;
    ap_CS_fsm_state2 = 0;
    ap_CS_fsm_state3 = 0;
    ap_CS_fsm_state4 = 0;
    ap_CS_fsm_state5 = 0;
    ap_CS_fsm_state6 = 0;
    ap_CS_fsm_state7 = 1;
   op8_fu_180_p0__temp = op8_fu_180_p0 ;
   icmp_ln16_fu_145_p0__temp = icmp_ln16_fu_145_p0 ;
   op4_fu_127_p0__temp = op4_fu_127_p0 ;
   op5_2_fu_139_p0__temp = op5_2_fu_139_p0 ;
   op8_fu_180_p1__temp = op8_fu_180_p1 ;
   op6_3_fu_172_p0__temp = op6_3_fu_172_p0 ;
   op6_4_fu_199_p1__temp = op6_4_fu_199_p1 ;
   op5_2_fu_139_p1__temp = op5_2_fu_139_p1 ;
   add_ln47_fu_210_p1__temp = add_ln47_fu_210_p1 ;
   op7_fu_176_p1__temp = op7_fu_176_p1 ;
   op6_3_fu_172_p1__temp = op6_3_fu_172_p1 ;
   op4_fu_127_p1__temp = op4_fu_127_p1 ;
   op3_fu_167_p0__temp = op3_fu_167_p0 ;
   op3_fu_167_p1__temp = op3_fu_167_p1 ;
   op5_fu_133_p1__temp = op5_fu_133_p1 ;
   op7_fu_176_p0__temp = op7_fu_176_p0 ;
   op5_fu_133_p0__temp = op5_fu_133_p0 ;
   o2__temp = o2 ;
   i3__temp = i3 ;
   op6_2_fu_192_p3__temp = op6_2_fu_192_p3 ;
   ap_clk__temp = ap_clk ;
   op6_3_fu_172_p2__temp = op6_3_fu_172_p2 ;
   i2__temp = i2 ;
   o2_ap_vld__temp = o2_ap_vld ;
   add_ln52_1_fu_236_p2__temp = add_ln52_1_fu_236_p2 ;
   add_ln52_fu_230_p2__temp = add_ln52_fu_230_p2 ;
   add_ln49_fu_220_p2__temp = add_ln49_fu_220_p2 ;
   i4__temp = i4 ;
   op4_reg_273__temp = op4_reg_273 ;
   o1__temp = o1 ;
   op6_5_fu_203_p3__temp = op6_5_fu_203_p3 ;
   op5_1_reg_296__temp = op5_1_reg_296 ;
   op5_fu_133_p2__temp = op5_fu_133_p2 ;
   icmp_ln16_reg_291_temp_1__temp = icmp_ln16_reg_291_temp_1 ;
   G1__temp = G1 ;
   o3__temp = o3 ;
   op13_reg_326__temp = op13_reg_326 ;
   ap_done__temp = ap_done ;
   icmp_ln27_fu_162_p2__temp = icmp_ln27_fu_162_p2 ;
   ap_rst__temp = ap_rst ;
   op6_fu_184_p2__temp = op6_fu_184_p2 ;
   icmp_ln27_reg_301_temp_2__temp = icmp_ln27_reg_301_temp_2 ;
   op13_fu_215_p2__temp = op13_fu_215_p2 ;
   op5_2_reg_285__temp = op5_2_reg_285 ;
   ap_idle__temp = ap_idle ;
   ap_return1__temp = ap_return1 ;
   op5_1_fu_150_p2__temp = op5_1_fu_150_p2 ;
   G2__temp = G2 ;
   op4_fu_127_p2__temp = op4_fu_127_p2 ;
   op14_fu_225_p2__temp = op14_fu_225_p2 ;
   icmp_ln16_reg_291__temp = icmp_ln16_reg_291 ;
   ap_start__temp = ap_start ;
   i6__temp = i6 ;
   op6_1_fu_188_p2__temp = op6_1_fu_188_p2 ;
   //ap_return1_ap_vld__temp = ap_return1_ap_vld ;
   icmp_ln16_fu_145_p2__temp = icmp_ln16_fu_145_p2 ;
   GG2__temp = GG2 ;
   GG1__temp = GG1 ;
   ap_NS_fsm__temp = ap_NS_fsm ;
   o4__temp = o4 ;
   ap_CS_fsm__temp = ap_CS_fsm ;
   op6_3_reg_311__temp = op6_3_reg_311 ;
   icmp_ln16_fu_145_p2_temp_0__temp = icmp_ln16_fu_145_p2_temp_0 ;
   i1__temp = i1 ;
   op3_reg_306__temp = op3_reg_306 ;
   o1_ap_vld__temp = o1_ap_vld ;
   op3_fu_167_p2__temp = op3_fu_167_p2 ;
   G4__temp = G4 ;
   op14_reg_332__temp = op14_reg_332 ;
   op8_reg_321__temp = op8_reg_321 ;
   op5_3_fu_155_p3__temp = op5_3_fu_155_p3 ;
   G3__temp = G3 ;
   op5_reg_280__temp = op5_reg_280 ;
   op5_2_fu_139_p2__temp = op5_2_fu_139_p2 ;
   op7_reg_316__temp = op7_reg_316 ;
   trigger__temp = trigger ;
   op8_fu_180_p2__temp = op8_fu_180_p2 ;
   icmp_ln27_reg_301__temp = icmp_ln27_reg_301 ;
   op7_fu_176_p2__temp = op7_fu_176_p2 ;
   add_ln47_fu_210_p2__temp = add_ln47_fu_210_p2 ;
   op6_4_fu_199_p2__temp = op6_4_fu_199_p2 ;
   ap_ready__temp = ap_ready ;

       goto ap_ST_fsm_state5;
   end:
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
    *ap_return1__1=ap_return1;
    //*ap_return1_ap_vld__1=ap_return1_ap_vld;
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
    *trigger__1=trigger;
    printf("%lld\n",ap_return1);
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
		long long int trigger = 1;

		scanf("%llu %llu %llu %llu %llu %llu %llu %llu %llu %llu %llu %llu %llu %llu %llu",&i1__1,&i2__1,&i3__1,&i4__1,&i6__1,&o1__1,&o2__1,&o3__1,&o4__1,&G1__1,&G2__1,&G3__1,&G4__1,&GG1__1,&GG2__1);	
		int dummy = 1;
	hls_macc(&ap_clk__1,&ap_done__1,&ap_idle__1,&ap_ready__1,&ap_return__1,&ap_rst__1,&ap_start__1,&i1__1,&i2__1,&i3__1,&i4__1,&i6__1,&o1__1,&o1_ap_vld__1,&o2__1,&o2_ap_vld__1,&o3__1,&o4__1,&G1__1,&G2__1,&G3__1,&G4__1,&GG1__1,&GG2__1,&trigger,dummy);
}
return 0;

}
//16 9 5 16 15 11 7 4 -2 -10 4 3 -16 13 6 
