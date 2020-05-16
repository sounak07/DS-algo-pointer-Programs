#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pp pair<ll, pair<ll, ll>>

vector<ll> mergeOp(vector<vector<ll>> arr, ll n, ll k)
{
    vector<ll> out;
    priority_queue<pp, vector<pp>, greater<pp>> pq;

    pp temp;

    for (ll i = 0; i < n; i++)
    {
        temp.first = arr[i][0];
        temp.second = make_pair(i, 0);

        pq.push(temp);
    }

    while (!pq.empty())
    {
        temp = pq.top();
        pq.pop();

        out.push_back(temp.first);

        ll x = temp.second.first;
        ll y = temp.second.second;

        if (y + 1 < k)
        {
            pp t1;
            t1.first = arr[x][y + 1];
            t1.second = make_pair(x, y + 1);
            pq.push(t1);
        }
    }

    return out;
}

int main()
{

    ll n, k;
    cin >> n >> k;
    vector<vector<ll>> arr(n, vector<ll>(k));
    for (ll i = 0; i < n; i++)
        for (ll j = 0; j < k; j++)
            cin >> arr[i][j];

    vector<ll> out = mergeOp(arr, n, k);
    for (auto i : out)
    {
        cout << i << " ";
    }

    cout << endl;
}
