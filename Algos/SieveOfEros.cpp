#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define fast ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
int main()
{
    fast int n;
    cin >> n;
    bool primes[n + 1];
    memset(primes, true, sizeof(primes));

    primes[0] = false;
    primes[1] = false;

    for (int i = 2; i < sqrt(n); i++)
    {
        if (primes[i])
        {
            for (int j = 2; i * j <= n; j++)
            {
                primes[i * j] = false;
            }
        }
    }

    for (int i = 0; i <= n; i++)
    {
        if (primes[i])
        {
            cout << i << "\n";
        }
    }
}