#include<stdio.h>
int main(void)
{
    char ch[100];
        FILE* fp;
        fp= fopen("Test.txt", "r");
        if(fp== NULL)
            printf("File open failed\n");
        else
        {
            printf("File is open now.\n");
            while(!feof(fp)){
                fgets(ch, 99, fp);
                printf("%s", ch);

            }
            fclose(fp);
        }




    return 0;
}
