#include <iostream>
using namespace std;

class Box
{
private:
    int l, b, h;

public:
    void setDimension(int length, int breadth, int height)
    {
        l = length;
        b = breadth;
        h = height;
    };

    void showDimension()
    {
        cout << "lenght:" << l << " bredth:" << b << " height" << h;
    }
};

int main(int argc, char const *argv[])
{
    Box *ptr, smallBox;
    ptr = &smallBox;

    ptr->setDimension(2, 3, 4);
    ptr->showDimension();
    return 0;
}
