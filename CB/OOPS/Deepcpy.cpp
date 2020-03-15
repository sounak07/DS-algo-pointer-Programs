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

    // Car()
    // {
    //   price = 1001;
    //   model = 0;
    //   strcpy(color, " ");
    // }

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

    Car D(C);

    cout << endl;
    D.name[0] = 'G';
    D.print();
    cout << endl;
    C.print();
}