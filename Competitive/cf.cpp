#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;

#define fast ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        ll a, b;
        cin >> a >> b;
        ll size = b;
        bool primes[size + 1];
        memset(primes, true, sizeof(primes));

        primes[0] = false;
        primes[1] = false;

        for (int i = 2; i <= sqrt(b); i++)
        {
            if (primes[i])
            {
                for (int j = 2; i * j <= size; j++)
                {
                    primes[i * j] = false;
                }
            }
        }

        for (int i = 0; i <= size; i++)
        {
            if (primes[i] && i >= a)
            {
                cout << i << "\n";
            }
        }
    }
    return 0;
}