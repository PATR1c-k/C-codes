#include <iostream>
using namespace std;

class Complex
{
private:
    int a, b;

public:
    ~Complex();
};

Complex::~Complex()
{
    cout << "This is a last statement";
}

void fun()
{
    Complex obj;
}

int main(int argc, char const *argv[])
{
    fun();
    return 0;
}
