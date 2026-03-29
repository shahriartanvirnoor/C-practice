#include<stdio.h>
#include<string.h>
int main()
{
    char name[30];
    printf("Enter your name: ");
    scanf("%29[^\n]s", name);
    printf("Hello, %s.\n",name);
    return 0;
}
