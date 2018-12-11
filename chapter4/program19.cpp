// Magic number: Final improvement
// CHF -  Super funny.  Their final improved version
// took out a lot of the niceness of the version 3!!  
// I kept it here. 
#include <iostream>
#include <cstdlib>
using namespace std;

void play(int magic); // magic is better than m. Lazy coder.
int get_rand(int min, int max);

int main()
{
    int option; // user's input
    int magic; // magic number

    magic = get_rand(1,1000); // rand() with a min max. I thnk it works ;)
    do{
      cout << "1. Get a new magic number (between 1 and 1,000)\n"; // CHF - Cutting down the range.
      cout << "2. Play\n";
      cout << "3. Quit\n";
      do {
        cout << "Enter your choice: ";
        cin >> option;
      } while(option<1 || option>3);

      switch(option){
          case 1:
            magic = get_rand(1,1000); // rand();
            break;
          case 2:
            play(magic);
            //CHF They don't have this next line, but makes sense to me.
            magic = get_rand(1,1000);
            break;
          case 3:
            cout << "Goodbye.\n";
            break;
      }
    }while (option!=3);
    return 0;
}
// Play the game.
void play(int magic){
      int t;
      int  guess;// Why the heck change it from guess to x?

      for (t=0;t<100;t++){
          cout << "Guess the number: ";
          cin >> guess;
      if (guess == magic){
          cout << "** Right **\n";
          cout << magic << " is the magic number.\n";
          return;
      }else{
          cout << "Sorry you're wrong.\n";
          if (guess > magic){
             cout << "Your guess is too high.\n";
          }else{
             cout << "Your guess is too low.\n";
          }
          cout << "Only " << (100 - t - 1) << " guesses left.\n";
      }
    }
    cout << "You've used up all your guesses. Try it again.\n";
    
}

int get_rand(int min, int max){
    int value;
    int delta = max - min;
    // cout << "Looking from min to max with delta " << min << " " << max << " " << delta << "\n";
    value = min + ( rand()%delta);
    if (value < min || value > max){
      cout << "Uh oh, came up with " << value << " with min: " << min << " and max: " << max << "\n";
      return min;
    }
    return value;
}