#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    unordered_map<int, int> maap;

    int l = 0, r = 0, ans = 0;

    for (char const &x : s)
    {
        maap[x - 'a']++;

        if (min(maap[0], maap[1]) > n)
        {

            maap[s[l] - 'a']--;
            l++;
        }
        else
        {
            ans++;
        }
    }

    cout << ans << endl;
}