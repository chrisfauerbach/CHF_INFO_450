// This program prints the alphabet in reverse order
//Cause they're wanting to show .. ummm..  well
// it's almost pointer math.. we'll get to that.
// Really it's because a char is effectively
// an integer.  Find an ASCII table!

#include <iostream>
using namespace std;

int main()
{
    // char letter;
    for (char letter='Z';letter >= 'A'; letter --){
        cout << letter << " ";
    }
    cout << "\n";
    return 0;

}