#include <iostream>
using namespace std;

class Complex
{
private:
    int a, b; // a and b are instance memeber veriable

public:
    // set_data , show_data, add are all instance member function
    void set_data(int, int);

    void show_data()
    {
        cout << a << " " << b;
    };

    Complex add(Complex c)
    {
        Complex temp;
        temp.a = a + c.a;
        temp.b = b + c.b;
        return temp;
    }
};

void Complex::set_data(int x, int y)
{
    a = x;
    b = y;
}

int main(int argc, char const *argv[])
{
    Complex c1;
    Complex c2;
    Complex c3;
    c1.set_data(2, 30);
    c2.set_data(3, 20);
    // c1.show_data();
    // c2.show_data();
    c3 = c1.add(c2);
    c3.show_data();
    return 0;
}
