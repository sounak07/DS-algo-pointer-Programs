#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;

#define fast ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

bool arraySortedOrNot(int arr[], int n)
{
    // Array has one or no element
    if (n == 0 || n == 1)
        return true;

    for (int i = 1; i < n; i++)

        // Unsorted pair found
        if (arr[i - 1] > arr[i])
            return false;

    // No unsorted pair found
    return true;
}

int main()
{
    fast ll t;
    cin >> t;
    while (t--)
    {
        fast int n, m;
        cin >> n >> m;

        int arr[100000];
        int p[100000];
        for (int i = 1; i <= n; i++)
        {
            cin >> arr[i];
        }

        for (int i = 1; i <= m; i++)
        {
            cin >> p[i];
        }

        int l = m + 1;
        int i = 1;
        int f = 0;

        while (l--)
        {
            swap(arr[p[i]], arr[p[i] + 1]);

            if (arraySortedOrNot(arr, n))
            {
                f = 1;
                break;
            }
            else
            {
                if (i < m)
                    i++;
                else
                    i = 1;
            }
        }

        if (f == 1)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }

    return 0;
}
