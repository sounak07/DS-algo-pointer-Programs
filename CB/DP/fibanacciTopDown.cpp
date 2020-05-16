#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int fibTopDown(int n, int *dp)
{

    if (n == 0 || n == 1)
    {
        return n;
    }

    if (dp[n] != 0)
    {
        return dp[n];
    }

    dp[n] = fibTopDown(n - 1, dp) + fibTopDown(n - 2, dp);

    return dp[n];
}

void solve()
{
    int n;
    cin >> n;

    int dp[n + 2] = {0};

    cout << fibTopDown(n, dp) << endl;
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