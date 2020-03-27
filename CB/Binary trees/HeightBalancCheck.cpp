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

pair<int, bool> checkTree(node *root)
{
    pair<int, bool> ans;
    if (root == NULL)
    {
        ans.first = 0;
        ans.second = true;

        return ans;
    }

    pair<int, bool> leftDet, rightDet;
    leftDet = checkTree(root->left);
    rightDet = checkTree(root->right);

    ans.first = max(leftDet.first, rightDet.first) + 1;
    if (abs(leftDet.first - rightDet.first) <= 1 && leftDet.second && rightDet.second)
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
    node *root = buildTree();
    pair<int, bool> res = checkTree(root);

    if (res.second)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}