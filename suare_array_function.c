#include <stdio.h>
void squ(int *arr);
int main()
{
    int arr[10]= {10, 15, 20, 25, 30, 35, 40, 45, 50, 55};
    squ(arr);
    for(int i=0; i<10; i++){
    printf("This is the result : %d\n", arr[i]);}
    return 0;
}

void squ(int *arr){
    for(int i=0; i<10; i++)
    {
        *(arr+i) =*(arr+i) * *(arr+i);
        
    }
}
