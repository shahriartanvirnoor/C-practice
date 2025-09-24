#include <stdio.h>

int main() {
    int i=0, j=0;
    int add[100][100];
       int arr_1[3][3]={27, 83, 14, 56, 91, 42, 7, 68, 35};
       int arr_2[3][3]={12, 79, 44, 6, 58, 33, 90, 21, 65};
       printf("Summation of two matrix:\n");
       for(i=0;i<3;i++)
       {
           for(j=0;j<3;j++)
           {
               add[i][j]=arr_1[i][j]+arr_2[i][j];
               printf(" %d ",add[i][j]);
           }
            printf("\n");
       }

    return 0;
}
