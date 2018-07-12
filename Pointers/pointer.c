#include <stdio.h>

int main(int argc, char const *argv[]) {

  int a=5;
  int *p;

  p = &a;

  printf("%d\n", a);
  printf("%d\n", p);

  int b=12;
  *p = b;

  printf("%d\n", *p);
  printf("%d\n", p);

  return 0;
}
