//  This program illustrates the if statement.

#include <iostream>
using namespace std;

int main()
{
     int a, b;
     cout << "Enter first number: ";
     cin >> a;
     cout << "Enter second number: ";
     cin >> b;
     //CHF - I don't like the next line, but it's OK
     // my opinion is going to probably get annoying.
     if (a<b) cout << "First number is less than second.\n";
/*
     if (a<b){
        cout << "First number is less than second.";
     } 
*/
     return 0;
}