#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
  int n;
  cin >> n;

  int arr[65] = {0};

  int t, j;
  for (int i = 0; i < n; i++)
  {
    cin >> t;
    j = 0;
    while (t > 0)
    {
      arr[j] += (t & 1);
      t = (t >> 1);
      j++;
    }
  }

  for (int i = 0; i < 64; i++)
  {
    arr[i] = arr[i] % 3;
  }

  int res = 0;
  int p = 1;

  for (int i = 0; i < 64; i++)
  {
    res += (arr[i] * p);
    p = p * 2;
  }

  cout << res << endl;
}