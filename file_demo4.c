#include<stdio.h>
int main()
{
    FILE *fs;
    char name[]= " I don't have that type of video on my channel. I think you understand my word pretty goood.Else you can ask me again.";
   fs= fopen("demo4.txt","a");
    if(fs==NULL){
        printf("Error while opening the file\n");

    }
    else{
        printf("File opened successfully\n");
        int i=0;
        while(name[i]!=NULL){
            fputc(name[i],fs);
            printf("%c",name[i]);
            i++;
        }
        fclose(fs);

    }
    return 0;
}
