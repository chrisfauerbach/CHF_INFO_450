#include <iostream>
using namespace std;

int main()
{
    int x;
    //CHF Adding instructions for the uninformed.
    cout << "Will loop until you type 123\n";
    
    for (x=0; x!=123; )
    {
        cout << "Enter a number: ";
        cin >> x;

    }
    //CHF Whoah. Check what happens when you type in a non integer string
    return 0;
}