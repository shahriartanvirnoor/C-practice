#include <stdio.h>

int main()
{
    int i=0;
    printf("Show casing poineter pointing to a string\n");
    char name[100]="What is your name? I want to know it.";
    char *p;
    p= name;
    while(*p!='\0'){
        putchar(*p);
        p++;
        i++;
    }
printf("\nTotal number of character : %d", i-1);
    return 0;
}
