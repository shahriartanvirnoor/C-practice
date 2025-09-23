#include <stdio.h>

int main()
{
    int num;
    printf("Write a number : ");
    scanf("%d",&num);
    switch(num>0?1:num==0?2:3)
    {
        case 1: printf("\nNumber is positive."); break;
        case 2: printf("\nNumber is Zero"); break;
        case 3: printf("\nNumber is Negative"); break;
        
        
    }
    printf("\nI hope you don't make me feel worried.");
    return 0;
}
