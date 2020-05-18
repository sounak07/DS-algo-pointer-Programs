#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(string s1, string s2)
{
  int n1 = s1.length();
  int n2 = s2.length();

  int dp[1000][1000] = {0};

  string ans = "";

  for (int i = 1; i <= n1; i++)
  {
    for (int j = 1; j <= n2; j++)
    {
      if (s1[i - 1] == s2[j - 1])
      {
        dp[i][j] = dp[i - 1][j - 1] + 1;
      }
      else
      {
        dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
      }
    }
  }

  int i = n1, j = n2;

  while (i > 0 && j > 0)
  {

    if (dp[i][j - 1] == dp[i - 1][j] && dp[i][j - 1] < dp[i][j] && dp[i - 1][j] < dp[i][j])
    {
      ans += s1[i - 1];
      i--;
      j--;
    }
    else
    {
      if (dp[i][j] == dp[i][j - 1])
      {

        j--;
      }
      else
      {
        i--;
      }
    }
  }

  for (int i = ans.length() - 1; i >= 0; i--)
  {
    cout << ans[i];
  }

  cout << endl;
}

int main()
{
  string s1, s2;
  cin >> s1 >> s2;

  solve(s1, s2);
}
