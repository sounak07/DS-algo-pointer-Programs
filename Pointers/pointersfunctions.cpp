#include <iostream>
using namespace std;

void print(int *p)
{
  cout<< *p << endl;
}

void increamentPointer( int *p){
  p = p+1;
}

void increament( int *p){
  (*p)++;
}


int main()
{
  int i = 10;
  int *p = &i;

 print(p);

 cout<< p <<endl;
 increamentPointer(p);
 cout<< p <<endl;

 cout<< *p <<endl;
 increament(p);
 cout<< *p <<endl;
}
