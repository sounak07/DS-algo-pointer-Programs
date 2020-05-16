#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int profit(int *wines, int i, int j, int dp[][100], int y)
{
    if (i > j)
    {
        return 0;
    }

    if (dp[i][j] != 0)
    {
        return dp[i][j];
    }

    int op1 = wines[i] * y + profit(wines, i + 1, j, dp, y + 1);
    int op2 = wines[j] * y + profit(wines, i, j - 1, dp, y + 1);

    dp[i][j] = max(op1, op2);

    return dp[i][j];
}

int main()
{
    int wines[] = {2, 3, 5, 1, 4};
    int dp[100][100] = {0};

    cout << profit(wines, 0, 4, dp, 1) << endl;
}