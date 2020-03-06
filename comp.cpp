#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

bool doit(ll arr[], int j, int n, ll output[], int s)
{
  if (j == n)
  {
    int sum = 0;
    if (s != 0)
    {
      for (int i = 0; i < s; i++)
      {
        sum += output[i];
      }

      if (sum == 0)
      {
        return true;
      }
    }

    return false;
  }

  if (doit(arr, j + 1, n, output, s))
    return true;

  output[s] = arr[j];

  if (doit(arr, j + 1, n, output, s + 1))
    return true;

  return false;
}

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n;
    cin >> n;

    ll arr[100];

    for (int i = 0; i < n; i++)
    {
      cin >> arr[i];
    }

    ll output[10000];

    bool res = doit(arr, 0, n, output, 0);

    if (res)
    {
      cout << "Yes" << endl;
    }
    else
    {
      cout << "No" << endl;
    }
  }
}