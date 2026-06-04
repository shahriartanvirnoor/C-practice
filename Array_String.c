#include <stdio.h>
char names[10][20];
int main() {
  for(int i=0; i<5; ++i)
  {
      printf("Enter a name(without space)\n::::");
      scanf("%s",names[i]);
  }
  printf("now let's see who are the winner\n");
  for(int i=0; i<5; i++)
  {
      printf("%d --> %s\n",i+1,names[i]);
  }
    return 0;
}
