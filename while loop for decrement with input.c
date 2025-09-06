#include <stdio.h>

int main() {
    int i,n;
    printf("How many time do you want to use the loop:");
    scanf("%d",&n);
    i=0;
    while(n>=i)
    {
       n--;
        printf("\n%d",n);
    }

    return 0;
}
/* It'll print 8 to -1 because it is starting from 8-1=7 and when it is 0 it again went to the boday and 0-1=0 would show*/
//date:06-09-2025
