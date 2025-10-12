/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int sum=1;
    for(int i=0; i<10; i++){
        if(i==0)
        printf("%d ",sum);
        sum=sum*2;
        printf("%d ",sum);
    }

    return 0;
}