#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    int n;
    cin >> n;

    int p;
    cin >> p;

    int s = 0;
    int e = n;

    float ans;
    int mid;

    while (s <= e)

    {
        mid = (s + e) / 2;

        if (mid * mid == n)
        {
            ans = mid;
            break;
        }
        else if (mid * mid > n)
        {
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
            ans = mid;
        }
    }

    //fractional part;
    float inc = 0.1;

    for (int i = 0; i < p; i++)
    {
        // ans += inc;
        while (ans * ans <= n)
        {
            ans += inc;
        }

        ans = ans - inc;
        inc = inc / 10;
    }

    cout << ans << endl;
}