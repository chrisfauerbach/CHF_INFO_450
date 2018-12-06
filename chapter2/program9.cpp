/* This program demonstrates the \n character, which
generates a new line character.
*/
//CHF - See again, we've been doing this since the beginning. 
// We're WAY ahead of the book!

#include <iostream>
using namespace std;

int main()
{
     cout << "one\n";
     cout << "two\n";
     cout << "three";  //CHF - See ? SNEAKY!!!
     cout << "four\n";
     return 0;
}