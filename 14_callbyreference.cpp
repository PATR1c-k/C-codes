#include <iostream>
using namespace std;

int sum(int a, int b)
{
    int c = a + b;
    return c;
}

// This will not swapp cauze as making changes in a copy variable does not affect the formal parameters.
int swap(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
    return a, b;
}

// this will work as it working is on basis of pointer
// call by reference using Pointers
void swapByPointer(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

// call by reference using c++ reference variable
void swapreferenceVar(int &x, int &y)
{
    int temp = x;
    x = y;
    y = temp;
}

int main()
{
    int a = 47;
    int b = 50;
    cout << "The sum of 4 and 5 is : " << sum(4, 5) << endl;
    cout << "Before swapping : " << a << " and " << b << endl;
    swap(a, b);
    cout << "After swapping  : " << a << " and " << b << endl;

    // cout << "-------------------------------------------------" << endl;
    // cout << "Before swapping : " << a << " and " << b << endl;
    // swapByPointer(&a, &b);
    // cout << "After swapping  : " << a << " and " << b << endl;

    cout << "-------------------------------------------------" << endl;
    cout << "Before swapping : " << a << " and " << b << endl;
    swapreferenceVar(a, b);
    cout << "After swapping  : " << a << " and " << b << endl;

    return 0;
}