#include <stdio.h>

int main()
{

  int  a = 5;
  int *p;

  p = &a;
  *p = 6;

  int ** q = &p;
  int *** r = &q;

  printf("%d\n", *p);
  printf("%d\n", *q);
  printf("%d\n", *(*q));
  printf("%d\n", *(*r));
  printf("%d\n", *(*(*r)));

  *** r = 10;

  printf("%d\n", a);

  **q = *p + 2;
  printf("%d\n", a);

}
