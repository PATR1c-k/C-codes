#include <iostream>
using namespace std;

// class Complex // Complex(class) is just a decleration and dosent take any memory
// {

// private:
//     int a, b;

// public:
//     void set_data(int x, int y)
//     {
//         a = x;
//         b = y;
//     }

//     void show_data()
//     {
//         cout << a << " " << b;
//     }
// };
//

class Complex // Complex(class) is just a decleration and dosent take any memory
{
private:
    int a, b;

public:
    void set_data(int, int);

    void show_data()
    {
        cout << a << " " << b;
    }
};

// This is also a genueine method
void Complex::set_data(int x, int y) // Complex:: is a member ship label
{
    a = x;
    b = y;
}

int main(int argc, char const *argv[])
{
    Complex c1; // c1 is an object
    c1.set_data(2, 30);
    c1.show_data();
    return 0;
}
