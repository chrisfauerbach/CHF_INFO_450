//This program will not work right.
// CHF - LOL.  Good way to start it out 
#include <iostream>
using namespace std;

int main()
{
    double x;
    double y;
    int *p;
    x = 123.23;
    p = (int *) &x; //Use 'cast' to assign double * to int *
                    // CHF - This is funny.  What happens?
    y = *p; // What will this do?
    cout << y << "\n";  //   What will this print? 

    return 0;
}