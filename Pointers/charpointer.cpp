#include <iostream>
using namespace std;

int main()
{
  int a[] = {1, 2, 3};
  char b[] = "abc";

  cout << a << endl;
  cout << 1 [b] << endl;

  char *c = &b[0];
  cout << c << endl;

  char cl = 'a';
  char *pc = &cl;

  cout << cl << endl;
  cout << pc << endl;
}
