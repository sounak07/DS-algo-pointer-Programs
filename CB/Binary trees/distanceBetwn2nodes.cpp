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

node *insertBST(node *root, int x)
{
    if (root == NULL)
    {
        return new node(x);
    }

    if (root->data >= x)
    {
        root->left = insertBST(root->left, x);
    }
    else
    {
        root->right = insertBST(root->right, x);
    }

    return root;
}

node *buildBST()
{
    int x;
    cin >> x;
    node *root = NULL;

    while (x != -1)
    {
        root = insertBST(root, x);
        cin >> x;
    }

    return root;
}

class lcaD
{
public:
    node *res;
    bool hasP;
    bool hasQ;

    lcaD()
    {
        res = NULL;
        hasP = false;
        hasQ = false;
    }
};

lcaD *LCA(node *root, int p, int q)
{
    if (root == NULL)
        return NULL;

    lcaD *leftT = LCA(root->left, p, q);
    lcaD *rightT = LCA(root->right, p, q);

    if (leftT != NULL && leftT->res != NULL)
    {
        return leftT;
    }

    if (rightT != NULL && rightT->res != NULL)
    {
        return rightT;
    }

    lcaD *ans = new lcaD();

    if (rightT != NULL && leftT != NULL)
    {
        ans->res = root;
        ans->hasP = true;
        ans->hasQ = true;

        return ans;
    }

    if (root->data == p)
    {
        ans->hasP = true;
        ans->hasQ = (rightT) ? rightT->hasQ : false || (leftT) ? leftT->hasQ : false;
        if (ans->hasQ && ans->hasP)
        {
            ans->res = root;
        }

        return ans;
    }

    if (root->data == p)
    {
        ans->hasP = true;
        ans->hasQ = (rightT) ? rightT->hasQ : false || (leftT) ? leftT->hasQ : false;
        if (ans->hasQ && ans->hasP)
        {
            ans->res = root;
        }

        return ans;
    }

    if (root->data == q)
    {
        ans->hasQ = true;
        ans->hasP = (rightT) ? rightT->hasP : false || (leftT) ? leftT->hasP : false;
        if (ans->hasP && ans->hasQ)
        {
            ans->res = root;
        }

        return ans;
    }

    if (rightT != NULL)
    {
        return rightT;
    }
    else
    {
        return leftT;
    }

    return NULL;
}

int findDistance(node *root, int d, int level)
{
    if (root == NULL)
    {
        return -1;
    }

    if (root->data == d)
        return level;

    int left = findDistance(root->left, d, level + 1);
    if (left == -1)
    {
        return findDistance(root->right, d, level + 1);
    }

    return left;
}

int main()
{

    node *root = buildBST();

    BFS(root);

    int p, q;
    cin >> p >> q;

    lcaD *lca = LCA(root, p, q);

    cout << lca->res->data << endl;

    int level = 0;

    int d1 = findDistance(lca->res, p, level);
    int d2 = findDistance(lca->res, q, level);

    cout << d1 + d2 << endl;
}