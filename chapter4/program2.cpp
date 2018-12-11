// Magic number program. 
// First improvement

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

    }else
    {
        cout << "Sorry, you are wrong.";
        // and apparently we aren't going 
        // to tell them what the number was
    }
    return 0;

}