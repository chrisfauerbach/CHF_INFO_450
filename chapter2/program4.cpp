// This program converts gallons to liters
// Using a floating point number.

#include <iostream>
using namespace std;

int main()
{
    double gallons ,liters; // The example code declares two variables
                         // on one line.  I personally hate it.

    cout << "Enter number of gallons: ";
    cin >> gallons;  //This inputs from the user 
                     // Try to enter something that ISNT an integer

    liters = gallons * 3.7854; // Convert to liters

    cout << "Liters: " << liters << "\n";
    return 0;
}