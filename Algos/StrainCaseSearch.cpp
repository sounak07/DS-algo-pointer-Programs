#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a[50][50];

    int n, m, x;

    int flag = 0;
    cout << "Enter the no. of rows and columns" << endl;
    cin >> n >> m;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }
    cout << "Enter the no. to search" << endl;
    cin >> x;

    int ax = 0;
    int b = n - 1;

    while (ax < n && b > 0)
    {
        if (a[ax][b] == x)
        {
            cout << ax << " " << b << endl;
            return 0;
        }
        else if (x > a[ax][b])
        {
            ax++;
        }
        else
        {
            b--;
        }
    }
}