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
    int csum[1000] = {0};

    int current = 0, max = 0;

    cin >> a[0];
    csum[0] = a[0];

    for (int i = 1; i < n; i++)
    {
        cin >> a[i];
        //finding cumalative sum of array
        csum[i] = csum[i - 1] + a[i];
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            //i - 1 because the previous of current i needs to be counted
            current = csum[j] - csum[i - 1];

            if (current > max)
            {
                max = current;
            }
        }
    }

    cout << max << "\n";

    return 0;
}