#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

//problem is taking n to 1 how ? we have n-1,n/2,n/3 allowed ways

int minsteps(int n, int dp[])
{
    if (n == 1)
    {
        return 0;
    }

    if (dp[n] != 0)
    {
        return dp[n];
    }

    int op1, op2, op3;
    op1 = op2 = op3 = INT_MAX;

    if (n % 3 == 0)
    {
        op1 = 1 + minsteps(n / 3, dp);
    }
    if (n % 2 == 0)
    {
        op2 = 1 + minsteps(n / 2, dp);
    }
    op3 = 1 + minsteps(n - 1, dp);

    dp[n] = min(op3, min(op1, op2));

    return dp[n];
}

int main()
{
    int n;
    cin >> n;

    int dp[100] = {0};

    cout << minsteps(n, dp) << endl;
}