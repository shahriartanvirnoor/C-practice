#include <stdio.h>
void sqc(int arr[], int size);
int main()
{
    int arr[7]= {5, 4, 3, 1, 8, 9, 6};
    printf("function beginning\n");
    sqc(arr , 7);
    return 0;
}

void sqc(int arr[], int size){
    for(int i =0; i<size; i++){
        int t = arr[i];
        int s = t*t;
        int c = s*t;
        printf("main number =%d--> square = %d, cube = %d\n",t, s, c);
    }
}
