#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

ll c;
ll power(ll a, ll b)
{
    if (b == 0)
    {
        return 1;
    }

    if (b == 1)
    {
        return a % c;
    }

    //b is odd
    if (b & 1)
    {
        return (a * power(a, b - 1)) % c;
    }

    ll k = power(a, b / 2);
    return (k * k) % c;
}

int main()
{
    ll a, b;
    cin >> a >> b >> c;

    cout << power(a, b) << endl;
}