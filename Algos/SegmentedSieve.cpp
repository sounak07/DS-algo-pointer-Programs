#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define MAX 1000001
bool isprime[MAX];

vector<ll> *sieve()
{

    for (ll i = 0; i < MAX; i++)
    {
        isprime[i] = true;
    }

    isprime[0] = false;
    isprime[1] = false;
    for (ll i = 2; i * i < MAX; i++)
    {
        if (isprime[i])
        {
            for (ll j = 2; i * j <= MAX; j++)
            {
                isprime[i * j] = false;
            }
        }
    }

    vector<ll> *primes = new vector<ll>();
    primes->push_back(2);
    for (int i = 3; i < MAX; i += 2)
    {
        if (isprime[i])
        {
            primes->push_back(i);
        }
    }

    return primes;
}

void showRangePrimes(vector<ll> *&primes, ll l, ll r)
{
    bool rangePrimes[r - l + 1];

    for (int i = 0; i < r - l + 1; i++)
    {
        rangePrimes[i] = true;
    }

    for (int i = 0; primes->at(i) * (ll)primes->at(i) <= r; i++)
    {
        ll currPrime = primes->at(i);

        ll base = (l / currPrime) * currPrime;

        if (base < l)
        {
            base += currPrime;
        }

        for (ll j = base; j <= r; j += currPrime)
        {
            rangePrimes[j - l] = false;
        }

        if (base == currPrime)
        {
            rangePrimes[base - l] = true;
        }

        if (l == 1)
        {
            rangePrimes[0] = false;
        }
    }

    for (int i = 0; i <= r - l; i++)
    {
        if (rangePrimes[i])
        {
            cout << i + l << endl;
        }
    }
}

int main()
{
    vector<ll> *primes = sieve();

    int t;
    cin >> t;
    while (t--)
    {
        ll l, r;
        cin >> l >> r;
        showRangePrimes(primes, l, r);
    }
}