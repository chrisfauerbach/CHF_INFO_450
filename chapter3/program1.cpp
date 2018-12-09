#include <iostream>
using namespace std;
//This is to show the scope of the variables.
// If the scope were outside of functions, you'd see
// -199 printed out twice.  Essentially, they're
// two different variables.

void func();

int main()
{
  int x; //local to main

  x = 10;
  func();  //CHF - it pains me to call a function called func. 
 
  cout <<  "In main: " << x << "\n"; // Displays 10 
                     //CHF Adding the new line and more words.

  return 0;
}

void func()
{
    int x; // local to func()
    x = -199;
    cout << "In func: " << x << "\n";
}