#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

string table[10] = {" ", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wx", "yz"};

void doIt(char input[], char output[], int i, int j)
{
    if (input[i] == '\0')
    {
        output[j] = '\0';
        cout << output << " ";
        return;
    }

    int number = input[i] - '0';
    if (number == 0)
    {
        doIt(input, output, i + 1, j);
    }

    for (int k = 0; k < (table[number]).size(); k++)
    {
        output[j] = table[number][k];
        doIt(input, output, i + 1, j + 1);
    }
}

int sizing(char input[], int j)
{
    if (input[j] == '\0')
    {
        return 1;
    }

    int c = table[input[j] - '0'].size();

    return c * sizing(input, j + 1);
}

int main()
{
    char input[10];
    char output[10];

    cin >> input;

    int t = 0;

    doIt(input, output, 0, 0);
    cout << endl;
    cout << sizing(input, 0) << endl;
}