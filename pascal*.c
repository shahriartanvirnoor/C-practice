#include <stdio.h>

int main()
{
  int i, j, num, mid;
  char s = ' ';
  char st = '*';
  printf("Enter a number: ");
  scanf("%d",&num);
  mid = num;

  for(i=1; i<=num; ++i)
  {
    for(j=1; j<2*num; j++)
    {
      if(j==mid){
        printf("%c",st);
      }
      else if(j>=mid-i+1 && j<= mid+i-1)
      {
        printf("%c",st);
      }
      else
      {
        printf("%c",s);
      }
    }
    printf("\n");
  }

  return 0;
}
