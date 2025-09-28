#include <stdio.h>

int main() {
   int largest, slargest, i;
   int arr[10]={1, -6, 0, 90, -75, 36, 55, -1, 25, 5};
   largest=-100;
   slargest=-101;
   for(i=0; i<10; i++){
       if(largest<arr[i]){
           slargest=largest;
           largest=arr[i];}
           else if(slargest<arr[i])
           slargest=arr[i];
      
   }
   printf("This is the second largest number: %d",slargest);
   
    return 0;
}
