/*first time using malloc function*/
#include <stdio.h>
#include <stdlib.h>


int main()
{
   int *arr= (int*) malloc(5*sizeof(int));
   for ( int i = 0 ; i< 5; i++)
   {
       printf("Enter element %dno :", i);
       scanf("%d",(arr+i));
   }
for(int i=0 ; i< 5;  i++) printf("\nThis is no %d element : %d\n", i,arr[i]);
free(arr);
    return 0;
}
