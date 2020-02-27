#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

bool prime[1000005];

bool isprime()
{
    for (int i = 2; i < 1000000; i++)
        prime[i] = true;
    prime[0] = false, prime[1] = false;

    for (int i = 2; i * i <= 1000000; i++)
    {
        if (prime[i])
            for (int j = i * i; j <= 1000000; j += i)
                prime[j] = false;
    }
}

int main()
{

    int t;
    cin >> t;
    isprime();
    while (t--)
    {
        ll l, r;
        cin >> l >> r;

        ll c = 0;
        for (ll i = l; i <= r; i++)
        {
            if (prime[i])
            {
                cout << i;
            }
        }

        cout << endl;
    }
}