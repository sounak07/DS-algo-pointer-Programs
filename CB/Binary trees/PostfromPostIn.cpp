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

node *postTreeBuild(int post[], int ps, int pe, int ino[], int is, int ie)
{
    if (ps > pe || is > ie)
    {
        return NULL;
    }

    int data = post[pe];
    node *root = new node(data);
    int k = -1;
    for (int i = is; i <= ie; i++)
    {
        if (ino[i] == data)
        {
            k = i;
            break;
        }
    }

    int isl = is;
    int iel = k - 1;
    int isr = k + 1;
    int ier = ie;
    int psl = ps;
    //TO GET CHILDREN BASICALLY WHICH IN FRONT
    int pel = iel - isl + psl;
    int psr = pel + 1;
    int per = pe - 1;

    root->left = postTreeBuild(post, psl, pel, ino, isl, iel);
    root->right = postTreeBuild(post, psr, per, ino, isr, ier);

    return root;
}

int main()
{
    int ino[] = {7, 4, 8, 3, 1, 5};
    int post[] = {7, 8, 4, 1, 5, 3};

    node *root = postTreeBuild(post, 0, 5, ino, 0, 5);

    BFS(root);
}