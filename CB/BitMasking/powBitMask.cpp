#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    int a;
    cin >> a;

    int n;
    cin >> n;

    int ans = 1;
    int curr;
    int asum = a;

    while (n > 0)
    {
        curr = (n & 1);

        if (curr == 1)
        {
            ans = ans * asum;
        }
        asum = asum * asum;

        n = (n >> 1);
    }

    cout << ans << endl;
}