#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int solve(int arr[], int n)
{
    int dp[n];

    dp[0] = 1;

    for (int i = 1; i < n; i++)
    {
        dp[i] = 1;
        for (int j = i - 1; j >= 0; j--)
        {
            if (arr[j] > arr[i])
            {
                continue;
            }

            int toAns = dp[j] + 1;

            if (toAns > dp[i])
            {
                dp[i] = toAns;
            }
        }
    }

    int best = 0;
    for (int i = 1; i < n; i++)
    {
        if (dp[i] > best)
            best = dp[i];
    }

    return best;
}

int main()
{
    int n;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << solve(arr, n) << endl;
}
