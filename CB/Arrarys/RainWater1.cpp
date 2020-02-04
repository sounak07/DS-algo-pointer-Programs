#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int rain(vector<int> height)
{

    int n = height.size();

    if (n == 0)
        return 0;

    int *right = new int[n];
    int *left = new int[n];
    int ans = 0;

    right[0] = height[0];
    for (int i = 1; i < n; i++)
    {
        right[i] = max(right[i - 1], height[i]);
    }

    left[n - 1] = height[n - 1];

    for (int i = n - 2; i >= 0; i--)
    {
        left[i] = max(left[i + 1], height[i]);
    }

    for (int i = 0; i < n; i++)
    {
        int x = min(left[i], right[i]) - height[i];
        ans += x;
    }

    delete[] left;
    delete[] right;

    return ans;
}

int main()
{
    int n;
    cin >> n;

    vector<int> walls;

    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        walls.push_back(temp);
    }

    cout << rain(walls) << endl;
}