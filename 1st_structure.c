#include<stdio.h>
struct person{
char name[40];
int age;
float salary;
char blood_grp[40];
char nationality[40];

};

int main(){
struct person p1, p2, p3, p4, p5;
printf("Enter the value: ");
scanf("%s %d %f %s %s",p1.name, &p1.age, &p1.salary, p1.blood_grp, p1.nationality);
printf("Data of person1: \n");
printf("name= %s age= %d salary= %f blood_grp= %s nationality= %s",p1.name, p1.age, p1.salary, p1.blood_grp, p1.nationality);
return 0;

}
