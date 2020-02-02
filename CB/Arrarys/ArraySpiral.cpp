#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

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

    int l = 0;
    int r = 0;

    while (l < n && r < m)
    {
        for (int i = l; i < n; i++) /* Print the first column from the remaining columns */
        {
            cout << arr[i][r] << ", ";
        }
        r++; //increment column number

        for (int i = r; i < m; i++) /* Print the last row from the remaining rows (why m not m-1 because we will stop printing upto 1 elements before. that will be included last column printed  by 3rd loop) ans - notice dec of n*/
        {
            cout << arr[n - 1][i] << ", ";
        }
        n--; //decrement row size

        for (int i = n - 1; i >= l; i--) /* Print the last column from the remaining columns */
        {
            cout << arr[i][m - 1] << ", ";
        }
        m--; //decrement column size

        for (int i = m - 1; i >= r; i--) /* Print the first row from the remaining rows (why m-1 not m, m is already decremented by m--)  */
        {
            cout << arr[l][i] << ", ";
        }
        l++; //increment row number
    }

    cout << "END" << endl;
}