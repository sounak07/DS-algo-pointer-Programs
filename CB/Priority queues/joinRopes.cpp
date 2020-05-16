#include <bits/stdc++.h>
using namespace std;

int joinRope(int *ropes, int n)
{
    priority_queue<int, vector<int>, greater<int>> pq(ropes, ropes + n);

    int cost = 0;

    while (pq.size() != 1)
    {
        int r1 = pq.top();
        pq.pop();

        int r2 = pq.top();
        pq.pop();

        cost += r1 + r2;

        pq.push(r1 + r2);
    }

    return cost;
}

int main()
{
    int n;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        arr[i] = x;
    }

    int ans = joinRope(arr, n);

    cout << ans << endl;
}