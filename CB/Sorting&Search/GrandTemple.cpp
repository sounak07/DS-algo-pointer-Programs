#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

bool mycompare(pair<int, int> &a, pair<int, int> &b)
{
    return a.second < b.second;
}

int main()
{
    ll n;
    cin >> n;

    int arr1[n];
    int arr2[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr1[i] >> arr2[i];
    }

    sort(arr1, arr1 + n);
    sort(arr2, arr2 + n);

    int dX = 0, dY = 0;
    int ans = 0;

    for (int i = 0; i < n - 1; i++)
    {
        int x = abs(arr1[i] - arr1[i + 1]);
        if (dX < x)
        {
            dX = x;
        }

        int y = abs(arr2[i] - arr2[i + 1]);
        if (dY < y)
        {
            dY = y;
        }
    }

    ans = (dX - 1) * (dY - 1);

    cout << ans << endl;
}
