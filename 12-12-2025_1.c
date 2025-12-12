#include <stdio.h>
#include <stdlib.h>
float average(float *arr, int i);
int main()
{
    int n;
    puts("Enter array size : ");
    scanf("%d", &n);
    float *arr = (float*) malloc(n*sizeof(float));
    int i=0;
    for(i=0; i<n; i++)
    {
        printf("Enter element of %d no : ",i);
        scanf("%f",arr+i);

    }
    float avg = average(arr,n);
    printf("This is the average of the total number %.6f", avg);

    getchar();
    return 0;
}
float average(float *arr,int n)
{ float sum=0;
int i=0;
    for(i=0; i<n; i++){

        sum = *(arr+i)+sum;

    }

    return sum/n;
}
