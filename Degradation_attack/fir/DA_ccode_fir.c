#include<stdio.h>
#define shift_reg_DataWidth 32
#define shift_reg_AddressRange 11
#define shift_reg_AddressWidth 4
#define shift_reg_DWIDTH 32
#define shift_reg_AWIDTH 4
#define shift_reg_MEM_SIZE 11
#define c_AWIDTH 4
#define c_DWIDTH 32
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
void fir(unsigned long long int *ap_clk__1,unsigned long long int *ap_done__1,unsigned long long int *ap_idle__1,unsigned long long int *ap_ready__1,unsigned long long int *ap_return__1,unsigned long long int *ap_rst__1,unsigned long long int *ap_start__1,unsigned long long int *c_address0__1,unsigned long long int *c_ce0__1,unsigned long long int *c_q0__1,unsigned long long int *trigger__1,unsigned long long int *x__1,long long int  *c_rom , int dummy){
unsigned long long int ap_clk=*ap_clk__1;
unsigned long long int ap_done=*ap_done__1;
unsigned long long int ap_idle=*ap_idle__1;
unsigned long long int ap_ready=*ap_ready__1;
unsigned long long int ap_return=*ap_return__1;
unsigned long long int ap_rst=*ap_rst__1;
unsigned long long int ap_start=*ap_start__1;
unsigned long long int c_address0=*c_address0__1;
unsigned long long int c_ce0=*c_ce0__1;
unsigned long long int c_q0=*c_q0__1;
unsigned long long int trigger=*trigger__1;
unsigned long long int x=*x__1;
   long long int ap_CS_fsm_state1=0;
   long long int ap_CS_fsm_state2=0;
   long long int ap_CS_fsm_state3=0;
   long long int ap_CS_fsm_state4=0;
   long long int ap_CS_fsm_state5=0;
   long long int ap_CS_fsm_state6=0;
   long long int ap_CS_fsm_state7=0;
   long long int ap_CS_fsm_state8=0;
   long long int ap_phi_mux_i_0_phi_fu_96_p4=0;
   long long int ap_phi_mux_i_0_phi_fu_96_p4__temp=0;
   long long int c_load_reg_201=0;
   long long int c_load_reg_201__temp=0;
   long long int data_0_reg_104=0;
   long long int data_0_reg_104__temp=0;
   long long int grp_fu_114_p0=0;
   long long int grp_fu_114_p0__temp=0;
   long long int i_0_reg_92=0;
   long long int i_0_reg_92__temp=0;
   long long int sext_ln15_fu_121_p1=0;
   long long int sext_ln15_fu_121_p1__temp=0;
   long long int sext_ln15_reg_168=0;
   long long int sext_ln15_reg_168__temp=0;
   unsigned long long int acc_0_reg_80=0;
   unsigned long long int acc_0_reg_80__temp=0;
   unsigned long long int acc_fu_157_p2=0;
   unsigned long long int acc_fu_157_p2__temp=0;
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
   unsigned long long int c_address0__temp=0;
   unsigned long long int c_ce0__temp=0;
   unsigned long long int c_q0__temp=0;
   unsigned long long int grp_fu_114_p2=0;
   unsigned long long int grp_fu_114_p2__temp=0;
   unsigned long long int i_0_reg_92_temp_0=0;
   unsigned long long int i_0_reg_92_temp_0__temp=0;
   unsigned long long int i_reg_196=0;
   unsigned long long int i_reg_196__temp=0;
   unsigned long long int icmp_ln16_fu_133_p2=0;
   unsigned long long int icmp_ln16_fu_133_p2__temp=0;
   unsigned long long int icmp_ln16_reg_177=0;
   unsigned long long int icmp_ln16_reg_177__temp=0;
   unsigned long long int mul_ln23_fu_152_p2=0;
   unsigned long long int mul_ln23_fu_152_p2__temp=0;
   unsigned long long int mul_ln23_reg_206=0;
   unsigned long long int mul_ln23_reg_206__temp=0;
   unsigned long long int shift_reg_address0=0;
   unsigned long long int shift_reg_address0__temp=0;
   unsigned long long int shift_reg_ce0=0;
   unsigned long long int shift_reg_ce0__temp=0;
   unsigned long long int shift_reg_d0=0;
   unsigned long long int shift_reg_d0__temp=0;
   unsigned long long int shift_reg_q0=0;
   unsigned long long int shift_reg_q0__temp=0;
   unsigned long long int shift_reg_we0=0;
   unsigned long long int shift_reg_we0__temp=0;
   unsigned long long int tmp_fu_125_p3=0;
   unsigned long long int tmp_fu_125_p3__temp=0;
   unsigned long long int trigger__temp=0;
   unsigned long long int x__temp=0;
   unsigned long long int zext_ln20_1_fu_144_p1=0;
   unsigned long long int zext_ln20_1_fu_144_p1__temp=0;
   unsigned long long int zext_ln20_fu_139_p1=0;
   unsigned long long int zext_ln20_fu_139_p1__temp=0;
   unsigned long long int zext_ln23_fu_148_p1=0;
   unsigned long long int zext_ln23_fu_148_p1__temp=0;
    ap_done=0;
    ap_start=1;
   unsigned long long int shift_reg_ram[shift_reg_MEM_SIZE];

   ap_ST_fsm_state1:

    ap_CS_fsm_state1 = 1;
    ap_CS_fsm_state2 = 0;
    ap_CS_fsm_state3 = 0;
    ap_CS_fsm_state4 = 0;
    ap_CS_fsm_state5 = 0;
    ap_CS_fsm_state6 = 0;
    ap_CS_fsm_state7 = 0;
    ap_CS_fsm_state8 = 0;
   sext_ln15_fu_121_p1__temp = sext_ln15_fu_121_p1 ;
   i_0_reg_92__temp = i_0_reg_92 ;
   data_0_reg_104__temp = data_0_reg_104 ;
   ap_phi_mux_i_0_phi_fu_96_p4__temp = ap_phi_mux_i_0_phi_fu_96_p4 ;
   c_load_reg_201__temp = c_load_reg_201 ;
   sext_ln15_reg_168__temp = sext_ln15_reg_168 ;
   grp_fu_114_p0__temp = grp_fu_114_p0 ;
   ap_NS_fsm__temp = ap_NS_fsm ;
   shift_reg_q0__temp = shift_reg_q0 ;
   shift_reg_address0__temp = shift_reg_address0 ;
   tmp_fu_125_p3__temp = tmp_fu_125_p3 ;
   ap_idle__temp = ap_idle ;
   ap_CS_fsm__temp = ap_CS_fsm ;
   i_reg_196__temp = i_reg_196 ;
   acc_0_reg_80__temp = acc_0_reg_80 ;
   i_0_reg_92_temp_0__temp = i_0_reg_92_temp_0 ;
   shift_reg_d0__temp = shift_reg_d0 ;
   c_q0__temp = c_q0 ;
   trigger__temp = trigger ;
   icmp_ln16_fu_133_p2__temp = icmp_ln16_fu_133_p2 ;
   shift_reg_we0__temp = shift_reg_we0 ;
   mul_ln23_fu_152_p2__temp = mul_ln23_fu_152_p2 ;
   c_address0__temp = c_address0 ;
   zext_ln20_fu_139_p1__temp = zext_ln20_fu_139_p1 ;
   ap_done__temp = ap_done ;
   zext_ln23_fu_148_p1__temp = zext_ln23_fu_148_p1 ;
   mul_ln23_reg_206__temp = mul_ln23_reg_206 ;
   x__temp = x ;
   ap_clk__temp = ap_clk ;
   ap_start__temp = ap_start ;
   c_ce0__temp = c_ce0 ;
   ap_rst__temp = ap_rst ;
   grp_fu_114_p2__temp = grp_fu_114_p2 ;
   ap_return__temp = ap_return ;
   ap_ready__temp = ap_ready ;
   acc_fu_157_p2__temp = acc_fu_157_p2 ;
   shift_reg_ce0__temp = shift_reg_ce0 ;
   zext_ln20_1_fu_144_p1__temp = zext_ln20_1_fu_144_p1 ;
   icmp_ln16_reg_177__temp = icmp_ln16_reg_177 ;

       shift_reg_ce0 = 0;
       shift_reg_we0 = 0;
       c_ce0 = 0;
       c_address0=   ( ( do_twos_complement( sext_ln15_reg_168__temp  , 63 ) & 18446744073709551615 )  & 18446744073709551615 ) ;
               ap_start=  ( ap_start__temp  & 1 ) ;
   if( ( ( 1 == ap_CS_fsm_state1 ) && ( ap_start == 1 ) ) == 1){
       if( ( 1 == ap_CS_fsm_state1 ) && ( ap_start == 1 ))
       {
           acc_0_reg_80=  0;
       }
       if( ( 1 == ap_CS_fsm_state1 ) && ( ap_start == 1 ))
       {
           i_0_reg_92=  10;
       }
       icmp_ln16_fu_133_p2 =   ( i_0_reg_92  == 0 ? 1 :  0 ) ;
    if(!((tmp_fu_125_p3 == 1) && (1 == ap_CS_fsm_state2))){
ap_done = 0 ; 
}
    if(!((ap_start == 0) && (1 == ap_CS_fsm_state1))){
ap_idle = 0 ; 
}
    if(!((tmp_fu_125_p3 == 1) && (1 == ap_CS_fsm_state2))){
ap_ready = 0 ; 
}
    if(!(1 == ap_CS_fsm_state3)){
c_ce0 = 0 ; 
}
    if(!(1 == ap_CS_fsm_state3)){
if(!(1 == ap_CS_fsm_state2)){
grp_fu_114_p0 = 0 ; 
}
}
    if(!(1 == ap_CS_fsm_state3)){
if(!(((tmp_fu_125_p3 == 0) && (icmp_ln16_fu_133_p2 == 1)) && (1 == ap_CS_fsm_state2))){
if(!(((tmp_fu_125_p3 == 0) && (icmp_ln16_fu_133_p2 == 0)) && (1 == ap_CS_fsm_state2))){
shift_reg_address0 = 0 ; 
}
}
}
    if(!(((1 == ap_CS_fsm_state3) || (((tmp_fu_125_p3 == 0) && (icmp_ln16_fu_133_p2 == 0)) && (1 == ap_CS_fsm_state2))) || (((tmp_fu_125_p3 == 0) && (icmp_ln16_fu_133_p2 == 1)) && (1 == ap_CS_fsm_state2)))){
shift_reg_ce0 = 0 ; 
}
    if(!(1 == ap_CS_fsm_state3)){
if(!(((tmp_fu_125_p3 == 0) && (icmp_ln16_fu_133_p2 == 1)) && (1 == ap_CS_fsm_state2))){
shift_reg_d0 = 0 ; 
}
}
    if(!(((icmp_ln16_reg_177 == 0) && (1 == ap_CS_fsm_state3)) || (((tmp_fu_125_p3 == 0) && (icmp_ln16_fu_133_p2 == 1)) && (1 == ap_CS_fsm_state2)))){
shift_reg_we0 = 0 ; 
}
       if((ap_start == 0) && (1 == ap_CS_fsm_state1))
       {
           ap_idle=  1;
       }
       goto ap_ST_fsm_state2;
   }
   if( ( ( 1 == ap_CS_fsm_state1 ) && ( ap_start == 1 ) ) == 0){
       if( ( 1 == ap_CS_fsm_state1 ) && ( ap_start == 1 ))
       {
               acc_0_reg_80=  0;
       }
       if( ( 1 == ap_CS_fsm_state1 ) && ( ap_start == 1 ))
       {
               i_0_reg_92=  10;
       }
       icmp_ln16_fu_133_p2 =   ( i_0_reg_92  == 0 ? 1 :  0 ) ;
    if(!((tmp_fu_125_p3 == 1) && (1 == ap_CS_fsm_state2))){
ap_done = 0 ; 
}
    if(!((ap_start == 0) && (1 == ap_CS_fsm_state1))){
ap_idle = 0 ; 
}
    if(!((tmp_fu_125_p3 == 1) && (1 == ap_CS_fsm_state2))){
ap_ready = 0 ; 
}
    if(!(1 == ap_CS_fsm_state3)){
c_ce0 = 0 ; 
}
    if(!(1 == ap_CS_fsm_state3)){
if(!(1 == ap_CS_fsm_state2)){
grp_fu_114_p0 = 0 ; 
}
}
    if(!(1 == ap_CS_fsm_state3)){
if(!(((tmp_fu_125_p3 == 0) && (icmp_ln16_fu_133_p2 == 1)) && (1 == ap_CS_fsm_state2))){
if(!(((tmp_fu_125_p3 == 0) && (icmp_ln16_fu_133_p2 == 0)) && (1 == ap_CS_fsm_state2))){
shift_reg_address0 = 0 ; 
}
}
}
    if(!(((1 == ap_CS_fsm_state3) || (((tmp_fu_125_p3 == 0) && (icmp_ln16_fu_133_p2 == 0)) && (1 == ap_CS_fsm_state2))) || (((tmp_fu_125_p3 == 0) && (icmp_ln16_fu_133_p2 == 1)) && (1 == ap_CS_fsm_state2)))){
shift_reg_ce0 = 0 ; 
}
    if(!(1 == ap_CS_fsm_state3)){
if(!(((tmp_fu_125_p3 == 0) && (icmp_ln16_fu_133_p2 == 1)) && (1 == ap_CS_fsm_state2))){
shift_reg_d0 = 0 ; 
}
}
    if(!(((icmp_ln16_reg_177 == 0) && (1 == ap_CS_fsm_state3)) || (((tmp_fu_125_p3 == 0) && (icmp_ln16_fu_133_p2 == 1)) && (1 == ap_CS_fsm_state2)))){
shift_reg_we0 = 0 ; 
}
       if((ap_start == 0) && (1 == ap_CS_fsm_state1))
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
    ap_CS_fsm_state7 = 0;
    ap_CS_fsm_state8 = 0;
   sext_ln15_fu_121_p1__temp = sext_ln15_fu_121_p1 ;
   i_0_reg_92__temp = i_0_reg_92 ;
   data_0_reg_104__temp = data_0_reg_104 ;
   ap_phi_mux_i_0_phi_fu_96_p4__temp = ap_phi_mux_i_0_phi_fu_96_p4 ;
   c_load_reg_201__temp = c_load_reg_201 ;
   sext_ln15_reg_168__temp = sext_ln15_reg_168 ;
   grp_fu_114_p0__temp = grp_fu_114_p0 ;
   ap_NS_fsm__temp = ap_NS_fsm ;
   shift_reg_q0__temp = shift_reg_q0 ;
   shift_reg_address0__temp = shift_reg_address0 ;
   tmp_fu_125_p3__temp = tmp_fu_125_p3 ;
   ap_idle__temp = ap_idle ;
   ap_CS_fsm__temp = ap_CS_fsm ;
   i_reg_196__temp = i_reg_196 ;
   acc_0_reg_80__temp = acc_0_reg_80 ;
   i_0_reg_92_temp_0__temp = i_0_reg_92_temp_0 ;
   shift_reg_d0__temp = shift_reg_d0 ;
   c_q0__temp = c_q0 ;
   trigger__temp = trigger ;
   icmp_ln16_fu_133_p2__temp = icmp_ln16_fu_133_p2 ;
   shift_reg_we0__temp = shift_reg_we0 ;
   mul_ln23_fu_152_p2__temp = mul_ln23_fu_152_p2 ;
   c_address0__temp = c_address0 ;
   zext_ln20_fu_139_p1__temp = zext_ln20_fu_139_p1 ;
   ap_done__temp = ap_done ;
   zext_ln23_fu_148_p1__temp = zext_ln23_fu_148_p1 ;
   mul_ln23_reg_206__temp = mul_ln23_reg_206 ;
   x__temp = x ;
   ap_clk__temp = ap_clk ;
   ap_start__temp = ap_start ;
   c_ce0__temp = c_ce0 ;
   ap_rst__temp = ap_rst ;
   grp_fu_114_p2__temp = grp_fu_114_p2 ;
   ap_return__temp = ap_return ;
   ap_ready__temp = ap_ready ;
   acc_fu_157_p2__temp = acc_fu_157_p2 ;
   shift_reg_ce0__temp = shift_reg_ce0 ;
   zext_ln20_1_fu_144_p1__temp = zext_ln20_1_fu_144_p1 ;
   icmp_ln16_reg_177__temp = icmp_ln16_reg_177 ;

       shift_reg_ce0 = 0;
       shift_reg_we0 = 0;
       c_ce0 = 0;
       c_address0=   ( ( do_twos_complement( sext_ln15_reg_168__temp  , 63 ) & 18446744073709551615 )  & 18446744073709551615 ) ;
               tmp_fu_125_p3=   ( (  ( ( i_0_reg_92__temp  >> 4 )  & 18446744073709551615 )  & 1 ) & 1 ) ;
               //icmp_ln16_fu_133_p2 =   ( i_0_reg_92__temp  == 0 ? 1 :  0 ) ;
   if( ( ( tmp_fu_125_p3__temp  == 1 ) && ( 1 == ap_CS_fsm_state2 ) ) == 1){
       if( ( ( tmp_fu_125_p3__temp  == 0 ) && ( icmp_ln16_fu_133_p2__temp  == 1 ) ) && ( 1 == ap_CS_fsm_state2 ))
       {
           data_0_reg_104=  ( x__temp  & 4294967295 ) ;
       }
       if( ( tmp_fu_125_p3__temp  == 0 ) && ( 1 == ap_CS_fsm_state2 ))
       {
           icmp_ln16_reg_177 =   ( i_0_reg_92__temp  == 0 ? 1 :  0 ) ;
       }
       if( 1 == ap_CS_fsm_state2)
       {
           sext_ln15_reg_168=   ( i_0_reg_92__temp  & 4294967295 ) ;
       }
    if(!((tmp_fu_125_p3 == 1) && (1 == ap_CS_fsm_state2))){
ap_done = 0 ; 
}
    if(!((ap_start == 0) && (1 == ap_CS_fsm_state1))){
ap_idle = 0 ; 
}
    if(!((tmp_fu_125_p3 == 1) && (1 == ap_CS_fsm_state2))){
ap_ready = 0 ; 
}
    if(!(1 == ap_CS_fsm_state3)){
c_ce0 = 0 ; 
}
    if(!(1 == ap_CS_fsm_state3)){
if(!(1 == ap_CS_fsm_state2)){
grp_fu_114_p0 = 0 ; 
}
}
    if(!(1 == ap_CS_fsm_state3)){
if(!(((tmp_fu_125_p3 == 0) && (icmp_ln16_fu_133_p2 == 1)) && (1 == ap_CS_fsm_state2))){
if(!(((tmp_fu_125_p3 == 0) && (icmp_ln16_fu_133_p2 == 0)) && (1 == ap_CS_fsm_state2))){
shift_reg_address0 = 0 ; 
}
}
}
    if(!(((1 == ap_CS_fsm_state3) || (((tmp_fu_125_p3 == 0) && (icmp_ln16_fu_133_p2 == 0)) && (1 == ap_CS_fsm_state2))) || (((tmp_fu_125_p3 == 0) && (icmp_ln16_fu_133_p2 == 1)) && (1 == ap_CS_fsm_state2)))){
shift_reg_ce0 = 0 ; 
}
    if(!(1 == ap_CS_fsm_state3)){
if(!(((tmp_fu_125_p3 == 0) && (icmp_ln16_fu_133_p2 == 1)) && (1 == ap_CS_fsm_state2))){
shift_reg_d0 = 0 ; 
}
}
    if(!(((icmp_ln16_reg_177 == 0) && (1 == ap_CS_fsm_state3)) || (((tmp_fu_125_p3 == 0) && (icmp_ln16_fu_133_p2 == 1)) && (1 == ap_CS_fsm_state2)))){
shift_reg_we0 = 0 ; 
}
               //icmp_ln16_fu_133_p2 =   ( i_0_reg_92__temp  == 0 ? 1 :  0 ) ;
               tmp_fu_125_p3=   ( (  ( ( i_0_reg_92__temp  >> 4 )  & 18446744073709551615 )  & 1 ) & 1 ) ;
       if((tmp_fu_125_p3 == 1) && (1 == ap_CS_fsm_state2))
       {
           ap_done=  1;
            if(ap_done==1){
          ap_return =  ( acc_0_reg_80 & 4294967295 ) ;
            }
       }
       if((tmp_fu_125_p3 == 1) && (1 == ap_CS_fsm_state2))
       {
           ap_ready=  1;
       }
       if(1 == ap_CS_fsm_state2)
       {
           grp_fu_114_p0=   ( i_0_reg_92__temp  & 31 ) ;
       }
       if(((tmp_fu_125_p3 == 0) && (icmp_ln16_fu_133_p2 == 1)) && (1 == ap_CS_fsm_state2))
       {
           shift_reg_address0=  0;
       }
       if(((tmp_fu_125_p3 == 0) && (icmp_ln16_fu_133_p2 == 0)) && (1 == ap_CS_fsm_state2))
       {
           shift_reg_address0=   (  ( ( do_twos_complement( grp_fu_114_p0 , 5 )  + do_twos_complement( 31 , 5 )  ) & 31 )  & 18446744073709551615 ) ;
       }
       if(((1 == ap_CS_fsm_state3) || (((tmp_fu_125_p3 == 0) && (icmp_ln16_fu_133_p2 == 0)) && (1 == ap_CS_fsm_state2))) || (((tmp_fu_125_p3 == 0) && (icmp_ln16_fu_133_p2 == 1)) && (1 == ap_CS_fsm_state2)))
       {
           shift_reg_ce0=  1;
       }
       if(((tmp_fu_125_p3 == 0) && (icmp_ln16_fu_133_p2 == 1)) && (1 == ap_CS_fsm_state2))
       {
           shift_reg_d0=  ( x__temp  & 4294967295 ) ;
       }
       if(((icmp_ln16_reg_177 == 0) && (1 == ap_CS_fsm_state3)) || (((tmp_fu_125_p3 == 0) && (icmp_ln16_fu_133_p2 == 1)) && (1 == ap_CS_fsm_state2)))
       {
           shift_reg_we0=  1;
       }
       if(shift_reg_ce0){
           if(shift_reg_we0){
              shift_reg_ram[shift_reg_address0]=shift_reg_d0;
              shift_reg_q0=shift_reg_d0;
           }
          shift_reg_q0=shift_reg_ram[shift_reg_address0];
       }
       if(ap_done==1){
           goto end;
       }
       goto ap_ST_fsm_state1;
   }
   if( ( ( tmp_fu_125_p3__temp  == 1 ) && ( 1 == ap_CS_fsm_state2 ) ) == 0){
       if( ( ( tmp_fu_125_p3__temp  == 0 ) && ( icmp_ln16_fu_133_p2__temp  == 1 ) ) && ( 1 == ap_CS_fsm_state2 ))
       {
               data_0_reg_104=  ( x__temp  & 4294967295 ) ;
       }
       if( ( tmp_fu_125_p3__temp  == 0 ) && ( 1 == ap_CS_fsm_state2 ))
       {
               icmp_ln16_reg_177 =   ( i_0_reg_92__temp  == 0 ? 1 :  0 ) ;
       }
       if( 1 == ap_CS_fsm_state2)
       {
               sext_ln15_reg_168=   ( i_0_reg_92__temp  & 4294967295 ) ;
       }
    if(!((tmp_fu_125_p3 == 1) && (1 == ap_CS_fsm_state2))){
ap_done = 0 ; 
}
    if(!((ap_start == 0) && (1 == ap_CS_fsm_state1))){
ap_idle = 0 ; 
}
    if(!((tmp_fu_125_p3 == 1) && (1 == ap_CS_fsm_state2))){
ap_ready = 0 ; 
}
    if(!(1 == ap_CS_fsm_state3)){
c_ce0 = 0 ; 
}
    if(!(1 == ap_CS_fsm_state3)){
if(!(1 == ap_CS_fsm_state2)){
grp_fu_114_p0 = 0 ; 
}
}
    if(!(1 == ap_CS_fsm_state3)){
if(!(((tmp_fu_125_p3 == 0) && (icmp_ln16_fu_133_p2 == 1)) && (1 == ap_CS_fsm_state2))){
if(!(((tmp_fu_125_p3 == 0) && (icmp_ln16_fu_133_p2 == 0)) && (1 == ap_CS_fsm_state2))){
shift_reg_address0 = 0 ; 
}
}
}
    if(!(((1 == ap_CS_fsm_state3) || (((tmp_fu_125_p3 == 0) && (icmp_ln16_fu_133_p2 == 0)) && (1 == ap_CS_fsm_state2))) || (((tmp_fu_125_p3 == 0) && (icmp_ln16_fu_133_p2 == 1)) && (1 == ap_CS_fsm_state2)))){
shift_reg_ce0 = 0 ; 
}
    if(!(1 == ap_CS_fsm_state3)){
if(!(((tmp_fu_125_p3 == 0) && (icmp_ln16_fu_133_p2 == 1)) && (1 == ap_CS_fsm_state2))){
shift_reg_d0 = 0 ; 
}
}
    if(!(((icmp_ln16_reg_177 == 0) && (1 == ap_CS_fsm_state3)) || (((tmp_fu_125_p3 == 0) && (icmp_ln16_fu_133_p2 == 1)) && (1 == ap_CS_fsm_state2)))){
shift_reg_we0 = 0 ; 
}
               //icmp_ln16_fu_133_p2 =   ( i_0_reg_92__temp  == 0 ? 1 :  0 ) ;
               tmp_fu_125_p3=   ( (  ( ( i_0_reg_92__temp  >> 4 )  & 18446744073709551615 )  & 1 ) & 1 ) ;
       if((tmp_fu_125_p3 == 1) && (1 == ap_CS_fsm_state2))
       {
           ap_done=  1;
            if(ap_done==1){
          ap_return =  ( acc_0_reg_80 & 4294967295 ) ;
            }
       }
       if((tmp_fu_125_p3 == 1) && (1 == ap_CS_fsm_state2))
       {
           ap_ready=  1;
       }
       if(1 == ap_CS_fsm_state2)
       {
           grp_fu_114_p0=   ( i_0_reg_92__temp  & 31 ) ;
       }
       if(((tmp_fu_125_p3 == 0) && (icmp_ln16_fu_133_p2 == 1)) && (1 == ap_CS_fsm_state2))
       {
           shift_reg_address0=  0;
       }
       if(((tmp_fu_125_p3 == 0) && (icmp_ln16_fu_133_p2 == 0)) && (1 == ap_CS_fsm_state2))
       {
           shift_reg_address0=   (  ( ( do_twos_complement( grp_fu_114_p0 , 5 )  + do_twos_complement( 31 , 5 )  ) & 31 )  & 18446744073709551615 ) ;
       }
       if(((1 == ap_CS_fsm_state3) || (((tmp_fu_125_p3 == 0) && (icmp_ln16_fu_133_p2 == 0)) && (1 == ap_CS_fsm_state2))) || (((tmp_fu_125_p3 == 0) && (icmp_ln16_fu_133_p2 == 1)) && (1 == ap_CS_fsm_state2)))
       {
           shift_reg_ce0=  1;
       }
       if(((tmp_fu_125_p3 == 0) && (icmp_ln16_fu_133_p2 == 1)) && (1 == ap_CS_fsm_state2))
       {
           shift_reg_d0=  ( x__temp  & 4294967295 ) ;
       }
       if(((icmp_ln16_reg_177 == 0) && (1 == ap_CS_fsm_state3)) || (((tmp_fu_125_p3 == 0) && (icmp_ln16_fu_133_p2 == 1)) && (1 == ap_CS_fsm_state2)))
       {
           shift_reg_we0=  1;
       }
       if(shift_reg_ce0){
           if(shift_reg_we0){
              shift_reg_ram[shift_reg_address0]=shift_reg_d0;
              shift_reg_q0=shift_reg_d0;
           }
          shift_reg_q0=shift_reg_ram[shift_reg_address0];
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
    ap_CS_fsm_state8 = 0;
   sext_ln15_fu_121_p1__temp = sext_ln15_fu_121_p1 ;
   i_0_reg_92__temp = i_0_reg_92 ;
   data_0_reg_104__temp = data_0_reg_104 ;
   ap_phi_mux_i_0_phi_fu_96_p4__temp = ap_phi_mux_i_0_phi_fu_96_p4 ;
   c_load_reg_201__temp = c_load_reg_201 ;
   sext_ln15_reg_168__temp = sext_ln15_reg_168 ;
   grp_fu_114_p0__temp = grp_fu_114_p0 ;
   ap_NS_fsm__temp = ap_NS_fsm ;
   shift_reg_q0__temp = shift_reg_q0 ;
   shift_reg_address0__temp = shift_reg_address0 ;
   tmp_fu_125_p3__temp = tmp_fu_125_p3 ;
   ap_idle__temp = ap_idle ;
   ap_CS_fsm__temp = ap_CS_fsm ;
   i_reg_196__temp = i_reg_196 ;
   acc_0_reg_80__temp = acc_0_reg_80 ;
   i_0_reg_92_temp_0__temp = i_0_reg_92_temp_0 ;
   shift_reg_d0__temp = shift_reg_d0 ;
   c_q0__temp = c_q0 ;
   trigger__temp = trigger ;
   icmp_ln16_fu_133_p2__temp = icmp_ln16_fu_133_p2 ;
   shift_reg_we0__temp = shift_reg_we0 ;
   mul_ln23_fu_152_p2__temp = mul_ln23_fu_152_p2 ;
   c_address0__temp = c_address0 ;
   zext_ln20_fu_139_p1__temp = zext_ln20_fu_139_p1 ;
   ap_done__temp = ap_done ;
   zext_ln23_fu_148_p1__temp = zext_ln23_fu_148_p1 ;
   mul_ln23_reg_206__temp = mul_ln23_reg_206 ;
   x__temp = x ;
   ap_clk__temp = ap_clk ;
   ap_start__temp = ap_start ;
   c_ce0__temp = c_ce0 ;
   ap_rst__temp = ap_rst ;
   grp_fu_114_p2__temp = grp_fu_114_p2 ;
   ap_return__temp = ap_return ;
   ap_ready__temp = ap_ready ;
   acc_fu_157_p2__temp = acc_fu_157_p2 ;
   shift_reg_ce0__temp = shift_reg_ce0 ;
   zext_ln20_1_fu_144_p1__temp = zext_ln20_1_fu_144_p1 ;
   icmp_ln16_reg_177__temp = icmp_ln16_reg_177 ;

       shift_reg_ce0 = 0;
       shift_reg_we0 = 0;
       c_ce0 = 0;
       c_address0=   ( ( do_twos_complement( sext_ln15_reg_168__temp  , 63 ) & 18446744073709551615 )  & 18446744073709551615 ) ;
               trigger=  ( trigger__temp  & 1 ) ;
   if( ( ( 1 == ap_CS_fsm_state3 ) && ( trigger == 1 ) ) == 1){
       if( ( icmp_ln16_reg_177__temp  == 0 ) && ( 1 == ap_CS_fsm_state3 ))
       {
           data_0_reg_104=  shift_reg_q0__temp ;
       }
       if( 1 == ap_CS_fsm_state3)
       {
           i_reg_196=   ( ( do_twos_complement( grp_fu_114_p0 , 5 )  + do_twos_complement( 31 , 5 )  ) & 31 ) ;
       }
    if(!((tmp_fu_125_p3 == 1) && (1 == ap_CS_fsm_state2))){
ap_done = 0 ; 
}
    if(!((ap_start == 0) && (1 == ap_CS_fsm_state1))){
ap_idle = 0 ; 
}
    if(!((tmp_fu_125_p3 == 1) && (1 == ap_CS_fsm_state2))){
ap_ready = 0 ; 
}
    if(!(1 == ap_CS_fsm_state3)){
c_ce0 = 0 ; 
}
    if(!(1 == ap_CS_fsm_state3)){
if(!(1 == ap_CS_fsm_state2)){
grp_fu_114_p0 = 0 ; 
}
}
    if(!(1 == ap_CS_fsm_state3)){
if(!(((tmp_fu_125_p3 == 0) && (icmp_ln16_fu_133_p2 == 1)) && (1 == ap_CS_fsm_state2))){
if(!(((tmp_fu_125_p3 == 0) && (icmp_ln16_fu_133_p2 == 0)) && (1 == ap_CS_fsm_state2))){
shift_reg_address0 = 0 ; 
}
}
}
    if(!(((1 == ap_CS_fsm_state3) || (((tmp_fu_125_p3 == 0) && (icmp_ln16_fu_133_p2 == 0)) && (1 == ap_CS_fsm_state2))) || (((tmp_fu_125_p3 == 0) && (icmp_ln16_fu_133_p2 == 1)) && (1 == ap_CS_fsm_state2)))){
shift_reg_ce0 = 0 ; 
}
    if(!(1 == ap_CS_fsm_state3)){
if(!(((tmp_fu_125_p3 == 0) && (icmp_ln16_fu_133_p2 == 1)) && (1 == ap_CS_fsm_state2))){
shift_reg_d0 = 0 ; 
}
}
    if(!(((icmp_ln16_reg_177 == 0) && (1 == ap_CS_fsm_state3)) || (((tmp_fu_125_p3 == 0) && (icmp_ln16_fu_133_p2 == 1)) && (1 == ap_CS_fsm_state2)))){
shift_reg_we0 = 0 ; 
}
               //icmp_ln16_fu_133_p2 =   ( i_0_reg_92__temp  == 0 ? 1 :  0 ) ;
               tmp_fu_125_p3=   ( (  ( ( i_0_reg_92__temp  >> 4 )  & 18446744073709551615 )  & 1 ) & 1 ) ;
       if(1 == ap_CS_fsm_state3)
       {
           c_ce0=  1;
       }
       if(1 == ap_CS_fsm_state3)
       {
           grp_fu_114_p0=  i_0_reg_92__temp ;
       }
       if(1 == ap_CS_fsm_state3)
       {
           shift_reg_address0=  ( do_twos_complement( sext_ln15_reg_168__temp  , 32 ) & 18446744073709551615 ) ;
       }
       if(((1 == ap_CS_fsm_state3) || (((tmp_fu_125_p3 == 0) && (icmp_ln16_fu_133_p2 == 0)) && (1 == ap_CS_fsm_state2))) || (((tmp_fu_125_p3 == 0) && (icmp_ln16_fu_133_p2 == 1)) && (1 == ap_CS_fsm_state2)))
       {
           shift_reg_ce0=  1;
       }
       if(1 == ap_CS_fsm_state3)
       {
           shift_reg_d0=  shift_reg_q0__temp ;
       }
       if(((icmp_ln16_reg_177 == 0) && (1 == ap_CS_fsm_state3)) || (((tmp_fu_125_p3 == 0) && (icmp_ln16_fu_133_p2 == 1)) && (1 == ap_CS_fsm_state2)))
       {
           shift_reg_we0=  1;
       }
       if(shift_reg_ce0){
           if(shift_reg_we0){
              shift_reg_ram[shift_reg_address0]=shift_reg_d0;
              shift_reg_q0=shift_reg_d0;
           }
          shift_reg_q0=shift_reg_ram[shift_reg_address0];
       }
       if(c_ce0){
          c_q0 = c_rom[c_address0];
       }
       goto ap_ST_fsm_state7;
   }
   if( ( ( 1 == ap_CS_fsm_state3 ) && ( trigger == 1 ) ) == 0){
       if( ( icmp_ln16_reg_177__temp  == 0 ) && ( 1 == ap_CS_fsm_state3 ))
       {
               data_0_reg_104=  shift_reg_q0__temp ;
       }
       if( 1 == ap_CS_fsm_state3)
       {
               i_reg_196=   ( ( do_twos_complement( grp_fu_114_p0 , 5 )  + do_twos_complement( 31 , 5 )  ) & 31 ) ;
       }
    if(!((tmp_fu_125_p3 == 1) && (1 == ap_CS_fsm_state2))){
ap_done = 0 ; 
}
    if(!((ap_start == 0) && (1 == ap_CS_fsm_state1))){
ap_idle = 0 ; 
}
    if(!((tmp_fu_125_p3 == 1) && (1 == ap_CS_fsm_state2))){
ap_ready = 0 ; 
}
    if(!(1 == ap_CS_fsm_state3)){
c_ce0 = 0 ; 
}
    if(!(1 == ap_CS_fsm_state3)){
if(!(1 == ap_CS_fsm_state2)){
grp_fu_114_p0 = 0 ; 
}
}
    if(!(1 == ap_CS_fsm_state3)){
if(!(((tmp_fu_125_p3 == 0) && (icmp_ln16_fu_133_p2 == 1)) && (1 == ap_CS_fsm_state2))){
if(!(((tmp_fu_125_p3 == 0) && (icmp_ln16_fu_133_p2 == 0)) && (1 == ap_CS_fsm_state2))){
shift_reg_address0 = 0 ; 
}
}
}
    if(!(((1 == ap_CS_fsm_state3) || (((tmp_fu_125_p3 == 0) && (icmp_ln16_fu_133_p2 == 0)) && (1 == ap_CS_fsm_state2))) || (((tmp_fu_125_p3 == 0) && (icmp_ln16_fu_133_p2 == 1)) && (1 == ap_CS_fsm_state2)))){
shift_reg_ce0 = 0 ; 
}
    if(!(1 == ap_CS_fsm_state3)){
if(!(((tmp_fu_125_p3 == 0) && (icmp_ln16_fu_133_p2 == 1)) && (1 == ap_CS_fsm_state2))){
shift_reg_d0 = 0 ; 
}
}
    if(!(((icmp_ln16_reg_177 == 0) && (1 == ap_CS_fsm_state3)) || (((tmp_fu_125_p3 == 0) && (icmp_ln16_fu_133_p2 == 1)) && (1 == ap_CS_fsm_state2)))){
shift_reg_we0 = 0 ; 
}
               //icmp_ln16_fu_133_p2 =   ( i_0_reg_92__temp  == 0 ? 1 :  0 ) ;
               tmp_fu_125_p3=   ( (  ( ( i_0_reg_92__temp  >> 4 )  & 18446744073709551615 )  & 1 ) & 1 ) ;
       if(1 == ap_CS_fsm_state3)
       {
           c_ce0=  1;
       }
       if(1 == ap_CS_fsm_state3)
       {
           grp_fu_114_p0=  i_0_reg_92__temp ;
       }
       if(1 == ap_CS_fsm_state3)
       {
           shift_reg_address0=  ( do_twos_complement( sext_ln15_reg_168__temp  , 32 ) & 18446744073709551615 ) ;
       }
       if(((1 == ap_CS_fsm_state3) || (((tmp_fu_125_p3 == 0) && (icmp_ln16_fu_133_p2 == 0)) && (1 == ap_CS_fsm_state2))) || (((tmp_fu_125_p3 == 0) && (icmp_ln16_fu_133_p2 == 1)) && (1 == ap_CS_fsm_state2)))
       {
           shift_reg_ce0=  1;
       }
       if(1 == ap_CS_fsm_state3)
       {
           shift_reg_d0=  shift_reg_q0__temp ;
       }
       if(((icmp_ln16_reg_177 == 0) && (1 == ap_CS_fsm_state3)) || (((tmp_fu_125_p3 == 0) && (icmp_ln16_fu_133_p2 == 1)) && (1 == ap_CS_fsm_state2)))
       {
           shift_reg_we0=  1;
       }
       if(shift_reg_ce0){
           if(shift_reg_we0){
              shift_reg_ram[shift_reg_address0]=shift_reg_d0;
              shift_reg_q0=shift_reg_d0;
           }
          shift_reg_q0=shift_reg_ram[shift_reg_address0];
       }
       if(c_ce0){
          c_q0 = c_rom[c_address0];
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
    ap_CS_fsm_state8 = 0;
   sext_ln15_fu_121_p1__temp = sext_ln15_fu_121_p1 ;
   i_0_reg_92__temp = i_0_reg_92 ;
   data_0_reg_104__temp = data_0_reg_104 ;
   ap_phi_mux_i_0_phi_fu_96_p4__temp = ap_phi_mux_i_0_phi_fu_96_p4 ;
   c_load_reg_201__temp = c_load_reg_201 ;
   sext_ln15_reg_168__temp = sext_ln15_reg_168 ;
   grp_fu_114_p0__temp = grp_fu_114_p0 ;
   ap_NS_fsm__temp = ap_NS_fsm ;
   shift_reg_q0__temp = shift_reg_q0 ;
   shift_reg_address0__temp = shift_reg_address0 ;
   tmp_fu_125_p3__temp = tmp_fu_125_p3 ;
   ap_idle__temp = ap_idle ;
   ap_CS_fsm__temp = ap_CS_fsm ;
   i_reg_196__temp = i_reg_196 ;
   acc_0_reg_80__temp = acc_0_reg_80 ;
   i_0_reg_92_temp_0__temp = i_0_reg_92_temp_0 ;
   shift_reg_d0__temp = shift_reg_d0 ;
   c_q0__temp = c_q0 ;
   trigger__temp = trigger ;
   icmp_ln16_fu_133_p2__temp = icmp_ln16_fu_133_p2 ;
   shift_reg_we0__temp = shift_reg_we0 ;
   mul_ln23_fu_152_p2__temp = mul_ln23_fu_152_p2 ;
   c_address0__temp = c_address0 ;
   zext_ln20_fu_139_p1__temp = zext_ln20_fu_139_p1 ;
   ap_done__temp = ap_done ;
   zext_ln23_fu_148_p1__temp = zext_ln23_fu_148_p1 ;
   mul_ln23_reg_206__temp = mul_ln23_reg_206 ;
   x__temp = x ;
   ap_clk__temp = ap_clk ;
   ap_start__temp = ap_start ;
   c_ce0__temp = c_ce0 ;
   ap_rst__temp = ap_rst ;
   grp_fu_114_p2__temp = grp_fu_114_p2 ;
   ap_return__temp = ap_return ;
   ap_ready__temp = ap_ready ;
   acc_fu_157_p2__temp = acc_fu_157_p2 ;
   shift_reg_ce0__temp = shift_reg_ce0 ;
   zext_ln20_1_fu_144_p1__temp = zext_ln20_1_fu_144_p1 ;
   icmp_ln16_reg_177__temp = icmp_ln16_reg_177 ;

       shift_reg_ce0 = 0;
       shift_reg_we0 = 0;
       c_ce0 = 0;
       c_address0=   ( ( do_twos_complement( sext_ln15_reg_168__temp  , 63 ) & 18446744073709551615 )  & 18446744073709551615 ) ;
               trigger=  ( trigger__temp  & 1 ) ;
   if( ( ( 1 == ap_CS_fsm_state4 ) && ( trigger == 1 ) ) == 1){
       if( 1 == ap_CS_fsm_state4)
       {
           c_load_reg_201=  ( c_q0__temp  & 4294967295 ) ;
       }
    if(!((tmp_fu_125_p3 == 1) && (1 == ap_CS_fsm_state2))){
ap_done = 0 ; 
}
    if(!((ap_start == 0) && (1 == ap_CS_fsm_state1))){
ap_idle = 0 ; 
}
    if(!((tmp_fu_125_p3 == 1) && (1 == ap_CS_fsm_state2))){
ap_ready = 0 ; 
}
    if(!(1 == ap_CS_fsm_state3)){
c_ce0 = 0 ; 
}
    if(!(1 == ap_CS_fsm_state3)){
if(!(1 == ap_CS_fsm_state2)){
grp_fu_114_p0 = 0 ; 
}
}
    if(!(1 == ap_CS_fsm_state3)){
if(!(((tmp_fu_125_p3 == 0) && (icmp_ln16_fu_133_p2 == 1)) && (1 == ap_CS_fsm_state2))){
if(!(((tmp_fu_125_p3 == 0) && (icmp_ln16_fu_133_p2 == 0)) && (1 == ap_CS_fsm_state2))){
shift_reg_address0 = 0 ; 
}
}
}
    if(!(((1 == ap_CS_fsm_state3) || (((tmp_fu_125_p3 == 0) && (icmp_ln16_fu_133_p2 == 0)) && (1 == ap_CS_fsm_state2))) || (((tmp_fu_125_p3 == 0) && (icmp_ln16_fu_133_p2 == 1)) && (1 == ap_CS_fsm_state2)))){
shift_reg_ce0 = 0 ; 
}
    if(!(1 == ap_CS_fsm_state3)){
if(!(((tmp_fu_125_p3 == 0) && (icmp_ln16_fu_133_p2 == 1)) && (1 == ap_CS_fsm_state2))){
shift_reg_d0 = 0 ; 
}
}
    if(!(((icmp_ln16_reg_177 == 0) && (1 == ap_CS_fsm_state3)) || (((tmp_fu_125_p3 == 0) && (icmp_ln16_fu_133_p2 == 1)) && (1 == ap_CS_fsm_state2)))){
shift_reg_we0 = 0 ; 
}
       goto ap_ST_fsm_state8;
   }
   if( ( ( 1 == ap_CS_fsm_state4 ) && ( trigger == 1 ) ) == 0){
       if( 1 == ap_CS_fsm_state4)
       {
               c_load_reg_201=  ( c_q0__temp  & 4294967295 ) ;
       }
    if(!((tmp_fu_125_p3 == 1) && (1 == ap_CS_fsm_state2))){
ap_done = 0 ; 
}
    if(!((ap_start == 0) && (1 == ap_CS_fsm_state1))){
ap_idle = 0 ; 
}
    if(!((tmp_fu_125_p3 == 1) && (1 == ap_CS_fsm_state2))){
ap_ready = 0 ; 
}
    if(!(1 == ap_CS_fsm_state3)){
c_ce0 = 0 ; 
}
    if(!(1 == ap_CS_fsm_state3)){
if(!(1 == ap_CS_fsm_state2)){
grp_fu_114_p0 = 0 ; 
}
}
    if(!(1 == ap_CS_fsm_state3)){
if(!(((tmp_fu_125_p3 == 0) && (icmp_ln16_fu_133_p2 == 1)) && (1 == ap_CS_fsm_state2))){
if(!(((tmp_fu_125_p3 == 0) && (icmp_ln16_fu_133_p2 == 0)) && (1 == ap_CS_fsm_state2))){
shift_reg_address0 = 0 ; 
}
}
}
    if(!(((1 == ap_CS_fsm_state3) || (((tmp_fu_125_p3 == 0) && (icmp_ln16_fu_133_p2 == 0)) && (1 == ap_CS_fsm_state2))) || (((tmp_fu_125_p3 == 0) && (icmp_ln16_fu_133_p2 == 1)) && (1 == ap_CS_fsm_state2)))){
shift_reg_ce0 = 0 ; 
}
    if(!(1 == ap_CS_fsm_state3)){
if(!(((tmp_fu_125_p3 == 0) && (icmp_ln16_fu_133_p2 == 1)) && (1 == ap_CS_fsm_state2))){
shift_reg_d0 = 0 ; 
}
}
    if(!(((icmp_ln16_reg_177 == 0) && (1 == ap_CS_fsm_state3)) || (((tmp_fu_125_p3 == 0) && (icmp_ln16_fu_133_p2 == 1)) && (1 == ap_CS_fsm_state2)))){
shift_reg_we0 = 0 ; 
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
    ap_CS_fsm_state8 = 0;
   sext_ln15_fu_121_p1__temp = sext_ln15_fu_121_p1 ;
   i_0_reg_92__temp = i_0_reg_92 ;
   data_0_reg_104__temp = data_0_reg_104 ;
   ap_phi_mux_i_0_phi_fu_96_p4__temp = ap_phi_mux_i_0_phi_fu_96_p4 ;
   c_load_reg_201__temp = c_load_reg_201 ;
   sext_ln15_reg_168__temp = sext_ln15_reg_168 ;
   grp_fu_114_p0__temp = grp_fu_114_p0 ;
   ap_NS_fsm__temp = ap_NS_fsm ;
   shift_reg_q0__temp = shift_reg_q0 ;
   shift_reg_address0__temp = shift_reg_address0 ;
   tmp_fu_125_p3__temp = tmp_fu_125_p3 ;
   ap_idle__temp = ap_idle ;
   ap_CS_fsm__temp = ap_CS_fsm ;
   i_reg_196__temp = i_reg_196 ;
   acc_0_reg_80__temp = acc_0_reg_80 ;
   i_0_reg_92_temp_0__temp = i_0_reg_92_temp_0 ;
   shift_reg_d0__temp = shift_reg_d0 ;
   c_q0__temp = c_q0 ;
   trigger__temp = trigger ;
   icmp_ln16_fu_133_p2__temp = icmp_ln16_fu_133_p2 ;
   shift_reg_we0__temp = shift_reg_we0 ;
   mul_ln23_fu_152_p2__temp = mul_ln23_fu_152_p2 ;
   c_address0__temp = c_address0 ;
   zext_ln20_fu_139_p1__temp = zext_ln20_fu_139_p1 ;
   ap_done__temp = ap_done ;
   zext_ln23_fu_148_p1__temp = zext_ln23_fu_148_p1 ;
   mul_ln23_reg_206__temp = mul_ln23_reg_206 ;
   x__temp = x ;
   ap_clk__temp = ap_clk ;
   ap_start__temp = ap_start ;
   c_ce0__temp = c_ce0 ;
   ap_rst__temp = ap_rst ;
   grp_fu_114_p2__temp = grp_fu_114_p2 ;
   ap_return__temp = ap_return ;
   ap_ready__temp = ap_ready ;
   acc_fu_157_p2__temp = acc_fu_157_p2 ;
   shift_reg_ce0__temp = shift_reg_ce0 ;
   zext_ln20_1_fu_144_p1__temp = zext_ln20_1_fu_144_p1 ;
   icmp_ln16_reg_177__temp = icmp_ln16_reg_177 ;

       shift_reg_ce0 = 0;
       shift_reg_we0 = 0;
       c_ce0 = 0;
       c_address0=   ( ( do_twos_complement( sext_ln15_reg_168__temp  , 63 ) & 18446744073709551615 )  & 18446744073709551615 ) ;
       if( 1 == ap_CS_fsm_state5)
       {
           mul_ln23_reg_206=   ( ( do_twos_complement( c_load_reg_201__temp  , 32 )  * do_twos_complement( data_0_reg_104__temp  , 32 )  ) & 4294967295 ) ;
       }
    if(!((tmp_fu_125_p3 == 1) && (1 == ap_CS_fsm_state2))){
ap_done = 0 ; 
}
    if(!((ap_start == 0) && (1 == ap_CS_fsm_state1))){
ap_idle = 0 ; 
}
    if(!((tmp_fu_125_p3 == 1) && (1 == ap_CS_fsm_state2))){
ap_ready = 0 ; 
}
    if(!(1 == ap_CS_fsm_state3)){
c_ce0 = 0 ; 
}
    if(!(1 == ap_CS_fsm_state3)){
if(!(1 == ap_CS_fsm_state2)){
grp_fu_114_p0 = 0 ; 
}
}
    if(!(1 == ap_CS_fsm_state3)){
if(!(((tmp_fu_125_p3 == 0) && (icmp_ln16_fu_133_p2 == 1)) && (1 == ap_CS_fsm_state2))){
if(!(((tmp_fu_125_p3 == 0) && (icmp_ln16_fu_133_p2 == 0)) && (1 == ap_CS_fsm_state2))){
shift_reg_address0 = 0 ; 
}
}
}
    if(!(((1 == ap_CS_fsm_state3) || (((tmp_fu_125_p3 == 0) && (icmp_ln16_fu_133_p2 == 0)) && (1 == ap_CS_fsm_state2))) || (((tmp_fu_125_p3 == 0) && (icmp_ln16_fu_133_p2 == 1)) && (1 == ap_CS_fsm_state2)))){
shift_reg_ce0 = 0 ; 
}
    if(!(1 == ap_CS_fsm_state3)){
if(!(((tmp_fu_125_p3 == 0) && (icmp_ln16_fu_133_p2 == 1)) && (1 == ap_CS_fsm_state2))){
shift_reg_d0 = 0 ; 
}
}
    if(!(((icmp_ln16_reg_177 == 0) && (1 == ap_CS_fsm_state3)) || (((tmp_fu_125_p3 == 0) && (icmp_ln16_fu_133_p2 == 1)) && (1 == ap_CS_fsm_state2)))){
shift_reg_we0 = 0 ; 
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
   sext_ln15_fu_121_p1__temp = sext_ln15_fu_121_p1 ;
   i_0_reg_92__temp = i_0_reg_92 ;
   data_0_reg_104__temp = data_0_reg_104 ;
   ap_phi_mux_i_0_phi_fu_96_p4__temp = ap_phi_mux_i_0_phi_fu_96_p4 ;
   c_load_reg_201__temp = c_load_reg_201 ;
   sext_ln15_reg_168__temp = sext_ln15_reg_168 ;
   grp_fu_114_p0__temp = grp_fu_114_p0 ;
   ap_NS_fsm__temp = ap_NS_fsm ;
   shift_reg_q0__temp = shift_reg_q0 ;
   shift_reg_address0__temp = shift_reg_address0 ;
   tmp_fu_125_p3__temp = tmp_fu_125_p3 ;
   ap_idle__temp = ap_idle ;
   ap_CS_fsm__temp = ap_CS_fsm ;
   i_reg_196__temp = i_reg_196 ;
   acc_0_reg_80__temp = acc_0_reg_80 ;
   i_0_reg_92_temp_0__temp = i_0_reg_92_temp_0 ;
   shift_reg_d0__temp = shift_reg_d0 ;
   c_q0__temp = c_q0 ;
   trigger__temp = trigger ;
   icmp_ln16_fu_133_p2__temp = icmp_ln16_fu_133_p2 ;
   shift_reg_we0__temp = shift_reg_we0 ;
   mul_ln23_fu_152_p2__temp = mul_ln23_fu_152_p2 ;
   c_address0__temp = c_address0 ;
   zext_ln20_fu_139_p1__temp = zext_ln20_fu_139_p1 ;
   ap_done__temp = ap_done ;
   zext_ln23_fu_148_p1__temp = zext_ln23_fu_148_p1 ;
   mul_ln23_reg_206__temp = mul_ln23_reg_206 ;
   x__temp = x ;
   ap_clk__temp = ap_clk ;
   ap_start__temp = ap_start ;
   c_ce0__temp = c_ce0 ;
   ap_rst__temp = ap_rst ;
   grp_fu_114_p2__temp = grp_fu_114_p2 ;
   ap_return__temp = ap_return ;
   ap_ready__temp = ap_ready ;
   acc_fu_157_p2__temp = acc_fu_157_p2 ;
   shift_reg_ce0__temp = shift_reg_ce0 ;
   zext_ln20_1_fu_144_p1__temp = zext_ln20_1_fu_144_p1 ;
   icmp_ln16_reg_177__temp = icmp_ln16_reg_177 ;

       shift_reg_ce0 = 0;
       shift_reg_we0 = 0;
       c_ce0 = 0;
       c_address0=   ( ( do_twos_complement( sext_ln15_reg_168__temp  , 63 ) & 18446744073709551615 )  & 18446744073709551615 ) ;
       if( 1 == ap_CS_fsm_state6)
       {
           acc_0_reg_80=   ( ( mul_ln23_reg_206__temp  + acc_0_reg_80__temp  ) & 4294967295 ) ;
       }
       if( 1 == ap_CS_fsm_state6)
       {
           i_0_reg_92=  i_reg_196__temp ;
       }
       icmp_ln16_fu_133_p2 =   ( i_0_reg_92  == 0 ? 1 :  0 ) ;
    if(!((tmp_fu_125_p3 == 1) && (1 == ap_CS_fsm_state2))){
ap_done = 0 ; 
}
    if(!((ap_start == 0) && (1 == ap_CS_fsm_state1))){
ap_idle = 0 ; 
}
    if(!((tmp_fu_125_p3 == 1) && (1 == ap_CS_fsm_state2))){
ap_ready = 0 ; 
}
    if(!(1 == ap_CS_fsm_state3)){
c_ce0 = 0 ; 
}
    if(!(1 == ap_CS_fsm_state3)){
if(!(1 == ap_CS_fsm_state2)){
grp_fu_114_p0 = 0 ; 
}
}
    if(!(1 == ap_CS_fsm_state3)){
if(!(((tmp_fu_125_p3 == 0) && (icmp_ln16_fu_133_p2 == 1)) && (1 == ap_CS_fsm_state2))){
if(!(((tmp_fu_125_p3 == 0) && (icmp_ln16_fu_133_p2 == 0)) && (1 == ap_CS_fsm_state2))){
shift_reg_address0 = 0 ; 
}
}
}
    if(!(((1 == ap_CS_fsm_state3) || (((tmp_fu_125_p3 == 0) && (icmp_ln16_fu_133_p2 == 0)) && (1 == ap_CS_fsm_state2))) || (((tmp_fu_125_p3 == 0) && (icmp_ln16_fu_133_p2 == 1)) && (1 == ap_CS_fsm_state2)))){
shift_reg_ce0 = 0 ; 
}
    if(!(1 == ap_CS_fsm_state3)){
if(!(((tmp_fu_125_p3 == 0) && (icmp_ln16_fu_133_p2 == 1)) && (1 == ap_CS_fsm_state2))){
shift_reg_d0 = 0 ; 
}
}
    if(!(((icmp_ln16_reg_177 == 0) && (1 == ap_CS_fsm_state3)) || (((tmp_fu_125_p3 == 0) && (icmp_ln16_fu_133_p2 == 1)) && (1 == ap_CS_fsm_state2)))){
shift_reg_we0 = 0 ; 
}
       goto ap_ST_fsm_state2;

   ap_ST_fsm_state7:

    ap_CS_fsm_state1 = 0;
    ap_CS_fsm_state2 = 0;
    ap_CS_fsm_state3 = 0;
    ap_CS_fsm_state4 = 0;
    ap_CS_fsm_state5 = 0;
    ap_CS_fsm_state6 = 0;
    ap_CS_fsm_state7 = 1;
    ap_CS_fsm_state8 = 0;
   sext_ln15_fu_121_p1__temp = sext_ln15_fu_121_p1 ;
   i_0_reg_92__temp = i_0_reg_92 ;
   data_0_reg_104__temp = data_0_reg_104 ;
   ap_phi_mux_i_0_phi_fu_96_p4__temp = ap_phi_mux_i_0_phi_fu_96_p4 ;
   c_load_reg_201__temp = c_load_reg_201 ;
   sext_ln15_reg_168__temp = sext_ln15_reg_168 ;
   grp_fu_114_p0__temp = grp_fu_114_p0 ;
   ap_NS_fsm__temp = ap_NS_fsm ;
   shift_reg_q0__temp = shift_reg_q0 ;
   shift_reg_address0__temp = shift_reg_address0 ;
   tmp_fu_125_p3__temp = tmp_fu_125_p3 ;
   ap_idle__temp = ap_idle ;
   ap_CS_fsm__temp = ap_CS_fsm ;
   i_reg_196__temp = i_reg_196 ;
   acc_0_reg_80__temp = acc_0_reg_80 ;
   i_0_reg_92_temp_0__temp = i_0_reg_92_temp_0 ;
   shift_reg_d0__temp = shift_reg_d0 ;
   c_q0__temp = c_q0 ;
   trigger__temp = trigger ;
   icmp_ln16_fu_133_p2__temp = icmp_ln16_fu_133_p2 ;
   shift_reg_we0__temp = shift_reg_we0 ;
   mul_ln23_fu_152_p2__temp = mul_ln23_fu_152_p2 ;
   c_address0__temp = c_address0 ;
   zext_ln20_fu_139_p1__temp = zext_ln20_fu_139_p1 ;
   ap_done__temp = ap_done ;
   zext_ln23_fu_148_p1__temp = zext_ln23_fu_148_p1 ;
   mul_ln23_reg_206__temp = mul_ln23_reg_206 ;
   x__temp = x ;
   ap_clk__temp = ap_clk ;
   ap_start__temp = ap_start ;
   c_ce0__temp = c_ce0 ;
   ap_rst__temp = ap_rst ;
   grp_fu_114_p2__temp = grp_fu_114_p2 ;
   ap_return__temp = ap_return ;
   ap_ready__temp = ap_ready ;
   acc_fu_157_p2__temp = acc_fu_157_p2 ;
   shift_reg_ce0__temp = shift_reg_ce0 ;
   zext_ln20_1_fu_144_p1__temp = zext_ln20_1_fu_144_p1 ;
   icmp_ln16_reg_177__temp = icmp_ln16_reg_177 ;

       shift_reg_ce0 = 0;
       shift_reg_we0 = 0;
       c_ce0 = 0;
       c_address0=   ( ( do_twos_complement( sext_ln15_reg_168__temp  , 63 ) & 18446744073709551615 )  & 18446744073709551615 ) ;
    if(!((tmp_fu_125_p3 == 1) && (1 == ap_CS_fsm_state2))){
ap_done = 0 ; 
}
    if(!((ap_start == 0) && (1 == ap_CS_fsm_state1))){
ap_idle = 0 ; 
}
    if(!((tmp_fu_125_p3 == 1) && (1 == ap_CS_fsm_state2))){
ap_ready = 0 ; 
}
    if(!(1 == ap_CS_fsm_state3)){
c_ce0 = 0 ; 
}
    if(!(1 == ap_CS_fsm_state3)){
if(!(1 == ap_CS_fsm_state2)){
grp_fu_114_p0 = 0 ; 
}
}
    if(!(1 == ap_CS_fsm_state3)){
if(!(((tmp_fu_125_p3 == 0) && (icmp_ln16_fu_133_p2 == 1)) && (1 == ap_CS_fsm_state2))){
if(!(((tmp_fu_125_p3 == 0) && (icmp_ln16_fu_133_p2 == 0)) && (1 == ap_CS_fsm_state2))){
shift_reg_address0 = 0 ; 
}
}
}
    if(!(((1 == ap_CS_fsm_state3) || (((tmp_fu_125_p3 == 0) && (icmp_ln16_fu_133_p2 == 0)) && (1 == ap_CS_fsm_state2))) || (((tmp_fu_125_p3 == 0) && (icmp_ln16_fu_133_p2 == 1)) && (1 == ap_CS_fsm_state2)))){
shift_reg_ce0 = 0 ; 
}
    if(!(1 == ap_CS_fsm_state3)){
if(!(((tmp_fu_125_p3 == 0) && (icmp_ln16_fu_133_p2 == 1)) && (1 == ap_CS_fsm_state2))){
shift_reg_d0 = 0 ; 
}
}
    if(!(((icmp_ln16_reg_177 == 0) && (1 == ap_CS_fsm_state3)) || (((tmp_fu_125_p3 == 0) && (icmp_ln16_fu_133_p2 == 1)) && (1 == ap_CS_fsm_state2)))){
shift_reg_we0 = 0 ; 
}
       goto ap_ST_fsm_state4;

   ap_ST_fsm_state8:

    ap_CS_fsm_state1 = 0;
    ap_CS_fsm_state2 = 0;
    ap_CS_fsm_state3 = 0;
    ap_CS_fsm_state4 = 0;
    ap_CS_fsm_state5 = 0;
    ap_CS_fsm_state6 = 0;
    ap_CS_fsm_state7 = 0;
    ap_CS_fsm_state8 = 1;
   sext_ln15_fu_121_p1__temp = sext_ln15_fu_121_p1 ;
   i_0_reg_92__temp = i_0_reg_92 ;
   data_0_reg_104__temp = data_0_reg_104 ;
   ap_phi_mux_i_0_phi_fu_96_p4__temp = ap_phi_mux_i_0_phi_fu_96_p4 ;
   c_load_reg_201__temp = c_load_reg_201 ;
   sext_ln15_reg_168__temp = sext_ln15_reg_168 ;
   grp_fu_114_p0__temp = grp_fu_114_p0 ;
   ap_NS_fsm__temp = ap_NS_fsm ;
   shift_reg_q0__temp = shift_reg_q0 ;
   shift_reg_address0__temp = shift_reg_address0 ;
   tmp_fu_125_p3__temp = tmp_fu_125_p3 ;
   ap_idle__temp = ap_idle ;
   ap_CS_fsm__temp = ap_CS_fsm ;
   i_reg_196__temp = i_reg_196 ;
   acc_0_reg_80__temp = acc_0_reg_80 ;
   i_0_reg_92_temp_0__temp = i_0_reg_92_temp_0 ;
   shift_reg_d0__temp = shift_reg_d0 ;
   c_q0__temp = c_q0 ;
   trigger__temp = trigger ;
   icmp_ln16_fu_133_p2__temp = icmp_ln16_fu_133_p2 ;
   shift_reg_we0__temp = shift_reg_we0 ;
   mul_ln23_fu_152_p2__temp = mul_ln23_fu_152_p2 ;
   c_address0__temp = c_address0 ;
   zext_ln20_fu_139_p1__temp = zext_ln20_fu_139_p1 ;
   ap_done__temp = ap_done ;
   zext_ln23_fu_148_p1__temp = zext_ln23_fu_148_p1 ;
   mul_ln23_reg_206__temp = mul_ln23_reg_206 ;
   x__temp = x ;
   ap_clk__temp = ap_clk ;
   ap_start__temp = ap_start ;
   c_ce0__temp = c_ce0 ;
   ap_rst__temp = ap_rst ;
   grp_fu_114_p2__temp = grp_fu_114_p2 ;
   ap_return__temp = ap_return ;
   ap_ready__temp = ap_ready ;
   acc_fu_157_p2__temp = acc_fu_157_p2 ;
   shift_reg_ce0__temp = shift_reg_ce0 ;
   zext_ln20_1_fu_144_p1__temp = zext_ln20_1_fu_144_p1 ;
   icmp_ln16_reg_177__temp = icmp_ln16_reg_177 ;

       shift_reg_ce0 = 0;
       shift_reg_we0 = 0;
       c_ce0 = 0;
       c_address0=   ( ( do_twos_complement( sext_ln15_reg_168__temp  , 63 ) & 18446744073709551615 )  & 18446744073709551615 ) ;
    if(!((tmp_fu_125_p3 == 1) && (1 == ap_CS_fsm_state2))){
ap_done = 0 ; 
}
    if(!((ap_start == 0) && (1 == ap_CS_fsm_state1))){
ap_idle = 0 ; 
}
    if(!((tmp_fu_125_p3 == 1) && (1 == ap_CS_fsm_state2))){
ap_ready = 0 ; 
}
    if(!(1 == ap_CS_fsm_state3)){
c_ce0 = 0 ; 
}
    if(!(1 == ap_CS_fsm_state3)){
if(!(1 == ap_CS_fsm_state2)){
grp_fu_114_p0 = 0 ; 
}
}
    if(!(1 == ap_CS_fsm_state3)){
if(!(((tmp_fu_125_p3 == 0) && (icmp_ln16_fu_133_p2 == 1)) && (1 == ap_CS_fsm_state2))){
if(!(((tmp_fu_125_p3 == 0) && (icmp_ln16_fu_133_p2 == 0)) && (1 == ap_CS_fsm_state2))){
shift_reg_address0 = 0 ; 
}
}
}
    if(!(((1 == ap_CS_fsm_state3) || (((tmp_fu_125_p3 == 0) && (icmp_ln16_fu_133_p2 == 0)) && (1 == ap_CS_fsm_state2))) || (((tmp_fu_125_p3 == 0) && (icmp_ln16_fu_133_p2 == 1)) && (1 == ap_CS_fsm_state2)))){
shift_reg_ce0 = 0 ; 
}
    if(!(1 == ap_CS_fsm_state3)){
if(!(((tmp_fu_125_p3 == 0) && (icmp_ln16_fu_133_p2 == 1)) && (1 == ap_CS_fsm_state2))){
shift_reg_d0 = 0 ; 
}
}
    if(!(((icmp_ln16_reg_177 == 0) && (1 == ap_CS_fsm_state3)) || (((tmp_fu_125_p3 == 0) && (icmp_ln16_fu_133_p2 == 1)) && (1 == ap_CS_fsm_state2)))){
shift_reg_we0 = 0 ; 
}
       goto ap_ST_fsm_state5;
   end:
   printf("%lld\n",do_twos_complement(ap_return,32));
    *ap_clk__1=ap_clk;
    *ap_done__1=ap_done;
    *ap_idle__1=ap_idle;
    *ap_ready__1=ap_ready;
    *ap_return__1=ap_return;
    *ap_rst__1=ap_rst;
    *ap_start__1=ap_start;
    *c_address0__1=c_address0;
    *c_ce0__1=c_ce0;
    *c_q0__1=c_q0;
    *trigger__1=trigger;
    *x__1=x;
       return;
}

int main(){
	unsigned long long int ap_clk__1 = 1;
	unsigned long long int ap_done__1 = 0;
	unsigned long long int ap_idle__1 = 0;
	unsigned long long int ap_ready__1 = 1;
	unsigned long long int ap_return__1 = 1;
	unsigned long long int ap_rst__1 = 0;
	unsigned long long int ap_start__1 = 1;
	unsigned long long int c_address0__1 = 0;
	unsigned long long int c_ce0__1 = 0;
	unsigned long long int c_q0__1 = 0;
	unsigned long long int trigger_in__1 = 1;
	unsigned long long int x__1 = 5;
	long long int  c_rom[11] = {1,2,3,4,5,6,7,8,9,10,11};
 	int dummy = 0;
 	fir(&ap_clk__1,&ap_done__1,&ap_idle__1,&ap_ready__1,&ap_return__1,&ap_rst__1,&ap_start__1,&c_address0__1,&c_ce0__1,&c_q0__1,&trigger_in__1,&x__1,c_rom,dummy);
	return 0;
}
