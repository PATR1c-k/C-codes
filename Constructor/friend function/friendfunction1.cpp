// Funfact -> where should friend function declare in class public or private
// Answer is anywhere . we can declare friend function anywhere in class.

#include <iostream>
using namespace std;

class Complex
{
private:
    int a, b;

public:
    void setData(int x, int y)
    {
        a = x;
        b = y;
    };

    void showData()
    {
        cout << "a:" << a << " b:" << b << endl;
    };
    friend void func1(Complex); // this must be done to define friend function
};

// this friend function is not a memmber function but can still access private members of the class.
void func1(Complex c) // this is friend function
{
    cout << "sum of a and b is " << (c.a + c.b);
}

int main(int argc, char const *argv[])
{
    Complex c1;
    c1.setData(2, 3);
    c1.showData();
    func1(c1);
    return 0;
}
