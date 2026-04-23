#include <stdio.h>

int main() {
    int x, y;
    printf("Enter two number in one line seperated by space.\n");
    scanf("%d%d", &x, &y);
    scanf("%d %d", &x, &y);//is there any difference between these two line of code?
    /*Ans is no. there is no difference between these two line of codes */
    printf("x = %d, y = %d\n",x, y);

    return 0;
}
