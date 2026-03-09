#include <stdio.h>

void swap(int* num1, int* num2);
void selectionSort(int arr[], int n);
void arrayPrint(int arr[], int n);

int main() {

    int arr[100], i, n;

    printf("Set the array size: ");
    scanf("%d", &n);

    printf("Enter array input: ");

    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    selectionSort(arr, n);

   
        arrayPrint(arr, n);

    return 0;
}

void swap(int* num1, int* num2){
    int temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}

void selectionSort(int arr[], int n){

    int i, j, min;

    for(i = 0; i < n - 1; i++){

        min = i;

        for(j = i + 1; j < n; j++){
            if(arr[min] > arr[j])
                min = j;
        }

        swap(&arr[i], &arr[min]);
    }
}
void arrayPrint(int arr[], int n){
    printf("Now the array is: ");
    for(int i=0;i<n; i++){
        printf("%d ", arr[i]);
    }
}
