#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve()
{
    int n;
    cin >> n;

    // int dp[100];

    // dp[0] = 0;
    // dp[1] = 1;
    // dp[2] = 1;

    // for (int i = 3; i <= n; i++)
    // {
    //     dp[i] = dp[i - 1] + dp[i - 2];
    // }

    // cout << dp[n] << endl;

    int a = 0;
    int b = 1;
    int c;

    for (int i = 2; i <= n; i++)
    {
        c = a + b;
        a = b;
        b = c;
    }

    cout << c << endl;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        solve();
    }
}