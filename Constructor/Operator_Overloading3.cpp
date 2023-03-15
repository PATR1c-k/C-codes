// operator overloading of pre-increment and post increment

#include <iostream>
using namespace std;

class Integer
{
private:
    int a;

public:
    void setData(int x)
    {
        a = x;
    };

    void showData()
    {
        cout << "x: " << a << endl;
    };

    Integer operator++() // Preincrement
    {
        Integer i;
        i.a = ++a;
        return i;
    }

    Integer operator++(int) // post increment   //here int is argument only for showing difference to the compiler no other issue.
    {
        Integer i;
        i.a = a++;
        return i;
    }
};

int main(int argc, char const *argv[])
{
    Integer i1, i2;
    i1.setData(30);
    i1.showData();
    i2 = i1++;
    i1.showData();
    i2.showData();
    return 0;
}
