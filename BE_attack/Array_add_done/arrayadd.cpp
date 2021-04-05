
#include "arrayadd.h"
#include<stdio.h>

int add( int  array[8],  int sum)

{
int array1[8];
for(int i = 0; i < 8; i++)
{
	array1[i] = array[i];
}
sum = 0;
  for(int i = 0; i < 8; i++) {

sum = sum + array1[i];
      }
  return sum;
    }




