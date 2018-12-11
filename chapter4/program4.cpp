// Magic number program: 2nd improvement


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

    if (guess==magic){
        cout << "** RIGHT !! **\n";
        cout << magic << " is the magic number.\n";

    }else
    {
        cout << "Sorry, you are wrong.\n";
        
        if (guess > magic ){
          cout << "Your guess is too high.\n";
        }else{
          cout << "Your guess is too low.\n";
        }
    }
    return 0;

}
