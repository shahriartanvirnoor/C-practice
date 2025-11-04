#include <stdio.h>
int series_10(int k);

int main()
{
    printf("input the value: ");
    int a;
    scanf("%d", &a);
    printf("The series value is : %d", series_10(a));

    return 0;
}
int series_10(int k)
{
    if(k>0){
        return k+ series_10(k-1);
    }
    else 
    {
        return 0;
    }
}
