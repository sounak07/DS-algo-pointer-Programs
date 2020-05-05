//SPOJ LOAD BALANCED

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    int arr[9000];
    int n;

    while (1)
    {

        int max_load = 0, avg = 0;
        int rounds = 0;
        cin >> n;

        if (n == -1)
            break;

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            avg += arr[i];
        }

        int actualPower = 0;
        int compId = 1;
        int balancedPower = 0;

        if (avg % n != 0)
        {
            max_load = -1;
        }
        else
        {
            avg /= n;

            for (int i = 0; i < n - 1; i++)
            {
                //to balance upto i part, how much power do i need to send to the 2nd part comp servers
                actualPower += arr[i];
                balancedPower = avg * compId;
                max_load = max(max_load, abs(actualPower - balancedPower));
                compId++;
            }
        }

        cout << max_load << endl;
    }
}