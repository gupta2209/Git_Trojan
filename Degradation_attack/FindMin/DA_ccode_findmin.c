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
void findmin(unsigned long long int *a1__1,unsigned long long int *a2__1,unsigned long long int *a3__1,unsigned long long int *a4__1,unsigned long long int *a5__1,unsigned long long int *a6__1,unsigned long long int *a7__1,unsigned long long int *a8__1,unsigned long long int *ap_clk__1,unsigned long long int *ap_done__1,unsigned long long int *ap_idle__1,unsigned long long int *ap_ready__1,unsigned long long int *ap_return__1,unsigned long long int *ap_rst__1,unsigned long long int *ap_start__1,unsigned long long int *trigger__1,int dummy){
unsigned long long int a1=*a1__1;
unsigned long long int a2=*a2__1;
unsigned long long int a3=*a3__1;
unsigned long long int a4=*a4__1;
unsigned long long int a5=*a5__1;
unsigned long long int a6=*a6__1;
unsigned long long int a7=*a7__1;
unsigned long long int a8=*a8__1;
unsigned long long int ap_clk=*ap_clk__1;
unsigned long long int ap_done=*ap_done__1;
unsigned long long int ap_idle=*ap_idle__1;
unsigned long long int ap_ready=*ap_ready__1;
unsigned long long int ap_return=*ap_return__1;
unsigned long long int ap_rst=*ap_rst__1;
unsigned long long int ap_start=*ap_start__1;
unsigned long long int trigger=*trigger__1;
   long long int ap_CS_fsm_state1=0;
   long long int ap_CS_fsm_state2=0;
   long long int ap_CS_fsm_state3=0;
   unsigned long long int a14_1_fu_94_p3=0;
   unsigned long long int a14_1_fu_94_p3__temp=0;
   unsigned long long int a14_1_reg_171=0;
   unsigned long long int a14_1_reg_171__temp=0;
   unsigned long long int a14_fu_80_p3=0;
   unsigned long long int a14_fu_80_p3__temp=0;
   unsigned long long int a14_reg_166=0;
   unsigned long long int a14_reg_166__temp=0;
   unsigned long long int a18_2_fu_142_p3=0;
   unsigned long long int a18_2_fu_142_p3__temp=0;
   unsigned long long int a1__temp=0;
   unsigned long long int a2__temp=0;
   unsigned long long int a3__temp=0;
   unsigned long long int a4__temp=0;
   unsigned long long int a58_1_fu_108_p3=0;
   unsigned long long int a58_1_fu_108_p3__temp=0;
   unsigned long long int a58_1_reg_176=0;
   unsigned long long int a58_1_reg_176__temp=0;
   unsigned long long int a58_2_fu_122_p3=0;
   unsigned long long int a58_2_fu_122_p3__temp=0;
   unsigned long long int a58_2_reg_181=0;
   unsigned long long int a58_2_reg_181__temp=0;
   unsigned long long int a58_fu_147_p3=0;
   unsigned long long int a58_fu_147_p3__temp=0;
   unsigned long long int a5__temp=0;
   unsigned long long int a6__temp=0;
   unsigned long long int a7__temp=0;
   unsigned long long int a8__temp=0;
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
   unsigned long long int tmp_1_fu_88_p2=0;
   unsigned long long int tmp_1_fu_88_p2__temp=0;
   unsigned long long int tmp_1_fu_88_p2_temp_0=0;
   unsigned long long int tmp_1_fu_88_p2_temp_0__temp=0;
   unsigned long long int tmp_2_fu_102_p2=0;
   unsigned long long int tmp_2_fu_102_p2__temp=0;
   unsigned long long int tmp_2_fu_102_p2_temp_3=0;
   unsigned long long int tmp_2_fu_102_p2_temp_3__temp=0;
   unsigned long long int tmp_3_fu_116_p2=0;
   unsigned long long int tmp_3_fu_116_p2__temp=0;
   unsigned long long int tmp_3_fu_116_p2_temp_4=0;
   unsigned long long int tmp_3_fu_116_p2_temp_4__temp=0;
   unsigned long long int tmp_4_fu_130_p2=0;
   unsigned long long int tmp_4_fu_130_p2__temp=0;
   unsigned long long int tmp_4_reg_186=0;
   unsigned long long int tmp_4_reg_186__temp=0;
   unsigned long long int tmp_4_reg_186_temp_2=0;
   unsigned long long int tmp_4_reg_186_temp_2__temp=0;
   unsigned long long int tmp_5_fu_136_p2=0;
   unsigned long long int tmp_5_fu_136_p2__temp=0;
   unsigned long long int tmp_5_reg_191=0;
   unsigned long long int tmp_5_reg_191__temp=0;
   unsigned long long int tmp_5_reg_191_temp_5=0;
   unsigned long long int tmp_5_reg_191_temp_5__temp=0;
   unsigned long long int tmp_6_fu_152_p2=0;
   unsigned long long int tmp_6_fu_152_p2__temp=0;
   unsigned long long int tmp_6_fu_152_p2_temp_6=0;
   unsigned long long int tmp_6_fu_152_p2_temp_6__temp=0;
   unsigned long long int tmp_fu_74_p2=0;
   unsigned long long int tmp_fu_74_p2__temp=0;
   unsigned long long int tmp_fu_74_p2_temp_1=0;
   unsigned long long int tmp_fu_74_p2_temp_1__temp=0;
   unsigned long long int trigger__temp=0;
    ap_done=0;
    ap_start=1;

   ap_ST_fsm_state1:

    ap_CS_fsm_state1 = 1;
    ap_CS_fsm_state2 = 0;
    ap_CS_fsm_state3 = 0;
   ap_ready__temp = ap_ready ;
   a58_1_reg_176__temp = a58_1_reg_176 ;
   ap_NS_fsm__temp = ap_NS_fsm ;
   ap_return__temp = ap_return ;
   tmp_1_fu_88_p2_temp_0__temp = tmp_1_fu_88_p2_temp_0 ;
   tmp_fu_74_p2_temp_1__temp = tmp_fu_74_p2_temp_1 ;
   a14_reg_166__temp = a14_reg_166 ;
   a8__temp = a8 ;
   a14_1_reg_171__temp = a14_1_reg_171 ;
   tmp_4_reg_186_temp_2__temp = tmp_4_reg_186_temp_2 ;
   tmp_5_reg_191_temp_5__temp = tmp_5_reg_191_temp_5 ;
   tmp_3_fu_116_p2__temp = tmp_3_fu_116_p2 ;
   ap_idle__temp = ap_idle ;
   tmp_6_fu_152_p2__temp = tmp_6_fu_152_p2 ;
   ap_CS_fsm__temp = ap_CS_fsm ;
   tmp_5_reg_191__temp = tmp_5_reg_191 ;
   a58_2_fu_122_p3__temp = a58_2_fu_122_p3 ;
   tmp_4_fu_130_p2__temp = tmp_4_fu_130_p2 ;
   tmp_2_fu_102_p2__temp = tmp_2_fu_102_p2 ;
   a7__temp = a7 ;
   a5__temp = a5 ;
   a58_fu_147_p3__temp = a58_fu_147_p3 ;
   ap_start__temp = ap_start ;
   trigger__temp = trigger ;
   tmp_4_reg_186__temp = tmp_4_reg_186 ;
   tmp_fu_74_p2__temp = tmp_fu_74_p2 ;
   a3__temp = a3 ;
   tmp_6_fu_152_p2_temp_6__temp = tmp_6_fu_152_p2_temp_6 ;
   a6__temp = a6 ;
   tmp_1_fu_88_p2__temp = tmp_1_fu_88_p2 ;
   a18_2_fu_142_p3__temp = a18_2_fu_142_p3 ;
   tmp_5_fu_136_p2__temp = tmp_5_fu_136_p2 ;
   tmp_2_fu_102_p2_temp_3__temp = tmp_2_fu_102_p2_temp_3 ;
   a2__temp = a2 ;
   a58_1_fu_108_p3__temp = a58_1_fu_108_p3 ;
   ap_done__temp = ap_done ;
   a58_2_reg_181__temp = a58_2_reg_181 ;
   a1__temp = a1 ;
   a14_1_fu_94_p3__temp = a14_1_fu_94_p3 ;
   ap_rst__temp = ap_rst ;
   tmp_3_fu_116_p2_temp_4__temp = tmp_3_fu_116_p2_temp_4 ;
   a14_fu_80_p3__temp = a14_fu_80_p3 ;
   ap_clk__temp = ap_clk ;
   a4__temp = a4 ;

       if((0 == ap_start) && (1 == ap_CS_fsm_state1))
       {
           ap_idle =  1;
       }
   if(((1 == ap_CS_fsm_state1) && (ap_start == 1)) == 1){
       if((1 == ap_CS_fsm_state1) && (ap_start == 1))
       {
           tmp_5_reg_191 =   ( do_twos_complement(  (  ( (  ( do_twos_complement( ( a5__temp  & 4294967295 )  , 63 )  < do_twos_complement( ( a6__temp  & 4294967295 )  , 63 )  ? 1 : 0 )  & 1 ) & 18446744073709551615 )  == 1 ? ( a5__temp  & 4294967295 )  :  ( a6__temp  & 4294967295 )  )  , 63 )  < do_twos_complement(  (  ( (  ( do_twos_complement( ( a7__temp  & 4294967295 )  , 63 )  < do_twos_complement( ( a8__temp  & 4294967295 )  , 63 )  ? 1 : 0 )  & 1 ) & 18446744073709551615 )  == 1 ? ( a7__temp  & 4294967295 )  :  ( a8__temp  & 4294967295 )  )  , 63 )  ? 1 : 0 ) ;
           tmp_4_reg_186 =   ( do_twos_complement(  (  ( (  ( do_twos_complement( ( a1__temp  & 4294967295 )  , 63 )  < do_twos_complement( ( a2__temp  & 4294967295 )  , 63 )  ? 1 : 0 )  & 1 ) & 18446744073709551615 )  == 1 ? ( a1__temp  & 4294967295 )  :  ( a2__temp  & 4294967295 )  )  , 63 )  < do_twos_complement(  (  ( (  ( do_twos_complement( ( a3__temp  & 4294967295 )  , 63 )  < do_twos_complement( ( a4__temp  & 4294967295 )  , 63 )  ? 1 : 0 )  & 1 ) & 18446744073709551615 )  == 1 ? ( a3__temp  & 4294967295 )  :  ( a4__temp  & 4294967295 )  )  , 63 )  ? 1 : 0 ) ;
           a58_2_reg_181 =   (  ( (  ( do_twos_complement( ( a7__temp  & 4294967295 )  , 63 )  < do_twos_complement( ( a8__temp  & 4294967295 )  , 63 )  ? 1 : 0 )  & 1 ) & 18446744073709551615 )  == 1 ? ( a7__temp  & 4294967295 )  :  ( a8__temp  & 4294967295 )  ) ;
           a58_1_reg_176 =   (  ( (  ( do_twos_complement( ( a5__temp  & 4294967295 )  , 63 )  < do_twos_complement( ( a6__temp  & 4294967295 )  , 63 )  ? 1 : 0 )  & 1 ) & 18446744073709551615 )  == 1 ? ( a5__temp  & 4294967295 )  :  ( a6__temp  & 4294967295 )  ) ;
           a14_reg_166 =   (  ( (  ( do_twos_complement( ( a1__temp  & 4294967295 )  , 63 )  < do_twos_complement( ( a2__temp  & 4294967295 )  , 63 )  ? 1 : 0 )  & 1 ) & 18446744073709551615 )  == 1 ? ( a1__temp  & 4294967295 )  :  ( a2__temp  & 4294967295 )  ) ;
           a14_1_reg_171 =   (  ( (  ( do_twos_complement( ( a3__temp  & 4294967295 )  , 63 )  < do_twos_complement( ( a4__temp  & 4294967295 )  , 63 )  ? 1 : 0 )  & 1 ) & 18446744073709551615 )  == 1 ? ( a3__temp  & 4294967295 )  :  ( a4__temp  & 4294967295 )  ) ;
       }
       goto ap_ST_fsm_state2;
   }
   if(((1 == ap_CS_fsm_state1) && (ap_start == 1)) == 0){
       if((1 == ap_CS_fsm_state1) && (ap_start == 1))
       {
               tmp_5_reg_191 =   ( do_twos_complement(  (  ( (  ( do_twos_complement( ( a5__temp  & 4294967295 )  , 63 )  < do_twos_complement( ( a6__temp  & 4294967295 )  , 63 )  ? 1 : 0 )  & 1 ) & 18446744073709551615 )  == 1 ? ( a5__temp  & 4294967295 )  :  ( a6__temp  & 4294967295 )  )  , 63 )  < do_twos_complement(  (  ( (  ( do_twos_complement( ( a7__temp  & 4294967295 )  , 63 )  < do_twos_complement( ( a8__temp  & 4294967295 )  , 63 )  ? 1 : 0 )  & 1 ) & 18446744073709551615 )  == 1 ? ( a7__temp  & 4294967295 )  :  ( a8__temp  & 4294967295 )  )  , 63 )  ? 1 : 0 ) ;
               tmp_4_reg_186 =   ( do_twos_complement(  (  ( (  ( do_twos_complement( ( a1__temp  & 4294967295 )  , 63 )  < do_twos_complement( ( a2__temp  & 4294967295 )  , 63 )  ? 1 : 0 )  & 1 ) & 18446744073709551615 )  == 1 ? ( a1__temp  & 4294967295 )  :  ( a2__temp  & 4294967295 )  )  , 63 )  < do_twos_complement(  (  ( (  ( do_twos_complement( ( a3__temp  & 4294967295 )  , 63 )  < do_twos_complement( ( a4__temp  & 4294967295 )  , 63 )  ? 1 : 0 )  & 1 ) & 18446744073709551615 )  == 1 ? ( a3__temp  & 4294967295 )  :  ( a4__temp  & 4294967295 )  )  , 63 )  ? 1 : 0 ) ;
               a58_2_reg_181 =   (  ( (  ( do_twos_complement( ( a7__temp  & 4294967295 )  , 63 )  < do_twos_complement( ( a8__temp  & 4294967295 )  , 63 )  ? 1 : 0 )  & 1 ) & 18446744073709551615 )  == 1 ? ( a7__temp  & 4294967295 )  :  ( a8__temp  & 4294967295 )  ) ;
               a58_1_reg_176 =   (  ( (  ( do_twos_complement( ( a5__temp  & 4294967295 )  , 63 )  < do_twos_complement( ( a6__temp  & 4294967295 )  , 63 )  ? 1 : 0 )  & 1 ) & 18446744073709551615 )  == 1 ? ( a5__temp  & 4294967295 )  :  ( a6__temp  & 4294967295 )  ) ;
               a14_reg_166 =   (  ( (  ( do_twos_complement( ( a1__temp  & 4294967295 )  , 63 )  < do_twos_complement( ( a2__temp  & 4294967295 )  , 63 )  ? 1 : 0 )  & 1 ) & 18446744073709551615 )  == 1 ? ( a1__temp  & 4294967295 )  :  ( a2__temp  & 4294967295 )  ) ;
               a14_1_reg_171 =   (  ( (  ( do_twos_complement( ( a3__temp  & 4294967295 )  , 63 )  < do_twos_complement( ( a4__temp  & 4294967295 )  , 63 )  ? 1 : 0 )  & 1 ) & 18446744073709551615 )  == 1 ? ( a3__temp  & 4294967295 )  :  ( a4__temp  & 4294967295 )  ) ;
       }
       goto ap_ST_fsm_state1;
   }

   ap_ST_fsm_state2:

    ap_CS_fsm_state1 = 0;
    ap_CS_fsm_state2 = 1;
    ap_CS_fsm_state3 = 0;
   ap_ready__temp = ap_ready ;
   a58_1_reg_176__temp = a58_1_reg_176 ;
   ap_NS_fsm__temp = ap_NS_fsm ;
   ap_return__temp = ap_return ;
   tmp_1_fu_88_p2_temp_0__temp = tmp_1_fu_88_p2_temp_0 ;
   tmp_fu_74_p2_temp_1__temp = tmp_fu_74_p2_temp_1 ;
   a14_reg_166__temp = a14_reg_166 ;
   a8__temp = a8 ;
   a14_1_reg_171__temp = a14_1_reg_171 ;
   tmp_4_reg_186_temp_2__temp = tmp_4_reg_186_temp_2 ;
   tmp_5_reg_191_temp_5__temp = tmp_5_reg_191_temp_5 ;
   tmp_3_fu_116_p2__temp = tmp_3_fu_116_p2 ;
   ap_idle__temp = ap_idle ;
   tmp_6_fu_152_p2__temp = tmp_6_fu_152_p2 ;
   ap_CS_fsm__temp = ap_CS_fsm ;
   tmp_5_reg_191__temp = tmp_5_reg_191 ;
   a58_2_fu_122_p3__temp = a58_2_fu_122_p3 ;
   tmp_4_fu_130_p2__temp = tmp_4_fu_130_p2 ;
   tmp_2_fu_102_p2__temp = tmp_2_fu_102_p2 ;
   a7__temp = a7 ;
   a5__temp = a5 ;
   a58_fu_147_p3__temp = a58_fu_147_p3 ;
   ap_start__temp = ap_start ;
   trigger__temp = trigger ;
   tmp_4_reg_186__temp = tmp_4_reg_186 ;
   tmp_fu_74_p2__temp = tmp_fu_74_p2 ;
   a3__temp = a3 ;
   tmp_6_fu_152_p2_temp_6__temp = tmp_6_fu_152_p2_temp_6 ;
   a6__temp = a6 ;
   tmp_1_fu_88_p2__temp = tmp_1_fu_88_p2 ;
   a18_2_fu_142_p3__temp = a18_2_fu_142_p3 ;
   tmp_5_fu_136_p2__temp = tmp_5_fu_136_p2 ;
   tmp_2_fu_102_p2_temp_3__temp = tmp_2_fu_102_p2_temp_3 ;
   a2__temp = a2 ;
   a58_1_fu_108_p3__temp = a58_1_fu_108_p3 ;
   ap_done__temp = ap_done ;
   a58_2_reg_181__temp = a58_2_reg_181 ;
   a1__temp = a1 ;
   a14_1_fu_94_p3__temp = a14_1_fu_94_p3 ;
   ap_rst__temp = ap_rst ;
   tmp_3_fu_116_p2_temp_4__temp = tmp_3_fu_116_p2_temp_4 ;
   a14_fu_80_p3__temp = a14_fu_80_p3 ;
   ap_clk__temp = ap_clk ;
   a4__temp = a4 ;

       if(1 == ap_CS_fsm_state2)
       {
           ap_done =  1;
            if(ap_done==1){
          ap_return =  (  ( (  ( do_twos_complement(  (  ( ( tmp_4_reg_186 & 1 ) & 18446744073709551615 )  == 1 ? a14_reg_166 :  a14_1_reg_171 )  , 63 )  < do_twos_complement(  (  ( ( tmp_5_reg_191 & 1 ) & 18446744073709551615 )  == 1 ? a58_1_reg_176 :  a58_2_reg_181 )  , 63 )  ? 1 : 0 )  & 1 ) & 18446744073709551615 )  == 1 ?  (  ( ( tmp_4_reg_186 & 1 ) & 18446744073709551615 )  == 1 ? a14_reg_166 :  a14_1_reg_171 )  :   (  ( ( tmp_5_reg_191 & 1 ) & 18446744073709551615 )  == 1 ? a58_1_reg_176 :  a58_2_reg_181 )  ) ;
            }
       }
       if(1 == ap_CS_fsm_state2)
       {
           ap_ready =  1;
       }
               trigger =  ( trigger & 1 ) ;
   if(((1 == ap_CS_fsm_state2) && (trigger == 1)) == 1){
       if(ap_done==1){
           goto end;
       }
       goto ap_ST_fsm_state3;
   }
   if(((1 == ap_CS_fsm_state2) && (trigger == 1)) == 0){
       goto ap_ST_fsm_state1;
   }

   ap_ST_fsm_state3:

    ap_CS_fsm_state1 = 0;
    ap_CS_fsm_state2 = 0;
    ap_CS_fsm_state3 = 1;
   ap_ready__temp = ap_ready ;
   a58_1_reg_176__temp = a58_1_reg_176 ;
   ap_NS_fsm__temp = ap_NS_fsm ;
   ap_return__temp = ap_return ;
   tmp_1_fu_88_p2_temp_0__temp = tmp_1_fu_88_p2_temp_0 ;
   tmp_fu_74_p2_temp_1__temp = tmp_fu_74_p2_temp_1 ;
   a14_reg_166__temp = a14_reg_166 ;
   a8__temp = a8 ;
   a14_1_reg_171__temp = a14_1_reg_171 ;
   tmp_4_reg_186_temp_2__temp = tmp_4_reg_186_temp_2 ;
   tmp_5_reg_191_temp_5__temp = tmp_5_reg_191_temp_5 ;
   tmp_3_fu_116_p2__temp = tmp_3_fu_116_p2 ;
   ap_idle__temp = ap_idle ;
   tmp_6_fu_152_p2__temp = tmp_6_fu_152_p2 ;
   ap_CS_fsm__temp = ap_CS_fsm ;
   tmp_5_reg_191__temp = tmp_5_reg_191 ;
   a58_2_fu_122_p3__temp = a58_2_fu_122_p3 ;
   tmp_4_fu_130_p2__temp = tmp_4_fu_130_p2 ;
   tmp_2_fu_102_p2__temp = tmp_2_fu_102_p2 ;
   a7__temp = a7 ;
   a5__temp = a5 ;
   a58_fu_147_p3__temp = a58_fu_147_p3 ;
   ap_start__temp = ap_start ;
   trigger__temp = trigger ;
   tmp_4_reg_186__temp = tmp_4_reg_186 ;
   tmp_fu_74_p2__temp = tmp_fu_74_p2 ;
   a3__temp = a3 ;
   tmp_6_fu_152_p2_temp_6__temp = tmp_6_fu_152_p2_temp_6 ;
   a6__temp = a6 ;
   tmp_1_fu_88_p2__temp = tmp_1_fu_88_p2 ;
   a18_2_fu_142_p3__temp = a18_2_fu_142_p3 ;
   tmp_5_fu_136_p2__temp = tmp_5_fu_136_p2 ;
   tmp_2_fu_102_p2_temp_3__temp = tmp_2_fu_102_p2_temp_3 ;
   a2__temp = a2 ;
   a58_1_fu_108_p3__temp = a58_1_fu_108_p3 ;
   ap_done__temp = ap_done ;
   a58_2_reg_181__temp = a58_2_reg_181 ;
   a1__temp = a1 ;
   a14_1_fu_94_p3__temp = a14_1_fu_94_p3 ;
   ap_rst__temp = ap_rst ;
   tmp_3_fu_116_p2_temp_4__temp = tmp_3_fu_116_p2_temp_4 ;
   a14_fu_80_p3__temp = a14_fu_80_p3 ;
   ap_clk__temp = ap_clk ;
   a4__temp = a4 ;

       goto ap_ST_fsm_state1;
   end:
   printf("%lld\n",do_twos_complement(ap_return,32));
    *a1__1=a1;
    *a2__1=a2;
    *a3__1=a3;
    *a4__1=a4;
    *a5__1=a5;
    *a6__1=a6;
    *a7__1=a7;
    *a8__1=a8;
    *ap_clk__1=ap_clk;
    *ap_done__1=ap_done;
    *ap_idle__1=ap_idle;
    *ap_ready__1=ap_ready;
    *ap_return__1=ap_return;
    *ap_rst__1=ap_rst;
    *ap_start__1=ap_start;
    *trigger__1=trigger;
       return;
}

int main(){
	unsigned long long int a1__1;
	unsigned long long int a2__1;
	unsigned long long int a3__1;
	unsigned long long int a4__1;
	unsigned long long int a5__1;
	unsigned long long int a6__1;
	unsigned long long int a7__1;
	unsigned long long int a8__1;
	unsigned long long int ap_clk__1 = 1;
	unsigned long long int ap_done__1 = 0;
	unsigned long long int ap_idle__1 = 0;
	unsigned long long int ap_ready__1 = 1;
	unsigned long long int ap_return__1 = 1;
	unsigned long long int ap_rst__1 = 0;
	unsigned long long int ap_start__1 = 1;
	unsigned long long int trigger__1 = 1;
	int dummy = 0;
	scanf("%llu %llu %llu %llu %llu %llu %llu %llu", &a1__1, &a2__1, &a3__1, &a4__1, &a5__1, &a6__1, &a7__1, &a8__1);
	findmin( &a1__1, &a2__1, &a3__1, &a4__1, &a5__1, &a6__1, &a7__1, &a8__1, &ap_clk__1, &ap_done__1, &ap_idle__1, &ap_ready__1, &ap_return__1, &ap_rst__1, &ap_start__1, &trigger__1,dummy);
	return 0;
}
