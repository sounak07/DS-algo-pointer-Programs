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
        if (strin[i] >= 0)
        {
            int x = strin[i] - '0';

            if (strin[i + 1] == '(')
            {

                for (j = i + 1; strin[j] != ')'; j++)
                {
                    if ((strin[j] >= 'a' && strin[j] <= 'z') || (strin[j] >= 'A' && strin[j] <= 'Z'))
                    {
                        temp += strin[j];
                    }
                }

                for (int i = 0; i < x; i++)
                {
                    cout << (temp);
                }

                temp = "";

                if (j < strin.length())
                {
                    i = j;
                }
            }
        }
    }
}

// Driver code
int main()
{
    string strin = "3(AB)4(ga)";
    expandString(strin);
}