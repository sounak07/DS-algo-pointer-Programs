#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

void randum(ll arr[], ll s, ll e)
{
    srand(time(NULL));

    for (int j = e; j > s; j--)
    {
        int i = rand() % (j + 1);
        swap(arr[i], arr[j]);
    }
}

int partition(ll arr[], ll s, ll e)
{
    int pivot = arr[e];
    int i = s - 1;

    for (int j = s; j < e; j++)
    {
        if (arr[j] <= pivot)
        {
            i++;
            swap(arr[j], arr[i]);
        }
    }
    i = i + 1;
    swap(arr[e], arr[i]);
    return i;
}

void quickSort(ll arr[], ll s, ll e)
{
    if (s >= e)
        return;

    int j = partition(arr, s, e);

    quickSort(arr, s, j - 1);
    quickSort(arr, j + 1, e);
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

    randum(arr, 0, n - 1);

    quickSort(arr, 0, n - 1);

    for (ll i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;
}