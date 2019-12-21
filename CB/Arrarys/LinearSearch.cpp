#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;

#define fast ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
int main()
{

    int n;
    int k;
    cin >> n;

    int a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    cin >> k;

    for (int i = 0; i < n; i++)
    {
        if (k == a[i])
        {
            cout << "1" << endl;
            break;
        }

        if (i == n)
        {
            cout << "0" << endl;
        }
    }

    return 0;
}