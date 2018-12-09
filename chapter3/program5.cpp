// An example that uses variable initialization
//CHF I've probably complained about this
// and shortcutted the lessons.

#include <iostream>
using namespace std;

void total(int x);

int main()
{
    cout << "Computing summation of 5.\n";
    total(5);
    cout << "Computing summation of 6.\n";
    total(6);
    return 0;

}
void total(int x)
{
    int sum = 0;//initialize to 0
    int i, count;

    for (i=1; i<=x; i++)
    {
        sum = sum + i;
        for (count=0; count < 10; count ++){  //  This is just for spacing. 
            cout << '.';
        }
        //  Maybe we should have just: cout << "\t\t"; or
        //                             cout << "............... "; 
        cout << "The current sum is " << sum << "\n";
    }

}