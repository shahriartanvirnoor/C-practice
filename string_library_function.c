#include <stdio.h>
#include <stdlib.h>
#include <string.h>


 int main ()
 {
    // char fname[20], lname[20];
    // printf("Enter your first name: ");
    // scanf("%19s", fname);
    // printf("Enter your last name: ");
    // scanf("%19s", lname);
      // char name[] = "Muhammed";
      // printf("Name : %s\nSizeof(name) : %d\n",name, sizeof(name));
      // printf("strlen(name) : %d\n", strlen(name));
      //lets's see if we can change the whole array
      // name[sizeof(name)]= "Ali";
      // printf("Name : %s\n", name);
      // strncpy(name,"Hassan Mahumd",8);
      // printf("Number : %d\n", atoi(name));//this one contain string so it can be turned into a number
      // printf("Name : %s\nstrlen(name) : %d\n", name, strlen(name));
      // strcpy(name,"89570");
      // printf("Number : %s\n", name);
      // int x = atoi(name);

   //  char *name = "MD Hassan";
   //  printf("Name : %s\n", name);
   //  printf("Now sizeof(name) : %d\n", sizeof(name));
   //  printf("strlen(name) : %s\n", strlen(name));
   //  name = "Abul khayer Chowdhury";
   //  printf("Name : %s\n",name);
   //  printf("Now sizeof(name) : %d\n", sizeof(name));
   //  printf("strlen(name) : %s\n", strlen(name));
   char fname[30], lname[20],fulname[50];
   printf("Enter your first name: ");
   fgets(fname,29,stdin);
   //printf("Index number of \\n is %d\n",strcspn(fname,"\n"));
   fname[strcspn(fname,"\n") ] = '\0';
   printf("Enter your last name: ");
   fgets(lname,20, stdin);//why it is taking a newline character here?
   strcat(fname, " ");
   strcat(fname,lname);//can take two arguments at most. one for destination and one for source
   printf("Full name : %s\n",fname);//I am thinking how I can able to put a space between fname and lname


 }
