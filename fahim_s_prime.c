#include <stdio.h>

int main() {
   int a=99;
   int prime=0;
   for(int i=2;i<=a/2;i++){
       if(a%i==0){
           prime=1;
           break;
       }
   }
   if(prime==1)printf("this num is not prime");
   else printf("prime");

    return 0;
}
