/*Write a code to show the ouptut as a largest of the three*/
#include<stdio.h>
int main()
    {
        int num[3];
        int num1, num2, num3;
        int x, p;
        for(int i=0; i<3; i++)
        {
            printf("Write the %dno here : ",i+1);
            scanf("%d",&num[i]);
        }
        x=(p=(num[0]>num[1]?num[0]:num[1]))>num[2]?p:num[2];
        printf("%d",x);

        return 0;
    }
