#include<stdio.h>
int main()
    {
        int n;//n for number of the month
        printf("Write a number of month here:");
        scanf("%d",&n);
        switch(n)
        {
        case 1: printf("number of day in %dst month 31",n); break;
        case 2: printf("number of day in %dnd month 28",n); break;
        case 3: printf("number of day in %drd month 31",n); break;
        case 4: printf("number of day in %dth month 30",n); break;
        case 5: printf("number of day in %dth month 31",n); break;
        case 6: printf("number of day in %dth month 30",n); break;
        case 7: printf("number of day in %dth month 31",n); break;
        case 8: printf("number of day in %dth month 31",n); break;
        case 9: printf("number of day in %dth month 30",n); break;
        case 10: printf("number of day in %dth month 31",n); break;
        case 11: printf("number of day in %dth month 30",n); break;
        case 12: printf("number of day in %dth month 31",n); break;
        default: printf("Error.",n);

        }
        return 0;
    }
