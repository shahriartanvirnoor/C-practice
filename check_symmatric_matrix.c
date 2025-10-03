#include<stdio.h>
int main()
    {
        printf("Set square matrix diamension\n");
        int i, j,y=0;
        int row, col;
        scanf("%d %d",&row, &col);
        if(row==col){
        int arr[row][col];
        int tra[col][row];
        printf("Now, input elements :\n");
        for(i=0; i<row; i++){
            for(j=0; j<col; j++){
                scanf("%d",&arr[i][j]);
            }
        }
        for(i=0; i<row;i++){
           for(j=0;j<col;j++){
               
               tra[j][i]=arr[i][j];
           }
            
        }
        for(i=0; i<row; i++){
                for(j=0; j<col; j++){
                    if(arr[i][j] == tra[i][j]){
                        continue;
                    }
                    else{
                        y=1;
                        break;}
                }}
                
   switch(y)  {
      case 0: printf("Symmetric matrix.");break;
      case 1: printf("Asymmetric matrix!");break;
   } }
   else
   printf("Diamension is not in square form!.");
   return 0;}
   
