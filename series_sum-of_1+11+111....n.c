/*sum of a 1+11+111+1111=...+n*/
#include <stdio.h>

int main() {
    int i, pre, sum, end;//pre= working with previous value of the series and multiplication.
    //sum for updating the value and storing the previous sum
    // end=loop end points
    
    printf("Write the end point:");
    scanf("%d",&end);
    pre=0;
    sum=0;
    for(i=1;i<=end;i++)
    {

        pre=1+(pre*10);
        sum=sum+pre;
    }
    printf(" Sum= %d",sum);

    return 0;
}
