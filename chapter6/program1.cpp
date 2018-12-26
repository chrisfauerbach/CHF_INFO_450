#include <iostream>
using namespace std;

int main()
{
    int balance;
    int *balptr;
    int value;

    balance = 3200;
    balptr = &balance;  // & == address
    value = *balptr;    // * == dereference
    cout << "balance is:                  " << value << "\n";

    // CHF , let's play with some pointers.. maybe i'm getting ahead.
    cout << "Balance address is:          " << balptr << "\n";
    cout << "Address of value:            " << &value << "\n";
    balance = 300;
    cout << "What's the value of *balptr? " << *balptr << "\n";
    return 0;
}