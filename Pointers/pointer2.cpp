#include <iostream>
using namespace std;

int main()
{
  int i = 10;
  int *p = &i;

  cout << sizeof(p) << endl;
  cout << i << '\n';
  cout << p << '\n';

  i++;

  cout << i << '\n';
  cout << p+1 << '\n';
  cout << *p+1 << '\n';

}
