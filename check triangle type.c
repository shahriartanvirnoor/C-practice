#include<stdio.h>
int main()
 {
     int A,B,C;//A,B,C are  the angle

     printf("Write three angles in degree: ");
     scanf("%d %d %d",&A, &B,&C);
     if(A+B+C==180)
     {
         printf("\nTriangle is valid.");
         if(A=B=C)
     {
         printf("\nEquilateral triangle.");
     }
     else if(A==B || B==C || C==A)
      {
        printf("\nIsosceles triangle");
     }
     else
     {
     printf("\n Scalene triangle");}
     }
     else {
        printf("\n Triangle is invalid");
     }


     return 0;
 }
