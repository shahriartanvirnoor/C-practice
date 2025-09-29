#include<stdio.h>
int main()
{
    int arr[] = {-87, 48, -21, 52, 49, -34, 92, 94, 96, -29, 19, 9, -89, -22, -77, 69, 44, -52, 26, 32, 68, 75, 34, 45, 28, -63, -67};
    int i, j, k;
    int size = 27;

    for(i = 0; i < size; i++){
        for(j = 0; j < size - 1; j++){
            if(arr[j] > arr[j+1]){
                k = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = k;
            }
        }
    }

    for(i = 0; i < size; i++){
        printf("%d ", arr[i]);
    }

    return 0;
}
