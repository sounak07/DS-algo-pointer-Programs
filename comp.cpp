#include <iostream>
#include <queue>
using namespace std;

class node
{
public:
  int data;
  node *left;
  node *right;

  node(int d)
  {
    data = d;
    left = NULL;
    right = NULL;
  }
};

node *build(string s)
{
  if (s == "true")
  {
    int d;
    cin >> d;
    node *root = new node(d);
    string l;
    cin >> l;
    if (l == "true")
    {
      root->left = build(l);
    }
    string r;
    cin >> r;
    if (r == "true")
    {
      root->right = build(r);
    }
    return root;
  }
  return NULL;
}

pair<int, bool> isHeightBalancedOptimised(node *root)
{
  // Write your code here
  pair<int, bool> ans;

  if (root == NULL)
  {
    ans.first = 0;
    ans.second = true;
    return ans;
  }

  pair<int, bool> leftT = isHeightBalancedOptimised(root->left);
  pair<int, bool> rightT = isHeightBalancedOptimised(root->right);

  ans.first = max(leftT.first, rightT.first) + 1;

  if (abs(leftT.first - rightT.first) <= 1 && leftT.second && rightT.second)
  {
    ans.second = true;
  }
  else
  {
    ans.second = false;
  }

  return ans;
}

int main()
{
  node *root = build("true");

  cout << boolalpha << isHeightBalancedOptimised(root).second << endl;

  return 0;
}
