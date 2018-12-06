// A program that demonstrates mul()

#include <iostream>

using namespace std;

int mul(int x, int y); //mul()s prototype
                        //CHF - See, NOW they get it right.
                        //      Do they think you can't learn
                        //      two things at once?

  

int main()
{
    int answer;
    answer = mul(10,11); // Assign return value...
    cout << "The answer is: " << answer << "\n";
    return 0;
}
//This function returns a value
//CHF - Ayup, it does!
// The book says something about NOT declaring
// a return type, and it defaulting to int.
// dont do that. Be explicit.
int mul(int x, int y)
{
   return x*y;
}
 