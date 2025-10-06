#include<stdio.h>
int main()
{
   double cm, m, km;
   printf("Input Centimeter:\n");
   scanf("%lf",&cm);
   printf("Length in meter: %lf\n",cm/100);
   printf("Length in kilo meter: %lf",cm/1000);
   return 0;

}
