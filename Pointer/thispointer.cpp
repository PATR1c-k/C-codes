#include <iostream>
using namespace std;

class Box
{
private:
    int l, b, h;

public:
    void setDimension(int l, int b, int h)
    {
        this->l = l;
        this->b = b;
        this->b = h;
    };

    void showDimension()
    {
        cout << "lenght:" << l << " bredth:" << b << " height:" << h;
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
