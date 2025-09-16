#include<stdio.h>
int main()
    {
        int num[4][4];


        for(int i=0; i<=3; i++)
        {
             printf(" Write your num here :");
        for (int j=0; j<=3; j++)
        {

            scanf("%d",&num[i][j]);
        }
        }
        
        for(int i=0; i<=3; i++)
        {
            for(int j=0; j<=3; j++)
                printf(" %5d ",num[i][j]);
                printf("\n");
        }

        return 0;
    }
