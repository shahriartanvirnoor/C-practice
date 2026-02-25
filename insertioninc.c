#include <stdio.h>

int main() {
    int num, pos, size, arr[100], i=0;
    printf("Enter array size: ");
    scanf("%d", &size);
    printf("Enter array element one after another with space\n");
    for(i =0; i<size; i++){
        scanf("%d",&arr[i]);
    }
    printf("These are the array elements: \n");
    for(i= 0; i<size; i++){
        printf("%d ", arr[i]);
    }
    printf("Enter the number you want to insert : ");
    scanf("%d", &num);
    printf("Enter the position where you want to put the element\n");
    scanf("%d", &pos);
    size = size + 1;
    for(i = size-1; i>= pos; i--){
        if(i==pos){
            arr[pos -1 ]= num;
        }
        else 
        arr[i] = arr[ i- 1];
    }
    printf("NEw array is : \n");
    for(i= 0; i< size; i++){
        printf("%d ", arr[i]);
    }

    return 0;
}
