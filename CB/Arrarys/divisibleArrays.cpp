#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll arr[1000001], pre[10000001];

int main()
{
    int n;
    cin >> n;
    memset(pre, 0, sizeof(pre));
    pre[0] = 1;

    ll res = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        res += arr[i];
        res = res % n;
        res = (res + n) % n;
        pre[res]++;
    }

    ll ans = 0;

    for (int i = 0; i < n; i++)
    {
        if (pre[i] > 1)
        {
            ll t = pre[i];
            ans += t * (t - 2) / 2;
        }
    }

    cout << ans << endl;
}