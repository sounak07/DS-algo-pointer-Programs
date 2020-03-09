#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

bool checkpos(int board[][10], int i, int j, int n)
{
    //row ke liye check
    for (int r = 0; r < i; r++)
    {
        if (board[r][j] == 1)
        {
            return false;
        }
    }
    int x = i;
    int y = j;

    //right diagonal ke liye check
    while (x >= 0 && y < n)
    {
        if (board[x][y] == 1)
        {
            return false;
        }

        x--;
        y++;
    }

    x = i;
    y = j;

    //left diagonal ke liye check

    while (x >= 0 && y >= 0)
    {
        if (board[x][y] == 1)
        {
            return false;
        }

        x--;
        y--;
    }

    return true;
}

bool solveBoard(int board[][10], int n, int i)
{
    //base
    if (i == n)
    {
        for (int k = 0; k < n; k++)
        {
            for (int j = 0; j < n; j++)
            {
                if (board[k][j] == 1)
                {
                    cout << " Q ";
                }
                else
                {
                    cout << " _ ";
                }
            }
            cout << endl;
        }

        cout << endl;
        cout << endl;

        return false;
    }

    //recursive case
    for (int j = 0; j < n; j++)
    {

        //to check if queen is suitable to live there solveBoard(board, n, i + 1)
        if (checkpos(board, i, j, n))
        {
            board[i][j] = 1;
            bool queenHakiNii = solveBoard(board, n, i + 1);
            if (queenHakiNii)
            {
                return true;
            }
            //backtracting
            board[i][j] = 0;
        }
    }
    return false;
}

int main()
{
    int n;
    cin >> n;
    int board[10][10] = {0};

    solveBoard(board, n, 0);
}