#include <bits/stdc++.h>
using namespace std;

int suffix(int **arr, int **aux, int n, int m)
{
    for (int i = m - 1; i >= 0; i--)
    {
        aux[n - 1][i] = arr[n - 1][i];
    }

    for (int i = n - 1 - 1; i >= 0; i--)
    {
        for (int j = m - 1; j >= 0; j--)
        {
            aux[i][j] = aux[i + 1][j] + arr[i][j];
        }
    }

    for (int i = n - 1; i >= 0; i--)
    {
        for (int j = m - 1 - 1; j >= 0; j--)
        {
            aux[i][j] += aux[i][j + 1];
        }
    }

    int res = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            res = max(res, aux[i][j]);
        }
    }
}

int main()
{
    int n, m;
    cin >> n >> m;
    int **arr = new int *[n];
    for (int i = 0; i < n; i++)
    {
        arr[i] = new int[m];
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }

    int **aux = new int *[n];
    for (int i = 0; i < n; i++)
    {
        aux[i] = new int[m];
    }

    cout << suffix(arr, aux, n, m) << endl;
}
