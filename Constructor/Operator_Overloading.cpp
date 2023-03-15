#include <iostream>
using namespace std;

class Complex
{
private:
    int a, b;

public:
    void setvalue(int x, int y)
    {
        a = x;
        b = y;
    }

    void show()
    {
        cout << "a:" << a << " b:" << b << endl;
    }

    // This is good
    // Complex add(Complex c)
    // {
    //     Complex temp;
    //     temp.a = a + c.a;
    //     temp.b = b + c.b;
    //     return temp;
    // }

    // This is cool
    Complex operator+(Complex c)
    {
        Complex temp;
        temp.a = a + c.a;
        temp.b = b + c.b;
        return temp;
    }
};

int main(int argc, char const *argv[])
{
    Complex c1, c2, c3;
    c1.setvalue(3, 4);
    c2.setvalue(5, 8);
    c3 = c1 + c2; // Here we have called operator overloading function
    // c3 = c1.operator+(c2);  //This is also valid
    c1.show();
    c3.show();
    return 0;
}
