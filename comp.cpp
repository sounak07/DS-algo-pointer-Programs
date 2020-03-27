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

node *BalancedTreeMaking(int arr[], int s, int e)
{
  if (s > e)
  {
    return NULL;
  }

  int mid = (s + e) / 2;

  int data = arr[mid];

  node *root = new node(data);
  root->left = BalancedTreeMaking(arr, s, mid - 1);
  root->right = BalancedTreeMaking(arr, mid + 1, e);

  return root;
}

int main()
{
  int arr[] = {2, 3, 7, 8, 1, 5, 9};

  node *root = BalancedTreeMaking(arr, 0, 6);

  BFS(root);
}