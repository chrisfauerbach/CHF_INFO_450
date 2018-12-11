// Magic number program.

#include <iostream>
#include <cstdlib>  // C Standard Library

using namespace std;

int main()
{
    int magic; // magic number
    int guess; // user's guess

    magic = rand(); // get a random number

    cout << "Enter your guess: ";
    cin >> guess;

    if (guess==magic)
    {
        cout << "** RIGHT !! **\n";

    }
    return 0;

}