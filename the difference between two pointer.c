#include <stdio.h>

int main()
{
    int num[4]={3, 4, 5, 6};
    int *start = &num[1];
    int *end = &num[3];
    printf("%d",(start - end));/*it will tell us how much differene between them*/
    return 0;
}
