// member function of one class can be friend function of another class.
#include <iostream>
using namespace std;

class A
{
    void func(){...};
    void foo(){...};
    void pratik(){...};
};

class B
{
    // friend void A::func(); // this is for making single friend functionto member function of other class.

    friend class A; // Now alll 3 member functions of A is friend of b now;
};

int main(int argc, char const *argv[])
{

    return 0;
}
