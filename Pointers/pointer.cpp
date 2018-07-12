#include <iostream>
using namespace std;

int main() {
  int i=10;

  cout << &i << '\n';
  int *p ;
  p = &i;
  cout << p << '\n';
  cout << *p << '\n';



  float f = 12.36;
  float *pf = &f;

  cout<< pf <<'\n';

  double d = 122.364;
  double *pd = &d;

  std::cout << pd << '\n';
  std::cout << *pd << '\n';
  return 0;
}
