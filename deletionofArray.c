#include <stdio.h>

int main() {
    int array[50], pos, size;
    printf("Set the size of array: ");
    scanf("%d", &size);
    printf("Enter the array element\n");
    for(int i=0; i< size; i++){
        scanf("%d", &array[i]);
    }
    printf("Give the position of element that you want to delete.\n");
    scanf("%d",&pos);
    pos -= 1;
    size -= 1;
    for(int i = pos; i< size; i++){
        array[i] = array [i+1];
    }
    printf("Array after deletion: \n");
    for(int i= 0; i<size; i++){
        printf("%d ",array[i]);
    }
    return 0;
}
