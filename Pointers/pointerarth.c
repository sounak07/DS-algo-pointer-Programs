#include <stdio.h>

int main(int argc, char const *argv[]) {

  int a=8;
  int *p;

  p = &a;

  printf("Address of p %d\n", p);
  printf("Value at p %d\n", *p);
  printf("Address of p+1 %d\n", p+1);
  printf("Value at p %d\n", *p+1);

  return 0;
}
