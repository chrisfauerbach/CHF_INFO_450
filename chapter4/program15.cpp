#include <iostream>
using namespace std;

int main()
{
    // int x;
    for (int x=0;x<=100;x++)
    {
        if (x%2){ //EVEN number, mod 2 is 0. 0 == false, remember?
         
            continue;
        }
        //ODD number, mod 2 is 1. 1 == true, remember?
        cout << x << ' ';
    }
    return 0;
}