#include<stdio.h>
int main()
{
    int size;
    printf("Tell me array size :");
    scanf("%d", &size);
    int arr[size], i=0;
    int *p=arr;
    puts("Enter input:");
    for(i=0; i<size; i++){
        scanf("%d",p+i);
    }
    puts("Array elements : ");
    for(i = 0; i<size; i++){
        printf("%d ",*(p+i));
    }
return 0;
}
