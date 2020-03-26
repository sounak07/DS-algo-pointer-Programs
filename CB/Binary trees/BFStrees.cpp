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

node *BuildTree()
{
    int d;
    cin >> d;

    if (d == -1)
        return NULL;

    node *root = new node(d);
    root->left = BuildTree();
    root->right = BuildTree();
    return root;
}

void BFS(node *root)
{
    queue<node *> list;

    list.push(root);

    while (list.size() != 0)
    {
        node *start = list.front();
        list.pop();

        cout << "R :" << start->data << endl;

        if (start->left)
        {
            cout << "L :" << start->left->data << " ";
            list.push(start->left);
        }
        else
        {
            cout << "L :-1";
        }

        if (start->right)
        {
            cout << " R :" << start->right->data << " ";
            list.push(start->right);
        }
        else
        {
            cout << " R :-1";
        }
        cout << endl;
    }
    return;
}

int main()
{
    node *root = BuildTree();
    // printPre(root);
    // cout << endl;

    // cout << height(root) << endl;

    // printKthLevel(root, 2);
    // cout << endl;

    BFS(root);
}
