#include <bits/stdc++.h>
using namespace std;

#define ff first
#define ss second
#define ll long long
#define pb push_back
#define mp make_pair
#define pii pair<int, int>
#define vi vector<int>
#define mii map<int, int>
#define pqb priority_queue<int>
#define mk(arr, n, type) type *arr = new type[n];

bool oppositeSigns(int x, int y)
{
    return ((x ^ y) < 0);
}

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        mk(arr, n, int);

        for (int i = 0; i < n; i++)
            cin >> arr[i];

        long long sum = 0;

        for (int i = 0; i < n; i++)
        {
            int currMax = arr[i];
            int j = i;

            while (j < n && !oppositeSigns(arr[i], arr[j]))
            {
                currMax = max(currMax, arr[j]);
                j++;
            }

            sum += currMax;
            i = j - 1;
        }
        cout << sum << endl;
    }

    return 0;
}
