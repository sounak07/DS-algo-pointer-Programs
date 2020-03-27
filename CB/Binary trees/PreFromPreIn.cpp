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

node *preTreeBuild(int pre[], int ino[], int s, int e)
{
    static int i = 0;

    if (s > e)
    {
        return NULL;
    }

    node *root = new node(pre[i]);

    int k = -1;

    for (int j = s; j <= e; j++)
    {
        if (ino[j] == pre[i])
        {
            k = j;
            break;
        }
    }

    i++;
    root->left = preTreeBuild(pre, ino, s, k - 1);
    root->right = preTreeBuild(pre, ino, k + 1, e);

    return root;
}

int main()
{
    int ino[] = {7, 4, 8, 3, 1, 5};
    int pre[] = {3, 4, 7, 8, 5, 1};

    node *root = preTreeBuild(pre, ino, 0, 5);

    BFS(root);
}