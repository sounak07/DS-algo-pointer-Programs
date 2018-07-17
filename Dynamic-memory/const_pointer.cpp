#include <iostream>
using namespace std;

void g(int const &a){
  a++;
}

void f(int const *p){
}

int main() {
  int const i = 10;

  int const *p = &i;
  f(p);
  g(j);

  int j = 12;
  int const *p2 = &j;
  cout << *p2 <<endl;
  j++;
  cout<< *p2 <<endl;
}
