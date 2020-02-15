#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    ll n, m, x, y;
    cin >> n >> m >> x >> y;

    ll mid, s = 0, e = n;
    ll ans;

    while (s <= e)
    {
        mid = (s + e) / 2;

        if ((mid * x) <= m + ((n - mid) * y))
        {
            ans = mid;
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
    }

    cout << ans << endl;
}
