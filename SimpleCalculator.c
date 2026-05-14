#include<stdio.h>

void add(int x, int y);
void sub(int x, int y);
void mul(int x, int y);
void div(int x, int y);

int main()
{
    int  a,b, choice;
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);
    printf("Enter your choice: \n");
    printf("---------------------------------------------------------\n");
    printf("MENU:\n");
    printf("1. Add\n2. Substraction\n3. Multiplication\n4.Division\n");
    scanf("%d", &choice);
    while(choice!=-1)
    {


    switch(choice)
    {
    case 1:
        add(a, b);
        break;
    case 2:
        sub(a, b);
        break;
    case 3:
        mul(a, b);
        break;
    case 4:
        div(a, b);
        break;
        default: printf("Wrong choice!\n");
    }
    printf("Enter your choice: \n");
    printf("---------------------------------------------------------\n");
    printf("MENU:\n");
    printf("1. Add\n2. Substraction\n3. Multiplication\n4.Division\n");
    printf("Enter -1 to exit the calculator:\n");
    scanf("%d", &choice);

    }

    return 0;
}
void add(int x, int y)
{

    printf("Add result: %d\n",x+y);
}
void sub(int x, int y){
    printf("Substraction result: %d\n", x-y);
}
void mul(int x, int y)
{

    printf("Multiplication result: %d\n", x*y);
}
void div(int x, int y)
{
    float z = (float)x/y;
    printf("Division result: %.2f\n", z);
}
