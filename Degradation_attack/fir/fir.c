#include<stdio.h>
#include "fir.h"

int fir (
  coef_t c[N],
  data_t x
  ) {

  static data_t shift_reg[N];
  acc_t acc;
  data_t data;
  int i;
  
  acc=0;
  Shift_Accum_Loop: for (i=N-1;i>=0;i--) {
	if (i==0) {
			shift_reg[0]=x;
     	data = x;
    } else {
			shift_reg[i]=shift_reg[i-1];
			data = shift_reg[i];
    }
    acc+=data*c[i];
  }
  
  return acc;
}

int main(){
	int  c[11] = {1,2,3,4,5,6,7,8,9,10,11};
	printf("%d\n",fir(c,5));
	return 0;
}
