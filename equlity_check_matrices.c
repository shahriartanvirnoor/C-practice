#include<stdio.h>
int main()
    {
        int i, j, y=0;
        printf("Enter first matrix's row and column : ");
        int row1, col1;
        scanf("%d %d",&row1, &col1);
        printf("Enter second matrix's row and column : ");
        int arr1[row1][col1];
        int row2, col2;
        scanf("%d %d", &row2, &col2);
        int arr2[row2][col2];
        printf("Enter first arrays elements\n");
        for(i=0; i<row1 ; i++){
                for(j=0; j<col1;j++){
            scanf("%d",&arr1[i][j]);
        }}
        printf("Enter second array elements\n ");
        for(i=0; i<row2 ; i++){
                for(j=0; j<col2;j++){
            scanf("%d",&arr2[i][j]);
        }}
        if(row1==row2 && col1==col2){
            for(i=0; i<row1; i++){
                for(j=0; j<col2; j++){
                    if(arr1[i][j] == arr2[i][j]){
                        continue;
                    }
                    else{
                        y=1;
                        break;}
                }
            }
            switch(y){
            case 0: printf("Equal matrices."); break;
            case 1: printf("\n!Not equal matrices"); break;
            }
        }
        else
           printf("\n!Not equal matrices!");

    return 0;
    }
