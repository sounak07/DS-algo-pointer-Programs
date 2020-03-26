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

void printIn(node *root)
{
    if (root == NULL)
    {
        return;
    }

    printIn(root->left);
    cout << root->data << " ";
    printIn(root->right);
}

void printPost(node *root)
{
    if (root == NULL)
    {
        return;
    }

    printPost(root->left);
    printPost(root->right);
    cout << root->data << " ";
}

int main()
{
    node *root = BuildTree();
    printPre(root);
    cout << endl;

    printIn(root);
    cout << endl;

    printPost(root);
    cout << endl;
}
