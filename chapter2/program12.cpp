// This program demonstrates a block of code.

#include <iostream>
using namespace std;

int main()
{
    int a,  b;
    cout << "Enter the first number: ";
    cin >> a;
    cout << "Enter the second number: ";
    cin >> b;

    if (a < b){
        cout << "The first number is less than the second.\n";
        cout << "Their difference is: " << b - a << "\n";
    } //HOLY CROW! They show you if, but they don't show you ELSE???
    //CHF, I have to add this.  
    else{
        cout << "The second number is less than the first.\n";
        cout << "Their difference is: " << a-b << "\n";
    }
     
     return 0;
}