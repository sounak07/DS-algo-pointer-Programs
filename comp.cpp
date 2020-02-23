#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll arr[1000001], pre[1000001];

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    ll n;
    cin >> n;
    ll res = 0;
    memset(pre, 0, sizeof(pre));
    pre[0] = 1;

    for (int i = 0; i < n; i++)
    {
      cin >> arr[i];
      res += arr[i] % n;
      // res = (res % n);
      res = (res + n) % n;
      pre[res]++;
    }

    ll result = 0;
    for (int i = 0; i < n; i++)
    {
      if (pre[i] > 1)
      {
        ll t = pre[i];
        result += (t) * (t - 1) / 2;
      }
    }

    cout << result << endl;
  }
}