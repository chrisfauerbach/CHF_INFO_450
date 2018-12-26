// Demonstrate pointer arithmetic.
// CHF - This is also a SUPER important topic
//     - and the only reason that I don't mind 
//     - teaching you C++

#include <iostream>
using namespace std;

int main()
{
    int *i;
    int j[10];

    double *f;
    double g[10];
    // int x;

    i = j;
    f = g;
    for (int x = 0; x< 10; x++)
    {
       //  CHF - Before you run this, what will happen?
       cout << i+x << ' ' << f + x << "\n";
    }

    /* CHF -  This is a fun way of rewriting above 
           -   especially useful when we get to structs and classes. (Chapter 10 and on)
    */
    cout << "This is the latter: \n";
    i = j;
    f = g;
    for (int x = 0; x< 10; x++){
        cout << i++ << ' ' << f++ << "\n";
    }

    return 0;
}