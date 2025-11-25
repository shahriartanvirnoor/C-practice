#include<stdio.h>
int main()
{
    int num1, num2, sum;
    printf("Enter the value of num1 and num2 :");
    scanf("%d %d",&num1, &num2);
    int *ptr1, *ptr2;
    ptr1=&num1;
    ptr2=&num2;
    sum = *ptr1 + *ptr2;
    printf("Result = %d",sum);
    return 0;

}
