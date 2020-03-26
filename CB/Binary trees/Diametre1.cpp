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

node *BuildTree()
{
    int d;
    cin >> d;

    if (d == -1)
        return NULL;

    node *root = new node(d);
    root->left = BuildTree();
    root->right = BuildTree();
    return root;
}

int height(node *root)
{
    if (root == NULL)
    {
        return 0;
    }

    int l = 1 + height(root->left);
    int r = 1 + height(root->right);

    return max(l, r);
}

int diametre(node *root)
{
    if (root == NULL)
    {
        return 0;
    }

    int h1 = height(root->left);
    int h2 = height(root->right);
    int y = diametre(root->left);
    int z = diametre(root->right);

    return max(h1 + h2, max(y, z));
}

int main()
{
    node *root = BuildTree();
    int x = diametre(root);

    cout << x << endl;
}
