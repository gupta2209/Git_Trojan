#include<stdio.h>
long long int do_twos_complement( unsigned long long int a ,int width){
    int msb = (a >> (width-1)) & 1;
    if(msb==1){
        int bit[width];int ans[width];
        unsigned long long int a1=a;
        int i=0;
        for(i=0;i<width;i++){
            bit[i]=0;
            ans[i]=0;
        }
        i=0;
        while(a1>0){
            bit[i]=a1%2;
            i++;
            a1/=2;
        }
        int flag=0;
        for(i=0;i<width;i++){
            if(bit[i]==1 && flag==0){
                ans[i]=1;
                flag=1;
            }
            else if(flag==0)
                ans[i]=bit[i];
            else
                ans[i]=1 ^ bit[i];
        }
        long long int fans=0;
        for(i=0;i<width;i++)
            fans+=ans[i]*(1<<i);
        fans = -fans;    
        return fans;
    }else{     
        return a;
    }
}
void hls_macc(unsigned long long int *G1__1,unsigned long long int *G2__1,unsigned long long int *G3__1,unsigned long long int *G4__1,unsigned long long int *GG1__1,unsigned long long int *GG2__1,unsigned long long int *ap_clk__1,unsigned long long int *ap_done__1,unsigned long long int *ap_idle__1,unsigned long long int *ap_ready__1,unsigned long long int *ap_return1__1,unsigned long long int *ap_return1_ap_vld__1,unsigned long long int *ap_rst__1,unsigned long long int *ap_start__1,unsigned long long int *i1__1,unsigned long long int *i2__1,unsigned long long int *i3__1,unsigned long long int *i4__1,unsigned long long int *i6__1,unsigned long long int *o1__1,unsigned long long int *o1_ap_vld__1,unsigned long long int *o2__1,unsigned long long int *o2_ap_vld__1,unsigned long long int *o3__1,unsigned long long int *o4__1,unsigned long long int *trigger_in__1,int dummy){
unsigned long long int G1=*G1__1;
unsigned long long int G2=*G2__1;
unsigned long long int G3=*G3__1;
unsigned long long int G4=*G4__1;
unsigned long long int GG1=*GG1__1;
unsigned long long int GG2=*GG2__1;
unsigned long long int ap_clk=*ap_clk__1;
unsigned long long int ap_done=*ap_done__1;
unsigned long long int ap_idle=*ap_idle__1;
unsigned long long int ap_ready=*ap_ready__1;
unsigned long long int ap_return1=*ap_return1__1;
unsigned long long int ap_return1_ap_vld=*ap_return1_ap_vld__1;
unsigned long long int ap_rst=*ap_rst__1;
unsigned long long int ap_start=*ap_start__1;
unsigned long long int i1=*i1__1;
unsigned long long int i2=*i2__1;
unsigned long long int i3=*i3__1;
unsigned long long int i4=*i4__1;
unsigned long long int i6=*i6__1;
unsigned long long int o1=*o1__1;
unsigned long long int o1_ap_vld=*o1_ap_vld__1;
unsigned long long int o2=*o2__1;
unsigned long long int o2_ap_vld=*o2_ap_vld__1;
unsigned long long int o3=*o3__1;
unsigned long long int o4=*o4__1;
unsigned long long int trigger_in=*trigger_in__1;
   long long int add_ln47_fu_210_p1=0;
   long long int add_ln47_fu_210_p1__temp=0;
   long long int ap_CS_fsm_state1=0;
   long long int ap_CS_fsm_state2=0;
   long long int ap_CS_fsm_state3=0;
   long long int ap_CS_fsm_state4=0;
   long long int ap_CS_fsm_state4__temp=0;
   long long int ap_CS_fsm_state5=0;
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
   unsigned long long int G1__temp=0;
   unsigned long long int G2__temp=0;
   unsigned long long int G3__temp=0;
   unsigned long long int G4__temp=0;
   unsigned long long int GG1__temp=0;
   unsigned long long int GG2__temp=0;
   unsigned long long int add_ln47_fu_210_p2=0;
   unsigned long long int add_ln47_fu_210_p2__temp=0;
   unsigned long long int add_ln49_fu_220_p2=0;
   unsigned long long int add_ln49_fu_220_p2__temp=0;
   unsigned long long int add_ln52_1_fu_236_p2=0;
   unsigned long long int add_ln52_1_fu_236_p2__temp=0;
   unsigned long long int add_ln52_fu_230_p2=0;
   unsigned long long int add_ln52_fu_230_p2__temp=0;
   unsigned long long int ap_CS_fsm=0;
   unsigned long long int ap_CS_fsm__temp=0;
   unsigned long long int ap_NS_fsm=0;
   unsigned long long int ap_NS_fsm__temp=0;
   unsigned long long int ap_clk__temp=0;
   unsigned long long int ap_done__temp=0;
   unsigned long long int ap_idle__temp=0;
   unsigned long long int ap_ready__temp=0;
   unsigned long long int ap_return1__temp=0;
   unsigned long long int ap_return1_ap_vld__temp=0;
   unsigned long long int ap_rst__temp=0;
   unsigned long long int ap_start__temp=0;
   unsigned long long int i1__temp=0;
   unsigned long long int i2__temp=0;
   unsigned long long int i3__temp=0;
   unsigned long long int i4__temp=0;
   unsigned long long int i6__temp=0;
   unsigned long long int icmp_ln16_fu_145_p2=0;
   unsigned long long int icmp_ln16_fu_145_p2__temp=0;
   unsigned long long int icmp_ln16_fu_145_p2_temp_0=0;
   unsigned long long int icmp_ln16_fu_145_p2_temp_0__temp=0;
   unsigned long long int icmp_ln16_reg_291=0;
   unsigned long long int icmp_ln16_reg_291__temp=0;
   unsigned long long int icmp_ln16_reg_291_temp_1=0;
   unsigned long long int icmp_ln16_reg_291_temp_1__temp=0;
   unsigned long long int icmp_ln27_fu_162_p2=0;
   unsigned long long int icmp_ln27_fu_162_p2__temp=0;
   unsigned long long int icmp_ln27_reg_301=0;
   unsigned long long int icmp_ln27_reg_301__temp=0;
   unsigned long long int icmp_ln27_reg_301_temp_2=0;
   unsigned long long int icmp_ln27_reg_301_temp_2__temp=0;
   unsigned long long int mux_out1=0;
   unsigned long long int mux_out1__temp=0;
   unsigned long long int mux_out_neg1=0;
   unsigned long long int mux_out_neg1__temp=0;
   unsigned long long int o1__temp=0;
   unsigned long long int o1_ap_vld__temp=0;
   unsigned long long int o2__temp=0;
   unsigned long long int o2_ap_vld__temp=0;
   unsigned long long int o3__temp=0;
   unsigned long long int o4__temp=0;
   unsigned long long int op13_fu_215_p2=0;
   unsigned long long int op13_fu_215_p2__temp=0;
   unsigned long long int op13_reg_326=0;
   unsigned long long int op13_reg_326__temp=0;
   unsigned long long int op14_fu_225_p2=0;
   unsigned long long int op14_fu_225_p2__temp=0;
   unsigned long long int op14_reg_332=0;
   unsigned long long int op14_reg_332__temp=0;
   unsigned long long int op3_fu_167_p2=0;
   unsigned long long int op3_fu_167_p2__temp=0;
   unsigned long long int op3_reg_306=0;
   unsigned long long int op3_reg_306__temp=0;
   unsigned long long int op4_fu_127_p2=0;
   unsigned long long int op4_fu_127_p2__temp=0;
   unsigned long long int op4_reg_273=0;
   unsigned long long int op4_reg_273__temp=0;
   unsigned long long int op5_1_fu_150_p2=0;
   unsigned long long int op5_1_fu_150_p2__temp=0;
   unsigned long long int op5_1_reg_296=0;
   unsigned long long int op5_1_reg_296__temp=0;
   unsigned long long int op5_2_fu_139_p2=0;
   unsigned long long int op5_2_fu_139_p2__temp=0;
   unsigned long long int op5_2_reg_285=0;
   unsigned long long int op5_2_reg_285__temp=0;
   unsigned long long int op5_3_fu_155_p3=0;
   unsigned long long int op5_3_fu_155_p3__temp=0;
   unsigned long long int op5_fu_133_p2=0;
   unsigned long long int op5_fu_133_p2__temp=0;
   unsigned long long int op5_reg_280=0;
   unsigned long long int op5_reg_280__temp=0;
   unsigned long long int op6_1_fu_188_p2=0;
   unsigned long long int op6_1_fu_188_p2__temp=0;
   unsigned long long int op6_2_fu_192_p3=0;
   unsigned long long int op6_2_fu_192_p3__temp=0;
   unsigned long long int op6_3_fu_172_p2=0;
   unsigned long long int op6_3_fu_172_p2__temp=0;
   unsigned long long int op6_3_reg_311=0;
   unsigned long long int op6_3_reg_311__temp=0;
   unsigned long long int op6_4_fu_199_p2=0;
   unsigned long long int op6_4_fu_199_p2__temp=0;
   unsigned long long int op6_5_fu_203_p3=0;
   unsigned long long int op6_5_fu_203_p3__temp=0;
   unsigned long long int op6_fu_184_p2=0;
   unsigned long long int op6_fu_184_p2__temp=0;
   unsigned long long int op7_fu_176_p2=0;
   unsigned long long int op7_fu_176_p2__temp=0;
   unsigned long long int op7_reg_316=0;
   unsigned long long int op7_reg_316__temp=0;
   unsigned long long int op8_fu_180_p2=0;
   unsigned long long int op8_fu_180_p2__temp=0;
   unsigned long long int op8_reg_321=0;
   unsigned long long int op8_reg_321__temp=0;
   unsigned long long int reg1=0;
   unsigned long long int reg1__temp=0;
   unsigned long long int reg_out1=0;
   unsigned long long int reg_out1__temp=0;
   unsigned long long int temp1=0;
   unsigned long long int temp12=0;
   unsigned long long int temp12__temp=0;
   unsigned long long int temp1__temp=0;
   unsigned long long int temp2=0;
   unsigned long long int temp2__temp=0;
   unsigned long long int trigger_in__temp=0;
    ap_done=0;
    ap_start=1;

   ap_ST_fsm_state1:

    ap_CS_fsm_state1 = 1;
    ap_CS_fsm_state2 = 0;
    ap_CS_fsm_state3 = 0;
    ap_CS_fsm_state4 = 0;
    ap_CS_fsm_state5 = 0;
   op7_fu_176_p0__temp = op7_fu_176_p0 ;
   op6_4_fu_199_p1__temp = op6_4_fu_199_p1 ;
   op6_3_fu_172_p1__temp = op6_3_fu_172_p1 ;
   op6_3_fu_172_p0__temp = op6_3_fu_172_p0 ;
   op4_fu_127_p0__temp = op4_fu_127_p0 ;
   add_ln47_fu_210_p1__temp = add_ln47_fu_210_p1 ;
   op8_fu_180_p1__temp = op8_fu_180_p1 ;
   op3_fu_167_p1__temp = op3_fu_167_p1 ;
   op8_fu_180_p0__temp = op8_fu_180_p0 ;
   op7_fu_176_p1__temp = op7_fu_176_p1 ;
   op5_2_fu_139_p1__temp = op5_2_fu_139_p1 ;
   op5_fu_133_p1__temp = op5_fu_133_p1 ;
   ap_CS_fsm_state4__temp = ap_CS_fsm_state4 ;
   op3_fu_167_p0__temp = op3_fu_167_p0 ;
   op4_fu_127_p1__temp = op4_fu_127_p1 ;
   op5_2_fu_139_p0__temp = op5_2_fu_139_p0 ;
   icmp_ln16_fu_145_p0__temp = icmp_ln16_fu_145_p0 ;
   op5_fu_133_p0__temp = op5_fu_133_p0 ;
   reg1__temp = reg1 ;
   mux_out1__temp = mux_out1 ;
   op8_reg_321__temp = op8_reg_321 ;
   op7_reg_316__temp = op7_reg_316 ;
   op8_fu_180_p2__temp = op8_fu_180_p2 ;
   ap_done__temp = ap_done ;
   i3__temp = i3 ;
   o4__temp = o4 ;
   icmp_ln16_reg_291_temp_1__temp = icmp_ln16_reg_291_temp_1 ;
   GG2__temp = GG2 ;
   op4_reg_273__temp = op4_reg_273 ;
   add_ln49_fu_220_p2__temp = add_ln49_fu_220_p2 ;
   G1__temp = G1 ;
   op6_5_fu_203_p3__temp = op6_5_fu_203_p3 ;
   ap_CS_fsm__temp = ap_CS_fsm ;
   o1_ap_vld__temp = o1_ap_vld ;
   ap_return1__temp = ap_return1 ;
   op6_3_fu_172_p2__temp = op6_3_fu_172_p2 ;
   icmp_ln16_fu_145_p2_temp_0__temp = icmp_ln16_fu_145_p2_temp_0 ;
   o3__temp = o3 ;
   icmp_ln27_fu_162_p2__temp = icmp_ln27_fu_162_p2 ;
   temp12__temp = temp12 ;
   ap_start__temp = ap_start ;
   op5_3_fu_155_p3__temp = op5_3_fu_155_p3 ;
   add_ln52_1_fu_236_p2__temp = add_ln52_1_fu_236_p2 ;
   GG1__temp = GG1 ;
   G3__temp = G3 ;
   G2__temp = G2 ;
   i6__temp = i6 ;
   icmp_ln27_reg_301_temp_2__temp = icmp_ln27_reg_301_temp_2 ;
   i2__temp = i2 ;
   op5_reg_280__temp = op5_reg_280 ;
   reg_out1__temp = reg_out1 ;
   icmp_ln16_reg_291__temp = icmp_ln16_reg_291 ;
   op6_3_reg_311__temp = op6_3_reg_311 ;
   o2_ap_vld__temp = o2_ap_vld ;
   op6_2_fu_192_p3__temp = op6_2_fu_192_p3 ;
   add_ln52_fu_230_p2__temp = add_ln52_fu_230_p2 ;
   op6_fu_184_p2__temp = op6_fu_184_p2 ;
   op14_reg_332__temp = op14_reg_332 ;
   op5_fu_133_p2__temp = op5_fu_133_p2 ;
   op4_fu_127_p2__temp = op4_fu_127_p2 ;
   op6_4_fu_199_p2__temp = op6_4_fu_199_p2 ;
   trigger_in__temp = trigger_in ;
   ap_return1_ap_vld__temp = ap_return1_ap_vld ;
   ap_ready__temp = ap_ready ;
   op5_1_fu_150_p2__temp = op5_1_fu_150_p2 ;
   op3_reg_306__temp = op3_reg_306 ;
   ap_idle__temp = ap_idle ;
   mux_out_neg1__temp = mux_out_neg1 ;
   o1__temp = o1 ;
   i4__temp = i4 ;
   op5_2_reg_285__temp = op5_2_reg_285 ;
   add_ln47_fu_210_p2__temp = add_ln47_fu_210_p2 ;
   op6_1_fu_188_p2__temp = op6_1_fu_188_p2 ;
   ap_NS_fsm__temp = ap_NS_fsm ;
   o2__temp = o2 ;
   temp2__temp = temp2 ;
   op13_fu_215_p2__temp = op13_fu_215_p2 ;
   op13_reg_326__temp = op13_reg_326 ;
   icmp_ln16_fu_145_p2__temp = icmp_ln16_fu_145_p2 ;
   ap_rst__temp = ap_rst ;
   G4__temp = G4 ;
   icmp_ln27_reg_301__temp = icmp_ln27_reg_301 ;
   op5_1_reg_296__temp = op5_1_reg_296 ;
   op3_fu_167_p2__temp = op3_fu_167_p2 ;
   i1__temp = i1 ;
   op7_fu_176_p2__temp = op7_fu_176_p2 ;
   ap_clk__temp = ap_clk ;
   temp1__temp = temp1 ;
   op5_2_fu_139_p2__temp = op5_2_fu_139_p2 ;
   op14_fu_225_p2__temp = op14_fu_225_p2 ;

       if((ap_start == 0) && (1 == ap_CS_fsm_state1))
       {
           ap_idle =  1;
       }
   if(((1 == ap_CS_fsm_state1) && (ap_start == 1)) == 1){
       if((1 == ap_CS_fsm_state1) && (ap_start == 1))
       {
           op5_reg_280 =   ( ( do_twos_complement(  ( G1 & 4294967295 )  , 32 )  * do_twos_complement(  ( i3 & 4294967295 )  , 32 )  ) & 4294967295 ) ;
           op5_2_reg_285 =   ( ( do_twos_complement(  ( i4 & 4294967295 )  , 32 )  * do_twos_complement(  ( i3 & 4294967295 )  , 32 )  ) & 4294967295 ) ;
           op4_reg_273 =   ( ( do_twos_complement(  ( G2 & 4294967295 )  , 32 )  * do_twos_complement(  ( i1 & 4294967295 )  , 32 )  ) & 4294967295 ) ;
           reg1 =  0;
       }
       goto ap_ST_fsm_state2;
   }
   if(((1 == ap_CS_fsm_state1) && (ap_start == 1)) == 0){
       if((1 == ap_CS_fsm_state1) && (ap_start == 1))
       {
               op5_reg_280 =   ( ( do_twos_complement(  ( G1 & 4294967295 )  , 32 )  * do_twos_complement(  ( i3 & 4294967295 )  , 32 )  ) & 4294967295 ) ;
               op5_2_reg_285 =   ( ( do_twos_complement(  ( i4 & 4294967295 )  , 32 )  * do_twos_complement(  ( i3 & 4294967295 )  , 32 )  ) & 4294967295 ) ;
               op4_reg_273 =   ( ( do_twos_complement(  ( G2 & 4294967295 )  , 32 )  * do_twos_complement(  ( i1 & 4294967295 )  , 32 )  ) & 4294967295 ) ;
               reg1 =  0;
       }
       goto ap_ST_fsm_state1;
   }

   ap_ST_fsm_state2:

    ap_CS_fsm_state1 = 0;
    ap_CS_fsm_state2 = 1;
    ap_CS_fsm_state3 = 0;
    ap_CS_fsm_state4 = 0;
    ap_CS_fsm_state5 = 0;
   op7_fu_176_p0__temp = op7_fu_176_p0 ;
   op6_4_fu_199_p1__temp = op6_4_fu_199_p1 ;
   op6_3_fu_172_p1__temp = op6_3_fu_172_p1 ;
   op6_3_fu_172_p0__temp = op6_3_fu_172_p0 ;
   op4_fu_127_p0__temp = op4_fu_127_p0 ;
   add_ln47_fu_210_p1__temp = add_ln47_fu_210_p1 ;
   op8_fu_180_p1__temp = op8_fu_180_p1 ;
   op3_fu_167_p1__temp = op3_fu_167_p1 ;
   op8_fu_180_p0__temp = op8_fu_180_p0 ;
   op7_fu_176_p1__temp = op7_fu_176_p1 ;
   op5_2_fu_139_p1__temp = op5_2_fu_139_p1 ;
   op5_fu_133_p1__temp = op5_fu_133_p1 ;
   ap_CS_fsm_state4__temp = ap_CS_fsm_state4 ;
   op3_fu_167_p0__temp = op3_fu_167_p0 ;
   op4_fu_127_p1__temp = op4_fu_127_p1 ;
   op5_2_fu_139_p0__temp = op5_2_fu_139_p0 ;
   icmp_ln16_fu_145_p0__temp = icmp_ln16_fu_145_p0 ;
   op5_fu_133_p0__temp = op5_fu_133_p0 ;
   reg1__temp = reg1 ;
   mux_out1__temp = mux_out1 ;
   op8_reg_321__temp = op8_reg_321 ;
   op7_reg_316__temp = op7_reg_316 ;
   op8_fu_180_p2__temp = op8_fu_180_p2 ;
   ap_done__temp = ap_done ;
   i3__temp = i3 ;
   o4__temp = o4 ;
   icmp_ln16_reg_291_temp_1__temp = icmp_ln16_reg_291_temp_1 ;
   GG2__temp = GG2 ;
   op4_reg_273__temp = op4_reg_273 ;
   add_ln49_fu_220_p2__temp = add_ln49_fu_220_p2 ;
   G1__temp = G1 ;
   op6_5_fu_203_p3__temp = op6_5_fu_203_p3 ;
   ap_CS_fsm__temp = ap_CS_fsm ;
   o1_ap_vld__temp = o1_ap_vld ;
   ap_return1__temp = ap_return1 ;
   op6_3_fu_172_p2__temp = op6_3_fu_172_p2 ;
   icmp_ln16_fu_145_p2_temp_0__temp = icmp_ln16_fu_145_p2_temp_0 ;
   o3__temp = o3 ;
   icmp_ln27_fu_162_p2__temp = icmp_ln27_fu_162_p2 ;
   temp12__temp = temp12 ;
   ap_start__temp = ap_start ;
   op5_3_fu_155_p3__temp = op5_3_fu_155_p3 ;
   add_ln52_1_fu_236_p2__temp = add_ln52_1_fu_236_p2 ;
   GG1__temp = GG1 ;
   G3__temp = G3 ;
   G2__temp = G2 ;
   i6__temp = i6 ;
   icmp_ln27_reg_301_temp_2__temp = icmp_ln27_reg_301_temp_2 ;
   i2__temp = i2 ;
   op5_reg_280__temp = op5_reg_280 ;
   reg_out1__temp = reg_out1 ;
   icmp_ln16_reg_291__temp = icmp_ln16_reg_291 ;
   op6_3_reg_311__temp = op6_3_reg_311 ;
   o2_ap_vld__temp = o2_ap_vld ;
   op6_2_fu_192_p3__temp = op6_2_fu_192_p3 ;
   add_ln52_fu_230_p2__temp = add_ln52_fu_230_p2 ;
   op6_fu_184_p2__temp = op6_fu_184_p2 ;
   op14_reg_332__temp = op14_reg_332 ;
   op5_fu_133_p2__temp = op5_fu_133_p2 ;
   op4_fu_127_p2__temp = op4_fu_127_p2 ;
   op6_4_fu_199_p2__temp = op6_4_fu_199_p2 ;
   trigger_in__temp = trigger_in ;
   ap_return1_ap_vld__temp = ap_return1_ap_vld ;
   ap_ready__temp = ap_ready ;
   op5_1_fu_150_p2__temp = op5_1_fu_150_p2 ;
   op3_reg_306__temp = op3_reg_306 ;
   ap_idle__temp = ap_idle ;
   mux_out_neg1__temp = mux_out_neg1 ;
   o1__temp = o1 ;
   i4__temp = i4 ;
   op5_2_reg_285__temp = op5_2_reg_285 ;
   add_ln47_fu_210_p2__temp = add_ln47_fu_210_p2 ;
   op6_1_fu_188_p2__temp = op6_1_fu_188_p2 ;
   ap_NS_fsm__temp = ap_NS_fsm ;
   o2__temp = o2 ;
   temp2__temp = temp2 ;
   op13_fu_215_p2__temp = op13_fu_215_p2 ;
   op13_reg_326__temp = op13_reg_326 ;
   icmp_ln16_fu_145_p2__temp = icmp_ln16_fu_145_p2 ;
   ap_rst__temp = ap_rst ;
   G4__temp = G4 ;
   icmp_ln27_reg_301__temp = icmp_ln27_reg_301 ;
   op5_1_reg_296__temp = op5_1_reg_296 ;
   op3_fu_167_p2__temp = op3_fu_167_p2 ;
   i1__temp = i1 ;
   op7_fu_176_p2__temp = op7_fu_176_p2 ;
   ap_clk__temp = ap_clk ;
   temp1__temp = temp1 ;
   op5_2_fu_139_p2__temp = op5_2_fu_139_p2 ;
   op14_fu_225_p2__temp = op14_fu_225_p2 ;

       if(1 == ap_CS_fsm_state2)
       {
           op5_1_reg_296 =   ( ( op5_reg_280__temp  + ( GG1__temp  & 4294967295 )  ) & 4294967295 ) ;
           icmp_ln27_reg_301 =   ( do_twos_complement(  (  ( (  ( do_twos_complement(  ( G1 & 4294967295 )  , 63 )  > do_twos_complement(10 , 63 )  ? 1 :  0 )  & 1 ) & 18446744073709551615 )  == 1 ?  ( ( op5_reg_280__temp  + ( GG1__temp  & 4294967295 )  ) & 4294967295 )  :  op5_2_reg_285__temp  )  , 63 )  < do_twos_complement( op4_reg_273__temp  , 63 )  ? 1 : 0 ) ;
           icmp_ln16_reg_291 =   ( do_twos_complement(  ( G1 & 4294967295 )  , 63 )  > do_twos_complement(10 , 63 )  ? 1 :  0 ) ;
       }
       goto ap_ST_fsm_state3;

   ap_ST_fsm_state3:

    ap_CS_fsm_state1 = 0;
    ap_CS_fsm_state2 = 0;
    ap_CS_fsm_state3 = 1;
    ap_CS_fsm_state4 = 0;
    ap_CS_fsm_state5 = 0;
   op7_fu_176_p0__temp = op7_fu_176_p0 ;
   op6_4_fu_199_p1__temp = op6_4_fu_199_p1 ;
   op6_3_fu_172_p1__temp = op6_3_fu_172_p1 ;
   op6_3_fu_172_p0__temp = op6_3_fu_172_p0 ;
   op4_fu_127_p0__temp = op4_fu_127_p0 ;
   add_ln47_fu_210_p1__temp = add_ln47_fu_210_p1 ;
   op8_fu_180_p1__temp = op8_fu_180_p1 ;
   op3_fu_167_p1__temp = op3_fu_167_p1 ;
   op8_fu_180_p0__temp = op8_fu_180_p0 ;
   op7_fu_176_p1__temp = op7_fu_176_p1 ;
   op5_2_fu_139_p1__temp = op5_2_fu_139_p1 ;
   op5_fu_133_p1__temp = op5_fu_133_p1 ;
   ap_CS_fsm_state4__temp = ap_CS_fsm_state4 ;
   op3_fu_167_p0__temp = op3_fu_167_p0 ;
   op4_fu_127_p1__temp = op4_fu_127_p1 ;
   op5_2_fu_139_p0__temp = op5_2_fu_139_p0 ;
   icmp_ln16_fu_145_p0__temp = icmp_ln16_fu_145_p0 ;
   op5_fu_133_p0__temp = op5_fu_133_p0 ;
   reg1__temp = reg1 ;
   mux_out1__temp = mux_out1 ;
   op8_reg_321__temp = op8_reg_321 ;
   op7_reg_316__temp = op7_reg_316 ;
   op8_fu_180_p2__temp = op8_fu_180_p2 ;
   ap_done__temp = ap_done ;
   i3__temp = i3 ;
   o4__temp = o4 ;
   icmp_ln16_reg_291_temp_1__temp = icmp_ln16_reg_291_temp_1 ;
   GG2__temp = GG2 ;
   op4_reg_273__temp = op4_reg_273 ;
   add_ln49_fu_220_p2__temp = add_ln49_fu_220_p2 ;
   G1__temp = G1 ;
   op6_5_fu_203_p3__temp = op6_5_fu_203_p3 ;
   ap_CS_fsm__temp = ap_CS_fsm ;
   o1_ap_vld__temp = o1_ap_vld ;
   ap_return1__temp = ap_return1 ;
   op6_3_fu_172_p2__temp = op6_3_fu_172_p2 ;
   icmp_ln16_fu_145_p2_temp_0__temp = icmp_ln16_fu_145_p2_temp_0 ;
   o3__temp = o3 ;
   icmp_ln27_fu_162_p2__temp = icmp_ln27_fu_162_p2 ;
   temp12__temp = temp12 ;
   ap_start__temp = ap_start ;
   op5_3_fu_155_p3__temp = op5_3_fu_155_p3 ;
   add_ln52_1_fu_236_p2__temp = add_ln52_1_fu_236_p2 ;
   GG1__temp = GG1 ;
   G3__temp = G3 ;
   G2__temp = G2 ;
   i6__temp = i6 ;
   icmp_ln27_reg_301_temp_2__temp = icmp_ln27_reg_301_temp_2 ;
   i2__temp = i2 ;
   op5_reg_280__temp = op5_reg_280 ;
   reg_out1__temp = reg_out1 ;
   icmp_ln16_reg_291__temp = icmp_ln16_reg_291 ;
   op6_3_reg_311__temp = op6_3_reg_311 ;
   o2_ap_vld__temp = o2_ap_vld ;
   op6_2_fu_192_p3__temp = op6_2_fu_192_p3 ;
   add_ln52_fu_230_p2__temp = add_ln52_fu_230_p2 ;
   op6_fu_184_p2__temp = op6_fu_184_p2 ;
   op14_reg_332__temp = op14_reg_332 ;
   op5_fu_133_p2__temp = op5_fu_133_p2 ;
   op4_fu_127_p2__temp = op4_fu_127_p2 ;
   op6_4_fu_199_p2__temp = op6_4_fu_199_p2 ;
   trigger_in__temp = trigger_in ;
   ap_return1_ap_vld__temp = ap_return1_ap_vld ;
   ap_ready__temp = ap_ready ;
   op5_1_fu_150_p2__temp = op5_1_fu_150_p2 ;
   op3_reg_306__temp = op3_reg_306 ;
   ap_idle__temp = ap_idle ;
   mux_out_neg1__temp = mux_out_neg1 ;
   o1__temp = o1 ;
   i4__temp = i4 ;
   op5_2_reg_285__temp = op5_2_reg_285 ;
   add_ln47_fu_210_p2__temp = add_ln47_fu_210_p2 ;
   op6_1_fu_188_p2__temp = op6_1_fu_188_p2 ;
   ap_NS_fsm__temp = ap_NS_fsm ;
   o2__temp = o2 ;
   temp2__temp = temp2 ;
   op13_fu_215_p2__temp = op13_fu_215_p2 ;
   op13_reg_326__temp = op13_reg_326 ;
   icmp_ln16_fu_145_p2__temp = icmp_ln16_fu_145_p2 ;
   ap_rst__temp = ap_rst ;
   G4__temp = G4 ;
   icmp_ln27_reg_301__temp = icmp_ln27_reg_301 ;
   op5_1_reg_296__temp = op5_1_reg_296 ;
   op3_fu_167_p2__temp = op3_fu_167_p2 ;
   i1__temp = i1 ;
   op7_fu_176_p2__temp = op7_fu_176_p2 ;
   ap_clk__temp = ap_clk ;
   temp1__temp = temp1 ;
   op5_2_fu_139_p2__temp = op5_2_fu_139_p2 ;
   op14_fu_225_p2__temp = op14_fu_225_p2 ;

               icmp_ln27_reg_301 =  icmp_ln27_reg_301__temp ;
               icmp_ln16_reg_291 =  icmp_ln16_reg_291__temp ;
               icmp_ln27_reg_301 =  icmp_ln27_reg_301__temp ;
               icmp_ln16_reg_291 =  icmp_ln16_reg_291__temp ;
       if(((icmp_ln27_reg_301 == 0) && (icmp_ln16_reg_291 == 0)) && (1 == ap_CS_fsm_state3))
       {
           op3_reg_306 =   ( ( do_twos_complement(  ( G1 & 4294967295 )  , 32 )  * do_twos_complement(  ( i2 & 4294967295 )  , 32 )  ) & 4294967295 ) ;
       }
       if((icmp_ln27_reg_301 == 1) && (1 == ap_CS_fsm_state3))
       {
           op6_3_reg_311 =   ( ( do_twos_complement(  ( G2 & 4294967295 )  , 32 )  * do_twos_complement(  ( i4 & 4294967295 )  , 32 )  ) & 4294967295 ) ;
       }
       if(1 == ap_CS_fsm_state3)
       {
           op8_reg_321 =   ( ( do_twos_complement(  ( G2 & 4294967295 )  , 32 )  * do_twos_complement(  ( i3 & 4294967295 )  , 32 )  ) & 4294967295 ) ;
           op7_reg_316 =   ( ( do_twos_complement(  ( G1 & 4294967295 )  , 32 )  * do_twos_complement(  ( i4 & 4294967295 )  , 32 )  ) & 4294967295 ) ;
       }
       goto ap_ST_fsm_state4;

   ap_ST_fsm_state4:

    ap_CS_fsm_state1 = 0;
    ap_CS_fsm_state2 = 0;
    ap_CS_fsm_state3 = 0;
    ap_CS_fsm_state4 = 1;
    ap_CS_fsm_state5 = 0;
   op7_fu_176_p0__temp = op7_fu_176_p0 ;
   op6_4_fu_199_p1__temp = op6_4_fu_199_p1 ;
   op6_3_fu_172_p1__temp = op6_3_fu_172_p1 ;
   op6_3_fu_172_p0__temp = op6_3_fu_172_p0 ;
   op4_fu_127_p0__temp = op4_fu_127_p0 ;
   add_ln47_fu_210_p1__temp = add_ln47_fu_210_p1 ;
   op8_fu_180_p1__temp = op8_fu_180_p1 ;
   op3_fu_167_p1__temp = op3_fu_167_p1 ;
   op8_fu_180_p0__temp = op8_fu_180_p0 ;
   op7_fu_176_p1__temp = op7_fu_176_p1 ;
   op5_2_fu_139_p1__temp = op5_2_fu_139_p1 ;
   op5_fu_133_p1__temp = op5_fu_133_p1 ;
   ap_CS_fsm_state4__temp = ap_CS_fsm_state4 ;
   op3_fu_167_p0__temp = op3_fu_167_p0 ;
   op4_fu_127_p1__temp = op4_fu_127_p1 ;
   op5_2_fu_139_p0__temp = op5_2_fu_139_p0 ;
   icmp_ln16_fu_145_p0__temp = icmp_ln16_fu_145_p0 ;
   op5_fu_133_p0__temp = op5_fu_133_p0 ;
   reg1__temp = reg1 ;
   mux_out1__temp = mux_out1 ;
   op8_reg_321__temp = op8_reg_321 ;
   op7_reg_316__temp = op7_reg_316 ;
   op8_fu_180_p2__temp = op8_fu_180_p2 ;
   ap_done__temp = ap_done ;
   i3__temp = i3 ;
   o4__temp = o4 ;
   icmp_ln16_reg_291_temp_1__temp = icmp_ln16_reg_291_temp_1 ;
   GG2__temp = GG2 ;
   op4_reg_273__temp = op4_reg_273 ;
   add_ln49_fu_220_p2__temp = add_ln49_fu_220_p2 ;
   G1__temp = G1 ;
   op6_5_fu_203_p3__temp = op6_5_fu_203_p3 ;
   ap_CS_fsm__temp = ap_CS_fsm ;
   o1_ap_vld__temp = o1_ap_vld ;
   ap_return1__temp = ap_return1 ;
   op6_3_fu_172_p2__temp = op6_3_fu_172_p2 ;
   icmp_ln16_fu_145_p2_temp_0__temp = icmp_ln16_fu_145_p2_temp_0 ;
   o3__temp = o3 ;
   icmp_ln27_fu_162_p2__temp = icmp_ln27_fu_162_p2 ;
   temp12__temp = temp12 ;
   ap_start__temp = ap_start ;
   op5_3_fu_155_p3__temp = op5_3_fu_155_p3 ;
   add_ln52_1_fu_236_p2__temp = add_ln52_1_fu_236_p2 ;
   GG1__temp = GG1 ;
   G3__temp = G3 ;
   G2__temp = G2 ;
   i6__temp = i6 ;
   icmp_ln27_reg_301_temp_2__temp = icmp_ln27_reg_301_temp_2 ;
   i2__temp = i2 ;
   op5_reg_280__temp = op5_reg_280 ;
   reg_out1__temp = reg_out1 ;
   icmp_ln16_reg_291__temp = icmp_ln16_reg_291 ;
   op6_3_reg_311__temp = op6_3_reg_311 ;
   o2_ap_vld__temp = o2_ap_vld ;
   op6_2_fu_192_p3__temp = op6_2_fu_192_p3 ;
   add_ln52_fu_230_p2__temp = add_ln52_fu_230_p2 ;
   op6_fu_184_p2__temp = op6_fu_184_p2 ;
   op14_reg_332__temp = op14_reg_332 ;
   op5_fu_133_p2__temp = op5_fu_133_p2 ;
   op4_fu_127_p2__temp = op4_fu_127_p2 ;
   op6_4_fu_199_p2__temp = op6_4_fu_199_p2 ;
   trigger_in__temp = trigger_in ;
   ap_return1_ap_vld__temp = ap_return1_ap_vld ;
   ap_ready__temp = ap_ready ;
   op5_1_fu_150_p2__temp = op5_1_fu_150_p2 ;
   op3_reg_306__temp = op3_reg_306 ;
   ap_idle__temp = ap_idle ;
   mux_out_neg1__temp = mux_out_neg1 ;
   o1__temp = o1 ;
   i4__temp = i4 ;
   op5_2_reg_285__temp = op5_2_reg_285 ;
   add_ln47_fu_210_p2__temp = add_ln47_fu_210_p2 ;
   op6_1_fu_188_p2__temp = op6_1_fu_188_p2 ;
   ap_NS_fsm__temp = ap_NS_fsm ;
   o2__temp = o2 ;
   temp2__temp = temp2 ;
   op13_fu_215_p2__temp = op13_fu_215_p2 ;
   op13_reg_326__temp = op13_reg_326 ;
   icmp_ln16_fu_145_p2__temp = icmp_ln16_fu_145_p2 ;
   ap_rst__temp = ap_rst ;
   G4__temp = G4 ;
   icmp_ln27_reg_301__temp = icmp_ln27_reg_301 ;
   op5_1_reg_296__temp = op5_1_reg_296 ;
   op3_fu_167_p2__temp = op3_fu_167_p2 ;
   i1__temp = i1 ;
   op7_fu_176_p2__temp = op7_fu_176_p2 ;
   ap_clk__temp = ap_clk ;
   temp1__temp = temp1 ;
   op5_2_fu_139_p2__temp = op5_2_fu_139_p2 ;
   op14_fu_225_p2__temp = op14_fu_225_p2 ;

               trigger_in =  ( trigger_in__temp  & 1 ) ;
               trigger_in =  ( trigger_in__temp  & 1 ) ;
       if(1 == ap_CS_fsm_state4)
       {
           op14_reg_332 =   ( (  ( ( op8_reg_321__temp  + ( i6__temp  & 4294967295 )  ) & 4294967295 )  + op7_reg_316__temp  ) & 4294967295 ) ;
           op13_reg_326 =   ( (  ( ( do_twos_complement(  (  ( ( icmp_ln27_reg_301__temp  & 1 ) & 18446744073709551615 )  == 1 ?  ( ( do_twos_complement( op6_3_reg_311__temp  , 32 )  - do_twos_complement(  ( i3 & 4294967295 )  , 32 )  ) & 4294967295 )  :   (  ( ( icmp_ln16_reg_291__temp  & 1 ) & 18446744073709551615 )  == 1 ?  ( ( op5_1_reg_296__temp  - op4_reg_273__temp  ) & 4294967295 )  :   ( ( op5_2_reg_285__temp  - op3_reg_306__temp  ) & 4294967295 )  )  )  , 32 )  + do_twos_complement(  ( G1 & 4294967295 )  , 32 )  ) & 4294967295 )  + op4_reg_273__temp  ) & 4294967295 ) ;
       }
       if((1 == ap_CS_fsm_state4) && (trigger_in == 1))
       {
           reg1 =  ( ~ (  (  ( (  ( ( trigger_in__temp  & 1 )  == 1 ? 1 :  0 )  &  ( 1 == ap_CS_fsm_state4__temp  ? 1 : 0 )  ) & 1 )  == 1 ?  ( reg1__temp  & 4294967295 )  :  op13_reg_326__temp  )  ) );
       }
       goto ap_ST_fsm_state5;

   ap_ST_fsm_state5:

    ap_CS_fsm_state1 = 0;
    ap_CS_fsm_state2 = 0;
    ap_CS_fsm_state3 = 0;
    ap_CS_fsm_state4 = 0;
    ap_CS_fsm_state5 = 1;
   op7_fu_176_p0__temp = op7_fu_176_p0 ;
   op6_4_fu_199_p1__temp = op6_4_fu_199_p1 ;
   op6_3_fu_172_p1__temp = op6_3_fu_172_p1 ;
   op6_3_fu_172_p0__temp = op6_3_fu_172_p0 ;
   op4_fu_127_p0__temp = op4_fu_127_p0 ;
   add_ln47_fu_210_p1__temp = add_ln47_fu_210_p1 ;
   op8_fu_180_p1__temp = op8_fu_180_p1 ;
   op3_fu_167_p1__temp = op3_fu_167_p1 ;
   op8_fu_180_p0__temp = op8_fu_180_p0 ;
   op7_fu_176_p1__temp = op7_fu_176_p1 ;
   op5_2_fu_139_p1__temp = op5_2_fu_139_p1 ;
   op5_fu_133_p1__temp = op5_fu_133_p1 ;
   ap_CS_fsm_state4__temp = ap_CS_fsm_state4 ;
   op3_fu_167_p0__temp = op3_fu_167_p0 ;
   op4_fu_127_p1__temp = op4_fu_127_p1 ;
   op5_2_fu_139_p0__temp = op5_2_fu_139_p0 ;
   icmp_ln16_fu_145_p0__temp = icmp_ln16_fu_145_p0 ;
   op5_fu_133_p0__temp = op5_fu_133_p0 ;
   reg1__temp = reg1 ;
   mux_out1__temp = mux_out1 ;
   op8_reg_321__temp = op8_reg_321 ;
   op7_reg_316__temp = op7_reg_316 ;
   op8_fu_180_p2__temp = op8_fu_180_p2 ;
   ap_done__temp = ap_done ;
   i3__temp = i3 ;
   o4__temp = o4 ;
   icmp_ln16_reg_291_temp_1__temp = icmp_ln16_reg_291_temp_1 ;
   GG2__temp = GG2 ;
   op4_reg_273__temp = op4_reg_273 ;
   add_ln49_fu_220_p2__temp = add_ln49_fu_220_p2 ;
   G1__temp = G1 ;
   op6_5_fu_203_p3__temp = op6_5_fu_203_p3 ;
   ap_CS_fsm__temp = ap_CS_fsm ;
   o1_ap_vld__temp = o1_ap_vld ;
   ap_return1__temp = ap_return1 ;
   op6_3_fu_172_p2__temp = op6_3_fu_172_p2 ;
   icmp_ln16_fu_145_p2_temp_0__temp = icmp_ln16_fu_145_p2_temp_0 ;
   o3__temp = o3 ;
   icmp_ln27_fu_162_p2__temp = icmp_ln27_fu_162_p2 ;
   temp12__temp = temp12 ;
   ap_start__temp = ap_start ;
   op5_3_fu_155_p3__temp = op5_3_fu_155_p3 ;
   add_ln52_1_fu_236_p2__temp = add_ln52_1_fu_236_p2 ;
   GG1__temp = GG1 ;
   G3__temp = G3 ;
   G2__temp = G2 ;
   i6__temp = i6 ;
   icmp_ln27_reg_301_temp_2__temp = icmp_ln27_reg_301_temp_2 ;
   i2__temp = i2 ;
   op5_reg_280__temp = op5_reg_280 ;
   reg_out1__temp = reg_out1 ;
   icmp_ln16_reg_291__temp = icmp_ln16_reg_291 ;
   op6_3_reg_311__temp = op6_3_reg_311 ;
   o2_ap_vld__temp = o2_ap_vld ;
   op6_2_fu_192_p3__temp = op6_2_fu_192_p3 ;
   add_ln52_fu_230_p2__temp = add_ln52_fu_230_p2 ;
   op6_fu_184_p2__temp = op6_fu_184_p2 ;
   op14_reg_332__temp = op14_reg_332 ;
   op5_fu_133_p2__temp = op5_fu_133_p2 ;
   op4_fu_127_p2__temp = op4_fu_127_p2 ;
   op6_4_fu_199_p2__temp = op6_4_fu_199_p2 ;
   trigger_in__temp = trigger_in ;
   ap_return1_ap_vld__temp = ap_return1_ap_vld ;
   ap_ready__temp = ap_ready ;
   op5_1_fu_150_p2__temp = op5_1_fu_150_p2 ;
   op3_reg_306__temp = op3_reg_306 ;
   ap_idle__temp = ap_idle ;
   mux_out_neg1__temp = mux_out_neg1 ;
   o1__temp = o1 ;
   i4__temp = i4 ;
   op5_2_reg_285__temp = op5_2_reg_285 ;
   add_ln47_fu_210_p2__temp = add_ln47_fu_210_p2 ;
   op6_1_fu_188_p2__temp = op6_1_fu_188_p2 ;
   ap_NS_fsm__temp = ap_NS_fsm ;
   o2__temp = o2 ;
   temp2__temp = temp2 ;
   op13_fu_215_p2__temp = op13_fu_215_p2 ;
   op13_reg_326__temp = op13_reg_326 ;
   icmp_ln16_fu_145_p2__temp = icmp_ln16_fu_145_p2 ;
   ap_rst__temp = ap_rst ;
   G4__temp = G4 ;
   icmp_ln27_reg_301__temp = icmp_ln27_reg_301 ;
   op5_1_reg_296__temp = op5_1_reg_296 ;
   op3_fu_167_p2__temp = op3_fu_167_p2 ;
   i1__temp = i1 ;
   op7_fu_176_p2__temp = op7_fu_176_p2 ;
   ap_clk__temp = ap_clk ;
   temp1__temp = temp1 ;
   op5_2_fu_139_p2__temp = op5_2_fu_139_p2 ;
   op14_fu_225_p2__temp = op14_fu_225_p2 ;

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
           ap_return1_ap_vld = 1;
               ap_return1 =  ( (  ( (  (  ( (  ( ( trigger_in & 1 )  == 1 ? 1 :  0 )  &  ( 1 == ap_CS_fsm_state4 ? 1 : 0 )  ) & 1 )  == 1 ?  ( reg1 & 4294967295 )  :  op13_reg_326 )  + op14_reg_332 ) & 4294967295 )  +  ( ( ( o3 & 4294967295 )  + ( o4 & 4294967295 )  ) & 4294967295 )  ) & 4294967295 ) ;
               o1 =   ( op13_reg_326__temp  & 4294967295 ) ;
               o2 =   ( op14_reg_332__temp  & 4294967295 ) ;
       }
       if(1 == ap_CS_fsm_state5)
       {
           o1_ap_vld =  1;
               ap_return1 =  ( (  ( (  (  ( (  ( ( trigger_in & 1 )  == 1 ? 1 :  0 )  &  ( 1 == ap_CS_fsm_state4 ? 1 : 0 )  ) & 1 )  == 1 ?  ( reg1 & 4294967295 )  :  op13_reg_326 )  + op14_reg_332 ) & 4294967295 )  +  ( ( ( o3 & 4294967295 )  + ( o4 & 4294967295 )  ) & 4294967295 )  ) & 4294967295 ) ;
               o1 =   ( op13_reg_326__temp  & 4294967295 ) ;
               o2 =   ( op14_reg_332__temp  & 4294967295 ) ;
       }
       if(1 == ap_CS_fsm_state5)
       {
           o2_ap_vld =  1;
               ap_return1 =  ( (  ( (  (  ( (  ( ( trigger_in & 1 )  == 1 ? 1 :  0 )  &  ( 1 == ap_CS_fsm_state4 ? 1 : 0 )  ) & 1 )  == 1 ?  ( reg1 & 4294967295 )  :  op13_reg_326 )  + op14_reg_332 ) & 4294967295 )  +  ( ( ( o3 & 4294967295 )  + ( o4 & 4294967295 )  ) & 4294967295 )  ) & 4294967295 ) ;
               o1 =   ( op13_reg_326__temp  & 4294967295 ) ;
               o2 =   ( op14_reg_332__temp  & 4294967295 ) ;
       }
       if(ap_done==1){
           goto end;
       }
       goto ap_ST_fsm_state1;
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
    *ap_return1_ap_vld__1=ap_return1_ap_vld;
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
    *trigger_in__1=trigger_in;
       return;
}
