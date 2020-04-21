#include <bits/stdc++.h>
using namespace std;

//max heap code
void upHeapify(vector<int> &pq, int s)
{
    if (s == 0)
        return;

    int pInd = (s - 1) / 2;

    if (pq[pInd] < pq[s])
    {
        swap(pq[pInd], pq[s]);
        upHeapify(pq, pInd);
    }
    else
    {
        return;
    }
}

void insertElement(vector<int> &pq, int x)
{
    pq.push_back(x);
    upHeapify(pq, pq.size() - 1);
}

void display(vector<int> pq)
{
    for (int i = 0; i < pq.size(); i++)
    {
        cout << pq[i] << " ";
    }

    cout << endl;
}

void downHeapify(vector<int> &pq, int root)
{
    int c1 = 2 * root + 1;
    int c2 = 2 * root + 2;

    if (c1 > pq.size() && c2 > pq.size())
        return;

    int final = root;

    if (pq.size() >= c1 && pq[c1] > pq[final])
    {
        final = c1;
    }
    if (pq.size() >= c2 && pq[c2] > pq[final])
    {
        final = c2;
    }
    if (final == root)
    {
        return;
    }
    swap(pq[root], pq[final]);
    downHeapify(pq, final);
}

void downHeapify2(vector<int> &pq, int root, int heapSize)
{
    int c1 = 2 * root + 1;
    int c2 = 2 * root + 2;

    if (c1 > heapSize && c2 > heapSize)
        return;

    int final = root;

    if (heapSize > c1 && pq[c1] > pq[final])
    {
        final = c1;
    }
    if (heapSize > c2 && pq[c2] > pq[final])
    {
        final = c2;
    }
    if (final == root)
    {
        return;
    }
    swap(pq[root], pq[final]);
    downHeapify2(pq, final, heapSize);
}

void deleteo(vector<int> &pq, int sz)
{
    swap(pq[0], pq[sz]);
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

void heapSort(vector<int> &pq, int size)
{
    int heapSize = pq.size();
    buildHeapOptimised(pq);
    for (int i = size; i >= 0; i--)
    {
        swap(pq[0], pq[i]);
        heapSize--;
        downHeapify2(pq, 0, heapSize);
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
        insertElement(pq, x);
    }

    display(pq);
    deleteo(pq, pq.size() - 1);
    display(pq);
    deleteo(pq, pq.size() - 1);
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

    heapSort(pq, pq.size() - 1);
    display(pq);
}
