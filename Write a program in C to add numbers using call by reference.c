#include <stdio.h>
int add(int* , int*);
int main()
{
    printf("Enter two numbers : ");
    int n1, n2, sum;
    scanf("%d %d", &n1, &n2);
    printf("n1= %d and n2=%d\n",n1, n2);
    sum = add(&n1, &n2);
    printf("Sum = %d\n", sum);
    return 0;

}
int add(int* n1, int* n2){

return *n1+*n2;
}
