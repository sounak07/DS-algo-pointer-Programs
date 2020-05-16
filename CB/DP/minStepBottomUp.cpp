#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int minsteps(int n, int dp[])
{
    dp[0] = 0;
    dp[1] = 0;

    int op1, op2, op3;

    for (int i = 2; i <= n; i++)
    {
        op1 = op2 = op3 = INT_MAX;
        if (i % 3 == 0)
        {
            op1 = dp[i / 3] + 1;
        }
        if (i % 2 == 0)
        {
            op2 = dp[i / 2] + 1;
        }

        op3 = dp[i - 1] + 1;

        dp[i] = min(op3, min(op1, op2));
    }

    return dp[n];
}

int main()
{
    int n;
    cin >> n;

    int dp[100] = {0};

    cout << minsteps(n, dp) << endl;
}