#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

//finds number of numbers divible by arr of numbers upto n

int subseting(ll n, ll arr[])
{

    ll res = 1;
    int i = 0;
    int curr;
    while (n > 0)
    {
        curr = (n & 1);
        if (curr == 1)
        {
            res *= arr[i];
        }
        i++;
        n = (n >> 1);
    }

    return res;
}

int main()
{
    ll arr[] = {2, 3, 5, 7, 11, 13, 17, 19};

    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;

        ll res = 0;

        for (ll i = 1; i < (1 << 8); i++)
        {
            ll ans = subseting(i, arr);
            ll setbits = __builtin_popcount(i);

            if ((setbits % 2) == 0)
            {
                res -= (n / ans);
            }
            else
            {
                res += (n / ans);
            }
        }

        cout << res << endl;
    }
}