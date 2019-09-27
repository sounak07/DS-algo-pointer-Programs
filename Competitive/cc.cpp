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
    fast ll n, k;
    cin >> n >> k;
    if ((n / k) % k)
    {
      cout << "NO"
           << "\n";
    }
    else
    {
      cout << "YES"
           << "\n";
    }
  }
}