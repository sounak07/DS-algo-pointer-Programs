#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int cuttingRod(int price[], int len, int dp[])
{
    if (len == 0)
    {
        return 0;
    }

    if (dp[len] != 0)
    {
        return dp[len];
    }

    int profit = 0;
    int maxP = 0;

    for (int i = 1; i <= len; i++)
    {
        profit = price[i] + cuttingRod(price, len - i, dp);
        maxP = max(maxP, profit);
    }

    return dp[len] = maxP;
}

int cuttingRod_bu(int price[], int len, int dp[])
{
    dp[0] = 0;
    int maxP;

    for (int i = 1; i <= len; i++)
    {
        maxP = 0;
        for (int j = 1; j <= len; j++)
        {
            if (i - j >= 0)
            {
                maxP = max(maxP, price[j] + dp[i - j]);
            }
        }

        dp[i] = maxP;
    }

    return dp[len];
}

int main()
{
    int n;
    cin >> n;

    int price[100];
    int dp[100] = {0};

    for (int i = 1; i <= n; i++)
    {
        cin >> price[i];
    }

    cout << cuttingRod(price, n, dp) << endl;
    cout << cuttingRod_bu(price, n, dp) << endl;
}