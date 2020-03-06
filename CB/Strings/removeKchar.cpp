#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

string doIt(string str, int k)
{
    stack<pair<char, int>> s;

    for (int i = 0; i < str.length(); i++)
    {
        char x = str[i];

        if (s.size() > 0 && s.top().second == k)
        {
            char curr = s.top().first;

            while (s.size() > 0 && s.top().first == curr)
            {
                s.pop();
            }
        }

        if (s.size() > 0 && s.top().first == x)
        {
            s.push(make_pair(x, s.top().second + 1));
        }
        else
        {
            s.push(make_pair(x, 1));
        }

        if (s.size() > 0 && s.top().second == k)
        {
            char curr = s.top().first;

            while (s.size() > 0 && s.top().first == curr)
            {
                s.pop();
            }
        }
    }

    string ans = "";
    while (s.size() > 0)
    {
        ans += s.top().first;
        s.pop();
    }

    return ans;
}

int main()
{
    string s;
    cin >> s;

    int k;
    cin >> k;

    string ans = doIt(s, k);

    reverse(ans.begin(), ans.end());

    cout << ans << endl;
}