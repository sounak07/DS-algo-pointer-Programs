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

int global_max = INT_MIN;

int maxSum2Nodes(node *root)
{
    if (root == NULL)
    {
        return 0;
    }

    if (root->left == NULL && root->right == NULL)
    {
        return root->data;
    }

    int left = maxSum2Nodes(root->left);
    int right = maxSum2Nodes(root->right);

    int c1 = root->data;
    int c2 = right + root->data + left;
    int c3 = right + root->data;
    int c4 = left + root->data;

    global_max = max(global_max, max(c1, max(c2, max(c3, c4))));

    return max(left, max(right, 0)) + root->data;
}

int main()
{

    node *root = buildBST();

    BFS(root);

    maxSum2Nodes(root);

    cout << global_max << endl;
}