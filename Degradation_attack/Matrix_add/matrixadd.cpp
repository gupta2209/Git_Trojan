//#include "matrixmul.h"
#include<iostream>
void matrixmul(
      int a[3][3],
      int b[3][3],
      int res[3][3])
{
	int i,j;

 int a1[3][3];
 //b1[MAT_A_ROWS][MAT_B_COLS];

 for(i = 0; i < 3; i++) {
       for(j = 0; j < 3; j++) {
        a1[i][j] = a[i][j];
        //b1[i][j] = b[i][j];
      }
    }

 int b1[3][3];

 for(i = 0; i < 3; i++) {
       for(j = 0; j < 3; j++) {
        //a1[i][j] = a[i][j];
        b1[i][j] = b[i][j];
      }
    }


 int res1[3][3];

   for(i = 0; i < 3; i++) {
       for(j = 0; j < 3; j++) {
        res1[i][j] = a1[i][j] + b1[i][j];
      }
    }

  for(i = 0; i < 3; i++) {
      //Iterate over the columns of the B matrix
       for(j = 0; j < 3; j++) {


           res[i][j] = res1[i][j];
         }
      }


  }



