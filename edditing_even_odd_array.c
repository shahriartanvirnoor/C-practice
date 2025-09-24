/*write a c program to put even and odd number in two differnt array*/
/*-->Require array=3
-->for loop and cindition two more counter*/
#include <stdio.h>

int main() {
    
    int arr[15]={76,3,98,74,47,47,97,345,55,86,45,34,93,48,1};
    int odd[15];
    int even[15];
    int i=0, co=0 , ce=0;
    for(i=0 ;i<15 ; i++)
    {
        if(arr[i]%2!=0){
            odd[co]=arr[i];
            co++;
        }
        else
        {
            even[ce]=arr[i];
            ce++;
        }
        
    }
    for(co=0;co<15;co++)
    printf(" %d ",odd[co]);
    for(ce=0; ce<15;ce++)
    printf(" %d ",even[ce]);

    return 0;
}
