#include <iostream>
using namespace std;

int main()
{
  int *p = new int;
  delete p;           //it won't delete p, it deletes the memory p is pointing to
                      // single element deletion

  p = new int[10];
  cout<< p <<endl;
  delete [] p;       //array deletion
  cout<< p <<endl;
}
