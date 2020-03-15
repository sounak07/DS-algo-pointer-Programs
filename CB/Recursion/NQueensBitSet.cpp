#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

bitset<30> col, d1, d2;

void queen(int n, int r, int &ans)
{
    if (r == n)
    {
        ans++;
        return;
    }

    for (int c = 0; c < n; c++)
    {
        if (!col[c] && !d1[r - c + n - 1] && !d2[r + c])
        {
            col[c] = d1[r - c + n - 1] = d2[r + c] = 1;
            queen(n, r + 1, ans);
            col[c] = d1[r - c + n - 1] = d2[r + c] = 0;
        }
    }
}

int main()
{
    int n;
    cin >> n;
    int ans = 0;
    queen(n, 0, ans);
    cout << ans << endl;
}