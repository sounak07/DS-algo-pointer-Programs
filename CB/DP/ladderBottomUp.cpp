#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int ladderBottomUp(int n, int k, int dp[])
{
    dp[0] = 1;
    dp[1] = 1;

    for (int i = 2; i <= n; i++)
    {
        int ways = 0;
        for (int j = 1; j <= k; j++)
        {
            if (i - j >= 0)
            {
                ways += dp[i - j];
            }
        }

        dp[i] = ways;
    }

    return dp[n];
}

int ladderBottomUpOpti(int n, int k)
{
    int dp[100] = {0};

    dp[0] = dp[1] = 1;
    for (int i = 2; i <= k; i++)
    {
        dp[i] = 2 * dp[i - 1];
    }

    for (int i = k + 1; i <= n; i++)
    {
        dp[i] = 2 * dp[i - 1] - dp[i - k - 1];
    }

    return dp[n];
}

int main()
{
    int n, k;

    cin >> n >> k;

    int dp[100] = {0};

    cout << ladderBottomUp(n, k, dp) << endl;
    cout << ladderBottomUpOpti(n, k) << endl;
}