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

    int key;

    cin >> key;

    int s = 0;
    int e = n - 1;

    int mid = (s + e) / 2;

    int ans = -1;

    while (s <= e)
    {
        if (arr[mid] == key)
        {
            //lower bound can be found as below
            //upper bound can found as s = mid+1;
            e = mid - 1;
            ans = mid;
        }
        else if (arr[mid] > key)
        {
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
    }

    cout << ans << endl;
}