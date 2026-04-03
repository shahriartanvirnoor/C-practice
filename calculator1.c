#include<stdio.h>
int add(int a, int b);
int sub(int a, int b);
int mul(int a, int b);
int main()
{
    int sum, n1, n2;
    
    printf("Enter number 1: ");
    scanf("%d",&n1);
    
    printf("Enter number 2: ");
    scanf("%d",&n2);
    
    int (*ptr)(int , int);
    
    int opt;
    printf("Enter option: \n");
    printf("1. Add type \n");
    printf("2. Sub type \n");
    printf("3. Mul type \n");
    scanf("%d", &opt);
    switch(opt){
        case 1: ptr = add; break;
        case 2: ptr = sub; break;
        case 3: ptr = mul; break;
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        case 0: printf("NO option\n");break;
    }
    printf("The result is : %d", ptr(n1, n2));
    
    
   return 0;   
}
int add(int a, int b){
    return a+b;
}

int sub(int a, int b){
    return a-b;
}

int mul(int a, int b){
    return a*b;
}
