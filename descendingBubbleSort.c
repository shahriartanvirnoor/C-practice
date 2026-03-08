#include<stdio.h>
int main()
{
    int arr[]={8, 9, 1, 2, 7, 3, 6, 4, 5};
    int length= sizeof(arr)/ sizeof(arr[0]);
    printf("Array elements : ");
    for(int i=0; i<length; i++){
         printf("%d ", arr[i]);
    }
    printf("After sorting : ");
    for(int i = 0 ; i< length-1; i++){
        for(int j=0; j<length-1-i; j++){
            if(arr[j]< arr[j+1]){
                int tmp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1]= tmp;
            }
        }
    }
    for(int i=0; i<length; i++){
        printf("%d ", arr[i]);
    }
    
}
