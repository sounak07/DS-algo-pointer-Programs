#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
  int n;
  cin >> n;

  int arr[100005];
  int ans = 0, pos = 0;
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
    ans = arr[i] ^ ans;
  }

  int temp = ans;

  while ((ans & 1) != 1)
  {
    ans = (ans << 1);
    pos++;
  }

  // pos = pos + 1;

  int mask = (1 << pos);

  int y = 0;

  for (int i = 0; i < n; i++)
  {
    int t = (arr[i] & mask);
    if (t > 0)
      y = (y ^ arr[i]);
  }

  int a = (temp ^ y);

  cout << min(y, a) << " " << max(y, a) << endl;
}