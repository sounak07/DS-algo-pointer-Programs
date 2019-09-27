#include <iostream>
#include <unordered_map>
#include <vector>
#include <string>
using namespace std;

int main()
{
  unordered_map<string, int> ourmap;
  ourmap["abc"] = 1;
  ourmap["abc1"] = 2;
  ourmap["abc2"] = 3;
  ourmap["abc3"] = 4;
  ourmap["abc4"] = 5;
  ourmap["abc5"] = 6;

  unordered_map<string, int>::iterator it = ourmap.begin();
  while (it != ourmap.end())
  {
    cout << "Key : " << it->first << " Value: " << it->second << endl;
    it++;
  }

  // find
  unordered_map<string, int>::iterator it2 = ourmap.find("abc");
  ourmap.erase(it2, it2 + 4);

  vector<int> v;
  v.push_back(1);
  v.push_back(2);
  v.push_back(3);
  v.push_back(4);
  v.push_back(5);

  vector<int>::iterator it1 = v.begin();
  while (it1 != v.end())
  {
    cout << *it1 << endl;
    it1++;
  }
}

#include <unordered_map>

void PairSum(int *a, int n)
{

  /* Don't write main().
     	* the input array is already passed as function argument.
     	* Don't need to return anything. Print the desired pairs in the function itself.
     	*/

  unordered_map<int, int> map;

  for (int i = 0; i < n; i++)
    map[a[i]]++;

  for (int i = 0; i < n; i++)
  {
    if (map.count(a[i]) > 0 && map.count(-a[i]) > 0)
    {

      int k = map.at(-a[i]) * map.at(a[i]);

      while (k--)
      {
        if (a[i] < 0)
        {
          cout << a[i] << " " << -a[i] << endl;
        }
        else if (-a[i] < 0)
        {
          cout << -a[i] << " " << a[i] << endl;
        }
      }

      map.erase(a[i]);
      map.erase(-a[i]);
    }
  }
}

// input1 - first array
// input2 - second array
// size1 - size of first array
// size2 - size of second array
#include <bits/stdc++.h>

void intersection(int a[], int b[], int s1, int s2)
{
  /* Don't write main().
     * Don't read input, it is passed as function argument.
     * Print the output and don't return it.
     * Taking input is handled automatically.
     */
  unordered_map<int, int> seen;
  //int s = max(s1,s2);

  for (int i = 0; i < s1; i++)
  {
    seen[a[i]]++;
  }

  for (int i = 0; i < s2; i++)
  {
    if (seen.find(b[i]) != seen.end())
    {

      int k = seen.at(b[i]);

      if (k > 0)
      {
        cout << b[i] << endl;

        seen[b[i]]--;
      }
    }
  }
}
