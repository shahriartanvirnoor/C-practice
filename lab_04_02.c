#include<stdio.h>
int swap(int *a, int *b);
int main()
{
  int num1, num2;
  puts("Enter number 1:");
  scanf("%d",&num1);
  puts("Enter number 2:");
  scanf("%d",&num2);
  printf("Before swaping \nnum1: %d num2: %d\n",num1, num2);
  swap(&num1, &num2);
  printf("After using swap function \nnum1 : %d num2 : %d\n", num1, num2);
  return 0;

}
int swap(int *a, int *b)
{
    int c = *a;
    *a = *b;
    *b = c;

}
