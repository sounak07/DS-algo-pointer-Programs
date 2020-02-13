#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int lowerBound(int *arr, int s, int e, int key)
{
    int mid;

    while (s <= e)
    {
        mid = (s + e) / 2;

        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] < key)
        {
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
    }

    return -1;
}

int upperBound(int *arr, int s, int e, int key)
{
    int mid;

    while (s <= e)
    {
        mid = (s + e) / 2;

        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] < key)
        {
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
    }

    return -1;
}

int main()
{
    ll n;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int q;
    cin >> q;

    while (q--)
    {
        int key;

        cout << lowerBound(arr, 0, n - 1, key) << endl;
        cout << upperBound(arr, 0, n - 1, key) << endl;
    }
}
