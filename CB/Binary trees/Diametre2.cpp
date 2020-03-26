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

pair<int, int> diamt(node *root)
{
    pair<int, int> cc;

    if (root == NULL)
    {
        cc.first = 0;
        cc.second = 0;
        return cc;
    }

    pair<int, int> subleft, subright;
    subleft = diamt(root->left);
    subright = diamt(root->right);

    cc.first = max(subleft.first, subright.first) + 1;
    cc.second = max((subleft.first + subright.first), max(subleft.second, subright.second));

    return cc;
}

int main()
{
    node *root = BuildTree();
    pair<int, int> x;
    x = diamt(root);

    cout << x.second << endl;
}
