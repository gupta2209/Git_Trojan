#include<stdio.h>
int hls_macc(int in1, int in2, int in3, int in4, int in7, int in8, int in9, int in10, int in12, int in14,int in15, int in17, int in19, int in20,
int in22, int in24, int in27, int in28, int in29, int in32, int *out13, int *out30, int *out31)
{

	int t5, t6, t11, t16, t18, t21, t23, t25, t26;//temporary

	//*out30 = 0;
	t5 = in3 - in4;      /* b */
	t6 = in7 + in8;      /* a */
	*out13 = in14 - in15;   /* k - output node */
	t11 = t6 + in12;    /* */
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
	  *out30 = t26 + in29;  /* l - output node  */
	}
	*out31 = t16 + in32;   /* n - output node  */
	//printf("%d ",*out31);
	return *out13+*out30+*out31;

}

int main()
{
for(int i=0; i<50; i++){
int out13 = 0;
int out30 = 0;
int out31 = 0;
int in1,in2,in3,in4,in7,in8,in9,in10,in12,in14,in15,in17,in19,in20,in22,in24,in27,in28,in29,in32;
scanf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d",&in1,&in2,&in3,&in4,&in7,&in8,&in9,&in10,&in12,&in14,&in15,&in17,&in19,&in20,&in22,&in24,&in27,&in28,&in29,&in32);
int ans=hls_macc(in1,in2,in3,in4,in7,in8,in9,in10,in12,in14,in15,in17,in19,in20,in22,in24,in27,in28,in29,in32,&out13,&out30,&out31);
printf("%d\n",ans);
}
return 0;
}

