/* Use of getchar and showing its output. I tried to use getchar to get a character input from user asnd to show it on the output. As a
new comer I think it was not good but my real intension was to practice. That's all.*/
#include<stdio.h>
int main()
    {
        char P;
        printf("Write a Character here : ");
        P =getchar();
        printf("\n You have selected : ");
        printf("'%c'",P);
        return 0;
        
    }
