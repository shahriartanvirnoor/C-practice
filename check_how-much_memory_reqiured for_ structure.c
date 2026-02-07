#include <stdio.h>
typedef struct{
    char name[50];
    int Age;
    float CGPA;
    char number[11];
} student;
int main(){
    student s1= {"shahriar", 21, 1.60,"01890945827"};
    int x = sizeof(student);
    printf("This is the size of every student data type: %d", x);
    return 0;
}
