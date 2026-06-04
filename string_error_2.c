#include <stdio.h>
char names[10][20];
int main() {
  char arr[10];//error
  printf("Enter a name: ");//entering more than 10 char will show you an error
  scanf("%s",arr);
  printf("%s",arr);
    return 0;
}
/* warning: initializer-string for array of 'char' is too long*/
//But if you type 10 chars and then give a space then it will ignore all the last typing char
