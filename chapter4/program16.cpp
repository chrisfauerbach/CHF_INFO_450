#include <iostream>
using namespace std;

int main()
{
    // int t;
    cout << "loops from 0 to 9 , not to 100;\n";
    for (int t=0;t<100;t++)
    {
        if(t==10) break; //Breaking my rule? not sure if its a rule.
        cout << t << ' ';
    }

    return 0;
}