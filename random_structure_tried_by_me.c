#include <stdio.h>
struct name{
  int x;
  float y;
  char z;
  
};

int main()
{
  struct name t;
  t.x= 60;
  t.y=89.00;
  t.z='y';
  printf("This is t.x=%d, t.y= %f, t.z= %c",t.x, t.y, t.z);
  printf("\nThis is the size of struct: %d", sizeof(struct name));
  return 0;
}
