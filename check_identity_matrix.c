#include<stdio.h>
int main()
    {
        int i, j;
        int y1, y2, y3;
        i=j=0;
        printf("Set row and column: ");
        int row, col;
        scanf("%d %d", &row, &col);
        int arr[row][col];
        for(i=0; i<row; i++){
            for(j=0; j<col; j++){
                scanf("%d",&arr[i][j]);
            }
        }
        if(row == col && row>1 && col>1){
        for(i=0; i<row; i++){
            for(j=0; j<col; j++){
                if((i==j && arr[i][j]==1)||(9i!=j && arr[i][j]==0))
                    y1=0;
                else 
                y2=1;
            }
        }
        y3=y1+y2;
        switch(y3){
            case 0:printf("Identity matix.");break;
            case 1:printf("!Non Identity!");break;
            
        }}
        else
        printf("!Non Identity Matrix!");
        printf("\nThis was a real fun!");
         
          return 0;
        
    }

