#include <bits/stdc++.h>
using namespace std;

#define ff first
#define ss second
#define ll long long
#define pb push_back
#define mp make_pair
#define pii pair<int, int>
#define vi vector<int>
#define mii map<int, int>
#define pqb priority_queue<int>
#define mk(arr, n, type) type *arr = new type[n];

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;

        vi v;
        v.pb(0);

        int n = s.length();

        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'R')
                v.pb(i + 1);
        }

        v.pb(n + 1);

        int ans = 0;

        for (int i = 0; i < v.size() - 1; i++)
        {
            cout << v[i] << endl;
        }

        for (int i = 0; i < v.size() - 1; i++)
            ans = max(ans, v[i + 1] - v[i]);

        cout << ans << endl;
    }

    return 0;
}
