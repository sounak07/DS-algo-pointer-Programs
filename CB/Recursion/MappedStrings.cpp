#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

void doit(char *input, int i, char *output, int j, int length)
{
    if (input[i] == '\0')
    {
        output[j] = '\0';
        cout << output << endl;
        return;
    }

    ll sd = input[i] - '0';
    ll dd;
    if (i + 1 < length)
    {
        dd = (input[i] - '0') * 10 + (input[i + 1] - '0');
    }
    else
    {
        dd = sd;
    }

    output[j] = sd + 64;
    doit(input, i + 1, output, j + 1, length);

    if (dd >= 10 && dd <= 26)
    {
        output[j] = dd + 64;
        doit(input, i + 2, output, j + 1, length);
    }
}

int main()
{
    char input[1000];
    cin >> input;

    int size = strlen(input);

    char output[1000];

    doit(input, 0, output, 0, size);
}
