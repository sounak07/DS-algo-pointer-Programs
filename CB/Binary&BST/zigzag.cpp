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

node *build(string s)
{
    if (s == "true")
    {
        int d;
        cin >> d;
        node *root = new node(d);
        string l;
        cin >> l;
        if (l == "true")
        {
            root->left = build(l);
        }
        string r;
        cin >> r;
        if (r == "true")
        {
            root->right = build(r);
        }
        return root;
    }
    return NULL;
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

void zigZag(node *root)
{
    if (root == NULL)
        return;
    stack<node *> curr;
    stack<node *> next;

    curr.push(root);

    bool parity = true;

    while (curr.size() != 0)
    {
        node *ttop = curr.top();
        curr.pop();

        if (ttop)
        {
            cout << ttop->data << " ";

            if (parity == true)
            {
                if (ttop->left)
                    next.push(ttop->left);
                if (ttop->right)
                    next.push(ttop->right);
            }
            else
            {
                if (ttop->right)
                    next.push(ttop->right);
                if (ttop->left)
                    next.push(ttop->left);
            }
        }

        if (curr.empty())
        {
            parity = !parity;
            swap(curr, next);
        }
    }
}

int main()
{
    node *root = build("true");

    BFS(root);

    zigZag(root);
    cout << endl;
    return 0;
}
