#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

class Complex
{

    int real;
    int img;

public:
    Complex()
    {
        real = 0;
        img = 0;
    }

    Complex(int r, int i)
    {
        real = r;
        img = i;
    }

    void setReal(const int r)
    {
        real = r;
    }

    void setImaginary(const int i)
    {
        img = i;
    }

    int getReal()
    {
        return real;
    }

    int getImaginary()
    {
        return img;
    }

    void operator+(Complex &X)
    {
        real += X.real;
        img += X.img;
    }

    void operator!()
    {
        img *= -1;
    }

    int operator[](string s)
    {
        if (s == "real")
        {
            return real;
        }
        else
        {
            return img;
        }
    }

    void print()
    {
        if (img > 0)
            cout << real << " + " << img << "i" << endl;
        else
            cout << real << " - " << -img << "i" << endl;
    }
};

// void operator>>(istream &is, Complex &c)
// {
//   int r, i;
//   cin >> r >> i;
//   c.setReal(r);
//   c.setImaginary(i);
// }

// void operator<<(ostream &os, Complex &c)
// {
//   c.print();
// }

istream &operator>>(istream &is, Complex &c)
{
    int r, i;
    cin >> r >> i;
    c.setReal(r);
    c.setImaginary(i);
    return is;
}

ostream &operator<<(ostream &os, Complex &c)
{
    c.print();
    return os;
}

int main()
{
    Complex C1;
    Complex C2(2, 3);
    Complex C3;

    C3.setImaginary(8);
    C3.setReal(5);

    C2.print();
    C3.print();

    cout << endl;

    C2 + C3;
    C2.print();
    C3.print();

    !C2;

    C2.print();

    cout << C2["real"] << endl;

    cout << endl;
    Complex d1, d2;
    cin >> d1 >> d2;
    cout << d1 << d2;
}