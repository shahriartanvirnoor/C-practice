/*print all negative element in array  */
#include<stdio.h>
int main()
{
    printf("Write the size of array :\n");
    int n;
    scanf("%d",&n);
    int arr[n];
    printf("Write the element of array :\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Negative element in array\n:");
    for(int i=0;i<n;i++)
    {
        if(arr[i]<0)
        {
            printf("%d ",arr[i]);
        }
    }   
    
   
    return 0;
}   
