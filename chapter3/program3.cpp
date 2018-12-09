#include <iostream>
using namespace std;

/*
This program shows the difference between
signed and unsigned integers.
*/

int main()
{
    short int i; // a signed short int
    short unsigned int j; // an unsigned integer

    j = 60000;
    i = j;
    cout << "i: " << i << " j: " << j << "\n"; //CHF little clarification

    return 0;
}