#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c = 0, x, q;
    cin >> a;
    int *ar1 = new int[a];
    for (int i = 0; i < a; i++)
    {
        cin >> ar1[i];
    }

    cin >> b;
    int *ar2 = new int[b];
    for (int i = 0; i < b; i++)
    {
        cin >> ar2[i];
    }

    int i = a - 1, j = b - 1;

    vector<int> str;

    while (i >= 0 && j >= 0)
    {

        x = ar1[i] + ar2[j] + c;
        q = x % 10;

        c = x / 10;
        str.push_back(q);

        i--;
        j--;
    }

    if (i == 0 || i > 0)

    {
        while (i >= 0)
        {
            int tr = c + ar2[i];
            c = tr / 10;
            str.push_back(tr % 10);
            i--;
        }
    }

    if (j == 0 || j > 0)
    {
        while (j >= 0)
        {
            int tr = c + ar2[j];
            c = tr / 10;
            str.push_back(tr % 10);
            j--;
        }
    }

    if (i < 0 && j < 0)
    {
        str.push_back(c);
    }

    for (int i = str.size() - 1; i >= 0; i--)
    {
        cout << str[i] << ", ";
    }

    cout << "END" << endl;
}