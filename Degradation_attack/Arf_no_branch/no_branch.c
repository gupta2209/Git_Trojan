#include<stdio.h>
/*
int main(){
   int G1;
   int G2;
   int G3;
   int G4;
   int GG1;
   int GG2;
   int i1;
   int i2;
   int i3;
   int i4;
   int i5;
   int i6;
   int o1;
   int o2;
   int o3;
   int o4;
  int op1,op2,op3,op4,op5,op6,op7,op8;
  int op9,op10,op11,op12,op13,op14,op15,op16;
  int op17,op18,op19,op20,op21,op22,op23,op24;
  int op25,op26,op27,op28;

  op1 = GG1 * i1;
  op2 = GG2 * i2;
  op3 = G1 * i2;
  op4 = G2 * i1;
  op5 = G1 * i3;
  op6 = G2 * i4;
  op7 = G1 * i4;
  op8 = G2 * i3;

  op9 = op1 + op2;
  op10 = op3 + op4;
  op11 = op5 + op6;
  op12 = op7 + op8;

  op13 = op11 + i5;
  o1 = op13;
  op14 = i6 + op12;
  o2 = op14;
  op15 = G1 * op14;
  op16 = op13 * G2;
  op17 = op13 * G1;
  op18 = op14 * G2;
  op19 = op15 * op16;
  op20 = op17 + op18;
  op21 = G1 * op20;
  op22 = op19 * G2;
  op23 = op19 * G1;
  op24 = op20 * G2;
  op25 = op21 + op22;
  op26 = op23 + op24;
  op27 = op9 + op25;
  o3 = op27;
  op28 = op10 + op26;
  o4 = op28;
  return 0;
}

int main(){
	int o1=0;
	int o2=0;
	int o3=0;
	int o4=0;
 	hls_macc(1,2,3,4,5,6,&o1,&o2,&o3,&o4,10,11,12,13,14,15);
	printf("%d\n",o1);
	printf("%d\n",o2);
	printf("%d\n",o3);
	printf("%d\n",o4);
}*/


void hls_macc(int i1,int i2,int i3,int i4,int i5,int i6,int *o1,int *o2,int *o3,int *o4,int G1,int G2, int G3, int G4, int GG1, int GG2,int *ap_return1){

  int op1,op2,op3,op4,op5,op6,op7,op8;
  int op9,op10,op11,op12,op13,op14,op15,op16;
  int op17,op18,op19,op20,op21,op22,op23,op24;
  int op25,op26,op27,op28;

  op1 = GG1 * i1;
  op2 = GG2 * i2;
  op3 = G1 * i2;
  op4 = G2 * i1;
  op5 = G1 * i3;
  op6 = G2 * i4;
  op7 = G1 * i4;
  op8 = G2 * i3;

  op9 = op1 + op2;
  op10 = op3 + op4;
  op11 = op5 + op6;
  op12 = op7 + op8;

  op13 = op11 + i5;
  *o1 = op13;
  op14 = i6 + op12;
  *o2 = op14;
  op15 = G1 * op14;
  op16 = op13 * G2;
  op17 = op13 * G1;
  op18 = op14 * G2;
  op19 = op15 * op16;
  op20 = op17 + op18;
  op21 = G1 * op20;
  op22 = op19 * G2;
  op23 = op19 * G1;
  op24 = op20 * G2;
  op25 = op21 + op22;
  op26 = op23 + op24;
  op27 = op9 + op25;
  *o3 = op27;
  op28 = op10 + op26;
  *o4 = op28;
//printf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d ",op5, op6, op7,op8,op17,op18,op19,op20,op2,op21,op22,op21,op22,op13,op14,op27,op1);
	
  *ap_return1=*o1+*o2+*o3+*o4;   
}

int main(){
	for(int i=0; i<100; i++){
		int o1=0;
		int o2=0;
		int o3=0;
		int o4=0;
		int i1__1,i2__1,i3__1,i4__1,i5__1,i6__1,G1__1,G2__1,G3__1,G4__1,GG1__1,GG2__1;
		int ap_return = 0;
		scanf("%d %d %d %d %d %d %d %d %d %d %d %d",&G1__1,&G2__1,&G3__1,&G4__1,&GG1__1,&GG2__1,&i1__1,&i2__1,&i3__1,&i4__1,&i5__1,&i6__1);
	 	hls_macc(i1__1,i2__1,i3__1,i4__1,i5__1,i6__1,&o1,&o2,&o3,&o4,G1__1,G2__1,G3__1,G4__1,GG1__1,GG2__1,&ap_return);
		printf("%d\n",ap_return);
	}
	return 0;
}

