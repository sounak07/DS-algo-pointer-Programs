#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

struct compare
{
    bool operator()(pair<int, int> a, pair<int, int> b)
    {
        if (a.second == b.second)
        {
            return a.first > b.first;
        }

        return a.second < b.second;
    }
};

void solve()
{
    int n, k;
    cin >> n >> k;
    int arr[n];

    unordered_map<int, int> m;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        m[arr[i]]++;

        priority_queue<pair<int, int>, vector<pair<int, int>>, compare> pq(m.begin(), m.end());
        int cnt = 0;
        while (!pq.empty() && cnt < k)
        {
            cout << pq.top().first << " ";
            pq.pop();
            cnt++;
        }
    }

    cout << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}
