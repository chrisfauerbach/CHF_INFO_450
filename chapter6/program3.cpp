#include <iostream>
using namespace std;

int main()
{
    int *p;
    int num;

    p = &num;

    // CHF - This is one of the most important programs so far.
    //       C++ made me bang my head on the desk because it took
    //       me a long time to realize/understand this 'natively'.
    *p = 100;
    cout << num << " ";
    (*p)++;
    cout << num << " ";
    (*p)--;
    cout << num << "\n";
    
    return 0;
}