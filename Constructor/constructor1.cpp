#include <iostream>
using namespace std;

class Complex
{
private:
    int a, b;

public:
    // Here both complexes are a example of constructor overloading
    Complex() // default constructor
    {
        a = 0, b = 0;
    };
    Complex(int x, int y) // prametarised constructor
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
    Complex c1, c2;
    c2 = Complex(3, 4);
    c1.show();
    c2.show();
    return 0;
}
