#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define MAX 86028123
bool isPrime[MAX];

vector<ll> *sieve()
{
    for (int i = 0; i < MAX; i++)
    {
        isPrime[i] = true;
    }

    isPrime[0] = false;
    isPrime[1] = false;

    for (int i = 2; i * i < MAX; i++)
    {
        if (isPrime[i])
        {
            for (int j = 2; i * j <= MAX; j++)
            {
                isPrime[i * j] = false;
            }
        }
    }

    vector<ll> *primes = new vector<ll>();
    primes->push_back(2);
    for (int i = 3; i < MAX; i += 2)
    {
        if (isPrime[i])
        {
            primes->push_back(i);
        }
    }

    return primes;

    // for (int i = 0; i <= n; i++)
    // {
    //   if (isPrime[i])
    //   {
    //     cout << i << "\n";
    //   }
    // }
}

int main()
{
    ll n;

    cin >> n;

    vector<ll> *primes = sieve();

    cout << primes->at(n - 1) << endl;
}
