#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

class Fraction
{

private:
    int num;
    int deno;

public:
    Fraction(int num, int deno)
    {
        this->num = num;
        this->deno = deno;
    }

    //this-> num can also be used
    void print()
    {
        cout << num << " / " << deno << endl;
    }

    int gisamDisam(int a, int b)
    {
        if (a == 0)
        {
            return b;
        }

        return gisamDisam(b % a, a);
    }

    void simply()
    {
        int gcd = gisamDisam(num, deno);
        num = num / gcd;
        deno = deno / gcd;
    }

    Fraction add(Fraction const &F)
    {
        Fraction f(0, 0);
        f.num = F.num * deno + F.deno * num;
        f.deno = F.deno * deno;

        f.simply();

        return f;
    }

    Fraction operator+(Fraction const &F)
    {
        Fraction f(0, 0);
        f.num = F.num * deno + F.deno * num;
        f.deno = F.deno * deno;

        f.simply();

        return f;
    }

    Fraction operator*(Fraction const &F)
    {
        Fraction f(0, 0);
        f.num = F.num * num;
        f.deno = F.deno * deno;

        f.simply();

        return f;
    }

    //pre ++i like
    //return can be void as well if we dont plan to assign it to any other var
    Fraction &operator++()
    {
        num = num + deno;
        simply();

        return *this;
    }

    Fraction operator++(int)
    {
        Fraction f(num, deno);
        f.simply();
        num = num + deno;
        simply();

        return f;
    }

    //& so that it doesnot create copy so no temp buffer and *this returns whole-object
    Fraction &operator+=(Fraction const &F)
    {
        num = F.num * deno + F.deno * num;
        deno = F.deno * deno;
        simply();

        return *this;
    }

    bool operator==(Fraction const &F)
    {
        return (num == F.num && deno == F.deno);
    }
};

int main()
{
    Fraction f1(10, 3);
    Fraction f2(5, 2);

    // Fraction f3 = f1 + f2;
    // Fraction f4 = f1 * f2;

    // f3.print();
    // f4.print();

    // if (f1 == f2)
    // {
    //   cout << "Equal" << endl;
    // }
    // else
    // {
    //   cout << "No Equal" << endl;
    // }

    // Fraction f3 = ++(++f1);
    // f1.print();
    // f3.print();

    // Fraction f3 = f1++;
    // f1.print();
    // f3.print();

    (f1 += f2) += f2;

    f1.print();
    f2.print();
}
