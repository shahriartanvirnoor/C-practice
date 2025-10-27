#include <stdio.h>
#define PI 3.1416
float area(float r){
    float b= PI*r*r;
    return b;
}
int main()
{
    printf("Welcome to C programming.\n");
    printf("Input your radius:\n Radius = ");
    float radius;
    scanf("%f",&radius);
    float b= area(radius);
    printf("\nArea of the given Circle: %f",area(radius));
    return 0;
}
