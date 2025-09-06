#include<stdio.h>
int main()
    {
        int a,b;
        printf("Write the value of a:");
        scanf("%d",&a);
        printf("Write the value of b:");
        scanf("%d",&b);
        if (a%2==0)
            printf("\n %d is a even number.",a);
        else
            printf("\n %d a odd number",a);
            if (b%2==0)
            printf("\n %d is  a even number.",b);
        else
            printf("\n %d is a odd number",b);
        return 0;

    }
