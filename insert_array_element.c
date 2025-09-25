#include <stdio.h>

int main() {
    int arr[50]={-313, -796, -390, 75, 181, 865, -371, -587, -353, 681,
-359, 363, 281, -423, 378, -152, -524, 173, -682, 714,
634, 954, 21, 446, -614, 442, 817, -601, -977, 876,
20, -717, -394, 810, -912, -257, -175, 788, 586, 199,
840, -791, 169, 301, 728, 878, 357, -426, -2, -772};
    int num,insert,i;
    printf("Array: \n");
    for(i=0; i<50; i++)
    {
        printf("  %d  ",arr[i]);
    }
    printf("\nWrite index number that you want to insert: ");
    scanf("%d",&num);
    printf("\nChange value : ");
    scanf("%d",&insert);
    printf("\nUpdated array: ");
    for(i=0; i<50; i++)
    {
        if(num==i)
        {arr[i]=insert;
        printf("  __%d__  ",insert);}
        else
        printf("  %d  ",arr[i]);
    }
    

    return 0;
}
