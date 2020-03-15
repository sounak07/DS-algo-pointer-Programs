#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

bool solveMaze(char maze[][10], int soln[][10], int i, int j, int n, int m)
{ //we have reached last box
    soln[n][m] = 1;
    if (i == n && j == m)
    {
        for (int k = 0; k <= n; k++)
        {
            for (int l = 0; l <= m; l++)
            {
                cout << soln[k][l] << " ";
            }
            cout << endl;
        }

        cout << endl;
        return true;
    }

    if (i > n || j > m)
    {
        return false;
    }

    if (maze[i][j] == 'X')
    {
        return false;
    }

    //assuming current is solution
    soln[i][j] = 1;
    bool rightPath = solveMaze(maze, soln, i, j + 1, n, m);
    bool downPath = solveMaze(maze, soln, i + 1, j, n, m);

    //backtrack
    soln[i][j] = 0;

    if (rightPath == true || downPath == true)
    {
        return true;
    }

    return false;
}

int main()
{
    int m = 4;
    int n = 4;
    char maze[10][10] = {
        "0000",
        "00X0",
        "000X",
        "0X00"};

    int soln[10][10] = {0};

    bool ans = solveMaze(maze, soln, 0, 0, n - 1, m - 1);
    if (ans == false)
    {
        cout << "Path is not there" << endl;
    }
}