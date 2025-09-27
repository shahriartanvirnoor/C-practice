#include<stdio.h>
int main()
    {
        int days, year, month, week,day,remain;
        printf("Input an days : ");
        scanf("%d",&days);
        year=days/365;
        remain=days%365;
        month=remain/30;
        remain=remain%30;
        week=remain/7;
        day=remain%7;
        printf("year = %d",year);
        printf("\nMonth = %d",month);
        printf("\nweek = %d",week);
        printf("\ndays = %d",day);
        printf("\nThat is all!");
        
        return 0;
   
    
       
        
    }
