#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

void merge(ll arr[], ll s, ll e)
{
    ll mid = (s + e) / 2;
    ll i = s;
    ll j = mid + 1;

    ll k = s;

    ll temp[1000000];

    while (i <= mid && j <= e)
    {
        if (arr[i] > arr[j])
        {
            temp[k++] = arr[j];
            j++;
        }
        else
        {
            temp[k++] = arr[i];
            i++;
        }
    }

    while (i <= mid)
    {
        temp[k++] = arr[i];
        i++;
    }

    while (j <= e)
    {
        temp[k++] = arr[j];
        j++;
    }

    for (ll q = s; q <= e; q++)
    {
        arr[q] = temp[q];
    }
}

void mergesort(ll arr[], ll s, ll e)
{

    if (s >= e)
    {
        return;
    }

    ll mid = (s + e) / 2;

    mergesort(arr, s, mid);
    mergesort(arr, mid + 1, e);

    merge(arr, s, e);
}

int main()
{
    ll n;
    cin >> n;

    ll arr[n];

    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    mergesort(arr, 0, n - 1);

    for (ll i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;
}