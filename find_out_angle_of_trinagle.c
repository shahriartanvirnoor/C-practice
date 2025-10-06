#include<stdio.h>
int main()
    {
      double A, B, C;
      printf("Input first angle :\n");
      scanf("%lf",&A);
      printf("Input second angle :\n");
      scanf("%lf",&B);
      if(A+B<180){

      C= 180-(A+B);
      printf("Third angle is = %lf \n",C);}
      else
        printf("!Error!\nSum of three angle of a tringle must be less than 180 degree.");
      return 0;


    }
