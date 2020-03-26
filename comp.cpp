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

node *buildTree()
{
  int d;
  cin >> d;
  if (d == -1)
  {
    return NULL;
  }

  node *root = new node(d);
  root->left = buildTree();
  root->right = buildTree();

  return root;
}

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

int sumTree(node *root)
{
  if (root == NULL)
  {
    return 0;
  }

  if (root->left == NULL && root->right == NULL)
  {
    return root->data;
  }

  int t = root->data;
  int x = sumTree(root->left);
  int y = sumTree(root->right);

  root->data = x + y;

  return root->data + t;
}

int main()
{
  node *root = buildTree();
  sumTree(root);
  BFS(root);
}