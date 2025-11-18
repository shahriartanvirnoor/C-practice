#include <stdio.h>
struct student{
 char   name[40];
 int id;
 char dept[40];
 char gender;
 char year[8];

};
int main()
{
    struct student s[5];
    printf("Enter input: \n");
    printf("Name:   ID:  Dept:  Gender:  Year:  \n");
    for(int i=0; i<5; i++){
        scanf("%s %d %s %c %s", s[i].name, &s[i].id, s[i].dept, &s[i].gender, s[i].year);
    }
    printf("Result : ");
    for(int i=0; i<5; i++){
       printf("%s %d %s %c %s\n", s[i].name, s[i].id, s[i].dept, s[i].gender, s[i].year);
    }
   return 0;
}
