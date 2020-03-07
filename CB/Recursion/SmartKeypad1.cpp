#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

string table[10] = {" ", ".+@$", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};

void doIt(char input[], char output[], int i, int j)
{
    if (input[i] == '\0')
    {
        output[j] = '\0';
        cout << output << endl;
        return;
    }

    int number = input[i] - '0';

    for (int k = 0; k < (table[number]).size(); k++)
    {
        output[j] = table[number][k];
        doIt(input, output, i + 1, j + 1);
    }
}

int main()
{
    char input[10];
    char output[10];

    cin >> input;

    doIt(input, output, 0, 0);
}