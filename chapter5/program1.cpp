#include <iostream>
using namespace std;

int main()
{
    int sample[10]; // This reserves 10 integer elements
                    // CHF - Integer elements?  let's say this reservs
                    // 10 slots of memory. each the size of an integers memory footprint
                    // and creates an array variable called sample, in which each
                    // integer can be assigned...

    int t; // CHF - This better be used to represent time... otherwise, "t"?

    // load the array
    for (t = 0; t < 10; t++)
    {
        sample[t] = t; //CHF - Personal preference to ++ after the variable in a for loop
                       // placement matters in reading the variable to be used, but not here
    }

    // display the array
    for (t = 0; t < 10; t++)
    {
        cout << sample[t] << ' ';
    }
    cout << "\n"; // CHF - new line!
    return 0;
}