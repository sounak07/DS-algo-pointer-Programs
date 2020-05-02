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

  if (d <= root->data)
  {
    root->left = insertBST(root->left, d);
  }
  else if (d > root->data)
  {
    root->right = insertBST(root->right, d);
  }

  return root;
}

node *buildTree(int n)
{
  node *root = NULL;
  int d;
  // cin >> d;

  while (n--)
  {
    cin >> d;
    root = insertBST(root, d);
  }
  return root;
}

void preOrder(node *root)
{
  if (root == NULL)
  {
    return;
  }

  cout << root->data << " ";
  preOrder(root->left);
  preOrder(root->right);
}

node *deleteNodeGiven(node *root, int k)
{
  if (root == NULL)
  {
    return NULL;
  }
  else if (k < root->data)
  {
    root->left = deleteNodeGiven(root->left, k);
    return root;
  }
  else if (root->data == k)
  {
    if (root->left == NULL && root->right == NULL)
    {
      delete root;
      return NULL;
    }

    if (root->left != NULL && root->right == NULL)
    {

      node *temp = root->left;
      delete root;
      return temp;
    }

    if (root->left == NULL && root->right != NULL)
    {

      node *temp = root->right;
      delete root;
      return temp;
    }

    node *temp = root->right;

    while (temp->left != NULL)
    {
      temp = temp->left;
    }

    swap(root->data, temp->data);
    root->right = deleteNodeGiven(root->right, temp->data);

    return root;
  }
  else
  {
    root->right = deleteNodeGiven(root->right, k);
    return root;
  }
}

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n;
    cin >> n;

    node *root = buildTree(n);

    // BFS(root);

    int m;
    cin >> m;

    int arr[m];
    for (int i = 0; i < m; i++)
    {
      cin >> arr[i];
    }

    node *newR = NULL;

    for (int i = 0; i < m; i++)
    {
      newR = deleteNodeGiven(root, arr[i]);
    }
    cout << endl;
    // BFS(root);
    preOrder(newR);

    cout << endl;
  }
}