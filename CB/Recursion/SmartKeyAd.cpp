#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

string searchIn[] = {
    "prateek", "sneha", "deepak", "arnav", "shikha", "palak",
    "utkarsh", "divyam", "vidhi", "sparsh", "akku"};

string table[10] = {" ", ".+@$", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};

void keypad(string ans, int j)
{
    for (int i = 0; i < 11; i++)
    {
        string s = searchIn[i];
        if (s.find(ans) != std::string::npos)
        {
            cout << s << endl;
        }
    }
}

void doIt(char input[], char output[], int i, int j)
{
    if (input[i] == '\0')
    {
        output[j] = '\0';
        keypad(output, 0);
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

int main()
{
    char input[10];
    char output[10];

    cin >> input;

    doIt(input, output, 0, 0);
}