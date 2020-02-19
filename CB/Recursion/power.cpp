#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int fpower(int a, int b)
{
    if (b == 0)
    {
        return 1;
    }

    int small = fpower(a, b / 2);

    small *= small;
    if (b % 2 != 0)
    {
        return a * small;
    }

    return small;
}

int main()
{
    int a, b;
    cin >> a >> b;

    cout << fpower(a, b) << endl;
}
