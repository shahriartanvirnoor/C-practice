#include <stdio.h>

int main() {
    int arr[50]= { 42, 7, 89, 23, 56, 12, 94, 31, 65, 8, 77, 50, 3, 19, 82, 47, 91, 14, 60, 33, 5, 72, 28, 99, 41, 6, 88, 15, 54, 21, 79, 10, 63, 37, 95, 2, 48, 81, 26, 70, 11, 59, 34, 85, 4, 92, 17, 52, 68, 29};
    int isLarge = arr[0];
    for(int i= 1; i< 50; i++){
        if(isLarge < arr[i])
        isLarge= arr[i];
    }
    printf("This is the largest number : %d", isLarge);
    getchar();
    return 0;
}
