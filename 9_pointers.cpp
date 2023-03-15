#include <iostream>
using namespace std;

int main()
{
    // pointers --> datatype to hold address of other variable
    int a = 3;
    int *ptr = &a;

    cout << a << endl;
    cout << &a << endl;
    cout << ptr << endl;
    cout << *ptr << endl;
    cout << &ptr << endl;
    int &x = a;
    cout << x << endl;

    return 0;
}