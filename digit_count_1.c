
#include<stdio.h>
int main()
    {
        int num, rem, d1, d2, d3, d4, d5, d6, d7, d8, d9, d0;
        d1=d2=d3=d4=d5=d6=d7=d8=d9=d0=0;
        printf("Write a number : ");
        scanf("%d",&num);
        while(num>0)
        {
            rem=num%10;
            switch(rem)
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

            }
            num=num/10;
        }
            printf("\n'1' appear : %d",d1);
             printf("\n'2' appear : %d",d2);
              printf("\n'3' appear : %d",d3);
               printf("\n'4' appear : %d",d4);
                printf("\n'5' appear : %d",d5);
                 printf("\n'6' appear : %d",d6);
                  printf("\n'7' appear : %d",d7);
                   printf("\n'8' appear : %d",d8);
                    printf("\n'9' appear : %d",d9);
          return 0;

    }


