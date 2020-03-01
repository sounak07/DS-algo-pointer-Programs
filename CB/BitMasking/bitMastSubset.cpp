#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

void subseting(string s, int n)
{
    int curr;
    int i = 0;
    string str = "";
    while (n > 0)
    {
        curr = (n & 1);
        if (curr == 1)
        {
            str += s[i];
        }
        i++;
        n = (n >> 1);
    }

    cout << str << endl;
}

int main()
{
    string s;
    cin >> s;

    int size = s.size();
    for (int i = 0; i < (1 << size); i++)
    {
        subseting(s, i);
    }
}