#include <iostream>
#include <cstring>
using namespace std;

void f1();
/*  CHF 

Global arrays are initialized at startup. Meaning if they're changed.
then the value stays changed.
In f1, the array s is created every time the function is called.

*/ 

int main()
{
    f1();
    f1();
    return 0;
}

void f1(){
    char s[80] = "This is a test.";

    cout << s << "\n";

    strcpy(s, "CHANGED");

    cout << s << "\n";
}
