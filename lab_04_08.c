#include<stdio.h>
int strleng(char str[]);
int main()
{
    puts("Enter string: ");
    char str[100];
    scanf("%[^\n]", str);
    int n= strleng(str);
    printf("Length of the string : %d", n);
    return 0;

}
int strleng(char str[]){
int n=0;
while(str[n]!='\0'){
    n++;
}
return n;
}
