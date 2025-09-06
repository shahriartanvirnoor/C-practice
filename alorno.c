#include<stdio.h>
int main()
    {
        char ch;
        printf("Write any character:");
        scanf("%c",&ch);
        if(ch>='A' && ch<= 'Z' || ch>='a' && ch<='z')
        {
            printf("%c is an alphabet.",ch);
        }
        else {
            printf("%c is not an alphabet.",ch);
        }
     return 0;
    }
