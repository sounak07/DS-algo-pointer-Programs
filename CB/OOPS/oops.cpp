#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

class Car
{
private:
    int price;

public:
    int model;
    char color[100];

    Car()
    {
        price = 1001;
        model = 0;
        strcpy(color, " ");
    }

    Car(int a, int b, const char *s)
    {
        price = a;
        model = b;
        strcpy(color, s);
    }

    Car(Car &X)
    {
        price = X.price;
        model = X.model;
        strcpy(color, X.color);
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
        cout << color << endl;
    }
};

int main()
{
    Car C;

    C.setPrice(110);

    cout << C.getPrice() << endl;

    Car D(10258, 2589, "Red");

    D.print();

    Car E(D);

    E.setPrice(1500);
    E.color[0] = 'C';

    E.print();
}