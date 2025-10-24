#include <stdio.h>
int main()
    {

        int f1, f2, fn, num;
        f1=0; f2=1; fn=0;
        puts("Enter your endpoint : ");
        scanf("%d", &num);
        puts("Fibonacci series: ");
        for(int i=1; i<=num; i++){
                if(i==1){
                 printf("%d ",f1);}

            else
            {
               fn= f1+ f2;
               printf("%d ", fn);
               f2= f1;
               f1= fn;
            }

        }
        return 0;
    }
    /*0 1 1 2 3 5 8 11 19 30 49.....*/
