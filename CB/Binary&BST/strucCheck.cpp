#include <bits/stdc++.h>
using namespace std;

//input
//10 true 20 true 40 false false true 50 false false true 30 true 60 false false true 73 false false
// 10 true 20 true 40 false false true 50 false false true 30 true 60 false false true 73 false false
//ans - true

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

node *buildTree(string s)
{

    node *root;
    if (s == "true")
    {
        int d;
        cin >> d;

        root = new node(d);
        string st;
        cin >> st;

        if (st == "true")
        {
            root->left = buildTree(st);
        }

        string stt;
        cin >> stt;

        if (stt == "true")
        {
            root->right = buildTree(stt);
        }

        return root;
    }

    return NULL;
}

bool checkStructure(node *root1, node *root2)
{
    if (root1 != NULL && root2 == NULL)
    {
        return false;
    }

    if (root1 == NULL && root2 != NULL)
    {
        return false;
    }

    if (root2 == NULL && root1 == NULL)
    {
        return true;
    }

    if (root1 != NULL && root2 != NULL)
    {
        bool left = checkStructure(root1->left, root2->left);
        bool right = checkStructure(root1->right, root2->right);

        if (left && right)
        {
            return true;
        }
    }

    return false;
}

int main()
{
    node *root1 = buildTree("true");
    node *root2 = buildTree("true");

    bool ans = checkStructure(root1, root2);

    string s = (ans) ? "true" : "false";

    cout << s << endl;
}
