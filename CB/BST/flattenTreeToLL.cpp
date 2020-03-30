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

class LinkedL
{
public:
    node *head;
    node *tail;
};

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

LinkedL buildLL(node *root)
{
    LinkedL ans;
    if (root == NULL)
    {
        ans.head = NULL;
        ans.tail = NULL;
        return ans;
    }

    if (root->left == NULL && root->right == NULL)
    {
        ans.head = ans.tail = root;
        return ans;
    }

    if (root->left != NULL && root->right == NULL)
    {
        LinkedL leftAdd = buildLL(root->left);
        leftAdd.tail->right = root;
        ans.head = leftAdd.head;
        ans.tail = root;
        return ans;
    }

    if (root->left == NULL && root->right != NULL)
    {
        LinkedL rightAdd = buildLL(root->right);
        root->right = rightAdd.head;
        ans.head = root;
        ans.tail = rightAdd.tail;
        return ans;
    }

    LinkedL leftAdd = buildLL(root->left);
    LinkedL rightAdd = buildLL(root->right);

    leftAdd.tail->right = root;
    root->right = rightAdd.head;

    ans.head = leftAdd.head;
    ans.tail = rightAdd.tail;

    return ans;
}

int main()
{
    node *root = buildBST();

    BFS(root);

    LinkedL headHigh = buildLL(root);

    while (headHigh.head != NULL)
    {
        cout << headHigh.head->data << " --> ";
        headHigh.head = headHigh.head->right;
    }
    cout << endl;
}