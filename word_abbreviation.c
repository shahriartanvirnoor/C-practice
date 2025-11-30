#include <stdio.h>
void check(char a[]);
int main()
{
    char word[80];
    printf("Enter word: ");
    scanf("%s",word);
    check(word);
    return 0;
}
void check(char a[])
{
    int i=0;
    while(a[i]!='\0')
{
    i++;
}

if(i>=10){
    printf("%c%d%c",a[0], i-2,a[i-1]);}
 else printf("%s", a);   

}
