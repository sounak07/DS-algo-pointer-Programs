#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;

#define fast ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
int main()
{

    int n;
    cin >> n;

    int a[n];

    int current = 0, maxi = 0;

    int s = 0, e = n;
    int str = 0, end = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++)
    {
        current = current + a[i];

        if (current < 0)
        {
            current = 0;
            s = i + 1;
        }

        if (current > maxi)
        {
            maxi = current;
            str = s;
            end = i;
        }
    }

    cout << maxi << "\n";

    for (int i = str; i <= end; i++)
    {
        cout << a[i] << " ";
    }

    cout << endl;

    return 0;
}