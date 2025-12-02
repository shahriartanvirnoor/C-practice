/*Write a program in C to find the maximum number between two numbers using a pointer*/
#include<stdio.h>
void bign(int *n1, int *n2);
int main()
{
    int n1, n2;
    printf("Enter two numbers : ");
    scanf("%d %d", &n1, &n2);
    bign(&n1, &n2);
    return 0;

}
void bign(int *n1, int *n2)
{
    if(*n1 > *n2) printf("%d is the big one.",*n1);
    else printf("%d is the bigger one.", *n2);

}
