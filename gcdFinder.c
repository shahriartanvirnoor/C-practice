#include<stdio.h>
int main()
{
    int num1, num2, n1, n2, rem, gcd, lcm;
    printf("Enter num1: ");
    scanf("%d", &num1);
    printf("Enter num2: ");
    scanf("%d", &num2);
    n1= num1;
    n2= num2;
    while(n2!=0){
        rem = n1 % n2;
        n1 = n2;
        n2= rem;
    }
    gcd = n1;
    printf("This is the gcd of those numbers: %d\n", gcd);
    lcm = num1 * num2 /gcd;
    printf("This is the lcm of those numbers: %d\n", lcm);

    return 0;
}
