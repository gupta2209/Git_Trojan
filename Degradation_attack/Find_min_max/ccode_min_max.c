#include<stdio.h>
#define arr_new_DataWidth 32
#define arr_new_AddressRange 5
#define arr_new_AddressWidth 3
#define arr_new_DWIDTH 32
#define arr_new_AWIDTH 3
#define arr_new_MEM_SIZE 5
unsigned long long int do_twos_complement( unsigned long long int data,int width)
{
	return data;
}
void min_max(unsigned long long int *ap_clk__1,unsigned long long int *ap_done__1,unsigned long long int *ap_idle__1,unsigned long long int *ap_ready__1,unsigned long long int *ap_rst__1,unsigned long long int *ap_start__1,unsigned long long int *arr_address0__1,unsigned long long int *arr_ce0__1,unsigned long long int *arr_q0__1,unsigned long long int *out1__1,unsigned long long int *out1_ap_vld__1,unsigned long long int *out2__1,unsigned long long int *out2_ap_vld__1,unsigned long long int *size__1,int dummy){
unsigned long long int ap_clk=*ap_clk__1;
unsigned long long int ap_done=*ap_done__1;
unsigned long long int ap_idle=*ap_idle__1;
unsigned long long int ap_ready=*ap_ready__1;
unsigned long long int ap_rst=*ap_rst__1;
unsigned long long int ap_start=*ap_start__1;
unsigned long long int arr_address0=*arr_address0__1;
unsigned long long int arr_ce0=*arr_ce0__1;
unsigned long long int arr_q0=*arr_q0__1;
unsigned long long int out1=*out1__1;
unsigned long long int out1_ap_vld=*out1_ap_vld__1;
unsigned long long int out2=*out2__1;
unsigned long long int out2_ap_vld=*out2_ap_vld__1;
unsigned long long int size=*size__1;
   long long int ap_CS_fsm_state1=0;
   long long int ap_CS_fsm_state2=0;
   long long int ap_CS_fsm_state3=0;
   long long int ap_CS_fsm_state4=0;
   long long int ap_CS_fsm_state5=0;
   long long int ap_CS_fsm_state6=0;
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
   unsigned long long int arr_ce0__temp=0;
   unsigned long long int arr_new_address0=0;
   unsigned long long int arr_new_address0__temp=0;
   unsigned long long int arr_new_ce0=0;
   unsigned long long int arr_new_ce0__temp=0;
   unsigned long long int arr_new_q0=0;
   unsigned long long int arr_new_q0__temp=0;
   unsigned long long int arr_new_we0=0;
   unsigned long long int arr_new_we0__temp=0;
   unsigned long long int arr_q0__temp=0;
   unsigned long long int i_1_cast_fu_155_p1=0;
   unsigned long long int i_1_cast_fu_155_p1__temp=0;
   unsigned long long int i_1_reg_102=0;
   unsigned long long int i_1_reg_102__temp=0;
   unsigned long long int i_2_fu_144_p2=0;
   unsigned long long int i_2_fu_144_p2__temp=0;
   unsigned long long int i_2_reg_220=0;
   unsigned long long int i_2_reg_220__temp=0;
   unsigned long long int i_3_fu_169_p2=0;
   unsigned long long int i_3_fu_169_p2__temp=0;
   unsigned long long int i_3_reg_254=0;
   unsigned long long int i_3_reg_254__temp=0;
   unsigned long long int i_cast_fu_135_p1=0;
   unsigned long long int i_cast_fu_135_p1__temp=0;
   unsigned long long int i_reg_91=0;
   unsigned long long int i_reg_91__temp=0;
   unsigned long long int max_value1_reg_124=0;
   unsigned long long int max_value1_reg_124__temp=0;
   unsigned long long int max_value_2_fu_203_p3=0;
   unsigned long long int max_value_2_fu_203_p3__temp=0;
   unsigned long long int max_value_fu_195_p3=0;
   unsigned long long int max_value_fu_195_p3__temp=0;
   unsigned long long int min_value_5_max_valu_fu_187_p3=0;
   unsigned long long int min_value_5_max_valu_fu_187_p3__temp=0;
   unsigned long long int min_value_reg_113=0;
   unsigned long long int min_value_reg_113__temp=0;
   unsigned long long int out1__temp=0;
   unsigned long long int out1_ap_vld__temp=0;
   unsigned long long int out2__temp=0;
   unsigned long long int out2_ap_vld__temp=0;
   unsigned long long int size__temp=0;
   unsigned long long int tmp_1_fu_150_p1=0;
   unsigned long long int tmp_1_fu_150_p1__temp=0;
   unsigned long long int tmp_1_fu_150_p1_temp_0=0;
   unsigned long long int tmp_1_fu_150_p1_temp_0__temp=0;
   unsigned long long int tmp_1_fu_150_p1_temp_0_temp_2=0;
   unsigned long long int tmp_1_fu_150_p1_temp_0_temp_2__temp=0;
   unsigned long long int tmp_1_reg_225=0;
   unsigned long long int tmp_1_reg_225__temp=0;
   unsigned long long int tmp_1_reg_225_temp_1=0;
   unsigned long long int tmp_1_reg_225_temp_1__temp=0;
   unsigned long long int tmp_3_fu_159_p2=0;
   unsigned long long int tmp_3_fu_159_p2__temp=0;
   unsigned long long int tmp_4_fu_164_p1=0;
   unsigned long long int tmp_4_fu_164_p1__temp=0;
   unsigned long long int tmp_5_fu_175_p2=0;
   unsigned long long int tmp_5_fu_175_p2__temp=0;
   unsigned long long int tmp_5_fu_175_p2_temp_3=0;
   unsigned long long int tmp_5_fu_175_p2_temp_3__temp=0;
   unsigned long long int tmp_5_fu_175_p2_temp_4=0;
   unsigned long long int tmp_5_fu_175_p2_temp_4__temp=0;
   unsigned long long int tmp_6_fu_181_p2=0;
   unsigned long long int tmp_6_fu_181_p2__temp=0;
   unsigned long long int tmp_6_fu_181_p2_temp_5=0;
   unsigned long long int tmp_6_fu_181_p2_temp_5__temp=0;
   unsigned long long int tmp_fu_139_p2=0;
   unsigned long long int tmp_fu_139_p2__temp=0;
	ap_done=0;
	ap_start=1;
   unsigned long long int arr_new_ram[arr_new_MEM_SIZE];
   unsigned long long int arr[5]={8,8,8,8,8};

   ap_ST_fsm_state1:
	//printf("state1\n");
	ap_CS_fsm_state1 = 1;
	ap_CS_fsm_state2 = 0;
	ap_CS_fsm_state3 = 0;
	ap_CS_fsm_state4 = 0;
	ap_CS_fsm_state5 = 0;
	ap_CS_fsm_state6 = 0;
   arr_new_q0__temp = arr_new_q0 ;
   max_value_fu_195_p3__temp = max_value_fu_195_p3 ;
   ap_rst__temp = ap_rst ;
   arr_new_we0__temp = arr_new_we0 ;
   size__temp = size ;
   tmp_5_fu_175_p2_temp_3__temp = tmp_5_fu_175_p2_temp_3 ;
   out1_ap_vld__temp = out1_ap_vld ;
   arr_new_address0__temp = arr_new_address0 ;
   ap_ready__temp = ap_ready ;
   min_value_reg_113__temp = min_value_reg_113 ;
   out2_ap_vld__temp = out2_ap_vld ;
   ap_done__temp = ap_done ;
   out1__temp = out1 ;
   ap_start__temp = ap_start ;
   i_cast_fu_135_p1__temp = i_cast_fu_135_p1 ;
   tmp_5_fu_175_p2_temp_4__temp = tmp_5_fu_175_p2_temp_4 ;
   tmp_6_fu_181_p2_temp_5__temp = tmp_6_fu_181_p2_temp_5 ;
   ap_clk__temp = ap_clk ;
   i_2_fu_144_p2__temp = i_2_fu_144_p2 ;
   tmp_1_fu_150_p1_temp_0__temp = tmp_1_fu_150_p1_temp_0 ;
   min_value_5_max_valu_fu_187_p3__temp = min_value_5_max_valu_fu_187_p3 ;
   ap_NS_fsm__temp = ap_NS_fsm ;
   tmp_1_reg_225_temp_1__temp = tmp_1_reg_225_temp_1 ;
   arr_ce0__temp = arr_ce0 ;
   max_value1_reg_124__temp = max_value1_reg_124 ;
   i_reg_91__temp = i_reg_91 ;
   i_3_fu_169_p2__temp = i_3_fu_169_p2 ;
   i_1_reg_102__temp = i_1_reg_102 ;
   max_value_2_fu_203_p3__temp = max_value_2_fu_203_p3 ;
   out2__temp = out2 ;
   tmp_6_fu_181_p2__temp = tmp_6_fu_181_p2 ;
   ap_CS_fsm__temp = ap_CS_fsm ;
   i_3_reg_254__temp = i_3_reg_254 ;
   arr_address0__temp = arr_address0 ;
   tmp_fu_139_p2__temp = tmp_fu_139_p2 ;
   tmp_1_reg_225__temp = tmp_1_reg_225 ;
   tmp_5_fu_175_p2__temp = tmp_5_fu_175_p2 ;
   tmp_1_fu_150_p1_temp_0_temp_2__temp = tmp_1_fu_150_p1_temp_0_temp_2 ;
   i_2_reg_220__temp = i_2_reg_220 ;
   tmp_3_fu_159_p2__temp = tmp_3_fu_159_p2 ;
   arr_new_ce0__temp = arr_new_ce0 ;
   i_1_cast_fu_155_p1__temp = i_1_cast_fu_155_p1 ;
   tmp_4_fu_164_p1__temp = tmp_4_fu_164_p1 ;
   ap_idle__temp = ap_idle ;
   arr_q0__temp = arr_q0 ;
   tmp_1_fu_150_p1__temp = tmp_1_fu_150_p1 ;

       arr_new_ce0 = 0;
       arr_new_we0 = 0;
       tmp_1_reg_225 =  ( ( tmp_1_reg_225 & 2147483647 ) & 18446744073709551615 )  ;
       if((ap_start == 0) && (1 == ap_CS_fsm_state1))
       {
           ap_idle =  1;
       }
   if(((1 == ap_CS_fsm_state1) && (ap_start == 1)) == 1){
       if((1 == ap_CS_fsm_state1) && (ap_start == 1))
       {
           i_reg_91 =  0;
       }
       goto ap_ST_fsm_state2;
   }
   if(((1 == ap_CS_fsm_state1) && (ap_start == 1)) == 0){
       if((1 == ap_CS_fsm_state1) && (ap_start == 1))
       {
               i_reg_91 =  0;
       }
       goto ap_ST_fsm_state1;
   }

   ap_ST_fsm_state2:
	//printf("state2\n");
	ap_CS_fsm_state1 = 0;
	ap_CS_fsm_state2 = 1;
	ap_CS_fsm_state3 = 0;
	ap_CS_fsm_state4 = 0;
	ap_CS_fsm_state5 = 0;
	ap_CS_fsm_state6 = 0;
   arr_new_q0__temp = arr_new_q0 ;
   max_value_fu_195_p3__temp = max_value_fu_195_p3 ;
   ap_rst__temp = ap_rst ;
   arr_new_we0__temp = arr_new_we0 ;
   size__temp = size ;
   tmp_5_fu_175_p2_temp_3__temp = tmp_5_fu_175_p2_temp_3 ;
   out1_ap_vld__temp = out1_ap_vld ;
   arr_new_address0__temp = arr_new_address0 ;
   ap_ready__temp = ap_ready ;
   min_value_reg_113__temp = min_value_reg_113 ;
   out2_ap_vld__temp = out2_ap_vld ;
   ap_done__temp = ap_done ;
   out1__temp = out1 ;
   ap_start__temp = ap_start ;
   i_cast_fu_135_p1__temp = i_cast_fu_135_p1 ;
   tmp_5_fu_175_p2_temp_4__temp = tmp_5_fu_175_p2_temp_4 ;
   tmp_6_fu_181_p2_temp_5__temp = tmp_6_fu_181_p2_temp_5 ;
   ap_clk__temp = ap_clk ;
   i_2_fu_144_p2__temp = i_2_fu_144_p2 ;
   tmp_1_fu_150_p1_temp_0__temp = tmp_1_fu_150_p1_temp_0 ;
   min_value_5_max_valu_fu_187_p3__temp = min_value_5_max_valu_fu_187_p3 ;
   ap_NS_fsm__temp = ap_NS_fsm ;
   tmp_1_reg_225_temp_1__temp = tmp_1_reg_225_temp_1 ;
   arr_ce0__temp = arr_ce0 ;
   max_value1_reg_124__temp = max_value1_reg_124 ;
   i_reg_91__temp = i_reg_91 ;
   i_3_fu_169_p2__temp = i_3_fu_169_p2 ;
   i_1_reg_102__temp = i_1_reg_102 ;
   max_value_2_fu_203_p3__temp = max_value_2_fu_203_p3 ;
   out2__temp = out2 ;
   tmp_6_fu_181_p2__temp = tmp_6_fu_181_p2 ;
   ap_CS_fsm__temp = ap_CS_fsm ;
   i_3_reg_254__temp = i_3_reg_254 ;
   arr_address0__temp = arr_address0 ;
   tmp_fu_139_p2__temp = tmp_fu_139_p2 ;
   tmp_1_reg_225__temp = tmp_1_reg_225 ;
   tmp_5_fu_175_p2__temp = tmp_5_fu_175_p2 ;
   tmp_1_fu_150_p1_temp_0_temp_2__temp = tmp_1_fu_150_p1_temp_0_temp_2 ;
   i_2_reg_220__temp = i_2_reg_220 ;
   tmp_3_fu_159_p2__temp = tmp_3_fu_159_p2 ;
   arr_new_ce0__temp = arr_new_ce0 ;
   i_1_cast_fu_155_p1__temp = i_1_cast_fu_155_p1 ;
   tmp_4_fu_164_p1__temp = tmp_4_fu_164_p1 ;
   ap_idle__temp = ap_idle ;
   arr_q0__temp = arr_q0 ;
   tmp_1_fu_150_p1__temp = tmp_1_fu_150_p1 ;

       arr_new_ce0 = 0;
       arr_new_we0 = 0;
       tmp_1_reg_225 =  ( ( tmp_1_reg_225 & 2147483647 ) & 18446744073709551615 )  ;
               tmp_fu_139_p2 =   ( do_twos_complement(  ( i_reg_91__temp  & 4294967295 )  , 63 )  < do_twos_complement( ( size & 4294967295 )  , 63 )  ? 1 : 0 ) ;
	      //printf("tmp_fu_139_p2 %d\n",tmp_fu_139_p2);
       if(1 == ap_CS_fsm_state2)
       {
           arr_ce0 =  1;
       }
       if(1 == ap_CS_fsm_state2)
       {
           arr_new_address0 =  0;
       }
       if(((1 == ap_CS_fsm_state5) || (1 == ap_CS_fsm_state2)) || (1 == ap_CS_fsm_state3))
       {
           arr_new_ce0 =  1;
       }
              
		
   if(((tmp_fu_139_p2 == 0) && (1 == ap_CS_fsm_state2)) == 1){
       if(1 == ap_CS_fsm_state2)
       {
           i_2_reg_220 =   ( ( i_reg_91__temp  + 1 ) & 2147483647 ) ;
       }
       if((tmp_fu_139_p2 == 1) && (1 == ap_CS_fsm_state2))
       {
           tmp_1_reg_225 =   ( (  ( (  ( i_reg_91__temp  & 18446744073709551615 )  & 2147483647 ) & 18446744073709551615 )  |  ( ( tmp_1_reg_225__temp  & 18446744071562067968 ) & 18446744073709551615 )  ) & 18446744073709551615 ) ;
       }
	if(arr_ce0)
	{
		arr_q0=arr[arr_address0];
		printf("arr_address0 %d\n",arr_address0);
		//printf("arr_q0 %d\n",arr_q0);
	}
       if(arr_new_ce0){	 
           if(arr_new_we0){
              arr_new_ram[arr_new_address0]=arr_q0;
		//printf("arr_q0 %d\n",arr_q0);
           }
	arr_new_q0=arr_new_ram[arr_new_address0];
	//printf("arr_new_q0 %d\n", arr_new_q0);
       }
	arr_address0 = i_reg_91;
       goto ap_ST_fsm_state4;
   }
   if(((tmp_fu_139_p2 == 0) && (1 == ap_CS_fsm_state2)) == 0){
       if(1 == ap_CS_fsm_state2)
       {
               i_2_reg_220 =   ( ( i_reg_91__temp  + 1 ) & 2147483647 ) ;
       }
       if((tmp_fu_139_p2 == 1) && (1 == ap_CS_fsm_state2))
       {
               tmp_1_reg_225 =   ( (  ( (  ( i_reg_91__temp  & 18446744073709551615 )  & 2147483647 ) & 18446744073709551615 )  |  ( ( tmp_1_reg_225__temp  & 18446744071562067968 ) & 18446744073709551615 )  ) & 18446744073709551615 ) ;
       }
	if(arr_ce0)
	{
		arr_q0=arr[arr_address0];
	}
       if(arr_new_ce0){
          
	  
           if(arr_new_we0){
              arr_new_ram[arr_new_address0]=arr_q0;
		//printf("arr_q0 %d\n",arr_q0);
           }
	arr_new_q0=arr_new_ram[arr_new_address0];
	//printf("arr_new_q0 %d\n", arr_new_q0);
       }
	arr_address0 = i_reg_91;
       goto ap_ST_fsm_state3;
   }

   ap_ST_fsm_state3:
	//printf("state3\n");
	ap_CS_fsm_state1 = 0;
	ap_CS_fsm_state2 = 0;
	ap_CS_fsm_state3 = 1;
	ap_CS_fsm_state4 = 0;
	ap_CS_fsm_state5 = 0;
	ap_CS_fsm_state6 = 0;
   arr_new_q0__temp = arr_new_q0 ;
   max_value_fu_195_p3__temp = max_value_fu_195_p3 ;
   ap_rst__temp = ap_rst ;
   arr_new_we0__temp = arr_new_we0 ;
   size__temp = size ;
   tmp_5_fu_175_p2_temp_3__temp = tmp_5_fu_175_p2_temp_3 ;
   out1_ap_vld__temp = out1_ap_vld ;
   arr_new_address0__temp = arr_new_address0 ;
   ap_ready__temp = ap_ready ;
   min_value_reg_113__temp = min_value_reg_113 ;
   out2_ap_vld__temp = out2_ap_vld ;
   ap_done__temp = ap_done ;
   out1__temp = out1 ;
   ap_start__temp = ap_start ;
   i_cast_fu_135_p1__temp = i_cast_fu_135_p1 ;
   tmp_5_fu_175_p2_temp_4__temp = tmp_5_fu_175_p2_temp_4 ;
   tmp_6_fu_181_p2_temp_5__temp = tmp_6_fu_181_p2_temp_5 ;
   ap_clk__temp = ap_clk ;
   i_2_fu_144_p2__temp = i_2_fu_144_p2 ;
   tmp_1_fu_150_p1_temp_0__temp = tmp_1_fu_150_p1_temp_0 ;
   min_value_5_max_valu_fu_187_p3__temp = min_value_5_max_valu_fu_187_p3 ;
   ap_NS_fsm__temp = ap_NS_fsm ;
   tmp_1_reg_225_temp_1__temp = tmp_1_reg_225_temp_1 ;
   arr_ce0__temp = arr_ce0 ;
   max_value1_reg_124__temp = max_value1_reg_124 ;
   i_reg_91__temp = i_reg_91 ;
   i_3_fu_169_p2__temp = i_3_fu_169_p2 ;
   i_1_reg_102__temp = i_1_reg_102 ;
   max_value_2_fu_203_p3__temp = max_value_2_fu_203_p3 ;
   out2__temp = out2 ;
   tmp_6_fu_181_p2__temp = tmp_6_fu_181_p2 ;
   ap_CS_fsm__temp = ap_CS_fsm ;
   i_3_reg_254__temp = i_3_reg_254 ;
   arr_address0__temp = arr_address0 ;
   tmp_fu_139_p2__temp = tmp_fu_139_p2 ;
   tmp_1_reg_225__temp = tmp_1_reg_225 ;
   tmp_5_fu_175_p2__temp = tmp_5_fu_175_p2 ;
   tmp_1_fu_150_p1_temp_0_temp_2__temp = tmp_1_fu_150_p1_temp_0_temp_2 ;
   i_2_reg_220__temp = i_2_reg_220 ;
   tmp_3_fu_159_p2__temp = tmp_3_fu_159_p2 ;
   arr_new_ce0__temp = arr_new_ce0 ;
   i_1_cast_fu_155_p1__temp = i_1_cast_fu_155_p1 ;
   tmp_4_fu_164_p1__temp = tmp_4_fu_164_p1 ;
   ap_idle__temp = ap_idle ;
   arr_q0__temp = arr_q0 ;
   tmp_1_fu_150_p1__temp = tmp_1_fu_150_p1 ;

       arr_new_ce0 = 0;
       arr_new_we0 = 0;
       tmp_1_reg_225 =  ( ( tmp_1_reg_225 & 2147483647 ) & 18446744073709551615 )  ;
       if(1 == ap_CS_fsm_state3)
       {
           arr_new_address0 =  tmp_1_reg_225__temp ;
       }
       if(((1 == ap_CS_fsm_state5) || (1 == ap_CS_fsm_state2)) || (1 == ap_CS_fsm_state3))
       {
           arr_new_ce0 =  1;
       }
       if(1 == ap_CS_fsm_state3)
       {
           arr_new_we0 =  1;
       }
       if(1 == ap_CS_fsm_state3)
       {
           i_reg_91 =  i_2_reg_220__temp ;
       }
       if(arr_new_ce0){
          arr_new_q0=arr_new_ram[arr_new_address0];
           if(arr_new_we0){
              arr_new_ram[arr_new_address0]=arr_q0;
		//printf("arr_q0 %d\n",arr_q0);
           }
       }
	arr_address0 = i_reg_91;
       goto ap_ST_fsm_state2;

   ap_ST_fsm_state4:
	printf("state4\n");
	for(int i=0;i<5;i++)
	{
		printf("%d ",arr_new_ram[i]);
	}
	printf("\n");
	ap_CS_fsm_state1 = 0;
	ap_CS_fsm_state2 = 0;
	ap_CS_fsm_state3 = 0;
	ap_CS_fsm_state4 = 1;
	ap_CS_fsm_state5 = 0;
	ap_CS_fsm_state6 = 0;
   arr_new_q0__temp = arr_new_q0 ;
   max_value_fu_195_p3__temp = max_value_fu_195_p3 ;
   ap_rst__temp = ap_rst ;
   arr_new_we0__temp = arr_new_we0 ;
   size__temp = size ;
   tmp_5_fu_175_p2_temp_3__temp = tmp_5_fu_175_p2_temp_3 ;
   out1_ap_vld__temp = out1_ap_vld ;
   arr_new_address0__temp = arr_new_address0 ;
   ap_ready__temp = ap_ready ;
   min_value_reg_113__temp = min_value_reg_113 ;
   out2_ap_vld__temp = out2_ap_vld ;
   ap_done__temp = ap_done ;
   out1__temp = out1 ;
   ap_start__temp = ap_start ;
   i_cast_fu_135_p1__temp = i_cast_fu_135_p1 ;
   tmp_5_fu_175_p2_temp_4__temp = tmp_5_fu_175_p2_temp_4 ;
   tmp_6_fu_181_p2_temp_5__temp = tmp_6_fu_181_p2_temp_5 ;
   ap_clk__temp = ap_clk ;
   i_2_fu_144_p2__temp = i_2_fu_144_p2 ;
   tmp_1_fu_150_p1_temp_0__temp = tmp_1_fu_150_p1_temp_0 ;
   min_value_5_max_valu_fu_187_p3__temp = min_value_5_max_valu_fu_187_p3 ;
   ap_NS_fsm__temp = ap_NS_fsm ;
   tmp_1_reg_225_temp_1__temp = tmp_1_reg_225_temp_1 ;
   arr_ce0__temp = arr_ce0 ;
   max_value1_reg_124__temp = max_value1_reg_124 ;
   i_reg_91__temp = i_reg_91 ;
   i_3_fu_169_p2__temp = i_3_fu_169_p2 ;
   i_1_reg_102__temp = i_1_reg_102 ;
   max_value_2_fu_203_p3__temp = max_value_2_fu_203_p3 ;
   out2__temp = out2 ;
   tmp_6_fu_181_p2__temp = tmp_6_fu_181_p2 ;
   ap_CS_fsm__temp = ap_CS_fsm ;
   i_3_reg_254__temp = i_3_reg_254 ;
   arr_address0__temp = arr_address0 ;
   tmp_fu_139_p2__temp = tmp_fu_139_p2 ;
   tmp_1_reg_225__temp = tmp_1_reg_225 ;
   tmp_5_fu_175_p2__temp = tmp_5_fu_175_p2 ;
   tmp_1_fu_150_p1_temp_0_temp_2__temp = tmp_1_fu_150_p1_temp_0_temp_2 ;
   i_2_reg_220__temp = i_2_reg_220 ;
   tmp_3_fu_159_p2__temp = tmp_3_fu_159_p2 ;
   arr_new_ce0__temp = arr_new_ce0 ;
   i_1_cast_fu_155_p1__temp = i_1_cast_fu_155_p1 ;
   tmp_4_fu_164_p1__temp = tmp_4_fu_164_p1 ;
   ap_idle__temp = ap_idle ;
   arr_q0__temp = arr_q0 ;
   tmp_1_fu_150_p1__temp = tmp_1_fu_150_p1 ;

       arr_new_ce0 = 0;
       arr_new_we0 = 0;
       tmp_1_reg_225 =  ( ( tmp_1_reg_225 & 2147483647 ) & 18446744073709551615 )  ;
       if(1 == ap_CS_fsm_state4)
       {
           i_1_reg_102 =  1;
       }
       if(1 == ap_CS_fsm_state4)
       {
           max_value1_reg_124 =  arr_new_q0__temp ;
		printf("max_value1_reg_124 %d\n",max_value1_reg_124);
       }
       if(1 == ap_CS_fsm_state4)
       {
           min_value_reg_113 =  arr_new_q0__temp ;
		printf("min_value_reg_113 %d\n",min_value_reg_113);
       }
       goto ap_ST_fsm_state5;

   ap_ST_fsm_state5:
	printf("state5\n");
	ap_CS_fsm_state1 = 0;
	ap_CS_fsm_state2 = 0;
	ap_CS_fsm_state3 = 0;
	ap_CS_fsm_state4 = 0;
	ap_CS_fsm_state5 = 1;
	ap_CS_fsm_state6 = 0;
   arr_new_q0__temp = arr_new_q0 ;
   max_value_fu_195_p3__temp = max_value_fu_195_p3 ;
   ap_rst__temp = ap_rst ;
   arr_new_we0__temp = arr_new_we0 ;
   size__temp = size ;
   tmp_5_fu_175_p2_temp_3__temp = tmp_5_fu_175_p2_temp_3 ;
   out1_ap_vld__temp = out1_ap_vld ;
   arr_new_address0__temp = arr_new_address0 ;
   ap_ready__temp = ap_ready ;
   min_value_reg_113__temp = min_value_reg_113 ;
   out2_ap_vld__temp = out2_ap_vld ;
   ap_done__temp = ap_done ;
   out1__temp = out1 ;
   ap_start__temp = ap_start ;
   i_cast_fu_135_p1__temp = i_cast_fu_135_p1 ;
   tmp_5_fu_175_p2_temp_4__temp = tmp_5_fu_175_p2_temp_4 ;
   tmp_6_fu_181_p2_temp_5__temp = tmp_6_fu_181_p2_temp_5 ;
   ap_clk__temp = ap_clk ;
   i_2_fu_144_p2__temp = i_2_fu_144_p2 ;
   tmp_1_fu_150_p1_temp_0__temp = tmp_1_fu_150_p1_temp_0 ;
   min_value_5_max_valu_fu_187_p3__temp = min_value_5_max_valu_fu_187_p3 ;
   ap_NS_fsm__temp = ap_NS_fsm ;
   tmp_1_reg_225_temp_1__temp = tmp_1_reg_225_temp_1 ;
   arr_ce0__temp = arr_ce0 ;
   max_value1_reg_124__temp = max_value1_reg_124 ;
   i_reg_91__temp = i_reg_91 ;
   i_3_fu_169_p2__temp = i_3_fu_169_p2 ;
   i_1_reg_102__temp = i_1_reg_102 ;
   max_value_2_fu_203_p3__temp = max_value_2_fu_203_p3 ;
   out2__temp = out2 ;
   tmp_6_fu_181_p2__temp = tmp_6_fu_181_p2 ;
   ap_CS_fsm__temp = ap_CS_fsm ;
   i_3_reg_254__temp = i_3_reg_254 ;
   arr_address0__temp = arr_address0 ;
   tmp_fu_139_p2__temp = tmp_fu_139_p2 ;
   tmp_1_reg_225__temp = tmp_1_reg_225 ;
   tmp_5_fu_175_p2__temp = tmp_5_fu_175_p2 ;
   tmp_1_fu_150_p1_temp_0_temp_2__temp = tmp_1_fu_150_p1_temp_0_temp_2 ;
   i_2_reg_220__temp = i_2_reg_220 ;
   tmp_3_fu_159_p2__temp = tmp_3_fu_159_p2 ;
   arr_new_ce0__temp = arr_new_ce0 ;
   i_1_cast_fu_155_p1__temp = i_1_cast_fu_155_p1 ;
   tmp_4_fu_164_p1__temp = tmp_4_fu_164_p1 ;
   ap_idle__temp = ap_idle ;
   arr_q0__temp = arr_q0 ;
   tmp_1_fu_150_p1__temp = tmp_1_fu_150_p1 ;

       arr_new_ce0 = 0;
       arr_new_we0 = 0;
       tmp_1_reg_225 =  ( ( tmp_1_reg_225 & 2147483647 ) & 18446744073709551615 )  ;
               tmp_3_fu_159_p2 =   ( do_twos_complement(  ( i_1_reg_102__temp  & 4294967295 )  , 63 )  < do_twos_complement( ( size & 4294967295 )  , 63 )  ? 1 : 0 ) ;
       if((tmp_3_fu_159_p2 == 0) && (1 == ap_CS_fsm_state5))
       {
           ap_done =  1;
			if(ap_done==1){
			}
       }
       if((tmp_3_fu_159_p2 == 0) && (1 == ap_CS_fsm_state5))
       {
           ap_ready =  1;
       }
       if(1 == ap_CS_fsm_state5)
       {
           arr_new_address0 =   ( i_1_reg_102__temp  & 18446744073709551615 ) ;
       }
       if(((1 == ap_CS_fsm_state5) || (1 == ap_CS_fsm_state2)) || (1 == ap_CS_fsm_state3))
       {
           arr_new_ce0 =  1;
       }
       if((tmp_3_fu_159_p2 == 0) && (1 == ap_CS_fsm_state5))
       {
           out1_ap_vld =  1;
               out1 =   ( min_value_reg_113__temp  & 4294967295 ) ;
               out2 =   ( max_value1_reg_124__temp  & 4294967295 ) ;
		printf("out1 %d\n",out1);
		printf("out2 %d\n",out2);

       }
       if((tmp_3_fu_159_p2 == 0) && (1 == ap_CS_fsm_state5))
       {
           out2_ap_vld =  1;
               out1 =   ( min_value_reg_113__temp  & 4294967295 ) ;
               out2 =   ( max_value1_reg_124__temp  & 4294967295 ) ;
		printf("out1 %d\n",out1);
		printf("out2 %d\n",out2);
       }
               tmp_3_fu_159_p2 =   ( do_twos_complement(  ( i_1_reg_102__temp  & 4294967295 )  , 63 )  < do_twos_complement( ( size & 4294967295 )  , 63 )  ? 1 : 0 ) ;
   if(((tmp_3_fu_159_p2 == 0) && (1 == ap_CS_fsm_state5)) == 1){
       if((tmp_3_fu_159_p2 == 1) && (1 == ap_CS_fsm_state5))
       {
           i_3_reg_254 =   ( ( i_1_reg_102__temp  + 1 ) & 2147483647 ) ;
       }
       if(arr_new_ce0){
          arr_new_q0=arr_new_ram[arr_new_address0];
	 // printf("arr_new_q0 %d",arr_new_q0);
           if(arr_new_we0){
              arr_new_ram[arr_new_address0]=arr_q0;
           }
       }
       if(ap_done==1){
       	goto end;
       }
       goto ap_ST_fsm_state1;
   }
   if(((tmp_3_fu_159_p2 == 0) && (1 == ap_CS_fsm_state5)) == 0){
       if((tmp_3_fu_159_p2 == 1) && (1 == ap_CS_fsm_state5))
       {
               i_3_reg_254 =   ( ( i_1_reg_102__temp  + 1 ) & 2147483647 ) ;
       }
       if(arr_new_ce0){
          arr_new_q0=arr_new_ram[arr_new_address0];
	  printf("arr_new_q0 %d\n",arr_new_q0);
           if(arr_new_we0){
              arr_new_ram[arr_new_address0]=arr_q0;
           }
       }
       goto ap_ST_fsm_state6;
   }

   ap_ST_fsm_state6:
	//printf("state6\n");
	ap_CS_fsm_state1 = 0;
	ap_CS_fsm_state2 = 0;
	ap_CS_fsm_state3 = 0;
	ap_CS_fsm_state4 = 0;
	ap_CS_fsm_state5 = 0;
	ap_CS_fsm_state6 = 1;
   arr_new_q0__temp = arr_new_q0 ;
   max_value_fu_195_p3__temp = max_value_fu_195_p3 ;
   ap_rst__temp = ap_rst ;
   arr_new_we0__temp = arr_new_we0 ;
   size__temp = size ;
   tmp_5_fu_175_p2_temp_3__temp = tmp_5_fu_175_p2_temp_3 ;
   out1_ap_vld__temp = out1_ap_vld ;
   arr_new_address0__temp = arr_new_address0 ;
   ap_ready__temp = ap_ready ;
   min_value_reg_113__temp = min_value_reg_113 ;
   out2_ap_vld__temp = out2_ap_vld ;
   ap_done__temp = ap_done ;
   out1__temp = out1 ;
   ap_start__temp = ap_start ;
   i_cast_fu_135_p1__temp = i_cast_fu_135_p1 ;
   tmp_5_fu_175_p2_temp_4__temp = tmp_5_fu_175_p2_temp_4 ;
   tmp_6_fu_181_p2_temp_5__temp = tmp_6_fu_181_p2_temp_5 ;
   ap_clk__temp = ap_clk ;
   i_2_fu_144_p2__temp = i_2_fu_144_p2 ;
   tmp_1_fu_150_p1_temp_0__temp = tmp_1_fu_150_p1_temp_0 ;
   min_value_5_max_valu_fu_187_p3__temp = min_value_5_max_valu_fu_187_p3 ;
   ap_NS_fsm__temp = ap_NS_fsm ;
   tmp_1_reg_225_temp_1__temp = tmp_1_reg_225_temp_1 ;
   arr_ce0__temp = arr_ce0 ;
   max_value1_reg_124__temp = max_value1_reg_124 ;
   i_reg_91__temp = i_reg_91 ;
   i_3_fu_169_p2__temp = i_3_fu_169_p2 ;
   i_1_reg_102__temp = i_1_reg_102 ;
   max_value_2_fu_203_p3__temp = max_value_2_fu_203_p3 ;
   out2__temp = out2 ;
   tmp_6_fu_181_p2__temp = tmp_6_fu_181_p2 ;
   ap_CS_fsm__temp = ap_CS_fsm ;
   i_3_reg_254__temp = i_3_reg_254 ;
   arr_address0__temp = arr_address0 ;
   tmp_fu_139_p2__temp = tmp_fu_139_p2 ;
   tmp_1_reg_225__temp = tmp_1_reg_225 ;
   tmp_5_fu_175_p2__temp = tmp_5_fu_175_p2 ;
   tmp_1_fu_150_p1_temp_0_temp_2__temp = tmp_1_fu_150_p1_temp_0_temp_2 ;
   i_2_reg_220__temp = i_2_reg_220 ;
   tmp_3_fu_159_p2__temp = tmp_3_fu_159_p2 ;
   arr_new_ce0__temp = arr_new_ce0 ;
   i_1_cast_fu_155_p1__temp = i_1_cast_fu_155_p1 ;
   tmp_4_fu_164_p1__temp = tmp_4_fu_164_p1 ;
   ap_idle__temp = ap_idle ;
   arr_q0__temp = arr_q0 ;
   tmp_1_fu_150_p1__temp = tmp_1_fu_150_p1 ;

       arr_new_ce0 = 0;
       arr_new_we0 = 0;
       tmp_1_reg_225 =  ( ( tmp_1_reg_225 & 2147483647 ) & 18446744073709551615 )  ;
       if(1 == ap_CS_fsm_state6)
       {
           i_1_reg_102 =  i_3_reg_254__temp ;
       }
       if(1 == ap_CS_fsm_state6)
       {
           max_value1_reg_124 =   (  ( (  ( do_twos_complement( max_value1_reg_124__temp  , 63 )  < do_twos_complement( arr_new_q0__temp  , 63 )  ? 1 : 0 )  & 1 ) & 18446744073709551615 )  == 1 ? arr_new_q0__temp  :  max_value1_reg_124__temp  ) ;
	printf("max_value1_reg_124 %d\n",max_value1_reg_124);
       }
       if(1 == ap_CS_fsm_state6)
       {
           min_value_reg_113 =   (  ( (  ( do_twos_complement( min_value_reg_113__temp  , 63 )  > do_twos_complement( arr_new_q0__temp  , 63 )  ? 1 : 0 )  & 1 ) & 18446744073709551615 )  == 1 ? arr_new_q0__temp  :  min_value_reg_113__temp  ) ;
	   printf("min_value_reg_113 %d\n",min_value_reg_113);
       }
       goto ap_ST_fsm_state5;
   end:
	*ap_clk__1=ap_clk;
	*ap_done__1=ap_done;
	*ap_idle__1=ap_idle;
	*ap_ready__1=ap_ready;
	*ap_rst__1=ap_rst;
	*ap_start__1=ap_start;
	*arr_address0__1=arr_address0;
	*arr_ce0__1=arr_ce0;
	*arr_q0__1=arr_q0;
	*out1__1=out1;
	*out1_ap_vld__1=out1_ap_vld;
	*out2__1=out2;
	*out2_ap_vld__1=out2_ap_vld;
	*size__1=size;
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
	int dummy=0;
	min_max(&ap_clk__1,&ap_done__1,&ap_idle__1,&ap_ready__1,&ap_rst__1,&ap_start__1,&arr_address0__1,&arr_ce0__1,&arr_q0__1,&out1__1, &out1_ap_vld__1,&out2__1,&out2_ap_vld__1,&size__1,dummy);
	printf("minimum value %d\n",out1__1);
	printf("maximum value %d\n",out2__1);
	
	return 0;
}
	
