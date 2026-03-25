#include<stdio.h>
int main()
{
    char ch;
    FILE* fp;
    fp = fopen("Test.txt", "r");
    if(fp == NULL)
        printf("File does not exist.\n");
    else{
        printf("File is open now\n");
        while(!feof(fp)){
            ch = fgetc(fp);
            printf("%c",ch);
        }
    }

    return 0;
}
