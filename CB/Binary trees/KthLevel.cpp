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

//PREORDER
void printPre(node *root)
{
    if (root == NULL)
    {
        return;
    }

    cout << root->data << " ";
    printPre(root->left);
    printPre(root->right);
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

void printKthLevel(node *root, int k)
{
    if (root == NULL)
    {
        return;
    }

    if (k == 1 && root != NULL)
    {
        cout << root->data << " ";
    }

    printKthLevel(root->left, k - 1);
    printKthLevel(root->right, k - 1);
}

void printAllLevels(node *root)
{
    int hei = height(root);
    for (int i = 1; i <= hei; i++)
    {
        printKthLevel(root, i);
        cout << endl;
    }
}

int main()
{
    node *root = BuildTree();
    // printPre(root);
    // cout << endl;

    // cout << height(root) << endl;

    // printKthLevel(root, 2);
    // cout << endl;
    printAllLevels(root);
}
