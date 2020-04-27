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

node *buildTree()
{
    int d;
    cin >> d;

    node *root = new node(d);

    int c;
    cin >> c;

    if (c == 0)
    {
        return root;
    }
    else if (c == 2)
    {

        root->left = buildTree();
        root->right = buildTree();
    }
    else if (c == 1)
    {
        root->left = buildTree();
    }

    return root;
}

void sumFind(node *root, int k, int &sum)
{
    if (root == NULL)
    {
        return;
    }

    if (k == 0)
    {
        sum += root->data;
    }

    sumFind(root->left, k - 1, sum);
    sumFind(root->right, k - 1, sum);
}

int main()
{
    node *root = buildTree();

    int k;
    cin >> k;

    // BFS(root);

    int sum = 0;

    sumFind(root, k, sum);

    cout << sum << endl;
}