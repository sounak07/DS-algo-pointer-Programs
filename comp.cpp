#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

void doIt(char input[], int i)
{
  if (input[i] == '\0')
  {
    cout << input << endl;
    return;
  }

  for (int j = i; input[j] != '\0'; j++)
  {
    swap(input[j], input[i]);
    doIt(input, i + 1);
    //backtracking to restore the array
    swap(input[j], input[i]);
  }
}

int main()
{
  char input[100];
  cin >> input;

  doIt(input, 0);
}