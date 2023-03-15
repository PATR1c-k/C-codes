#include <iostream>
using namespace std;

struct book
{
    int bookid;
    string title;
    float price;
} b1, b2;

book input()
{
    book b;
    cout << "Enter bookid, title and price:" << endl;
    cin >> b.bookid >> b.title >> b.price;
    return (b);
}

void display(book b)
{
    cout << b.bookid << " " << b.title << " " << b.price << endl;
}

int main(int argc, char const *argv[])
{
    book b1;
    b1 = input();
    b2 = input();
    display(b1);
    display(b2);
    return 0;
}
