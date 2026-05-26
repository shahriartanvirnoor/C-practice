/*           1
            1 2 1
          1 2 3 2 1
        1 2 3 4 3 2 1
      1 2 3 4 5 4 3 2 1
    1 2 3 4 5 6 5 4 3 2 1
  1 2 3 4 5 6 7 6 5 4 3 2 1
1 2 3 4 5 6 7 8 7 6 5 4 3 2 1
*/
#include <stdio.h>
     void pattern(int x);
int main()
 {
     int x;
     printf("Enter x: ");
     scanf("%d", &x);
     pattern(x);


     return 0;
 }

 void pattern(int x)
 {
  int i, j, k=0;
  for(i =1 ; i<=x; i++)
  {
      for(j=1; j<=x; j++)
      {
          if(j>=x-i+1)
            printf("%d ", ++k);
            else
            printf("  ");

      }
      if(i>=2){
        for(j=1; j<=i-1; j++){
            printf("%d ", j);
        }
      }
      printf("\n");
      k=0;

  }

 }
