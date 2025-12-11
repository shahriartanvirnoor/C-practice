#include<stdio.h>
#include <stdlib.h>
int main(){
    int n;
    printf("Enter the size of array here : ");
    scanf("%d",&n);
    int *ptr= (int*) malloc(n*sizeof(int));//array begin here
    for(int i=0; i<n; i++)
    {
        printf("Element of %d no ",i+1);
        scanf("%d",ptr+i);

    }
    printf("Realloc will be use here\n");
    int *arr= realloc(ptr, 8*sizeof(int));
    if(!arr)
    printf("Realloc didn't brought back here");
    else
        printf("realloc is successfully completed");
    ptr=arr;
     for(int i=0; i<8; i++)
    {
        printf("Element of %d no ",i+1);
        scanf("%d",ptr+i);

    }
    printf("\nhere is the array: \n");
    for(int i=0; i<8; i++)
    {
        printf("Element no %d....->%d\n",i, *(ptr+i));


    }
free(ptr);
return 0;
}
