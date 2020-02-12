#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

bool myCompare(pair<string, int> &a, pair<string, int> &b)

{

  if (a.second == b.second)
  {
    return a.first < b.first;
  }

  return a.second > b.second;
}

int main()
{
  int n, t;
  cin >> n;
  cin >> t;

  pair<string, int> arr[1000];

  string s;
  int a;

  for (int i = 0; i < t; i++)
  {
    cin >> s >> a;
    arr[i].first = s;
    arr[i].second = a;
  }

  sort(arr, arr + t, myCompare);

  for (int i = 0; i < t; i++)
  {
    if (arr[i].second >= n)
      cout << arr[i].first << " " << arr[i].second << endl;
  }
}
