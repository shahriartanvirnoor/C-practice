#include <stdio.h>

int main(void)
{
    int value, index=-1;
    int arr[100]={ 47, 12, 89, 5, 63, 28, 91, 34, 76, 2,
54, 81, 39, 17, 68, 21, 99, 44, 7, 56,
13, 85, 37, 64, 19, 72, 3, 48, 27, 90,
6, 35, 58, 23, 77, 11, 66, 40, 1, 84,
32, 50, 95, 8, 61, 24, 70, 15, 82, 38,
4, 49, 29, 92, 18, 67, 9, 43, 25, 79,
36, 14, 86, 31, 73, 20, 55, 10, 88, 41,
16, 62, 26, 78, 33, 96, 22, 65, 30, 80,
46, 53, 97, 42, 60, 35, 71, 5, 83, 39,
12, 69, 1, 51, 94, 7, 74, 19, 87, 45,
2, 59, 28, 75, 6, 98, 37, 52, 9, 100};
printf("This is the array : ");
for(int i=0; i<100; i++)
    printf("%d ",arr[i]);
printf("\n");
printf("Enter a value: ");
scanf("%d",&value);
for(int i=0; i< 100; i++)
{
    if(value == arr[i])
    {
        index = i+1;
        break;
    }
}

if(index == -1)
    printf("not found\n");
else
    printf("The value found at %d pos\n", index);
    return 0;
}
