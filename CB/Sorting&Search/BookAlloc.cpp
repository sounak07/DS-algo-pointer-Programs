#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

bool isvalid(ll *arr, ll n, ll k, ll mid)
{
    int stu = 1;
    ll sum = 0;

    for (int i = 0; i < n; i++)
    {
        if (sum + arr[i] <= mid)
        {
            sum += arr[i];
        }
        else
        {
            sum = arr[i];
            stu++;
        }
    }

    if (stu > k)
    {
        return false;
    }
    return true;
}

int bookAlloc(ll arr[], ll n, ll k)
{
    ll s = arr[n - 1];
    ll e = 0;
    ll mid;
    int final = 0;

    for (int i = 0; i < n; i++)
    {
        e += arr[i];
    }

    while (s <= e)
    {
        mid = (s + e) / 2;
        if (isvalid(arr, n, k, mid))
        {
            final = mid;
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
    }

    return final;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        ll n, k;
        cin >> n >> k;

        ll books[1000000];

        for (int i = 0; i < n; i++)
        {
            cin >> books[i];
        }

        cout << bookAlloc(books, n, k) << endl;
    }
}
