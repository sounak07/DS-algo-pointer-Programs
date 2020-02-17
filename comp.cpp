#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
  ll n;
  cin >> n;

  ll arr[n];

  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }

  int f = 0;

  for (int i = 0; i < n / 2; i++)
  {
    if (arr[i] > arr[n - i - 1])
    {
      f = 1;
    }
  }

  if (f == 1)
    cout << "no" << endl;
  else
    cout << "yes" << endl;
}
