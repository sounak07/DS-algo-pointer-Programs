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
    for (int i = l; i < n; i++)
    {
      cout << arr[i][r] << ", ";
    }
    l++;

    for (int i = l; i < m - 1; i++)
    {
      cout << arr[n - 1][i] << ", ";
    }
    n--;

    for (int i = m - 1; i >= l; i--)
    {
      cout << arr[i][m - 1] << ", ";
    }
    m--;

    for (int i = m; i >= l; i--)
    {
      cout << arr[r][i] << ", ";
    }
    r++;
  }

  cout << "END" << endl;
}