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
        fast ll a, b, c, n;
        cin >> a >> b >> c >> n;

        ll maxi = max(a, max(b, c));

        a = maxi - a;
        b = maxi - b;
        c = maxi - c;

        n = n - (a + b + c);

        if (n < 0 || n % 3 != 0)
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

    return 0;
}
