#include <iostream>
//Apparently since conio.h isn't standard, it's not on the mac
// what the heck book author?
#include <conio.h>

int main()
{
    int i;
    
    //print numbers until a key is pressed.
    for (i=0;!kbhit();i++){
        cout << i << ' ';
    }
    cout << "\n";
    return 0;
}