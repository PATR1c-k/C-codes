// Complex number input and output using friend function

#include <iostream>
using namespace std;

class Complex
{
private:
    int a, b;
    int a & = 342;

public:
    void setData(int x, int y)
    {
        a = x;
        b = y;
    };
    void showData()
    {
        cout << "a:" << a << " b:" << b;
    }

    friend ostream &operator<<(ostream &, Complex) {}
    friend istream &operator>>(ostream &, Complex &) {}
};

ostream &operator<<(ostream &dout, Complex C)
{
    cout << "a:" << C.a << " b:" << C.b;
    return dout;
};

istream &operator>>(istream &din, Complex &C)
{
    cin >> C.a >> C.b;
    return din;
}

int main(int argc, char const *argv[])
{
    Complex c1;
    cout << "Enter a complex number:" << endl;
    cin >> c1;
    cout << "You've entered:";
    cout << c1;

    return 0;
}
