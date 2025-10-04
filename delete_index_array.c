#include<stdio.h>
int main()
    {
        int del;
        int arr[20]={47, 12, 89, 5, 63, 30, 76, 21, 55, 98,42, 8, 71, 19, 60, 3, 84, 29, 50, 93
};
printf("Main arry:\n");
for(int i=0;i<20; i++){
    printf("%d ",arr[i]);
}
printf("\nDelete index :\n");
scanf("%d",&del);
if(del<20){
printf("Array after deletting index no %d\n",del);
for(int i=0;i<20; i++){
    if(i==del){
        continue;
    }
    printf("%d ",arr[i]);
}}
else
printf("\nExceeding array size.");
return 0;
    }
