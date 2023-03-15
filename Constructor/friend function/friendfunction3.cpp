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
        cout << "a:" << a << " b:" << b;
    }

    friend Complex operator+(Complex, Complex);
};

Complex operator+(Complex obj1, Complex obj2)
{
    Complex temp;
    temp.a = obj1.a + obj2.a;
    temp.b = obj1.b + obj2.b;
    return temp;
};

int main(int argc, char const *argv[])
{
    Complex c1, c2, c3;
    c1.setData(2, 3);
    c2.setData(4, 5);
    c3 = operator+(c1, c2);
    c3.showData();
    return 0;
}
