/*Count positive and negative numbers in 5 inputs*/
#include<stdio.h>
int main()
    {
        printf("Set array size: ");
        int size;
        scanf("%d",&size);
        int arr[size];
        int neg=0, count=0, zero=0;
        for(int i=0; i<size; i++){
            printf("Input element: ");
            scanf("%d",&arr[i]);
        }
        for(int i=0; i<size; i++){
            if(arr[i]>0)
                count++;
           
            else if(arr[i]<0)
                neg++;
           
            else zero++;
        }
        printf("Positive count= %d",count);
        printf("\nNegative count=%d",neg);
        printf("\nZero count= %d",zero);
        return 0;
    }
