#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int coinChange(int n, int dp[], int t, int coins[])
{
    if (n == 0)
    {
        return 0;
    }

    if (dp[n] != 0)
    {
        return dp[n];
    }

    int ans = INT_MAX;

    for (int i = 0; i < t; i++)
    {
        if (n - coins[i] >= 0)
        {
            int subprob = coinChange(n - coins[i], dp, t, coins);
            ans = min(ans, subprob + 1);
        }
    }

    return dp[n] = ans;
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