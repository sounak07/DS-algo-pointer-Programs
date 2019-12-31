#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;

#define fast ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
void expandString(string strin)
{
    string temp = "";
    int j;

    for (int i = 0; i < strin.length(); i++)
    {
        int x = strin[i] - '0';
        if (strin[i + 1] == '(')
        {
            for (j = i + 2; strin[j] != ')'; j++)
            {
                temp += strin[j];
            }
        }

        for (int j = 0; j < x; j++)
        {
            cout << temp;
        }

        temp = "";
        if (i < j)
        {
            i = j;
        }
    }
}

// Driver code
int main()
{
    string strin = "3(AB)4(ga)";
    expandString(strin);
}