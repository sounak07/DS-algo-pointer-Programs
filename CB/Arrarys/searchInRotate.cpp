#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int search(int *arr, int n, int s, int e)
{
    if (s > e)
    {
        return -1;
    }

    int mid = (s + e) / 2;

    if (arr[mid] == n)
    {
        return mid;
    }

    if (arr[s] <= arr[mid])
    {
        if (arr[s] <= n && arr[mid] >= n)
        {
            return search(arr, n, s, mid - 1);
        }
        else
        {
            return search(arr, n, mid + 1, e);
        }
    }

    if (arr[mid] <= n && arr[e] >= n)
    {
        return search(arr, n, mid + 1, e);
    }
    return search(arr, n, s, mid - 1);
}

int main()
{
    int arr[] = {2, 3, 1, 4, 5};

    int n;
    cin >> n;

    int s = 0;
    int e = 6;

    cout << search(arr, n, s, e) << endl;
}