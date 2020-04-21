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

class Custom
{
public:
    bool hasP;
    bool hasQ;
    node *ans;

    Custom()
    {
        ans = NULL;
        hasP = false;
        hasQ = false;
    }
};

node *insertBST(node *root, int d)
{
    if (root == NULL)
    {
        return new node(d);
    }

    if (root->data >= d)
    {
        root->left = insertBST(root->left, d);
    }
    else
    {
        root->right = insertBST(root->right, d);
    }

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

Custom *LCA(node *root, int p, int q)
{
    if (root == NULL)
    {
        return NULL;
    }

    Custom *leftAns = LCA(root->left, p, q);
    Custom *rightAns = LCA(root->right, p, q);

    //case where we found lca in left sub tree
    if (leftAns != NULL && leftAns->ans != NULL)
    {
        return leftAns;
    }

    //case where we found lca in right sub tree

    if (rightAns != NULL && rightAns->ans != NULL)
    {
        return rightAns;
    }

    Custom *res = new Custom();

    //case when p and q are present in left and right either way
    if (rightAns != NULL && leftAns != NULL)
    {
        res->ans = root;
        res->hasP = true;
        res->hasQ = true;

        return res;
    }

    //case where p is root and q is present any subsequent subtree
    if (root->data == p)
    {
        res->hasP = true;
        res->hasQ = (rightAns) ? rightAns->hasQ : false || (leftAns) ? leftAns->hasQ : false;
        if (res->hasP && res->hasQ)
            res->ans = root;

        return res;
    }
    //case where q is root and p is present any subsequent subtree
    else if (root->data == q)
    {
        res->hasQ = true;
        res->hasP = (rightAns) ? rightAns->hasP : false || (leftAns) ? leftAns->hasP : false;
        if (res->hasP && res->hasQ)
            res->ans = root;

        return res;
    }

    //case where lca is not found but p or q might be present
    if (leftAns != NULL)
        return leftAns;
    else if (rightAns != NULL)
        return rightAns;

    return NULL;
}

int main()
{
    node *root = buildBST();
    BFS(root);
    cout << endl;
    int p, q;
    cin >> p >> q;

    Custom *res = LCA(root, p, q);

    if (res != NULL)
        cout << res->ans->data << endl;
}
