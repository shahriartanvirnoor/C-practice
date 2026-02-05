#include<stdio.h>
#include<stdlib.h>
int main(){
    int n;
    printf("Set array size: ");
    scanf("%d",&n);
    
    int *ptr = calloc(n,sizeof(int));
    int i=0;
    for(i; i<n; i++)
    {
        scanf("%d",&ptr[i]);//the way we have to take user input
        printf("%d number array has value of %d\n",i, ptr[i]);
        //the way we should see the the value
    }
}
