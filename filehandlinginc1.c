#include <stdio.h>
int main()
{
 FILE *fp = fopen("text.txt","w");//opening a file name text.txt and mode is w means overwrite
 
 if(fp == NULL)
 printf("File open has failed.\n");//Seeing if the file has opend or not
 fprintf(fp, "Hello Shahriar");//you can format the text like %d,%f etc.
 fputs("I am from Afghanistan.",fp);//Can't format the text. it is like puts function.
 fputc('A',fp);//giving one input at a time.
 fclose(fp);
 printf("File open has succesfuled.\n");
 return 0; 
}
  /*for writing in the file we havec seen 3 function there. These function without f is used 
  as printf, puts and putc. You should remember one used for format txt one for not format but
  for string and the other is for character.*/
  /*There are three method for reading from a file. one is fscanf, one is fputs and the other
  is fputc. fscanf for formating text but it end with space. other can read full line and the remaining 
  one can read one character at a time.*/
  /* fgets(line, sizeof(line), fp);
  fgets(line, sizeof(line), filename);
  it require three parameter one is string name, one is the size of the string array and remainning
  one is file_name.*/
  /* other two
