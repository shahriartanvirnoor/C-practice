#include<stdio.h>
int main()
{
   double ba, po, re;
   printf("Input base: ");
   scanf("%lf",&ba);
   printf("Input power: ");
   scanf("%lf",&po);
   for(int i=1; i<=po; i++){
    if(i==1)
        re=ba;
    else
       re=re*ba;
   }
   printf("Result : %lf",re);
   return 0;

}
