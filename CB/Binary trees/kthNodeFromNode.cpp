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

void KthLevel(node *root, int k)
{
    if (root == NULL)
    {
        return;
    }

    if (k == 0 && root != NULL)
    {
        cout << root->data << endl;
    }

    KthLevel(root->left, k - 1);
    KthLevel(root->right, k - 1);
}

int kthNode(node *root, int k, int tar)
{
    if (root == NULL)
    {
        return -1;
    }

    if (root->data == tar)
    {
        KthLevel(root, k);
        return 1;
    }

    int L = kthNode(root->left, k, tar);
    int R = kthNode(root->right, k, tar);

    if (L != -1)
    {
        if (L == k)
            cout << root->data << endl;

        KthLevel(root->right, k - L - 1);
        return 1 + L;
    }

    if (R != -1)
    {
        if (R == k)
            cout << root->data << endl;

        KthLevel(root->left, k - R - 1);
        return 1 + R;
    }

    if (L == -1 && R == -1 && root->data != tar)
    {
        return -1;
    }
}

int main()
{
    node *root = buildBST();
    BFS(root);
    cout << endl;
    int k, tar;
    cin >> k >> tar;
    kthNode(root, k, tar);
}
