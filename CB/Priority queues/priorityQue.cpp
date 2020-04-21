#include <bits/stdc++.h>
using namespace std;

//11
// 100 40 435 2 9 20 10 20 35 38 45 -> 435 45 100 35 40 20 10 2 20 9 38
//delete -> 100 45 38 35 40 20 10 2 20 9

void upHeapify(vector<int> &pq, int pos)
{
    int root = (pos - 1) / 2;

    if (root < 0)
        return;

    if (pq[root] < pq[pos])
    {
        swap(pq[root], pq[pos]);
        upHeapify(pq, root);
    }
    else
    {
        return;
    }
}

void display(vector<int> pq)
{
    for (int i = 0; i < pq.size(); i++)
    {
        cout << pq[i] << " ";
    }

    cout << endl;
}

void insertIntoHeap(vector<int> &pq, int x)
{
    pq.push_back(x);
    upHeapify(pq, pq.size() - 1);
}

void downHeapify(vector<int> &pq, int root)
{
    int c1 = 2 * root + 1;
    int c2 = 2 * root + 2;

    if (c1 > pq.size() && c2 > pq.size())
    {
        return;
    }

    int final = root;

    if (pq.size() > c1 && pq[c1] > pq[final])
    {
        final = c1;
    }

    if (pq.size() > c2 && pq[c2] > pq[final])
    {
        final = c2;
    }

    if (final == root)
        return;

    swap(pq[final], pq[root]);
    downHeapify(pq, final);
}

void deleteHeapo(vector<int> &pq)
{
    swap(pq[0], pq[pq.size() - 1]);
    pq.pop_back();

    downHeapify(pq, 0);
}

void buildHeapOptimised(vector<int> &heap)
{
    for (int i = heap.size() - 1; i >= 0; i--)
    {
        downHeapify(heap, i);
    }
}

int main()
{
    vector<int> pq;

    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        insertIntoHeap(pq, x);
    }

    display(pq);

    deleteHeapo(pq);
    display(pq);
    deleteHeapo(pq);
    display(pq);

    vector<int> heap;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        heap.push_back(x);
    }

    buildHeapOptimised(heap);
    display(heap);
}