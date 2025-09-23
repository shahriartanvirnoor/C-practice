#include<stdio.h>
int main()
    {
        int d1, d2, d3, d4, d5, d6, d7, d8, d9, d0, num;
       d1= d2= d3= d4= d5= d6= d7= d8= d9=d0 =num=0;
        int array[]={6,8,9,4,3,7,5,8,4,0,8,5,9,8,0,3,5,6,3,8,0,8,5,4,2,8,6,0,7,};
        for(int i=0; i<29; i++)
        {
            num=array[i];
            switch(num)
            {
                case 1: d1=d1+1;break;
                 case 2: d2=d2+1;break;
                  case 3: d3=d3+1;break;
                   case 4: d4=d4+1;break;
                    case 5: d5=d5+1;break;
                     case 6: d6=d6+1;break;
                      case 7: d7=d7+1;break;
                       case 8: d8=d8+1;break;
                        case 9: d9=d9+1;break;
                         case 0: d0=d0+1;break;

            }}
            printf("\n'1' appear : %d",d1);
             printf("\n'2' appear : %d",d2);
              printf("\n'3' appear : %d",d3);
               printf("\n'4' appear : %d",d4);
                printf("\n'5' appear : %d",d5);
                 printf("\n'6' appear : %d",d6);
                  printf("\n'7' appear : %d",d7);
                   printf("\n'8' appear : %d",d8);
                    printf("\n'9' appear : %d",d9);
                     printf("\n'0' appear : %d",d0);

        return 0;

    }
