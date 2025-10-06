#include<stdio.h>
int main()
{
    double f, c;
    printf("Input temperature in Celscius:\n");
    scanf("%lf",&c);
    f=(9*c+160)/5;
    printf("Temperature in Fareinheit : %lf",f);
    return 0;

}
