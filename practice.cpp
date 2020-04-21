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

    // ~node()
    // {
    //     delete left;
    //     delete right;
    // }
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

    if (root->data >= d)
        root->left = insertBST(root->left, d);
    else
        root->right = insertBST(root->right, d);

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

node *findSucce(node *root)
{
    if (root == NULL)
    {
        return NULL;
    }

    if (root->left == NULL)
    {
        return root;
    }

    return findSucce(root->left);
}

node *deleteNode(node *root, int d)
{
    if (root == NULL)
    {
        return NULL;
    }
    else if (root->data > d)
    {
        root->left = deleteNode(root->left, d);
        return root;
    }
    else if (root->data == d)
    {
        // when its a leaf node
        if (root->left == NULL && root->right == NULL)
        {
            delete root;
            return NULL;
        }

        //case of 1 children
        if (root->left != NULL && root->right == NULL)
        {
            node *temp1 = root->left;
            delete root;
            return temp1;
        }

        if (root->right != NULL && root->left == NULL)
        {
            node *temp = root->right;
            delete root;
            return temp;
        }

        //case of 2 children
        node *replace = findSucce(root->right);

        root->data = replace->data;
        root->right = deleteNode(root->right, replace->data);

        return root;
    }
    else
    {
        root->right = deleteNode(root->right, d);
        return root;
    }
}

int main()
{

    node *root = buildBST();

    int s;
    cin >> s;

    root = deleteNode(root, s);
    BFS(root);
}