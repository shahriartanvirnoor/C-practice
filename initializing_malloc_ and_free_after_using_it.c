#include<stdio.h>
#include<stdlib.h>
int main(){
    int n;
    printf("Set array size: ");
    scanf("%d",&n);
    /*Initializing malloc and show its value. But here it didn't show any garbaze value insted
    it is showing zero. I think the reason behind the scene is it is actually
    my use of differennt compiler*/
    
    int *ptr = malloc(n*sizeof(int));
    for(int i= 0; i< n; i++){
        printf("This is the malloc value %d\n",ptr[i]);
    }
    free(ptr);// free the memory after using it for a while
}
