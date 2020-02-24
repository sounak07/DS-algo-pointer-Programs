#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
  int t;
  cin >> t;

  while (t--)
  {
    ll n;
    cin >> n;
    ll arr[1000000];
    for (int i = 0; i < n; i++)
    {
      cin >> arr[i];
    }

    ll inc[n], dec[n];
    for (int i = 0; i < n; i++)
    {
      inc[i] = 1;
    }

    for (int i = 0; i < n; i++)
    {
      dec[i] = 1;
    }

    for (int i = 0; i < n; i++)
    {
      if (arr[i] < arr[i + 1])
      {
        inc[i + 1] = inc[i] + 1;
      }
    }

    for (int i = n - 1; i >= 0; i--)
    {
      if (arr[i] < arr[i - 1])
      {
        dec[i - 1] = dec[i] + 1;
      }
    }

    ll ans = 0;

    for (int i = 0; i < n; i++)
    {
      if (dec[i] + inc[i] - 1 > ans)
      {
        ans = dec[i] + inc[i] - 1;
      }
    }

    cout << ans << endl;
  }
}
a