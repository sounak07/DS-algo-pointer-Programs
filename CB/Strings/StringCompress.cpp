#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{

    string s;
    cin >> s;

    int i = 0, c = 1;

    int n = s.length();

    for (int i = 0; i < n; i++)
    {
        while (i < n - 1 && s[i] == s[i + 1])
        {
            c++;
            i++;
        }

        cout << s[i] << c;
        c = 1;
    }

    cout << endl;
}