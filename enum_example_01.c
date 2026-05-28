#include <stdio.h>
enum level {
  LEVEL1 = 25,
  LEVEL2 = 50,
  LEVEL3 = 75,
  LEVEL4 = 100
};
int main()
{
  enum level myLevel = LEVEL3;
  switch(myLevel)
  {
    case LEVEL1:
    printf("You got %d points\n", LEVEL1);
    break;
    case LEVEL2:
    printf("You got %d points\n", LEVEL2);
    break;
    case LEVEL3:
    printf("You got %d points\n", LEVEL3);
    break;
    case LEVEL4:
    printf("You got %d points\n", LEVEL4);
    break;
  }
    
    
}
