#include<stdio.h>
int main()
    {
        int i=0,j=0,k=0;
        int arr[4][3]={1,2,3,4,5,6,7,8,9,10,11,12};
        int tra[3][4];
        for(i=0;i<4;i++){
            for(j=0;j<3;j++){
                printf(" %d ",arr[i][j]);
            }printf("\n");
        }
        for(i=0; i<4;i++){
           for(j=0;j<3;j++){
               
               tra[j][i]=arr[i][j];
           }
            
        }
        
        printf("\nTranspose:\n");
        for(j=0;j<3;j++){
            for(i=0;i<4;i++){
                printf(" %d ",tra[j][i]);
            }printf("\n");
        }
     return 0;
