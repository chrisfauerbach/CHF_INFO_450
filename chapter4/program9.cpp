// Demonstrate the switch using a simple "help" program.
#include <iostream>
using namespace std;

int main()
{
    int choice;
    cout << "Help on: \n\n";
    cout << "1. for\n";
    cout << "2. if\n";
    cout << "3. switch\n";
    cout << "Enter choice (1-3): ";
    cin >> choice;
    cout << "\n";

    switch(choice)
    {
        case 1:
            cout << "for is C++'s most versatile loop.\n";
            cout << "for (init; while condition; post condition){}\n"; //CHF ADDED
            break;
        case 2:
            cout << "if is c++ conditional branch statement\n";
            cout << "if (condition){}\n"; //CHF Added.
            break;
        case 3:
            cout << "switch is c++'s multiway branch statement.\n";
            cout << "switch(number): \n";//CHF Added for information.
            cout << "    case [number]:\n";
            cout << "        <<code>>\n";
            cout << "        [break]\n";

            cout << "    [default]:\n";
            cout << "        <<code>>\n";
            cout << "        [break]\n";
            break;   
        default:
            cout << "You must enter a number between 1 and 3, inclusive.\n";
    }
    return 0;

}