#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

bool compare(pair<int, int> p1, pair<int, int> p2)
{
    double a = (double)p1.first / p1.second;
    double b = (double)p2.first / p2.second;

    return a > b;
}

int main()
{
    int n;
    cin >> n;
    vector<pair<int, int>> items;

    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        items.push_back(make_pair(a, b));
    }

    int w;
    cin >> w;

    sort(items.begin(), items.end(), compare);

    int profit = 0;
    int j = 0;

    for (int i = 0; i < n; i++)
    {
        if (w - items[i].second >= 0)
        {
            profit += items[i].first;
            w -= items[i].second;
            j++;
        }
        else
        {
            double r = (double)w / items[i].second;

            int extraP = r * items[i].first;

            profit += extraP;

            w -= (r * items[i].second);
        }
    }

    cout << profit << endl;
}