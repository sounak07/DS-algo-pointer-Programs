#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int coinChange(int n, int dp[], int t, int coins[])
{
    dp[0] = 0;

    for (int i = 1; i <= n; i++)
    {
        int ans = INT_MAX;
        for (int j = 0; j < t; j++)
        {
            int subproblem;
            if (i - coins[j] >= 0)
            {
                subproblem = dp[i - coins[j]];
                ans = min(ans, subproblem);
            }
        }
        dp[i] = ans + 1;
    }

    return dp[n];
}

int main()
{
    int n;
    cin >> n;

    int dp[100] = {0};

    int coins[3] = {1, 7, 10};

    // int n = 15;

    cout << coinChange(n, dp, 3, coins) << endl;
}