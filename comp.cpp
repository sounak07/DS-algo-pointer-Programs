#include <bits/stdc++.h>
using namespace std;

int clearLastI(int n, int i)
{
  int t = (~0);

  int x = (t << i);

  return n & x;
}

int main()
{
  int n = 15;
  int i = 2;
  cout << clearLastI(n, i) << endl;
}