// using cin to read a string from the keyboard

#include <iostream>
using namespace std;

int main()
{
    char str[80];
    cout << "Enter a string: ";
    cin >> str; // read string from keyboard.
                // CHF - How do we ensure less than 80 characters?
    cout << "Here is your string: ";
    cout << str;
    cout << "\n";

    return 0;
}