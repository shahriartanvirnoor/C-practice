#include<stdio.h>
int main()
  {
      int arr_1[4]={45,9,84,78};
      int arr_2[6]={98,34,69,19,32,65};
      int arr_3[4+6];
      for(int i=0; i<10; i++)
      {
          if(i<4)
          arr_3[i]=arr_1[i];
          else
          arr_3[i]=arr_2[i-4];
          printf(" %d ",arr_3[i]);
      }
    return 0;
  }
