#include <iostream>
using namespace std;

void prefix(int **arr, int **aux, int n, int m)
{
    for (int i = 0; i < n; i++)
    {
        aux[0][i] = arr[0][i];
    }

    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            aux[i][j] = aux[i - 1][j] + arr[i][j];
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j < m; j++)
        {
            aux[i][j] += aux[i][j - 1];
        }
    }
}

int sumQuery(int **aux, int a, int b, int c, int d)
{
    int sum = aux[c][d];

    sum -= aux[a - 1][d];

    sum -= aux[c][b - 1];

    sum += aux[a - 1][b - 1];

    return sum;
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

    prefix(arr, aux, n, m);

    int tli = 2, tlj = 2, rbi = 3, rbj = 4;
    cout << "\nQuery1: " << sumQuery(aux, tli, tlj, rbi, rbj) << endl;
}
