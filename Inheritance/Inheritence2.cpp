#include <iostream>
using namespace std;

class Array
{
private:
    int A[10];

public:
    void insert(int index, int value)
    {
        A[index] = value;
    }

    void show()
    {
        int size = sizeof(A);
        for (int i = 0; i < size; i++)
        {
            cout << A[i];
        }
    }
};

class Stack : protected Array
{
private:
    int top;

public:
    void push(int value)
    {
        insert(top, value);
    }

    void showStack()
    {
        show();
    }
};

int main(int argc, char const *argv[])
{

    Stack s1;
    s1.push(10);
    // s1.insert(2, 15); // this is causing ambigiuty as we know that in stack we have to push values one by one.
    return 0;
}
