#include <iostream>
using namespace std;

class A
{
public:
    void f1(){};
    void f2(){};
    void f3(){};
    void shiftGear(){};
};

class B : public A
{
public:
    void f1(){};      // method overriding on f1
    void f2(int x){}; // method hiding  (kind of method overloading hi hai.)
};

int main(int argc, char const *argv[])
{
    B obj;
    obj.f1();        // B
    obj.f2();        // error becoz f2 find at class b but note match totally
    obj.f2(4);       // B
    obj.f3();        // A
    obj.shiftGear(); // A

    return 0;
}
