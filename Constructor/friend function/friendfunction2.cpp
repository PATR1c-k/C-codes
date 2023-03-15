// friend function benefit 1-> we can use friend function and use to make operations onprivate data of twoo different classes.
// private member are accessible from both classes by this function

#include <iostream>
using namespace std;

class B;
class A
{
private:
    int a = 2;

public:
    friend void fun(A, B);
};

class B
{
private:
    int b = 4;

public:
    friend void fun(A, B);
};

void fun(A o1, B o2)
{
    cout << "Sum of private integer of class a and b:" << (o1.a + o2.b);
};

int main(int argc, char const *argv[])
{
    A obj1;
    B obj2;
    fun(obj1, obj2);
    return 0;
}
