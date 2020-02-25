#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll arr[500];

int main()
{
    int n;
    cin >> n;

    int q = 2;
    int x = 0;

    int len = 1;
    arr[x] = 1;
    int carry = 0;

    while (q <= n)
    {
        x = 0;
        while (x < len)
        {
            ll k = arr[x] * q + carry;
            arr[x] = k % 10;
            carry = k / 10;
            x++;
        }

        while (carry != 0)
        {
            arr[len] = carry % 10;
            carry = carry / 10;
            len++;
        }
        q++;
    }

    for (int i = len - 1; i >= 0; i--)
    {
        cout << arr[i];
    }

    cout << endl;
}