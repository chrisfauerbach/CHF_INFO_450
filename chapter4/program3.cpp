// Divide the first number by the second

#include <iostream>
using namespace std;

int main()
{
    int a;
    int b;
    //CHF - Adding instructions
    cout << "We will divide the first number by the second.\n";
    cout << "Enter first number: ";
    
    //CHF - Hate it making it more readable
    // cin >> a >> b; //CHF Does this confuse anyone else? 
    cin >> a;
    cout << "Enter second number: ";
    cin >> b;

    if (b) {
        cout << a/b << "\n";
    }else{
        cout << "Can not divide by zero.\n";
    }
    return 0;

}