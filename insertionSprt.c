#include<stdio.h>
void insertionSort(int arr[], int size);
int main()
{
    int n, i, arr[50];
    printf("Set the array size: ");
    scanf("%d", &n);
    printf("Enter array elments here : ");
    for(i=0; i<n; i++)
    {scanf("%d", &arr[i]);}
    printf("Array befor soting: ");
    for(i=0; i<n; i++){
        printf("%d ", arr[i]);
        if(i == n-1)
            printf("\n");
    }
    insertionSort(arr, n);
    printf("Array after sorting: ");
    for(i =0; i< n; i++)
        printf("%d ", arr[i]);
    return 0;
}
void insertionSort(int arr[], int size)
{
    int key, j, i;
    for(i= 1; i<size; i++)
    {
        key = arr[i];
        j = 1;
        while(j>0 && arr[j-1]> key)
        {
            arr[j]= arr[j-1];
            j--;

        }
        arr[j]= key;

    }

}
