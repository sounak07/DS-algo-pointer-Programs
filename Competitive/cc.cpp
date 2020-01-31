#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;

#define fast ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
int main()
{
  fast ll t;
  cin >> t;
  while (t--)
  {
    ll n, m, ans = 0;
    cin >> n >> m;
    int arr[n][m];

    for (int i = 0; i < n; i++)
    {
      for (int j = 0; j < m; j++)
      {
        cin >> arr[i][j];
      }
    }

    ll u, v, w, x, c = 0;

    for (int i = 0; i < n; i++)
    {
      for (int j = 0; j < m; j++)
      {
        u = v = i;
        w = x = j;

        c = 0;

        while (u >= 0 && v < n && w >= 0 && x < m && arr[i][w] == arr[i][x] && arr[u][j] == arr[v][j])
        {
          u--;
          v++;
          w--;
          x++;

          c++;
        }

        ans += c;
      }
    }

    cout << ans << "\n";
  }

  return 0;
}