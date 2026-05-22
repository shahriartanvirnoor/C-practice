#include <stdio.h>

void Sum(int n);

int main()
{
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    Sum(n);
    return 0;
}

void Sum(int n)
{
    int sum = (n*(n-1))/2;
    printf("Sum of %d number: %d\n",n, sum);
}
