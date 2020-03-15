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
    const int tyres;

    Car() : tyres(4)
    {
        name = NULL;
        cout << "Calling" << endl;
    }

    Car(int a, int b, const char *s, int t) : tyres(t) // initialisation list to initialise const vars
    {
        price = a;
        model = b;
        int l = strlen(s) + 1;
        name = new char[l];
        strcpy(name, s);
    }

    Car(Car &X) : tyres(X.tyres) //initialisation list
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

    //copy assigment
    void operator=(const Car &X)
    {
        price = X.price;
        model = X.model;
        int l = strlen(X.name) + 1;
        name = new char[l];
        strcpy(name, X.name);
    }

    //const parameters are those which need not to be updated at all
    void setPrice(const int p)
    {
        if (p > 1000)
            price = p;
        else
            price = 1000;
    }

    // const functions are those that do not update data members of class and can be called const
    void start() const
    {
        cout << "Starting Car" << endl;
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
        cout << tyres << endl;
    }
};

int main()
{
    Car C(1000, 2587, "BMW", 4);

    Car D(2000, 2547, "AUDI", 4);

    Car *F = new Car(15478, 2369, "Bugati", 4);

    C = D; // copy assignment operator
    D.name[0] = 'O';
    D.print();
    cout << endl;
    C.print();

    F->print();

    delete F;
}