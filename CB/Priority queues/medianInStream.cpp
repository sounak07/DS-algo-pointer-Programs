#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    int n;
    cin >> n;

    int arr[n + 1];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    priority_queue<int> p;
    priority_queue<int, vector<int>, greater<int>> q;

    int median;

    p.push(arr[0]);
    median = arr[0];

    cout << median << " ";

    for (int i = 1; i < n; i++)
    {
        int x = arr[i];

        if (p.size() == q.size())
        {
            if (x > median)
            {
                q.push(x);
                median = q.top();
            }
            else
            {
                p.push(x);
                median = p.top();
            }
        }
        else if (p.size() > q.size())
        {
            if (x < median)
            {
                q.push(p.top());
                p.pop();
                p.push(x);
            }
            else
            {
                q.push(x);
            }

            median = (p.top() + q.top()) / 2;
        }
        else if (p.size() < q.size())
        {
            if (x > median)
            {
                p.push(q.top());
                q.pop();
                q.push(x);
            }
            else
            {
                p.push(x);
            }
            median = (p.top() + q.top()) / 2;
        }

        cout << median << " ";
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
