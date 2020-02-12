#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

bool myCompare(string a, string b)
{
    int sizeA = a.size() - 1;
    int sizeB = b.size() - 1;

    int i = 0, flag = 0;
    while (sizeA >= 0 && sizeB >= 0)
    {
        if (a[i] != b[i])
        {
            flag = 1;
        }

        i++;
        sizeA--;
        sizeB--;
    }

    if (flag == 0)
        return a > b;

    return b > a;
}

int main()
{
    int n;
    cin >> n;

    string arr[1000];

    for (int i = 0; i < n; i++)
    {
        string str;
        cin >> str;
        arr[i] = str;
    }

    sort(arr, arr + n, myCompare);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }
}
