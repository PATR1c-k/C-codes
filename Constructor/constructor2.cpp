// concept of copy constructor

// if we make a constructor the compiler dont make one is true but onlly default one.
// it makes default as well as copy constructor so if we make defaultconstructor in class it will not make default but it will make a corresponding copy constructor
// and if we made both then compiler will not make default as well as copy constructor correponding to it.
#include <iostream>
using namespace std;

class Complex
{
private:
    int a, b;

public:
    Complex()
    {
        a = 0, b = 0;
    };

    Complex(int x)
    {
        a = x;
        b = 0;
    }

    Complex(Complex &c)
    {
        a = c.a;
        b = c.b;
    };

    Complex(int x, int y)
    {
        a = x;
        b = y;
    };
    void show()
    {
        cout << "a:" << a << " b:" << b << endl;
    }
};

int main(int argc, char const *argv[])
{
    Complex c1, c2(3, 4), c3(c2);
    c1.show();
    c2.show();
    c3.show();
    return 0;
}
