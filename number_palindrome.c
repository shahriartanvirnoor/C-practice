#include <stdio.h>

int main() {
    int num, rem, i, rev = 0, original;
    
    puts("Enter a number here: \n");
    scanf("%d",&num);
    original = num;
    while(num!=0){
         rem = num % 10;//1221
         
         rev = 10* rev + rem;
         num = num /10;
    }
    if( original == rev)
    printf("This  is  a palindrome\n");
    else 
    printf("This number is not palindrome");
    getchar();
    return 0;
}
