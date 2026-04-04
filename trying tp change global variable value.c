/* I will create a global variable and then I will try to change it in a function. then see what happend to it?*/
#include<stdio.h>
int x= 90;
int main()
{
    x = 89;
    printf("The value of x is %d\n",x);
    return 0;
}
// actually I didn't set it as a define. সো েই মান  পরিবর্তন হবে না।
