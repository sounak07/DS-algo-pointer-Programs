#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

class Car
{
private:
    int price;

public:
    int model;
    char *name;

    Car()
    {
        name = NULL;
        cout << "Calling" << endl;
    }

    Car()
    {
        cout << "Run" << endl;
    }

    Car(int a, int b, const char *s)
    {
        price = a;
        model = b;
        int l = strlen(s) + 1;
        name = new char[l];
        strcpy(name, s);
    }

    Car(Car &X)
    {
        price = X.price;
        model = X.model;
        //deep copy so self defined copy constr
        int l = strlen(X.name) + 1;
        name = new char[l];
        strcpy(name, X.name);
    }

    ~Car()
    {
        cout << "Destroying " << name << endl;
        //dest only deletes static vars , we need to delete dynamics by ourselfs
        if (name != NULL)
        {
            delete[] name;
        }
    }

    void operator=(Car &X)
    {
        price = X.price;
        model = X.model;
        //deep copy so self defined copy constr
        int l = strlen(X.name) + 1;
        name = new char[l];
        strcpy(name, X.name);
    }

    void setPrice(int p)
    {
        if (p > 1000)
            price = p;
        else
            price = 1000;
    }

    int getPrice()
    {
        return price;
    }

    void print()
    {
        cout << price << endl;
        cout << model << endl;
        cout << name << endl;
    }
};

int main()
{
    Car C(1000, 2587, "BMW");

    Car D(2000, 2547, "AUDI");

    Car *F = new Car(15478, 2369, "Bugati");

    C = D; // copy assignment operator
    D.name[0] = 'O';
    D.print();
    cout << endl;
    C.print();

    // F.setPrice()

    delete F;
}