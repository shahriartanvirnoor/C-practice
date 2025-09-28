#include<stdio.h>
int main()
{

    int i, j, r1, c1, r2, c2, sum=0,k;
    printf("Input r1 c1: ");
    scanf("%d %d",&r1, &c1);
    printf("Input r2 c2: ");
    scanf("%d %d",&r2, &c2);
    printf("\nEnter first  matrix's element:\n ");

    int A1[r1][c1];
    for(i=0; i<r1; i++){
        for(j=0; j<c1; j++){
            scanf("%d",&A1[i][j]);
        }}
        
    int A2[r2][c2];
    printf("\nEnter second  matrix's element:\n ");


    for(i=0; i<r2; i++){
        for(j=0; j<c2; j++){
            scanf("%d",&A2[i][j]);
        }
    }
    int A3[r1][c2];
    printf("Multiplication matrix: \n");
    if(c1==r2){
        for(i=0;i<r1;i++){
            for(j=0; j<c2; j++){sum=0;
                for(k=0;k<c1;k++){
                sum=sum+A1[i][k]*A2[k][j];}
                A3[i][j]=sum;
                printf(" %d ",A3[i][j]);
            }
            printf("\n");
            
            
        }
    }
    else
    printf("!Error!");
    
    
    return 0;
    }//valid one
