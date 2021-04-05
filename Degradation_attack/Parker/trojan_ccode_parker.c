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
void parker(unsigned long long int *ap_clk__1,unsigned long long int *ap_done__1,unsigned long long int *ap_idle__1,unsigned long long int *ap_ready__1,unsigned long long int *ap_return__1,unsigned long long int *ap_rst__1,unsigned long long int *ap_start__1,unsigned long long int *in1__1,unsigned long long int *in2__1,unsigned long long int *in3__1,unsigned long long int *in4__1,unsigned long long int *in5__1,unsigned long long int *in6__1,unsigned long long int *trigger__1,int dummy){
unsigned long long int ap_clk=*ap_clk__1;
unsigned long long int ap_done=*ap_done__1;
unsigned long long int ap_idle=*ap_idle__1;
unsigned long long int ap_ready=*ap_ready__1;
unsigned long long int ap_return=*ap_return__1;
unsigned long long int ap_rst=*ap_rst__1;
unsigned long long int ap_start=*ap_start__1;
unsigned long long int in1=*in1__1;
unsigned long long int in2=*in2__1;
unsigned long long int in3=*in3__1;
unsigned long long int in4=*in4__1;
unsigned long long int in5=*in5__1;
unsigned long long int in6=*in6__1;
unsigned long long int trigger=*trigger__1;
   long long int ap_CS_fsm_state1=0;
   long long int ap_CS_fsm_state2=0;
   long long int ap_CS_fsm_state3=0;
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
   unsigned long long int in1__temp=0;
   unsigned long long int in2__temp=0;
   unsigned long long int in3__temp=0;
   unsigned long long int in4__temp=0;
   unsigned long long int in5__temp=0;
   unsigned long long int in6__temp=0;
   unsigned long long int out1_1_fu_192_p2=0;
   unsigned long long int out1_1_fu_192_p2__temp=0;
   unsigned long long int out1_fu_187_p2=0;
   unsigned long long int out1_fu_187_p2__temp=0;
   unsigned long long int t2_fu_66_p2=0;
   unsigned long long int t2_fu_66_p2__temp=0;
   unsigned long long int t4_1_fu_162_p3=0;
   unsigned long long int t4_1_fu_162_p3__temp=0;
   unsigned long long int t4_2_fu_116_p2=0;
   unsigned long long int t4_2_fu_116_p2__temp=0;
   unsigned long long int t4_2_reg_242=0;
   unsigned long long int t4_2_reg_242__temp=0;
   unsigned long long int t4_3_fu_122_p2=0;
   unsigned long long int t4_3_fu_122_p2__temp=0;
   unsigned long long int t4_3_reg_247=0;
   unsigned long long int t4_3_reg_247__temp=0;
   unsigned long long int t4_4_fu_157_p3=0;
   unsigned long long int t4_4_fu_157_p3__temp=0;
   unsigned long long int t4_fu_104_p2=0;
   unsigned long long int t4_fu_104_p2__temp=0;
   unsigned long long int t4_reg_232=0;
   unsigned long long int t4_reg_232__temp=0;
   unsigned long long int t6_1_fu_149_p3=0;
   unsigned long long int t6_1_fu_149_p3__temp=0;
   unsigned long long int t6_2_fu_173_p3=0;
   unsigned long long int t6_2_fu_173_p3__temp=0;
   unsigned long long int t6_3_fu_144_p2=0;
   unsigned long long int t6_3_fu_144_p2__temp=0;
   unsigned long long int t6_4_fu_84_p2=0;
   unsigned long long int t6_4_fu_84_p2__temp=0;
   unsigned long long int t6_5_fu_90_p2=0;
   unsigned long long int t6_5_fu_90_p2__temp=0;
   unsigned long long int t6_6_fu_96_p3=0;
   unsigned long long int t6_6_fu_96_p3__temp=0;
   unsigned long long int t6_7_fu_168_p2=0;
   unsigned long long int t6_7_fu_168_p2__temp=0;
   unsigned long long int t6_fu_139_p2=0;
   unsigned long long int t6_fu_139_p2__temp=0;
   unsigned long long int tmp_1_fu_133_p2=0;
   unsigned long long int tmp_1_fu_133_p2__temp=0;
   unsigned long long int tmp_1_fu_133_p2_temp_3=0;
   unsigned long long int tmp_1_fu_133_p2_temp_3__temp=0;
   unsigned long long int tmp_4_fu_72_p2=0;
   unsigned long long int tmp_4_fu_72_p2__temp=0;
   unsigned long long int tmp_4_reg_227=0;
   unsigned long long int tmp_4_reg_227__temp=0;
   unsigned long long int tmp_4_reg_227_temp_1=0;
   unsigned long long int tmp_4_reg_227_temp_1__temp=0;
   unsigned long long int tmp_5_fu_78_p2=0;
   unsigned long long int tmp_5_fu_78_p2__temp=0;
   unsigned long long int tmp_9_fu_110_p2=0;
   unsigned long long int tmp_9_fu_110_p2__temp=0;
   unsigned long long int tmp_9_reg_237=0;
   unsigned long long int tmp_9_reg_237__temp=0;
   unsigned long long int tmp_9_reg_237_temp_2=0;
   unsigned long long int tmp_9_reg_237_temp_2__temp=0;
   unsigned long long int tmp_fu_128_p2=0;
   unsigned long long int tmp_fu_128_p2__temp=0;
   unsigned long long int tmp_fu_128_p2_temp_4=0;
   unsigned long long int tmp_fu_128_p2_temp_4__temp=0;
   unsigned long long int tmp_s_fu_181_p2=0;
   unsigned long long int tmp_s_fu_181_p2__temp=0;
   unsigned long long int tmp_s_fu_181_p2_temp_0=0;
   unsigned long long int tmp_s_fu_181_p2_temp_0__temp=0;
   unsigned long long int trigger__temp=0;
	ap_done=0;
	ap_start=1;

   ap_ST_fsm_state1:

	ap_CS_fsm_state1 = 1;
	ap_CS_fsm_state2 = 0;
	ap_CS_fsm_state3 = 0;
   t4_3_fu_122_p2__temp = t4_3_fu_122_p2 ;
   tmp_fu_128_p2__temp = tmp_fu_128_p2 ;
   t4_fu_104_p2__temp = t4_fu_104_p2 ;
   in1__temp = in1 ;
   t2_fu_66_p2__temp = t2_fu_66_p2 ;
   t4_3_reg_247__temp = t4_3_reg_247 ;
   ap_done__temp = ap_done ;
   t6_2_fu_173_p3__temp = t6_2_fu_173_p3 ;
   t6_4_fu_84_p2__temp = t6_4_fu_84_p2 ;
   in6__temp = in6 ;
   tmp_9_reg_237_temp_2__temp = tmp_9_reg_237_temp_2 ;
   ap_return__temp = ap_return ;
   trigger__temp = trigger ;
   t6_7_fu_168_p2__temp = t6_7_fu_168_p2 ;
   tmp_9_reg_237__temp = tmp_9_reg_237 ;
   tmp_s_fu_181_p2_temp_0__temp = tmp_s_fu_181_p2_temp_0 ;
   ap_idle__temp = ap_idle ;
   t6_3_fu_144_p2__temp = t6_3_fu_144_p2 ;
   t4_1_fu_162_p3__temp = t4_1_fu_162_p3 ;
   in5__temp = in5 ;
   out1_fu_187_p2__temp = out1_fu_187_p2 ;
   t4_reg_232__temp = t4_reg_232 ;
   tmp_4_fu_72_p2__temp = tmp_4_fu_72_p2 ;
   tmp_fu_128_p2_temp_4__temp = tmp_fu_128_p2_temp_4 ;
   t4_2_fu_116_p2__temp = t4_2_fu_116_p2 ;
   ap_clk__temp = ap_clk ;
   ap_NS_fsm__temp = ap_NS_fsm ;
   ap_CS_fsm__temp = ap_CS_fsm ;
   tmp_4_reg_227__temp = tmp_4_reg_227 ;
   tmp_1_fu_133_p2_temp_3__temp = tmp_1_fu_133_p2_temp_3 ;
   t6_fu_139_p2__temp = t6_fu_139_p2 ;
   tmp_9_fu_110_p2__temp = tmp_9_fu_110_p2 ;
   ap_ready__temp = ap_ready ;
   tmp_s_fu_181_p2__temp = tmp_s_fu_181_p2 ;
   ap_start__temp = ap_start ;
   tmp_5_fu_78_p2__temp = tmp_5_fu_78_p2 ;
   t4_4_fu_157_p3__temp = t4_4_fu_157_p3 ;
   in2__temp = in2 ;
   ap_rst__temp = ap_rst ;
   t4_2_reg_242__temp = t4_2_reg_242 ;
   in4__temp = in4 ;
   t6_5_fu_90_p2__temp = t6_5_fu_90_p2 ;
   t6_6_fu_96_p3__temp = t6_6_fu_96_p3 ;
   in3__temp = in3 ;
   out1_1_fu_192_p2__temp = out1_1_fu_192_p2 ;
   tmp_1_fu_133_p2__temp = tmp_1_fu_133_p2 ;
   t6_1_fu_149_p3__temp = t6_1_fu_149_p3 ;
   tmp_4_reg_227_temp_1__temp = tmp_4_reg_227_temp_1 ;

       if((0 == ap_start) && (1 == ap_CS_fsm_state1))
       {
           ap_idle =  1;
       }
               trigger =  ( trigger & 1 ) ;
   if(((1 == ap_CS_fsm_state1) && (ap_start == 1)) == 1){
       goto ap_ST_fsm_state3;
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
   t4_3_fu_122_p2__temp = t4_3_fu_122_p2 ;
   tmp_fu_128_p2__temp = tmp_fu_128_p2 ;
   t4_fu_104_p2__temp = t4_fu_104_p2 ;
   in1__temp = in1 ;
   t2_fu_66_p2__temp = t2_fu_66_p2 ;
   t4_3_reg_247__temp = t4_3_reg_247 ;
   ap_done__temp = ap_done ;
   t6_2_fu_173_p3__temp = t6_2_fu_173_p3 ;
   t6_4_fu_84_p2__temp = t6_4_fu_84_p2 ;
   in6__temp = in6 ;
   tmp_9_reg_237_temp_2__temp = tmp_9_reg_237_temp_2 ;
   ap_return__temp = ap_return ;
   trigger__temp = trigger ;
   t6_7_fu_168_p2__temp = t6_7_fu_168_p2 ;
   tmp_9_reg_237__temp = tmp_9_reg_237 ;
   tmp_s_fu_181_p2_temp_0__temp = tmp_s_fu_181_p2_temp_0 ;
   ap_idle__temp = ap_idle ;
   t6_3_fu_144_p2__temp = t6_3_fu_144_p2 ;
   t4_1_fu_162_p3__temp = t4_1_fu_162_p3 ;
   in5__temp = in5 ;
   out1_fu_187_p2__temp = out1_fu_187_p2 ;
   t4_reg_232__temp = t4_reg_232 ;
   tmp_4_fu_72_p2__temp = tmp_4_fu_72_p2 ;
   tmp_fu_128_p2_temp_4__temp = tmp_fu_128_p2_temp_4 ;
   t4_2_fu_116_p2__temp = t4_2_fu_116_p2 ;
   ap_clk__temp = ap_clk ;
   ap_NS_fsm__temp = ap_NS_fsm ;
   ap_CS_fsm__temp = ap_CS_fsm ;
   tmp_4_reg_227__temp = tmp_4_reg_227 ;
   tmp_1_fu_133_p2_temp_3__temp = tmp_1_fu_133_p2_temp_3 ;
   t6_fu_139_p2__temp = t6_fu_139_p2 ;
   tmp_9_fu_110_p2__temp = tmp_9_fu_110_p2 ;
   ap_ready__temp = ap_ready ;
   tmp_s_fu_181_p2__temp = tmp_s_fu_181_p2 ;
   ap_start__temp = ap_start ;
   tmp_5_fu_78_p2__temp = tmp_5_fu_78_p2 ;
   t4_4_fu_157_p3__temp = t4_4_fu_157_p3 ;
   in2__temp = in2 ;
   ap_rst__temp = ap_rst ;
   t4_2_reg_242__temp = t4_2_reg_242 ;
   in4__temp = in4 ;
   t6_5_fu_90_p2__temp = t6_5_fu_90_p2 ;
   t6_6_fu_96_p3__temp = t6_6_fu_96_p3 ;
   in3__temp = in3 ;
   out1_1_fu_192_p2__temp = out1_1_fu_192_p2 ;
   tmp_1_fu_133_p2__temp = tmp_1_fu_133_p2 ;
   t6_1_fu_149_p3__temp = t6_1_fu_149_p3 ;
   tmp_4_reg_227_temp_1__temp = tmp_4_reg_227_temp_1 ;

       if(1 == ap_CS_fsm_state2)
       {
           ap_done =  1;
			if(ap_done==1){
          ap_return =  (  ( (  (  (  ( (  ( ( in5 & 4294967295 )  == 0 ? 1 :  0 )  & 1 ) & 18446744073709551615 )  == 1 ?  (  ( (  ( ( in6 & 4294967295 )  == 0 ? 1 :  0 )  & 1 ) & 18446744073709551615 )  == 1 ?  ( ( 8 - ( in4 & 4294967295 )  ) & 4294967295 )  :   ( ( ( in2 & 4294967295 )  + 5 ) & 4294967295 )  )  :   ( (  (  ( ( tmp_4_reg_227 & 1 ) & 18446744073709551615 )  == 1 ? t4_reg_232 :   (  ( ( tmp_9_reg_237 & 1 ) & 18446744073709551615 )  == 1 ? t4_3_reg_247 :  t4_2_reg_242 )  )  + ( in4 & 4294967295 )  ) & 4294967295 )  )  == 0 ? 1 :  0 )  & 1 ) & 18446744073709551615 )  == 1 ?  ( ( ( in5 & 4294967295 )  + 8 ) & 4294967295 )  :   ( ( do_twos_complement( ( in1 & 4294967295 )  , 32 )  + do_twos_complement( 4294967291 , 32 )  ) & 4294967295 )  ) ;
			}
       }
       if(1 == ap_CS_fsm_state2)
       {
           ap_ready =  1;
       }
       if(ap_done==1){
       	goto end;
       }
       goto ap_ST_fsm_state1;

   ap_ST_fsm_state3:

	ap_CS_fsm_state1 = 0;
	ap_CS_fsm_state2 = 0;
	ap_CS_fsm_state3 = 1;
   t4_3_fu_122_p2__temp = t4_3_fu_122_p2 ;
   tmp_fu_128_p2__temp = tmp_fu_128_p2 ;
   t4_fu_104_p2__temp = t4_fu_104_p2 ;
   in1__temp = in1 ;
   t2_fu_66_p2__temp = t2_fu_66_p2 ;
   t4_3_reg_247__temp = t4_3_reg_247 ;
   ap_done__temp = ap_done ;
   t6_2_fu_173_p3__temp = t6_2_fu_173_p3 ;
   t6_4_fu_84_p2__temp = t6_4_fu_84_p2 ;
   in6__temp = in6 ;
   tmp_9_reg_237_temp_2__temp = tmp_9_reg_237_temp_2 ;
   ap_return__temp = ap_return ;
   trigger__temp = trigger ;
   t6_7_fu_168_p2__temp = t6_7_fu_168_p2 ;
   tmp_9_reg_237__temp = tmp_9_reg_237 ;
   tmp_s_fu_181_p2_temp_0__temp = tmp_s_fu_181_p2_temp_0 ;
   ap_idle__temp = ap_idle ;
   t6_3_fu_144_p2__temp = t6_3_fu_144_p2 ;
   t4_1_fu_162_p3__temp = t4_1_fu_162_p3 ;
   in5__temp = in5 ;
   out1_fu_187_p2__temp = out1_fu_187_p2 ;
   t4_reg_232__temp = t4_reg_232 ;
   tmp_4_fu_72_p2__temp = tmp_4_fu_72_p2 ;
   tmp_fu_128_p2_temp_4__temp = tmp_fu_128_p2_temp_4 ;
   t4_2_fu_116_p2__temp = t4_2_fu_116_p2 ;
   ap_clk__temp = ap_clk ;
   ap_NS_fsm__temp = ap_NS_fsm ;
   ap_CS_fsm__temp = ap_CS_fsm ;
   tmp_4_reg_227__temp = tmp_4_reg_227 ;
   tmp_1_fu_133_p2_temp_3__temp = tmp_1_fu_133_p2_temp_3 ;
   t6_fu_139_p2__temp = t6_fu_139_p2 ;
   tmp_9_fu_110_p2__temp = tmp_9_fu_110_p2 ;
   ap_ready__temp = ap_ready ;
   tmp_s_fu_181_p2__temp = tmp_s_fu_181_p2 ;
   ap_start__temp = ap_start ;
   tmp_5_fu_78_p2__temp = tmp_5_fu_78_p2 ;
   t4_4_fu_157_p3__temp = t4_4_fu_157_p3 ;
   in2__temp = in2 ;
   ap_rst__temp = ap_rst ;
   t4_2_reg_242__temp = t4_2_reg_242 ;
   in4__temp = in4 ;
   t6_5_fu_90_p2__temp = t6_5_fu_90_p2 ;
   t6_6_fu_96_p3__temp = t6_6_fu_96_p3 ;
   in3__temp = in3 ;
   out1_1_fu_192_p2__temp = out1_1_fu_192_p2 ;
   tmp_1_fu_133_p2__temp = tmp_1_fu_133_p2 ;
   t6_1_fu_149_p3__temp = t6_1_fu_149_p3 ;
   tmp_4_reg_227_temp_1__temp = tmp_4_reg_227_temp_1 ;

       goto ap_ST_fsm_state2;
   end:
	*ap_clk__1=ap_clk;
	*ap_done__1=ap_done;
	*ap_idle__1=ap_idle;
	*ap_ready__1=ap_ready;
	*ap_return__1=ap_return;
	*ap_rst__1=ap_rst;
	*ap_start__1=ap_start;
	*in1__1=in1;
	*in2__1=in2;
	*in3__1=in3;
	*in4__1=in4;
	*in5__1=in5;
	*in6__1=in6;
	*trigger__1=trigger;
       return;
}
