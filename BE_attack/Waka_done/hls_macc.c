#include<stdio.h>
#include <stdbool.h>
#include <stdio.h>

int main(){

	int in1, in2, in3, in4, in7, in8, in9, in10, in14, in12, in15, in17, in19, in20, in22, in24, in27, in28, in29, in32, out13, out30, out31;
	int t5, t6, t11, t16, t18, t21, t23, t25, t26;//temporary
	int return_port;
	klee_make_symbolic(&in1,sizeof(in1),"in1");
	klee_make_symbolic(&in2,sizeof(in2),"in2");
	klee_make_symbolic(&in3,sizeof(in3),"in3");
	klee_make_symbolic(&in4,sizeof(in4),"in4");
	klee_make_symbolic(&in7,sizeof(in7),"in7");
	klee_make_symbolic(&in8,sizeof(in8),"in8");
	klee_make_symbolic(&in9,sizeof(in9),"in9");
	klee_make_symbolic(&in10,sizeof(in10),"in10");
	klee_make_symbolic(&in14,sizeof(in14),"in14");
	klee_make_symbolic(&in15,sizeof(in15),"in15");
	klee_make_symbolic(&in12,sizeof(in12),"in12");
	klee_make_symbolic(&in17,sizeof(in17),"in17");
	klee_make_symbolic(&in19,sizeof(in19),"in19");
	klee_make_symbolic(&in20,sizeof(in20),"in20");
	klee_make_symbolic(&in22,sizeof(in22),"in22");
	klee_make_symbolic(&in24,sizeof(in24),"in24");
	klee_make_symbolic(&in27,sizeof(in27),"in27");
	klee_make_symbolic(&in28,sizeof(in28),"in28");
	klee_make_symbolic(&in29,sizeof(in29),"in29");
	klee_make_symbolic(&in32,sizeof(in32),"in32");
	out30 = 0;
	t5 = in3 - in4;      /* b */
	t6 = in7 + in8;      /* a */
	out13 = in14 - in15;   /* k - output node */
	t11 = t6 + in12;    /* d */
	if (in2 == in1)    /* p */
	 t16 = t11 - in17;  /* f */
	else
	{
	 t18 = in19 + in20;  /* c */
	 if (in9 < in10)     /* q */
	 {
	  t21 = t11 + in22; /* g */
	  t23 = t5 - in24;  /* e */
	  t25 = t21 + t23; /* i */
	  t26 = t25 + in27; /* j */
	 }
	 else
	  t26 = t5 + t18;  /* h */
	  t16 = t26 - in28;  /* m */
	  out30 = t26 + in29;  /* l - output node  */
	}
	out31 = t16 + in32;   /* n - output node  */
	// return *out13+*out30+*out31;
	return_port = out13 + out30 + out31;
	freopen("klee_output1.txt","a+",stderr);
	klee_print_expr("return_port:=",return_port);
	return out13 + out30 + out31;
}
/*int main()
{
int out13;
int out30;
int out31;

int ans=hls_macc(1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,&out13,&out30,&out31);
printf("%d",ans);
return 0;
}*/

