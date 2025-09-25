#include <stdio.h>

int main() {
    int arr[100];
     printf("Array element:");
    int num, i, count=0;
    for(int i=0; i<100; i++){
        arr[i]=i+1;
        printf(" %d ", arr[i]);
    }
    printf("\n\nSearch this element: ");
    scanf("%d",&num);
    for(int i=0; i<100; i++)
    {
        if(num==arr[i]){
            break;
            
        }
        count++;//counter doesn't work inside the break condiotion
        
    }
    printf("Array index:%d",count);
    

    return 0;
}
