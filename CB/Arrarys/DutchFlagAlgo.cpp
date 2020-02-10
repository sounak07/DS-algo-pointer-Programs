#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int search(int *arr, int n)
{
    int low = 0;
    int mid = 0;
    int high = n - 1;

    while (mid <= high)
    {
        if (arr[mid] == 1)
        {
            mid++;
        }
        else if (arr[mid] == 2)
        {
            swap(arr[mid], arr[high]);
            high--;
        }
        else
        {
            swap(arr[mid], arr[low]);
            mid++;
            low++;
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;
}

int main()
{
    int arr[] = {1, 2, 1, 1, 0, 1, 0, 2};

    search(arr, 8);
}