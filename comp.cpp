#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

bool isPrime(ll n)
{
  ll i = 2;
  while (i <= sqrt(n))
  {
    if (n % i == 0)
    {
      return false;
    }

    i++;
  }

  return true;
}

int main()
{

  int t;
  cin >> t;
  while (t--)
  {
    ll l, r;
    cin >> l >> r;

    if (l == 1)
      l = 2;

    ll c = 0;
    for (ll i = l; i <= r; i++)
    {
      if (isPrime(i))
      {
        c++;
      }
    }

    cout << c << endl;
  }
}