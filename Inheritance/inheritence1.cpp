#include <iostream>
using namespace std;

class A
{
private:
    int a;

protected:
    void setValue(int x)
    {
        a = x;
    };

    void showData()
    {
        cout << "Value of a is " << a;
    }
};

class B : public A
{
public:
    void setData(int k)
    {
        setValue(k);
    };
    void showValue()
    {
        showData();
    };
};

int main(int argc, char const *argv[])
{
    B obj;
    obj.setData(30);
    obj.showValue();
    return 0;
}
