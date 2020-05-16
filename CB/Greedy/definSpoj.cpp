#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve()
{
    int w, h, n;

    cin >> w >> h >> n;

    int arr1[n + 2];
    int arr2[n + 2];

    arr1[0] = arr2[0] = 0;

    for (int i = 1; i <= n; i++)
    {
        cin >> arr1[i] >> arr2[i];
    }

    arr1[n + 1] = w + 1;
    arr2[n + 1] = h + 1;

    sort(arr1, arr1 + n + 2);
    sort(arr2, arr2 + n + 2);

    int x = 0;
    int y = 0;

    for (int i = 1; i <= n + 1; i++)
    {
        x = max(x, (arr1[i] - arr1[i - 1] - 1));
        y = max(y, (arr2[i] - arr2[i - 1] - 1));
    }

    cout << x * y << endl;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        solve();
    }
}