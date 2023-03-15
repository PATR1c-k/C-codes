#include <iostream>
using namespace std;

class A
{
    int a;

public:
    A(int k)
    {
        a = k;
    };

    void show()
    {
        cout << "a:" << a << endl;
    };

    ~A()
    {
        cout << "object A is closing" << endl;
    }
};

class B : public A
{
    int b;

public:
    B(int x, int y) : A(x)
    {
        b = y;
    };

    void show()
    {
        cout << "b:" << b << endl;
    };

    ~B()
    {
        cout << "Object B is closing" << endl;
    }
};

int main(int argc, char const *argv[])
{
    B obj1(2, 3);
    obj1.show();
    return 0;
}
