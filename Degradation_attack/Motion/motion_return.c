
#include<stdio.h>

/*int main(){
   int in1, in2, in3, in4, in5, in6, in7, in8, in9, in10, out1, out2, out3;
   klee_make_symbolic(&in1,sizeof(in1),"in1");
   klee_make_symbolic(&in2,sizeof(in2),"in2");
   klee_make_symbolic(&in3,sizeof(in3),"in3");
   klee_make_symbolic(&in4,sizeof(in4),"in4");
   klee_make_symbolic(&in5,sizeof(in5),"in5");
   klee_make_symbolic(&in6,sizeof(in6),"in6");
   klee_make_symbolic(&in7,sizeof(in7),"in7");
   klee_make_symbolic(&in8,sizeof(in8),"in8");
   klee_make_symbolic(&in9,sizeof(in9),"in9");
   klee_make_symbolic(&in10,sizeof(in10),"in10");
   int mult1 = in1 * in2;
   int mult2 = in1 * in3;

   int mult3 = in3 * in7;
   int mult4 = in4 * in5;
   int mult5 = in3 * in2;
   int mult6 = in2 * in5;
   int mult7 = in3 * in6;
   int mult8 = in4 * in7;
   int mult9 = in4 * in8;
   int mult10 = in6 * in9;
   int mult11 = in6 * in8;
   int mult12 = in7 * in9;
   int mult13 = in7 * in8;
   int mult14 = in9 * in10;

   int add1 = in1 * mult2;
   int add2 = in4 * mult4;
   int add3 = in5 * mult8;
   int add4 = mult10 * in4;
   int add5 = in10 * mult14;


   int add6 = mult1 + add1;
   out1 = add6;

   int add7 = mult3 + add2;
   int add8 = mult5 + add7;

   int add10 = mult7 + add3;
   int add9 = mult6 + add10;

   int shf1 = add9 << 3;
   out2 = add8 + shf1;

   int add13 = mult9 + add4;
   int add11 = add13 + mult11;

   int add15 = mult13 + add5;
   int add14 = mult12 + add15;

   int shf2 = add14 >> 3;
   out3 = add11 + shf2;
   freopen("klee_output1.txt","a+",stderr);
   klee_print_expr("out1:=", out1);
   klee_print_expr("out2:=", out2);
   klee_print_expr("out3:=", out3);
   return out1+out2+out3;
}


#include<stdio.h>
*/

int hls_macc(int in1, int in2, int in3, int in4, int in5, int in6, int in7, int in8, int in9, int in10, int *out1, int *out2, int *out3)
{

   int mult1 = in1 * in2;
   int mult2 = in1 * in3;

   int mult3 = in3 * in7;
   int mult4 = in4 * in5;
   int mult5 = in3 * in2;
   int mult6 = in2 * in5;
   int mult7 = in3 * in6;
   int mult8 = in4 * in7;
   int mult9 = in4 * in8;
   int mult10 = in6 * in9;
   int mult11 = in6 * in8;
   int mult12 = in7 * in9;
   int mult13 = in7 * in8;
   int mult14 = in9 * in10;

   int add1 = in1 * mult2;
   int add2 = in4 * mult4;
   int add3 = in5 * mult8;
   int add4 = mult10 * in4;
   int add5 = in10 * mult14;


   int add6 = mult1 + add1;
   *out1 = add6;

   int add7 = mult3 + add2;
   int add8 = mult5 + add7;

   int add10 = mult7 + add3;
   int add9 = mult6 + add10;

   int shf1 = add9 << 3;
   *out2 = add8 + shf1;

   int add13 = mult9 + add4;
   int add11 = add13 + mult11;

   int add15 = mult13 + add5;
   int add14 = mult12 + add15;

   int shf2 = add14 >> 3;
   *out3 = add11 + shf2;
   
   return *out1+*out2+*out3;
}

//int main(){
//	int out11=0;
//	int out21=0;
//	int out31=0;
//	int *out1=&out11,*out2=&out21,*out3=&out31;
//	int result=hls_macc(1,2,3,4,5,6,7,8,9,10, out1,out2,out3);
//	printf("%d\n",result);
//	return 0;
//}

int main(){
	for(int i=0; i<100; i++){
		int in1,in2,in3,in4,in5,in6,in7,in8,in9,in10;
		int out1=0;
		int out2=0;
		int out3=0;
		scanf("%d %d %d %d %d %d %d %d %d %d",&in1,&in2,&in3,&in4,&in5,&in6,&in7,&in8,&in9,&in10);
		printf("%d\n",hls_macc(in1,in2,in3,in4,in5,in6,in7,in8,in9,in10,&out1,&out2,&out3));
	}
return 0;
}


