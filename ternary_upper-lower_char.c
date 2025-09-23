#include<stdio.h>
int main()
    {
        char c;
        printf("Write a character here : ");
        scanf("%c",&c);
        switch((c>='A'&&c<='Z')?1:(c>='a'&&c<='z')?2:3)
        {
        case 1:printf("Upper case character.");break;
        case 2:printf("Lower case character.");break;
        case 3:printf("!Invalid character.");break;
        }
        return 0;
    }
