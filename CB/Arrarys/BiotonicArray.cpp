#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

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

        ll inc[1000000], dec[1000000];
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
            if (arr[i] <= arr[i + 1])
            {
                inc[i + 1] = inc[i] + 1;
            }
        }

        for (int i = n - 1; i >= 0; i--)
        {
            if (arr[i] <= arr[i - 1])
            {
                dec[i - 1] = dec[i] + 1;
            }
        }

        ll ans = dec[0] + inc[0] - 1;

        for (int i = 1; i < n; i++)
        {
            ans = max(ans, (dec[i] + inc[i] - 1));
        }

        cout << ans << endl;
    }
}