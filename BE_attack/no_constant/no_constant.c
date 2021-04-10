
#include<stdio.h>

void hls_macc( int i1, int i2, int i3, int i4, int i6,
          int *o1, int *o2, int *o3, int *o4, int G1, int G2,  int G3,  int G4,  int GG1,  int GG2,int *ap_return1){

   int op1,op2,op3,op4,op5,op6,op7,op8;
   int op9,op10,op11,op12,op13,op14,op15,op16;
   int op17,op18,op19,op20,op21,op22,op23,op24;
   int op25,op26,op27,op28;

  op1 = GG1 * i1;
  op2 = GG2 * i2;
  op3 = G1 * i2;
  op4 = G2 * i1;
  if (G1 > 10)
  {
     op5 = G1 * i3;
     op5 = op5 + GG1;
     op6 = op5 - op4;
  }
  else
  {
     op5 = i3 * i4;
     op6 = op5 - op3;
  }
  if (op5 < op4)
  {
     op6 = G2 * i4;
     op6 = op6 - i3;
     op17 = op6 - G2;
  }
  else
  {
     op17 = op2 - op4;
     op2 = op4 - op17;
     op17 = op17 - op2;
  }
  op7 = G1 * i4;
  op8 = G2 * i3;

  op9 = op1 + op2;
  op10 = op3 + op4;
  op11 = op4 + op6;
  op12 = op7 + op8;

  op13 = op11 + G1;
  *o1 = op13;
  op14 = i6 + op12;
  *o2 = op14;
  
  *ap_return1 = *o1+*o2;
printf("%d\n",*ap_return1);	
}


int main(){
	for(int i=0; i<100; i++){
		int o1 = 0;
		int o2 = 0;
		int o3 = 0;
		int o4 = 0;
		int ap_return;
		int i1,i2,i3,i4,i6,G1,G2,G3,G4,GG1,GG2;
		scanf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d",&i1,&i2,&i3,&i4,&i6,&o1,&o2,&o3,&o4,&G1,&G2,&G3,&G4,&GG1, &GG2);
		hls_macc(i1, i2, i3, i4, i6, &o1, &o2, &o3, &o4, G1, G2, G3, G4, GG1, GG2,&ap_return);
	}
return 0;
}


