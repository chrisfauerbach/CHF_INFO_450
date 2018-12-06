// This program contains two functions
// main() and myfunc()

#include <iostream>
using namespace std;

//CHF - UGH, the example gives a SUPER poorly named function.
// Function names should tell you what the heck the thing 
// is doing!

void myfunc(); // myfunc's prototype


int main()
{
    cout << "In main()\n";
    myfunc(); // call myfunc()
    cout << "Back in main()\n";
    return 0;
}

void myfunc()
{
    cout << "Inside myfunc()\n";
}