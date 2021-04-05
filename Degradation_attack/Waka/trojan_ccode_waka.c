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

void hls_macc(unsigned long long int *ap_clk__1,unsigned long long int *ap_done__1,unsigned long long int *ap_idle__1,unsigned long long int *ap_ready__1,unsigned long long int *ap_return__1,unsigned long long int *ap_rst__1,unsigned long long int *ap_start__1,unsigned long long int *in1__1,unsigned long long int *in2__1,unsigned long long int *in3__1,unsigned long long int *in4__1,unsigned long long int *in7__1,unsigned long long int *in8__1,unsigned long long int *in9__1,unsigned long long int *in10__1,unsigned long long int *in12__1,unsigned long long int *in14__1,unsigned long long int *in15__1,unsigned long long int *in17__1,unsigned long long int *in19__1,unsigned long long int *in20__1,unsigned long long int *in22__1,unsigned long long int *in24__1,unsigned long long int *in27__1,unsigned long long int *in28__1,unsigned long long int *in29__1,unsigned long long int *in32__1,unsigned long long int *out13__1,unsigned long long int *out13_ap_vld__1,unsigned long long int *out30_i__1,unsigned long long int *out30_o__1,unsigned long long int *out30_o_ap_vld__1,unsigned long long int *out31__1,unsigned long long int *out31_ap_vld__1,unsigned long long int *trigger__1,int dummy){
unsigned long long int ap_clk=*ap_clk__1;
unsigned long long int ap_done=*ap_done__1;
unsigned long long int ap_idle=*ap_idle__1;
unsigned long long int ap_ready=*ap_ready__1;
unsigned long long int ap_return=*ap_return__1;
unsigned long long int ap_rst=*ap_rst__1;
unsigned long long int ap_start=*ap_start__1;
unsigned long long int in1=*in1__1;
unsigned long long int in10=*in10__1;
unsigned long long int in12=*in12__1;
unsigned long long int in14=*in14__1;
unsigned long long int in15=*in15__1;
unsigned long long int in17=*in17__1;
unsigned long long int in19=*in19__1;
unsigned long long int in2=*in2__1;
unsigned long long int in20=*in20__1;
unsigned long long int in22=*in22__1;
unsigned long long int in24=*in24__1;
unsigned long long int in27=*in27__1;
unsigned long long int in28=*in28__1;
unsigned long long int in29=*in29__1;
unsigned long long int in3=*in3__1;
unsigned long long int in32=*in32__1;
unsigned long long int in4=*in4__1;
unsigned long long int in7=*in7__1;
unsigned long long int in8=*in8__1;
unsigned long long int in9=*in9__1;
unsigned long long int out13=*out13__1;
unsigned long long int out13_ap_vld=*out13_ap_vld__1;
unsigned long long int out30_i=*out30_i__1;
unsigned long long int out30_o=*out30_o__1;
unsigned long long int out30_o_ap_vld=*out30_o_ap_vld__1;
unsigned long long int out31=*out31__1;
unsigned long long int out31_ap_vld=*out31_ap_vld__1;
unsigned long long int trigger=*trigger__1;
   long long int ap_CS_fsm_state1=0;
   long long int ap_CS_fsm_state2=0;
   long long int ap_CS_fsm_state3=0;
   long long int ap_CS_fsm_state4=0;
   long long int ap_CS_fsm_state5=0;
   long long int ap_CS_fsm_state6=0;
   long long int ap_CS_fsm_state7=0;
   unsigned long long int ap_CS_fsm=0;
   unsigned long long int ap_CS_fsm__temp=0;
   unsigned long long int ap_NS_fsm=0;
   unsigned long long int ap_NS_fsm__temp=0;
   unsigned long long int ap_clk__temp=0;
   unsigned long long int ap_done__temp=0;
   unsigned long long int ap_idle__temp=0;
   unsigned long long int ap_ready__temp=0;
   unsigned long long int ap_return__temp=0;
   unsigned long long int ap_rst__temp=0;
   unsigned long long int ap_start__temp=0;
   unsigned long long int in10__temp=0;
   unsigned long long int in12__temp=0;
   unsigned long long int in14__temp=0;
   unsigned long long int in15__temp=0;
   unsigned long long int in17__temp=0;
   unsigned long long int in19__temp=0;
   unsigned long long int in1__temp=0;
   unsigned long long int in20__temp=0;
   unsigned long long int in22__temp=0;
   unsigned long long int in24__temp=0;
   unsigned long long int in27__temp=0;
   unsigned long long int in28__temp=0;
   unsigned long long int in29__temp=0;
   unsigned long long int in2__temp=0;
   unsigned long long int in32__temp=0;
   unsigned long long int in3__temp=0;
   unsigned long long int in4__temp=0;
   unsigned long long int in7__temp=0;
   unsigned long long int in8__temp=0;
   unsigned long long int in9__temp=0;
   unsigned long long int out13__temp=0;
   unsigned long long int out13_ap_vld__temp=0;
   unsigned long long int out13_assign_fu_222_p2=0;
   unsigned long long int out13_assign_fu_222_p2__temp=0;
   unsigned long long int out13_assign_reg_349=0;
   unsigned long long int out13_assign_reg_349__temp=0;
   unsigned long long int out30_i__temp=0;
   unsigned long long int out30_o__temp=0;
   unsigned long long int out30_o_ap_vld__temp=0;
   unsigned long long int out31__temp=0;
   unsigned long long int out31_ap_vld__temp=0;
   unsigned long long int t11_fu_235_p2=0;
   unsigned long long int t11_fu_235_p2__temp=0;
   unsigned long long int t16_1_fu_298_p2=0;
   unsigned long long int t16_1_fu_298_p2__temp=0;
   unsigned long long int t16_fu_277_p2=0;
   unsigned long long int t16_fu_277_p2__temp=0;
   unsigned long long int t16_reg_372=0;
   unsigned long long int t16_reg_372__temp=0;
   unsigned long long int t23_fu_259_p2=0;
   unsigned long long int t23_fu_259_p2__temp=0;
   unsigned long long int t23_reg_362=0;
   unsigned long long int t23_reg_362__temp=0;
   unsigned long long int t25_fu_283_p2=0;
   unsigned long long int t25_fu_283_p2__temp=0;
   unsigned long long int t26_1_fu_271_p2=0;
   unsigned long long int t26_1_fu_271_p2__temp=0;
   unsigned long long int t26_1_reg_367=0;
   unsigned long long int t26_1_reg_367__temp=0;
   unsigned long long int t26_2_fu_292_p3=0;
   unsigned long long int t26_2_fu_292_p3__temp=0;
   unsigned long long int t26_2_reg_377=0;
   unsigned long long int t26_2_reg_377__temp=0;
   unsigned long long int t26_fu_287_p2=0;
   unsigned long long int t26_fu_287_p2__temp=0;
   unsigned long long int t5_fu_216_p2=0;
   unsigned long long int t5_fu_216_p2__temp=0;
   unsigned long long int t8_reg_207=0;
   unsigned long long int t8_reg_207__temp=0;
   unsigned long long int tmp1_fu_229_p2=0;
   unsigned long long int tmp1_fu_229_p2__temp=0;
   unsigned long long int tmp2_fu_253_p2=0;
   unsigned long long int tmp2_fu_253_p2__temp=0;
   unsigned long long int tmp3_fu_265_p2=0;
   unsigned long long int tmp3_fu_265_p2__temp=0;
   unsigned long long int tmp4_fu_313_p2=0;
   unsigned long long int tmp4_fu_313_p2__temp=0;
   unsigned long long int tmp_2_fu_247_p2=0;
   unsigned long long int tmp_2_fu_247_p2__temp=0;
   unsigned long long int tmp_2_reg_357=0;
   unsigned long long int tmp_2_reg_357__temp=0;
   unsigned long long int tmp_2_reg_357_temp_0=0;
   unsigned long long int tmp_2_reg_357_temp_0__temp=0;
   unsigned long long int tmp_6_fu_302_p2=0;
   unsigned long long int tmp_6_fu_302_p2__temp=0;
   unsigned long long int tmp_7_fu_307_p2=0;
   unsigned long long int tmp_7_fu_307_p2__temp=0;
   unsigned long long int tmp_fu_241_p2=0;
   unsigned long long int tmp_fu_241_p2__temp=0;
   unsigned long long int trigger__temp=0;
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
   in19__temp = in19 ;
   t26_2_fu_292_p3__temp = t26_2_fu_292_p3 ;
   in2__temp = in2 ;
   ap_idle__temp = ap_idle ;
   out30_o__temp = out30_o ;
   in4__temp = in4 ;
   t26_fu_287_p2__temp = t26_fu_287_p2 ;
   tmp_2_fu_247_p2__temp = tmp_2_fu_247_p2 ;
   in8__temp = in8 ;
   trigger__temp = trigger ;
   tmp2_fu_253_p2__temp = tmp2_fu_253_p2 ;
   t8_reg_207__temp = t8_reg_207 ;
   t11_fu_235_p2__temp = t11_fu_235_p2 ;
   in20__temp = in20 ;
   tmp_fu_241_p2__temp = tmp_fu_241_p2 ;
   tmp_2_reg_357_temp_0__temp = tmp_2_reg_357_temp_0 ;
   in3__temp = in3 ;
   ap_return__temp = ap_return ;
   tmp_6_fu_302_p2__temp = tmp_6_fu_302_p2 ;
   in15__temp = in15 ;
   in17__temp = in17 ;
   out13_assign_reg_349__temp = out13_assign_reg_349 ;
   out30_i__temp = out30_i ;
   t5_fu_216_p2__temp = t5_fu_216_p2 ;
   tmp4_fu_313_p2__temp = tmp4_fu_313_p2 ;
   t23_reg_362__temp = t23_reg_362 ;
   in27__temp = in27 ;
   out13_ap_vld__temp = out13_ap_vld ;
   tmp3_fu_265_p2__temp = tmp3_fu_265_p2 ;
   tmp_7_fu_307_p2__temp = tmp_7_fu_307_p2 ;
   t26_2_reg_377__temp = t26_2_reg_377 ;
   tmp1_fu_229_p2__temp = tmp1_fu_229_p2 ;
   ap_ready__temp = ap_ready ;
   in28__temp = in28 ;
   t25_fu_283_p2__temp = t25_fu_283_p2 ;
   out31__temp = out31 ;
   out30_o_ap_vld__temp = out30_o_ap_vld ;
   in9__temp = in9 ;
   ap_NS_fsm__temp = ap_NS_fsm ;
   t16_1_fu_298_p2__temp = t16_1_fu_298_p2 ;
   in32__temp = in32 ;
   ap_CS_fsm__temp = ap_CS_fsm ;
   in29__temp = in29 ;
   out13_assign_fu_222_p2__temp = out13_assign_fu_222_p2 ;
   t16_fu_277_p2__temp = t16_fu_277_p2 ;
   tmp_2_reg_357__temp = tmp_2_reg_357 ;
   in7__temp = in7 ;
   out31_ap_vld__temp = out31_ap_vld ;
   ap_clk__temp = ap_clk ;
   t26_1_reg_367__temp = t26_1_reg_367 ;
   in24__temp = in24 ;
   in10__temp = in10 ;
   ap_done__temp = ap_done ;
   ap_rst__temp = ap_rst ;
   in12__temp = in12 ;
   t16_reg_372__temp = t16_reg_372 ;
   ap_start__temp = ap_start ;
   in1__temp = in1 ;
   t26_1_fu_271_p2__temp = t26_1_fu_271_p2 ;
   in22__temp = in22 ;
   out13__temp = out13 ;
   t23_fu_259_p2__temp = t23_fu_259_p2 ;
   in14__temp = in14 ;

               tmp_fu_241_p2 =   ( ( in2 & 4294967295 )  == ( in1 & 4294967295 )  ? 1 : 0 ) ;
       if((0 == ap_start) && (1 == ap_CS_fsm_state1))
       {
           ap_idle =  1;
       }
       if((1 == ap_CS_fsm_state1) && (ap_start == 1))
       {
           out13_ap_vld =  1;
               out13 =   ( ( ( in14__temp  & 4294967295 )  - ( in15__temp  & 4294967295 )  ) & 4294967295 ) ;
               out31 =   (  ( ( t8_reg_207__temp  + ( in32__temp  & 4294967295 )  ) & 4294967295 )  & 4294967295 ) ;
       }
               tmp_fu_241_p2 =   ( ( in2 & 4294967295 )  == ( in1 & 4294967295 )  ? 1 : 0 ) ;
   if((((1 == ap_CS_fsm_state1) && (ap_start == 1)) && (tmp_fu_241_p2 == 1)) == 1){
       if((1 == ap_CS_fsm_state1) && (ap_start == 1))
       {
           out13_assign_reg_349 =   ( ( ( in14__temp  & 4294967295 )  - ( in15__temp  & 4294967295 )  ) & 4294967295 ) ;
       }
       if(((1 == ap_CS_fsm_state1) && (ap_start == 1)) && (tmp_fu_241_p2 == 1))
       {
           t16_reg_372 =   ( (  ( (  ( ( ( in7__temp  & 4294967295 )  + ( in12__temp  & 4294967295 )  ) & 4294967295 )  + ( in8__temp  & 4294967295 )  ) & 4294967295 )  - ( in17__temp  & 4294967295 )  ) & 4294967295 ) ;
       }
       if(((1 == ap_CS_fsm_state1) && (ap_start == 1)) && (tmp_fu_241_p2 == 0))
       {
           tmp_2_reg_357 =   ( do_twos_complement( ( in9 & 4294967295 )  , 63 )  < do_twos_complement( ( in10 & 4294967295 )  , 63 )  ? 1 : 0 ) ;
           t26_1_reg_367 =   ( (  ( ( ( in19__temp  & 4294967295 )  + ( in20__temp  & 4294967295 )  ) & 4294967295 )  +  ( ( ( in3__temp  & 4294967295 )  - ( in4__temp  & 4294967295 )  ) & 4294967295 )  ) & 4294967295 ) ;
           t23_reg_362 =   ( (  ( (  ( ( ( in3__temp  & 4294967295 )  - ( in4__temp  & 4294967295 )  ) & 4294967295 )  + ( in22__temp  & 4294967295 )  ) & 4294967295 )  +  ( (  ( ( ( in7__temp  & 4294967295 )  + ( in12__temp  & 4294967295 )  ) & 4294967295 )  + ( in8__temp  & 4294967295 )  ) & 4294967295 )  ) & 4294967295 ) ;
       }
       goto ap_ST_fsm_state4;
   }
   if((((1 == ap_CS_fsm_state1) && (ap_start == 1)) && (tmp_fu_241_p2 == 0)) == 1){
       if((1 == ap_CS_fsm_state1) && (ap_start == 1))
       {
               out13_assign_reg_349 =   ( ( ( in14__temp  & 4294967295 )  - ( in15__temp  & 4294967295 )  ) & 4294967295 ) ;
       }
       if(((1 == ap_CS_fsm_state1) && (ap_start == 1)) && (tmp_fu_241_p2 == 1))
       {
               t16_reg_372 =   ( (  ( (  ( ( ( in7__temp  & 4294967295 )  + ( in12__temp  & 4294967295 )  ) & 4294967295 )  + ( in8__temp  & 4294967295 )  ) & 4294967295 )  - ( in17__temp  & 4294967295 )  ) & 4294967295 ) ;
       }
       if(((1 == ap_CS_fsm_state1) && (ap_start == 1)) && (tmp_fu_241_p2 == 0))
       {
               tmp_2_reg_357 =   ( do_twos_complement( ( in9 & 4294967295 )  , 63 )  < do_twos_complement( ( in10 & 4294967295 )  , 63 )  ? 1 : 0 ) ;
               t26_1_reg_367 =   ( (  ( ( ( in19__temp  & 4294967295 )  + ( in20__temp  & 4294967295 )  ) & 4294967295 )  +  ( ( ( in3__temp  & 4294967295 )  - ( in4__temp  & 4294967295 )  ) & 4294967295 )  ) & 4294967295 ) ;
               t23_reg_362 =   ( (  ( (  ( ( ( in3__temp  & 4294967295 )  - ( in4__temp  & 4294967295 )  ) & 4294967295 )  + ( in22__temp  & 4294967295 )  ) & 4294967295 )  +  ( (  ( ( ( in7__temp  & 4294967295 )  + ( in12__temp  & 4294967295 )  ) & 4294967295 )  + ( in8__temp  & 4294967295 )  ) & 4294967295 )  ) & 4294967295 ) ;
       }
       goto ap_ST_fsm_state2;
   }
       if((1 == ap_CS_fsm_state1) && (ap_start == 1))
       {
           out13_assign_reg_349 =   ( ( ( in14__temp  & 4294967295 )  - ( in15__temp  & 4294967295 )  ) & 4294967295 ) ;
       }
       if(((1 == ap_CS_fsm_state1) && (ap_start == 1)) && (tmp_fu_241_p2 == 1))
       {
           t16_reg_372 =   ( (  ( (  ( ( ( in7__temp  & 4294967295 )  + ( in12__temp  & 4294967295 )  ) & 4294967295 )  + ( in8__temp  & 4294967295 )  ) & 4294967295 )  - ( in17__temp  & 4294967295 )  ) & 4294967295 ) ;
       }
       if(((1 == ap_CS_fsm_state1) && (ap_start == 1)) && (tmp_fu_241_p2 == 0))
       {
           tmp_2_reg_357 =   ( do_twos_complement( ( in9 & 4294967295 )  , 63 )  < do_twos_complement( ( in10 & 4294967295 )  , 63 )  ? 1 : 0 ) ;
           t26_1_reg_367 =   ( (  ( ( ( in19__temp  & 4294967295 )  + ( in20__temp  & 4294967295 )  ) & 4294967295 )  +  ( ( ( in3__temp  & 4294967295 )  - ( in4__temp  & 4294967295 )  ) & 4294967295 )  ) & 4294967295 ) ;
           t23_reg_362 =   ( (  ( (  ( ( ( in3__temp  & 4294967295 )  - ( in4__temp  & 4294967295 )  ) & 4294967295 )  + ( in22__temp  & 4294967295 )  ) & 4294967295 )  +  ( (  ( ( ( in7__temp  & 4294967295 )  + ( in12__temp  & 4294967295 )  ) & 4294967295 )  + ( in8__temp  & 4294967295 )  ) & 4294967295 )  ) & 4294967295 ) ;
       }
       goto ap_ST_fsm_state1;

   ap_ST_fsm_state2:

	ap_CS_fsm_state1 = 0;
	ap_CS_fsm_state2 = 1;
	ap_CS_fsm_state3 = 0;
	ap_CS_fsm_state4 = 0;
	ap_CS_fsm_state5 = 0;
	ap_CS_fsm_state6 = 0;
	ap_CS_fsm_state7 = 0;
   in19__temp = in19 ;
   t26_2_fu_292_p3__temp = t26_2_fu_292_p3 ;
   in2__temp = in2 ;
   ap_idle__temp = ap_idle ;
   out30_o__temp = out30_o ;
   in4__temp = in4 ;
   t26_fu_287_p2__temp = t26_fu_287_p2 ;
   tmp_2_fu_247_p2__temp = tmp_2_fu_247_p2 ;
   in8__temp = in8 ;
   trigger__temp = trigger ;
   tmp2_fu_253_p2__temp = tmp2_fu_253_p2 ;
   t8_reg_207__temp = t8_reg_207 ;
   t11_fu_235_p2__temp = t11_fu_235_p2 ;
   in20__temp = in20 ;
   tmp_fu_241_p2__temp = tmp_fu_241_p2 ;
   tmp_2_reg_357_temp_0__temp = tmp_2_reg_357_temp_0 ;
   in3__temp = in3 ;
   ap_return__temp = ap_return ;
   tmp_6_fu_302_p2__temp = tmp_6_fu_302_p2 ;
   in15__temp = in15 ;
   in17__temp = in17 ;
   out13_assign_reg_349__temp = out13_assign_reg_349 ;
   out30_i__temp = out30_i ;
   t5_fu_216_p2__temp = t5_fu_216_p2 ;
   tmp4_fu_313_p2__temp = tmp4_fu_313_p2 ;
   t23_reg_362__temp = t23_reg_362 ;
   in27__temp = in27 ;
   out13_ap_vld__temp = out13_ap_vld ;
   tmp3_fu_265_p2__temp = tmp3_fu_265_p2 ;
   tmp_7_fu_307_p2__temp = tmp_7_fu_307_p2 ;
   t26_2_reg_377__temp = t26_2_reg_377 ;
   tmp1_fu_229_p2__temp = tmp1_fu_229_p2 ;
   ap_ready__temp = ap_ready ;
   in28__temp = in28 ;
   t25_fu_283_p2__temp = t25_fu_283_p2 ;
   out31__temp = out31 ;
   out30_o_ap_vld__temp = out30_o_ap_vld ;
   in9__temp = in9 ;
   ap_NS_fsm__temp = ap_NS_fsm ;
   t16_1_fu_298_p2__temp = t16_1_fu_298_p2 ;
   in32__temp = in32 ;
   ap_CS_fsm__temp = ap_CS_fsm ;
   in29__temp = in29 ;
   out13_assign_fu_222_p2__temp = out13_assign_fu_222_p2 ;
   t16_fu_277_p2__temp = t16_fu_277_p2 ;
   tmp_2_reg_357__temp = tmp_2_reg_357 ;
   in7__temp = in7 ;
   out31_ap_vld__temp = out31_ap_vld ;
   ap_clk__temp = ap_clk ;
   t26_1_reg_367__temp = t26_1_reg_367 ;
   in24__temp = in24 ;
   in10__temp = in10 ;
   ap_done__temp = ap_done ;
   ap_rst__temp = ap_rst ;
   in12__temp = in12 ;
   t16_reg_372__temp = t16_reg_372 ;
   ap_start__temp = ap_start ;
   in1__temp = in1 ;
   t26_1_fu_271_p2__temp = t26_1_fu_271_p2 ;
   in22__temp = in22 ;
   out13__temp = out13 ;
   t23_fu_259_p2__temp = t23_fu_259_p2 ;
   in14__temp = in14 ;

               trigger =  ( trigger & 1 ) ;
   if(((1 == ap_CS_fsm_state2) && (trigger == 1)) == 1){
       if(1 == ap_CS_fsm_state2)
       {
           t26_2_reg_377 =   (  ( ( tmp_2_reg_357__temp  & 1 ) & 18446744073709551615 )  == 1 ?  ( (  ( ( t23_reg_362__temp  - ( in24__temp  & 4294967295 )  ) & 4294967295 )  + ( in27__temp  & 4294967295 )  ) & 4294967295 )  :  t26_1_reg_367__temp  ) ;
       }
       goto ap_ST_fsm_state6;
   }
   if(((1 == ap_CS_fsm_state2) && (trigger == 1)) == 0){
       if(1 == ap_CS_fsm_state2)
       {
               t26_2_reg_377 =   (  ( ( tmp_2_reg_357__temp  & 1 ) & 18446744073709551615 )  == 1 ?  ( (  ( ( t23_reg_362__temp  - ( in24__temp  & 4294967295 )  ) & 4294967295 )  + ( in27__temp  & 4294967295 )  ) & 4294967295 )  :  t26_1_reg_367__temp  ) ;
       }
       goto ap_ST_fsm_state3;
   }

   ap_ST_fsm_state3:

	ap_CS_fsm_state1 = 0;
	ap_CS_fsm_state2 = 0;
	ap_CS_fsm_state3 = 1;
	ap_CS_fsm_state4 = 0;
	ap_CS_fsm_state5 = 0;
	ap_CS_fsm_state6 = 0;
	ap_CS_fsm_state7 = 0;
   in19__temp = in19 ;
   t26_2_fu_292_p3__temp = t26_2_fu_292_p3 ;
   in2__temp = in2 ;
   ap_idle__temp = ap_idle ;
   out30_o__temp = out30_o ;
   in4__temp = in4 ;
   t26_fu_287_p2__temp = t26_fu_287_p2 ;
   tmp_2_fu_247_p2__temp = tmp_2_fu_247_p2 ;
   in8__temp = in8 ;
   trigger__temp = trigger ;
   tmp2_fu_253_p2__temp = tmp2_fu_253_p2 ;
   t8_reg_207__temp = t8_reg_207 ;
   t11_fu_235_p2__temp = t11_fu_235_p2 ;
   in20__temp = in20 ;
   tmp_fu_241_p2__temp = tmp_fu_241_p2 ;
   tmp_2_reg_357_temp_0__temp = tmp_2_reg_357_temp_0 ;
   in3__temp = in3 ;
   ap_return__temp = ap_return ;
   tmp_6_fu_302_p2__temp = tmp_6_fu_302_p2 ;
   in15__temp = in15 ;
   in17__temp = in17 ;
   out13_assign_reg_349__temp = out13_assign_reg_349 ;
   out30_i__temp = out30_i ;
   t5_fu_216_p2__temp = t5_fu_216_p2 ;
   tmp4_fu_313_p2__temp = tmp4_fu_313_p2 ;
   t23_reg_362__temp = t23_reg_362 ;
   in27__temp = in27 ;
   out13_ap_vld__temp = out13_ap_vld ;
   tmp3_fu_265_p2__temp = tmp3_fu_265_p2 ;
   tmp_7_fu_307_p2__temp = tmp_7_fu_307_p2 ;
   t26_2_reg_377__temp = t26_2_reg_377 ;
   tmp1_fu_229_p2__temp = tmp1_fu_229_p2 ;
   ap_ready__temp = ap_ready ;
   in28__temp = in28 ;
   t25_fu_283_p2__temp = t25_fu_283_p2 ;
   out31__temp = out31 ;
   out30_o_ap_vld__temp = out30_o_ap_vld ;
   in9__temp = in9 ;
   ap_NS_fsm__temp = ap_NS_fsm ;
   t16_1_fu_298_p2__temp = t16_1_fu_298_p2 ;
   in32__temp = in32 ;
   ap_CS_fsm__temp = ap_CS_fsm ;
   in29__temp = in29 ;
   out13_assign_fu_222_p2__temp = out13_assign_fu_222_p2 ;
   t16_fu_277_p2__temp = t16_fu_277_p2 ;
   tmp_2_reg_357__temp = tmp_2_reg_357 ;
   in7__temp = in7 ;
   out31_ap_vld__temp = out31_ap_vld ;
   ap_clk__temp = ap_clk ;
   t26_1_reg_367__temp = t26_1_reg_367 ;
   in24__temp = in24 ;
   in10__temp = in10 ;
   ap_done__temp = ap_done ;
   ap_rst__temp = ap_rst ;
   in12__temp = in12 ;
   t16_reg_372__temp = t16_reg_372 ;
   ap_start__temp = ap_start ;
   in1__temp = in1 ;
   t26_1_fu_271_p2__temp = t26_1_fu_271_p2 ;
   in22__temp = in22 ;
   out13__temp = out13 ;
   t23_fu_259_p2__temp = t23_fu_259_p2 ;
   in14__temp = in14 ;

       if(1 == ap_CS_fsm_state3)
       {
           out30_o =   ( ( t26_2_reg_377__temp  + ( in29__temp  & 4294967295 )  ) & 4294967295 ) ;
       }
       if(1 == ap_CS_fsm_state3)
       {
           out30_o_ap_vld =  1;
               out13 =   ( ( ( in14__temp  & 4294967295 )  - ( in15__temp  & 4294967295 )  ) & 4294967295 ) ;
               out31 =   (  ( ( t8_reg_207__temp  + ( in32__temp  & 4294967295 )  ) & 4294967295 )  & 4294967295 ) ;
       }
       if(1 == ap_CS_fsm_state3)
       {
           t8_reg_207 =   ( ( t26_2_reg_377__temp  - ( in28__temp  & 4294967295 )  ) & 4294967295 ) ;
       }
       goto ap_ST_fsm_state5;

   ap_ST_fsm_state4:

	ap_CS_fsm_state1 = 0;
	ap_CS_fsm_state2 = 0;
	ap_CS_fsm_state3 = 0;
	ap_CS_fsm_state4 = 1;
	ap_CS_fsm_state5 = 0;
	ap_CS_fsm_state6 = 0;
	ap_CS_fsm_state7 = 0;
   in19__temp = in19 ;
   t26_2_fu_292_p3__temp = t26_2_fu_292_p3 ;
   in2__temp = in2 ;
   ap_idle__temp = ap_idle ;
   out30_o__temp = out30_o ;
   in4__temp = in4 ;
   t26_fu_287_p2__temp = t26_fu_287_p2 ;
   tmp_2_fu_247_p2__temp = tmp_2_fu_247_p2 ;
   in8__temp = in8 ;
   trigger__temp = trigger ;
   tmp2_fu_253_p2__temp = tmp2_fu_253_p2 ;
   t8_reg_207__temp = t8_reg_207 ;
   t11_fu_235_p2__temp = t11_fu_235_p2 ;
   in20__temp = in20 ;
   tmp_fu_241_p2__temp = tmp_fu_241_p2 ;
   tmp_2_reg_357_temp_0__temp = tmp_2_reg_357_temp_0 ;
   in3__temp = in3 ;
   ap_return__temp = ap_return ;
   tmp_6_fu_302_p2__temp = tmp_6_fu_302_p2 ;
   in15__temp = in15 ;
   in17__temp = in17 ;
   out13_assign_reg_349__temp = out13_assign_reg_349 ;
   out30_i__temp = out30_i ;
   t5_fu_216_p2__temp = t5_fu_216_p2 ;
   tmp4_fu_313_p2__temp = tmp4_fu_313_p2 ;
   t23_reg_362__temp = t23_reg_362 ;
   in27__temp = in27 ;
   out13_ap_vld__temp = out13_ap_vld ;
   tmp3_fu_265_p2__temp = tmp3_fu_265_p2 ;
   tmp_7_fu_307_p2__temp = tmp_7_fu_307_p2 ;
   t26_2_reg_377__temp = t26_2_reg_377 ;
   tmp1_fu_229_p2__temp = tmp1_fu_229_p2 ;
   ap_ready__temp = ap_ready ;
   in28__temp = in28 ;
   t25_fu_283_p2__temp = t25_fu_283_p2 ;
   out31__temp = out31 ;
   out30_o_ap_vld__temp = out30_o_ap_vld ;
   in9__temp = in9 ;
   ap_NS_fsm__temp = ap_NS_fsm ;
   t16_1_fu_298_p2__temp = t16_1_fu_298_p2 ;
   in32__temp = in32 ;
   ap_CS_fsm__temp = ap_CS_fsm ;
   in29__temp = in29 ;
   out13_assign_fu_222_p2__temp = out13_assign_fu_222_p2 ;
   t16_fu_277_p2__temp = t16_fu_277_p2 ;
   tmp_2_reg_357__temp = tmp_2_reg_357 ;
   in7__temp = in7 ;
   out31_ap_vld__temp = out31_ap_vld ;
   ap_clk__temp = ap_clk ;
   t26_1_reg_367__temp = t26_1_reg_367 ;
   in24__temp = in24 ;
   in10__temp = in10 ;
   ap_done__temp = ap_done ;
   ap_rst__temp = ap_rst ;
   in12__temp = in12 ;
   t16_reg_372__temp = t16_reg_372 ;
   ap_start__temp = ap_start ;
   in1__temp = in1 ;
   t26_1_fu_271_p2__temp = t26_1_fu_271_p2 ;
   in22__temp = in22 ;
   out13__temp = out13 ;
   t23_fu_259_p2__temp = t23_fu_259_p2 ;
   in14__temp = in14 ;

               trigger =  ( trigger & 1 ) ;
   if(((1 == ap_CS_fsm_state4) && (trigger == 1)) == 1){
       if(1 == ap_CS_fsm_state4)
       {
           t8_reg_207 =  t16_reg_372__temp ;
       }
       goto ap_ST_fsm_state7;
   }
   if(((1 == ap_CS_fsm_state4) && (trigger == 1)) == 0){
       if(1 == ap_CS_fsm_state4)
       {
               t8_reg_207 =  t16_reg_372__temp ;
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
   in19__temp = in19 ;
   t26_2_fu_292_p3__temp = t26_2_fu_292_p3 ;
   in2__temp = in2 ;
   ap_idle__temp = ap_idle ;
   out30_o__temp = out30_o ;
   in4__temp = in4 ;
   t26_fu_287_p2__temp = t26_fu_287_p2 ;
   tmp_2_fu_247_p2__temp = tmp_2_fu_247_p2 ;
   in8__temp = in8 ;
   trigger__temp = trigger ;
   tmp2_fu_253_p2__temp = tmp2_fu_253_p2 ;
   t8_reg_207__temp = t8_reg_207 ;
   t11_fu_235_p2__temp = t11_fu_235_p2 ;
   in20__temp = in20 ;
   tmp_fu_241_p2__temp = tmp_fu_241_p2 ;
   tmp_2_reg_357_temp_0__temp = tmp_2_reg_357_temp_0 ;
   in3__temp = in3 ;
   ap_return__temp = ap_return ;
   tmp_6_fu_302_p2__temp = tmp_6_fu_302_p2 ;
   in15__temp = in15 ;
   in17__temp = in17 ;
   out13_assign_reg_349__temp = out13_assign_reg_349 ;
   out30_i__temp = out30_i ;
   t5_fu_216_p2__temp = t5_fu_216_p2 ;
   tmp4_fu_313_p2__temp = tmp4_fu_313_p2 ;
   t23_reg_362__temp = t23_reg_362 ;
   in27__temp = in27 ;
   out13_ap_vld__temp = out13_ap_vld ;
   tmp3_fu_265_p2__temp = tmp3_fu_265_p2 ;
   tmp_7_fu_307_p2__temp = tmp_7_fu_307_p2 ;
   t26_2_reg_377__temp = t26_2_reg_377 ;
   tmp1_fu_229_p2__temp = tmp1_fu_229_p2 ;
   ap_ready__temp = ap_ready ;
   in28__temp = in28 ;
   t25_fu_283_p2__temp = t25_fu_283_p2 ;
   out31__temp = out31 ;
   out30_o_ap_vld__temp = out30_o_ap_vld ;
   in9__temp = in9 ;
   ap_NS_fsm__temp = ap_NS_fsm ;
   t16_1_fu_298_p2__temp = t16_1_fu_298_p2 ;
   in32__temp = in32 ;
   ap_CS_fsm__temp = ap_CS_fsm ;
   in29__temp = in29 ;
   out13_assign_fu_222_p2__temp = out13_assign_fu_222_p2 ;
   t16_fu_277_p2__temp = t16_fu_277_p2 ;
   tmp_2_reg_357__temp = tmp_2_reg_357 ;
   in7__temp = in7 ;
   out31_ap_vld__temp = out31_ap_vld ;
   ap_clk__temp = ap_clk ;
   t26_1_reg_367__temp = t26_1_reg_367 ;
   in24__temp = in24 ;
   in10__temp = in10 ;
   ap_done__temp = ap_done ;
   ap_rst__temp = ap_rst ;
   in12__temp = in12 ;
   t16_reg_372__temp = t16_reg_372 ;
   ap_start__temp = ap_start ;
   in1__temp = in1 ;
   t26_1_fu_271_p2__temp = t26_1_fu_271_p2 ;
   in22__temp = in22 ;
   out13__temp = out13 ;
   t23_fu_259_p2__temp = t23_fu_259_p2 ;
   in14__temp = in14 ;

       if(1 == ap_CS_fsm_state5)
       {
           ap_done =  1;
			if(ap_done==1){
          ap_return =  ( (  ( ( out13_assign_reg_349 +  ( ( t8_reg_207 + ( in32 & 4294967295 )  ) & 4294967295 )  ) & 4294967295 )  + ( out30_i & 4294967295 )  ) & 4294967295 ) ;
			}
       }
       if(1 == ap_CS_fsm_state5)
       {
           ap_ready =  1;
       }
       if(1 == ap_CS_fsm_state5)
       {
           out31_ap_vld =  1;
               out13 =   ( ( ( in14__temp  & 4294967295 )  - ( in15__temp  & 4294967295 )  ) & 4294967295 ) ;
               out31 =   (  ( ( t8_reg_207__temp  + ( in32__temp  & 4294967295 )  ) & 4294967295 )  & 4294967295 ) ;
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
   in19__temp = in19 ;
   t26_2_fu_292_p3__temp = t26_2_fu_292_p3 ;
   in2__temp = in2 ;
   ap_idle__temp = ap_idle ;
   out30_o__temp = out30_o ;
   in4__temp = in4 ;
   t26_fu_287_p2__temp = t26_fu_287_p2 ;
   tmp_2_fu_247_p2__temp = tmp_2_fu_247_p2 ;
   in8__temp = in8 ;
   trigger__temp = trigger ;
   tmp2_fu_253_p2__temp = tmp2_fu_253_p2 ;
   t8_reg_207__temp = t8_reg_207 ;
   t11_fu_235_p2__temp = t11_fu_235_p2 ;
   in20__temp = in20 ;
   tmp_fu_241_p2__temp = tmp_fu_241_p2 ;
   tmp_2_reg_357_temp_0__temp = tmp_2_reg_357_temp_0 ;
   in3__temp = in3 ;
   ap_return__temp = ap_return ;
   tmp_6_fu_302_p2__temp = tmp_6_fu_302_p2 ;
   in15__temp = in15 ;
   in17__temp = in17 ;
   out13_assign_reg_349__temp = out13_assign_reg_349 ;
   out30_i__temp = out30_i ;
   t5_fu_216_p2__temp = t5_fu_216_p2 ;
   tmp4_fu_313_p2__temp = tmp4_fu_313_p2 ;
   t23_reg_362__temp = t23_reg_362 ;
   in27__temp = in27 ;
   out13_ap_vld__temp = out13_ap_vld ;
   tmp3_fu_265_p2__temp = tmp3_fu_265_p2 ;
   tmp_7_fu_307_p2__temp = tmp_7_fu_307_p2 ;
   t26_2_reg_377__temp = t26_2_reg_377 ;
   tmp1_fu_229_p2__temp = tmp1_fu_229_p2 ;
   ap_ready__temp = ap_ready ;
   in28__temp = in28 ;
   t25_fu_283_p2__temp = t25_fu_283_p2 ;
   out31__temp = out31 ;
   out30_o_ap_vld__temp = out30_o_ap_vld ;
   in9__temp = in9 ;
   ap_NS_fsm__temp = ap_NS_fsm ;
   t16_1_fu_298_p2__temp = t16_1_fu_298_p2 ;
   in32__temp = in32 ;
   ap_CS_fsm__temp = ap_CS_fsm ;
   in29__temp = in29 ;
   out13_assign_fu_222_p2__temp = out13_assign_fu_222_p2 ;
   t16_fu_277_p2__temp = t16_fu_277_p2 ;
   tmp_2_reg_357__temp = tmp_2_reg_357 ;
   in7__temp = in7 ;
   out31_ap_vld__temp = out31_ap_vld ;
   ap_clk__temp = ap_clk ;
   t26_1_reg_367__temp = t26_1_reg_367 ;
   in24__temp = in24 ;
   in10__temp = in10 ;
   ap_done__temp = ap_done ;
   ap_rst__temp = ap_rst ;
   in12__temp = in12 ;
   t16_reg_372__temp = t16_reg_372 ;
   ap_start__temp = ap_start ;
   in1__temp = in1 ;
   t26_1_fu_271_p2__temp = t26_1_fu_271_p2 ;
   in22__temp = in22 ;
   out13__temp = out13 ;
   t23_fu_259_p2__temp = t23_fu_259_p2 ;
   in14__temp = in14 ;

       goto ap_ST_fsm_state3;

   ap_ST_fsm_state7:

	ap_CS_fsm_state1 = 0;
	ap_CS_fsm_state2 = 0;
	ap_CS_fsm_state3 = 0;
	ap_CS_fsm_state4 = 0;
	ap_CS_fsm_state5 = 0;
	ap_CS_fsm_state6 = 0;
	ap_CS_fsm_state7 = 1;
   in19__temp = in19 ;
   t26_2_fu_292_p3__temp = t26_2_fu_292_p3 ;
   in2__temp = in2 ;
   ap_idle__temp = ap_idle ;
   out30_o__temp = out30_o ;
   in4__temp = in4 ;
   t26_fu_287_p2__temp = t26_fu_287_p2 ;
   tmp_2_fu_247_p2__temp = tmp_2_fu_247_p2 ;
   in8__temp = in8 ;
   trigger__temp = trigger ;
   tmp2_fu_253_p2__temp = tmp2_fu_253_p2 ;
   t8_reg_207__temp = t8_reg_207 ;
   t11_fu_235_p2__temp = t11_fu_235_p2 ;
   in20__temp = in20 ;
   tmp_fu_241_p2__temp = tmp_fu_241_p2 ;
   tmp_2_reg_357_temp_0__temp = tmp_2_reg_357_temp_0 ;
   in3__temp = in3 ;
   ap_return__temp = ap_return ;
   tmp_6_fu_302_p2__temp = tmp_6_fu_302_p2 ;
   in15__temp = in15 ;
   in17__temp = in17 ;
   out13_assign_reg_349__temp = out13_assign_reg_349 ;
   out30_i__temp = out30_i ;
   t5_fu_216_p2__temp = t5_fu_216_p2 ;
   tmp4_fu_313_p2__temp = tmp4_fu_313_p2 ;
   t23_reg_362__temp = t23_reg_362 ;
   in27__temp = in27 ;
   out13_ap_vld__temp = out13_ap_vld ;
   tmp3_fu_265_p2__temp = tmp3_fu_265_p2 ;
   tmp_7_fu_307_p2__temp = tmp_7_fu_307_p2 ;
   t26_2_reg_377__temp = t26_2_reg_377 ;
   tmp1_fu_229_p2__temp = tmp1_fu_229_p2 ;
   ap_ready__temp = ap_ready ;
   in28__temp = in28 ;
   t25_fu_283_p2__temp = t25_fu_283_p2 ;
   out31__temp = out31 ;
   out30_o_ap_vld__temp = out30_o_ap_vld ;
   in9__temp = in9 ;
   ap_NS_fsm__temp = ap_NS_fsm ;
   t16_1_fu_298_p2__temp = t16_1_fu_298_p2 ;
   in32__temp = in32 ;
   ap_CS_fsm__temp = ap_CS_fsm ;
   in29__temp = in29 ;
   out13_assign_fu_222_p2__temp = out13_assign_fu_222_p2 ;
   t16_fu_277_p2__temp = t16_fu_277_p2 ;
   tmp_2_reg_357__temp = tmp_2_reg_357 ;
   in7__temp = in7 ;
   out31_ap_vld__temp = out31_ap_vld ;
   ap_clk__temp = ap_clk ;
   t26_1_reg_367__temp = t26_1_reg_367 ;
   in24__temp = in24 ;
   in10__temp = in10 ;
   ap_done__temp = ap_done ;
   ap_rst__temp = ap_rst ;
   in12__temp = in12 ;
   t16_reg_372__temp = t16_reg_372 ;
   ap_start__temp = ap_start ;
   in1__temp = in1 ;
   t26_1_fu_271_p2__temp = t26_1_fu_271_p2 ;
   in22__temp = in22 ;
   out13__temp = out13 ;
   t23_fu_259_p2__temp = t23_fu_259_p2 ;
   in14__temp = in14 ;

       goto ap_ST_fsm_state5;
   end:
	*ap_clk__1=ap_clk;
	*ap_done__1=ap_done;
	*ap_idle__1=ap_idle;
	*ap_ready__1=ap_ready;
	*ap_return__1=ap_return;
	*ap_rst__1=ap_rst;
	*ap_start__1=ap_start;
	*in1__1=in1;
	*in10__1=in10;
	*in12__1=in12;
	*in14__1=in14;
	*in15__1=in15;
	*in17__1=in17;
	*in19__1=in19;
	*in2__1=in2;
	*in20__1=in20;
	*in22__1=in22;
	*in24__1=in24;
	*in27__1=in27;
	*in28__1=in28;
	*in29__1=in29;
	*in3__1=in3;
	*in32__1=in32;
	*in4__1=in4;
	*in7__1=in7;
	*in8__1=in8;
	*in9__1=in9;
	*out13__1=out13;
	*out13_ap_vld__1=out13_ap_vld;
	*out30_i__1=out30_i;
	*out30_o__1=out30_o;
	*out30_o_ap_vld__1=out30_o_ap_vld;
	*out31__1=out31;
	*out31_ap_vld__1=out31_ap_vld;
	*trigger__1=trigger;
	printf("%lld\n",do_twos_complement( ap_return,32));
       return;
}

int main(){
	//for(int i=0; i<50; i++){
	unsigned long long int ap_clk__1 = 1;
	unsigned long long int ap_done__1 = 0;
	unsigned long long int ap_idle__1 = 0;
	unsigned long long int ap_ready__1 = 1;
	unsigned long long int ap_return__1 = 0;
	//unsigned long long int ap_return1_ap_vld__1 = 0;
	unsigned long long int ap_rst__1 = 0;
	unsigned long long int ap_start__1 = 1;
	unsigned long long int in1__1; 
    unsigned long long int in2__1;
    unsigned long long int in3__1;
    unsigned long long int in4__1;
    unsigned long long int in7__1;
    unsigned long long int in8__1;
    unsigned long long int in9__1;
	unsigned long long int in10__1; 
	unsigned long long int in12__1; 
	unsigned long long int in14__1; 
	unsigned long long int in15__1; 
	unsigned long long int in17__1; 
	unsigned long long int in19__1;  
	unsigned long long int in20__1; 
	unsigned long long int in22__1; 
	unsigned long long int in24__1; 
	unsigned long long int in27__1; 
	unsigned long long int in28__1; 
	unsigned long long int in29__1;  
	unsigned long long int in32__1;     
	long long int out13__1 = 0; 
	long long int out13_ap_vld__1 = 0; 
	unsigned long long int out30_i__1 = 0; 
	unsigned long long int out30_o__1 = 0; 
	unsigned long long int out30_o_ap_vld__1 = 0;
	unsigned long long int out31__1 = 0; 
	unsigned long long int out31_ap_vld__1 = 0;
	unsigned long long int trigger__1 = 1;
    scanf("%llu %llu %llu %llu %llu %llu %llu %llu %llu %llu %llu %llu %llu %llu %llu %llu %llu %llu %llu %llu",&in1__1,&in2__1,&in3__1,&in4__1,&in7__1,&in8__1,&in9__1,&in10__1,&in12__1,&in14__1,&in15__1,&in17__1,&in19__1,&in20__1,&in22__1,&in24__1,&in27__1,&in28__1,&in29__1,&in32__1);	
	int dummy = 1;
	hls_macc(&ap_clk__1,&ap_done__1,&ap_idle__1,&ap_ready__1,&ap_return__1,&ap_rst__1,&ap_start__1,&in1__1,&in2__1,&in3__1,&in4__1,&in7__1,&in8__1,&in9__1,&in10__1,&in12__1,&in14__1,&in15__1,&in17__1,&in19__1,&in20__1,&in22__1,&in24__1,&in27__1,&in28__1,&in29__1,&in32__1,&out13__1,&out13_ap_vld__1,&out30_i__1,&out30_o__1,&out30_o_ap_vld__1,&out31__1,&out31_ap_vld__1,&trigger__1,dummy);
//}
return 0;
}

//-3 1 -2 4 4 -3 -4 4 4 1 -4 1 4 1 -3 -2 4 -4 5 5 
