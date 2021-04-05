#include<stdio.h>
void min_max(int arr[5],int *out1,int *out2,int size)
{
	int arr_new[5];
	int i=0;
	int min_value;
	int max_value;
	for(i=0;i<size;i++)
	{
		arr_new[i]=arr[i];
	}
	
	min_value=arr_new[0];
	max_value=arr_new[0];
	
	for(i=1;i<size;i++)
	{
		if(min_value>arr_new[i])
		{
			min_value=arr_new[i];
		}
		if(arr_new[i]>max_value)
		{
			max_value=arr_new[i];
		}
	}
	
	*out1=min_value;
	*out2=max_value;
}

int main()
{
	int arr[5]={5,4,3,2,1};
	int min_value;
	int max_value;
	min_max(arr,&min_value,&max_value,5);
	printf("%d\n",min_value);
	printf("%d\n",max_value);
	return 0;
}
	
	
		
