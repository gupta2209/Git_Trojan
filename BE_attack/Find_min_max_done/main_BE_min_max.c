#include<stdio.h>
#define empty_DataWidth 32
#define empty_AddressRange 5
#define empty_AddressWidth 7
#define empty_DWIDTH 32
#define empty_AWIDTH 7
#define empty_MEM_SIZE 5
#define arr_AWIDTH 7
#define arr_DWIDTH 32
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
void min_max(unsigned long long int *ap_clk__1,unsigned long long int *ap_done__1,unsigned long long int *ap_idle__1,unsigned long long int *ap_ready__1,unsigned long long int *ap_rst__1,unsigned long long int *ap_start__1,unsigned long long int *arr_address0__1,unsigned long long int *arr_address1__1,unsigned long long int *arr_ce0__1,unsigned long long int *arr_ce1__1,unsigned long long int *arr_q0__1,unsigned long long int *arr_q1__1,unsigned long long int *out1__1,unsigned long long int *out1_ap_vld__1,unsigned long long int *out2__1,unsigned long long int *out2_ap_vld__1,unsigned long long int *p0__1,unsigned long long int *trigger_in__1,long long int  *arr_rom , int dummy){
unsigned long long int ap_clk=*ap_clk__1;
unsigned long long int ap_done=*ap_done__1;
unsigned long long int ap_idle=*ap_idle__1;
unsigned long long int ap_ready=*ap_ready__1;
unsigned long long int ap_rst=*ap_rst__1;
unsigned long long int ap_start=*ap_start__1;
unsigned long long int arr_address0=*arr_address0__1;
unsigned long long int arr_address1=*arr_address1__1;
unsigned long long int arr_ce0=*arr_ce0__1;
unsigned long long int arr_ce1=*arr_ce1__1;
unsigned long long int arr_q0=*arr_q0__1;
unsigned long long int arr_q1=*arr_q1__1;
unsigned long long int out1=*out1__1;
unsigned long long int out1_ap_vld=*out1_ap_vld__1;
unsigned long long int out2=*out2__1;
unsigned long long int out2_ap_vld=*out2_ap_vld__1;
unsigned long long int p0=*p0__1;
unsigned long long int trigger_in=*trigger_in__1;
   long long int ap_CS_fsm_state1=0;
   long long int ap_CS_fsm_state2=0;
   long long int ap_CS_fsm_state3=0;
   long long int ap_CS_fsm_state4=0;
   long long int ap_CS_fsm_state5=0;
   long long int ap_CS_fsm_state5__temp=0;
   long long int ap_CS_fsm_state6=0;
   long long int ap_CS_fsm_state6__temp=0;
   long long int ap_CS_fsm_state7=0;
   long long int ap_CS_fsm_state8=0;
   unsigned long long int ap_CS_fsm=0;
   unsigned long long int ap_CS_fsm__temp=0;
   unsigned long long int ap_NS_fsm=0;
   unsigned long long int ap_NS_fsm__temp=0;
   unsigned long long int ap_clk__temp=0;
   unsigned long long int ap_done__temp=0;
   unsigned long long int ap_idle__temp=0;
   unsigned long long int ap_ready__temp=0;
   unsigned long long int ap_rst__temp=0;
   unsigned long long int ap_start__temp=0;
   unsigned long long int arr_address0__temp=0;
   unsigned long long int arr_address1__temp=0;
   unsigned long long int arr_ce0__temp=0;
   unsigned long long int arr_ce1__temp=0;
   unsigned long long int arr_q0__temp=0;
   unsigned long long int arr_q1__temp=0;
   unsigned long long int empty_address0=0;
   unsigned long long int empty_address0__temp=0;
   unsigned long long int empty_address1=0;
   unsigned long long int empty_address1__temp=0;
   unsigned long long int empty_ce0=0;
   unsigned long long int empty_ce0__temp=0;
   unsigned long long int empty_ce1=0;
   unsigned long long int empty_ce1__temp=0;
   unsigned long long int empty_q0=0;
   unsigned long long int empty_q0__temp=0;
   unsigned long long int empty_q1=0;
   unsigned long long int empty_q1__temp=0;
   unsigned long long int empty_we0=0;
   unsigned long long int empty_we0__temp=0;
   unsigned long long int exitcond1_fu_169_p2=0;
   unsigned long long int exitcond1_fu_169_p2__temp=0;
   unsigned long long int exitcond_fu_204_p2=0;
   unsigned long long int exitcond_fu_204_p2__temp=0;
   unsigned long long int i_1_cast2_fu_199_p1=0;
   unsigned long long int i_1_cast2_fu_199_p1__temp=0;
   unsigned long long int i_1_reg_131=0;
   unsigned long long int i_1_reg_131__temp=0;
   unsigned long long int i_2_fu_175_p2=0;
   unsigned long long int i_2_fu_175_p2__temp=0;
   unsigned long long int i_2_reg_265=0;
   unsigned long long int i_2_reg_265__temp=0;
   unsigned long long int i_3_fu_210_p2=0;
   unsigned long long int i_3_fu_210_p2__temp=0;
   unsigned long long int i_3_reg_314=0;
   unsigned long long int i_3_reg_314__temp=0;
   unsigned long long int i_cast3_fu_164_p1=0;
   unsigned long long int i_cast3_fu_164_p1__temp=0;
   unsigned long long int i_cast3_fu_164_p1_temp_0=0;
   unsigned long long int i_cast3_fu_164_p1_temp_0__temp=0;
   unsigned long long int i_cast3_fu_164_p1_temp_0_temp_2=0;
   unsigned long long int i_cast3_fu_164_p1_temp_0_temp_2__temp=0;
   unsigned long long int i_cast3_reg_257=0;
   unsigned long long int i_cast3_reg_257__temp=0;
   unsigned long long int i_cast3_reg_257_temp_1=0;
   unsigned long long int i_cast3_reg_257_temp_1__temp=0;
   unsigned long long int i_reg_120=0;
   unsigned long long int i_reg_120__temp=0;
   unsigned long long int minmaxmax_1_ph_cast_fu_191_p3=0;
   unsigned long long int minmaxmax_1_ph_cast_fu_191_p3__temp=0;
   unsigned long long int minmaxmax_1_reg_153=0;
   unsigned long long int minmaxmax_1_reg_153__temp=0;
   unsigned long long int minmaxmax_2_fu_244_p3=0;
   unsigned long long int minmaxmax_2_fu_244_p3__temp=0;
   unsigned long long int minmaxmax_5_minmaxmi_fu_228_p3=0;
   unsigned long long int minmaxmax_5_minmaxmi_fu_228_p3__temp=0;
   unsigned long long int minmaxmin_1_ph_fu_187_p1=0;
   unsigned long long int minmaxmin_1_ph_fu_187_p1__temp=0;
   unsigned long long int minmaxmin_1_reg_142=0;
   unsigned long long int minmaxmin_1_reg_142__temp=0;
   unsigned long long int minmaxmin_3_fu_236_p3=0;
   unsigned long long int minmaxmin_3_fu_236_p3__temp=0;
   unsigned long long int mux_out1=0;
   unsigned long long int mux_out1__temp=0;
   unsigned long long int mux_out2=0;
   unsigned long long int mux_out2__temp=0;
   unsigned long long int mux_out_neg1=0;
   unsigned long long int mux_out_neg1__temp=0;
   unsigned long long int mux_out_neg2=0;
   unsigned long long int mux_out_neg2__temp=0;
   unsigned long long int out1__temp=0;
   unsigned long long int out1_ap_vld__temp=0;
   unsigned long long int out2__temp=0;
   unsigned long long int out2_ap_vld__temp=0;
   unsigned long long int p0__temp=0;
   unsigned long long int reg1=0;
   unsigned long long int reg1__temp=0;
   unsigned long long int reg2=0;
   unsigned long long int reg2__temp=0;
   unsigned long long int reg_out1=0;
   unsigned long long int reg_out1__temp=0;
   unsigned long long int reg_out2=0;
   unsigned long long int reg_out2__temp=0;
   unsigned long long int temp01=0;
   unsigned long long int temp012=0;
   unsigned long long int temp012__temp=0;
   unsigned long long int temp01__temp=0;
   unsigned long long int temp02=0;
   unsigned long long int temp02__temp=0;
   unsigned long long int temp11=0;
   unsigned long long int temp112=0;
   unsigned long long int temp112__temp=0;
   unsigned long long int temp11__temp=0;
   unsigned long long int temp12=0;
   unsigned long long int temp12__temp=0;
   unsigned long long int tmp_2_fu_216_p2=0;
   unsigned long long int tmp_2_fu_216_p2__temp=0;
   unsigned long long int tmp_2_fu_216_p2_temp_4=0;
   unsigned long long int tmp_2_fu_216_p2_temp_4__temp=0;
   unsigned long long int tmp_2_fu_216_p2_temp_6=0;
   unsigned long long int tmp_2_fu_216_p2_temp_6__temp=0;
   unsigned long long int tmp_3_fu_222_p2=0;
   unsigned long long int tmp_3_fu_222_p2__temp=0;
   unsigned long long int tmp_3_fu_222_p2_temp_5=0;
   unsigned long long int tmp_3_fu_222_p2_temp_5__temp=0;
   unsigned long long int tmp_fu_181_p2=0;
   unsigned long long int tmp_fu_181_p2__temp=0;
   unsigned long long int tmp_reg_280=0;
   unsigned long long int tmp_reg_280__temp=0;
   unsigned long long int tmp_reg_280_temp_3=0;
   unsigned long long int tmp_reg_280_temp_3__temp=0;
   unsigned long long int trigger_in__temp=0;
    ap_done=0;
    ap_start=1;
   unsigned long long int empty_ram[empty_MEM_SIZE];

   ap_ST_fsm_state1:

    ap_CS_fsm_state1 = 1;
    ap_CS_fsm_state2 = 0;
    ap_CS_fsm_state3 = 0;
    ap_CS_fsm_state4 = 0;
    ap_CS_fsm_state5 = 0;
    ap_CS_fsm_state6 = 0;
    ap_CS_fsm_state7 = 0;
    ap_CS_fsm_state8 = 0;
   ap_CS_fsm_state6__temp = ap_CS_fsm_state6 ;
   ap_CS_fsm_state5__temp = ap_CS_fsm_state5 ;
   i_1_reg_131__temp = i_1_reg_131 ;
   i_3_fu_210_p2__temp = i_3_fu_210_p2 ;
   reg2__temp = reg2 ;
   mux_out1__temp = mux_out1 ;
   temp12__temp = temp12 ;
   i_3_reg_314__temp = i_3_reg_314 ;
   out2__temp = out2 ;
   ap_idle__temp = ap_idle ;
   empty_ce0__temp = empty_ce0 ;
   minmaxmax_1_reg_153__temp = minmaxmax_1_reg_153 ;
   ap_NS_fsm__temp = ap_NS_fsm ;
   tmp_3_fu_222_p2_temp_5__temp = tmp_3_fu_222_p2_temp_5 ;
   trigger_in__temp = trigger_in ;
   mux_out_neg2__temp = mux_out_neg2 ;
   i_2_reg_265__temp = i_2_reg_265 ;
   tmp_fu_181_p2__temp = tmp_fu_181_p2 ;
   i_2_fu_175_p2__temp = i_2_fu_175_p2 ;
   tmp_reg_280__temp = tmp_reg_280 ;
   minmaxmin_3_fu_236_p3__temp = minmaxmin_3_fu_236_p3 ;
   ap_rst__temp = ap_rst ;
   arr_q0__temp = arr_q0 ;
   tmp_2_fu_216_p2_temp_4__temp = tmp_2_fu_216_p2_temp_4 ;
   ap_done__temp = ap_done ;
   i_cast3_fu_164_p1__temp = i_cast3_fu_164_p1 ;
   minmaxmax_2_fu_244_p3__temp = minmaxmax_2_fu_244_p3 ;
   arr_ce0__temp = arr_ce0 ;
   minmaxmin_1_ph_fu_187_p1__temp = minmaxmin_1_ph_fu_187_p1 ;
   i_cast3_reg_257_temp_1__temp = i_cast3_reg_257_temp_1 ;
   out1_ap_vld__temp = out1_ap_vld ;
   temp01__temp = temp01 ;
   reg_out1__temp = reg_out1 ;
   arr_address1__temp = arr_address1 ;
   tmp_reg_280_temp_3__temp = tmp_reg_280_temp_3 ;
   empty_address1__temp = empty_address1 ;
   minmaxmin_1_reg_142__temp = minmaxmin_1_reg_142 ;
   ap_CS_fsm__temp = ap_CS_fsm ;
   exitcond_fu_204_p2__temp = exitcond_fu_204_p2 ;
   i_cast3_reg_257__temp = i_cast3_reg_257 ;
   i_reg_120__temp = i_reg_120 ;
   mux_out2__temp = mux_out2 ;
   temp11__temp = temp11 ;
   empty_address0__temp = empty_address0 ;
   tmp_3_fu_222_p2__temp = tmp_3_fu_222_p2 ;
   empty_q1__temp = empty_q1 ;
   tmp_2_fu_216_p2__temp = tmp_2_fu_216_p2 ;
   p0__temp = p0 ;
   i_1_cast2_fu_199_p1__temp = i_1_cast2_fu_199_p1 ;
   i_cast3_fu_164_p1_temp_0_temp_2__temp = i_cast3_fu_164_p1_temp_0_temp_2 ;
   minmaxmax_5_minmaxmi_fu_228_p3__temp = minmaxmax_5_minmaxmi_fu_228_p3 ;
   tmp_2_fu_216_p2_temp_6__temp = tmp_2_fu_216_p2_temp_6 ;
   reg_out2__temp = reg_out2 ;
   exitcond1_fu_169_p2__temp = exitcond1_fu_169_p2 ;
   arr_address0__temp = arr_address0 ;
   reg1__temp = reg1 ;
   ap_ready__temp = ap_ready ;
   ap_start__temp = ap_start ;
   i_cast3_fu_164_p1_temp_0__temp = i_cast3_fu_164_p1_temp_0 ;
   arr_q1__temp = arr_q1 ;
   out1__temp = out1 ;
   mux_out_neg1__temp = mux_out_neg1 ;
   temp02__temp = temp02 ;
   temp012__temp = temp012 ;
   empty_we0__temp = empty_we0 ;
   arr_ce1__temp = arr_ce1 ;
   out2_ap_vld__temp = out2_ap_vld ;
   empty_ce1__temp = empty_ce1 ;
   empty_q0__temp = empty_q0 ;
   ap_clk__temp = ap_clk ;
   temp112__temp = temp112 ;
   minmaxmax_1_ph_cast_fu_191_p3__temp = minmaxmax_1_ph_cast_fu_191_p3 ;

       empty_ce0 = 0;
       empty_we0 = 0;
       empty_ce1 = 0;
       arr_ce0 = 0;
       arr_ce1 = 0;
       arr_address1=   ( 1 ) & 4294967295;
    i_cast3_reg_257=   ( ( i_cast3_reg_257__temp  & 127 ) & 4294967295 )  ; 
               ap_start=  ( ap_start__temp  & 1 ) ;
   if( ( ( 1 == ap_CS_fsm_state1 ) && ( ap_start == 1 ) ) == 1){
       if( ( 1 == ap_CS_fsm_state1 ) && ( ap_start == 1 ))
       {
           reg2=  0;
           reg1=  0;
           i_reg_120=  0;
       }
       exitcond1_fu_169_p2 =   ( i_reg_120  == 5 ? 1 :  0 ) ;
		if(!((1 == ap_CS_fsm_state7) && (1 == exitcond_fu_204_p2))){
			ap_done = 0 ; 
		}
		if(!((0 == ap_start) && (1 == ap_CS_fsm_state1))){
			ap_idle = 0 ; 
		}
		if(!((1 == ap_CS_fsm_state7) && (1 == exitcond_fu_204_p2))){
			ap_ready = 0 ; 
		}
		if(!((1 == ap_CS_fsm_state2) && (exitcond1_fu_169_p2 == 1))){
			if(!((1 == ap_CS_fsm_state2) && (exitcond1_fu_169_p2 == 0))){
				arr_address0 = 0 ; 
			}
		}
		if(!(((1 == ap_CS_fsm_state2) && (exitcond1_fu_169_p2 == 0)) || ((1 == ap_CS_fsm_state2) && (exitcond1_fu_169_p2 == 1)))){
			arr_ce0 = 0 ; 
		}
		if(!(1 == ap_CS_fsm_state2)){
			arr_ce1 = 0 ; 
		}
		if(!(1 == ap_CS_fsm_state5)){
			if(!(1 == ap_CS_fsm_state3)){
				empty_address0 = 0 ; 
			}
		}
		if(!(1 == ap_CS_fsm_state7)){
			if(!(1 == ap_CS_fsm_state5)){
				empty_address1 = 0 ; 
			}
		}
		if(!((1 == ap_CS_fsm_state5) || (1 == ap_CS_fsm_state3))){
			empty_ce0 = 0 ; 
		}
		if(!((1 == ap_CS_fsm_state5) || (1 == ap_CS_fsm_state7))){
			empty_ce1 = 0 ; 
		}
		if(!(1 == ap_CS_fsm_state3)){
			empty_we0 = 0 ; 
		}
		if(!((1 == ap_CS_fsm_state7) && (1 == exitcond_fu_204_p2))){
			out1_ap_vld = 0 ; 
		}
		if(!((1 == ap_CS_fsm_state7) && (1 == exitcond_fu_204_p2))){
			out2_ap_vld = 0 ; 
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
               reg2=  0;
               reg1=  0;
               i_reg_120=  0;
       	}
       	exitcond1_fu_169_p2 =   ( i_reg_120  == 5 ? 1 :  0 ) ;
    	if(!((1 == ap_CS_fsm_state7) && (1 == exitcond_fu_204_p2))){
			ap_done = 0 ; 
		}
    	if(!((0 == ap_start) && (1 == ap_CS_fsm_state1))){
			ap_idle = 0 ; 
		}
    	if(!((1 == ap_CS_fsm_state7) && (1 == exitcond_fu_204_p2))){
			ap_ready = 0 ; 
		}
    	if(!((1 == ap_CS_fsm_state2) && (exitcond1_fu_169_p2 == 1))){
			if(!((1 == ap_CS_fsm_state2) && (exitcond1_fu_169_p2 == 0))){
				arr_address0 = 0 ; 
			}
		}
    	if(!(((1 == ap_CS_fsm_state2) && (exitcond1_fu_169_p2 == 0)) || ((1 == ap_CS_fsm_state2) && (exitcond1_fu_169_p2 == 1)))){
			arr_ce0 = 0 ; 
		}
		if(!(1 == ap_CS_fsm_state2)){
			arr_ce1 = 0 ; 
		}
		if(!(1 == ap_CS_fsm_state5)){
			if(!(1 == ap_CS_fsm_state3)){
				empty_address0 = 0 ; 
			}
		}
		if(!(1 == ap_CS_fsm_state7)){
			if(!(1 == ap_CS_fsm_state5)){
				empty_address1 = 0 ; 
			}
		}
		if(!((1 == ap_CS_fsm_state5) || (1 == ap_CS_fsm_state3))){
			empty_ce0 = 0 ; 
		}
		if(!((1 == ap_CS_fsm_state5) || (1 == ap_CS_fsm_state7))){
			empty_ce1 = 0 ; 
		}
		if(!(1 == ap_CS_fsm_state3)){
			empty_we0 = 0 ; 
		}
		if(!((1 == ap_CS_fsm_state7) && (1 == exitcond_fu_204_p2))){
			out1_ap_vld = 0 ; 
		}
		if(!((1 == ap_CS_fsm_state7) && (1 == exitcond_fu_204_p2))){
			out2_ap_vld = 0 ; 
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
    ap_CS_fsm_state7 = 0;
    ap_CS_fsm_state8 = 0;
   ap_CS_fsm_state6__temp = ap_CS_fsm_state6 ;
   ap_CS_fsm_state5__temp = ap_CS_fsm_state5 ;
   i_1_reg_131__temp = i_1_reg_131 ;
   i_3_fu_210_p2__temp = i_3_fu_210_p2 ;
   reg2__temp = reg2 ;
   mux_out1__temp = mux_out1 ;
   temp12__temp = temp12 ;
   i_3_reg_314__temp = i_3_reg_314 ;
   out2__temp = out2 ;
   ap_idle__temp = ap_idle ;
   empty_ce0__temp = empty_ce0 ;
   minmaxmax_1_reg_153__temp = minmaxmax_1_reg_153 ;
   ap_NS_fsm__temp = ap_NS_fsm ;
   tmp_3_fu_222_p2_temp_5__temp = tmp_3_fu_222_p2_temp_5 ;
   trigger_in__temp = trigger_in ;
   mux_out_neg2__temp = mux_out_neg2 ;
   i_2_reg_265__temp = i_2_reg_265 ;
   tmp_fu_181_p2__temp = tmp_fu_181_p2 ;
   i_2_fu_175_p2__temp = i_2_fu_175_p2 ;
   tmp_reg_280__temp = tmp_reg_280 ;
   minmaxmin_3_fu_236_p3__temp = minmaxmin_3_fu_236_p3 ;
   ap_rst__temp = ap_rst ;
   arr_q0__temp = arr_q0 ;
   tmp_2_fu_216_p2_temp_4__temp = tmp_2_fu_216_p2_temp_4 ;
   ap_done__temp = ap_done ;
   i_cast3_fu_164_p1__temp = i_cast3_fu_164_p1 ;
   minmaxmax_2_fu_244_p3__temp = minmaxmax_2_fu_244_p3 ;
   arr_ce0__temp = arr_ce0 ;
   minmaxmin_1_ph_fu_187_p1__temp = minmaxmin_1_ph_fu_187_p1 ;
   i_cast3_reg_257_temp_1__temp = i_cast3_reg_257_temp_1 ;
   out1_ap_vld__temp = out1_ap_vld ;
   temp01__temp = temp01 ;
   reg_out1__temp = reg_out1 ;
   arr_address1__temp = arr_address1 ;
   tmp_reg_280_temp_3__temp = tmp_reg_280_temp_3 ;
   empty_address1__temp = empty_address1 ;
   minmaxmin_1_reg_142__temp = minmaxmin_1_reg_142 ;
   ap_CS_fsm__temp = ap_CS_fsm ;
   exitcond_fu_204_p2__temp = exitcond_fu_204_p2 ;
   i_cast3_reg_257__temp = i_cast3_reg_257 ;
   i_reg_120__temp = i_reg_120 ;
   mux_out2__temp = mux_out2 ;
   temp11__temp = temp11 ;
   empty_address0__temp = empty_address0 ;
   tmp_3_fu_222_p2__temp = tmp_3_fu_222_p2 ;
   empty_q1__temp = empty_q1 ;
   tmp_2_fu_216_p2__temp = tmp_2_fu_216_p2 ;
   p0__temp = p0 ;
   i_1_cast2_fu_199_p1__temp = i_1_cast2_fu_199_p1 ;
   i_cast3_fu_164_p1_temp_0_temp_2__temp = i_cast3_fu_164_p1_temp_0_temp_2 ;
   minmaxmax_5_minmaxmi_fu_228_p3__temp = minmaxmax_5_minmaxmi_fu_228_p3 ;
   tmp_2_fu_216_p2_temp_6__temp = tmp_2_fu_216_p2_temp_6 ;
   reg_out2__temp = reg_out2 ;
   exitcond1_fu_169_p2__temp = exitcond1_fu_169_p2 ;
   arr_address0__temp = arr_address0 ;
   reg1__temp = reg1 ;
   ap_ready__temp = ap_ready ;
   ap_start__temp = ap_start ;
   i_cast3_fu_164_p1_temp_0__temp = i_cast3_fu_164_p1_temp_0 ;
   arr_q1__temp = arr_q1 ;
   out1__temp = out1 ;
   mux_out_neg1__temp = mux_out_neg1 ;
   temp02__temp = temp02 ;
   temp012__temp = temp012 ;
   empty_we0__temp = empty_we0 ;
   arr_ce1__temp = arr_ce1 ;
   out2_ap_vld__temp = out2_ap_vld ;
   empty_ce1__temp = empty_ce1 ;
   empty_q0__temp = empty_q0 ;
   ap_clk__temp = ap_clk ;
   temp112__temp = temp112 ;
   minmaxmax_1_ph_cast_fu_191_p3__temp = minmaxmax_1_ph_cast_fu_191_p3 ;

       empty_ce0 = 0;
       empty_we0 = 0;
       empty_ce1 = 0;
       arr_ce0 = 0;
       arr_ce1 = 0;
       arr_address1=   ( 1 ) & 4294967295;
    	i_cast3_reg_257=   ( ( i_cast3_reg_257__temp  & 127 ) & 4294967295 )  ; 
               //exitcond1_fu_169_p2 =   ( i_reg_120__temp  == 5 ? 1 :  0 ) ;
   if( ( ( 1 == ap_CS_fsm_state2 ) && ( exitcond1_fu_169_p2__temp  == 1 ) ) == 1){
       if( 1 == ap_CS_fsm_state2)
       {
           i_cast3_reg_257=   ( (  ( (  ( i_reg_120__temp  & 4294967295 )  & 127 ) & 18446744073709551615 )  |  ( ( i_cast3_reg_257 & 4294967168 ) & 18446744073709551615 )  ) & 18446744073709551615 ) ;
           i_2_reg_265 =   ( (  (  ( (  ( ( trigger_in__temp  & 1 )  == 1 ? 1 :  0 )  &  ( 1 == ap_CS_fsm_state5__temp  ? 1 : 0 )  ) & 1 )  == 1 ?  ( reg1__temp  & 4294967295 )  :  i_reg_120__temp  )  + 1 ) & 127 ) ;
       }
		if(!((1 == ap_CS_fsm_state7) && (1 == exitcond_fu_204_p2))){
			ap_done = 0 ; 
		}
		if(!((0 == ap_start) && (1 == ap_CS_fsm_state1))){
			ap_idle = 0 ; 
		}
		if(!((1 == ap_CS_fsm_state7) && (1 == exitcond_fu_204_p2))){
			ap_ready = 0 ; 
		}
		if(!((1 == ap_CS_fsm_state2) && (exitcond1_fu_169_p2 == 1))){
			if(!((1 == ap_CS_fsm_state2) && (exitcond1_fu_169_p2 == 0))){
				arr_address0 = 0 ; 
			}
		}
		if(!(((1 == ap_CS_fsm_state2) && (exitcond1_fu_169_p2 == 0)) || ((1 == ap_CS_fsm_state2) && (exitcond1_fu_169_p2 == 1)))){
			arr_ce0 = 0 ; 
		}
		if(!(1 == ap_CS_fsm_state2)){
			arr_ce1 = 0 ; 
		}
		if(!(1 == ap_CS_fsm_state5)){
			if(!(1 == ap_CS_fsm_state3)){
				empty_address0 = 0 ; 
			}
		}
		if(!(1 == ap_CS_fsm_state7)){
			if(!(1 == ap_CS_fsm_state5)){
				empty_address1 = 0 ; 
			}
		}
		if(!((1 == ap_CS_fsm_state5) || (1 == ap_CS_fsm_state3))){
			empty_ce0 = 0 ; 
		}
		if(!((1 == ap_CS_fsm_state5) || (1 == ap_CS_fsm_state7))){
			empty_ce1 = 0 ; 
		}
		if(!(1 == ap_CS_fsm_state3)){
			empty_we0 = 0 ; 
		}
		if(!((1 == ap_CS_fsm_state7) && (1 == exitcond_fu_204_p2))){
			out1_ap_vld = 0 ; 
		}
		if(!((1 == ap_CS_fsm_state7) && (1 == exitcond_fu_204_p2))){
			out2_ap_vld = 0 ; 
		}
               //exitcond1_fu_169_p2 =   ( i_reg_120__temp  == 5 ? 1 :  0 ) ;
       if((1 == ap_CS_fsm_state2) && (exitcond1_fu_169_p2 == 1))
       {
           arr_address0=  0;
       }
       if((1 == ap_CS_fsm_state2) && (exitcond1_fu_169_p2 == 0))
       {
           arr_address0=   ( i_reg_120__temp  & 4294967295 ) ;
       }
       if(((1 == ap_CS_fsm_state2) && (exitcond1_fu_169_p2 == 0)) || ((1 == ap_CS_fsm_state2) && (exitcond1_fu_169_p2 == 1)))
       {
           arr_ce0=  1;
       }
       if(1 == ap_CS_fsm_state2)
       {
           arr_ce1=  1;
       }
       if(arr_ce0){
          arr_q0 = arr_rom[arr_address0];
       }
       if(arr_ce1){
          arr_q1 = arr_rom[arr_address1];
       }
       goto ap_ST_fsm_state4;
   }
   if( ( ( 1 == ap_CS_fsm_state2 ) && ( exitcond1_fu_169_p2__temp  == 1 ) ) == 0){
       if( 1 == ap_CS_fsm_state2)
       {
               i_cast3_reg_257=   ( (  ( (  ( i_reg_120__temp  & 4294967295 )  & 127 ) & 18446744073709551615 )  |  ( ( i_cast3_reg_257 & 4294967168 ) & 18446744073709551615 )  ) & 18446744073709551615 ) ;
               i_2_reg_265 =   ( (  (  ( (  ( ( trigger_in__temp  & 1 )  == 1 ? 1 :  0 )  &  ( 1 == ap_CS_fsm_state5__temp  ? 1 : 0 )  ) & 1 )  == 1 ?  ( reg1__temp  & 4294967295 )  :  i_reg_120__temp  )  + 1 ) & 127 ) ;
       }
		if(!((1 == ap_CS_fsm_state7) && (1 == exitcond_fu_204_p2))){
			ap_done = 0 ; 
		}
		if(!((0 == ap_start) && (1 == ap_CS_fsm_state1))){
			ap_idle = 0 ; 
		}
		if(!((1 == ap_CS_fsm_state7) && (1 == exitcond_fu_204_p2))){
			ap_ready = 0 ; 
		}
		if(!((1 == ap_CS_fsm_state2) && (exitcond1_fu_169_p2 == 1))){
			if(!((1 == ap_CS_fsm_state2) && (exitcond1_fu_169_p2 == 0))){
				arr_address0 = 0 ; 
			}
		}
		if(!(((1 == ap_CS_fsm_state2) && (exitcond1_fu_169_p2 == 0)) || ((1 == ap_CS_fsm_state2) && (exitcond1_fu_169_p2 == 1)))){
			arr_ce0 = 0 ; 
		}
		if(!(1 == ap_CS_fsm_state2)){
			arr_ce1 = 0 ; 
		}
		if(!(1 == ap_CS_fsm_state5)){
			if(!(1 == ap_CS_fsm_state3)){
				empty_address0 = 0 ; 
			}
		}
		if(!(1 == ap_CS_fsm_state7)){
			if(!(1 == ap_CS_fsm_state5)){
				empty_address1 = 0 ; 
			}
		}
		if(!((1 == ap_CS_fsm_state5) || (1 == ap_CS_fsm_state3))){
			empty_ce0 = 0 ; 
		}
		if(!((1 == ap_CS_fsm_state5) || (1 == ap_CS_fsm_state7))){
			empty_ce1 = 0 ; 
		}
		if(!(1 == ap_CS_fsm_state3)){
			empty_we0 = 0 ; 
		}
		if(!((1 == ap_CS_fsm_state7) && (1 == exitcond_fu_204_p2))){
			out1_ap_vld = 0 ; 
		}
		if(!((1 == ap_CS_fsm_state7) && (1 == exitcond_fu_204_p2))){
			out2_ap_vld = 0 ; 
		}
               //exitcond1_fu_169_p2 =   ( i_reg_120__temp  == 5 ? 1 :  0 ) ;
       if((1 == ap_CS_fsm_state2) && (exitcond1_fu_169_p2 == 1))
       {
           arr_address0=  0;
       }
       if((1 == ap_CS_fsm_state2) && (exitcond1_fu_169_p2 == 0))
       {
           arr_address0=   ( i_reg_120__temp  & 4294967295 ) ;
       }
       if(((1 == ap_CS_fsm_state2) && (exitcond1_fu_169_p2 == 0)) || ((1 == ap_CS_fsm_state2) && (exitcond1_fu_169_p2 == 1)))
       {
           arr_ce0=  1;
       }
       if(1 == ap_CS_fsm_state2)
       {
           arr_ce1=  1;
       }
       if(arr_ce0){
          arr_q0 = arr_rom[arr_address0];
       }
       if(arr_ce1){
          arr_q1 = arr_rom[arr_address1];
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
   ap_CS_fsm_state6__temp = ap_CS_fsm_state6 ;
   ap_CS_fsm_state5__temp = ap_CS_fsm_state5 ;
   i_1_reg_131__temp = i_1_reg_131 ;
   i_3_fu_210_p2__temp = i_3_fu_210_p2 ;
   reg2__temp = reg2 ;
   mux_out1__temp = mux_out1 ;
   temp12__temp = temp12 ;
   i_3_reg_314__temp = i_3_reg_314 ;
   out2__temp = out2 ;
   ap_idle__temp = ap_idle ;
   empty_ce0__temp = empty_ce0 ;
   minmaxmax_1_reg_153__temp = minmaxmax_1_reg_153 ;
   ap_NS_fsm__temp = ap_NS_fsm ;
   tmp_3_fu_222_p2_temp_5__temp = tmp_3_fu_222_p2_temp_5 ;
   trigger_in__temp = trigger_in ;
   mux_out_neg2__temp = mux_out_neg2 ;
   i_2_reg_265__temp = i_2_reg_265 ;
   tmp_fu_181_p2__temp = tmp_fu_181_p2 ;
   i_2_fu_175_p2__temp = i_2_fu_175_p2 ;
   tmp_reg_280__temp = tmp_reg_280 ;
   minmaxmin_3_fu_236_p3__temp = minmaxmin_3_fu_236_p3 ;
   ap_rst__temp = ap_rst ;
   arr_q0__temp = arr_q0 ;
   tmp_2_fu_216_p2_temp_4__temp = tmp_2_fu_216_p2_temp_4 ;
   ap_done__temp = ap_done ;
   i_cast3_fu_164_p1__temp = i_cast3_fu_164_p1 ;
   minmaxmax_2_fu_244_p3__temp = minmaxmax_2_fu_244_p3 ;
   arr_ce0__temp = arr_ce0 ;
   minmaxmin_1_ph_fu_187_p1__temp = minmaxmin_1_ph_fu_187_p1 ;
   i_cast3_reg_257_temp_1__temp = i_cast3_reg_257_temp_1 ;
   out1_ap_vld__temp = out1_ap_vld ;
   temp01__temp = temp01 ;
   reg_out1__temp = reg_out1 ;
   arr_address1__temp = arr_address1 ;
   tmp_reg_280_temp_3__temp = tmp_reg_280_temp_3 ;
   empty_address1__temp = empty_address1 ;
   minmaxmin_1_reg_142__temp = minmaxmin_1_reg_142 ;
   ap_CS_fsm__temp = ap_CS_fsm ;
   exitcond_fu_204_p2__temp = exitcond_fu_204_p2 ;
   i_cast3_reg_257__temp = i_cast3_reg_257 ;
   i_reg_120__temp = i_reg_120 ;
   mux_out2__temp = mux_out2 ;
   temp11__temp = temp11 ;
   empty_address0__temp = empty_address0 ;
   tmp_3_fu_222_p2__temp = tmp_3_fu_222_p2 ;
   empty_q1__temp = empty_q1 ;
   tmp_2_fu_216_p2__temp = tmp_2_fu_216_p2 ;
   p0__temp = p0 ;
   i_1_cast2_fu_199_p1__temp = i_1_cast2_fu_199_p1 ;
   i_cast3_fu_164_p1_temp_0_temp_2__temp = i_cast3_fu_164_p1_temp_0_temp_2 ;
   minmaxmax_5_minmaxmi_fu_228_p3__temp = minmaxmax_5_minmaxmi_fu_228_p3 ;
   tmp_2_fu_216_p2_temp_6__temp = tmp_2_fu_216_p2_temp_6 ;
   reg_out2__temp = reg_out2 ;
   exitcond1_fu_169_p2__temp = exitcond1_fu_169_p2 ;
   arr_address0__temp = arr_address0 ;
   reg1__temp = reg1 ;
   ap_ready__temp = ap_ready ;
   ap_start__temp = ap_start ;
   i_cast3_fu_164_p1_temp_0__temp = i_cast3_fu_164_p1_temp_0 ;
   arr_q1__temp = arr_q1 ;
   out1__temp = out1 ;
   mux_out_neg1__temp = mux_out_neg1 ;
   temp02__temp = temp02 ;
   temp012__temp = temp012 ;
   empty_we0__temp = empty_we0 ;
   arr_ce1__temp = arr_ce1 ;
   out2_ap_vld__temp = out2_ap_vld ;
   empty_ce1__temp = empty_ce1 ;
   empty_q0__temp = empty_q0 ;
   ap_clk__temp = ap_clk ;
   temp112__temp = temp112 ;
   minmaxmax_1_ph_cast_fu_191_p3__temp = minmaxmax_1_ph_cast_fu_191_p3 ;

       empty_ce0 = 0;
       empty_we0 = 0;
       empty_ce1 = 0;
       arr_ce0 = 0;
       arr_ce1 = 0;
       arr_address1=   ( 1 ) & 4294967295;
    i_cast3_reg_257=   ( ( i_cast3_reg_257__temp  & 127 ) & 4294967295 )  ; 
       if( 1 == ap_CS_fsm_state3)
       {
           i_reg_120=  i_2_reg_265__temp ;
       }
       exitcond1_fu_169_p2 =   ( i_reg_120  == 5 ? 1 :  0 ) ;
    if(!((1 == ap_CS_fsm_state7) && (1 == exitcond_fu_204_p2))){
		ap_done = 0 ; 
	}
    if(!((0 == ap_start) && (1 == ap_CS_fsm_state1))){
		ap_idle = 0 ; 
	}
    if(!((1 == ap_CS_fsm_state7) && (1 == exitcond_fu_204_p2))){
		ap_ready = 0 ; 
	}
    if(!((1 == ap_CS_fsm_state2) && (exitcond1_fu_169_p2 == 1))){
		if(!((1 == ap_CS_fsm_state2) && (exitcond1_fu_169_p2 == 0))){
			arr_address0 = 0 ; 
		}
	}
    if(!(((1 == ap_CS_fsm_state2) && (exitcond1_fu_169_p2 == 0)) || ((1 == ap_CS_fsm_state2) && (exitcond1_fu_169_p2 == 1)))){
		arr_ce0 = 0 ; 
	}
    if(!(1 == ap_CS_fsm_state2)){
		arr_ce1 = 0 ; 
	}
    if(!(1 == ap_CS_fsm_state5)){
		if(!(1 == ap_CS_fsm_state3)){
			empty_address0 = 0 ; 
		}
	}
    if(!(1 == ap_CS_fsm_state7)){
		if(!(1 == ap_CS_fsm_state5)){
			empty_address1 = 0 ; 
		}
	}
    if(!((1 == ap_CS_fsm_state5) || (1 == ap_CS_fsm_state3))){
		empty_ce0 = 0 ; 
	}
    if(!((1 == ap_CS_fsm_state5) || (1 == ap_CS_fsm_state7))){
		empty_ce1 = 0 ; 
	}
    if(!(1 == ap_CS_fsm_state3)){
		empty_we0 = 0 ; 
	}
    if(!((1 == ap_CS_fsm_state7) && (1 == exitcond_fu_204_p2))){
		out1_ap_vld = 0 ; 
	}
    if(!((1 == ap_CS_fsm_state7) && (1 == exitcond_fu_204_p2))){
		out2_ap_vld = 0 ; 
	}
       if(1 == ap_CS_fsm_state3)
       {
           empty_address0=  i_cast3_reg_257__temp ;
       }
       if((1 == ap_CS_fsm_state5) || (1 == ap_CS_fsm_state3))
       {
           empty_ce0=  1;
       }
       if(1 == ap_CS_fsm_state3)
       {
           empty_we0=  1;
       }
       if(empty_ce0){
           if(empty_we0){
              empty_ram[empty_address0]=arr_q0;
              empty_q0=arr_q0;
           }
       }
       goto ap_ST_fsm_state2;

   ap_ST_fsm_state4:

    ap_CS_fsm_state1 = 0;
    ap_CS_fsm_state2 = 0;
    ap_CS_fsm_state3 = 0;
    ap_CS_fsm_state4 = 1;
    ap_CS_fsm_state5 = 0;
    ap_CS_fsm_state6 = 0;
    ap_CS_fsm_state7 = 0;
    ap_CS_fsm_state8 = 0;
   ap_CS_fsm_state6__temp = ap_CS_fsm_state6 ;
   ap_CS_fsm_state5__temp = ap_CS_fsm_state5 ;
   i_1_reg_131__temp = i_1_reg_131 ;
   i_3_fu_210_p2__temp = i_3_fu_210_p2 ;
   reg2__temp = reg2 ;
   mux_out1__temp = mux_out1 ;
   temp12__temp = temp12 ;
   i_3_reg_314__temp = i_3_reg_314 ;
   out2__temp = out2 ;
   ap_idle__temp = ap_idle ;
   empty_ce0__temp = empty_ce0 ;
   minmaxmax_1_reg_153__temp = minmaxmax_1_reg_153 ;
   ap_NS_fsm__temp = ap_NS_fsm ;
   tmp_3_fu_222_p2_temp_5__temp = tmp_3_fu_222_p2_temp_5 ;
   trigger_in__temp = trigger_in ;
   mux_out_neg2__temp = mux_out_neg2 ;
   i_2_reg_265__temp = i_2_reg_265 ;
   tmp_fu_181_p2__temp = tmp_fu_181_p2 ;
   i_2_fu_175_p2__temp = i_2_fu_175_p2 ;
   tmp_reg_280__temp = tmp_reg_280 ;
   minmaxmin_3_fu_236_p3__temp = minmaxmin_3_fu_236_p3 ;
   ap_rst__temp = ap_rst ;
   arr_q0__temp = arr_q0 ;
   tmp_2_fu_216_p2_temp_4__temp = tmp_2_fu_216_p2_temp_4 ;
   ap_done__temp = ap_done ;
   i_cast3_fu_164_p1__temp = i_cast3_fu_164_p1 ;
   minmaxmax_2_fu_244_p3__temp = minmaxmax_2_fu_244_p3 ;
   arr_ce0__temp = arr_ce0 ;
   minmaxmin_1_ph_fu_187_p1__temp = minmaxmin_1_ph_fu_187_p1 ;
   i_cast3_reg_257_temp_1__temp = i_cast3_reg_257_temp_1 ;
   out1_ap_vld__temp = out1_ap_vld ;
   temp01__temp = temp01 ;
   reg_out1__temp = reg_out1 ;
   arr_address1__temp = arr_address1 ;
   tmp_reg_280_temp_3__temp = tmp_reg_280_temp_3 ;
   empty_address1__temp = empty_address1 ;
   minmaxmin_1_reg_142__temp = minmaxmin_1_reg_142 ;
   ap_CS_fsm__temp = ap_CS_fsm ;
   exitcond_fu_204_p2__temp = exitcond_fu_204_p2 ;
   i_cast3_reg_257__temp = i_cast3_reg_257 ;
   i_reg_120__temp = i_reg_120 ;
   mux_out2__temp = mux_out2 ;
   temp11__temp = temp11 ;
   empty_address0__temp = empty_address0 ;
   tmp_3_fu_222_p2__temp = tmp_3_fu_222_p2 ;
   empty_q1__temp = empty_q1 ;
   tmp_2_fu_216_p2__temp = tmp_2_fu_216_p2 ;
   p0__temp = p0 ;
   i_1_cast2_fu_199_p1__temp = i_1_cast2_fu_199_p1 ;
   i_cast3_fu_164_p1_temp_0_temp_2__temp = i_cast3_fu_164_p1_temp_0_temp_2 ;
   minmaxmax_5_minmaxmi_fu_228_p3__temp = minmaxmax_5_minmaxmi_fu_228_p3 ;
   tmp_2_fu_216_p2_temp_6__temp = tmp_2_fu_216_p2_temp_6 ;
   reg_out2__temp = reg_out2 ;
   exitcond1_fu_169_p2__temp = exitcond1_fu_169_p2 ;
   arr_address0__temp = arr_address0 ;
   reg1__temp = reg1 ;
   ap_ready__temp = ap_ready ;
   ap_start__temp = ap_start ;
   i_cast3_fu_164_p1_temp_0__temp = i_cast3_fu_164_p1_temp_0 ;
   arr_q1__temp = arr_q1 ;
   out1__temp = out1 ;
   mux_out_neg1__temp = mux_out_neg1 ;
   temp02__temp = temp02 ;
   temp012__temp = temp012 ;
   empty_we0__temp = empty_we0 ;
   arr_ce1__temp = arr_ce1 ;
   out2_ap_vld__temp = out2_ap_vld ;
   empty_ce1__temp = empty_ce1 ;
   empty_q0__temp = empty_q0 ;
   ap_clk__temp = ap_clk ;
   temp112__temp = temp112 ;
   minmaxmax_1_ph_cast_fu_191_p3__temp = minmaxmax_1_ph_cast_fu_191_p3 ;

       empty_ce0 = 0;
       empty_we0 = 0;
       empty_ce1 = 0;
       arr_ce0 = 0;
       arr_ce1 = 0;
       arr_address1=   ( 1 ) & 4294967295;
    i_cast3_reg_257=   ( ( i_cast3_reg_257__temp  & 127 ) & 4294967295 )  ; 
       if( 1 == ap_CS_fsm_state4)
       {
           tmp_reg_280 =   ( do_twos_complement( ( arr_q0__temp  & 4294967295 )  , 63 )  > do_twos_complement( ( arr_q1__temp  & 4294967295 )  , 63 )  ? 1 : 0 ) ;
       }
    if(!((1 == ap_CS_fsm_state7) && (1 == exitcond_fu_204_p2))){
		ap_done = 0 ; 
	}
    if(!((0 == ap_start) && (1 == ap_CS_fsm_state1))){
		ap_idle = 0 ; 
	}
    if(!((1 == ap_CS_fsm_state7) && (1 == exitcond_fu_204_p2))){
		ap_ready = 0 ; 
	}
    if(!((1 == ap_CS_fsm_state2) && (exitcond1_fu_169_p2 == 1))){
		if(!((1 == ap_CS_fsm_state2) && (exitcond1_fu_169_p2 == 0))){
			arr_address0 = 0 ; 
		}
	}
    if(!(((1 == ap_CS_fsm_state2) && (exitcond1_fu_169_p2 == 0)) || ((1 == ap_CS_fsm_state2) && (exitcond1_fu_169_p2 == 1)))){
		arr_ce0 = 0 ; 
	}
    if(!(1 == ap_CS_fsm_state2)){
		arr_ce1 = 0 ; 
	}
    if(!(1 == ap_CS_fsm_state5)){
		if(!(1 == ap_CS_fsm_state3)){
			empty_address0 = 0 ; 
		}
	}
    if(!(1 == ap_CS_fsm_state7)){
		if(!(1 == ap_CS_fsm_state5)){
			empty_address1 = 0 ; 
		}
	}
    if(!((1 == ap_CS_fsm_state5) || (1 == ap_CS_fsm_state3))){
		empty_ce0 = 0 ; 	
	}
    if(!((1 == ap_CS_fsm_state5) || (1 == ap_CS_fsm_state7))){
		empty_ce1 = 0 ; 
	}
    if(!(1 == ap_CS_fsm_state3)){
		empty_we0 = 0 ; 
	}
    if(!((1 == ap_CS_fsm_state7) && (1 == exitcond_fu_204_p2))){
		out1_ap_vld = 0 ; 
	}
    if(!((1 == ap_CS_fsm_state7) && (1 == exitcond_fu_204_p2))){
		out2_ap_vld = 0 ; 
	}
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
   ap_CS_fsm_state6__temp = ap_CS_fsm_state6 ;
   ap_CS_fsm_state5__temp = ap_CS_fsm_state5 ;
   i_1_reg_131__temp = i_1_reg_131 ;
   i_3_fu_210_p2__temp = i_3_fu_210_p2 ;
   reg2__temp = reg2 ;
   mux_out1__temp = mux_out1 ;
   temp12__temp = temp12 ;
   i_3_reg_314__temp = i_3_reg_314 ;
   out2__temp = out2 ;
   ap_idle__temp = ap_idle ;
   empty_ce0__temp = empty_ce0 ;
   minmaxmax_1_reg_153__temp = minmaxmax_1_reg_153 ;
   ap_NS_fsm__temp = ap_NS_fsm ;
   tmp_3_fu_222_p2_temp_5__temp = tmp_3_fu_222_p2_temp_5 ;
   trigger_in__temp = trigger_in ;
   mux_out_neg2__temp = mux_out_neg2 ;
   i_2_reg_265__temp = i_2_reg_265 ;
   tmp_fu_181_p2__temp = tmp_fu_181_p2 ;
   i_2_fu_175_p2__temp = i_2_fu_175_p2 ;
   tmp_reg_280__temp = tmp_reg_280 ;
   minmaxmin_3_fu_236_p3__temp = minmaxmin_3_fu_236_p3 ;
   ap_rst__temp = ap_rst ;
   arr_q0__temp = arr_q0 ;
   tmp_2_fu_216_p2_temp_4__temp = tmp_2_fu_216_p2_temp_4 ;
   ap_done__temp = ap_done ;
   i_cast3_fu_164_p1__temp = i_cast3_fu_164_p1 ;
   minmaxmax_2_fu_244_p3__temp = minmaxmax_2_fu_244_p3 ;
   arr_ce0__temp = arr_ce0 ;
   minmaxmin_1_ph_fu_187_p1__temp = minmaxmin_1_ph_fu_187_p1 ;
   i_cast3_reg_257_temp_1__temp = i_cast3_reg_257_temp_1 ;
   out1_ap_vld__temp = out1_ap_vld ;
   temp01__temp = temp01 ;
   reg_out1__temp = reg_out1 ;
   arr_address1__temp = arr_address1 ;
   tmp_reg_280_temp_3__temp = tmp_reg_280_temp_3 ;
   empty_address1__temp = empty_address1 ;
   minmaxmin_1_reg_142__temp = minmaxmin_1_reg_142 ;
   ap_CS_fsm__temp = ap_CS_fsm ;
   exitcond_fu_204_p2__temp = exitcond_fu_204_p2 ;
   i_cast3_reg_257__temp = i_cast3_reg_257 ;
   i_reg_120__temp = i_reg_120 ;
   mux_out2__temp = mux_out2 ;
   temp11__temp = temp11 ;
   empty_address0__temp = empty_address0 ;
   tmp_3_fu_222_p2__temp = tmp_3_fu_222_p2 ;
   empty_q1__temp = empty_q1 ;
   tmp_2_fu_216_p2__temp = tmp_2_fu_216_p2 ;
   p0__temp = p0 ;
   i_1_cast2_fu_199_p1__temp = i_1_cast2_fu_199_p1 ;
   i_cast3_fu_164_p1_temp_0_temp_2__temp = i_cast3_fu_164_p1_temp_0_temp_2 ;
   minmaxmax_5_minmaxmi_fu_228_p3__temp = minmaxmax_5_minmaxmi_fu_228_p3 ;
   tmp_2_fu_216_p2_temp_6__temp = tmp_2_fu_216_p2_temp_6 ;
   reg_out2__temp = reg_out2 ;
   exitcond1_fu_169_p2__temp = exitcond1_fu_169_p2 ;
   arr_address0__temp = arr_address0 ;
   reg1__temp = reg1 ;
   ap_ready__temp = ap_ready ;
   ap_start__temp = ap_start ;
   i_cast3_fu_164_p1_temp_0__temp = i_cast3_fu_164_p1_temp_0 ;
   arr_q1__temp = arr_q1 ;
   out1__temp = out1 ;
   mux_out_neg1__temp = mux_out_neg1 ;
   temp02__temp = temp02 ;
   temp012__temp = temp012 ;
   empty_we0__temp = empty_we0 ;
   arr_ce1__temp = arr_ce1 ;
   out2_ap_vld__temp = out2_ap_vld ;
   empty_ce1__temp = empty_ce1 ;
   empty_q0__temp = empty_q0 ;
   ap_clk__temp = ap_clk ;
   temp112__temp = temp112 ;
   minmaxmax_1_ph_cast_fu_191_p3__temp = minmaxmax_1_ph_cast_fu_191_p3 ;

       empty_ce0 = 0;
       empty_we0 = 0;
       empty_ce1 = 0;
       arr_ce0 = 0;
       arr_ce1 = 0;
       arr_address1=   ( 1 ) & 4294967295;
    i_cast3_reg_257=   ( ( i_cast3_reg_257__temp  & 127 ) & 4294967295 )  ; 
               //exitcond_fu_204_p2 =   ( i_1_reg_131__temp  == 5 ? 1 :  0 ) ;
               trigger_in=  ( trigger_in__temp  & 1 ) ;
       if( ( 1 == ap_CS_fsm_state5 ) && ( trigger_in__temp  == 1 ))
       {
           reg1 =   ~ (  (  ( (  ( ( trigger_in__temp  & 1 )  == 1 ? 1 :  0 )  &  ( 1 == ap_CS_fsm_state5__temp  ? 1 : 0 )  ) & 1 )  == 1 ?  ( reg1__temp  & 4294967295 )  :  i_reg_120__temp  )  ) ;
       }
    if(!((1 == ap_CS_fsm_state7) && (1 == exitcond_fu_204_p2))){
		ap_done = 0 ; 
	}
    if(!((0 == ap_start) && (1 == ap_CS_fsm_state1))){
		ap_idle = 0 ; 
	}
    if(!((1 == ap_CS_fsm_state7) && (1 == exitcond_fu_204_p2))){
		ap_ready = 0 ; 
	}
    if(!((1 == ap_CS_fsm_state2) && (exitcond1_fu_169_p2 == 1))){
		if(!((1 == ap_CS_fsm_state2) && (exitcond1_fu_169_p2 == 0))){
			arr_address0 = 0 ; 
		}
	}
    if(!(((1 == ap_CS_fsm_state2) && (exitcond1_fu_169_p2 == 0)) || ((1 == ap_CS_fsm_state2) && (exitcond1_fu_169_p2 == 1)))){
		arr_ce0 = 0 ; 
	}
    if(!(1 == ap_CS_fsm_state2)){
		arr_ce1 = 0 ; 
	}
    if(!(1 == ap_CS_fsm_state5)){
		if(!(1 == ap_CS_fsm_state3)){
			empty_address0 = 0 ; 
		}
	}
    if(!(1 == ap_CS_fsm_state7)){
		if(!(1 == ap_CS_fsm_state5)){
			empty_address1 = 0 ; 
		}
	}
    if(!((1 == ap_CS_fsm_state5) || (1 == ap_CS_fsm_state3))){
		empty_ce0 = 0 ; 
	}
    if(!((1 == ap_CS_fsm_state5) || (1 == ap_CS_fsm_state7))){
		empty_ce1 = 0 ; 
	}
    if(!(1 == ap_CS_fsm_state3)){
		empty_we0 = 0 ; 
	}
    if(!((1 == ap_CS_fsm_state7) && (1 == exitcond_fu_204_p2))){
		out1_ap_vld = 0 ; 
	}
    if(!((1 == ap_CS_fsm_state7) && (1 == exitcond_fu_204_p2))){
		out2_ap_vld = 0 ; 
	}
       if(1 == ap_CS_fsm_state5)
       {
           empty_address0=   ( tmp_reg_280__temp  & 4294967295 ) ;
       }
       if(1 == ap_CS_fsm_state5)
       {
           empty_address1 =   (  ( ( tmp_reg_280__temp  & 1 ) & 18446744073709551615 )  == 1 ? 0 :  1 ) ;
       }
       if((1 == ap_CS_fsm_state5) || (1 == ap_CS_fsm_state3))
       {
           empty_ce0=  1;
       }
       if((1 == ap_CS_fsm_state5) || (1 == ap_CS_fsm_state7))
       {
           empty_ce1=  1;
       }
       if(empty_ce0){
           if(empty_we0){
              empty_ram[empty_address0]=arr_q0;
              empty_q0=arr_q0;
           }
       }
       if(empty_ce1){
          empty_q1=empty_ram[empty_address1];
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
   ap_CS_fsm_state6__temp = ap_CS_fsm_state6 ;
   ap_CS_fsm_state5__temp = ap_CS_fsm_state5 ;
   i_1_reg_131__temp = i_1_reg_131 ;
   i_3_fu_210_p2__temp = i_3_fu_210_p2 ;
   reg2__temp = reg2 ;
   mux_out1__temp = mux_out1 ;
   temp12__temp = temp12 ;
   i_3_reg_314__temp = i_3_reg_314 ;
   out2__temp = out2 ;
   ap_idle__temp = ap_idle ;
   empty_ce0__temp = empty_ce0 ;
   minmaxmax_1_reg_153__temp = minmaxmax_1_reg_153 ;
   ap_NS_fsm__temp = ap_NS_fsm ;
   tmp_3_fu_222_p2_temp_5__temp = tmp_3_fu_222_p2_temp_5 ;
   trigger_in__temp = trigger_in ;
   mux_out_neg2__temp = mux_out_neg2 ;
   i_2_reg_265__temp = i_2_reg_265 ;
   tmp_fu_181_p2__temp = tmp_fu_181_p2 ;
   i_2_fu_175_p2__temp = i_2_fu_175_p2 ;
   tmp_reg_280__temp = tmp_reg_280 ;
   minmaxmin_3_fu_236_p3__temp = minmaxmin_3_fu_236_p3 ;
   ap_rst__temp = ap_rst ;
   arr_q0__temp = arr_q0 ;
   tmp_2_fu_216_p2_temp_4__temp = tmp_2_fu_216_p2_temp_4 ;
   ap_done__temp = ap_done ;
   i_cast3_fu_164_p1__temp = i_cast3_fu_164_p1 ;
   minmaxmax_2_fu_244_p3__temp = minmaxmax_2_fu_244_p3 ;
   arr_ce0__temp = arr_ce0 ;
   minmaxmin_1_ph_fu_187_p1__temp = minmaxmin_1_ph_fu_187_p1 ;
   i_cast3_reg_257_temp_1__temp = i_cast3_reg_257_temp_1 ;
   out1_ap_vld__temp = out1_ap_vld ;
   temp01__temp = temp01 ;
   reg_out1__temp = reg_out1 ;
   arr_address1__temp = arr_address1 ;
   tmp_reg_280_temp_3__temp = tmp_reg_280_temp_3 ;
   empty_address1__temp = empty_address1 ;
   minmaxmin_1_reg_142__temp = minmaxmin_1_reg_142 ;
   ap_CS_fsm__temp = ap_CS_fsm ;
   exitcond_fu_204_p2__temp = exitcond_fu_204_p2 ;
   i_cast3_reg_257__temp = i_cast3_reg_257 ;
   i_reg_120__temp = i_reg_120 ;
   mux_out2__temp = mux_out2 ;
   temp11__temp = temp11 ;
   empty_address0__temp = empty_address0 ;
   tmp_3_fu_222_p2__temp = tmp_3_fu_222_p2 ;
   empty_q1__temp = empty_q1 ;
   tmp_2_fu_216_p2__temp = tmp_2_fu_216_p2 ;
   p0__temp = p0 ;
   i_1_cast2_fu_199_p1__temp = i_1_cast2_fu_199_p1 ;
   i_cast3_fu_164_p1_temp_0_temp_2__temp = i_cast3_fu_164_p1_temp_0_temp_2 ;
   minmaxmax_5_minmaxmi_fu_228_p3__temp = minmaxmax_5_minmaxmi_fu_228_p3 ;
   tmp_2_fu_216_p2_temp_6__temp = tmp_2_fu_216_p2_temp_6 ;
   reg_out2__temp = reg_out2 ;
   exitcond1_fu_169_p2__temp = exitcond1_fu_169_p2 ;
   arr_address0__temp = arr_address0 ;
   reg1__temp = reg1 ;
   ap_ready__temp = ap_ready ;
   ap_start__temp = ap_start ;
   i_cast3_fu_164_p1_temp_0__temp = i_cast3_fu_164_p1_temp_0 ;
   arr_q1__temp = arr_q1 ;
   out1__temp = out1 ;
   mux_out_neg1__temp = mux_out_neg1 ;
   temp02__temp = temp02 ;
   temp012__temp = temp012 ;
   empty_we0__temp = empty_we0 ;
   arr_ce1__temp = arr_ce1 ;
   out2_ap_vld__temp = out2_ap_vld ;
   empty_ce1__temp = empty_ce1 ;
   empty_q0__temp = empty_q0 ;
   ap_clk__temp = ap_clk ;
   temp112__temp = temp112 ;
   minmaxmax_1_ph_cast_fu_191_p3__temp = minmaxmax_1_ph_cast_fu_191_p3 ;

       empty_ce0 = 0;
       empty_we0 = 0;
       empty_ce1 = 0;
       arr_ce0 = 0;
       arr_ce1 = 0;
       arr_address1=   ( 1 ) & 4294967295;
    i_cast3_reg_257=   ( ( i_cast3_reg_257__temp  & 127 ) & 4294967295 )  ; 
               //exitcond_fu_204_p2 =   ( i_1_reg_131__temp  == 5 ? 1 :  0 ) ;
               trigger_in=  ( trigger_in__temp  & 1 ) ;
       if( 1 == ap_CS_fsm_state6)
       {
           i_1_reg_131=  0;
       }
       exitcond_fu_204_p2 =   ( i_1_reg_131  == 5 ? 1 :  0 ) ;
       if( 1 == ap_CS_fsm_state6)
       {
           minmaxmax_1_reg_153=  empty_q1__temp ;
       }
       if( 1 == ap_CS_fsm_state6)
       {
           minmaxmin_1_reg_142=  empty_q0__temp ;
       }
       if( ( 1 == ap_CS_fsm_state6 ) && ( trigger_in__temp  == 1 ))
       {
           reg2 =   ~ (  (  ( (  ( ( trigger_in__temp  & 1 )  == 1 ? 1 :  0 )  &  ( 1 == ap_CS_fsm_state6__temp  ? 1 : 0 )  ) & 1 )  == 1 ?  ( reg2__temp  & 4294967295 )  :  i_1_reg_131__temp  )  ) ;
       }
    if(!((1 == ap_CS_fsm_state7) && (1 == exitcond_fu_204_p2))){
		ap_done = 0 ; 
	}
    if(!((0 == ap_start) && (1 == ap_CS_fsm_state1))){
		ap_idle = 0 ; 
	}
    if(!((1 == ap_CS_fsm_state7) && (1 == exitcond_fu_204_p2))){
		ap_ready = 0 ; 
	}
    if(!((1 == ap_CS_fsm_state2) && (exitcond1_fu_169_p2 == 1))){
		if(!((1 == ap_CS_fsm_state2) && (exitcond1_fu_169_p2 == 0))){
			arr_address0 = 0 ; 
		}
	}
    if(!(((1 == ap_CS_fsm_state2) && (exitcond1_fu_169_p2 == 0)) || ((1 == ap_CS_fsm_state2) && (exitcond1_fu_169_p2 == 1)))){
		arr_ce0 = 0 ; 
	}
    if(!(1 == ap_CS_fsm_state2)){
		arr_ce1 = 0 ; 
	}
    if(!(1 == ap_CS_fsm_state5)){
		if(!(1 == ap_CS_fsm_state3)){
			empty_address0 = 0 ; 
		}
	}
    if(!(1 == ap_CS_fsm_state7)){
		if(!(1 == ap_CS_fsm_state5)){
			empty_address1 = 0 ; 
		}
	}
    if(!((1 == ap_CS_fsm_state5) || (1 == ap_CS_fsm_state3))){
		empty_ce0 = 0 ; 
	}
    if(!((1 == ap_CS_fsm_state5) || (1 == ap_CS_fsm_state7))){
		empty_ce1 = 0 ; 
	}
    if(!(1 == ap_CS_fsm_state3)){
		empty_we0 = 0 ; 
	}
    if(!((1 == ap_CS_fsm_state7) && (1 == exitcond_fu_204_p2))){
		out1_ap_vld = 0 ; 
	}
    if(!((1 == ap_CS_fsm_state7) && (1 == exitcond_fu_204_p2))){
		out2_ap_vld = 0 ; 
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
   ap_CS_fsm_state6__temp = ap_CS_fsm_state6 ;
   ap_CS_fsm_state5__temp = ap_CS_fsm_state5 ;
   i_1_reg_131__temp = i_1_reg_131 ;
   i_3_fu_210_p2__temp = i_3_fu_210_p2 ;
   reg2__temp = reg2 ;
   mux_out1__temp = mux_out1 ;
   temp12__temp = temp12 ;
   i_3_reg_314__temp = i_3_reg_314 ;
   out2__temp = out2 ;
   ap_idle__temp = ap_idle ;
   empty_ce0__temp = empty_ce0 ;
   minmaxmax_1_reg_153__temp = minmaxmax_1_reg_153 ;
   ap_NS_fsm__temp = ap_NS_fsm ;
   tmp_3_fu_222_p2_temp_5__temp = tmp_3_fu_222_p2_temp_5 ;
   trigger_in__temp = trigger_in ;
   mux_out_neg2__temp = mux_out_neg2 ;
   i_2_reg_265__temp = i_2_reg_265 ;
   tmp_fu_181_p2__temp = tmp_fu_181_p2 ;
   i_2_fu_175_p2__temp = i_2_fu_175_p2 ;
   tmp_reg_280__temp = tmp_reg_280 ;
   minmaxmin_3_fu_236_p3__temp = minmaxmin_3_fu_236_p3 ;
   ap_rst__temp = ap_rst ;
   arr_q0__temp = arr_q0 ;
   tmp_2_fu_216_p2_temp_4__temp = tmp_2_fu_216_p2_temp_4 ;
   ap_done__temp = ap_done ;
   i_cast3_fu_164_p1__temp = i_cast3_fu_164_p1 ;
   minmaxmax_2_fu_244_p3__temp = minmaxmax_2_fu_244_p3 ;
   arr_ce0__temp = arr_ce0 ;
   minmaxmin_1_ph_fu_187_p1__temp = minmaxmin_1_ph_fu_187_p1 ;
   i_cast3_reg_257_temp_1__temp = i_cast3_reg_257_temp_1 ;
   out1_ap_vld__temp = out1_ap_vld ;
   temp01__temp = temp01 ;
   reg_out1__temp = reg_out1 ;
   arr_address1__temp = arr_address1 ;
   tmp_reg_280_temp_3__temp = tmp_reg_280_temp_3 ;
   empty_address1__temp = empty_address1 ;
   minmaxmin_1_reg_142__temp = minmaxmin_1_reg_142 ;
   ap_CS_fsm__temp = ap_CS_fsm ;
   exitcond_fu_204_p2__temp = exitcond_fu_204_p2 ;
   i_cast3_reg_257__temp = i_cast3_reg_257 ;
   i_reg_120__temp = i_reg_120 ;
   mux_out2__temp = mux_out2 ;
   temp11__temp = temp11 ;
   empty_address0__temp = empty_address0 ;
   tmp_3_fu_222_p2__temp = tmp_3_fu_222_p2 ;
   empty_q1__temp = empty_q1 ;
   tmp_2_fu_216_p2__temp = tmp_2_fu_216_p2 ;
   p0__temp = p0 ;
   i_1_cast2_fu_199_p1__temp = i_1_cast2_fu_199_p1 ;
   i_cast3_fu_164_p1_temp_0_temp_2__temp = i_cast3_fu_164_p1_temp_0_temp_2 ;
   minmaxmax_5_minmaxmi_fu_228_p3__temp = minmaxmax_5_minmaxmi_fu_228_p3 ;
   tmp_2_fu_216_p2_temp_6__temp = tmp_2_fu_216_p2_temp_6 ;
   reg_out2__temp = reg_out2 ;
   exitcond1_fu_169_p2__temp = exitcond1_fu_169_p2 ;
   arr_address0__temp = arr_address0 ;
   reg1__temp = reg1 ;
   ap_ready__temp = ap_ready ;
   ap_start__temp = ap_start ;
   i_cast3_fu_164_p1_temp_0__temp = i_cast3_fu_164_p1_temp_0 ;
   arr_q1__temp = arr_q1 ;
   out1__temp = out1 ;
   mux_out_neg1__temp = mux_out_neg1 ;
   temp02__temp = temp02 ;
   temp012__temp = temp012 ;
   empty_we0__temp = empty_we0 ;
   arr_ce1__temp = arr_ce1 ;
   out2_ap_vld__temp = out2_ap_vld ;
   empty_ce1__temp = empty_ce1 ;
   empty_q0__temp = empty_q0 ;
   ap_clk__temp = ap_clk ;
   temp112__temp = temp112 ;
   minmaxmax_1_ph_cast_fu_191_p3__temp = minmaxmax_1_ph_cast_fu_191_p3 ;

       empty_ce0 = 0;
       empty_we0 = 0;
       empty_ce1 = 0;
       arr_ce0 = 0;
       arr_ce1 = 0;
       arr_address1=   ( 1 ) & 4294967295;
    i_cast3_reg_257=   ( ( i_cast3_reg_257__temp  & 127 ) & 4294967295 )  ; 
               //exitcond_fu_204_p2 =   ( i_1_reg_131__temp  == 5 ? 1 :  0 ) ;
   if( ( ( 1 == ap_CS_fsm_state7 ) && ( 1 == exitcond_fu_204_p2__temp  ) ) == 1){
       if( ( 1 == ap_CS_fsm_state7 ) && ( 0 == exitcond_fu_204_p2__temp  ))
       {
           i_3_reg_314 =   ( (  (  ( (  ( ( trigger_in__temp  & 1 )  == 1 ? 1 :  0 )  &  ( 1 == ap_CS_fsm_state6__temp  ? 1 : 0 )  ) & 1 )  == 1 ?  ( reg2__temp  & 4294967295 )  :  i_1_reg_131__temp  )  + 1 ) & 127 ) ;
       }
    if(!((1 == ap_CS_fsm_state7) && (1 == exitcond_fu_204_p2))){
		ap_done = 0 ; 
	}
    if(!((0 == ap_start) && (1 == ap_CS_fsm_state1))){
		ap_idle = 0 ; 
	}
    if(!((1 == ap_CS_fsm_state7) && (1 == exitcond_fu_204_p2))){
		ap_ready = 0 ; 
	}
    if(!((1 == ap_CS_fsm_state2) && (exitcond1_fu_169_p2 == 1))){
		if(!((1 == ap_CS_fsm_state2) && (exitcond1_fu_169_p2 == 0))){
			arr_address0 = 0 ; 
		}
	}
    if(!(((1 == ap_CS_fsm_state2) && (exitcond1_fu_169_p2 == 0)) || ((1 == ap_CS_fsm_state2) && (exitcond1_fu_169_p2 == 1)))){
		arr_ce0 = 0 ; 
	}
    if(!(1 == ap_CS_fsm_state2)){
		arr_ce1 = 0 ; 
	}
    if(!(1 == ap_CS_fsm_state5)){
		if(!(1 == ap_CS_fsm_state3)){
			empty_address0 = 0 ; 
		}
	}
    if(!(1 == ap_CS_fsm_state7)){
		if(!(1 == ap_CS_fsm_state5)){
			empty_address1 = 0 ; 
		}
	}
    if(!((1 == ap_CS_fsm_state5) || (1 == ap_CS_fsm_state3))){
		empty_ce0 = 0 ; 
	}
    if(!((1 == ap_CS_fsm_state5) || (1 == ap_CS_fsm_state7))){
		empty_ce1 = 0 ; 
	}
    if(!(1 == ap_CS_fsm_state3)){
		empty_we0 = 0 ; 
	}
    if(!((1 == ap_CS_fsm_state7) && (1 == exitcond_fu_204_p2))){
		out1_ap_vld = 0 ; 
	}
    if(!((1 == ap_CS_fsm_state7) && (1 == exitcond_fu_204_p2))){
		out2_ap_vld = 0 ; 
	}
               //exitcond_fu_204_p2 =   ( i_1_reg_131__temp  == 5 ? 1 :  0 ) ;
       if((1 == ap_CS_fsm_state7) && (1 == exitcond_fu_204_p2))
       {
           ap_done=  1;
            if(ap_done==1){
            }
       }
       if((1 == ap_CS_fsm_state7) && (1 == exitcond_fu_204_p2))
       {
           ap_ready=  1;
       }
       if(1 == ap_CS_fsm_state7)
       {
           empty_address1=   ( i_1_reg_131__temp  & 4294967295 ) ;
       }
       if((1 == ap_CS_fsm_state5) || (1 == ap_CS_fsm_state7))
       {
           empty_ce1=  1;
       }
       if((1 == ap_CS_fsm_state7) && (1 == exitcond_fu_204_p2))
       {
           out1_ap_vld=  1;
               out1=   ( minmaxmax_1_reg_153__temp  & 4294967295 ) ;
               out2=   ( minmaxmin_1_reg_142__temp  & 4294967295 ) ;
       }
       if((1 == ap_CS_fsm_state7) && (1 == exitcond_fu_204_p2))
       {
           out2_ap_vld=  1;
               out1=   ( minmaxmax_1_reg_153__temp  & 4294967295 ) ;
               out2=   ( minmaxmin_1_reg_142__temp  & 4294967295 ) ;
       }
       if(empty_ce1){
          empty_q1=empty_ram[empty_address1];
       }
       if(ap_done==1){
           goto end;
       }
       goto ap_ST_fsm_state1;
   }
   if( ( ( 1 == ap_CS_fsm_state7 ) && ( 1 == exitcond_fu_204_p2__temp  ) ) == 0){
       if( ( 1 == ap_CS_fsm_state7 ) && ( 0 == exitcond_fu_204_p2__temp  ))
       {
               i_3_reg_314 =   ( (  (  ( (  ( ( trigger_in__temp  & 1 )  == 1 ? 1 :  0 )  &  ( 1 == ap_CS_fsm_state6__temp  ? 1 : 0 )  ) & 1 )  == 1 ?  ( reg2__temp  & 4294967295 )  :  i_1_reg_131__temp  )  + 1 ) & 127 ) ;
       }
    if(!((1 == ap_CS_fsm_state7) && (1 == exitcond_fu_204_p2))){
		ap_done = 0 ; 
	}
    if(!((0 == ap_start) && (1 == ap_CS_fsm_state1))){
		ap_idle = 0 ; 
	}
    if(!((1 == ap_CS_fsm_state7) && (1 == exitcond_fu_204_p2))){
		ap_ready = 0 ; 
	}
    if(!((1 == ap_CS_fsm_state2) && (exitcond1_fu_169_p2 == 1))){
		if(!((1 == ap_CS_fsm_state2) && (exitcond1_fu_169_p2 == 0))){
			arr_address0 = 0 ; 
		}
	}
    if(!(((1 == ap_CS_fsm_state2) && (exitcond1_fu_169_p2 == 0)) || ((1 == ap_CS_fsm_state2) && (exitcond1_fu_169_p2 == 1)))){
		arr_ce0 = 0 ; 
	}
    if(!(1 == ap_CS_fsm_state2)){
		arr_ce1 = 0 ; 
	}
    if(!(1 == ap_CS_fsm_state5)){
		if(!(1 == ap_CS_fsm_state3)){
			empty_address0 = 0 ; 
		}
	}
    if(!(1 == ap_CS_fsm_state7)){
		if(!(1 == ap_CS_fsm_state5)){
			empty_address1 = 0 ; 
		}
	}
    if(!((1 == ap_CS_fsm_state5) || (1 == ap_CS_fsm_state3))){
		empty_ce0 = 0 ; 
	}
    if(!((1 == ap_CS_fsm_state5) || (1 == ap_CS_fsm_state7))){
		empty_ce1 = 0 ; 
	}
    if(!(1 == ap_CS_fsm_state3)){
		empty_we0 = 0 ; 
	}
    if(!((1 == ap_CS_fsm_state7) && (1 == exitcond_fu_204_p2))){
		out1_ap_vld = 0 ; 	
	}
    if(!((1 == ap_CS_fsm_state7) && (1 == exitcond_fu_204_p2))){
		out2_ap_vld = 0 ; 
	}
               //exitcond_fu_204_p2 =   ( i_1_reg_131__temp  == 5 ? 1 :  0 ) ;
       if((1 == ap_CS_fsm_state7) && (1 == exitcond_fu_204_p2))
       {
           ap_done=  1;
            if(ap_done==1){
            }
       }
       if((1 == ap_CS_fsm_state7) && (1 == exitcond_fu_204_p2))
       {
           ap_ready=  1;
       }
       if(1 == ap_CS_fsm_state7)
       {
           empty_address1=   ( i_1_reg_131__temp  & 4294967295 ) ;
       }
       if((1 == ap_CS_fsm_state5) || (1 == ap_CS_fsm_state7))
       {
           empty_ce1=  1;
       }
       if((1 == ap_CS_fsm_state7) && (1 == exitcond_fu_204_p2))
       {
           out1_ap_vld=  1;
               out1=   ( minmaxmax_1_reg_153__temp  & 4294967295 ) ;
               out2=   ( minmaxmin_1_reg_142__temp  & 4294967295 ) ;
       }
       if((1 == ap_CS_fsm_state7) && (1 == exitcond_fu_204_p2))
       {
           out2_ap_vld=  1;
               out1=   ( minmaxmax_1_reg_153__temp  & 4294967295 ) ;
               out2=   ( minmaxmin_1_reg_142__temp  & 4294967295 ) ;
       }
       if(empty_ce1){
          empty_q1=empty_ram[empty_address1];
       }
       goto ap_ST_fsm_state8;
   }

   ap_ST_fsm_state8:

    ap_CS_fsm_state1 = 0;
    ap_CS_fsm_state2 = 0;
    ap_CS_fsm_state3 = 0;
    ap_CS_fsm_state4 = 0;
    ap_CS_fsm_state5 = 0;
    ap_CS_fsm_state6 = 0;
    ap_CS_fsm_state7 = 0;
    ap_CS_fsm_state8 = 1;
   ap_CS_fsm_state6__temp = ap_CS_fsm_state6 ;
   ap_CS_fsm_state5__temp = ap_CS_fsm_state5 ;
   i_1_reg_131__temp = i_1_reg_131 ;
   i_3_fu_210_p2__temp = i_3_fu_210_p2 ;
   reg2__temp = reg2 ;
   mux_out1__temp = mux_out1 ;
   temp12__temp = temp12 ;
   i_3_reg_314__temp = i_3_reg_314 ;
   out2__temp = out2 ;
   ap_idle__temp = ap_idle ;
   empty_ce0__temp = empty_ce0 ;
   minmaxmax_1_reg_153__temp = minmaxmax_1_reg_153 ;
   ap_NS_fsm__temp = ap_NS_fsm ;
   tmp_3_fu_222_p2_temp_5__temp = tmp_3_fu_222_p2_temp_5 ;
   trigger_in__temp = trigger_in ;
   mux_out_neg2__temp = mux_out_neg2 ;
   i_2_reg_265__temp = i_2_reg_265 ;
   tmp_fu_181_p2__temp = tmp_fu_181_p2 ;
   i_2_fu_175_p2__temp = i_2_fu_175_p2 ;
   tmp_reg_280__temp = tmp_reg_280 ;
   minmaxmin_3_fu_236_p3__temp = minmaxmin_3_fu_236_p3 ;
   ap_rst__temp = ap_rst ;
   arr_q0__temp = arr_q0 ;
   tmp_2_fu_216_p2_temp_4__temp = tmp_2_fu_216_p2_temp_4 ;
   ap_done__temp = ap_done ;
   i_cast3_fu_164_p1__temp = i_cast3_fu_164_p1 ;
   minmaxmax_2_fu_244_p3__temp = minmaxmax_2_fu_244_p3 ;
   arr_ce0__temp = arr_ce0 ;
   minmaxmin_1_ph_fu_187_p1__temp = minmaxmin_1_ph_fu_187_p1 ;
   i_cast3_reg_257_temp_1__temp = i_cast3_reg_257_temp_1 ;
   out1_ap_vld__temp = out1_ap_vld ;
   temp01__temp = temp01 ;
   reg_out1__temp = reg_out1 ;
   arr_address1__temp = arr_address1 ;
   tmp_reg_280_temp_3__temp = tmp_reg_280_temp_3 ;
   empty_address1__temp = empty_address1 ;
   minmaxmin_1_reg_142__temp = minmaxmin_1_reg_142 ;
   ap_CS_fsm__temp = ap_CS_fsm ;
   exitcond_fu_204_p2__temp = exitcond_fu_204_p2 ;
   i_cast3_reg_257__temp = i_cast3_reg_257 ;
   i_reg_120__temp = i_reg_120 ;
   mux_out2__temp = mux_out2 ;
   temp11__temp = temp11 ;
   empty_address0__temp = empty_address0 ;
   tmp_3_fu_222_p2__temp = tmp_3_fu_222_p2 ;
   empty_q1__temp = empty_q1 ;
   tmp_2_fu_216_p2__temp = tmp_2_fu_216_p2 ;
   p0__temp = p0 ;
   i_1_cast2_fu_199_p1__temp = i_1_cast2_fu_199_p1 ;
   i_cast3_fu_164_p1_temp_0_temp_2__temp = i_cast3_fu_164_p1_temp_0_temp_2 ;
   minmaxmax_5_minmaxmi_fu_228_p3__temp = minmaxmax_5_minmaxmi_fu_228_p3 ;
   tmp_2_fu_216_p2_temp_6__temp = tmp_2_fu_216_p2_temp_6 ;
   reg_out2__temp = reg_out2 ;
   exitcond1_fu_169_p2__temp = exitcond1_fu_169_p2 ;
   arr_address0__temp = arr_address0 ;
   reg1__temp = reg1 ;
   ap_ready__temp = ap_ready ;
   ap_start__temp = ap_start ;
   i_cast3_fu_164_p1_temp_0__temp = i_cast3_fu_164_p1_temp_0 ;
   arr_q1__temp = arr_q1 ;
   out1__temp = out1 ;
   mux_out_neg1__temp = mux_out_neg1 ;
   temp02__temp = temp02 ;
   temp012__temp = temp012 ;
   empty_we0__temp = empty_we0 ;
   arr_ce1__temp = arr_ce1 ;
   out2_ap_vld__temp = out2_ap_vld ;
   empty_ce1__temp = empty_ce1 ;
   empty_q0__temp = empty_q0 ;
   ap_clk__temp = ap_clk ;
   temp112__temp = temp112 ;
   minmaxmax_1_ph_cast_fu_191_p3__temp = minmaxmax_1_ph_cast_fu_191_p3 ;

       empty_ce0 = 0;
       empty_we0 = 0;
       empty_ce1 = 0;
       arr_ce0 = 0;
       arr_ce1 = 0;
       arr_address1=   ( 1 ) & 4294967295;
    i_cast3_reg_257=   ( ( i_cast3_reg_257__temp  & 127 ) & 4294967295 )  ; 
       if( 1 == ap_CS_fsm_state8)
       {
           i_1_reg_131=  i_3_reg_314__temp ;
       }
       exitcond_fu_204_p2 =   ( i_1_reg_131  == 5 ? 1 :  0 ) ;
       if( 1 == ap_CS_fsm_state8)
       {
           minmaxmax_1_reg_153 =   (  ( (  ( do_twos_complement( empty_q1__temp  , 63 )  > do_twos_complement( minmaxmax_1_reg_153__temp  , 63 )  ? 1 : 0 )  & 1 ) & 18446744073709551615 )  == 1 ? empty_q1__temp  :  minmaxmax_1_reg_153__temp  ) ;
       }
       if( 1 == ap_CS_fsm_state8)
       {
           minmaxmin_1_reg_142 =   (  ( (  ( do_twos_complement( empty_q1__temp  , 63 )  > do_twos_complement( minmaxmin_1_reg_142__temp  , 63 )  ? 1 : 0 )  & 1 ) & 18446744073709551615 )  == 1 ? minmaxmin_1_reg_142__temp  :   (  ( (  ( do_twos_complement( empty_q1__temp  , 63 )  < do_twos_complement( minmaxmin_1_reg_142__temp  , 63 )  ? 1 : 0 )  & 1 ) & 18446744073709551615 )  == 1 ? empty_q1__temp  :  minmaxmin_1_reg_142__temp  )  ) ;
       }
    if(!((1 == ap_CS_fsm_state7) && (1 == exitcond_fu_204_p2))){
		ap_done = 0 ; 
	}
    if(!((0 == ap_start) && (1 == ap_CS_fsm_state1))){
		ap_idle = 0 ; 
	}
    if(!((1 == ap_CS_fsm_state7) && (1 == exitcond_fu_204_p2))){
		ap_ready = 0 ; 
	}
    if(!((1 == ap_CS_fsm_state2) && (exitcond1_fu_169_p2 == 1))){
		if(!((1 == ap_CS_fsm_state2) && (exitcond1_fu_169_p2 == 0))){
			arr_address0 = 0 ; 
		}
	}
    if(!(((1 == ap_CS_fsm_state2) && (exitcond1_fu_169_p2 == 0)) || ((1 == ap_CS_fsm_state2) && (exitcond1_fu_169_p2 == 1)))){
		arr_ce0 = 0 ; 
	}
    if(!(1 == ap_CS_fsm_state2)){
		arr_ce1 = 0 ; 
	}
    if(!(1 == ap_CS_fsm_state5)){
		if(!(1 == ap_CS_fsm_state3)){
			empty_address0 = 0 ; 
		}
	}
    if(!(1 == ap_CS_fsm_state7)){
		if(!(1 == ap_CS_fsm_state5)){
			empty_address1 = 0 ; 
		}
	}
    if(!((1 == ap_CS_fsm_state5) || (1 == ap_CS_fsm_state3))){
		empty_ce0 = 0 ; 
	}
    if(!((1 == ap_CS_fsm_state5) || (1 == ap_CS_fsm_state7))){
		empty_ce1 = 0 ; 
	}
    if(!(1 == ap_CS_fsm_state3)){
		empty_we0 = 0 ; 
	}
    if(!((1 == ap_CS_fsm_state7) && (1 == exitcond_fu_204_p2))){
		out1_ap_vld = 0 ; 
	}
    if(!((1 == ap_CS_fsm_state7) && (1 == exitcond_fu_204_p2))){
		out2_ap_vld = 0 ; 
	}
       goto ap_ST_fsm_state7;
   end:
    *ap_clk__1=ap_clk;
    *ap_done__1=ap_done;
    *ap_idle__1=ap_idle;
    *ap_ready__1=ap_ready;
    *ap_rst__1=ap_rst;
    *ap_start__1=ap_start;
    *arr_address0__1=arr_address0;
    *arr_address1__1=arr_address1;
    *arr_ce0__1=arr_ce0;
    *arr_ce1__1=arr_ce1;
    *arr_q0__1=arr_q0;
    *arr_q1__1=arr_q1;
    *out1__1=out1;
    *out1_ap_vld__1=out1_ap_vld;
    *out2__1=out2;
    *out2_ap_vld__1=out2_ap_vld;
    *p0__1=p0;
    *trigger_in__1=trigger_in;
       return;
}

int main()
{
	unsigned long long int ap_clk__1=0;
	unsigned long long int ap_done__1=0;
	unsigned long long int ap_idle__1=0;
	unsigned long long int ap_ready__1=0;
	unsigned long long int ap_rst__1=0;
	unsigned long long int ap_start__1=1;
	unsigned long long int arr_address0__1=0;
	unsigned long long int arr_ce0__1=0;
	unsigned long long int arr_q0__1=0;
	unsigned long long int out1__1=0;
	unsigned long long int out1_ap_vld__1=0;
	unsigned long long int out2__1=0;
	unsigned long long int out2_ap_vld__1=0;
	unsigned long long int size__1=5;
	unsigned long long int arr_address1__1=0;
	unsigned long long int arr_ce1__1=0;
	unsigned long long int arr_q1__1=0;
	unsigned long long int p0__1=0;
	unsigned long long int trigger_in__1=1;
	long long int arr_rom[5] = {10,2,3,4,5};
	int dummy=0;
	
	min_max(&ap_clk__1,&ap_done__1,&ap_idle__1,&ap_ready__1,&ap_rst__1,&ap_start__1,&arr_address0__1,&arr_address1__1,&arr_ce0__1,&arr_ce1__1,&arr_q0__1,&arr_q1__1,&out1__1, &out1_ap_vld__1,&out2__1,&out2_ap_vld__1,&p0__1,&trigger_in__1,arr_rom,dummy);
	printf("max value %lld\n",out1__1);
	printf("min value %lld\n",out2__1);
	
	return 0;
}
