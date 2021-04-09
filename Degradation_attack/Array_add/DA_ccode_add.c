#include<stdio.h>
#define array1_DataWidth 32
#define array1_AddressRange 8
#define array1_AddressWidth 3
#define array1_DWIDTH 32
#define array1_AWIDTH 3
#define array1_MEM_SIZE 8
#define array_r_DataWidth 32
#define array_r_AddressRange 8
#define array_r_AddressWidth 3
#define array_r_DWIDTH 32
#define array_r_AWIDTH 3
#define array_r_MEM_SIZE 8
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
void add(unsigned long long int *ap_clk__1,unsigned long long int *ap_done__1,unsigned long long int *ap_idle__1,unsigned long long int *ap_ready__1,unsigned long long int *ap_return__1,unsigned long long int *ap_rst__1,unsigned long long int *ap_start__1,unsigned long long int *array_r_address0__1,unsigned long long int *array_r_ce0__1,unsigned long long int *array_r_q0__1,unsigned long long int *sum__1,long long int  *array_r_ram ,long long int *trigger__1, int dummy){
unsigned long long int ap_clk=*ap_clk__1;
unsigned long long int ap_done=*ap_done__1;
unsigned long long int ap_idle=*ap_idle__1;
unsigned long long int ap_ready=*ap_ready__1;
unsigned long long int ap_return=*ap_return__1;
unsigned long long int ap_rst=*ap_rst__1;
unsigned long long int ap_start=*ap_start__1;
unsigned long long int array_r_address0=*array_r_address0__1;
unsigned long long int array_r_ce0=*array_r_ce0__1;
unsigned long long int array_r_q0=*array_r_q0__1;
unsigned long long int sum=*sum__1;
unsigned long long int trigger=*trigger__1;
   long long int ap_CS_fsm_state1=0;
   long long int ap_CS_fsm_state2=0;
   long long int ap_CS_fsm_state3=0;
   long long int ap_CS_fsm_state4=0;
   long long int ap_CS_fsm_state5=0;
   long long int ap_CS_fsm_state6=0;
   long long int array_r_d0=0;
   long long int array_r_we0=0;
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
   unsigned long long int array1_address0=0;
   unsigned long long int array1_address0__temp=0;
   unsigned long long int array1_ce0=0;
   unsigned long long int array1_ce0__temp=0;
   unsigned long long int array1_q0=0;
   unsigned long long int array1_q0__temp=0;
   unsigned long long int array1_we0=0;
   unsigned long long int array1_we0__temp=0;
   unsigned long long int array_r_address0__temp=0;
   unsigned long long int array_r_ce0__temp=0;
   unsigned long long int array_r_q0__temp=0;
   unsigned long long int exitcond1_fu_98_p2=0;
   unsigned long long int exitcond1_fu_98_p2__temp=0;
   unsigned long long int exitcond_fu_115_p2=0;
   unsigned long long int exitcond_fu_115_p2__temp=0;
   unsigned long long int i1_cast1_fu_110_p1=0;
   unsigned long long int i1_cast1_fu_110_p1__temp=0;
   unsigned long long int i1_reg_82=0;
   unsigned long long int i1_reg_82__temp=0;
   unsigned long long int i_1_fu_104_p2=0;
   unsigned long long int i_1_fu_104_p2__temp=0;
   unsigned long long int i_1_reg_141=0;
   unsigned long long int i_1_reg_141__temp=0;
   unsigned long long int i_2_fu_121_p2=0;
   unsigned long long int i_2_fu_121_p2__temp=0;
   unsigned long long int i_2_reg_154=0;
   unsigned long long int i_2_reg_154__temp=0;
   unsigned long long int i_cast2_fu_93_p1=0;
   unsigned long long int i_cast2_fu_93_p1__temp=0;
   unsigned long long int i_cast2_fu_93_p1_temp_0=0;
   unsigned long long int i_cast2_fu_93_p1_temp_0__temp=0;
   unsigned long long int i_cast2_fu_93_p1_temp_0_temp_2=0;
   unsigned long long int i_cast2_fu_93_p1_temp_0_temp_2__temp=0;
   unsigned long long int i_cast2_reg_133=0;
   unsigned long long int i_cast2_reg_133__temp=0;
   unsigned long long int i_cast2_reg_133_temp_1=0;
   unsigned long long int i_cast2_reg_133_temp_1__temp=0;
   unsigned long long int i_reg_59=0;
   unsigned long long int i_reg_59__temp=0;
   unsigned long long int p_0_reg_70=0;
   unsigned long long int p_0_reg_70__temp=0;
   unsigned long long int sum__temp=0;
   unsigned long long int sum_assign_fu_127_p2=0;
   unsigned long long int sum_assign_fu_127_p2__temp=0;
   unsigned long long int trigger__temp=0;
    ap_done=0;
    ap_start=1;
   unsigned long long int array1_ram[array1_MEM_SIZE];

   ap_ST_fsm_state1:

    ap_CS_fsm_state1 = 1;
    ap_CS_fsm_state2 = 0;
    ap_CS_fsm_state3 = 0;
    ap_CS_fsm_state4 = 0;
    ap_CS_fsm_state5 = 0;
    ap_CS_fsm_state6 = 0;
   i_2_reg_154__temp = i_2_reg_154 ;
   i_2_fu_121_p2__temp = i_2_fu_121_p2 ;
   i_1_fu_104_p2__temp = i_1_fu_104_p2 ;
   i_cast2_fu_93_p1_temp_0_temp_2__temp = i_cast2_fu_93_p1_temp_0_temp_2 ;
   i1_cast1_fu_110_p1__temp = i1_cast1_fu_110_p1 ;
   sum_assign_fu_127_p2__temp = sum_assign_fu_127_p2 ;
   trigger__temp = trigger ;
   ap_ready__temp = ap_ready ;
   array1_we0__temp = array1_we0 ;
   array_r_ce0__temp = array_r_ce0 ;
   array1_q0__temp = array1_q0 ;
   ap_NS_fsm__temp = ap_NS_fsm ;
   i_reg_59__temp = i_reg_59 ;
   ap_done__temp = ap_done ;
   exitcond_fu_115_p2__temp = exitcond_fu_115_p2 ;
   i_cast2_fu_93_p1_temp_0__temp = i_cast2_fu_93_p1_temp_0 ;
   array_r_address0__temp = array_r_address0 ;
   exitcond1_fu_98_p2__temp = exitcond1_fu_98_p2 ;
   array1_address0__temp = array1_address0 ;
   i_1_reg_141__temp = i_1_reg_141 ;
   ap_clk__temp = ap_clk ;
   i1_reg_82__temp = i1_reg_82 ;
   i_cast2_reg_133_temp_1__temp = i_cast2_reg_133_temp_1 ;
   ap_start__temp = ap_start ;
   array_r_q0__temp = array_r_q0 ;
   ap_return__temp = ap_return ;
   ap_CS_fsm__temp = ap_CS_fsm ;
   array1_ce0__temp = array1_ce0 ;
   i_cast2_reg_133__temp = i_cast2_reg_133 ;
   ap_idle__temp = ap_idle ;
   ap_rst__temp = ap_rst ;
   i_cast2_fu_93_p1__temp = i_cast2_fu_93_p1 ;
   p_0_reg_70__temp = p_0_reg_70 ;
   sum__temp = sum ;

       array1_ce0 = 0;
       array1_we0 = 0;
       array_r_ce0 = 0;
       array_r_we0 = 0;
       array_r_address0=   (  ( i_reg_59__temp  & 18446744073709551615 )  & 18446744073709551615 ) ;
    if(!( ( 1 == ap_CS_fsm_state4 ) && ( exitcond_fu_115_p2__temp  == 1 ))){
ap_done=  0 ; 
}
    i_cast2_reg_133=   ( ( i_cast2_reg_133__temp  & 15 ) & 4294967295 )  ; 
               ap_start=  ( ap_start__temp  & 1 ) ;
   if( ( ( 1 == ap_CS_fsm_state1 ) && ( ap_start == 1 ) ) == 1){
       if( ( 1 == ap_CS_fsm_state1 ) && ( ap_start == 1 ))
       {
           i_reg_59=  0;
       }
       exitcond1_fu_98_p2 =   ( i_reg_59  == 8 ? 1 :  0 ) ;
    if(!((0 == ap_start) && (1 == ap_CS_fsm_state1))){
ap_idle = 0 ; 
}
    if(!((1 == ap_CS_fsm_state4) && (exitcond_fu_115_p2 == 1))){
ap_ready = 0 ; 
}
    if(!(1 == ap_CS_fsm_state4)){
if(!(1 == ap_CS_fsm_state3)){
array1_address0 = 0 ; 
}
}
    if(!((1 == ap_CS_fsm_state4) || (1 == ap_CS_fsm_state3))){
array1_ce0 = 0 ; 
}
    if(!(1 == ap_CS_fsm_state3)){
array1_we0 = 0 ; 
}
    if(!(1 == ap_CS_fsm_state2)){
array_r_ce0 = 0 ; 
}
       if((0 == ap_start) && (1 == ap_CS_fsm_state1))
       {
           ap_idle=  1;
       }
       goto ap_ST_fsm_state2;
   }
   if( ( ( 1 == ap_CS_fsm_state1 ) && ( ap_start == 1 ) ) == 0){
       if( ( 1 == ap_CS_fsm_state1 ) && ( ap_start == 1 ))
       {
               i_reg_59=  0;
       }
       exitcond1_fu_98_p2 =   ( i_reg_59  == 8 ? 1 :  0 ) ;
    if(!((0 == ap_start) && (1 == ap_CS_fsm_state1))){
ap_idle = 0 ; 
}
    if(!((1 == ap_CS_fsm_state4) && (exitcond_fu_115_p2 == 1))){
ap_ready = 0 ; 
}
    if(!(1 == ap_CS_fsm_state4)){
if(!(1 == ap_CS_fsm_state3)){
array1_address0 = 0 ; 
}
}
    if(!((1 == ap_CS_fsm_state4) || (1 == ap_CS_fsm_state3))){
array1_ce0 = 0 ; 
}
    if(!(1 == ap_CS_fsm_state3)){
array1_we0 = 0 ; 
}
    if(!(1 == ap_CS_fsm_state2)){
array_r_ce0 = 0 ; 
}
       if((0 == ap_start) && (1 == ap_CS_fsm_state1))
       {
           ap_idle=  1;
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
   i_2_reg_154__temp = i_2_reg_154 ;
   i_2_fu_121_p2__temp = i_2_fu_121_p2 ;
   i_1_fu_104_p2__temp = i_1_fu_104_p2 ;
   i_cast2_fu_93_p1_temp_0_temp_2__temp = i_cast2_fu_93_p1_temp_0_temp_2 ;
   i1_cast1_fu_110_p1__temp = i1_cast1_fu_110_p1 ;
   sum_assign_fu_127_p2__temp = sum_assign_fu_127_p2 ;
   trigger__temp = trigger ;
   ap_ready__temp = ap_ready ;
   array1_we0__temp = array1_we0 ;
   array_r_ce0__temp = array_r_ce0 ;
   array1_q0__temp = array1_q0 ;
   ap_NS_fsm__temp = ap_NS_fsm ;
   i_reg_59__temp = i_reg_59 ;
   ap_done__temp = ap_done ;
   exitcond_fu_115_p2__temp = exitcond_fu_115_p2 ;
   i_cast2_fu_93_p1_temp_0__temp = i_cast2_fu_93_p1_temp_0 ;
   array_r_address0__temp = array_r_address0 ;
   exitcond1_fu_98_p2__temp = exitcond1_fu_98_p2 ;
   array1_address0__temp = array1_address0 ;
   i_1_reg_141__temp = i_1_reg_141 ;
   ap_clk__temp = ap_clk ;
   i1_reg_82__temp = i1_reg_82 ;
   i_cast2_reg_133_temp_1__temp = i_cast2_reg_133_temp_1 ;
   ap_start__temp = ap_start ;
   array_r_q0__temp = array_r_q0 ;
   ap_return__temp = ap_return ;
   ap_CS_fsm__temp = ap_CS_fsm ;
   array1_ce0__temp = array1_ce0 ;
   i_cast2_reg_133__temp = i_cast2_reg_133 ;
   ap_idle__temp = ap_idle ;
   ap_rst__temp = ap_rst ;
   i_cast2_fu_93_p1__temp = i_cast2_fu_93_p1 ;
   p_0_reg_70__temp = p_0_reg_70 ;
   sum__temp = sum ;

       array1_ce0 = 0;
       array1_we0 = 0;
       array_r_ce0 = 0;
       array_r_we0 = 0;
       array_r_address0=   (  ( i_reg_59__temp  & 18446744073709551615 )  & 18446744073709551615 ) ;
    if(!( ( 1 == ap_CS_fsm_state4 ) && ( exitcond_fu_115_p2__temp  == 1 ))){
ap_done=  0 ; 
}
    i_cast2_reg_133=   ( ( i_cast2_reg_133__temp  & 15 ) & 4294967295 )  ; 
              // exitcond1_fu_98_p2 =   ( i_reg_59__temp  == 8 ? 1 :  0 ) ;
   if( ( ( 1 == ap_CS_fsm_state2 ) && ( exitcond1_fu_98_p2__temp  == 1 ) ) == 1){
       if( ( 1 == ap_CS_fsm_state2 ) && ( exitcond1_fu_98_p2__temp  == 1 ))
       {
           i1_reg_82=  0;
       }
       exitcond_fu_115_p2 =   ( i1_reg_82  == 8 ? 1 :  0 ) ;
       if( ( 1 == ap_CS_fsm_state2 ) && ( exitcond1_fu_98_p2__temp  == 1 ))
       {
           p_0_reg_70=  0;
       }
       if( 1 == ap_CS_fsm_state2)
       {
           i_cast2_reg_133=   ( (  ( (  ( i_reg_59__temp  & 4294967295 )  & 15 ) & 18446744073709551615 )  |  ( ( i_cast2_reg_133 & 4294967280 ) & 18446744073709551615 )  ) & 18446744073709551615 ) ;
           i_1_reg_141=   ( ( i_reg_59__temp  + 1 ) & 15 ) ;
       }
    if(!((0 == ap_start) && (1 == ap_CS_fsm_state1))){
ap_idle = 0 ; 
}
    if(!((1 == ap_CS_fsm_state4) && (exitcond_fu_115_p2 == 1))){
ap_ready = 0 ; 
}
    if(!(1 == ap_CS_fsm_state4)){
if(!(1 == ap_CS_fsm_state3)){
array1_address0 = 0 ; 
}
}
    if(!((1 == ap_CS_fsm_state4) || (1 == ap_CS_fsm_state3))){
array1_ce0 = 0 ; 
}
    if(!(1 == ap_CS_fsm_state3)){
array1_we0 = 0 ; 
}
    if(!(1 == ap_CS_fsm_state2)){
array_r_ce0 = 0 ; 
}
       if(1 == ap_CS_fsm_state2)
       {
           array_r_ce0=  1;
       }
       if(array_r_ce0){
           if(array_r_we0){
              array_r_ram[array_r_address0] = array_r_d0;
           }
          array_r_q0 = array_r_ram[array_r_address0];
       }
       goto ap_ST_fsm_state4;
   }
   if( ( ( 1 == ap_CS_fsm_state2 ) && ( exitcond1_fu_98_p2__temp  == 1 ) ) == 0){
       if( ( 1 == ap_CS_fsm_state2 ) && ( exitcond1_fu_98_p2__temp  == 1 ))
       {
               i1_reg_82=  0;
       }
       exitcond_fu_115_p2 =   ( i1_reg_82  == 8 ? 1 :  0 ) ;
       if( ( 1 == ap_CS_fsm_state2 ) && ( exitcond1_fu_98_p2__temp  == 1 ))
       {
               p_0_reg_70=  0;
       }
       if( 1 == ap_CS_fsm_state2)
       {
               i_cast2_reg_133=   ( (  ( (  ( i_reg_59__temp  & 4294967295 )  & 15 ) & 18446744073709551615 )  |  ( ( i_cast2_reg_133 & 4294967280 ) & 18446744073709551615 )  ) & 18446744073709551615 ) ;
               i_1_reg_141=   ( ( i_reg_59__temp  + 1 ) & 15 ) ;
       }
    if(!((0 == ap_start) && (1 == ap_CS_fsm_state1))){
ap_idle = 0 ; 
}
    if(!((1 == ap_CS_fsm_state4) && (exitcond_fu_115_p2 == 1))){
ap_ready = 0 ; 
}
    if(!(1 == ap_CS_fsm_state4)){
if(!(1 == ap_CS_fsm_state3)){
array1_address0 = 0 ; 
}
}
    if(!((1 == ap_CS_fsm_state4) || (1 == ap_CS_fsm_state3))){
array1_ce0 = 0 ; 
}
    if(!(1 == ap_CS_fsm_state3)){
array1_we0 = 0 ; 
}
    if(!(1 == ap_CS_fsm_state2)){
array_r_ce0 = 0 ; 
}
       if(1 == ap_CS_fsm_state2)
       {
           array_r_ce0=  1;
       }
       if(array_r_ce0){
           if(array_r_we0){
              array_r_ram[array_r_address0] = array_r_d0;
           }
          array_r_q0 = array_r_ram[array_r_address0];
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
   i_2_reg_154__temp = i_2_reg_154 ;
   i_2_fu_121_p2__temp = i_2_fu_121_p2 ;
   i_1_fu_104_p2__temp = i_1_fu_104_p2 ;
   i_cast2_fu_93_p1_temp_0_temp_2__temp = i_cast2_fu_93_p1_temp_0_temp_2 ;
   i1_cast1_fu_110_p1__temp = i1_cast1_fu_110_p1 ;
   sum_assign_fu_127_p2__temp = sum_assign_fu_127_p2 ;
   trigger__temp = trigger ;
   ap_ready__temp = ap_ready ;
   array1_we0__temp = array1_we0 ;
   array_r_ce0__temp = array_r_ce0 ;
   array1_q0__temp = array1_q0 ;
   ap_NS_fsm__temp = ap_NS_fsm ;
   i_reg_59__temp = i_reg_59 ;
   ap_done__temp = ap_done ;
   exitcond_fu_115_p2__temp = exitcond_fu_115_p2 ;
   i_cast2_fu_93_p1_temp_0__temp = i_cast2_fu_93_p1_temp_0 ;
   array_r_address0__temp = array_r_address0 ;
   exitcond1_fu_98_p2__temp = exitcond1_fu_98_p2 ;
   array1_address0__temp = array1_address0 ;
   i_1_reg_141__temp = i_1_reg_141 ;
   ap_clk__temp = ap_clk ;
   i1_reg_82__temp = i1_reg_82 ;
   i_cast2_reg_133_temp_1__temp = i_cast2_reg_133_temp_1 ;
   ap_start__temp = ap_start ;
   array_r_q0__temp = array_r_q0 ;
   ap_return__temp = ap_return ;
   ap_CS_fsm__temp = ap_CS_fsm ;
   array1_ce0__temp = array1_ce0 ;
   i_cast2_reg_133__temp = i_cast2_reg_133 ;
   ap_idle__temp = ap_idle ;
   ap_rst__temp = ap_rst ;
   i_cast2_fu_93_p1__temp = i_cast2_fu_93_p1 ;
   p_0_reg_70__temp = p_0_reg_70 ;
   sum__temp = sum ;

       array1_ce0 = 0;
       array1_we0 = 0;
       array_r_ce0 = 0;
       array_r_we0 = 0;
       array_r_address0=   (  ( i_reg_59__temp  & 18446744073709551615 )  & 18446744073709551615 ) ;
    if(!( ( 1 == ap_CS_fsm_state4 ) && ( exitcond_fu_115_p2__temp  == 1 ))){
ap_done=  0 ; 
}
    i_cast2_reg_133=   ( ( i_cast2_reg_133__temp  & 15 ) & 4294967295 )  ; 
               trigger=  ( trigger__temp  & 1 ) ;
   if( ( ( 1 == ap_CS_fsm_state3 ) && ( trigger == 1 ) ) == 1){
       if( 1 == ap_CS_fsm_state3)
       {
           i_reg_59=  i_1_reg_141__temp ;
       }
       exitcond1_fu_98_p2 =   ( i_reg_59  == 8 ? 1 :  0 ) ;
    if(!((0 == ap_start) && (1 == ap_CS_fsm_state1))){
ap_idle = 0 ; 
}
    if(!((1 == ap_CS_fsm_state4) && (exitcond_fu_115_p2 == 1))){
ap_ready = 0 ; 
}
    if(!(1 == ap_CS_fsm_state4)){
if(!(1 == ap_CS_fsm_state3)){
array1_address0 = 0 ; 
}
}
    if(!((1 == ap_CS_fsm_state4) || (1 == ap_CS_fsm_state3))){
array1_ce0 = 0 ; 
}
    if(!(1 == ap_CS_fsm_state3)){
array1_we0 = 0 ; 
}
    if(!(1 == ap_CS_fsm_state2)){
array_r_ce0 = 0 ; 
}
       if(1 == ap_CS_fsm_state3)
       {
           array1_address0=  i_cast2_reg_133__temp ;
       }
       if((1 == ap_CS_fsm_state4) || (1 == ap_CS_fsm_state3))
       {
           array1_ce0=  1;
       }
       if(1 == ap_CS_fsm_state3)
       {
           array1_we0=  1;
       }
       if(array1_ce0){
           if(array1_we0){
              array1_ram[array1_address0]=array_r_q0;
              array1_q0=array_r_q0;
           }
          array1_q0=array1_ram[array1_address0];
       }
       goto ap_ST_fsm_state6;
   }
   if( ( ( 1 == ap_CS_fsm_state3 ) && ( trigger == 1 ) ) == 0){
       if( 1 == ap_CS_fsm_state3)
       {
               i_reg_59=  i_1_reg_141__temp ;
       }
       exitcond1_fu_98_p2 =   ( i_reg_59  == 8 ? 1 :  0 ) ;
    if(!((0 == ap_start) && (1 == ap_CS_fsm_state1))){
ap_idle = 0 ; 
}
    if(!((1 == ap_CS_fsm_state4) && (exitcond_fu_115_p2 == 1))){
ap_ready = 0 ; 
}
    if(!(1 == ap_CS_fsm_state4)){
if(!(1 == ap_CS_fsm_state3)){
array1_address0 = 0 ; 
}
}
    if(!((1 == ap_CS_fsm_state4) || (1 == ap_CS_fsm_state3))){
array1_ce0 = 0 ; 
}
    if(!(1 == ap_CS_fsm_state3)){
array1_we0 = 0 ; 
}
    if(!(1 == ap_CS_fsm_state2)){
array_r_ce0 = 0 ; 
}
       if(1 == ap_CS_fsm_state3)
       {
           array1_address0=  i_cast2_reg_133__temp ;
       }
       if((1 == ap_CS_fsm_state4) || (1 == ap_CS_fsm_state3))
       {
           array1_ce0=  1;
       }
       if(1 == ap_CS_fsm_state3)
       {
           array1_we0=  1;
       }
       if(array1_ce0){
           if(array1_we0){
              array1_ram[array1_address0]=array_r_q0;
              array1_q0=array_r_q0;
           }
          array1_q0=array1_ram[array1_address0];
       }
       goto ap_ST_fsm_state2;
   }

   ap_ST_fsm_state4:

    ap_CS_fsm_state1 = 0;
    ap_CS_fsm_state2 = 0;
    ap_CS_fsm_state3 = 0;
    ap_CS_fsm_state4 = 1;
    ap_CS_fsm_state5 = 0;
    ap_CS_fsm_state6 = 0;
   i_2_reg_154__temp = i_2_reg_154 ;
   i_2_fu_121_p2__temp = i_2_fu_121_p2 ;
   i_1_fu_104_p2__temp = i_1_fu_104_p2 ;
   i_cast2_fu_93_p1_temp_0_temp_2__temp = i_cast2_fu_93_p1_temp_0_temp_2 ;
   i1_cast1_fu_110_p1__temp = i1_cast1_fu_110_p1 ;
   sum_assign_fu_127_p2__temp = sum_assign_fu_127_p2 ;
   trigger__temp = trigger ;
   ap_ready__temp = ap_ready ;
   array1_we0__temp = array1_we0 ;
   array_r_ce0__temp = array_r_ce0 ;
   array1_q0__temp = array1_q0 ;
   ap_NS_fsm__temp = ap_NS_fsm ;
   i_reg_59__temp = i_reg_59 ;
   ap_done__temp = ap_done ;
   exitcond_fu_115_p2__temp = exitcond_fu_115_p2 ;
   i_cast2_fu_93_p1_temp_0__temp = i_cast2_fu_93_p1_temp_0 ;
   array_r_address0__temp = array_r_address0 ;
   exitcond1_fu_98_p2__temp = exitcond1_fu_98_p2 ;
   array1_address0__temp = array1_address0 ;
   i_1_reg_141__temp = i_1_reg_141 ;
   ap_clk__temp = ap_clk ;
   i1_reg_82__temp = i1_reg_82 ;
   i_cast2_reg_133_temp_1__temp = i_cast2_reg_133_temp_1 ;
   ap_start__temp = ap_start ;
   array_r_q0__temp = array_r_q0 ;
   ap_return__temp = ap_return ;
   ap_CS_fsm__temp = ap_CS_fsm ;
   array1_ce0__temp = array1_ce0 ;
   i_cast2_reg_133__temp = i_cast2_reg_133 ;
   ap_idle__temp = ap_idle ;
   ap_rst__temp = ap_rst ;
   i_cast2_fu_93_p1__temp = i_cast2_fu_93_p1 ;
   p_0_reg_70__temp = p_0_reg_70 ;
   sum__temp = sum ;

       array1_ce0 = 0;
       array1_we0 = 0;
       array_r_ce0 = 0;
       array_r_we0 = 0;
       array_r_address0=   (  ( i_reg_59__temp  & 18446744073709551615 )  & 18446744073709551615 ) ;
    if(!( ( 1 == ap_CS_fsm_state4 ) && ( exitcond_fu_115_p2__temp  == 1 ))){
ap_done=  0 ; 
}
    i_cast2_reg_133=   ( ( i_cast2_reg_133__temp  & 15 ) & 4294967295 )  ; 
               //exitcond_fu_115_p2 =   ( i1_reg_82__temp  == 8 ? 1 :  0 ) ;
   if( ( ( 1 == ap_CS_fsm_state4 ) && ( exitcond_fu_115_p2__temp  == 1 ) ) == 1){
       if( 1 == ap_CS_fsm_state4)
       {
           i_2_reg_154=   ( ( i1_reg_82__temp  + 1 ) & 15 ) ;
       }
       
       if( ( 1 == ap_CS_fsm_state4 ) && ( exitcond_fu_115_p2__temp  == 1 ))
       {
           ap_done=  1;
            if(ap_done==1){
          ap_return =  ( p_0_reg_70 & 4294967295 ) ;
            }
       }
    if(!((0 == ap_start) && (1 == ap_CS_fsm_state1))){
ap_idle = 0 ; 
}
    if(!((1 == ap_CS_fsm_state4) && (exitcond_fu_115_p2 == 1))){
ap_ready = 0 ; 
}
    if(!(1 == ap_CS_fsm_state4)){
if(!(1 == ap_CS_fsm_state3)){
array1_address0 = 0 ; 
}
}
    if(!((1 == ap_CS_fsm_state4) || (1 == ap_CS_fsm_state3))){
array1_ce0 = 0 ; 
}
    if(!(1 == ap_CS_fsm_state3)){
array1_we0 = 0 ; 
}
    if(!(1 == ap_CS_fsm_state2)){
array_r_ce0 = 0 ; 
}
               //exitcond_fu_115_p2 =   ( i1_reg_82__temp  == 8 ? 1 :  0 ) ;
       if((1 == ap_CS_fsm_state4) && (exitcond_fu_115_p2 == 1))
       {
           ap_ready=  1;
       }
       if(1 == ap_CS_fsm_state4)
       {
           array1_address0=   ( i1_reg_82__temp  & 4294967295 ) ;
       }
       if((1 == ap_CS_fsm_state4) || (1 == ap_CS_fsm_state3))
       {
           array1_ce0=  1;
       }
       if(array1_ce0){
           if(array1_we0){
              array1_ram[array1_address0]=array_r_q0;
              array1_q0=array_r_q0;
           }
          array1_q0=array1_ram[array1_address0];
       }
       if(ap_done==1){
           goto end;
       }
       goto ap_ST_fsm_state1;
   }
   if( ( ( 1 == ap_CS_fsm_state4 ) && ( exitcond_fu_115_p2__temp  == 1 ) ) == 0){
       if( 1 == ap_CS_fsm_state4)
       {
               i_2_reg_154=   ( ( i1_reg_82__temp  + 1 ) & 15 ) ;
       }
       if( ( 1 == ap_CS_fsm_state4 ) && ( exitcond_fu_115_p2__temp  == 1 ))
       {
               ap_done=  1;
            if(ap_done==1){
          ap_return =  ( p_0_reg_70 & 4294967295 ) ;
            }
       }
    if(!((0 == ap_start) && (1 == ap_CS_fsm_state1))){
ap_idle = 0 ; 
}
    if(!((1 == ap_CS_fsm_state4) && (exitcond_fu_115_p2 == 1))){
ap_ready = 0 ; 
}
    if(!(1 == ap_CS_fsm_state4)){
if(!(1 == ap_CS_fsm_state3)){
array1_address0 = 0 ; 
}
}
    if(!((1 == ap_CS_fsm_state4) || (1 == ap_CS_fsm_state3))){
array1_ce0 = 0 ; 
}
    if(!(1 == ap_CS_fsm_state3)){
array1_we0 = 0 ; 
}
    if(!(1 == ap_CS_fsm_state2)){
array_r_ce0 = 0 ; 
}
               //exitcond_fu_115_p2 =   ( i1_reg_82__temp  == 8 ? 1 :  0 ) ;
       if((1 == ap_CS_fsm_state4) && (exitcond_fu_115_p2 == 1))
       {
           ap_ready=  1;
       }
       if(1 == ap_CS_fsm_state4)
       {
           array1_address0=   ( i1_reg_82__temp  & 4294967295 ) ;
       }
       if((1 == ap_CS_fsm_state4) || (1 == ap_CS_fsm_state3))
       {
           array1_ce0=  1;
       }
       if(array1_ce0){
           if(array1_we0){
              array1_ram[array1_address0]=array_r_q0;
              array1_q0=array_r_q0;
           }
          array1_q0=array1_ram[array1_address0];
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
   i_2_reg_154__temp = i_2_reg_154 ;
   i_2_fu_121_p2__temp = i_2_fu_121_p2 ;
   i_1_fu_104_p2__temp = i_1_fu_104_p2 ;
   i_cast2_fu_93_p1_temp_0_temp_2__temp = i_cast2_fu_93_p1_temp_0_temp_2 ;
   i1_cast1_fu_110_p1__temp = i1_cast1_fu_110_p1 ;
   sum_assign_fu_127_p2__temp = sum_assign_fu_127_p2 ;
   trigger__temp = trigger ;
   ap_ready__temp = ap_ready ;
   array1_we0__temp = array1_we0 ;
   array_r_ce0__temp = array_r_ce0 ;
   array1_q0__temp = array1_q0 ;
   ap_NS_fsm__temp = ap_NS_fsm ;
   i_reg_59__temp = i_reg_59 ;
   ap_done__temp = ap_done ;
   exitcond_fu_115_p2__temp = exitcond_fu_115_p2 ;
   i_cast2_fu_93_p1_temp_0__temp = i_cast2_fu_93_p1_temp_0 ;
   array_r_address0__temp = array_r_address0 ;
   exitcond1_fu_98_p2__temp = exitcond1_fu_98_p2 ;
   array1_address0__temp = array1_address0 ;
   i_1_reg_141__temp = i_1_reg_141 ;
   ap_clk__temp = ap_clk ;
   i1_reg_82__temp = i1_reg_82 ;
   i_cast2_reg_133_temp_1__temp = i_cast2_reg_133_temp_1 ;
   ap_start__temp = ap_start ;
   array_r_q0__temp = array_r_q0 ;
   ap_return__temp = ap_return ;
   ap_CS_fsm__temp = ap_CS_fsm ;
   array1_ce0__temp = array1_ce0 ;
   i_cast2_reg_133__temp = i_cast2_reg_133 ;
   ap_idle__temp = ap_idle ;
   ap_rst__temp = ap_rst ;
   i_cast2_fu_93_p1__temp = i_cast2_fu_93_p1 ;
   p_0_reg_70__temp = p_0_reg_70 ;
   sum__temp = sum ;

       array1_ce0 = 0;
       array1_we0 = 0;
       array_r_ce0 = 0;
       array_r_we0 = 0;
       array_r_address0=   (  ( i_reg_59__temp  & 18446744073709551615 )  & 18446744073709551615 ) ;
    if(!( ( 1 == ap_CS_fsm_state4 ) && ( exitcond_fu_115_p2__temp  == 1 ))){
ap_done=  0 ; 
}
    i_cast2_reg_133=   ( ( i_cast2_reg_133__temp  & 15 ) & 4294967295 )  ; 
               //exitcond1_fu_98_p2 =   ( i_reg_59__temp  == 8 ? 1 :  0 ) ;
       if( 1 == ap_CS_fsm_state5)
       {
           i1_reg_82=  i_2_reg_154__temp ;
       }
       exitcond_fu_115_p2 =   ( i1_reg_82  == 8 ? 1 :  0 ) ;
       if( 1 == ap_CS_fsm_state5)
       {
           p_0_reg_70=   ( ( array1_q0__temp  + p_0_reg_70__temp  ) & 4294967295 ) ;
       }
    if(!((0 == ap_start) && (1 == ap_CS_fsm_state1))){
ap_idle = 0 ; 
}
    if(!((1 == ap_CS_fsm_state4) && (exitcond_fu_115_p2 == 1))){
ap_ready = 0 ; 
}
    if(!(1 == ap_CS_fsm_state4)){
if(!(1 == ap_CS_fsm_state3)){
array1_address0 = 0 ; 
}
}
    if(!((1 == ap_CS_fsm_state4) || (1 == ap_CS_fsm_state3))){
array1_ce0 = 0 ; 
}
    if(!(1 == ap_CS_fsm_state3)){
array1_we0 = 0 ; 
}
    if(!(1 == ap_CS_fsm_state2)){
array_r_ce0 = 0 ; 
}
       goto ap_ST_fsm_state4;

   ap_ST_fsm_state6:

    ap_CS_fsm_state1 = 0;
    ap_CS_fsm_state2 = 0;
    ap_CS_fsm_state3 = 0;
    ap_CS_fsm_state4 = 0;
    ap_CS_fsm_state5 = 0;
    ap_CS_fsm_state6 = 1;
   i_2_reg_154__temp = i_2_reg_154 ;
   i_2_fu_121_p2__temp = i_2_fu_121_p2 ;
   i_1_fu_104_p2__temp = i_1_fu_104_p2 ;
   i_cast2_fu_93_p1_temp_0_temp_2__temp = i_cast2_fu_93_p1_temp_0_temp_2 ;
   i1_cast1_fu_110_p1__temp = i1_cast1_fu_110_p1 ;
   sum_assign_fu_127_p2__temp = sum_assign_fu_127_p2 ;
   trigger__temp = trigger ;
   ap_ready__temp = ap_ready ;
   array1_we0__temp = array1_we0 ;
   array_r_ce0__temp = array_r_ce0 ;
   array1_q0__temp = array1_q0 ;
   ap_NS_fsm__temp = ap_NS_fsm ;
   i_reg_59__temp = i_reg_59 ;
   ap_done__temp = ap_done ;
   exitcond_fu_115_p2__temp = exitcond_fu_115_p2 ;
   i_cast2_fu_93_p1_temp_0__temp = i_cast2_fu_93_p1_temp_0 ;
   array_r_address0__temp = array_r_address0 ;
   exitcond1_fu_98_p2__temp = exitcond1_fu_98_p2 ;
   array1_address0__temp = array1_address0 ;
   i_1_reg_141__temp = i_1_reg_141 ;
   ap_clk__temp = ap_clk ;
   i1_reg_82__temp = i1_reg_82 ;
   i_cast2_reg_133_temp_1__temp = i_cast2_reg_133_temp_1 ;
   ap_start__temp = ap_start ;
   array_r_q0__temp = array_r_q0 ;
   ap_return__temp = ap_return ;
   ap_CS_fsm__temp = ap_CS_fsm ;
   array1_ce0__temp = array1_ce0 ;
   i_cast2_reg_133__temp = i_cast2_reg_133 ;
   ap_idle__temp = ap_idle ;
   ap_rst__temp = ap_rst ;
   i_cast2_fu_93_p1__temp = i_cast2_fu_93_p1 ;
   p_0_reg_70__temp = p_0_reg_70 ;
   sum__temp = sum ;

       array1_ce0 = 0;
       array1_we0 = 0;
       array_r_ce0 = 0;
       array_r_we0 = 0;
       array_r_address0=   (  ( i_reg_59__temp  & 18446744073709551615 )  & 18446744073709551615 ) ;
    if(!( ( 1 == ap_CS_fsm_state4 ) && ( exitcond_fu_115_p2__temp  == 1 ))){
ap_done=  0 ; 
}
    i_cast2_reg_133=   ( ( i_cast2_reg_133__temp  & 15 ) & 4294967295 )  ; 
    if(!((0 == ap_start) && (1 == ap_CS_fsm_state1))){
ap_idle = 0 ; 
}
    if(!((1 == ap_CS_fsm_state4) && (exitcond_fu_115_p2 == 1))){
ap_ready = 0 ; 
}
    if(!(1 == ap_CS_fsm_state4)){
if(!(1 == ap_CS_fsm_state3)){
array1_address0 = 0 ; 
}
}
    if(!((1 == ap_CS_fsm_state4) || (1 == ap_CS_fsm_state3))){
array1_ce0 = 0 ; 
}
    if(!(1 == ap_CS_fsm_state3)){
array1_we0 = 0 ; 
}
    if(!(1 == ap_CS_fsm_state2)){
array_r_ce0 = 0 ; 
}
       goto ap_ST_fsm_state2;
   end:
   printf("%lld\n",do_twos_complement(ap_return,32));
    *ap_clk__1=ap_clk;
    *ap_done__1=ap_done;
    *ap_idle__1=ap_idle;
    *ap_ready__1=ap_ready;
    *ap_return__1=ap_return;
    *ap_rst__1=ap_rst;
    *ap_start__1=ap_start;
    *array_r_address0__1=array_r_address0;
    *array_r_ce0__1=array_r_ce0;
    *array_r_q0__1=array_r_q0;
    *sum__1=sum;
    *trigger__1=trigger;
       return;
}

int main(){
	unsigned long long int ap_clk__1 = 1;
	unsigned long long int ap_done__1 = 0;
	unsigned long long int ap_idle__1 = 0;
	unsigned long long int ap_ready__1 = 0;
	unsigned long long int ap_return__1 = 1;
	unsigned long long int ap_rst__1 = 0;
	unsigned long long int ap_start__1 = 1;
	unsigned long long int array_r_address0__1 = 0;
	unsigned long long int array_r_ce0__1 = 1;
	unsigned long long int array_r_q0__1 = 0;
	unsigned long long int sum__1 = 0;
	long long int trigger = 1;
	unsigned long long int array_r_ram[array_r_MEM_SIZE] = {1,2,3,4,5,6,7,8};
       int dummy = 0;
    add(&ap_clk__1,&ap_done__1,&ap_idle__1,&ap_ready__1,&ap_return__1,&ap_rst__1,&ap_start__1,&array_r_address0__1,&array_r_ce0__1,&array_r_q0__1,&sum__1,array_r_ram,&trigger,dummy);
    return 0;
}
