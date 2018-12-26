/* This program finds the prime numbers from 2 to 1000 */
#include <iostream>
using namespace std;

//CHALLENGE - On my mac, this program does not work as written in the book.
// There may be some erata, but that's cheating.  Two characters fixed
// this program.  What did I do?
// (This is in my github broken!)
// (email me:  chris@fauie.com )
int main()
{
   // int i;
   // int j;

    for (int i=2; i<=1000; i++){
        for (int j=2;j <= (i/j); j++)
        {
            if (!(i%j)){
               // cout << i << " is NOT prime (" << j << ").\n";
                break; // If factor found, not prime.  
            } 
            //cout << "   " << j << " " << "(i/j) " << (i/j) << ".\n";
            if(j > (i/j)) cout << i << " is prime.\n";
        }
    }
    return 0;
}

//CHF - Since I looked at this again, I forgot, but figured it out again.
// CHF - Personal hint: check the range on the line that's 16.