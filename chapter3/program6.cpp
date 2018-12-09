#include <iostream>
using namespace std;

int main()
{
     int x, y;
     x = 10;
     y = 3;
     cout << x/y << "\n"; //Will display 3
     
     cout << x%y << "\n"; //Will display 1, the remainder of the integer division.

    x = 1;
    y = 2;
    cout << x / y << " " << x%y ; // will display 0 1
    return 0;
}