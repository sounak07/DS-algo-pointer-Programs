#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    int n;
    cin >> n;

    int *arr = new int[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 1; i < n; i++)
    {
        int x = arr[i];
        int j = i - 1;

        while (x < arr[j] && j >= 0)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }

        arr[j + 1] = x;
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;
}