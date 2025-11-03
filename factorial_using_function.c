#include <stdio.h>
long long int factorial(long long int f);

int main()
{
   puts("Input number here: ");
   long long int num;
   scanf("%lld",&num);
   long long int result= factorial(num);
   printf("Your result is :%lld ", result);
   
    return 0;
}


long long int factorial(long long int f)
{
    if(f==1){
        return 1;
    }
    else {
        return factorial(f-1)*f;
    }
}
