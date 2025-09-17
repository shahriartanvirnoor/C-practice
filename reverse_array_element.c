#include <stdio.h>
int main() {
    int n, i;
    printf(" Array size : ");
    scanf("%d",&n);
    float num[n];
    
    
    printf("\nWrite the array element : ");
    for(i=0;i<n; i++)
    {
        scanf("%f",&num[i]);
        
    }
    printf("\n reverse array: \n");
    for(i=n-1;i>=0;i--)
    {
        printf(" %.2f ",num[i]);
    }
    return 0;
}
