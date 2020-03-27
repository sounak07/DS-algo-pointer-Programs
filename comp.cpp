#include <bits/stdc++.h>
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

  ~node()
  {
    delete left;
    delete right;
  }
};

void BFS(node *root)
{

  queue<node *> list;
  list.push(root);
  list.push(NULL);

  while (list.size() != 0)
  {
    node *fron = list.front();

    if (fron == NULL)
    {
      cout << endl;
      list.pop();
      if (list.size() != 0)
      {
        list.push(NULL);
      }
    }
    else
    {
      cout << fron->data << " ";
      list.pop();

      if (fron->left)
      {
        list.push(fron->left);
      }

      if (fron->right)
      {
        list.push(fron->right);
      }
    }
  }
}

node *insertBST(node *root, int d)
{
  if (root == NULL)
  {
    return new node(d);
  }

  if (root->data >= d)
    root->left = insertBST(root->left, d);
  else
    root->right = insertBST(root->right, d);

  return root;
}

node *buildBST()
{
  int d;
  cin >> d;

  node *root = NULL;
  while (d != -1)
  {
    root = insertBST(root, d);
    cin >> d;
  }

  return root;
}

int main()
{

  node *root = buildBST();

  BFS(root);
}