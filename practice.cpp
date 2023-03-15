#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int A[] = {};
    int n, temp;
    //     cin >> n;
    //     for (int i = 0; i < n; i++)
    //     {
    //         cin >> temp;
    //         A[i] = temp;
    //     }

    //     cout << A[0] << endl;
    //     cout << A[1] << endl;
    //     cout << A[2] << endl;
    //     cout << A[3] << endl;

    //     for (int i = n - 1; i >= 0; i--)
    //     {
    //         cout << A[i] << " ";
    //     }
    //     return 0;
    // }

    for (int a = 0; a < n; a++)
    {
        int b;
        cin >> b;
        A[a] = b;
    }

    for (int a = n - 1; a >= 0; a -= 1)
    {
        cout << A[a] << " ";
    }

    return 0;
}