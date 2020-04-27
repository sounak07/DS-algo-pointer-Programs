#include <bits/stdc++.h>
using namespace std;

int joinRope(int *ropes, int n)
{
    priority_queue<int, vector<int>, greater<int>> pq(ropes, ropes + n);
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