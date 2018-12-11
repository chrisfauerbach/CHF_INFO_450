// Magic number: 3rd improvement

#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    int magic; // magic number
    int guess; // user's guess
    // CHF = This is fun!    TIP: What's the best approach?
    
    magic = rand();
    do{
      cout << "Enter your guess: ";
      cin >> guess;
      if (guess == magic){
          cout << "** Right **\n";
          cout << magic << " is the magic number.\n";
      }else{
          cout << "Sorry you're wrong.\n";
          if (guess > magic){
             cout << "Your guess is too high.\n";
          }else{
             cout << "Your guess is too low.\n";
          }
      }
    }while (magic != guess);
    
    return 0;
}