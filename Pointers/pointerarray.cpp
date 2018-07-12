#include <iostream>
using namespace std;

int main()
{
  int a[10];
  cout<< a <<endl;
  cout<< &a << endl;

  a[0] = 5;
  a[1] = 10;    //*(a + i) => a[i]

  int *p = &a[0];

  cout<< *p << endl;

  cout<< a <<endl;

  cout<< &p << endl;


}
