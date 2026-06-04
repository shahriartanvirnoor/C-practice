#include <stdio.h>
char names[10][20];
int main() {
  char arr[10]="MuhammedIbnh";//error
  printf("%s",arr);
    return 0;
}
/* warning: initializer-string for array of 'char' is too long*/
