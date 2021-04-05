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
void hls_macc(unsigned long long int *G1__1,unsigned long long int *G2__1,unsigned long long int *G3__1,unsigned long long int *G4__1,unsigned long long int *GG1__1,unsigned long long int *GG2__1,unsigned long long int *ap_clk__1,unsigned long long int *ap_done__1,unsigned long long int *ap_idle__1,unsigned long long int *ap_ready__1,unsigned long long int *ap_return1__1,unsigned long long int *ap_return1_ap_vld__1,unsigned long long int *ap_rst__1,unsigned long long int *ap_start__1,unsigned long long int *i1__1,unsigned long long int *i2__1,unsigned long long int *i3__1,unsigned long long int *i4__1,unsigned long long int *i6__1,unsigned long long int *o1__1,unsigned long long int *o1_ap_vld__1,unsigned long long int *o2__1,unsigned long long int *o2_ap_vld__1,unsigned long long int *o3__1,unsigned long long int *o4__1,int dummy){
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
   long long int ap_CS_fsm_state1=0;
   long long int ap_CS_fsm_state2=0;
   long long int ap_CS_fsm_state3=0;
   long long int ap_CS_fsm_state4=0;
   long long int ap_CS_fsm_state5=0;
   long long int ap_CS_fsm_state6=0;
   long long int ap_CS_fsm_state7=0;
   long long int ap_CS_fsm_state8=0;
   long long int op6_4_fu_199_p1=0;
   long long int op6_4_fu_199_p1__temp=0;
   long long int tmp1_fu_220_p1=0;
   long long int tmp1_fu_220_p1__temp=0;
   long long int tmp_fu_145_p0=0;
   long long int tmp_fu_145_p0__temp=0;
   unsigned long long int G1__temp=0;
   unsigned long long int G2__temp=0;
   unsigned long long int G3__temp=0;
   unsigned long long int G4__temp=0;
   unsigned long long int GG1__temp=0;
   unsigned long long int GG2__temp=0;
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
   unsigned long long int grp_fu_127_p2=0;
   unsigned long long int grp_fu_127_p2__temp=0;
   unsigned long long int grp_fu_133_p2=0;
   unsigned long long int grp_fu_133_p2__temp=0;
   unsigned long long int grp_fu_139_p2=0;
   unsigned long long int grp_fu_139_p2__temp=0;
   unsigned long long int grp_fu_167_p2=0;
   unsigned long long int grp_fu_167_p2__temp=0;
   unsigned long long int grp_fu_172_p2=0;
   unsigned long long int grp_fu_172_p2__temp=0;
   unsigned long long int grp_fu_176_p2=0;
   unsigned long long int grp_fu_176_p2__temp=0;
   unsigned long long int grp_fu_180_p2=0;
   unsigned long long int grp_fu_180_p2__temp=0;
   unsigned long long int i1__temp=0;
   unsigned long long int i2__temp=0;
   unsigned long long int i3__temp=0;
   unsigned long long int i4__temp=0;
   unsigned long long int i6__temp=0;
   unsigned long long int o1__temp=0;
   unsigned long long int o1_ap_vld__temp=0;
   unsigned long long int o2__temp=0;
   unsigned long long int o2_ap_vld__temp=0;
   unsigned long long int o3__temp=0;
   unsigned long long int o4__temp=0;
   unsigned long long int op13_fu_224_p2=0;
   unsigned long long int op13_fu_224_p2__temp=0;
   unsigned long long int op14_fu_215_p2=0;
   unsigned long long int op14_fu_215_p2__temp=0;
   unsigned long long int op14_reg_346=0;
   unsigned long long int op14_reg_346__temp=0;
   unsigned long long int op3_reg_321=0;
   unsigned long long int op3_reg_321__temp=0;
   unsigned long long int op4_reg_283=0;
   unsigned long long int op4_reg_283__temp=0;
   unsigned long long int op5_1_fu_150_p2=0;
   unsigned long long int op5_1_fu_150_p2__temp=0;
   unsigned long long int op5_1_reg_306=0;
   unsigned long long int op5_1_reg_306__temp=0;
   unsigned long long int op5_2_reg_295=0;
   unsigned long long int op5_2_reg_295__temp=0;
   unsigned long long int op5_3_fu_155_p3=0;
   unsigned long long int op5_3_fu_155_p3__temp=0;
   unsigned long long int op5_reg_290=0;
   unsigned long long int op5_reg_290__temp=0;
   unsigned long long int op6_1_fu_203_p3=0;
   unsigned long long int op6_1_fu_203_p3__temp=0;
   unsigned long long int op6_1_reg_341=0;
   unsigned long long int op6_1_reg_341__temp=0;
   unsigned long long int op6_2_fu_188_p2=0;
   unsigned long long int op6_2_fu_188_p2__temp=0;
   unsigned long long int op6_3_reg_326=0;
   unsigned long long int op6_3_reg_326__temp=0;
   unsigned long long int op6_4_fu_199_p2=0;
   unsigned long long int op6_4_fu_199_p2__temp=0;
   unsigned long long int op6_5_fu_192_p3=0;
   unsigned long long int op6_5_fu_192_p3__temp=0;
   unsigned long long int op6_fu_184_p2=0;
   unsigned long long int op6_fu_184_p2__temp=0;
   unsigned long long int op7_reg_331=0;
   unsigned long long int op7_reg_331__temp=0;
   unsigned long long int op8_reg_336=0;
   unsigned long long int op8_reg_336__temp=0;
   unsigned long long int tmp1_fu_220_p2=0;
   unsigned long long int tmp1_fu_220_p2__temp=0;
   unsigned long long int tmp2_fu_210_p2=0;
   unsigned long long int tmp2_fu_210_p2__temp=0;
   unsigned long long int tmp3_fu_235_p2=0;
   unsigned long long int tmp3_fu_235_p2__temp=0;
   unsigned long long int tmp4_fu_230_p2=0;
   unsigned long long int tmp4_fu_230_p2__temp=0;
   unsigned long long int tmp4_reg_352=0;
   unsigned long long int tmp4_reg_352__temp=0;
   unsigned long long int tmp_6_fu_162_p2=0;
   unsigned long long int tmp_6_fu_162_p2__temp=0;
   unsigned long long int tmp_6_reg_311=0;
   unsigned long long int tmp_6_reg_311__temp=0;
   unsigned long long int tmp_6_reg_311_temp_1=0;
   unsigned long long int tmp_6_reg_311_temp_1__temp=0;
   unsigned long long int tmp_fu_145_p2=0;
   unsigned long long int tmp_fu_145_p2__temp=0;
   unsigned long long int tmp_fu_145_p2_temp_0=0;
   unsigned long long int tmp_fu_145_p2_temp_0__temp=0;
   unsigned long long int tmp_reg_301=0;
   unsigned long long int tmp_reg_301__temp=0;
   unsigned long long int tmp_reg_301_temp_2=0;
   unsigned long long int tmp_reg_301_temp_2__temp=0;
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
	ap_CS_fsm_state8 = 0;
   tmp1_fu_220_p1__temp = tmp1_fu_220_p1 ;
   op6_4_fu_199_p1__temp = op6_4_fu_199_p1 ;
   tmp_fu_145_p0__temp = tmp_fu_145_p0 ;
   op6_2_fu_188_p2__temp = op6_2_fu_188_p2 ;
   ap_rst__temp = ap_rst ;
   o4__temp = o4 ;
   op3_reg_321__temp = op3_reg_321 ;
   ap_start__temp = ap_start ;
   o1__temp = o1 ;
   grp_fu_133_p2__temp = grp_fu_133_p2 ;
   op7_reg_331__temp = op7_reg_331 ;
   ap_clk__temp = ap_clk ;
   o2_ap_vld__temp = o2_ap_vld ;
   op6_1_reg_341__temp = op6_1_reg_341 ;
   op14_reg_346__temp = op14_reg_346 ;
   grp_fu_180_p2__temp = grp_fu_180_p2 ;
   G3__temp = G3 ;
   op5_3_fu_155_p3__temp = op5_3_fu_155_p3 ;
   op14_fu_215_p2__temp = op14_fu_215_p2 ;
   tmp_6_reg_311__temp = tmp_6_reg_311 ;
   ap_return1_ap_vld__temp = ap_return1_ap_vld ;
   ap_done__temp = ap_done ;
   op13_fu_224_p2__temp = op13_fu_224_p2 ;
   i3__temp = i3 ;
   tmp2_fu_210_p2__temp = tmp2_fu_210_p2 ;
   grp_fu_172_p2__temp = grp_fu_172_p2 ;
   tmp1_fu_220_p2__temp = tmp1_fu_220_p2 ;
   o1_ap_vld__temp = o1_ap_vld ;
   op6_4_fu_199_p2__temp = op6_4_fu_199_p2 ;
   i6__temp = i6 ;
   grp_fu_139_p2__temp = grp_fu_139_p2 ;
   tmp_reg_301_temp_2__temp = tmp_reg_301_temp_2 ;
   tmp_6_reg_311_temp_1__temp = tmp_6_reg_311_temp_1 ;
   tmp_fu_145_p2_temp_0__temp = tmp_fu_145_p2_temp_0 ;
   op5_1_reg_306__temp = op5_1_reg_306 ;
   G2__temp = G2 ;
   op6_5_fu_192_p3__temp = op6_5_fu_192_p3 ;
   op4_reg_283__temp = op4_reg_283 ;
   ap_idle__temp = ap_idle ;
   o3__temp = o3 ;
   grp_fu_127_p2__temp = grp_fu_127_p2 ;
   op5_reg_290__temp = op5_reg_290 ;
   ap_CS_fsm__temp = ap_CS_fsm ;
   op5_1_fu_150_p2__temp = op5_1_fu_150_p2 ;
   tmp4_fu_230_p2__temp = tmp4_fu_230_p2 ;
   ap_return1__temp = ap_return1 ;
   tmp4_reg_352__temp = tmp4_reg_352 ;
   tmp_6_fu_162_p2__temp = tmp_6_fu_162_p2 ;
   GG1__temp = GG1 ;
   G1__temp = G1 ;
   op6_1_fu_203_p3__temp = op6_1_fu_203_p3 ;
   op5_2_reg_295__temp = op5_2_reg_295 ;
   i2__temp = i2 ;
   grp_fu_167_p2__temp = grp_fu_167_p2 ;
   ap_NS_fsm__temp = ap_NS_fsm ;
   grp_fu_176_p2__temp = grp_fu_176_p2 ;
   i1__temp = i1 ;
   o2__temp = o2 ;
   op8_reg_336__temp = op8_reg_336 ;
   i4__temp = i4 ;
   op6_fu_184_p2__temp = op6_fu_184_p2 ;
   GG2__temp = GG2 ;
   tmp3_fu_235_p2__temp = tmp3_fu_235_p2 ;
   G4__temp = G4 ;
   tmp_fu_145_p2__temp = tmp_fu_145_p2 ;
   ap_ready__temp = ap_ready ;
   op6_3_reg_326__temp = op6_3_reg_326 ;
   tmp_reg_301__temp = tmp_reg_301 ;

       if((0 == ap_start) && (1 == ap_CS_fsm_state1))
       {
           ap_idle =  1;
       }
   if(((1 == ap_CS_fsm_state1) && (ap_start == 1)) == 1){
       goto ap_ST_fsm_state2;
   }
   if(((1 == ap_CS_fsm_state1) && (ap_start == 1)) == 0){
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
	ap_CS_fsm_state8 = 0;
   tmp1_fu_220_p1__temp = tmp1_fu_220_p1 ;
   op6_4_fu_199_p1__temp = op6_4_fu_199_p1 ;
   tmp_fu_145_p0__temp = tmp_fu_145_p0 ;
   op6_2_fu_188_p2__temp = op6_2_fu_188_p2 ;
   ap_rst__temp = ap_rst ;
   o4__temp = o4 ;
   op3_reg_321__temp = op3_reg_321 ;
   ap_start__temp = ap_start ;
   o1__temp = o1 ;
   grp_fu_133_p2__temp = grp_fu_133_p2 ;
   op7_reg_331__temp = op7_reg_331 ;
   ap_clk__temp = ap_clk ;
   o2_ap_vld__temp = o2_ap_vld ;
   op6_1_reg_341__temp = op6_1_reg_341 ;
   op14_reg_346__temp = op14_reg_346 ;
   grp_fu_180_p2__temp = grp_fu_180_p2 ;
   G3__temp = G3 ;
   op5_3_fu_155_p3__temp = op5_3_fu_155_p3 ;
   op14_fu_215_p2__temp = op14_fu_215_p2 ;
   tmp_6_reg_311__temp = tmp_6_reg_311 ;
   ap_return1_ap_vld__temp = ap_return1_ap_vld ;
   ap_done__temp = ap_done ;
   op13_fu_224_p2__temp = op13_fu_224_p2 ;
   i3__temp = i3 ;
   tmp2_fu_210_p2__temp = tmp2_fu_210_p2 ;
   grp_fu_172_p2__temp = grp_fu_172_p2 ;
   tmp1_fu_220_p2__temp = tmp1_fu_220_p2 ;
   o1_ap_vld__temp = o1_ap_vld ;
   op6_4_fu_199_p2__temp = op6_4_fu_199_p2 ;
   i6__temp = i6 ;
   grp_fu_139_p2__temp = grp_fu_139_p2 ;
   tmp_reg_301_temp_2__temp = tmp_reg_301_temp_2 ;
   tmp_6_reg_311_temp_1__temp = tmp_6_reg_311_temp_1 ;
   tmp_fu_145_p2_temp_0__temp = tmp_fu_145_p2_temp_0 ;
   op5_1_reg_306__temp = op5_1_reg_306 ;
   G2__temp = G2 ;
   op6_5_fu_192_p3__temp = op6_5_fu_192_p3 ;
   op4_reg_283__temp = op4_reg_283 ;
   ap_idle__temp = ap_idle ;
   o3__temp = o3 ;
   grp_fu_127_p2__temp = grp_fu_127_p2 ;
   op5_reg_290__temp = op5_reg_290 ;
   ap_CS_fsm__temp = ap_CS_fsm ;
   op5_1_fu_150_p2__temp = op5_1_fu_150_p2 ;
   tmp4_fu_230_p2__temp = tmp4_fu_230_p2 ;
   ap_return1__temp = ap_return1 ;
   tmp4_reg_352__temp = tmp4_reg_352 ;
   tmp_6_fu_162_p2__temp = tmp_6_fu_162_p2 ;
   GG1__temp = GG1 ;
   G1__temp = G1 ;
   op6_1_fu_203_p3__temp = op6_1_fu_203_p3 ;
   op5_2_reg_295__temp = op5_2_reg_295 ;
   i2__temp = i2 ;
   grp_fu_167_p2__temp = grp_fu_167_p2 ;
   ap_NS_fsm__temp = ap_NS_fsm ;
   grp_fu_176_p2__temp = grp_fu_176_p2 ;
   i1__temp = i1 ;
   o2__temp = o2 ;
   op8_reg_336__temp = op8_reg_336 ;
   i4__temp = i4 ;
   op6_fu_184_p2__temp = op6_fu_184_p2 ;
   GG2__temp = GG2 ;
   tmp3_fu_235_p2__temp = tmp3_fu_235_p2 ;
   G4__temp = G4 ;
   tmp_fu_145_p2__temp = tmp_fu_145_p2 ;
   ap_ready__temp = ap_ready ;
   op6_3_reg_326__temp = op6_3_reg_326 ;
   tmp_reg_301__temp = tmp_reg_301 ;

       if(1 == ap_CS_fsm_state2)
       {
           op5_reg_290 =   ( ( ( G1__temp  & 4294967295 )  * ( i3__temp  & 4294967295 )  ) & 4294967295 ) ;
           op5_2_reg_295 =   ( ( ( i4__temp  & 4294967295 )  * ( i3__temp  & 4294967295 )  ) & 4294967295 ) ;
           op4_reg_283 =   ( ( ( G2__temp  & 4294967295 )  * ( i1__temp  & 4294967295 )  ) & 4294967295 ) ;
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
	ap_CS_fsm_state8 = 0;
   tmp1_fu_220_p1__temp = tmp1_fu_220_p1 ;
   op6_4_fu_199_p1__temp = op6_4_fu_199_p1 ;
   tmp_fu_145_p0__temp = tmp_fu_145_p0 ;
   op6_2_fu_188_p2__temp = op6_2_fu_188_p2 ;
   ap_rst__temp = ap_rst ;
   o4__temp = o4 ;
   op3_reg_321__temp = op3_reg_321 ;
   ap_start__temp = ap_start ;
   o1__temp = o1 ;
   grp_fu_133_p2__temp = grp_fu_133_p2 ;
   op7_reg_331__temp = op7_reg_331 ;
   ap_clk__temp = ap_clk ;
   o2_ap_vld__temp = o2_ap_vld ;
   op6_1_reg_341__temp = op6_1_reg_341 ;
   op14_reg_346__temp = op14_reg_346 ;
   grp_fu_180_p2__temp = grp_fu_180_p2 ;
   G3__temp = G3 ;
   op5_3_fu_155_p3__temp = op5_3_fu_155_p3 ;
   op14_fu_215_p2__temp = op14_fu_215_p2 ;
   tmp_6_reg_311__temp = tmp_6_reg_311 ;
   ap_return1_ap_vld__temp = ap_return1_ap_vld ;
   ap_done__temp = ap_done ;
   op13_fu_224_p2__temp = op13_fu_224_p2 ;
   i3__temp = i3 ;
   tmp2_fu_210_p2__temp = tmp2_fu_210_p2 ;
   grp_fu_172_p2__temp = grp_fu_172_p2 ;
   tmp1_fu_220_p2__temp = tmp1_fu_220_p2 ;
   o1_ap_vld__temp = o1_ap_vld ;
   op6_4_fu_199_p2__temp = op6_4_fu_199_p2 ;
   i6__temp = i6 ;
   grp_fu_139_p2__temp = grp_fu_139_p2 ;
   tmp_reg_301_temp_2__temp = tmp_reg_301_temp_2 ;
   tmp_6_reg_311_temp_1__temp = tmp_6_reg_311_temp_1 ;
   tmp_fu_145_p2_temp_0__temp = tmp_fu_145_p2_temp_0 ;
   op5_1_reg_306__temp = op5_1_reg_306 ;
   G2__temp = G2 ;
   op6_5_fu_192_p3__temp = op6_5_fu_192_p3 ;
   op4_reg_283__temp = op4_reg_283 ;
   ap_idle__temp = ap_idle ;
   o3__temp = o3 ;
   grp_fu_127_p2__temp = grp_fu_127_p2 ;
   op5_reg_290__temp = op5_reg_290 ;
   ap_CS_fsm__temp = ap_CS_fsm ;
   op5_1_fu_150_p2__temp = op5_1_fu_150_p2 ;
   tmp4_fu_230_p2__temp = tmp4_fu_230_p2 ;
   ap_return1__temp = ap_return1 ;
   tmp4_reg_352__temp = tmp4_reg_352 ;
   tmp_6_fu_162_p2__temp = tmp_6_fu_162_p2 ;
   GG1__temp = GG1 ;
   G1__temp = G1 ;
   op6_1_fu_203_p3__temp = op6_1_fu_203_p3 ;
   op5_2_reg_295__temp = op5_2_reg_295 ;
   i2__temp = i2 ;
   grp_fu_167_p2__temp = grp_fu_167_p2 ;
   ap_NS_fsm__temp = ap_NS_fsm ;
   grp_fu_176_p2__temp = grp_fu_176_p2 ;
   i1__temp = i1 ;
   o2__temp = o2 ;
   op8_reg_336__temp = op8_reg_336 ;
   i4__temp = i4 ;
   op6_fu_184_p2__temp = op6_fu_184_p2 ;
   GG2__temp = GG2 ;
   tmp3_fu_235_p2__temp = tmp3_fu_235_p2 ;
   G4__temp = G4 ;
   tmp_fu_145_p2__temp = tmp_fu_145_p2 ;
   ap_ready__temp = ap_ready ;
   op6_3_reg_326__temp = op6_3_reg_326 ;
   tmp_reg_301__temp = tmp_reg_301 ;

       if(1 == ap_CS_fsm_state3)
       {
           tmp_reg_301 =   ( do_twos_complement(  ( G1__temp  & 4294967295 )  , 63 )  > do_twos_complement(10 , 63 )  ? 1 :  0 ) ;
           tmp_6_reg_311 =   ( do_twos_complement(  (  ( (  ( do_twos_complement(  ( G1__temp  & 4294967295 )  , 63 )  > do_twos_complement(10 , 63 )  ? 1 :  0 )  & 1 ) & 18446744073709551615 )  == 1 ?  ( ( op5_reg_290__temp  + ( GG1__temp  & 4294967295 )  ) & 4294967295 )  :  op5_2_reg_295__temp  )  , 63 )  < do_twos_complement( op4_reg_283__temp  , 63 )  ? 1 : 0 ) ;
           op5_1_reg_306 =   ( ( op5_reg_290__temp  + ( GG1__temp  & 4294967295 )  ) & 4294967295 ) ;
       }
       goto ap_ST_fsm_state4;

   ap_ST_fsm_state4:

	ap_CS_fsm_state1 = 0;
	ap_CS_fsm_state2 = 0;
	ap_CS_fsm_state3 = 0;
	ap_CS_fsm_state4 = 1;
	ap_CS_fsm_state5 = 0;
	ap_CS_fsm_state6 = 0;
	ap_CS_fsm_state7 = 0;
	ap_CS_fsm_state8 = 0;
   tmp1_fu_220_p1__temp = tmp1_fu_220_p1 ;
   op6_4_fu_199_p1__temp = op6_4_fu_199_p1 ;
   tmp_fu_145_p0__temp = tmp_fu_145_p0 ;
   op6_2_fu_188_p2__temp = op6_2_fu_188_p2 ;
   ap_rst__temp = ap_rst ;
   o4__temp = o4 ;
   op3_reg_321__temp = op3_reg_321 ;
   ap_start__temp = ap_start ;
   o1__temp = o1 ;
   grp_fu_133_p2__temp = grp_fu_133_p2 ;
   op7_reg_331__temp = op7_reg_331 ;
   ap_clk__temp = ap_clk ;
   o2_ap_vld__temp = o2_ap_vld ;
   op6_1_reg_341__temp = op6_1_reg_341 ;
   op14_reg_346__temp = op14_reg_346 ;
   grp_fu_180_p2__temp = grp_fu_180_p2 ;
   G3__temp = G3 ;
   op5_3_fu_155_p3__temp = op5_3_fu_155_p3 ;
   op14_fu_215_p2__temp = op14_fu_215_p2 ;
   tmp_6_reg_311__temp = tmp_6_reg_311 ;
   ap_return1_ap_vld__temp = ap_return1_ap_vld ;
   ap_done__temp = ap_done ;
   op13_fu_224_p2__temp = op13_fu_224_p2 ;
   i3__temp = i3 ;
   tmp2_fu_210_p2__temp = tmp2_fu_210_p2 ;
   grp_fu_172_p2__temp = grp_fu_172_p2 ;
   tmp1_fu_220_p2__temp = tmp1_fu_220_p2 ;
   o1_ap_vld__temp = o1_ap_vld ;
   op6_4_fu_199_p2__temp = op6_4_fu_199_p2 ;
   i6__temp = i6 ;
   grp_fu_139_p2__temp = grp_fu_139_p2 ;
   tmp_reg_301_temp_2__temp = tmp_reg_301_temp_2 ;
   tmp_6_reg_311_temp_1__temp = tmp_6_reg_311_temp_1 ;
   tmp_fu_145_p2_temp_0__temp = tmp_fu_145_p2_temp_0 ;
   op5_1_reg_306__temp = op5_1_reg_306 ;
   G2__temp = G2 ;
   op6_5_fu_192_p3__temp = op6_5_fu_192_p3 ;
   op4_reg_283__temp = op4_reg_283 ;
   ap_idle__temp = ap_idle ;
   o3__temp = o3 ;
   grp_fu_127_p2__temp = grp_fu_127_p2 ;
   op5_reg_290__temp = op5_reg_290 ;
   ap_CS_fsm__temp = ap_CS_fsm ;
   op5_1_fu_150_p2__temp = op5_1_fu_150_p2 ;
   tmp4_fu_230_p2__temp = tmp4_fu_230_p2 ;
   ap_return1__temp = ap_return1 ;
   tmp4_reg_352__temp = tmp4_reg_352 ;
   tmp_6_fu_162_p2__temp = tmp_6_fu_162_p2 ;
   GG1__temp = GG1 ;
   G1__temp = G1 ;
   op6_1_fu_203_p3__temp = op6_1_fu_203_p3 ;
   op5_2_reg_295__temp = op5_2_reg_295 ;
   i2__temp = i2 ;
   grp_fu_167_p2__temp = grp_fu_167_p2 ;
   ap_NS_fsm__temp = ap_NS_fsm ;
   grp_fu_176_p2__temp = grp_fu_176_p2 ;
   i1__temp = i1 ;
   o2__temp = o2 ;
   op8_reg_336__temp = op8_reg_336 ;
   i4__temp = i4 ;
   op6_fu_184_p2__temp = op6_fu_184_p2 ;
   GG2__temp = GG2 ;
   tmp3_fu_235_p2__temp = tmp3_fu_235_p2 ;
   G4__temp = G4 ;
   tmp_fu_145_p2__temp = tmp_fu_145_p2 ;
   ap_ready__temp = ap_ready ;
   op6_3_reg_326__temp = op6_3_reg_326 ;
   tmp_reg_301__temp = tmp_reg_301 ;

       goto ap_ST_fsm_state5;

   ap_ST_fsm_state5:

	ap_CS_fsm_state1 = 0;
	ap_CS_fsm_state2 = 0;
	ap_CS_fsm_state3 = 0;
	ap_CS_fsm_state4 = 0;
	ap_CS_fsm_state5 = 1;
	ap_CS_fsm_state6 = 0;
	ap_CS_fsm_state7 = 0;
	ap_CS_fsm_state8 = 0;
   tmp1_fu_220_p1__temp = tmp1_fu_220_p1 ;
   op6_4_fu_199_p1__temp = op6_4_fu_199_p1 ;
   tmp_fu_145_p0__temp = tmp_fu_145_p0 ;
   op6_2_fu_188_p2__temp = op6_2_fu_188_p2 ;
   ap_rst__temp = ap_rst ;
   o4__temp = o4 ;
   op3_reg_321__temp = op3_reg_321 ;
   ap_start__temp = ap_start ;
   o1__temp = o1 ;
   grp_fu_133_p2__temp = grp_fu_133_p2 ;
   op7_reg_331__temp = op7_reg_331 ;
   ap_clk__temp = ap_clk ;
   o2_ap_vld__temp = o2_ap_vld ;
   op6_1_reg_341__temp = op6_1_reg_341 ;
   op14_reg_346__temp = op14_reg_346 ;
   grp_fu_180_p2__temp = grp_fu_180_p2 ;
   G3__temp = G3 ;
   op5_3_fu_155_p3__temp = op5_3_fu_155_p3 ;
   op14_fu_215_p2__temp = op14_fu_215_p2 ;
   tmp_6_reg_311__temp = tmp_6_reg_311 ;
   ap_return1_ap_vld__temp = ap_return1_ap_vld ;
   ap_done__temp = ap_done ;
   op13_fu_224_p2__temp = op13_fu_224_p2 ;
   i3__temp = i3 ;
   tmp2_fu_210_p2__temp = tmp2_fu_210_p2 ;
   grp_fu_172_p2__temp = grp_fu_172_p2 ;
   tmp1_fu_220_p2__temp = tmp1_fu_220_p2 ;
   o1_ap_vld__temp = o1_ap_vld ;
   op6_4_fu_199_p2__temp = op6_4_fu_199_p2 ;
   i6__temp = i6 ;
   grp_fu_139_p2__temp = grp_fu_139_p2 ;
   tmp_reg_301_temp_2__temp = tmp_reg_301_temp_2 ;
   tmp_6_reg_311_temp_1__temp = tmp_6_reg_311_temp_1 ;
   tmp_fu_145_p2_temp_0__temp = tmp_fu_145_p2_temp_0 ;
   op5_1_reg_306__temp = op5_1_reg_306 ;
   G2__temp = G2 ;
   op6_5_fu_192_p3__temp = op6_5_fu_192_p3 ;
   op4_reg_283__temp = op4_reg_283 ;
   ap_idle__temp = ap_idle ;
   o3__temp = o3 ;
   grp_fu_127_p2__temp = grp_fu_127_p2 ;
   op5_reg_290__temp = op5_reg_290 ;
   ap_CS_fsm__temp = ap_CS_fsm ;
   op5_1_fu_150_p2__temp = op5_1_fu_150_p2 ;
   tmp4_fu_230_p2__temp = tmp4_fu_230_p2 ;
   ap_return1__temp = ap_return1 ;
   tmp4_reg_352__temp = tmp4_reg_352 ;
   tmp_6_fu_162_p2__temp = tmp_6_fu_162_p2 ;
   GG1__temp = GG1 ;
   G1__temp = G1 ;
   op6_1_fu_203_p3__temp = op6_1_fu_203_p3 ;
   op5_2_reg_295__temp = op5_2_reg_295 ;
   i2__temp = i2 ;
   grp_fu_167_p2__temp = grp_fu_167_p2 ;
   ap_NS_fsm__temp = ap_NS_fsm ;
   grp_fu_176_p2__temp = grp_fu_176_p2 ;
   i1__temp = i1 ;
   o2__temp = o2 ;
   op8_reg_336__temp = op8_reg_336 ;
   i4__temp = i4 ;
   op6_fu_184_p2__temp = op6_fu_184_p2 ;
   GG2__temp = GG2 ;
   tmp3_fu_235_p2__temp = tmp3_fu_235_p2 ;
   G4__temp = G4 ;
   tmp_fu_145_p2__temp = tmp_fu_145_p2 ;
   ap_ready__temp = ap_ready ;
   op6_3_reg_326__temp = op6_3_reg_326 ;
   tmp_reg_301__temp = tmp_reg_301 ;

               tmp_6_reg_311 =  tmp_6_reg_311__temp ;
               tmp_reg_301 =  tmp_reg_301__temp ;
               tmp_6_reg_311 =  tmp_6_reg_311__temp ;
               tmp_reg_301 =  tmp_reg_301__temp ;
       if(((1 == ap_CS_fsm_state5) && (tmp_reg_301 == 0)) && (tmp_6_reg_311 == 0))
       {
           op3_reg_321 =   ( ( ( G1__temp  & 4294967295 )  * ( i2__temp  & 4294967295 )  ) & 4294967295 ) ;
       }
       if((1 == ap_CS_fsm_state5) && (tmp_6_reg_311 == 1))
       {
           op6_3_reg_326 =   ( ( ( G2__temp  & 4294967295 )  * ( i4__temp  & 4294967295 )  ) & 4294967295 ) ;
       }
       if(1 == ap_CS_fsm_state5)
       {
           op8_reg_336 =   ( ( ( G2__temp  & 4294967295 )  * ( i3__temp  & 4294967295 )  ) & 4294967295 ) ;
           op7_reg_331 =   ( ( ( G1__temp  & 4294967295 )  * ( i4__temp  & 4294967295 )  ) & 4294967295 ) ;
       }
       goto ap_ST_fsm_state6;

   ap_ST_fsm_state6:

	ap_CS_fsm_state1 = 0;
	ap_CS_fsm_state2 = 0;
	ap_CS_fsm_state3 = 0;
	ap_CS_fsm_state4 = 0;
	ap_CS_fsm_state5 = 0;
	ap_CS_fsm_state6 = 1;
	ap_CS_fsm_state7 = 0;
	ap_CS_fsm_state8 = 0;
   tmp1_fu_220_p1__temp = tmp1_fu_220_p1 ;
   op6_4_fu_199_p1__temp = op6_4_fu_199_p1 ;
   tmp_fu_145_p0__temp = tmp_fu_145_p0 ;
   op6_2_fu_188_p2__temp = op6_2_fu_188_p2 ;
   ap_rst__temp = ap_rst ;
   o4__temp = o4 ;
   op3_reg_321__temp = op3_reg_321 ;
   ap_start__temp = ap_start ;
   o1__temp = o1 ;
   grp_fu_133_p2__temp = grp_fu_133_p2 ;
   op7_reg_331__temp = op7_reg_331 ;
   ap_clk__temp = ap_clk ;
   o2_ap_vld__temp = o2_ap_vld ;
   op6_1_reg_341__temp = op6_1_reg_341 ;
   op14_reg_346__temp = op14_reg_346 ;
   grp_fu_180_p2__temp = grp_fu_180_p2 ;
   G3__temp = G3 ;
   op5_3_fu_155_p3__temp = op5_3_fu_155_p3 ;
   op14_fu_215_p2__temp = op14_fu_215_p2 ;
   tmp_6_reg_311__temp = tmp_6_reg_311 ;
   ap_return1_ap_vld__temp = ap_return1_ap_vld ;
   ap_done__temp = ap_done ;
   op13_fu_224_p2__temp = op13_fu_224_p2 ;
   i3__temp = i3 ;
   tmp2_fu_210_p2__temp = tmp2_fu_210_p2 ;
   grp_fu_172_p2__temp = grp_fu_172_p2 ;
   tmp1_fu_220_p2__temp = tmp1_fu_220_p2 ;
   o1_ap_vld__temp = o1_ap_vld ;
   op6_4_fu_199_p2__temp = op6_4_fu_199_p2 ;
   i6__temp = i6 ;
   grp_fu_139_p2__temp = grp_fu_139_p2 ;
   tmp_reg_301_temp_2__temp = tmp_reg_301_temp_2 ;
   tmp_6_reg_311_temp_1__temp = tmp_6_reg_311_temp_1 ;
   tmp_fu_145_p2_temp_0__temp = tmp_fu_145_p2_temp_0 ;
   op5_1_reg_306__temp = op5_1_reg_306 ;
   G2__temp = G2 ;
   op6_5_fu_192_p3__temp = op6_5_fu_192_p3 ;
   op4_reg_283__temp = op4_reg_283 ;
   ap_idle__temp = ap_idle ;
   o3__temp = o3 ;
   grp_fu_127_p2__temp = grp_fu_127_p2 ;
   op5_reg_290__temp = op5_reg_290 ;
   ap_CS_fsm__temp = ap_CS_fsm ;
   op5_1_fu_150_p2__temp = op5_1_fu_150_p2 ;
   tmp4_fu_230_p2__temp = tmp4_fu_230_p2 ;
   ap_return1__temp = ap_return1 ;
   tmp4_reg_352__temp = tmp4_reg_352 ;
   tmp_6_fu_162_p2__temp = tmp_6_fu_162_p2 ;
   GG1__temp = GG1 ;
   G1__temp = G1 ;
   op6_1_fu_203_p3__temp = op6_1_fu_203_p3 ;
   op5_2_reg_295__temp = op5_2_reg_295 ;
   i2__temp = i2 ;
   grp_fu_167_p2__temp = grp_fu_167_p2 ;
   ap_NS_fsm__temp = ap_NS_fsm ;
   grp_fu_176_p2__temp = grp_fu_176_p2 ;
   i1__temp = i1 ;
   o2__temp = o2 ;
   op8_reg_336__temp = op8_reg_336 ;
   i4__temp = i4 ;
   op6_fu_184_p2__temp = op6_fu_184_p2 ;
   GG2__temp = GG2 ;
   tmp3_fu_235_p2__temp = tmp3_fu_235_p2 ;
   G4__temp = G4 ;
   tmp_fu_145_p2__temp = tmp_fu_145_p2 ;
   ap_ready__temp = ap_ready ;
   op6_3_reg_326__temp = op6_3_reg_326 ;
   tmp_reg_301__temp = tmp_reg_301 ;

       if(1 == ap_CS_fsm_state6)
       {
           op6_1_reg_341 =   (  ( ( tmp_6_reg_311__temp  & 1 ) & 18446744073709551615 )  == 1 ?  ( ( do_twos_complement( op6_3_reg_326__temp  , 32 )  - do_twos_complement(  ( i3__temp  & 4294967295 )  , 32 )  ) & 4294967295 )  :   (  ( ( tmp_reg_301__temp  & 1 ) & 18446744073709551615 )  == 1 ?  ( ( op5_1_reg_306__temp  - op4_reg_283__temp  ) & 4294967295 )  :   ( ( op5_2_reg_295__temp  - op3_reg_321__temp  ) & 4294967295 )  )  ) ;
           op14_reg_346 =   ( (  ( ( op8_reg_336__temp  + ( i6__temp  & 4294967295 )  ) & 4294967295 )  + op7_reg_331__temp  ) & 4294967295 ) ;
       }
       goto ap_ST_fsm_state7;

   ap_ST_fsm_state7:

	ap_CS_fsm_state1 = 0;
	ap_CS_fsm_state2 = 0;
	ap_CS_fsm_state3 = 0;
	ap_CS_fsm_state4 = 0;
	ap_CS_fsm_state5 = 0;
	ap_CS_fsm_state6 = 0;
	ap_CS_fsm_state7 = 1;
	ap_CS_fsm_state8 = 0;
   tmp1_fu_220_p1__temp = tmp1_fu_220_p1 ;
   op6_4_fu_199_p1__temp = op6_4_fu_199_p1 ;
   tmp_fu_145_p0__temp = tmp_fu_145_p0 ;
   op6_2_fu_188_p2__temp = op6_2_fu_188_p2 ;
   ap_rst__temp = ap_rst ;
   o4__temp = o4 ;
   op3_reg_321__temp = op3_reg_321 ;
   ap_start__temp = ap_start ;
   o1__temp = o1 ;
   grp_fu_133_p2__temp = grp_fu_133_p2 ;
   op7_reg_331__temp = op7_reg_331 ;
   ap_clk__temp = ap_clk ;
   o2_ap_vld__temp = o2_ap_vld ;
   op6_1_reg_341__temp = op6_1_reg_341 ;
   op14_reg_346__temp = op14_reg_346 ;
   grp_fu_180_p2__temp = grp_fu_180_p2 ;
   G3__temp = G3 ;
   op5_3_fu_155_p3__temp = op5_3_fu_155_p3 ;
   op14_fu_215_p2__temp = op14_fu_215_p2 ;
   tmp_6_reg_311__temp = tmp_6_reg_311 ;
   ap_return1_ap_vld__temp = ap_return1_ap_vld ;
   ap_done__temp = ap_done ;
   op13_fu_224_p2__temp = op13_fu_224_p2 ;
   i3__temp = i3 ;
   tmp2_fu_210_p2__temp = tmp2_fu_210_p2 ;
   grp_fu_172_p2__temp = grp_fu_172_p2 ;
   tmp1_fu_220_p2__temp = tmp1_fu_220_p2 ;
   o1_ap_vld__temp = o1_ap_vld ;
   op6_4_fu_199_p2__temp = op6_4_fu_199_p2 ;
   i6__temp = i6 ;
   grp_fu_139_p2__temp = grp_fu_139_p2 ;
   tmp_reg_301_temp_2__temp = tmp_reg_301_temp_2 ;
   tmp_6_reg_311_temp_1__temp = tmp_6_reg_311_temp_1 ;
   tmp_fu_145_p2_temp_0__temp = tmp_fu_145_p2_temp_0 ;
   op5_1_reg_306__temp = op5_1_reg_306 ;
   G2__temp = G2 ;
   op6_5_fu_192_p3__temp = op6_5_fu_192_p3 ;
   op4_reg_283__temp = op4_reg_283 ;
   ap_idle__temp = ap_idle ;
   o3__temp = o3 ;
   grp_fu_127_p2__temp = grp_fu_127_p2 ;
   op5_reg_290__temp = op5_reg_290 ;
   ap_CS_fsm__temp = ap_CS_fsm ;
   op5_1_fu_150_p2__temp = op5_1_fu_150_p2 ;
   tmp4_fu_230_p2__temp = tmp4_fu_230_p2 ;
   ap_return1__temp = ap_return1 ;
   tmp4_reg_352__temp = tmp4_reg_352 ;
   tmp_6_fu_162_p2__temp = tmp_6_fu_162_p2 ;
   GG1__temp = GG1 ;
   G1__temp = G1 ;
   op6_1_fu_203_p3__temp = op6_1_fu_203_p3 ;
   op5_2_reg_295__temp = op5_2_reg_295 ;
   i2__temp = i2 ;
   grp_fu_167_p2__temp = grp_fu_167_p2 ;
   ap_NS_fsm__temp = ap_NS_fsm ;
   grp_fu_176_p2__temp = grp_fu_176_p2 ;
   i1__temp = i1 ;
   o2__temp = o2 ;
   op8_reg_336__temp = op8_reg_336 ;
   i4__temp = i4 ;
   op6_fu_184_p2__temp = op6_fu_184_p2 ;
   GG2__temp = GG2 ;
   tmp3_fu_235_p2__temp = tmp3_fu_235_p2 ;
   G4__temp = G4 ;
   tmp_fu_145_p2__temp = tmp_fu_145_p2 ;
   ap_ready__temp = ap_ready ;
   op6_3_reg_326__temp = op6_3_reg_326 ;
   tmp_reg_301__temp = tmp_reg_301 ;

       if(1 == ap_CS_fsm_state7)
       {
           o1_ap_vld =  1;
               o1 =   (  ( (  ( ( do_twos_complement( op6_1_reg_341__temp  , 32 )  + do_twos_complement(  ( G1__temp  & 4294967295 )  , 32 )  ) & 4294967295 )  + op4_reg_283__temp  ) & 4294967295 )  & 4294967295 ) ;
               o2 =   ( op14_reg_346__temp  & 4294967295 ) ;
               ap_return1 =  ( ( tmp4_reg_352 +  ( ( ( o3 & 4294967295 )  + ( o4 & 4294967295 )  ) & 4294967295 )  ) & 4294967295 ) ;
       }
       if(1 == ap_CS_fsm_state7)
       {
           o2_ap_vld =  1;
               o1 =   (  ( (  ( ( do_twos_complement( op6_1_reg_341__temp  , 32 )  + do_twos_complement(  ( G1__temp  & 4294967295 )  , 32 )  ) & 4294967295 )  + op4_reg_283__temp  ) & 4294967295 )  & 4294967295 ) ;
               o2 =   ( op14_reg_346__temp  & 4294967295 ) ;
               ap_return1 =  ( ( tmp4_reg_352 +  ( ( ( o3 & 4294967295 )  + ( o4 & 4294967295 )  ) & 4294967295 )  ) & 4294967295 ) ;
       }
       if(1 == ap_CS_fsm_state7)
       {
           tmp4_reg_352 =   ( (  ( (  ( ( do_twos_complement( op6_1_reg_341__temp  , 32 )  + do_twos_complement(  ( G1__temp  & 4294967295 )  , 32 )  ) & 4294967295 )  + op4_reg_283__temp  ) & 4294967295 )  + op14_reg_346__temp  ) & 4294967295 ) ;
       }
       goto ap_ST_fsm_state8;

   ap_ST_fsm_state8:

	ap_CS_fsm_state1 = 0;
	ap_CS_fsm_state2 = 0;
	ap_CS_fsm_state3 = 0;
	ap_CS_fsm_state4 = 0;
	ap_CS_fsm_state5 = 0;
	ap_CS_fsm_state6 = 0;
	ap_CS_fsm_state7 = 0;
	ap_CS_fsm_state8 = 1;
   tmp1_fu_220_p1__temp = tmp1_fu_220_p1 ;
   op6_4_fu_199_p1__temp = op6_4_fu_199_p1 ;
   tmp_fu_145_p0__temp = tmp_fu_145_p0 ;
   op6_2_fu_188_p2__temp = op6_2_fu_188_p2 ;
   ap_rst__temp = ap_rst ;
   o4__temp = o4 ;
   op3_reg_321__temp = op3_reg_321 ;
   ap_start__temp = ap_start ;
   o1__temp = o1 ;
   grp_fu_133_p2__temp = grp_fu_133_p2 ;
   op7_reg_331__temp = op7_reg_331 ;
   ap_clk__temp = ap_clk ;
   o2_ap_vld__temp = o2_ap_vld ;
   op6_1_reg_341__temp = op6_1_reg_341 ;
   op14_reg_346__temp = op14_reg_346 ;
   grp_fu_180_p2__temp = grp_fu_180_p2 ;
   G3__temp = G3 ;
   op5_3_fu_155_p3__temp = op5_3_fu_155_p3 ;
   op14_fu_215_p2__temp = op14_fu_215_p2 ;
   tmp_6_reg_311__temp = tmp_6_reg_311 ;
   ap_return1_ap_vld__temp = ap_return1_ap_vld ;
   ap_done__temp = ap_done ;
   op13_fu_224_p2__temp = op13_fu_224_p2 ;
   i3__temp = i3 ;
   tmp2_fu_210_p2__temp = tmp2_fu_210_p2 ;
   grp_fu_172_p2__temp = grp_fu_172_p2 ;
   tmp1_fu_220_p2__temp = tmp1_fu_220_p2 ;
   o1_ap_vld__temp = o1_ap_vld ;
   op6_4_fu_199_p2__temp = op6_4_fu_199_p2 ;
   i6__temp = i6 ;
   grp_fu_139_p2__temp = grp_fu_139_p2 ;
   tmp_reg_301_temp_2__temp = tmp_reg_301_temp_2 ;
   tmp_6_reg_311_temp_1__temp = tmp_6_reg_311_temp_1 ;
   tmp_fu_145_p2_temp_0__temp = tmp_fu_145_p2_temp_0 ;
   op5_1_reg_306__temp = op5_1_reg_306 ;
   G2__temp = G2 ;
   op6_5_fu_192_p3__temp = op6_5_fu_192_p3 ;
   op4_reg_283__temp = op4_reg_283 ;
   ap_idle__temp = ap_idle ;
   o3__temp = o3 ;
   grp_fu_127_p2__temp = grp_fu_127_p2 ;
   op5_reg_290__temp = op5_reg_290 ;
   ap_CS_fsm__temp = ap_CS_fsm ;
   op5_1_fu_150_p2__temp = op5_1_fu_150_p2 ;
   tmp4_fu_230_p2__temp = tmp4_fu_230_p2 ;
   ap_return1__temp = ap_return1 ;
   tmp4_reg_352__temp = tmp4_reg_352 ;
   tmp_6_fu_162_p2__temp = tmp_6_fu_162_p2 ;
   GG1__temp = GG1 ;
   G1__temp = G1 ;
   op6_1_fu_203_p3__temp = op6_1_fu_203_p3 ;
   op5_2_reg_295__temp = op5_2_reg_295 ;
   i2__temp = i2 ;
   grp_fu_167_p2__temp = grp_fu_167_p2 ;
   ap_NS_fsm__temp = ap_NS_fsm ;
   grp_fu_176_p2__temp = grp_fu_176_p2 ;
   i1__temp = i1 ;
   o2__temp = o2 ;
   op8_reg_336__temp = op8_reg_336 ;
   i4__temp = i4 ;
   op6_fu_184_p2__temp = op6_fu_184_p2 ;
   GG2__temp = GG2 ;
   tmp3_fu_235_p2__temp = tmp3_fu_235_p2 ;
   G4__temp = G4 ;
   tmp_fu_145_p2__temp = tmp_fu_145_p2 ;
   ap_ready__temp = ap_ready ;
   op6_3_reg_326__temp = op6_3_reg_326 ;
   tmp_reg_301__temp = tmp_reg_301 ;

       if(1 == ap_CS_fsm_state8)
       {
           ap_done =  1;
			if(ap_done==1){
			}
       }
       if(1 == ap_CS_fsm_state8)
       {
           ap_ready =  1;
       }
       if(1 == ap_CS_fsm_state8)
       {
           ap_return1_ap_vld = 1;
               o1 =   (  ( (  ( ( do_twos_complement( op6_1_reg_341__temp  , 32 )  + do_twos_complement(  ( G1__temp  & 4294967295 )  , 32 )  ) & 4294967295 )  + op4_reg_283__temp  ) & 4294967295 )  & 4294967295 ) ;
               o2 =   ( op14_reg_346__temp  & 4294967295 ) ;
               ap_return1 =  ( ( tmp4_reg_352 +  ( ( ( o3 & 4294967295 )  + ( o4 & 4294967295 )  ) & 4294967295 )  ) & 4294967295 ) ;
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
	printf("%lld\n",do_twos_complement(ap_return1,32));
       return;
}

int main(){
	for(int i=0; i<100; i++){
		unsigned long long int ap_clk__1 = 1;
		unsigned long long int ap_done__1 = 0;
		unsigned long long int ap_idle__1 = 0;
		unsigned long long int ap_ready__1 = 1;
		unsigned long long int ap_return__1 = 0;
		unsigned long long int ap_return1_ap_vld__1 = 0;
		unsigned long long int ap_rst__1 = 0;
		unsigned long long int ap_start__1 = 1;
		unsigned long long int i1__1; 
		unsigned long long int i2__1;
		unsigned long long int i3__1;
		unsigned long long int i4__1;
		unsigned long long int i6__1;
		unsigned long long int o1__1;
		unsigned long long int o1_ap_vld__1;
		unsigned long long int o2__1;
		unsigned long long int o2_ap_vld__1;
		unsigned long long int o3__1;
		unsigned long long int o4__1;
		unsigned long long int G1__1;
		unsigned long long int G2__1;
		unsigned long long int G3__1; 
		unsigned long long int G4__1; 
		unsigned long long int GG1__1; 
		unsigned long long int GG2__1; 

		scanf("%llu %llu %llu %llu %llu %llu %llu %llu %llu %llu %llu %llu %llu %llu %llu",&i1__1,&i2__1,&i3__1,&i4__1,&i6__1,&o1__1,&o2__1,&o3__1,&o4__1,&G1__1,&G2__1,&G3__1,&G4__1,&GG1__1,&GG2__1);	
		int dummy = 1;
	hls_macc(&ap_clk__1,&ap_done__1,&ap_idle__1,&ap_ready__1,&ap_return__1,&ap_return1_ap_vld__1,&ap_rst__1,&ap_start__1,&i1__1,&i2__1,&i3__1,&i4__1,&i6__1,&o1__1,&o1_ap_vld__1,&o2__1,&o2_ap_vld__1,&o3__1,&o4__1,&G1__1,&G2__1,&G3__1,&G4__1,&GG1__1,&GG2__1,dummy);
}
return 0;

}
