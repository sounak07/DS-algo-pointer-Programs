class Solution
{
public:
    int climbStairs(int n)
    {

        //way 1
        int arr[2];
        arr[0] = 1;
        arr[1] = 2;

        if (n <= 2)
            return n;

        int f = 0, b = 1;

        for (int i = 0; i < n - 2; i++)
        {
            int r = arr[0] + arr[1];
            arr[f] = r;

            swap(f, b);
        }

        if (n % 2 == 0)
            return arr[1];
        else
            return arr[0];

        //way 2

        int dp[n + 1];

        if (n <= 2)
            return n;

        memset(dp, 0, n + 1);

        dp[1] = 1;
        dp[2] = 2;

        for (int i = 3; i <= n; i++)
        {
            dp[i] = dp[i - 1] + dp[i - 2];
        }

        return dp[n];
    }
};