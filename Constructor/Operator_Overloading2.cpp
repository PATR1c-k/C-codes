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

    Complex operator+(Complex c)
    {
        Complex temp;
        temp.a = a + c.a;
        temp.b = b + c.b;
        return temp;
    }

    Complex operator-()
    {
        Complex temp;
        temp.a = -a;
        temp.b = -b;
        return temp;
    }
};

int main(int argc, char const *argv[])
{
    Complex c1, c2;
    c1.setvalue(2, 3);
    // c2 = c1.operator-(); // this is also good
    c2 = -c1; // But this is cool
    c1.show();
    c2.show();
    return 0;
}
