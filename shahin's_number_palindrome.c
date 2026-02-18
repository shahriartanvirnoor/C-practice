#include<stdio.h>

int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    int rev = 0;
    int copy = num;
    while(copy != 0){
        int a = copy%10;
        rev = rev * 10 + a;
        copy = copy/10;
    }
    if(rev == num)
        printf("Palindrome");
    else
        printf("Not Palindrome");
    return 0;
}
