#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    // ****Using --> break****
    // here upto 3 will get printed
    cout<<"*******************************\n";
    for (int i = 0; i < 10; i++)
    {
        if (i==4)
        {
            break;
        }
        cout<<"Number sequence : "<<i<<endl;
    }
    
    // here upto 4 will get printed
    cout<<"*******************************\n";
    for (int i = 0; i < 10; i++)
    {
        cout<<"Number sequence : "<<i<<endl;
        if (i==4)
        {
            break;
        }
    }
    
    // ****continue****
    // 4 will not be printed
    cout<<"*******************************\n";
    for (int i = 0; i < 10; i++)
    {
        if (i==4)
        {
            continue;
        }
        cout<<i<<endl;   
    }
    
    cout<<"*******************************\n";
    // 4 will get printed
    for (int i = 0; i < 10; i++)
    {
        cout<<i<<endl;   
        if (i==4)
        {
            continue;
        }
    }


    return 0;
}
