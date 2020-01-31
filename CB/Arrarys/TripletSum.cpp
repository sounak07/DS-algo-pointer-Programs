#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{

    ll n, tar;
    ll l, r;
    cin >> n;

    ll c = 0;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cin >> tar;

    sort(arr, arr + n);

    for (int i = 0; i < n - 2; i++)
    {
        l = i + 1;

        r = n - 1;
        while (l < r)
        {
            if (arr[i] + arr[l] + arr[r] == tar)
            {
                cout << arr[i] << ", " << arr[l] << " and " << arr[r] << endl;
                l++;
                r--;
            }
            else if (arr[i] + arr[l] + arr[r] < tar)
                l++;
            else // A[i] + A[l] + A[r] > sum
                r--;
        }
    }
}