/*Write a C program to calculate product of digits of any number.*/
#include<stdio.h>
int main()
    {
        int num, sum, rem;
        printf("Write a number : ");
        scanf("%d",&num);
        rem=0;
        sum=0;
        while(num>0)
        {
            rem= num%10;
            sum= sum + rem;
            num= num/10;

        }
        printf("\nSum of digit of that :%d",sum);
        return 0;
    }
