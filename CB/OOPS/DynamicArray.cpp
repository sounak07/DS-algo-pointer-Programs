#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

class DynamicArray
{

private:
    int *data;
    int capacity;
    int nextIndex;

public:
    DynamicArray()
    {
        data = new int[5];
        capacity = 5;
        nextIndex = 0;
    }

    DynamicArray(DynamicArray const &D)
    {
        // cout << "called";

        this->data = new int[D.capacity];
        for (int i = 0; i < D.nextIndex; i++)
        {
            this->data[i] = D.data[i];
        }

        capacity = D.capacity;
        nextIndex = D.nextIndex;
    }

    void operator=(DynamicArray const &D)
    {
        // this->data = D.data;    //shallow copy

        //deep copy
        // cout << "called";
        this->data = new int[D.capacity];
        for (int i = 0; i < D.nextIndex; i++)
        {
            this->data[i] = D.data[i];
        }

        capacity = D.capacity;
        nextIndex = D.nextIndex;
    }

    void add(int element)
    {
        if (capacity == nextIndex)
        {
            int *arr = new int[2 * capacity];
            for (int i = 0; i < capacity; i++)
            {
                arr[i] = data[i];
            }

            delete[] data;
            data = arr;
            capacity = 2 * capacity;
        }

        data[nextIndex] = element;
        nextIndex++;
    }

    int getElement(int index) const
    {
        if (index < nextIndex)
            return data[index];
        else
            return -1;
    }

    void addElement(int element, int i)
    {
        if (i < nextIndex)
        {
            data[i] = element;
        }
        else if (i == nextIndex)
        {
            data[i] = element;
            nextIndex++;
        }
        else
        {
            return;
        }
    }

    void print() const
    {
        for (int i = 0; i < nextIndex; i++)
        {
            cout << data[i] << " ";
        }
        cout << endl;
    }
};

int main()
{
    DynamicArray d1;

    d1.add(10);
    d1.add(20);
    d1.add(30);
    d1.add(40);
    d1.add(50);
    d1.add(60);
    d1.add(60);

    // d1.print();

    DynamicArray d2(d1);
    DynamicArray d3;

    d3 = d1;

    d2.addElement(100, 2);

    d2.print();
    d3.print();
    d1.print();
}