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

void printRange(node *root, int k1, int k2, vector<int> &res)
{
    if (root == NULL)
    {
        return;
    }

    if (root->data >= k1 && root->data <= k2)
    {
        res.push_back(root->data);
    }

    printRange(root->left, k1, k2, res);
    printRange(root->right, k1, k2, res);
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

        int k1, k2;
        cin >> k1 >> k2;

        cout << "# Preorder : ";
        preOrder(root);
        cout << endl;

        vector<int> res;

        cout << "# Nodes within range are : ";
        printRange(root, k1, k2, res);

        sort(res.begin(), res.end());

        for (int x : res)
        {
            cout << x << " ";
        }
        cout << endl;
    }
}