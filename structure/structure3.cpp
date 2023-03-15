// achieved encapsulation here.

#include <iostream>
using namespace std;

struct book
{
    int bookid;
    string title;
    float price;
    void input()
    {
        cout << "Enter bookid, title and price:" << endl;
        cin >> bookid >> title >> price;
    }

    void display()
    {
        cout << bookid << " " << title << " " << price << endl;
    }
} b1, b2;

int main(int argc, char const *argv[])
{
    book b1;
    b1.input();
    b2.input();
    b1.display();
    b2.display();
    return 0;
}
