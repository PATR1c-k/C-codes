// Used private and public to remove data ambiguity.

#include <iostream>
using namespace std;

struct book
{
private:
    int bookid;
    string title;
    float price;

public:
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
    // b1.bookid = 23;      here data ambiguity was to be happened
    b1.display();
    b2.display();
    return 0;
}