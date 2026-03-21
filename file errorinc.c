#include<stdio.h>
int main(void)
{
    printf("Here write and read from a file\n");
    FILE *fp= fopen("text.txt","w");
    if(fp==NULL)
    printf("File open has failed\n");
    char *help= "Help me. I need help.";
    for(int i=0; help[i]!=0; i++){
      fputc(help[i], fp);//fputc need two parameter.first one for what you want to put and second one where you want to put the text.
    }
    char ch;
    while((ch=fgetc(fp))!=EOF){
      printf("%c",ch);
    }
    fclose(fp);
    
    
    return 0;
}
/* there is a mistake and can be considered a great one because you open the file in writting mode only
but you have tried to use it for read also. That is a big mistake. you need to separte
reading and weritting otherwise you will see error here. I think now you understand why for (is
not showing what you are exprecting.
<type>::const_iterator i = container.begin(); i != container.end(); ++i) {
  
}
